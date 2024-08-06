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
#define STATE_COUNT 169
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 164
#define ALIAS_COUNT 0
#define TOKEN_COUNT 143
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_COMMA = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  sym_escape_sequence = 8,
  sym_number = 9,
  sym_true = 10,
  sym_false = 11,
  sym_null = 12,
  sym_comment = 13,
  anon_sym_COLON = 14,
  anon_sym_EQ = 15,
  anon_sym_PLUS_EQ = 16,
  aux_sym__string_content_token1 = 17,
  sym_unquoted_string = 18,
  aux_sym_unquoted_path_token1 = 19,
  anon_sym_DOT = 20,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 21,
  aux_sym_multiline_string_token1 = 22,
  anon_sym_DOLLAR_LBRACE_QMARK = 23,
  anon_sym_DOLLAR_LBRACE = 24,
  anon_sym_include = 25,
  anon_sym_required = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_url = 29,
  anon_sym_file = 30,
  anon_sym_classpath = 31,
  anon_sym_DOT2 = 32,
  anon_sym_ns = 33,
  anon_sym_nano = 34,
  anon_sym_nanos = 35,
  anon_sym_nanosecond = 36,
  anon_sym_nanoseconds = 37,
  anon_sym_us = 38,
  anon_sym_micro = 39,
  anon_sym_micros = 40,
  anon_sym_microsecond = 41,
  anon_sym_microseconds = 42,
  anon_sym_ms = 43,
  anon_sym_milli = 44,
  anon_sym_millis = 45,
  anon_sym_millisecond = 46,
  anon_sym_milliseconds = 47,
  anon_sym_s = 48,
  anon_sym_second = 49,
  anon_sym_seconds = 50,
  anon_sym_m = 51,
  anon_sym_minute = 52,
  anon_sym_minutes = 53,
  anon_sym_h = 54,
  anon_sym_hour = 55,
  anon_sym_hours = 56,
  anon_sym_d = 57,
  anon_sym_day = 58,
  anon_sym_days = 59,
  anon_sym_w = 60,
  anon_sym_week = 61,
  anon_sym_weeks = 62,
  anon_sym_mo = 63,
  anon_sym_month = 64,
  anon_sym_months = 65,
  anon_sym_y = 66,
  anon_sym_year = 67,
  anon_sym_years = 68,
  anon_sym_B = 69,
  anon_sym_b = 70,
  anon_sym_byte = 71,
  anon_sym_bytes = 72,
  anon_sym_kB = 73,
  anon_sym_kilobyte = 74,
  anon_sym_kilobytes = 75,
  anon_sym_MB = 76,
  anon_sym_megabyte = 77,
  anon_sym_megabytes = 78,
  anon_sym_GB = 79,
  anon_sym_gigabyte = 80,
  anon_sym_gigabytes = 81,
  anon_sym_TB = 82,
  anon_sym_terabyte = 83,
  anon_sym_terabytes = 84,
  anon_sym_PB = 85,
  anon_sym_petabyte = 86,
  anon_sym_petabytes = 87,
  anon_sym_EB = 88,
  anon_sym_exabyte = 89,
  anon_sym_exabytes = 90,
  anon_sym_ZB = 91,
  anon_sym_zettabyte = 92,
  anon_sym_zettabytes = 93,
  anon_sym_YB = 94,
  anon_sym_yottabyte = 95,
  anon_sym_yottabytes = 96,
  anon_sym_K = 97,
  anon_sym_k = 98,
  anon_sym_Ki = 99,
  anon_sym_KiB = 100,
  anon_sym_kibibyte = 101,
  anon_sym_kibibytes = 102,
  anon_sym_M = 103,
  anon_sym_Mi = 104,
  anon_sym_MiB = 105,
  anon_sym_mebibyte = 106,
  anon_sym_mebibytes = 107,
  anon_sym_G = 108,
  anon_sym_g = 109,
  anon_sym_Gi = 110,
  anon_sym_GiB = 111,
  anon_sym_gibibyte = 112,
  anon_sym_gibibytes = 113,
  anon_sym_T = 114,
  anon_sym_t = 115,
  anon_sym_Ti = 116,
  anon_sym_TiB = 117,
  anon_sym_tebibyte = 118,
  anon_sym_tebibytes = 119,
  anon_sym_P = 120,
  anon_sym_p = 121,
  anon_sym_Pi = 122,
  anon_sym_PiB = 123,
  anon_sym_pebibyte = 124,
  anon_sym_pebibytes = 125,
  anon_sym_E = 126,
  anon_sym_e = 127,
  anon_sym_Ei = 128,
  anon_sym_EiB = 129,
  anon_sym_exbibyte = 130,
  anon_sym_exbibytes = 131,
  anon_sym_Z = 132,
  anon_sym_z = 133,
  anon_sym_Zi = 134,
  anon_sym_ZiB = 135,
  anon_sym_zebibyte = 136,
  anon_sym_zebibytes = 137,
  anon_sym_Y = 138,
  anon_sym_Yi = 139,
  anon_sym_YiB = 140,
  anon_sym_yobibyte = 141,
  anon_sym_yobibytes = 142,
  sym_document = 143,
  aux_sym__value = 144,
  sym_object = 145,
  sym_pair = 146,
  sym_array = 147,
  sym_string = 148,
  sym_path = 149,
  sym_value = 150,
  sym__pair_separator = 151,
  aux_sym__string_content = 152,
  sym_unquoted_path = 153,
  sym_multiline_string = 154,
  sym_substitution = 155,
  sym_include = 156,
  sym__resource_name = 157,
  sym_unit = 158,
  aux_sym_document_repeat1 = 159,
  aux_sym_document_repeat2 = 160,
  aux_sym_array_repeat1 = 161,
  aux_sym_path_repeat1 = 162,
  aux_sym_unquoted_path_repeat1 = 163,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [aux_sym__string_content_token1] = "_string_content_token1",
  [sym_unquoted_string] = "unquoted_string",
  [aux_sym_unquoted_path_token1] = "unquoted_path_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_multiline_string_token1] = "multiline_string_token1",
  [anon_sym_DOLLAR_LBRACE_QMARK] = "${\?",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_include] = "include",
  [anon_sym_required] = "required",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_url] = "url",
  [anon_sym_file] = "file",
  [anon_sym_classpath] = "classpath",
  [anon_sym_DOT2] = ".",
  [anon_sym_ns] = "ns",
  [anon_sym_nano] = "nano",
  [anon_sym_nanos] = "nanos",
  [anon_sym_nanosecond] = "nanosecond",
  [anon_sym_nanoseconds] = "nanoseconds",
  [anon_sym_us] = "us",
  [anon_sym_micro] = "micro",
  [anon_sym_micros] = "micros",
  [anon_sym_microsecond] = "microsecond",
  [anon_sym_microseconds] = "microseconds",
  [anon_sym_ms] = "ms",
  [anon_sym_milli] = "milli",
  [anon_sym_millis] = "millis",
  [anon_sym_millisecond] = "millisecond",
  [anon_sym_milliseconds] = "milliseconds",
  [anon_sym_s] = "s",
  [anon_sym_second] = "second",
  [anon_sym_seconds] = "seconds",
  [anon_sym_m] = "m",
  [anon_sym_minute] = "minute",
  [anon_sym_minutes] = "minutes",
  [anon_sym_h] = "h",
  [anon_sym_hour] = "hour",
  [anon_sym_hours] = "hours",
  [anon_sym_d] = "d",
  [anon_sym_day] = "day",
  [anon_sym_days] = "days",
  [anon_sym_w] = "w",
  [anon_sym_week] = "week",
  [anon_sym_weeks] = "weeks",
  [anon_sym_mo] = "mo",
  [anon_sym_month] = "month",
  [anon_sym_months] = "months",
  [anon_sym_y] = "y",
  [anon_sym_year] = "year",
  [anon_sym_years] = "years",
  [anon_sym_B] = "B",
  [anon_sym_b] = "b",
  [anon_sym_byte] = "byte",
  [anon_sym_bytes] = "bytes",
  [anon_sym_kB] = "kB",
  [anon_sym_kilobyte] = "kilobyte",
  [anon_sym_kilobytes] = "kilobytes",
  [anon_sym_MB] = "MB",
  [anon_sym_megabyte] = "megabyte",
  [anon_sym_megabytes] = "megabytes",
  [anon_sym_GB] = "GB",
  [anon_sym_gigabyte] = "gigabyte",
  [anon_sym_gigabytes] = "gigabytes",
  [anon_sym_TB] = "TB",
  [anon_sym_terabyte] = "terabyte",
  [anon_sym_terabytes] = "terabytes",
  [anon_sym_PB] = "PB",
  [anon_sym_petabyte] = "petabyte",
  [anon_sym_petabytes] = "petabytes",
  [anon_sym_EB] = "EB",
  [anon_sym_exabyte] = "exabyte",
  [anon_sym_exabytes] = "exabytes",
  [anon_sym_ZB] = "ZB",
  [anon_sym_zettabyte] = "zettabyte",
  [anon_sym_zettabytes] = "zettabytes",
  [anon_sym_YB] = "YB",
  [anon_sym_yottabyte] = "yottabyte",
  [anon_sym_yottabytes] = "yottabytes",
  [anon_sym_K] = "K",
  [anon_sym_k] = "k",
  [anon_sym_Ki] = "Ki",
  [anon_sym_KiB] = "KiB",
  [anon_sym_kibibyte] = "kibibyte",
  [anon_sym_kibibytes] = "kibibytes",
  [anon_sym_M] = "M",
  [anon_sym_Mi] = "Mi",
  [anon_sym_MiB] = "MiB",
  [anon_sym_mebibyte] = "mebibyte",
  [anon_sym_mebibytes] = "mebibytes",
  [anon_sym_G] = "G",
  [anon_sym_g] = "g",
  [anon_sym_Gi] = "Gi",
  [anon_sym_GiB] = "GiB",
  [anon_sym_gibibyte] = "gibibyte",
  [anon_sym_gibibytes] = "gibibytes",
  [anon_sym_T] = "T",
  [anon_sym_t] = "t",
  [anon_sym_Ti] = "Ti",
  [anon_sym_TiB] = "TiB",
  [anon_sym_tebibyte] = "tebibyte",
  [anon_sym_tebibytes] = "tebibytes",
  [anon_sym_P] = "P",
  [anon_sym_p] = "p",
  [anon_sym_Pi] = "Pi",
  [anon_sym_PiB] = "PiB",
  [anon_sym_pebibyte] = "pebibyte",
  [anon_sym_pebibytes] = "pebibytes",
  [anon_sym_E] = "E",
  [anon_sym_e] = "e",
  [anon_sym_Ei] = "Ei",
  [anon_sym_EiB] = "EiB",
  [anon_sym_exbibyte] = "exbibyte",
  [anon_sym_exbibytes] = "exbibytes",
  [anon_sym_Z] = "Z",
  [anon_sym_z] = "z",
  [anon_sym_Zi] = "Zi",
  [anon_sym_ZiB] = "ZiB",
  [anon_sym_zebibyte] = "zebibyte",
  [anon_sym_zebibytes] = "zebibytes",
  [anon_sym_Y] = "Y",
  [anon_sym_Yi] = "Yi",
  [anon_sym_YiB] = "YiB",
  [anon_sym_yobibyte] = "yobibyte",
  [anon_sym_yobibytes] = "yobibytes",
  [sym_document] = "document",
  [aux_sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_path] = "path",
  [sym_value] = "value",
  [sym__pair_separator] = "_pair_separator",
  [aux_sym__string_content] = "_string_content",
  [sym_unquoted_path] = "unquoted_path",
  [sym_multiline_string] = "multiline_string",
  [sym_substitution] = "substitution",
  [sym_include] = "include",
  [sym__resource_name] = "_resource_name",
  [sym_unit] = "unit",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_unquoted_path_repeat1] = "unquoted_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [aux_sym__string_content_token1] = aux_sym__string_content_token1,
  [sym_unquoted_string] = sym_unquoted_string,
  [aux_sym_unquoted_path_token1] = aux_sym_unquoted_path_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_multiline_string_token1] = aux_sym_multiline_string_token1,
  [anon_sym_DOLLAR_LBRACE_QMARK] = anon_sym_DOLLAR_LBRACE_QMARK,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_classpath] = anon_sym_classpath,
  [anon_sym_DOT2] = anon_sym_DOT,
  [anon_sym_ns] = anon_sym_ns,
  [anon_sym_nano] = anon_sym_nano,
  [anon_sym_nanos] = anon_sym_nanos,
  [anon_sym_nanosecond] = anon_sym_nanosecond,
  [anon_sym_nanoseconds] = anon_sym_nanoseconds,
  [anon_sym_us] = anon_sym_us,
  [anon_sym_micro] = anon_sym_micro,
  [anon_sym_micros] = anon_sym_micros,
  [anon_sym_microsecond] = anon_sym_microsecond,
  [anon_sym_microseconds] = anon_sym_microseconds,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_milli] = anon_sym_milli,
  [anon_sym_millis] = anon_sym_millis,
  [anon_sym_millisecond] = anon_sym_millisecond,
  [anon_sym_milliseconds] = anon_sym_milliseconds,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_second] = anon_sym_second,
  [anon_sym_seconds] = anon_sym_seconds,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_minute] = anon_sym_minute,
  [anon_sym_minutes] = anon_sym_minutes,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_hour] = anon_sym_hour,
  [anon_sym_hours] = anon_sym_hours,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_day] = anon_sym_day,
  [anon_sym_days] = anon_sym_days,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_week] = anon_sym_week,
  [anon_sym_weeks] = anon_sym_weeks,
  [anon_sym_mo] = anon_sym_mo,
  [anon_sym_month] = anon_sym_month,
  [anon_sym_months] = anon_sym_months,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_year] = anon_sym_year,
  [anon_sym_years] = anon_sym_years,
  [anon_sym_B] = anon_sym_B,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_kB] = anon_sym_kB,
  [anon_sym_kilobyte] = anon_sym_kilobyte,
  [anon_sym_kilobytes] = anon_sym_kilobytes,
  [anon_sym_MB] = anon_sym_MB,
  [anon_sym_megabyte] = anon_sym_megabyte,
  [anon_sym_megabytes] = anon_sym_megabytes,
  [anon_sym_GB] = anon_sym_GB,
  [anon_sym_gigabyte] = anon_sym_gigabyte,
  [anon_sym_gigabytes] = anon_sym_gigabytes,
  [anon_sym_TB] = anon_sym_TB,
  [anon_sym_terabyte] = anon_sym_terabyte,
  [anon_sym_terabytes] = anon_sym_terabytes,
  [anon_sym_PB] = anon_sym_PB,
  [anon_sym_petabyte] = anon_sym_petabyte,
  [anon_sym_petabytes] = anon_sym_petabytes,
  [anon_sym_EB] = anon_sym_EB,
  [anon_sym_exabyte] = anon_sym_exabyte,
  [anon_sym_exabytes] = anon_sym_exabytes,
  [anon_sym_ZB] = anon_sym_ZB,
  [anon_sym_zettabyte] = anon_sym_zettabyte,
  [anon_sym_zettabytes] = anon_sym_zettabytes,
  [anon_sym_YB] = anon_sym_YB,
  [anon_sym_yottabyte] = anon_sym_yottabyte,
  [anon_sym_yottabytes] = anon_sym_yottabytes,
  [anon_sym_K] = anon_sym_K,
  [anon_sym_k] = anon_sym_k,
  [anon_sym_Ki] = anon_sym_Ki,
  [anon_sym_KiB] = anon_sym_KiB,
  [anon_sym_kibibyte] = anon_sym_kibibyte,
  [anon_sym_kibibytes] = anon_sym_kibibytes,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_Mi] = anon_sym_Mi,
  [anon_sym_MiB] = anon_sym_MiB,
  [anon_sym_mebibyte] = anon_sym_mebibyte,
  [anon_sym_mebibytes] = anon_sym_mebibytes,
  [anon_sym_G] = anon_sym_G,
  [anon_sym_g] = anon_sym_g,
  [anon_sym_Gi] = anon_sym_Gi,
  [anon_sym_GiB] = anon_sym_GiB,
  [anon_sym_gibibyte] = anon_sym_gibibyte,
  [anon_sym_gibibytes] = anon_sym_gibibytes,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_Ti] = anon_sym_Ti,
  [anon_sym_TiB] = anon_sym_TiB,
  [anon_sym_tebibyte] = anon_sym_tebibyte,
  [anon_sym_tebibytes] = anon_sym_tebibytes,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_Pi] = anon_sym_Pi,
  [anon_sym_PiB] = anon_sym_PiB,
  [anon_sym_pebibyte] = anon_sym_pebibyte,
  [anon_sym_pebibytes] = anon_sym_pebibytes,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_Ei] = anon_sym_Ei,
  [anon_sym_EiB] = anon_sym_EiB,
  [anon_sym_exbibyte] = anon_sym_exbibyte,
  [anon_sym_exbibytes] = anon_sym_exbibytes,
  [anon_sym_Z] = anon_sym_Z,
  [anon_sym_z] = anon_sym_z,
  [anon_sym_Zi] = anon_sym_Zi,
  [anon_sym_ZiB] = anon_sym_ZiB,
  [anon_sym_zebibyte] = anon_sym_zebibyte,
  [anon_sym_zebibytes] = anon_sym_zebibytes,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_Yi] = anon_sym_Yi,
  [anon_sym_YiB] = anon_sym_YiB,
  [anon_sym_yobibyte] = anon_sym_yobibyte,
  [anon_sym_yobibytes] = anon_sym_yobibytes,
  [sym_document] = sym_document,
  [aux_sym__value] = aux_sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_path] = sym_path,
  [sym_value] = sym_value,
  [sym__pair_separator] = sym__pair_separator,
  [aux_sym__string_content] = aux_sym__string_content,
  [sym_unquoted_path] = sym_unquoted_path,
  [sym_multiline_string] = sym_multiline_string,
  [sym_substitution] = sym_substitution,
  [sym_include] = sym_include,
  [sym__resource_name] = sym__resource_name,
  [sym_unit] = sym_unit,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_unquoted_path_repeat1] = aux_sym_unquoted_path_repeat1,
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
  [anon_sym_COMMA] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unquoted_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
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
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_classpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nano] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nanos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nanosecond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nanoseconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_us] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_micro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_micros] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_microsecond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_microseconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_milli] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_millis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_millisecond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_milliseconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_second] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minutes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hours] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_day] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_days] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_week] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weeks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_month] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_months] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_years] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kilobyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kilobytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_megabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_megabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gigabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gigabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_terabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_terabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_petabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_petabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zettabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zettabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yottabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yottabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ki] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kibibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kibibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mebibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mebibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_G] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_g] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Gi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gibibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gibibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tebibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tebibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pebibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pebibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ei] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exbibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exbibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Zi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zebibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zebibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Yi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yobibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yobibytes] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value] = {
    .visible = false,
    .named = false,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__pair_separator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [sym_unquoted_path] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym__resource_name] = {
    .visible = false,
    .named = true,
  },
  [sym_unit] = {
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
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_path_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [6] = 3,
  [7] = 5,
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
  [18] = 15,
  [19] = 19,
  [20] = 14,
  [21] = 19,
  [22] = 17,
  [23] = 23,
  [24] = 10,
  [25] = 23,
  [26] = 13,
  [27] = 11,
  [28] = 28,
  [29] = 12,
  [30] = 30,
  [31] = 9,
  [32] = 16,
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
  [62] = 61,
  [63] = 63,
  [64] = 64,
  [65] = 59,
  [66] = 60,
  [67] = 67,
  [68] = 63,
  [69] = 69,
  [70] = 70,
  [71] = 67,
  [72] = 72,
  [73] = 64,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 76,
  [80] = 72,
  [81] = 70,
  [82] = 82,
  [83] = 82,
  [84] = 84,
  [85] = 85,
  [86] = 84,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 43,
  [92] = 44,
  [93] = 93,
  [94] = 94,
  [95] = 56,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 56,
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
  [117] = 114,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 115,
  [122] = 113,
  [123] = 123,
  [124] = 116,
  [125] = 125,
  [126] = 123,
  [127] = 127,
  [128] = 119,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 55,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 130,
  [138] = 138,
  [139] = 133,
  [140] = 140,
  [141] = 48,
  [142] = 142,
  [143] = 46,
  [144] = 39,
  [145] = 41,
  [146] = 49,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 45,
  [153] = 50,
  [154] = 38,
  [155] = 47,
  [156] = 42,
  [157] = 157,
  [158] = 54,
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
};

static TSCharacterRange sym_unquoted_string_character_set_2[] = {
  {0, '\t'}, {0x0b, 0x1f}, {'%', '%'}, {'\'', ')'}, {'-', '.'}, {'0', '9'}, {';', '<'}, {'>', '>'},
  {'@', 'Z'}, {'_', '_'}, {'a', 'z'}, {'|', '|'}, {'~', 0x10ffff},
};

static TSCharacterRange aux_sym_unquoted_path_token1_character_set_2[] = {
  {0, '\t'}, {0x0b, ' '}, {'%', '%'}, {'\'', ')'}, {'-', '-'}, {'0', '9'}, {';', '<'}, {'>', '>'},
  {'@', 'Z'}, {'_', '_'}, {'a', 'z'}, {'|', '|'}, {'~', 0x10ffff},
};

static TSCharacterRange aux_sym_unquoted_path_token1_character_set_3[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'%', '%'}, {'\'', ')'}, {'-', '-'}, {'0', '9'}, {';', '<'}, {'>', '>'},
  {'@', 'Z'}, {'_', '_'}, {'a', 'z'}, {'|', '|'}, {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(187);
      ADVANCE_MAP(
        '\n', 188,
        '"', 195,
        '#', 217,
        '$', 175,
        '(', 401,
        ')', 402,
        '+', 12,
        ',', 189,
        '-', 11,
        '.', 392,
        '/', 10,
        '0', 199,
        ':', 218,
        '=', 219,
        'B', 479,
        'E', 594,
        'G', 558,
        'K', 536,
        'M', 548,
        'P', 582,
        'T', 570,
        'Y', 618,
        'Z', 606,
        '[', 192,
        '\\', 176,
        ']', 193,
        'b', 482,
        'c', 99,
        'd', 456,
        'e', 596,
        'f', 15,
        'g', 560,
        'h', 450,
        'i', 107,
        'k', 538,
        'm', 444,
        'n', 16,
        'p', 584,
        'r', 60,
        's', 438,
        't', 572,
        'u', 126,
        'w', 462,
        'y', 474,
        'z', 608,
        '{', 190,
        '}', 191,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(183);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 188,
        '"', 194,
        '#', 217,
        '/', 10,
        'c', 99,
        'f', 88,
        'r', 60,
        'u', 125,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(393);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(176);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(224);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(394);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(217);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(199);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(220);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(159);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(164);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(166);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(167);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(168);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(169);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(170);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(172);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(414);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(424);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(470);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(405);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(430);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 98:
      if (lookahead == 'k') ADVANCE(464);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(403);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 121:
      if (lookahead == 'q') ADVANCE(155);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 158:
      if (lookahead == 'y') ADVANCE(458);
      END_STATE();
    case 159:
      if (lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 160:
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 161:
      if (lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 162:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 163:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 164:
      if (lookahead == 'y') ADVANCE(140);
      END_STATE();
    case 165:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 167:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 168:
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 169:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 170:
      if (lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 171:
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 173:
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 174:
      if (lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 175:
      if (lookahead == '{') ADVANCE(397);
      END_STATE();
    case 176:
      ADVANCE_MAP(
        '"', 196,
        '/', 196,
        '\\', 196,
        'b', 196,
        'f', 196,
        'n', 196,
        'r', 196,
        't', 196,
        'u', 196,
      );
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 178:
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_3, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 179:
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 180:
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 181:
      if (eof) ADVANCE(187);
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == ' ') SKIP(181);
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == 'B') ADVANCE(480);
      if (lookahead == 'E') ADVANCE(593);
      if (lookahead == 'G') ADVANCE(557);
      if (lookahead == 'K') ADVANCE(535);
      if (lookahead == 'M') ADVANCE(547);
      if (lookahead == 'P') ADVANCE(581);
      if (lookahead == 'T') ADVANCE(569);
      if (lookahead == 'Y') ADVANCE(617);
      if (lookahead == 'Z') ADVANCE(605);
      if (lookahead == '[') ADVANCE(192);
      if (lookahead == ']') ADVANCE(193);
      if (lookahead == 'b') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(455);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead == 'k') ADVANCE(537);
      if (lookahead == 'm') ADVANCE(443);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(583);
      if (lookahead == 's') ADVANCE(437);
      if (lookahead == 't') ADVANCE(571);
      if (lookahead == 'u') ADVANCE(324);
      if (lookahead == 'w') ADVANCE(461);
      if (lookahead == 'y') ADVANCE(473);
      if (lookahead == 'z') ADVANCE(607);
      if (lookahead == '{') ADVANCE(190);
      if (lookahead == '}') ADVANCE(191);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(225);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 182:
      if (eof) ADVANCE(187);
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == ' ') SKIP(182);
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == '[') ADVANCE(192);
      if (lookahead == ']') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '{') ADVANCE(190);
      if (lookahead == '}') ADVANCE(191);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(226);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 183:
      if (eof) ADVANCE(187);
      ADVANCE_MAP(
        '\n', 188,
        '"', 195,
        '#', 217,
        '$', 175,
        '(', 401,
        ')', 402,
        '+', 12,
        ',', 189,
        '-', 11,
        '.', 406,
        '/', 10,
        '0', 199,
        ':', 218,
        '=', 219,
        'B', 479,
        'E', 594,
        'G', 558,
        'K', 536,
        'M', 548,
        'P', 582,
        'T', 570,
        'Y', 618,
        'Z', 606,
        '[', 192,
        ']', 193,
        'b', 482,
        'c', 99,
        'd', 456,
        'e', 596,
        'f', 15,
        'g', 560,
        'h', 450,
        'i', 107,
        'k', 538,
        'm', 444,
        'n', 16,
        'p', 584,
        'r', 60,
        's', 438,
        't', 572,
        'u', 126,
        'w', 462,
        'y', 474,
        'z', 608,
        '{', 190,
        '}', 191,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(183);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 184:
      if (eof) ADVANCE(187);
      ADVANCE_MAP(
        '\n', 188,
        '"', 194,
        '#', 217,
        ')', 402,
        '+', 12,
        ',', 189,
        '.', 392,
        '/', 371,
        ':', 218,
        '=', 219,
        'i', 385,
        '{', 190,
        '}', 191,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 185:
      if (eof) ADVANCE(187);
      ADVANCE_MAP(
        '\n', 188,
        '"', 194,
        '#', 217,
        ')', 402,
        '+', 12,
        ',', 189,
        '/', 371,
        ':', 218,
        '=', 219,
        'i', 385,
        '{', 190,
        '}', 191,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 186:
      if (eof) ADVANCE(187);
      ADVANCE_MAP(
        '\n', 188,
        '"', 194,
        '#', 217,
        '-', 11,
        '/', 371,
        '0', 198,
        '[', 192,
        'i', 384,
        '{', 190,
        '}', 191,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(186);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '"') ADVANCE(215);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(224);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_unquoted_string);
      ADVANCE_MAP(
        '-', 229,
        '/', 228,
        '0', 202,
        'B', 480,
        'E', 593,
        'G', 557,
        'K', 535,
        'M', 547,
        'P', 581,
        'T', 569,
        'Y', 617,
        'Z', 605,
        'b', 481,
        'd', 455,
        'e', 595,
        'f', 230,
        'g', 559,
        'h', 449,
        'k', 537,
        'm', 443,
        'n', 231,
        'p', 583,
        's', 437,
        't', 571,
        'u', 324,
        'w', 461,
        'y', 473,
        'z', 607,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(225);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(226);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '/') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(217);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '0') ADVANCE(202);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(305);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == 'u') ADVANCE(307);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'b') ADVANCE(295);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(321);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(243);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(247);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(249);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(251);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(254);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(255);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(352);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(353);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(354);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(355);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(356);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(357);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(358);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(359);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(360);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(361);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(362);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(363);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(364);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(365);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(366);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(367);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'g') ADVANCE(234);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(297);
      if (lookahead == 'l') ADVANCE(319);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'g') ADVANCE(235);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(299);
      if (lookahead == 't') ADVANCE(236);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(237);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(301);
      if (lookahead == 't') ADVANCE(345);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(302);
      if (lookahead == 't') ADVANCE(346);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(323);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == 'n') ADVANCE(350);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(315);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(316);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(317);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(318);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'd') ADVANCE(439);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'd') ADVANCE(413);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'd') ADVANCE(423);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'd') ADVANCE(433);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(303);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(483);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(209);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(211);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(445);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(519);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(601);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(565);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(501);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(543);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(489);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(553);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(495);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(589);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(513);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(577);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(507);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(623);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(613);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(531);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(525);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'h') ADVANCE(469);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(429);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(241);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(242);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(244);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(246);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(248);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(250);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(252);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(253);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'k') ADVANCE(463);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(213);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(325);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(294);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(304);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(268);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(313);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(269);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(270);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(271);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(409);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(419);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(308);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(310);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(311);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(312);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(245);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(451);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(475);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(349);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(314);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(418);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(275);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(293);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(273);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(276);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(277);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(278);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(279);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(280);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(281);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(282);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(283);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(284);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(285);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(286);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(287);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(288);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(289);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(290);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(291);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(292);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(238);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 't') ADVANCE(239);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(320);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(307);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(274);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(328);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(457);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(329);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(330);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(331);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(332);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(333);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(334);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(335);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(336);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(337);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(338);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(339);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(340);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(341);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(342);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(343);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(344);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '/') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(217);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'c') ADVANCE(376);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(390);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(399);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(178);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(377);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(373);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(180);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead == 'c') ADVANCE(386);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead == 'c') ADVANCE(387);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead == 'd') ADVANCE(374);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead == 'd') ADVANCE(375);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == 'n') ADVANCE(380);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == 'n') ADVANCE(381);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead == 'l') ADVANCE(388);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead == 'l') ADVANCE(389);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead == 'u') ADVANCE(382);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead == 'u') ADVANCE(383);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(391);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_2, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_QMARK);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '?') ADVANCE(396);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_include);
      if ((!eof && set_contains(aux_sym_unquoted_path_token1_character_set_3, 13, lookahead))) ADVANCE(379);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_classpath);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_ns);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_ns);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_nano);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(411);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_nano);
      if (lookahead == 's') ADVANCE(412);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_nanos);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(265);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_nanos);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_nanosecond);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(416);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_nanosecond);
      if (lookahead == 's') ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_nanoseconds);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_nanoseconds);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_us);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_us);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_micro);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(421);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_micro);
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_micros);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(266);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_micros);
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_microsecond);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(426);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_microsecond);
      if (lookahead == 's') ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_microseconds);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_microseconds);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_milli);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(431);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_milli);
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_millis);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(267);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_millis);
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(436);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(264);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(442);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_seconds);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead == 's') ADVANCE(428);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(468);
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(448);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_minutes);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_minutes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(347);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(454);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_hours);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_hours);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(351);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(460);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_days);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(272);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(466);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_weeks);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_mo);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(326);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_mo);
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(472);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == 's') ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_months);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_months);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'o') ADVANCE(261);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(478);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(477);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_years);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(327);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(486);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(485);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_kB);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_kB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_kilobyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(492);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_kilobyte);
      if (lookahead == 's') ADVANCE(491);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_kilobytes);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_kilobytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_MB);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_MB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_megabyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(498);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_megabyte);
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_megabytes);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_megabytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_GB);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_GB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_gigabyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(504);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_gigabyte);
      if (lookahead == 's') ADVANCE(503);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_gigabytes);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_gigabytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_TB);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_TB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_terabyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(510);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_terabyte);
      if (lookahead == 's') ADVANCE(509);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_terabytes);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_terabytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_PB);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_PB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_petabyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(516);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_petabyte);
      if (lookahead == 's') ADVANCE(515);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_petabytes);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_petabytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_EB);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_EB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_exabyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(522);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_exabyte);
      if (lookahead == 's') ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_exabytes);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_exabytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_ZB);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_ZB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_zettabyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(528);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_zettabyte);
      if (lookahead == 's') ADVANCE(527);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_zettabytes);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_zettabytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_YB);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_YB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_yottabyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(534);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_yottabyte);
      if (lookahead == 's') ADVANCE(533);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_yottabytes);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_yottabytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_K);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(539);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_K);
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(257);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'B') ADVANCE(487);
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_Ki);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(542);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_Ki);
      if (lookahead == 'B') ADVANCE(541);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_KiB);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_KiB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_kibibyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(546);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_kibibyte);
      if (lookahead == 's') ADVANCE(545);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_kibibytes);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_kibibytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(494);
      if (lookahead == 'i') ADVANCE(549);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == 'B') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_Mi);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(552);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_Mi);
      if (lookahead == 'B') ADVANCE(551);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_MiB);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_MiB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_mebibyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(556);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_mebibyte);
      if (lookahead == 's') ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_mebibytes);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_mebibytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_G);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(500);
      if (lookahead == 'i') ADVANCE(561);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_G);
      if (lookahead == 'B') ADVANCE(499);
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(256);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_Gi);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(564);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_Gi);
      if (lookahead == 'B') ADVANCE(563);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_GiB);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_GiB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_gibibyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(568);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_gibibyte);
      if (lookahead == 's') ADVANCE(567);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_gibibytes);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_gibibytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(506);
      if (lookahead == 'i') ADVANCE(573);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'B') ADVANCE(505);
      if (lookahead == 'i') ADVANCE(574);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(349);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_Ti);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(576);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_Ti);
      if (lookahead == 'B') ADVANCE(575);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_TiB);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_TiB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_tebibyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(580);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_tebibyte);
      if (lookahead == 's') ADVANCE(579);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_tebibytes);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_tebibytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(512);
      if (lookahead == 'i') ADVANCE(585);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'B') ADVANCE(511);
      if (lookahead == 'i') ADVANCE(586);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(259);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_Pi);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(588);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_Pi);
      if (lookahead == 'B') ADVANCE(587);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_PiB);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_PiB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_pebibyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(592);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_pebibyte);
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_pebibytes);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_pebibytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(518);
      if (lookahead == 'i') ADVANCE(597);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'B') ADVANCE(517);
      if (lookahead == 'i') ADVANCE(598);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'x') ADVANCE(232);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_Ei);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(600);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_Ei);
      if (lookahead == 'B') ADVANCE(599);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_EiB);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_EiB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_exbibyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(604);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_exbibyte);
      if (lookahead == 's') ADVANCE(603);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_exbibytes);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_exbibytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(524);
      if (lookahead == 'i') ADVANCE(609);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == 'B') ADVANCE(523);
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_z);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(262);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_z);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_Zi);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(612);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_Zi);
      if (lookahead == 'B') ADVANCE(611);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_ZiB);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_ZiB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_zebibyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(616);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_zebibyte);
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_zebibytes);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_zebibytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(530);
      if (lookahead == 'i') ADVANCE(619);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'B') ADVANCE(529);
      if (lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_Yi);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'B') ADVANCE(622);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_Yi);
      if (lookahead == 'B') ADVANCE(621);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_YiB);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_YiB);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_yobibyte);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 's') ADVANCE(626);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_yobibyte);
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_yobibytes);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_yobibytes);
      if (lookahead == '/') ADVANCE(179);
      if ((!eof && set_contains(sym_unquoted_string_character_set_2, 13, lookahead))) ADVANCE(369);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 186},
  [2] = {.lex_state = 181},
  [3] = {.lex_state = 182},
  [4] = {.lex_state = 182},
  [5] = {.lex_state = 182},
  [6] = {.lex_state = 182},
  [7] = {.lex_state = 182},
  [8] = {.lex_state = 182},
  [9] = {.lex_state = 182},
  [10] = {.lex_state = 182},
  [11] = {.lex_state = 182},
  [12] = {.lex_state = 182},
  [13] = {.lex_state = 182},
  [14] = {.lex_state = 182},
  [15] = {.lex_state = 182},
  [16] = {.lex_state = 182},
  [17] = {.lex_state = 182},
  [18] = {.lex_state = 182},
  [19] = {.lex_state = 182},
  [20] = {.lex_state = 182},
  [21] = {.lex_state = 182},
  [22] = {.lex_state = 182},
  [23] = {.lex_state = 182},
  [24] = {.lex_state = 182},
  [25] = {.lex_state = 182},
  [26] = {.lex_state = 182},
  [27] = {.lex_state = 182},
  [28] = {.lex_state = 182},
  [29] = {.lex_state = 182},
  [30] = {.lex_state = 182},
  [31] = {.lex_state = 182},
  [32] = {.lex_state = 182},
  [33] = {.lex_state = 182},
  [34] = {.lex_state = 182},
  [35] = {.lex_state = 182},
  [36] = {.lex_state = 186},
  [37] = {.lex_state = 182},
  [38] = {.lex_state = 182},
  [39] = {.lex_state = 182},
  [40] = {.lex_state = 182},
  [41] = {.lex_state = 182},
  [42] = {.lex_state = 182},
  [43] = {.lex_state = 182},
  [44] = {.lex_state = 182},
  [45] = {.lex_state = 182},
  [46] = {.lex_state = 182},
  [47] = {.lex_state = 182},
  [48] = {.lex_state = 182},
  [49] = {.lex_state = 182},
  [50] = {.lex_state = 182},
  [51] = {.lex_state = 182},
  [52] = {.lex_state = 182},
  [53] = {.lex_state = 182},
  [54] = {.lex_state = 182},
  [55] = {.lex_state = 182},
  [56] = {.lex_state = 182},
  [57] = {.lex_state = 186},
  [58] = {.lex_state = 186},
  [59] = {.lex_state = 186},
  [60] = {.lex_state = 186},
  [61] = {.lex_state = 186},
  [62] = {.lex_state = 186},
  [63] = {.lex_state = 186},
  [64] = {.lex_state = 186},
  [65] = {.lex_state = 186},
  [66] = {.lex_state = 186},
  [67] = {.lex_state = 186},
  [68] = {.lex_state = 186},
  [69] = {.lex_state = 186},
  [70] = {.lex_state = 186},
  [71] = {.lex_state = 186},
  [72] = {.lex_state = 186},
  [73] = {.lex_state = 186},
  [74] = {.lex_state = 186},
  [75] = {.lex_state = 186},
  [76] = {.lex_state = 186},
  [77] = {.lex_state = 186},
  [78] = {.lex_state = 186},
  [79] = {.lex_state = 186},
  [80] = {.lex_state = 186},
  [81] = {.lex_state = 186},
  [82] = {.lex_state = 186},
  [83] = {.lex_state = 186},
  [84] = {.lex_state = 186},
  [85] = {.lex_state = 186},
  [86] = {.lex_state = 186},
  [87] = {.lex_state = 186},
  [88] = {.lex_state = 186},
  [89] = {.lex_state = 186},
  [90] = {.lex_state = 186},
  [91] = {.lex_state = 184},
  [92] = {.lex_state = 184},
  [93] = {.lex_state = 184},
  [94] = {.lex_state = 184},
  [95] = {.lex_state = 186},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 184},
  [98] = {.lex_state = 184},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 184},
  [101] = {.lex_state = 184},
  [102] = {.lex_state = 184},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 184},
  [106] = {.lex_state = 186},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
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
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 186},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 184},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_classpath] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [anon_sym_ns] = ACTIONS(1),
    [anon_sym_nano] = ACTIONS(1),
    [anon_sym_nanos] = ACTIONS(1),
    [anon_sym_nanosecond] = ACTIONS(1),
    [anon_sym_nanoseconds] = ACTIONS(1),
    [anon_sym_us] = ACTIONS(1),
    [anon_sym_micro] = ACTIONS(1),
    [anon_sym_micros] = ACTIONS(1),
    [anon_sym_microsecond] = ACTIONS(1),
    [anon_sym_microseconds] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_milli] = ACTIONS(1),
    [anon_sym_millis] = ACTIONS(1),
    [anon_sym_millisecond] = ACTIONS(1),
    [anon_sym_milliseconds] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_second] = ACTIONS(1),
    [anon_sym_seconds] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_minute] = ACTIONS(1),
    [anon_sym_minutes] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_hour] = ACTIONS(1),
    [anon_sym_hours] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_day] = ACTIONS(1),
    [anon_sym_days] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_week] = ACTIONS(1),
    [anon_sym_weeks] = ACTIONS(1),
    [anon_sym_mo] = ACTIONS(1),
    [anon_sym_month] = ACTIONS(1),
    [anon_sym_months] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [anon_sym_years] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_kB] = ACTIONS(1),
    [anon_sym_kilobyte] = ACTIONS(1),
    [anon_sym_kilobytes] = ACTIONS(1),
    [anon_sym_MB] = ACTIONS(1),
    [anon_sym_megabyte] = ACTIONS(1),
    [anon_sym_megabytes] = ACTIONS(1),
    [anon_sym_GB] = ACTIONS(1),
    [anon_sym_gigabyte] = ACTIONS(1),
    [anon_sym_gigabytes] = ACTIONS(1),
    [anon_sym_TB] = ACTIONS(1),
    [anon_sym_terabyte] = ACTIONS(1),
    [anon_sym_terabytes] = ACTIONS(1),
    [anon_sym_PB] = ACTIONS(1),
    [anon_sym_petabyte] = ACTIONS(1),
    [anon_sym_petabytes] = ACTIONS(1),
    [anon_sym_EB] = ACTIONS(1),
    [anon_sym_exabyte] = ACTIONS(1),
    [anon_sym_exabytes] = ACTIONS(1),
    [anon_sym_ZB] = ACTIONS(1),
    [anon_sym_zettabyte] = ACTIONS(1),
    [anon_sym_zettabytes] = ACTIONS(1),
    [anon_sym_YB] = ACTIONS(1),
    [anon_sym_yottabyte] = ACTIONS(1),
    [anon_sym_yottabytes] = ACTIONS(1),
    [anon_sym_K] = ACTIONS(1),
    [anon_sym_k] = ACTIONS(1),
    [anon_sym_Ki] = ACTIONS(1),
    [anon_sym_KiB] = ACTIONS(1),
    [anon_sym_kibibyte] = ACTIONS(1),
    [anon_sym_kibibytes] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_Mi] = ACTIONS(1),
    [anon_sym_MiB] = ACTIONS(1),
    [anon_sym_mebibyte] = ACTIONS(1),
    [anon_sym_mebibytes] = ACTIONS(1),
    [anon_sym_G] = ACTIONS(1),
    [anon_sym_g] = ACTIONS(1),
    [anon_sym_Gi] = ACTIONS(1),
    [anon_sym_GiB] = ACTIONS(1),
    [anon_sym_gibibyte] = ACTIONS(1),
    [anon_sym_gibibytes] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_Ti] = ACTIONS(1),
    [anon_sym_TiB] = ACTIONS(1),
    [anon_sym_tebibyte] = ACTIONS(1),
    [anon_sym_tebibytes] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_Pi] = ACTIONS(1),
    [anon_sym_PiB] = ACTIONS(1),
    [anon_sym_pebibyte] = ACTIONS(1),
    [anon_sym_pebibytes] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_Ei] = ACTIONS(1),
    [anon_sym_EiB] = ACTIONS(1),
    [anon_sym_exbibyte] = ACTIONS(1),
    [anon_sym_exbibytes] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
    [anon_sym_z] = ACTIONS(1),
    [anon_sym_Zi] = ACTIONS(1),
    [anon_sym_ZiB] = ACTIONS(1),
    [anon_sym_zebibyte] = ACTIONS(1),
    [anon_sym_zebibytes] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_Yi] = ACTIONS(1),
    [anon_sym_YiB] = ACTIONS(1),
    [anon_sym_yobibyte] = ACTIONS(1),
    [anon_sym_yobibytes] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(162),
    [sym_object] = STATE(151),
    [sym_pair] = STATE(118),
    [sym_array] = STATE(151),
    [sym_string] = STATE(93),
    [sym_path] = STATE(103),
    [sym_unquoted_path] = STATE(93),
    [sym_include] = STATE(118),
    [aux_sym_document_repeat1] = STATE(36),
    [aux_sym_path_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [aux_sym_unquoted_path_token1] = ACTIONS(17),
    [anon_sym_include] = ACTIONS(19),
  },
  [2] = {
    [sym_unit] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_null] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [sym_unquoted_string] = ACTIONS(23),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(23),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [anon_sym_ns] = ACTIONS(27),
    [anon_sym_nano] = ACTIONS(27),
    [anon_sym_nanos] = ACTIONS(27),
    [anon_sym_nanosecond] = ACTIONS(27),
    [anon_sym_nanoseconds] = ACTIONS(27),
    [anon_sym_us] = ACTIONS(27),
    [anon_sym_micro] = ACTIONS(27),
    [anon_sym_micros] = ACTIONS(27),
    [anon_sym_microsecond] = ACTIONS(27),
    [anon_sym_microseconds] = ACTIONS(27),
    [anon_sym_ms] = ACTIONS(27),
    [anon_sym_milli] = ACTIONS(27),
    [anon_sym_millis] = ACTIONS(27),
    [anon_sym_millisecond] = ACTIONS(27),
    [anon_sym_milliseconds] = ACTIONS(27),
    [anon_sym_s] = ACTIONS(27),
    [anon_sym_second] = ACTIONS(27),
    [anon_sym_seconds] = ACTIONS(27),
    [anon_sym_m] = ACTIONS(27),
    [anon_sym_minute] = ACTIONS(27),
    [anon_sym_minutes] = ACTIONS(27),
    [anon_sym_h] = ACTIONS(27),
    [anon_sym_hour] = ACTIONS(27),
    [anon_sym_hours] = ACTIONS(27),
    [anon_sym_d] = ACTIONS(27),
    [anon_sym_day] = ACTIONS(27),
    [anon_sym_days] = ACTIONS(27),
    [anon_sym_w] = ACTIONS(27),
    [anon_sym_week] = ACTIONS(27),
    [anon_sym_weeks] = ACTIONS(27),
    [anon_sym_mo] = ACTIONS(27),
    [anon_sym_month] = ACTIONS(27),
    [anon_sym_months] = ACTIONS(27),
    [anon_sym_y] = ACTIONS(27),
    [anon_sym_year] = ACTIONS(27),
    [anon_sym_years] = ACTIONS(27),
    [anon_sym_B] = ACTIONS(27),
    [anon_sym_b] = ACTIONS(27),
    [anon_sym_byte] = ACTIONS(27),
    [anon_sym_bytes] = ACTIONS(27),
    [anon_sym_kB] = ACTIONS(27),
    [anon_sym_kilobyte] = ACTIONS(27),
    [anon_sym_kilobytes] = ACTIONS(27),
    [anon_sym_MB] = ACTIONS(27),
    [anon_sym_megabyte] = ACTIONS(27),
    [anon_sym_megabytes] = ACTIONS(27),
    [anon_sym_GB] = ACTIONS(27),
    [anon_sym_gigabyte] = ACTIONS(27),
    [anon_sym_gigabytes] = ACTIONS(27),
    [anon_sym_TB] = ACTIONS(27),
    [anon_sym_terabyte] = ACTIONS(27),
    [anon_sym_terabytes] = ACTIONS(27),
    [anon_sym_PB] = ACTIONS(27),
    [anon_sym_petabyte] = ACTIONS(27),
    [anon_sym_petabytes] = ACTIONS(27),
    [anon_sym_EB] = ACTIONS(27),
    [anon_sym_exabyte] = ACTIONS(27),
    [anon_sym_exabytes] = ACTIONS(27),
    [anon_sym_ZB] = ACTIONS(27),
    [anon_sym_zettabyte] = ACTIONS(27),
    [anon_sym_zettabytes] = ACTIONS(27),
    [anon_sym_YB] = ACTIONS(27),
    [anon_sym_yottabyte] = ACTIONS(27),
    [anon_sym_yottabytes] = ACTIONS(27),
    [anon_sym_K] = ACTIONS(27),
    [anon_sym_k] = ACTIONS(27),
    [anon_sym_Ki] = ACTIONS(27),
    [anon_sym_KiB] = ACTIONS(27),
    [anon_sym_kibibyte] = ACTIONS(27),
    [anon_sym_kibibytes] = ACTIONS(27),
    [anon_sym_M] = ACTIONS(27),
    [anon_sym_Mi] = ACTIONS(27),
    [anon_sym_MiB] = ACTIONS(27),
    [anon_sym_mebibyte] = ACTIONS(27),
    [anon_sym_mebibytes] = ACTIONS(27),
    [anon_sym_G] = ACTIONS(27),
    [anon_sym_g] = ACTIONS(27),
    [anon_sym_Gi] = ACTIONS(27),
    [anon_sym_GiB] = ACTIONS(27),
    [anon_sym_gibibyte] = ACTIONS(27),
    [anon_sym_gibibytes] = ACTIONS(27),
    [anon_sym_T] = ACTIONS(27),
    [anon_sym_t] = ACTIONS(27),
    [anon_sym_Ti] = ACTIONS(27),
    [anon_sym_TiB] = ACTIONS(27),
    [anon_sym_tebibyte] = ACTIONS(27),
    [anon_sym_tebibytes] = ACTIONS(27),
    [anon_sym_P] = ACTIONS(27),
    [anon_sym_p] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_PiB] = ACTIONS(27),
    [anon_sym_pebibyte] = ACTIONS(27),
    [anon_sym_pebibytes] = ACTIONS(27),
    [anon_sym_E] = ACTIONS(27),
    [anon_sym_e] = ACTIONS(27),
    [anon_sym_Ei] = ACTIONS(27),
    [anon_sym_EiB] = ACTIONS(27),
    [anon_sym_exbibyte] = ACTIONS(27),
    [anon_sym_exbibytes] = ACTIONS(27),
    [anon_sym_Z] = ACTIONS(27),
    [anon_sym_z] = ACTIONS(27),
    [anon_sym_Zi] = ACTIONS(27),
    [anon_sym_ZiB] = ACTIONS(27),
    [anon_sym_zebibyte] = ACTIONS(27),
    [anon_sym_zebibytes] = ACTIONS(27),
    [anon_sym_Y] = ACTIONS(27),
    [anon_sym_Yi] = ACTIONS(27),
    [anon_sym_YiB] = ACTIONS(27),
    [anon_sym_yobibyte] = ACTIONS(27),
    [anon_sym_yobibytes] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(29), 1,
      aux_sym_document_repeat1,
    STATE(115), 1,
      aux_sym_array_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(43), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(4), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [52] = 11,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(68), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(71), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(65), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(4), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [98] = 14,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(74), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_document_repeat1,
    STATE(122), 1,
      aux_sym_array_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(43), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(4), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [150] = 14,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(80), 1,
      anon_sym_LF,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_document_repeat1,
    STATE(121), 1,
      aux_sym_array_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(43), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(4), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [202] = 14,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_LF,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym_document_repeat1,
    STATE(113), 1,
      aux_sym_array_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(43), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(4), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [254] = 11,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(94), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(43), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(4), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [299] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(100), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(28), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [345] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(30), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [391] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(100), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(28), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [437] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(30), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [483] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    ACTIONS(110), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(30), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [529] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    ACTIONS(96), 1,
      anon_sym_LF,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(30), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [575] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_LF,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(116), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(5), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [621] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    ACTIONS(118), 1,
      anon_sym_LF,
    STATE(9), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(30), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [667] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    ACTIONS(96), 1,
      anon_sym_LF,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(120), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(6), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [713] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LF,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(126), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(7), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [759] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(100), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(28), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [805] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LF,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(30), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [851] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(100), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(28), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [897] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    ACTIONS(96), 1,
      anon_sym_LF,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(132), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(3), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [943] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(30), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [989] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    ACTIONS(134), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(30), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [1035] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(30), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [1081] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(30), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [1127] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(100), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(28), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [1173] = 10,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(140), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(43), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(4), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [1215] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(30), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [1261] = 10,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(142), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(43), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(4), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [1303] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(100), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(28), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [1349] = 12,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(144), 1,
      anon_sym_LF,
    STATE(31), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(30), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [1395] = 11,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(146), 1,
      anon_sym_LF,
    STATE(35), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(30), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [1438] = 11,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LF,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(106), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(30), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [1481] = 11,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LF,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(100), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(28), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [1524] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      anon_sym_LF,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(125), 2,
      sym_pair,
      sym_include,
    STATE(148), 2,
      sym_object,
      sym_array,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1571] = 9,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(152), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(8), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [1608] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1632] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1656] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1680] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1704] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1728] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1752] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1776] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1800] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1824] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1848] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1872] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1896] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1920] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1944] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1968] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [1992] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [2016] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 15,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [2040] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LF,
    STATE(56), 1,
      aux_sym_document_repeat1,
    ACTIONS(225), 12,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [2064] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(147), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2101] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      anon_sym_LF,
    STATE(85), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2138] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(231), 1,
      anon_sym_LF,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2175] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(147), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2212] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(126), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2249] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(123), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2286] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(239), 1,
      anon_sym_LF,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(119), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2323] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2360] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 1,
      anon_sym_LF,
    STATE(83), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2397] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(147), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2434] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2471] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(128), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2508] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(147), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2545] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2582] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(259), 1,
      anon_sym_LF,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2619] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 1,
      anon_sym_LF,
    STATE(60), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2656] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2693] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2730] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2767] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(147), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2804] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2841] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      anon_sym_LF,
    STATE(57), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2878] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(147), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2915] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      anon_sym_LF,
    STATE(66), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2952] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [2989] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(147), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [3026] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(147), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [3063] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [3100] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(147), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [3137] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [3174] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 1,
      anon_sym_LF,
    STATE(69), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [3211] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(281), 1,
      anon_sym_LF,
    STATE(90), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [3245] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(142), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [3279] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(150), 1,
      anon_sym_LF,
    STATE(95), 1,
      aux_sym_document_repeat1,
    STATE(103), 1,
      sym_path,
    STATE(147), 2,
      sym_pair,
      sym_include,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [3313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(174), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_RPAREN,
  [3332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(178), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_RPAREN,
  [3351] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    STATE(94), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
    ACTIONS(283), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [3373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      aux_sym_unquoted_path_token1,
    STATE(94), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
    ACTIONS(285), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [3395] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LF,
    STATE(95), 1,
      aux_sym_document_repeat1,
    ACTIONS(225), 3,
      sym_number,
      aux_sym_unquoted_path_token1,
      anon_sym_include,
    ACTIONS(293), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [3417] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(300), 1,
      anon_sym_required,
    STATE(104), 1,
      aux_sym_document_repeat1,
    STATE(129), 2,
      sym_string,
      sym__resource_name,
    ACTIONS(302), 3,
      anon_sym_url,
      anon_sym_file,
      anon_sym_classpath,
  [3442] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(308), 1,
      anon_sym_DOT,
    STATE(100), 1,
      aux_sym_unquoted_path_repeat1,
    ACTIONS(304), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [3463] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(314), 1,
      anon_sym_DOT,
    STATE(98), 1,
      aux_sym_unquoted_path_repeat1,
    ACTIONS(310), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [3484] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(319), 1,
      anon_sym_required,
    STATE(96), 1,
      aux_sym_document_repeat1,
    STATE(138), 2,
      sym_string,
      sym__resource_name,
    ACTIONS(302), 3,
      anon_sym_url,
      anon_sym_file,
      anon_sym_classpath,
  [3509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(325), 1,
      anon_sym_DOT,
    STATE(98), 1,
      aux_sym_unquoted_path_repeat1,
    ACTIONS(321), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [3530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(310), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DOT,
  [3546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(321), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [3561] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym__pair_separator,
    STATE(135), 1,
      sym_object,
    STATE(136), 1,
      sym_value,
    ACTIONS(329), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [3582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LF,
    STATE(104), 1,
      aux_sym_document_repeat1,
    ACTIONS(293), 5,
      anon_sym_DQUOTE,
      anon_sym_required,
      anon_sym_url,
      anon_sym_file,
      anon_sym_classpath,
  [3599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(334), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [3614] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_unquoted_path_token1,
    STATE(163), 1,
      sym_path,
    STATE(93), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [3635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(165), 2,
      sym_string,
      sym__resource_name,
    ACTIONS(302), 3,
      anon_sym_url,
      anon_sym_file,
      anon_sym_classpath,
  [3651] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LF,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_document_repeat1,
    STATE(108), 1,
      aux_sym_document_repeat2,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [3671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(168), 2,
      sym_string,
      sym__resource_name,
    ACTIONS(302), 3,
      anon_sym_url,
      anon_sym_file,
      anon_sym_classpath,
  [3687] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_document_repeat1,
    STATE(108), 1,
      aux_sym_document_repeat2,
  [3706] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_document_repeat1,
    STATE(108), 1,
      aux_sym_document_repeat2,
  [3725] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_document_repeat1,
    STATE(112), 1,
      aux_sym_array_repeat1,
  [3744] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_document_repeat1,
    STATE(112), 1,
      aux_sym_array_repeat1,
  [3763] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_document_repeat1,
    STATE(108), 1,
      aux_sym_document_repeat2,
  [3782] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym_document_repeat1,
    STATE(112), 1,
      aux_sym_array_repeat1,
  [3801] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(376), 1,
      anon_sym_LF,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_document_repeat1,
    STATE(108), 1,
      aux_sym_document_repeat2,
  [3820] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_document_repeat1,
    STATE(108), 1,
      aux_sym_document_repeat2,
  [3839] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 1,
      anon_sym_LF,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_document_repeat1,
    STATE(111), 1,
      aux_sym_document_repeat2,
  [3858] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_document_repeat1,
    STATE(124), 1,
      aux_sym_document_repeat2,
  [3877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [3888] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym_document_repeat1,
    STATE(112), 1,
      aux_sym_array_repeat1,
  [3907] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LF,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_document_repeat1,
    STATE(112), 1,
      aux_sym_array_repeat1,
  [3926] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    ACTIONS(406), 1,
      anon_sym_LF,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_document_repeat1,
    STATE(114), 1,
      aux_sym_document_repeat2,
  [3945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    ACTIONS(406), 1,
      anon_sym_LF,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_document_repeat1,
    STATE(108), 1,
      aux_sym_document_repeat2,
  [3964] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_document_repeat1,
    STATE(110), 1,
      aux_sym_document_repeat2,
  [3983] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(376), 1,
      anon_sym_LF,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_document_repeat1,
    STATE(117), 1,
      aux_sym_document_repeat2,
  [4002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [4013] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_document_repeat1,
    STATE(116), 1,
      aux_sym_document_repeat2,
  [4032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4042] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    ACTIONS(418), 1,
      sym_escape_sequence,
    ACTIONS(420), 1,
      aux_sym__string_content_token1,
    STATE(134), 1,
      aux_sym__string_content,
  [4058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4078] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      sym_escape_sequence,
    ACTIONS(428), 1,
      aux_sym__string_content_token1,
    STATE(137), 1,
      aux_sym__string_content,
  [4094] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      sym_escape_sequence,
    ACTIONS(435), 1,
      aux_sym__string_content_token1,
    STATE(134), 1,
      aux_sym__string_content,
  [4110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4130] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_escape_sequence,
    ACTIONS(420), 1,
      aux_sym__string_content_token1,
    ACTIONS(442), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      aux_sym__string_content,
  [4146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4156] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_DQUOTE,
    ACTIONS(448), 1,
      sym_escape_sequence,
    ACTIONS(450), 1,
      aux_sym__string_content_token1,
    STATE(130), 1,
      aux_sym__string_content,
  [4172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_document_repeat1,
  [4265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      aux_sym_document_repeat1,
  [4278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      aux_sym_document_repeat1,
  [4291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(458), 1,
      anon_sym_LF,
    STATE(150), 1,
      aux_sym_document_repeat1,
  [4304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      sym_string,
  [4354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
  [4369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
  [4376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_unquoted_path_token1,
  [4383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
  [4390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
  [4397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
  [4404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
  [4411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
  [4418] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_multiline_string_token1,
  [4425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 98,
  [SMALL_STATE(6)] = 150,
  [SMALL_STATE(7)] = 202,
  [SMALL_STATE(8)] = 254,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 345,
  [SMALL_STATE(11)] = 391,
  [SMALL_STATE(12)] = 437,
  [SMALL_STATE(13)] = 483,
  [SMALL_STATE(14)] = 529,
  [SMALL_STATE(15)] = 575,
  [SMALL_STATE(16)] = 621,
  [SMALL_STATE(17)] = 667,
  [SMALL_STATE(18)] = 713,
  [SMALL_STATE(19)] = 759,
  [SMALL_STATE(20)] = 805,
  [SMALL_STATE(21)] = 851,
  [SMALL_STATE(22)] = 897,
  [SMALL_STATE(23)] = 943,
  [SMALL_STATE(24)] = 989,
  [SMALL_STATE(25)] = 1035,
  [SMALL_STATE(26)] = 1081,
  [SMALL_STATE(27)] = 1127,
  [SMALL_STATE(28)] = 1173,
  [SMALL_STATE(29)] = 1215,
  [SMALL_STATE(30)] = 1261,
  [SMALL_STATE(31)] = 1303,
  [SMALL_STATE(32)] = 1349,
  [SMALL_STATE(33)] = 1395,
  [SMALL_STATE(34)] = 1438,
  [SMALL_STATE(35)] = 1481,
  [SMALL_STATE(36)] = 1524,
  [SMALL_STATE(37)] = 1571,
  [SMALL_STATE(38)] = 1608,
  [SMALL_STATE(39)] = 1632,
  [SMALL_STATE(40)] = 1656,
  [SMALL_STATE(41)] = 1680,
  [SMALL_STATE(42)] = 1704,
  [SMALL_STATE(43)] = 1728,
  [SMALL_STATE(44)] = 1752,
  [SMALL_STATE(45)] = 1776,
  [SMALL_STATE(46)] = 1800,
  [SMALL_STATE(47)] = 1824,
  [SMALL_STATE(48)] = 1848,
  [SMALL_STATE(49)] = 1872,
  [SMALL_STATE(50)] = 1896,
  [SMALL_STATE(51)] = 1920,
  [SMALL_STATE(52)] = 1944,
  [SMALL_STATE(53)] = 1968,
  [SMALL_STATE(54)] = 1992,
  [SMALL_STATE(55)] = 2016,
  [SMALL_STATE(56)] = 2040,
  [SMALL_STATE(57)] = 2064,
  [SMALL_STATE(58)] = 2101,
  [SMALL_STATE(59)] = 2138,
  [SMALL_STATE(60)] = 2175,
  [SMALL_STATE(61)] = 2212,
  [SMALL_STATE(62)] = 2249,
  [SMALL_STATE(63)] = 2286,
  [SMALL_STATE(64)] = 2323,
  [SMALL_STATE(65)] = 2360,
  [SMALL_STATE(66)] = 2397,
  [SMALL_STATE(67)] = 2434,
  [SMALL_STATE(68)] = 2471,
  [SMALL_STATE(69)] = 2508,
  [SMALL_STATE(70)] = 2545,
  [SMALL_STATE(71)] = 2582,
  [SMALL_STATE(72)] = 2619,
  [SMALL_STATE(73)] = 2656,
  [SMALL_STATE(74)] = 2693,
  [SMALL_STATE(75)] = 2730,
  [SMALL_STATE(76)] = 2767,
  [SMALL_STATE(77)] = 2804,
  [SMALL_STATE(78)] = 2841,
  [SMALL_STATE(79)] = 2878,
  [SMALL_STATE(80)] = 2915,
  [SMALL_STATE(81)] = 2952,
  [SMALL_STATE(82)] = 2989,
  [SMALL_STATE(83)] = 3026,
  [SMALL_STATE(84)] = 3063,
  [SMALL_STATE(85)] = 3100,
  [SMALL_STATE(86)] = 3137,
  [SMALL_STATE(87)] = 3174,
  [SMALL_STATE(88)] = 3211,
  [SMALL_STATE(89)] = 3245,
  [SMALL_STATE(90)] = 3279,
  [SMALL_STATE(91)] = 3313,
  [SMALL_STATE(92)] = 3332,
  [SMALL_STATE(93)] = 3351,
  [SMALL_STATE(94)] = 3373,
  [SMALL_STATE(95)] = 3395,
  [SMALL_STATE(96)] = 3417,
  [SMALL_STATE(97)] = 3442,
  [SMALL_STATE(98)] = 3463,
  [SMALL_STATE(99)] = 3484,
  [SMALL_STATE(100)] = 3509,
  [SMALL_STATE(101)] = 3530,
  [SMALL_STATE(102)] = 3546,
  [SMALL_STATE(103)] = 3561,
  [SMALL_STATE(104)] = 3582,
  [SMALL_STATE(105)] = 3599,
  [SMALL_STATE(106)] = 3614,
  [SMALL_STATE(107)] = 3635,
  [SMALL_STATE(108)] = 3651,
  [SMALL_STATE(109)] = 3671,
  [SMALL_STATE(110)] = 3687,
  [SMALL_STATE(111)] = 3706,
  [SMALL_STATE(112)] = 3725,
  [SMALL_STATE(113)] = 3744,
  [SMALL_STATE(114)] = 3763,
  [SMALL_STATE(115)] = 3782,
  [SMALL_STATE(116)] = 3801,
  [SMALL_STATE(117)] = 3820,
  [SMALL_STATE(118)] = 3839,
  [SMALL_STATE(119)] = 3858,
  [SMALL_STATE(120)] = 3877,
  [SMALL_STATE(121)] = 3888,
  [SMALL_STATE(122)] = 3907,
  [SMALL_STATE(123)] = 3926,
  [SMALL_STATE(124)] = 3945,
  [SMALL_STATE(125)] = 3964,
  [SMALL_STATE(126)] = 3983,
  [SMALL_STATE(127)] = 4002,
  [SMALL_STATE(128)] = 4013,
  [SMALL_STATE(129)] = 4032,
  [SMALL_STATE(130)] = 4042,
  [SMALL_STATE(131)] = 4058,
  [SMALL_STATE(132)] = 4068,
  [SMALL_STATE(133)] = 4078,
  [SMALL_STATE(134)] = 4094,
  [SMALL_STATE(135)] = 4110,
  [SMALL_STATE(136)] = 4120,
  [SMALL_STATE(137)] = 4130,
  [SMALL_STATE(138)] = 4146,
  [SMALL_STATE(139)] = 4156,
  [SMALL_STATE(140)] = 4172,
  [SMALL_STATE(141)] = 4182,
  [SMALL_STATE(142)] = 4192,
  [SMALL_STATE(143)] = 4202,
  [SMALL_STATE(144)] = 4212,
  [SMALL_STATE(145)] = 4222,
  [SMALL_STATE(146)] = 4232,
  [SMALL_STATE(147)] = 4242,
  [SMALL_STATE(148)] = 4252,
  [SMALL_STATE(149)] = 4265,
  [SMALL_STATE(150)] = 4278,
  [SMALL_STATE(151)] = 4291,
  [SMALL_STATE(152)] = 4304,
  [SMALL_STATE(153)] = 4312,
  [SMALL_STATE(154)] = 4320,
  [SMALL_STATE(155)] = 4328,
  [SMALL_STATE(156)] = 4336,
  [SMALL_STATE(157)] = 4344,
  [SMALL_STATE(158)] = 4354,
  [SMALL_STATE(159)] = 4362,
  [SMALL_STATE(160)] = 4369,
  [SMALL_STATE(161)] = 4376,
  [SMALL_STATE(162)] = 4383,
  [SMALL_STATE(163)] = 4390,
  [SMALL_STATE(164)] = 4397,
  [SMALL_STATE(165)] = 4404,
  [SMALL_STATE(166)] = 4411,
  [SMALL_STATE(167)] = 4418,
  [SMALL_STATE(168)] = 4425,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(68),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(18),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(139),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(4),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(167),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(106),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 7, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 7, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 7, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 7, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 6, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 6, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_path, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_path, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_path_repeat1, 2, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_path_repeat1, 2, 0, 0),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_path_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_path, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_path, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_path, 3, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0), SHIFT_REPEAT(89),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0), SHIFT_REPEAT(88),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resource_name, 4, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 5, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2, 0, 0),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(134),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(134),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 6, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 3, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [464] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
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

TS_PUBLIC const TSLanguage *tree_sitter_hocon(void) {
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
