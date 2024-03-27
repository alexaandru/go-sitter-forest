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
#define STATE_COUNT 539
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 204
#define ALIAS_COUNT 0
#define TOKEN_COUNT 117
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 36

enum ts_symbol_identifiers {
  sym_keyword_from = 1,
  sym_keyword_filter = 2,
  sym_keyword_derive = 3,
  sym_keyword_group = 4,
  sym_keyword_aggregate = 5,
  sym_keyword_sort = 6,
  sym_keyword_take = 7,
  sym_keyword_window = 8,
  sym_keyword_join = 9,
  sym_keyword_select = 10,
  sym_keyword_true = 11,
  sym_keyword_false = 12,
  sym_keyword_case = 13,
  sym_keyword_append = 14,
  sym_keyword_remove = 15,
  sym_keyword_intersect = 16,
  sym_keyword_average = 17,
  sym_keyword_min = 18,
  sym_keyword_max = 19,
  sym_keyword_count = 20,
  sym_keyword_stddev = 21,
  sym_keyword_avg = 22,
  sym_keyword_sum = 23,
  sym_keyword_count_distinct = 24,
  sym_keyword_lag = 25,
  sym_keyword_lead = 26,
  sym_keyword_first = 27,
  sym_keyword_last = 28,
  sym_keyword_rank = 29,
  sym_keyword_row_number = 30,
  sym_keyword_round = 31,
  sym_keyword_all = 32,
  sym_keyword_map = 33,
  sym_keyword_side = 34,
  sym_keyword_inner = 35,
  sym_keyword_left = 36,
  sym_keyword_right = 37,
  sym_keyword_full = 38,
  sym_keyword_in = 39,
  sym_keyword_rolling = 40,
  sym_keyword_rows = 41,
  sym_keyword_expanding = 42,
  sym_keyword_null = 43,
  sym_keyword_loop = 44,
  sym_keyword_internal = 45,
  sym_keyword_module = 46,
  sym_keyword_let = 47,
  sym_keyword_prql = 48,
  sym_keyword_version = 49,
  sym_keyword_target = 50,
  anon_sym_COLON = 51,
  anon_sym_sql_DOTansi = 52,
  anon_sym_sql_DOTbigquery = 53,
  anon_sym_sql_DOTclickhouse = 54,
  anon_sym_sql_DOTgeneric = 55,
  anon_sym_sql_DOThive = 56,
  anon_sym_sql_DOTmssql = 57,
  anon_sym_sql_DOTmysql = 58,
  anon_sym_sql_DOTpostgres = 59,
  anon_sym_sql_DOTsqlite = 60,
  anon_sym_sql_DOTsnowflake = 61,
  anon_sym_sql_DOTduckdb = 62,
  sym_keyword_from_text = 63,
  sym_keyword_format = 64,
  sym_keyword_csv = 65,
  sym_keyword_json = 66,
  anon_sym_EQ = 67,
  anon_sym_LPAREN = 68,
  anon_sym_COMMA = 69,
  anon_sym_RPAREN = 70,
  anon_sym_DASH_GT = 71,
  anon_sym_DOT = 72,
  anon_sym_LBRACE = 73,
  anon_sym_RBRACE = 74,
  anon_sym_EQ_GT = 75,
  anon_sym_DASH = 76,
  anon_sym_PLUS = 77,
  anon_sym_EQ_EQ = 78,
  anon_sym_DQUOTE = 79,
  aux_sym__double_quote_string_token1 = 80,
  anon_sym_SQUOTE = 81,
  aux_sym__single_quote_string_token1 = 82,
  aux_sym__inner_triple_quotes_token1 = 83,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 84,
  anon_sym_f_DQUOTE = 85,
  anon_sym_f_DQUOTE_DQUOTE_DQUOTE = 86,
  anon_sym_s_DQUOTE = 87,
  anon_sym_s_DQUOTE_DQUOTE_DQUOTE = 88,
  sym__natural_number = 89,
  anon_sym__ = 90,
  anon_sym_BQUOTE = 91,
  sym__identifier = 92,
  sym__identifier_dot = 93,
  anon_sym_DOT_DOT = 94,
  anon_sym_STAR = 95,
  anon_sym_SLASH = 96,
  anon_sym_SLASH_SLASH = 97,
  anon_sym_TILDE_EQ = 98,
  anon_sym_BANG_EQ = 99,
  anon_sym_GT = 100,
  anon_sym_GT_EQ = 101,
  anon_sym_LT = 102,
  anon_sym_LT_EQ = 103,
  anon_sym_QMARK_QMARK = 104,
  anon_sym_AMP_AMP = 105,
  anon_sym_PIPE_PIPE = 106,
  aux_sym__date_token1 = 107,
  aux_sym__date_token2 = 108,
  anon_sym_AT = 109,
  aux_sym__time_token1 = 110,
  anon_sym_T = 111,
  anon_sym_Z = 112,
  anon_sym_POUND = 113,
  aux_sym_comment_token1 = 114,
  sym_bang = 115,
  sym_pipe = 116,
  sym_program = 117,
  sym_prql = 118,
  sym_target = 119,
  sym_pipeline = 120,
  sym_variable = 121,
  sym_function_definition = 122,
  sym_parameter = 123,
  sym__call_parameter = 124,
  sym_function_call = 125,
  sym_module_call = 126,
  sym_from_text = 127,
  sym_loop = 128,
  sym_transforms = 129,
  sym_from = 130,
  sym__table_selection = 131,
  sym__table_reference = 132,
  sym_derives = 133,
  sym__tuples = 134,
  sym_append = 135,
  sym_filter = 136,
  sym__boolean_expression = 137,
  sym_case = 138,
  sym_case_condition = 139,
  sym_aggregate = 140,
  sym__agg_keywords = 141,
  sym_aggregate_operation = 142,
  sym__aggregate_func = 143,
  sym_sorts = 144,
  sym__sort_instruction = 145,
  sym_direction = 146,
  sym_takes = 147,
  sym_window = 148,
  sym_window_definitions = 149,
  sym__window_definition = 150,
  sym_group = 151,
  sym_joins = 152,
  sym__join_definition = 153,
  sym_conditions = 154,
  sym__self_join = 155,
  sym_select = 156,
  sym_term = 157,
  sym__expression = 158,
  sym_literal = 159,
  sym_f_string = 160,
  sym_s_string = 161,
  sym__double_quote_string = 162,
  sym__single_quote_string = 163,
  aux_sym__inner_triple_quotes = 164,
  sym__triple_quote_string = 165,
  sym__double_f_string = 166,
  sym__triple_f_string = 167,
  sym__double_s_string = 168,
  sym__triple_s_string = 169,
  sym_literal_string = 170,
  aux_sym__friendly_number = 171,
  sym_integer = 172,
  sym_decimal_number = 173,
  sym_field = 174,
  sym__alias_identifier = 175,
  sym_identifier = 176,
  sym_range = 177,
  sym__agg_rhs_assignment = 178,
  sym_assignment = 179,
  sym_binary_expression = 180,
  sym__date = 181,
  sym_date = 182,
  sym__time = 183,
  sym_time = 184,
  sym_timestamp = 185,
  sym_timezone = 186,
  sym_comment = 187,
  aux_sym_program_repeat1 = 188,
  aux_sym_program_repeat2 = 189,
  aux_sym_variable_repeat1 = 190,
  aux_sym_function_definition_repeat1 = 191,
  aux_sym_function_call_repeat1 = 192,
  aux_sym_module_call_repeat1 = 193,
  aux_sym_transforms_repeat1 = 194,
  aux_sym__tuples_repeat1 = 195,
  aux_sym_case_repeat1 = 196,
  aux_sym_case_repeat2 = 197,
  aux_sym_aggregate_repeat1 = 198,
  aux_sym_sorts_repeat1 = 199,
  aux_sym_window_definitions_repeat1 = 200,
  aux_sym_group_repeat1 = 201,
  aux_sym_group_repeat2 = 202,
  aux_sym_conditions_repeat1 = 203,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_from] = "keyword_from",
  [sym_keyword_filter] = "keyword_filter",
  [sym_keyword_derive] = "keyword_derive",
  [sym_keyword_group] = "keyword_group",
  [sym_keyword_aggregate] = "keyword_aggregate",
  [sym_keyword_sort] = "keyword_sort",
  [sym_keyword_take] = "keyword_take",
  [sym_keyword_window] = "keyword_window",
  [sym_keyword_join] = "keyword_join",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_true] = "keyword_true",
  [sym_keyword_false] = "keyword_false",
  [sym_keyword_case] = "keyword_case",
  [sym_keyword_append] = "keyword_append",
  [sym_keyword_remove] = "keyword_remove",
  [sym_keyword_intersect] = "keyword_intersect",
  [sym_keyword_average] = "keyword_average",
  [sym_keyword_min] = "keyword_min",
  [sym_keyword_max] = "keyword_max",
  [sym_keyword_count] = "keyword_count",
  [sym_keyword_stddev] = "keyword_stddev",
  [sym_keyword_avg] = "keyword_avg",
  [sym_keyword_sum] = "keyword_sum",
  [sym_keyword_count_distinct] = "keyword_count_distinct",
  [sym_keyword_lag] = "keyword_lag",
  [sym_keyword_lead] = "keyword_lead",
  [sym_keyword_first] = "keyword_first",
  [sym_keyword_last] = "keyword_last",
  [sym_keyword_rank] = "keyword_rank",
  [sym_keyword_row_number] = "keyword_row_number",
  [sym_keyword_round] = "keyword_round",
  [sym_keyword_all] = "keyword_all",
  [sym_keyword_map] = "keyword_map",
  [sym_keyword_side] = "keyword_side",
  [sym_keyword_inner] = "keyword_inner",
  [sym_keyword_left] = "keyword_left",
  [sym_keyword_right] = "keyword_right",
  [sym_keyword_full] = "keyword_full",
  [sym_keyword_in] = "keyword_in",
  [sym_keyword_rolling] = "keyword_rolling",
  [sym_keyword_rows] = "keyword_rows",
  [sym_keyword_expanding] = "keyword_expanding",
  [sym_keyword_null] = "keyword_null",
  [sym_keyword_loop] = "keyword_loop",
  [sym_keyword_internal] = "keyword_internal",
  [sym_keyword_module] = "keyword_module",
  [sym_keyword_let] = "keyword_let",
  [sym_keyword_prql] = "keyword_prql",
  [sym_keyword_version] = "keyword_version",
  [sym_keyword_target] = "keyword_target",
  [anon_sym_COLON] = ":",
  [anon_sym_sql_DOTansi] = "sql.ansi",
  [anon_sym_sql_DOTbigquery] = "sql.bigquery",
  [anon_sym_sql_DOTclickhouse] = "sql.clickhouse",
  [anon_sym_sql_DOTgeneric] = "sql.generic",
  [anon_sym_sql_DOThive] = "sql.hive",
  [anon_sym_sql_DOTmssql] = "sql.mssql",
  [anon_sym_sql_DOTmysql] = "sql.mysql",
  [anon_sym_sql_DOTpostgres] = "sql.postgres",
  [anon_sym_sql_DOTsqlite] = "sql.sqlite",
  [anon_sym_sql_DOTsnowflake] = "sql.snowflake",
  [anon_sym_sql_DOTduckdb] = "sql.duckdb",
  [sym_keyword_from_text] = "keyword_from_text",
  [sym_keyword_format] = "keyword_format",
  [sym_keyword_csv] = "keyword_csv",
  [sym_keyword_json] = "keyword_json",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__single_quote_string_token1] = "_single_quote_string_token1",
  [aux_sym__inner_triple_quotes_token1] = "_inner_triple_quotes_token1",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_f_DQUOTE] = "f\"",
  [anon_sym_f_DQUOTE_DQUOTE_DQUOTE] = "f\"\"\"",
  [anon_sym_s_DQUOTE] = "s\"",
  [anon_sym_s_DQUOTE_DQUOTE_DQUOTE] = "s\"\"\"",
  [sym__natural_number] = "_natural_number",
  [anon_sym__] = "_",
  [anon_sym_BQUOTE] = "`",
  [sym__identifier] = "_identifier",
  [sym__identifier_dot] = "_identifier_dot",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [aux_sym__date_token1] = "_date_token1",
  [aux_sym__date_token2] = "_date_token2",
  [anon_sym_AT] = "@",
  [aux_sym__time_token1] = "_time_token1",
  [anon_sym_T] = "T",
  [anon_sym_Z] = "Z",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_bang] = "bang",
  [sym_pipe] = "pipe",
  [sym_program] = "program",
  [sym_prql] = "prql",
  [sym_target] = "target",
  [sym_pipeline] = "pipeline",
  [sym_variable] = "variable",
  [sym_function_definition] = "function_definition",
  [sym_parameter] = "parameter",
  [sym__call_parameter] = "parameter",
  [sym_function_call] = "function_call",
  [sym_module_call] = "module_call",
  [sym_from_text] = "from_text",
  [sym_loop] = "loop",
  [sym_transforms] = "transforms",
  [sym_from] = "from",
  [sym__table_selection] = "_table_selection",
  [sym__table_reference] = "_table_reference",
  [sym_derives] = "derives",
  [sym__tuples] = "_tuples",
  [sym_append] = "append",
  [sym_filter] = "filter",
  [sym__boolean_expression] = "_boolean_expression",
  [sym_case] = "case",
  [sym_case_condition] = "case_condition",
  [sym_aggregate] = "aggregate",
  [sym__agg_keywords] = "_agg_keywords",
  [sym_aggregate_operation] = "aggregate_operation",
  [sym__aggregate_func] = "aggregate_operation",
  [sym_sorts] = "sorts",
  [sym__sort_instruction] = "_sort_instruction",
  [sym_direction] = "direction",
  [sym_takes] = "takes",
  [sym_window] = "window",
  [sym_window_definitions] = "window_definitions",
  [sym__window_definition] = "_window_definition",
  [sym_group] = "group",
  [sym_joins] = "joins",
  [sym__join_definition] = "_join_definition",
  [sym_conditions] = "conditions",
  [sym__self_join] = "_self_join",
  [sym_select] = "select",
  [sym_term] = "term",
  [sym__expression] = "_expression",
  [sym_literal] = "literal",
  [sym_f_string] = "f_string",
  [sym_s_string] = "s_string",
  [sym__double_quote_string] = "_double_quote_string",
  [sym__single_quote_string] = "_single_quote_string",
  [aux_sym__inner_triple_quotes] = "_inner_triple_quotes",
  [sym__triple_quote_string] = "literal",
  [sym__double_f_string] = "_double_f_string",
  [sym__triple_f_string] = "_triple_f_string",
  [sym__double_s_string] = "_double_s_string",
  [sym__triple_s_string] = "_triple_s_string",
  [sym_literal_string] = "literal_string",
  [aux_sym__friendly_number] = "_friendly_number",
  [sym_integer] = "integer",
  [sym_decimal_number] = "decimal_number",
  [sym_field] = "field",
  [sym__alias_identifier] = "_alias_identifier",
  [sym_identifier] = "identifier",
  [sym_range] = "range",
  [sym__agg_rhs_assignment] = "_agg_rhs_assignment",
  [sym_assignment] = "assignment",
  [sym_binary_expression] = "binary_expression",
  [sym__date] = "_date",
  [sym_date] = "date",
  [sym__time] = "_time",
  [sym_time] = "time",
  [sym_timestamp] = "timestamp",
  [sym_timezone] = "timezone",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_module_call_repeat1] = "module_call_repeat1",
  [aux_sym_transforms_repeat1] = "transforms_repeat1",
  [aux_sym__tuples_repeat1] = "_tuples_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
  [aux_sym_case_repeat2] = "case_repeat2",
  [aux_sym_aggregate_repeat1] = "aggregate_repeat1",
  [aux_sym_sorts_repeat1] = "sorts_repeat1",
  [aux_sym_window_definitions_repeat1] = "window_definitions_repeat1",
  [aux_sym_group_repeat1] = "group_repeat1",
  [aux_sym_group_repeat2] = "group_repeat2",
  [aux_sym_conditions_repeat1] = "conditions_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword_from] = sym_keyword_from,
  [sym_keyword_filter] = sym_keyword_filter,
  [sym_keyword_derive] = sym_keyword_derive,
  [sym_keyword_group] = sym_keyword_group,
  [sym_keyword_aggregate] = sym_keyword_aggregate,
  [sym_keyword_sort] = sym_keyword_sort,
  [sym_keyword_take] = sym_keyword_take,
  [sym_keyword_window] = sym_keyword_window,
  [sym_keyword_join] = sym_keyword_join,
  [sym_keyword_select] = sym_keyword_select,
  [sym_keyword_true] = sym_keyword_true,
  [sym_keyword_false] = sym_keyword_false,
  [sym_keyword_case] = sym_keyword_case,
  [sym_keyword_append] = sym_keyword_append,
  [sym_keyword_remove] = sym_keyword_remove,
  [sym_keyword_intersect] = sym_keyword_intersect,
  [sym_keyword_average] = sym_keyword_average,
  [sym_keyword_min] = sym_keyword_min,
  [sym_keyword_max] = sym_keyword_max,
  [sym_keyword_count] = sym_keyword_count,
  [sym_keyword_stddev] = sym_keyword_stddev,
  [sym_keyword_avg] = sym_keyword_avg,
  [sym_keyword_sum] = sym_keyword_sum,
  [sym_keyword_count_distinct] = sym_keyword_count_distinct,
  [sym_keyword_lag] = sym_keyword_lag,
  [sym_keyword_lead] = sym_keyword_lead,
  [sym_keyword_first] = sym_keyword_first,
  [sym_keyword_last] = sym_keyword_last,
  [sym_keyword_rank] = sym_keyword_rank,
  [sym_keyword_row_number] = sym_keyword_row_number,
  [sym_keyword_round] = sym_keyword_round,
  [sym_keyword_all] = sym_keyword_all,
  [sym_keyword_map] = sym_keyword_map,
  [sym_keyword_side] = sym_keyword_side,
  [sym_keyword_inner] = sym_keyword_inner,
  [sym_keyword_left] = sym_keyword_left,
  [sym_keyword_right] = sym_keyword_right,
  [sym_keyword_full] = sym_keyword_full,
  [sym_keyword_in] = sym_keyword_in,
  [sym_keyword_rolling] = sym_keyword_rolling,
  [sym_keyword_rows] = sym_keyword_rows,
  [sym_keyword_expanding] = sym_keyword_expanding,
  [sym_keyword_null] = sym_keyword_null,
  [sym_keyword_loop] = sym_keyword_loop,
  [sym_keyword_internal] = sym_keyword_internal,
  [sym_keyword_module] = sym_keyword_module,
  [sym_keyword_let] = sym_keyword_let,
  [sym_keyword_prql] = sym_keyword_prql,
  [sym_keyword_version] = sym_keyword_version,
  [sym_keyword_target] = sym_keyword_target,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_sql_DOTansi] = anon_sym_sql_DOTansi,
  [anon_sym_sql_DOTbigquery] = anon_sym_sql_DOTbigquery,
  [anon_sym_sql_DOTclickhouse] = anon_sym_sql_DOTclickhouse,
  [anon_sym_sql_DOTgeneric] = anon_sym_sql_DOTgeneric,
  [anon_sym_sql_DOThive] = anon_sym_sql_DOThive,
  [anon_sym_sql_DOTmssql] = anon_sym_sql_DOTmssql,
  [anon_sym_sql_DOTmysql] = anon_sym_sql_DOTmysql,
  [anon_sym_sql_DOTpostgres] = anon_sym_sql_DOTpostgres,
  [anon_sym_sql_DOTsqlite] = anon_sym_sql_DOTsqlite,
  [anon_sym_sql_DOTsnowflake] = anon_sym_sql_DOTsnowflake,
  [anon_sym_sql_DOTduckdb] = anon_sym_sql_DOTduckdb,
  [sym_keyword_from_text] = sym_keyword_from_text,
  [sym_keyword_format] = sym_keyword_format,
  [sym_keyword_csv] = sym_keyword_csv,
  [sym_keyword_json] = sym_keyword_json,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__single_quote_string_token1] = aux_sym__single_quote_string_token1,
  [aux_sym__inner_triple_quotes_token1] = aux_sym__inner_triple_quotes_token1,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_f_DQUOTE] = anon_sym_f_DQUOTE,
  [anon_sym_f_DQUOTE_DQUOTE_DQUOTE] = anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_s_DQUOTE] = anon_sym_s_DQUOTE,
  [anon_sym_s_DQUOTE_DQUOTE_DQUOTE] = anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
  [sym__natural_number] = sym__natural_number,
  [anon_sym__] = anon_sym__,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym__identifier] = sym__identifier,
  [sym__identifier_dot] = sym__identifier_dot,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [aux_sym__date_token1] = aux_sym__date_token1,
  [aux_sym__date_token2] = aux_sym__date_token2,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__time_token1] = aux_sym__time_token1,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_Z] = anon_sym_Z,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_bang] = sym_bang,
  [sym_pipe] = sym_pipe,
  [sym_program] = sym_program,
  [sym_prql] = sym_prql,
  [sym_target] = sym_target,
  [sym_pipeline] = sym_pipeline,
  [sym_variable] = sym_variable,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter] = sym_parameter,
  [sym__call_parameter] = sym_parameter,
  [sym_function_call] = sym_function_call,
  [sym_module_call] = sym_module_call,
  [sym_from_text] = sym_from_text,
  [sym_loop] = sym_loop,
  [sym_transforms] = sym_transforms,
  [sym_from] = sym_from,
  [sym__table_selection] = sym__table_selection,
  [sym__table_reference] = sym__table_reference,
  [sym_derives] = sym_derives,
  [sym__tuples] = sym__tuples,
  [sym_append] = sym_append,
  [sym_filter] = sym_filter,
  [sym__boolean_expression] = sym__boolean_expression,
  [sym_case] = sym_case,
  [sym_case_condition] = sym_case_condition,
  [sym_aggregate] = sym_aggregate,
  [sym__agg_keywords] = sym__agg_keywords,
  [sym_aggregate_operation] = sym_aggregate_operation,
  [sym__aggregate_func] = sym_aggregate_operation,
  [sym_sorts] = sym_sorts,
  [sym__sort_instruction] = sym__sort_instruction,
  [sym_direction] = sym_direction,
  [sym_takes] = sym_takes,
  [sym_window] = sym_window,
  [sym_window_definitions] = sym_window_definitions,
  [sym__window_definition] = sym__window_definition,
  [sym_group] = sym_group,
  [sym_joins] = sym_joins,
  [sym__join_definition] = sym__join_definition,
  [sym_conditions] = sym_conditions,
  [sym__self_join] = sym__self_join,
  [sym_select] = sym_select,
  [sym_term] = sym_term,
  [sym__expression] = sym__expression,
  [sym_literal] = sym_literal,
  [sym_f_string] = sym_f_string,
  [sym_s_string] = sym_s_string,
  [sym__double_quote_string] = sym__double_quote_string,
  [sym__single_quote_string] = sym__single_quote_string,
  [aux_sym__inner_triple_quotes] = aux_sym__inner_triple_quotes,
  [sym__triple_quote_string] = sym_literal,
  [sym__double_f_string] = sym__double_f_string,
  [sym__triple_f_string] = sym__triple_f_string,
  [sym__double_s_string] = sym__double_s_string,
  [sym__triple_s_string] = sym__triple_s_string,
  [sym_literal_string] = sym_literal_string,
  [aux_sym__friendly_number] = aux_sym__friendly_number,
  [sym_integer] = sym_integer,
  [sym_decimal_number] = sym_decimal_number,
  [sym_field] = sym_field,
  [sym__alias_identifier] = sym__alias_identifier,
  [sym_identifier] = sym_identifier,
  [sym_range] = sym_range,
  [sym__agg_rhs_assignment] = sym__agg_rhs_assignment,
  [sym_assignment] = sym_assignment,
  [sym_binary_expression] = sym_binary_expression,
  [sym__date] = sym__date,
  [sym_date] = sym_date,
  [sym__time] = sym__time,
  [sym_time] = sym_time,
  [sym_timestamp] = sym_timestamp,
  [sym_timezone] = sym_timezone,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_module_call_repeat1] = aux_sym_module_call_repeat1,
  [aux_sym_transforms_repeat1] = aux_sym_transforms_repeat1,
  [aux_sym__tuples_repeat1] = aux_sym__tuples_repeat1,
  [aux_sym_case_repeat1] = aux_sym_case_repeat1,
  [aux_sym_case_repeat2] = aux_sym_case_repeat2,
  [aux_sym_aggregate_repeat1] = aux_sym_aggregate_repeat1,
  [aux_sym_sorts_repeat1] = aux_sym_sorts_repeat1,
  [aux_sym_window_definitions_repeat1] = aux_sym_window_definitions_repeat1,
  [aux_sym_group_repeat1] = aux_sym_group_repeat1,
  [aux_sym_group_repeat2] = aux_sym_group_repeat2,
  [aux_sym_conditions_repeat1] = aux_sym_conditions_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword_from] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_derive] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_group] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_aggregate] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_sort] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_take] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_window] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_join] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_select] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_true] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_false] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_case] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_append] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_remove] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_intersect] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_average] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_min] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_max] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_count] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_stddev] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_avg] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_sum] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_count_distinct] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_lag] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_lead] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_first] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_last] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_rank] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_row_number] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_round] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_all] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_map] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_side] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_left] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_right] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_full] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_in] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_rolling] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_rows] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_expanding] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_null] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_internal] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_module] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_let] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_prql] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_version] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_target] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTansi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTbigquery] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTclickhouse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTgeneric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOThive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTmssql] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTmysql] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTpostgres] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTsqlite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTsnowflake] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTduckdb] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword_from_text] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_format] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_csv] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_json] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__single_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inner_triple_quotes_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__natural_number] = {
    .visible = false,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier_dot] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__date_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__date_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__time_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_bang] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_prql] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__call_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_module_call] = {
    .visible = true,
    .named = true,
  },
  [sym_from_text] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_transforms] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym__table_selection] = {
    .visible = false,
    .named = true,
  },
  [sym__table_reference] = {
    .visible = false,
    .named = true,
  },
  [sym_derives] = {
    .visible = true,
    .named = true,
  },
  [sym__tuples] = {
    .visible = false,
    .named = true,
  },
  [sym_append] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym_case_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate] = {
    .visible = true,
    .named = true,
  },
  [sym__agg_keywords] = {
    .visible = false,
    .named = true,
  },
  [sym_aggregate_operation] = {
    .visible = true,
    .named = true,
  },
  [sym__aggregate_func] = {
    .visible = true,
    .named = true,
  },
  [sym_sorts] = {
    .visible = true,
    .named = true,
  },
  [sym__sort_instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_takes] = {
    .visible = true,
    .named = true,
  },
  [sym_window] = {
    .visible = true,
    .named = true,
  },
  [sym_window_definitions] = {
    .visible = true,
    .named = true,
  },
  [sym__window_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_joins] = {
    .visible = true,
    .named = true,
  },
  [sym__join_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_conditions] = {
    .visible = true,
    .named = true,
  },
  [sym__self_join] = {
    .visible = false,
    .named = true,
  },
  [sym_select] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_f_string] = {
    .visible = true,
    .named = true,
  },
  [sym_s_string] = {
    .visible = true,
    .named = true,
  },
  [sym__double_quote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__single_quote_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__inner_triple_quotes] = {
    .visible = false,
    .named = false,
  },
  [sym__triple_quote_string] = {
    .visible = true,
    .named = true,
  },
  [sym__double_f_string] = {
    .visible = false,
    .named = true,
  },
  [sym__triple_f_string] = {
    .visible = false,
    .named = true,
  },
  [sym__double_s_string] = {
    .visible = false,
    .named = true,
  },
  [sym__triple_s_string] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__friendly_number] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_number] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__alias_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym__agg_rhs_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__date] = {
    .visible = false,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym__time] = {
    .visible = false,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_timestamp] = {
    .visible = true,
    .named = true,
  },
  [sym_timezone] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transforms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tuples_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aggregate_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sorts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_window_definitions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditions_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_default = 2,
  field_from = 3,
  field_left = 4,
  field_logic = 5,
  field_module = 6,
  field_name = 7,
  field_operation = 8,
  field_operator = 9,
  field_predicate = 10,
  field_result = 11,
  field_right = 12,
  field_submodule = 13,
  field_table = 14,
  field_table_reference = 15,
  field_target = 16,
  field_till = 17,
  field_value = 18,
  field_version = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_default] = "default",
  [field_from] = "from",
  [field_left] = "left",
  [field_logic] = "logic",
  [field_module] = "module",
  [field_name] = "name",
  [field_operation] = "operation",
  [field_operator] = "operator",
  [field_predicate] = "predicate",
  [field_result] = "result",
  [field_right] = "right",
  [field_submodule] = "submodule",
  [field_table] = "table",
  [field_table_reference] = "table_reference",
  [field_target] = "target",
  [field_till] = "till",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 3},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 1},
  [13] = {.index = 15, .length = 1},
  [14] = {.index = 16, .length = 3},
  [15] = {.index = 19, .length = 1},
  [16] = {.index = 20, .length = 2},
  [17] = {.index = 22, .length = 1},
  [18] = {.index = 23, .length = 3},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 3},
  [21] = {.index = 31, .length = 1},
  [22] = {.index = 32, .length = 3},
  [23] = {.index = 35, .length = 3},
  [24] = {.index = 38, .length = 2},
  [25] = {.index = 40, .length = 2},
  [26] = {.index = 42, .length = 1},
  [27] = {.index = 43, .length = 3},
  [28] = {.index = 46, .length = 3},
  [29] = {.index = 49, .length = 3},
  [30] = {.index = 52, .length = 3},
  [31] = {.index = 55, .length = 1},
  [32] = {.index = 56, .length = 2},
  [33] = {.index = 58, .length = 1},
  [34] = {.index = 59, .length = 2},
  [35] = {.index = 61, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alias, 1, .inherited = true},
    {field_table_reference, 1, .inherited = true},
  [2] =
    {field_table_reference, 0, .inherited = true},
  [3] =
    {field_table_reference, 0},
  [4] =
    {field_predicate, 1, .inherited = true},
  [5] =
    {field_predicate, 0},
  [6] =
    {field_name, 0},
  [7] =
    {field_value, 0},
  [8] =
    {field_alias, 1, .inherited = true},
    {field_table, 1},
    {field_table_reference, 1, .inherited = true},
  [11] =
    {field_alias, 0},
    {field_table_reference, 2, .inherited = true},
  [13] =
    {field_name, 1},
  [14] =
    {field_version, 3},
  [15] =
    {field_target, 3},
  [16] =
    {field_alias, 2, .inherited = true},
    {field_table, 2},
    {field_table_reference, 2, .inherited = true},
  [19] =
    {field_default, 2},
  [20] =
    {field_logic, 4},
    {field_name, 1},
  [22] =
    {field_predicate, 1},
  [23] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [26] =
    {field_name, 2},
    {field_table, 0},
  [28] =
    {field_alias, 0},
    {field_operator, 1},
    {field_operator, 2},
  [31] =
    {field_operation, 0},
  [32] =
    {field_alias, 0},
    {field_operation, 2, .inherited = true},
    {field_operator, 1},
  [35] =
    {field_from, 0},
    {field_operator, 1},
    {field_till, 2},
  [38] =
    {field_module, 0},
    {field_submodule, 2},
  [40] =
    {field_operation, 0},
    {field_operation, 1},
  [42] =
    {field_value, 0, .inherited = true},
  [43] =
    {field_module, 0},
    {field_submodule, 2},
    {field_submodule, 3, .inherited = true},
  [46] =
    {field_left, 1},
    {field_operator, 2},
    {field_right, 3},
  [49] =
    {field_alias, 0},
    {field_operator, 1},
    {field_operator, 3},
  [52] =
    {field_alias, 0},
    {field_operation, 3, .inherited = true},
    {field_operator, 1},
  [55] =
    {field_submodule, 1},
  [56] =
    {field_submodule, 0, .inherited = true},
    {field_submodule, 1, .inherited = true},
  [58] =
    {field_value, 2},
  [59] =
    {field_default, 0},
    {field_result, 2},
  [61] =
    {field_result, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [0] = sym_identifier,
  },
  [9] = {
    [1] = sym_term,
  },
  [12] = {
    [3] = sym_literal,
  },
  [14] = {
    [2] = sym_term,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__table_selection, 2,
    sym__table_selection,
    sym_term,
  sym__double_quote_string, 3,
    sym__double_quote_string,
    sym_identifier,
    sym_literal,
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
  [8] = 7,
  [9] = 7,
  [10] = 5,
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
  [21] = 15,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 20,
  [26] = 15,
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
  [53] = 28,
  [54] = 5,
  [55] = 36,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 28,
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
  [79] = 36,
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
  [120] = 100,
  [121] = 115,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 124,
  [126] = 28,
  [127] = 36,
  [128] = 128,
  [129] = 28,
  [130] = 36,
  [131] = 131,
  [132] = 16,
  [133] = 17,
  [134] = 22,
  [135] = 135,
  [136] = 136,
  [137] = 102,
  [138] = 138,
  [139] = 32,
  [140] = 17,
  [141] = 22,
  [142] = 142,
  [143] = 114,
  [144] = 16,
  [145] = 145,
  [146] = 62,
  [147] = 111,
  [148] = 72,
  [149] = 112,
  [150] = 105,
  [151] = 151,
  [152] = 22,
  [153] = 16,
  [154] = 28,
  [155] = 131,
  [156] = 32,
  [157] = 17,
  [158] = 36,
  [159] = 128,
  [160] = 114,
  [161] = 100,
  [162] = 138,
  [163] = 105,
  [164] = 136,
  [165] = 112,
  [166] = 145,
  [167] = 142,
  [168] = 151,
  [169] = 62,
  [170] = 72,
  [171] = 32,
  [172] = 111,
  [173] = 115,
  [174] = 102,
  [175] = 175,
  [176] = 176,
  [177] = 71,
  [178] = 36,
  [179] = 179,
  [180] = 28,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 124,
  [194] = 194,
  [195] = 195,
  [196] = 196,
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
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
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
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 36,
  [261] = 28,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 264,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 16,
  [274] = 17,
  [275] = 22,
  [276] = 131,
  [277] = 264,
  [278] = 266,
  [279] = 102,
  [280] = 72,
  [281] = 111,
  [282] = 62,
  [283] = 283,
  [284] = 136,
  [285] = 105,
  [286] = 32,
  [287] = 114,
  [288] = 151,
  [289] = 142,
  [290] = 112,
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
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 22,
  [317] = 17,
  [318] = 318,
  [319] = 16,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 32,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 62,
  [334] = 82,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 72,
  [340] = 340,
  [341] = 341,
  [342] = 36,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 22,
  [347] = 17,
  [348] = 16,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 28,
  [355] = 355,
  [356] = 356,
  [357] = 114,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 105,
  [365] = 365,
  [366] = 366,
  [367] = 32,
  [368] = 361,
  [369] = 369,
  [370] = 361,
  [371] = 361,
  [372] = 361,
  [373] = 102,
  [374] = 112,
  [375] = 111,
  [376] = 376,
  [377] = 361,
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
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 387,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 62,
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
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 439,
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
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 469,
  [477] = 459,
  [478] = 478,
  [479] = 446,
  [480] = 439,
  [481] = 444,
  [482] = 482,
  [483] = 448,
  [484] = 484,
  [485] = 469,
  [486] = 459,
  [487] = 487,
  [488] = 446,
  [489] = 489,
  [490] = 444,
  [491] = 491,
  [492] = 492,
  [493] = 469,
  [494] = 459,
  [495] = 495,
  [496] = 446,
  [497] = 439,
  [498] = 444,
  [499] = 469,
  [500] = 459,
  [501] = 501,
  [502] = 446,
  [503] = 439,
  [504] = 444,
  [505] = 469,
  [506] = 506,
  [507] = 439,
  [508] = 469,
  [509] = 469,
  [510] = 469,
  [511] = 492,
  [512] = 458,
  [513] = 457,
  [514] = 465,
  [515] = 462,
  [516] = 492,
  [517] = 458,
  [518] = 457,
  [519] = 519,
  [520] = 492,
  [521] = 458,
  [522] = 457,
  [523] = 492,
  [524] = 458,
  [525] = 457,
  [526] = 492,
  [527] = 458,
  [528] = 492,
  [529] = 492,
  [530] = 492,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 467,
  [536] = 536,
  [537] = 537,
  [538] = 538,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(508);
      if (lookahead == '!') ADVANCE(915);
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == '*') ADVANCE(888);
      if (lookahead == '+') ADVANCE(622);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(621);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == '<') ADVANCE(895);
      if (lookahead == '=') ADVANCE(611);
      if (lookahead == '>') ADVANCE(893);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(221);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'J') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(215);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(905);
      if (lookahead == 'V') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(104);
      if (lookahead == 'Z') ADVANCE(907);
      if (lookahead == '_') ADVANCE(642);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 'j') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == 'v') ADVANCE(284);
      if (lookahead == 'w') ADVANCE(318);
      if (lookahead == '{') ADVANCE(617);
      if (lookahead == '|') ADVANCE(917);
      if (lookahead == '}') ADVANCE(618);
      if (lookahead == '~') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(501)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(914);
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 's') ADVANCE(647);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead == '{') ADVANCE(617);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '}') ADVANCE(618);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(479)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == '*') ADVANCE(888);
      if (lookahead == '+') ADVANCE(622);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == '<') ADVANCE(895);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(893);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'f') ADVANCE(771);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead == '|') ADVANCE(917);
      if (lookahead == '}') ADVANCE(618);
      if (lookahead == '~') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(480)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == '*') ADVANCE(888);
      if (lookahead == '+') ADVANCE(622);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == '<') ADVANCE(895);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(893);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'D') ADVANCE(679);
      if (lookahead == 'F') ADVANCE(649);
      if (lookahead == 'G') ADVANCE(733);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(718);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(680);
      if (lookahead == 'T') ADVANCE(654);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(770);
      if (lookahead == 'g') ADVANCE(854);
      if (lookahead == 'i') ADVANCE(834);
      if (lookahead == 'j') ADVANCE(843);
      if (lookahead == 'l') ADVANCE(839);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(775);
      if (lookahead == '|') ADVANCE(917);
      if (lookahead == '~') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(478)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'f') ADVANCE(771);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '}') ADVANCE(618);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(482)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'A') ADVANCE(759);
      if (lookahead == 'C') ADVANCE(715);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'M') ADVANCE(651);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(653);
      if (lookahead == 'S') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(879);
      if (lookahead == 'c') ADVANCE(836);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'm') ADVANCE(772);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 'r') ADVANCE(774);
      if (lookahead == 's') ADVANCE(646);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '}') ADVANCE(618);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(476)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'A') ADVANCE(759);
      if (lookahead == 'C') ADVANCE(655);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'M') ADVANCE(651);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'S') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(879);
      if (lookahead == 'c') ADVANCE(776);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'm') ADVANCE(772);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 's') ADVANCE(646);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead == '|') ADVANCE(916);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(477)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'A') ADVANCE(759);
      if (lookahead == 'C') ADVANCE(721);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'M') ADVANCE(651);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'S') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(879);
      if (lookahead == 'c') ADVANCE(842);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'm') ADVANCE(772);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 's') ADVANCE(646);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead == '|') ADVANCE(916);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(492)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'D') ADVANCE(679);
      if (lookahead == 'F') ADVANCE(649);
      if (lookahead == 'G') ADVANCE(733);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(718);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(680);
      if (lookahead == 'T') ADVANCE(654);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(770);
      if (lookahead == 'g') ADVANCE(854);
      if (lookahead == 'i') ADVANCE(834);
      if (lookahead == 'j') ADVANCE(843);
      if (lookahead == 'l') ADVANCE(839);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(775);
      if (lookahead == '|') ADVANCE(916);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(481)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead == 'q') ADVANCE(340);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(358);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(638);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(640);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(636);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == 'F') ADVANCE(735);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'f') ADVANCE(856);
      if (lookahead == '|') ADVANCE(916);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(486)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '+') ADVANCE(622);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '=') ADVANCE(609);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == '{') ADVANCE(617);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '}') ADVANCE(618);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(483)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == '=') ADVANCE(609);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == '|') ADVANCE(916);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(487)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == '|') ADVANCE(916);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(485)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == 'S') ADVANCE(695);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 's') ADVANCE(816);
      if (lookahead == '|') ADVANCE(916);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(484)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(902);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == '|') ADVANCE(916);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(489)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(902);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '|') ADVANCE(916);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(491)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 22:
      if (lookahead == '&') ADVANCE(898);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(234);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(887);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(892);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(623);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(623);
      if (lookahead == '>') ADVANCE(619);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(891);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(615);
      END_STATE();
    case 30:
      if (lookahead == '?') ADVANCE(897);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(186);
      if (lookahead == 'O') ADVANCE(211);
      if (lookahead == 'S') ADVANCE(216);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == 'O') ADVANCE(156);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(165);
      if (lookahead == 'I') ADVANCE(137);
      if (lookahead == 'O') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(158);
      if (lookahead == 'U') ADVANCE(124);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'R') ADVANCE(158);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'R') ADVANCE(213);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(138);
      if (lookahead == 'E') ADVANCE(135);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(126);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(587);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(199);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(100);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(206);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(151);
      END_STATE();
    case 46:
      if (lookahead == 'B') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(200);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(203);
      END_STATE();
    case 49:
      if (lookahead == 'C') ADVANCE(204);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(561);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(567);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(536);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(111);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(155);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(214);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(56);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(107);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(135);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(534);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(570);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(523);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(530);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(532);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(515);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(586);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(538);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(542);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(519);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(156);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(222);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(175);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(217);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == 'I') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(180);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead == 'U') ADVANCE(131);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == 'O') ADVANCE(180);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(177);
      if (lookahead == 'G') ADVANCE(554);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(171);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(173);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(201);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(182);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(192);
      if (lookahead == 'O') ADVANCE(156);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(150);
      END_STATE();
    case 91:
      if (lookahead == 'F') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(587);
      END_STATE();
    case 92:
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == 'P') ADVANCE(168);
      if (lookahead == 'V') ADVANCE(81);
      END_STATE();
    case 93:
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'P') ADVANCE(168);
      END_STATE();
    case 94:
      if (lookahead == 'G') ADVANCE(560);
      if (lookahead == 'S') ADVANCE(193);
      END_STATE();
    case 95:
      if (lookahead == 'G') ADVANCE(102);
      END_STATE();
    case 96:
      if (lookahead == 'G') ADVANCE(578);
      END_STATE();
    case 97:
      if (lookahead == 'G') ADVANCE(580);
      END_STATE();
    case 98:
      if (lookahead == 'G') ADVANCE(181);
      END_STATE();
    case 99:
      if (lookahead == 'G') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 'G') ADVANCE(71);
      END_STATE();
    case 101:
      if (lookahead == 'G') ADVANCE(44);
      END_STATE();
    case 102:
      if (lookahead == 'H') ADVANCE(198);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(218);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(139);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(145);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(148);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'O') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(158);
      if (lookahead == 'U') ADVANCE(124);
      END_STATE();
    case 109:
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'R') ADVANCE(158);
      END_STATE();
    case 110:
      if (lookahead == 'I') ADVANCE(153);
      END_STATE();
    case 111:
      if (lookahead == 'I') ADVANCE(190);
      END_STATE();
    case 112:
      if (lookahead == 'I') ADVANCE(160);
      END_STATE();
    case 113:
      if (lookahead == 'K') ADVANCE(564);
      END_STATE();
    case 114:
      if (lookahead == 'K') ADVANCE(65);
      END_STATE();
    case 115:
      if (lookahead == 'K') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 'L') ADVANCE(568);
      END_STATE();
    case 117:
      if (lookahead == 'L') ADVANCE(207);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(207);
      if (lookahead == 'R') ADVANCE(188);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(575);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(581);
      END_STATE();
    case 121:
      if (lookahead == 'L') ADVANCE(589);
      END_STATE();
    case 122:
      if (lookahead == 'L') ADVANCE(585);
      END_STATE();
    case 123:
      if (lookahead == 'L') ADVANCE(63);
      END_STATE();
    case 124:
      if (lookahead == 'L') ADVANCE(119);
      END_STATE();
    case 125:
      if (lookahead == 'L') ADVANCE(120);
      END_STATE();
    case 126:
      if (lookahead == 'L') ADVANCE(130);
      if (lookahead == 'U') ADVANCE(149);
      if (lookahead == 'W') ADVANCE(185);
      END_STATE();
    case 127:
      if (lookahead == 'L') ADVANCE(130);
      if (lookahead == 'W') ADVANCE(184);
      END_STATE();
    case 128:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 129:
      if (lookahead == 'L') ADVANCE(189);
      END_STATE();
    case 130:
      if (lookahead == 'L') ADVANCE(106);
      END_STATE();
    case 131:
      if (lookahead == 'M') ADVANCE(556);
      END_STATE();
    case 132:
      if (lookahead == 'M') ADVANCE(509);
      END_STATE();
    case 133:
      if (lookahead == 'M') ADVANCE(46);
      END_STATE();
    case 134:
      if (lookahead == 'M') ADVANCE(41);
      END_STATE();
    case 135:
      if (lookahead == 'M') ADVANCE(163);
      END_STATE();
    case 136:
      if (lookahead == 'N') ADVANCE(576);
      END_STATE();
    case 137:
      if (lookahead == 'N') ADVANCE(544);
      END_STATE();
    case 138:
      if (lookahead == 'N') ADVANCE(113);
      END_STATE();
    case 139:
      if (lookahead == 'N') ADVANCE(526);
      END_STATE();
    case 140:
      if (lookahead == 'N') ADVANCE(608);
      END_STATE();
    case 141:
      if (lookahead == 'N') ADVANCE(590);
      END_STATE();
    case 142:
      if (lookahead == 'N') ADVANCE(152);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(89);
      END_STATE();
    case 144:
      if (lookahead == 'N') ADVANCE(212);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(96);
      END_STATE();
    case 146:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(196);
      END_STATE();
    case 148:
      if (lookahead == 'N') ADVANCE(97);
      END_STATE();
    case 149:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 150:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 151:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 152:
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 153:
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 154:
      if (lookahead == 'N') ADVANCE(209);
      END_STATE();
    case 155:
      if (lookahead == 'O') ADVANCE(220);
      END_STATE();
    case 156:
      if (lookahead == 'O') ADVANCE(166);
      END_STATE();
    case 157:
      if (lookahead == 'O') ADVANCE(210);
      END_STATE();
    case 158:
      if (lookahead == 'O') ADVANCE(132);
      END_STATE();
    case 159:
      if (lookahead == 'O') ADVANCE(140);
      END_STATE();
    case 160:
      if (lookahead == 'O') ADVANCE(141);
      END_STATE();
    case 161:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 162:
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(159);
      END_STATE();
    case 163:
      if (lookahead == 'O') ADVANCE(219);
      END_STATE();
    case 164:
      if (lookahead == 'P') ADVANCE(45);
      END_STATE();
    case 165:
      if (lookahead == 'P') ADVANCE(569);
      if (lookahead == 'X') ADVANCE(546);
      END_STATE();
    case 166:
      if (lookahead == 'P') ADVANCE(583);
      END_STATE();
    case 167:
      if (lookahead == 'P') ADVANCE(517);
      END_STATE();
    case 168:
      if (lookahead == 'P') ADVANCE(90);
      END_STATE();
    case 169:
      if (lookahead == 'Q') ADVANCE(121);
      END_STATE();
    case 170:
      if (lookahead == 'R') ADVANCE(169);
      END_STATE();
    case 171:
      if (lookahead == 'R') ADVANCE(572);
      END_STATE();
    case 172:
      if (lookahead == 'R') ADVANCE(143);
      END_STATE();
    case 173:
      if (lookahead == 'R') ADVANCE(513);
      END_STATE();
    case 174:
      if (lookahead == 'R') ADVANCE(566);
      END_STATE();
    case 175:
      if (lookahead == 'R') ADVANCE(103);
      END_STATE();
    case 176:
      if (lookahead == 'R') ADVANCE(157);
      END_STATE();
    case 177:
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 178:
      if (lookahead == 'R') ADVANCE(187);
      END_STATE();
    case 179:
      if (lookahead == 'R') ADVANCE(134);
      END_STATE();
    case 180:
      if (lookahead == 'R') ADVANCE(195);
      END_STATE();
    case 181:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 182:
      if (lookahead == 'R') ADVANCE(191);
      END_STATE();
    case 183:
      if (lookahead == 'S') ADVANCE(216);
      END_STATE();
    case 184:
      if (lookahead == 'S') ADVANCE(579);
      END_STATE();
    case 185:
      if (lookahead == 'S') ADVANCE(579);
      if (lookahead == '_') ADVANCE(144);
      END_STATE();
    case 186:
      if (lookahead == 'S') ADVANCE(62);
      END_STATE();
    case 187:
      if (lookahead == 'S') ADVANCE(112);
      END_STATE();
    case 188:
      if (lookahead == 'S') ADVANCE(197);
      END_STATE();
    case 189:
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 190:
      if (lookahead == 'S') ADVANCE(208);
      END_STATE();
    case 191:
      if (lookahead == 'S') ADVANCE(89);
      END_STATE();
    case 192:
      if (lookahead == 'T') ADVANCE(587);
      END_STATE();
    case 193:
      if (lookahead == 'T') ADVANCE(563);
      END_STATE();
    case 194:
      if (lookahead == 'T') ADVANCE(573);
      END_STATE();
    case 195:
      if (lookahead == 'T') ADVANCE(521);
      END_STATE();
    case 196:
      if (lookahead == 'T') ADVANCE(550);
      END_STATE();
    case 197:
      if (lookahead == 'T') ADVANCE(562);
      END_STATE();
    case 198:
      if (lookahead == 'T') ADVANCE(574);
      END_STATE();
    case 199:
      if (lookahead == 'T') ADVANCE(606);
      END_STATE();
    case 200:
      if (lookahead == 'T') ADVANCE(528);
      END_STATE();
    case 201:
      if (lookahead == 'T') ADVANCE(591);
      END_STATE();
    case 202:
      if (lookahead == 'T') ADVANCE(604);
      END_STATE();
    case 203:
      if (lookahead == 'T') ADVANCE(540);
      END_STATE();
    case 204:
      if (lookahead == 'T') ADVANCE(558);
      END_STATE();
    case 205:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 206:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 207:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 208:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 209:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 210:
      if (lookahead == 'U') ADVANCE(167);
      END_STATE();
    case 211:
      if (lookahead == 'U') ADVANCE(147);
      END_STATE();
    case 212:
      if (lookahead == 'U') ADVANCE(133);
      END_STATE();
    case 213:
      if (lookahead == 'U') ADVANCE(66);
      END_STATE();
    case 214:
      if (lookahead == 'U') ADVANCE(128);
      END_STATE();
    case 215:
      if (lookahead == 'U') ADVANCE(125);
      END_STATE();
    case 216:
      if (lookahead == 'V') ADVANCE(607);
      END_STATE();
    case 217:
      if (lookahead == 'V') ADVANCE(552);
      END_STATE();
    case 218:
      if (lookahead == 'V') ADVANCE(68);
      END_STATE();
    case 219:
      if (lookahead == 'V') ADVANCE(70);
      END_STATE();
    case 220:
      if (lookahead == 'W') ADVANCE(525);
      END_STATE();
    case 221:
      if (lookahead == 'X') ADVANCE(164);
      END_STATE();
    case 222:
      if (lookahead == 'X') ADVANCE(202);
      END_STATE();
    case 223:
      if (lookahead == '_') ADVANCE(372);
      if (lookahead == 's') ADVANCE(579);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'o') ADVANCE(459);
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(439);
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(370);
      if (lookahead == 'b') ADVANCE(321);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 'd') ADVANCE(457);
      if (lookahead == 'g') ADVANCE(290);
      if (lookahead == 'h') ADVANCE(329);
      if (lookahead == 'm') ADVANCE(427);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == 's') ADVANCE(379);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 241:
      if (lookahead == 'b') ADVANCE(603);
      END_STATE();
    case 242:
      if (lookahead == 'b') ADVANCE(293);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(596);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 246:
      if (lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 248:
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(561);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(567);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(536);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(263);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(385);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(462);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 259:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead == 'q') ADVANCE(340);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'g') ADVANCE(554);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 299:
      if (lookahead == 'f') ADVANCE(439);
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 300:
      if (lookahead == 'f') ADVANCE(349);
      END_STATE();
    case 301:
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead == 'p') ADVANCE(401);
      if (lookahead == 'v') ADVANCE(286);
      END_STATE();
    case 302:
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 303:
      if (lookahead == 'g') ADVANCE(560);
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 304:
      if (lookahead == 'g') ADVANCE(313);
      END_STATE();
    case 305:
      if (lookahead == 'g') ADVANCE(578);
      END_STATE();
    case 306:
      if (lookahead == 'g') ADVANCE(580);
      END_STATE();
    case 307:
      if (lookahead == 'g') ADVANCE(402);
      END_STATE();
    case 308:
      if (lookahead == 'g') ADVANCE(418);
      END_STATE();
    case 309:
      if (lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 310:
      if (lookahead == 'g') ADVANCE(271);
      END_STATE();
    case 311:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(420);
      END_STATE();
    case 313:
      if (lookahead == 'h') ADVANCE(442);
      END_STATE();
    case 314:
      if (lookahead == 'h') ADVANCE(391);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(593);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 318:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 319:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(432);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(452);
      END_STATE();
    case 331:
      if (lookahead == 'k') ADVANCE(564);
      END_STATE();
    case 332:
      if (lookahead == 'k') ADVANCE(314);
      END_STATE();
    case 333:
      if (lookahead == 'k') ADVANCE(264);
      END_STATE();
    case 334:
      if (lookahead == 'k') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 335:
      if (lookahead == 'k') ADVANCE(252);
      END_STATE();
    case 336:
      if (lookahead == 'k') ADVANCE(275);
      END_STATE();
    case 337:
      if (lookahead == 'l') ADVANCE(568);
      END_STATE();
    case 338:
      if (lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(453);
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 340:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(575);
      END_STATE();
    case 342:
      if (lookahead == 'l') ADVANCE(581);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(589);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(598);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(599);
      END_STATE();
    case 347:
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 348:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 349:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 350:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(342);
      END_STATE();
    case 352:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 353:
      if (lookahead == 'l') ADVANCE(357);
      if (lookahead == 'u') ADVANCE(376);
      if (lookahead == 'w') ADVANCE(223);
      END_STATE();
    case 354:
      if (lookahead == 'l') ADVANCE(357);
      if (lookahead == 'w') ADVANCE(423);
      END_STATE();
    case 355:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 356:
      if (lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 357:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 358:
      if (lookahead == 'm') ADVANCE(556);
      END_STATE();
    case 359:
      if (lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 360:
      if (lookahead == 'm') ADVANCE(510);
      END_STATE();
    case 361:
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 362:
      if (lookahead == 'm') ADVANCE(396);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(577);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead == 'q') ADVANCE(352);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 384:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(471);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(464);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(469);
      END_STATE();
    case 397:
      if (lookahead == 'p') ADVANCE(569);
      if (lookahead == 'x') ADVANCE(546);
      END_STATE();
    case 398:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 399:
      if (lookahead == 'p') ADVANCE(583);
      END_STATE();
    case 400:
      if (lookahead == 'p') ADVANCE(517);
      END_STATE();
    case 401:
      if (lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 402:
      if (lookahead == 'q') ADVANCE(465);
      END_STATE();
    case 403:
      if (lookahead == 'q') ADVANCE(343);
      END_STATE();
    case 404:
      if (lookahead == 'q') ADVANCE(345);
      END_STATE();
    case 405:
      if (lookahead == 'q') ADVANCE(346);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 416:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 417:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 418:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 419:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 420:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(579);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(600);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == 'y') ADVANCE(436);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(405);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(574);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(606);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(591);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(540);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(558);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(551);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 457:
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 458:
      if (lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 459:
      if (lookahead == 'u') ADVANCE(375);
      END_STATE();
    case 460:
      if (lookahead == 'u') ADVANCE(359);
      END_STATE();
    case 461:
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 462:
      if (lookahead == 'u') ADVANCE(355);
      END_STATE();
    case 463:
      if (lookahead == 'u') ADVANCE(351);
      END_STATE();
    case 464:
      if (lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 465:
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 466:
      if (lookahead == 'v') ADVANCE(607);
      END_STATE();
    case 467:
      if (lookahead == 'v') ADVANCE(552);
      END_STATE();
    case 468:
      if (lookahead == 'v') ADVANCE(268);
      END_STATE();
    case 469:
      if (lookahead == 'v') ADVANCE(270);
      END_STATE();
    case 470:
      if (lookahead == 'v') ADVANCE(272);
      END_STATE();
    case 471:
      if (lookahead == 'w') ADVANCE(525);
      END_STATE();
    case 472:
      if (lookahead == 'w') ADVANCE(300);
      END_STATE();
    case 473:
      if (lookahead == 'x') ADVANCE(398);
      END_STATE();
    case 474:
      if (lookahead == 'x') ADVANCE(446);
      END_STATE();
    case 475:
      if (lookahead == 'y') ADVANCE(594);
      END_STATE();
    case 476:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(476)
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'A') ADVANCE(759);
      if (lookahead == 'C') ADVANCE(715);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'M') ADVANCE(651);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(653);
      if (lookahead == 'S') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(879);
      if (lookahead == 'c') ADVANCE(836);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'm') ADVANCE(772);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 'r') ADVANCE(774);
      if (lookahead == 's') ADVANCE(646);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '}') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 477:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(477)
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'A') ADVANCE(759);
      if (lookahead == 'C') ADVANCE(655);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'M') ADVANCE(651);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'S') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(879);
      if (lookahead == 'c') ADVANCE(776);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'm') ADVANCE(772);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 's') ADVANCE(646);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead == '|') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 478:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(478)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == '*') ADVANCE(888);
      if (lookahead == '+') ADVANCE(622);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == '<') ADVANCE(895);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(893);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'D') ADVANCE(679);
      if (lookahead == 'F') ADVANCE(649);
      if (lookahead == 'G') ADVANCE(733);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(718);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(680);
      if (lookahead == 'T') ADVANCE(654);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(770);
      if (lookahead == 'g') ADVANCE(854);
      if (lookahead == 'i') ADVANCE(834);
      if (lookahead == 'j') ADVANCE(843);
      if (lookahead == 'l') ADVANCE(839);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(775);
      if (lookahead == '|') ADVANCE(917);
      if (lookahead == '~') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 479:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(479)
      if (lookahead == '!') ADVANCE(914);
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 's') ADVANCE(647);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead == '{') ADVANCE(617);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '}') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 480:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(480)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == '*') ADVANCE(888);
      if (lookahead == '+') ADVANCE(622);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == '<') ADVANCE(895);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(893);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'f') ADVANCE(771);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead == '|') ADVANCE(917);
      if (lookahead == '}') ADVANCE(618);
      if (lookahead == '~') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 481:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(481)
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'D') ADVANCE(679);
      if (lookahead == 'F') ADVANCE(649);
      if (lookahead == 'G') ADVANCE(733);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(718);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(680);
      if (lookahead == 'T') ADVANCE(654);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(770);
      if (lookahead == 'g') ADVANCE(854);
      if (lookahead == 'i') ADVANCE(834);
      if (lookahead == 'j') ADVANCE(843);
      if (lookahead == 'l') ADVANCE(839);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(775);
      if (lookahead == '|') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 482:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(482)
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'f') ADVANCE(771);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '}') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 483:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(483)
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '+') ADVANCE(622);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '=') ADVANCE(609);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == '{') ADVANCE(617);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '}') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 484:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(484)
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == 'S') ADVANCE(695);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 's') ADVANCE(816);
      if (lookahead == '|') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(902);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 485:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(485)
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == '|') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 486:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(486)
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == 'F') ADVANCE(735);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'f') ADVANCE(856);
      if (lookahead == '|') ADVANCE(916);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 487:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(487)
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == '=') ADVANCE(609);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == '|') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 488:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead != 0) ADVANCE(632);
      END_STATE();
    case 489:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(489)
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == '|') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(902);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 490:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(635);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead != 0) ADVANCE(632);
      END_STATE();
    case 491:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(491)
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 492:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(492)
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'A') ADVANCE(759);
      if (lookahead == 'C') ADVANCE(721);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'M') ADVANCE(651);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'S') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(729);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(879);
      if (lookahead == 'c') ADVANCE(842);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'm') ADVANCE(772);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 's') ADVANCE(646);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead == '|') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 493:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(904);
      END_STATE();
    case 494:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(900);
      END_STATE();
    case 495:
      if (eof) ADVANCE(508);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == '*') ADVANCE(888);
      if (lookahead == '+') ADVANCE(622);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == '<') ADVANCE(895);
      if (lookahead == '=') ADVANCE(610);
      if (lookahead == '>') ADVANCE(893);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'D') ADVANCE(679);
      if (lookahead == 'F') ADVANCE(648);
      if (lookahead == 'G') ADVANCE(733);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(681);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(680);
      if (lookahead == 'T') ADVANCE(654);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(769);
      if (lookahead == 'g') ADVANCE(854);
      if (lookahead == 'i') ADVANCE(834);
      if (lookahead == 'j') ADVANCE(843);
      if (lookahead == 'l') ADVANCE(802);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(775);
      if (lookahead == '|') ADVANCE(917);
      if (lookahead == '}') ADVANCE(618);
      if (lookahead == '~') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(503)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 496:
      if (eof) ADVANCE(508);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == '*') ADVANCE(888);
      if (lookahead == '+') ADVANCE(622);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == '<') ADVANCE(895);
      if (lookahead == '=') ADVANCE(611);
      if (lookahead == '>') ADVANCE(893);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(154);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(906);
      if (lookahead == 'Z') ADVANCE(907);
      if (lookahead == '_') ADVANCE(642);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'f') ADVANCE(326);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(384);
      if (lookahead == 'j') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '|') ADVANCE(917);
      if (lookahead == '}') ADVANCE(618);
      if (lookahead == '~') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(504)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      END_STATE();
    case 497:
      if (eof) ADVANCE(508);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == '*') ADVANCE(888);
      if (lookahead == '+') ADVANCE(622);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == '<') ADVANCE(895);
      if (lookahead == '=') ADVANCE(610);
      if (lookahead == '>') ADVANCE(893);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(154);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'f') ADVANCE(326);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(384);
      if (lookahead == 'j') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '|') ADVANCE(917);
      if (lookahead == '~') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(506)
      END_STATE();
    case 498:
      if (eof) ADVANCE(508);
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '=') ADVANCE(609);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(154);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead == 'N') ADVANCE(215);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == 'W') ADVANCE(104);
      if (lookahead == '_') ADVANCE(642);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(384);
      if (lookahead == 'j') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == 'w') ADVANCE(318);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '}') ADVANCE(618);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(507)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      END_STATE();
    case 499:
      if (eof) ADVANCE(508);
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'D') ADVANCE(679);
      if (lookahead == 'F') ADVANCE(648);
      if (lookahead == 'G') ADVANCE(733);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(681);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(680);
      if (lookahead == 'T') ADVANCE(654);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(769);
      if (lookahead == 'g') ADVANCE(854);
      if (lookahead == 'i') ADVANCE(834);
      if (lookahead == 'j') ADVANCE(843);
      if (lookahead == 'l') ADVANCE(802);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(775);
      if (lookahead == '|') ADVANCE(916);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(505)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 500:
      if (eof) ADVANCE(508);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == '=') ADVANCE(609);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(221);
      if (lookahead == 'F') ADVANCE(108);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(142);
      if (lookahead == 'J') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == 'V') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(104);
      if (lookahead == '_') ADVANCE(642);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'c') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'j') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == 'v') ADVANCE(284);
      if (lookahead == 'w') ADVANCE(318);
      if (lookahead == '{') ADVANCE(617);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '}') ADVANCE(618);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(502)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      END_STATE();
    case 501:
      if (eof) ADVANCE(508);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(501)
      if (lookahead == '!') ADVANCE(915);
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == '*') ADVANCE(888);
      if (lookahead == '+') ADVANCE(622);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(621);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == '<') ADVANCE(895);
      if (lookahead == '=') ADVANCE(611);
      if (lookahead == '>') ADVANCE(893);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(221);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'J') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(215);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(905);
      if (lookahead == 'V') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(104);
      if (lookahead == 'Z') ADVANCE(907);
      if (lookahead == '_') ADVANCE(642);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 'j') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == 'v') ADVANCE(284);
      if (lookahead == 'w') ADVANCE(318);
      if (lookahead == '{') ADVANCE(617);
      if (lookahead == '|') ADVANCE(917);
      if (lookahead == '}') ADVANCE(618);
      if (lookahead == '~') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      END_STATE();
    case 502:
      if (eof) ADVANCE(508);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(502)
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == '=') ADVANCE(609);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(221);
      if (lookahead == 'F') ADVANCE(108);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(142);
      if (lookahead == 'J') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == 'V') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(104);
      if (lookahead == '_') ADVANCE(642);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'c') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'j') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == 'v') ADVANCE(284);
      if (lookahead == 'w') ADVANCE(318);
      if (lookahead == '{') ADVANCE(617);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '}') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      END_STATE();
    case 503:
      if (eof) ADVANCE(508);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(503)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == '*') ADVANCE(888);
      if (lookahead == '+') ADVANCE(622);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == '<') ADVANCE(895);
      if (lookahead == '=') ADVANCE(610);
      if (lookahead == '>') ADVANCE(893);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'D') ADVANCE(679);
      if (lookahead == 'F') ADVANCE(648);
      if (lookahead == 'G') ADVANCE(733);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(681);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(680);
      if (lookahead == 'T') ADVANCE(654);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(769);
      if (lookahead == 'g') ADVANCE(854);
      if (lookahead == 'i') ADVANCE(834);
      if (lookahead == 'j') ADVANCE(843);
      if (lookahead == 'l') ADVANCE(802);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(775);
      if (lookahead == '|') ADVANCE(917);
      if (lookahead == '}') ADVANCE(618);
      if (lookahead == '~') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 504:
      if (eof) ADVANCE(508);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(504)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == '*') ADVANCE(888);
      if (lookahead == '+') ADVANCE(622);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == '<') ADVANCE(895);
      if (lookahead == '=') ADVANCE(611);
      if (lookahead == '>') ADVANCE(893);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(154);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(906);
      if (lookahead == 'Z') ADVANCE(907);
      if (lookahead == '_') ADVANCE(642);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'f') ADVANCE(326);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(384);
      if (lookahead == 'j') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '|') ADVANCE(917);
      if (lookahead == '}') ADVANCE(618);
      if (lookahead == '~') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      END_STATE();
    case 505:
      if (eof) ADVANCE(508);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(505)
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'D') ADVANCE(679);
      if (lookahead == 'F') ADVANCE(648);
      if (lookahead == 'G') ADVANCE(733);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(681);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(680);
      if (lookahead == 'T') ADVANCE(654);
      if (lookahead == '_') ADVANCE(643);
      if (lookahead == '`') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(769);
      if (lookahead == 'g') ADVANCE(854);
      if (lookahead == 'i') ADVANCE(834);
      if (lookahead == 'j') ADVANCE(843);
      if (lookahead == 'l') ADVANCE(802);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(775);
      if (lookahead == '|') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 506:
      if (eof) ADVANCE(508);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(506)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == '*') ADVANCE(888);
      if (lookahead == '+') ADVANCE(622);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == '<') ADVANCE(895);
      if (lookahead == '=') ADVANCE(610);
      if (lookahead == '>') ADVANCE(893);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(154);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'f') ADVANCE(326);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(384);
      if (lookahead == 'j') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '|') ADVANCE(917);
      if (lookahead == '~') ADVANCE(28);
      END_STATE();
    case 507:
      if (eof) ADVANCE(508);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(507)
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(614);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '=') ADVANCE(609);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(154);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead == 'N') ADVANCE(215);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == 'W') ADVANCE(104);
      if (lookahead == '_') ADVANCE(642);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(384);
      if (lookahead == 'j') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == 'w') ADVANCE(318);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '}') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(205);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(450);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_keyword_case);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_keyword_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_keyword_append);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_keyword_append);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_keyword_remove);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_keyword_remove);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_keyword_intersect);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_keyword_intersect);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(53);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(254);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_keyword_lag);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_keyword_lead);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_keyword_first);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_keyword_last);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_keyword_rank);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_keyword_rank);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_keyword_row_number);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_keyword_round);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_keyword_all);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_keyword_map);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_keyword_loop);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_keyword_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_keyword_internal);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_keyword_module);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_keyword_prql);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_keyword_version);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_keyword_target);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_sql_DOTansi);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_sql_DOTbigquery);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_sql_DOTclickhouse);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_sql_DOTgeneric);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_sql_DOThive);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_sql_DOTmssql);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_sql_DOTmysql);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_sql_DOTpostgres);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_sql_DOTsqlite);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_sql_DOTsnowflake);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_sql_DOTduckdb);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_keyword_from_text);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_keyword_from_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_keyword_format);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_keyword_csv);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_keyword_json);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(623);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(623);
      if (lookahead == '>') ADVANCE(619);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(615);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(910);
      if (lookahead == '|') ADVANCE(919);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(627);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(626);
      if (lookahead == '#') ADVANCE(910);
      if (lookahead == '|') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(627);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '#') ADVANCE(911);
      if (lookahead == '|') ADVANCE(920);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(631);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(630);
      if (lookahead == '#') ADVANCE(911);
      if (lookahead == '|') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(631);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead != 0) ADVANCE(632);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(635);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead != 0) ADVANCE(632);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(11);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == 't') ADVANCE(783);
      if (lookahead == 'u') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(698);
      if (lookahead == 'I') ADVANCE(702);
      if (lookahead == 'R') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(698);
      if (lookahead == 'I') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(763);
      if (lookahead == 'I') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(697);
      if (lookahead == 'R') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(738);
      if (lookahead == 'O') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(728);
      if (lookahead == 'G') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(701);
      if (lookahead == 'O') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(743);
      if (lookahead == 'O') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(690);
      if (lookahead == 'P') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'U') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(819);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead == 'r') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(819);
      if (lookahead == 'i') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(883);
      if (lookahead == 'i') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(818);
      if (lookahead == 'r') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(859);
      if (lookahead == 'o') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(849);
      if (lookahead == 'g') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(822);
      if (lookahead == 'o') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(862);
      if (lookahead == 'o') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(811);
      if (lookahead == 'p') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__identifier_dot);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(890);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(894);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(896);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(901);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(115);
      if (lookahead == 'R') ADVANCE(213);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(913);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(627);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(631);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(909);
      if (lookahead == '|') ADVANCE(918);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(913);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(913);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_bang);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(892);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_pipe);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead == '|') ADVANCE(899);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(913);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(627);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(631);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 500},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 495},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 496},
  [17] = {.lex_state = 496},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 496},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 495},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 496},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 495},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 496},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 496},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 496},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 496},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 496},
  [62] = {.lex_state = 496},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 496},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 496},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 496},
  [70] = {.lex_state = 496},
  [71] = {.lex_state = 496},
  [72] = {.lex_state = 496},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 496},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 496},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 496},
  [82] = {.lex_state = 496},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 496},
  [90] = {.lex_state = 496},
  [91] = {.lex_state = 496},
  [92] = {.lex_state = 496},
  [93] = {.lex_state = 496},
  [94] = {.lex_state = 496},
  [95] = {.lex_state = 496},
  [96] = {.lex_state = 496},
  [97] = {.lex_state = 496},
  [98] = {.lex_state = 496},
  [99] = {.lex_state = 496},
  [100] = {.lex_state = 499},
  [101] = {.lex_state = 496},
  [102] = {.lex_state = 496},
  [103] = {.lex_state = 496},
  [104] = {.lex_state = 496},
  [105] = {.lex_state = 496},
  [106] = {.lex_state = 496},
  [107] = {.lex_state = 496},
  [108] = {.lex_state = 496},
  [109] = {.lex_state = 496},
  [110] = {.lex_state = 496},
  [111] = {.lex_state = 496},
  [112] = {.lex_state = 496},
  [113] = {.lex_state = 496},
  [114] = {.lex_state = 496},
  [115] = {.lex_state = 499},
  [116] = {.lex_state = 496},
  [117] = {.lex_state = 496},
  [118] = {.lex_state = 496},
  [119] = {.lex_state = 496},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 496},
  [123] = {.lex_state = 496},
  [124] = {.lex_state = 497},
  [125] = {.lex_state = 497},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 500},
  [129] = {.lex_state = 499},
  [130] = {.lex_state = 499},
  [131] = {.lex_state = 499},
  [132] = {.lex_state = 499},
  [133] = {.lex_state = 499},
  [134] = {.lex_state = 499},
  [135] = {.lex_state = 500},
  [136] = {.lex_state = 499},
  [137] = {.lex_state = 499},
  [138] = {.lex_state = 500},
  [139] = {.lex_state = 499},
  [140] = {.lex_state = 500},
  [141] = {.lex_state = 500},
  [142] = {.lex_state = 499},
  [143] = {.lex_state = 499},
  [144] = {.lex_state = 500},
  [145] = {.lex_state = 500},
  [146] = {.lex_state = 499},
  [147] = {.lex_state = 499},
  [148] = {.lex_state = 499},
  [149] = {.lex_state = 499},
  [150] = {.lex_state = 499},
  [151] = {.lex_state = 499},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 500},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 500},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 500},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 500},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 500},
  [176] = {.lex_state = 500},
  [177] = {.lex_state = 500},
  [178] = {.lex_state = 498},
  [179] = {.lex_state = 500},
  [180] = {.lex_state = 498},
  [181] = {.lex_state = 500},
  [182] = {.lex_state = 500},
  [183] = {.lex_state = 500},
  [184] = {.lex_state = 500},
  [185] = {.lex_state = 500},
  [186] = {.lex_state = 500},
  [187] = {.lex_state = 500},
  [188] = {.lex_state = 500},
  [189] = {.lex_state = 500},
  [190] = {.lex_state = 500},
  [191] = {.lex_state = 500},
  [192] = {.lex_state = 500},
  [193] = {.lex_state = 495},
  [194] = {.lex_state = 500},
  [195] = {.lex_state = 500},
  [196] = {.lex_state = 500},
  [197] = {.lex_state = 500},
  [198] = {.lex_state = 500},
  [199] = {.lex_state = 500},
  [200] = {.lex_state = 500},
  [201] = {.lex_state = 496},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 500},
  [205] = {.lex_state = 500},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 500},
  [208] = {.lex_state = 500},
  [209] = {.lex_state = 495},
  [210] = {.lex_state = 500},
  [211] = {.lex_state = 500},
  [212] = {.lex_state = 500},
  [213] = {.lex_state = 495},
  [214] = {.lex_state = 500},
  [215] = {.lex_state = 500},
  [216] = {.lex_state = 500},
  [217] = {.lex_state = 500},
  [218] = {.lex_state = 500},
  [219] = {.lex_state = 500},
  [220] = {.lex_state = 500},
  [221] = {.lex_state = 500},
  [222] = {.lex_state = 500},
  [223] = {.lex_state = 500},
  [224] = {.lex_state = 500},
  [225] = {.lex_state = 495},
  [226] = {.lex_state = 500},
  [227] = {.lex_state = 500},
  [228] = {.lex_state = 500},
  [229] = {.lex_state = 500},
  [230] = {.lex_state = 500},
  [231] = {.lex_state = 500},
  [232] = {.lex_state = 500},
  [233] = {.lex_state = 500},
  [234] = {.lex_state = 500},
  [235] = {.lex_state = 500},
  [236] = {.lex_state = 500},
  [237] = {.lex_state = 500},
  [238] = {.lex_state = 500},
  [239] = {.lex_state = 500},
  [240] = {.lex_state = 500},
  [241] = {.lex_state = 500},
  [242] = {.lex_state = 500},
  [243] = {.lex_state = 495},
  [244] = {.lex_state = 500},
  [245] = {.lex_state = 500},
  [246] = {.lex_state = 500},
  [247] = {.lex_state = 500},
  [248] = {.lex_state = 495},
  [249] = {.lex_state = 500},
  [250] = {.lex_state = 500},
  [251] = {.lex_state = 500},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 495},
  [254] = {.lex_state = 495},
  [255] = {.lex_state = 495},
  [256] = {.lex_state = 495},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 495},
  [259] = {.lex_state = 495},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 498},
  [264] = {.lex_state = 498},
  [265] = {.lex_state = 495},
  [266] = {.lex_state = 495},
  [267] = {.lex_state = 498},
  [268] = {.lex_state = 498},
  [269] = {.lex_state = 495},
  [270] = {.lex_state = 495},
  [271] = {.lex_state = 495},
  [272] = {.lex_state = 498},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 498},
  [278] = {.lex_state = 495},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 495},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 495},
  [292] = {.lex_state = 500},
  [293] = {.lex_state = 500},
  [294] = {.lex_state = 500},
  [295] = {.lex_state = 500},
  [296] = {.lex_state = 500},
  [297] = {.lex_state = 500},
  [298] = {.lex_state = 500},
  [299] = {.lex_state = 500},
  [300] = {.lex_state = 500},
  [301] = {.lex_state = 500},
  [302] = {.lex_state = 500},
  [303] = {.lex_state = 500},
  [304] = {.lex_state = 500},
  [305] = {.lex_state = 16},
  [306] = {.lex_state = 500},
  [307] = {.lex_state = 500},
  [308] = {.lex_state = 500},
  [309] = {.lex_state = 16},
  [310] = {.lex_state = 16},
  [311] = {.lex_state = 16},
  [312] = {.lex_state = 500},
  [313] = {.lex_state = 500},
  [314] = {.lex_state = 16},
  [315] = {.lex_state = 19},
  [316] = {.lex_state = 18},
  [317] = {.lex_state = 18},
  [318] = {.lex_state = 500},
  [319] = {.lex_state = 18},
  [320] = {.lex_state = 15},
  [321] = {.lex_state = 500},
  [322] = {.lex_state = 500},
  [323] = {.lex_state = 500},
  [324] = {.lex_state = 17},
  [325] = {.lex_state = 500},
  [326] = {.lex_state = 500},
  [327] = {.lex_state = 498},
  [328] = {.lex_state = 16},
  [329] = {.lex_state = 18},
  [330] = {.lex_state = 498},
  [331] = {.lex_state = 498},
  [332] = {.lex_state = 17},
  [333] = {.lex_state = 500},
  [334] = {.lex_state = 17},
  [335] = {.lex_state = 16},
  [336] = {.lex_state = 16},
  [337] = {.lex_state = 500},
  [338] = {.lex_state = 500},
  [339] = {.lex_state = 17},
  [340] = {.lex_state = 500},
  [341] = {.lex_state = 500},
  [342] = {.lex_state = 17},
  [343] = {.lex_state = 500},
  [344] = {.lex_state = 500},
  [345] = {.lex_state = 16},
  [346] = {.lex_state = 498},
  [347] = {.lex_state = 498},
  [348] = {.lex_state = 498},
  [349] = {.lex_state = 498},
  [350] = {.lex_state = 500},
  [351] = {.lex_state = 500},
  [352] = {.lex_state = 500},
  [353] = {.lex_state = 500},
  [354] = {.lex_state = 17},
  [355] = {.lex_state = 500},
  [356] = {.lex_state = 500},
  [357] = {.lex_state = 17},
  [358] = {.lex_state = 500},
  [359] = {.lex_state = 500},
  [360] = {.lex_state = 16},
  [361] = {.lex_state = 498},
  [362] = {.lex_state = 17},
  [363] = {.lex_state = 500},
  [364] = {.lex_state = 17},
  [365] = {.lex_state = 500},
  [366] = {.lex_state = 16},
  [367] = {.lex_state = 498},
  [368] = {.lex_state = 498},
  [369] = {.lex_state = 500},
  [370] = {.lex_state = 498},
  [371] = {.lex_state = 498},
  [372] = {.lex_state = 498},
  [373] = {.lex_state = 17},
  [374] = {.lex_state = 17},
  [375] = {.lex_state = 17},
  [376] = {.lex_state = 500},
  [377] = {.lex_state = 498},
  [378] = {.lex_state = 500},
  [379] = {.lex_state = 500},
  [380] = {.lex_state = 500},
  [381] = {.lex_state = 16},
  [382] = {.lex_state = 16},
  [383] = {.lex_state = 500},
  [384] = {.lex_state = 16},
  [385] = {.lex_state = 488},
  [386] = {.lex_state = 500},
  [387] = {.lex_state = 500},
  [388] = {.lex_state = 500},
  [389] = {.lex_state = 500},
  [390] = {.lex_state = 500},
  [391] = {.lex_state = 500},
  [392] = {.lex_state = 500},
  [393] = {.lex_state = 500},
  [394] = {.lex_state = 500},
  [395] = {.lex_state = 500},
  [396] = {.lex_state = 500},
  [397] = {.lex_state = 500},
  [398] = {.lex_state = 488},
  [399] = {.lex_state = 16},
  [400] = {.lex_state = 500},
  [401] = {.lex_state = 500},
  [402] = {.lex_state = 500},
  [403] = {.lex_state = 488},
  [404] = {.lex_state = 500},
  [405] = {.lex_state = 500},
  [406] = {.lex_state = 16},
  [407] = {.lex_state = 500},
  [408] = {.lex_state = 17},
  [409] = {.lex_state = 17},
  [410] = {.lex_state = 20},
  [411] = {.lex_state = 500},
  [412] = {.lex_state = 17},
  [413] = {.lex_state = 500},
  [414] = {.lex_state = 500},
  [415] = {.lex_state = 500},
  [416] = {.lex_state = 500},
  [417] = {.lex_state = 488},
  [418] = {.lex_state = 500},
  [419] = {.lex_state = 500},
  [420] = {.lex_state = 488},
  [421] = {.lex_state = 500},
  [422] = {.lex_state = 500},
  [423] = {.lex_state = 500},
  [424] = {.lex_state = 5},
  [425] = {.lex_state = 500},
  [426] = {.lex_state = 16},
  [427] = {.lex_state = 490},
  [428] = {.lex_state = 500},
  [429] = {.lex_state = 490},
  [430] = {.lex_state = 16},
  [431] = {.lex_state = 500},
  [432] = {.lex_state = 490},
  [433] = {.lex_state = 16},
  [434] = {.lex_state = 500},
  [435] = {.lex_state = 500},
  [436] = {.lex_state = 500},
  [437] = {.lex_state = 500},
  [438] = {.lex_state = 500},
  [439] = {.lex_state = 5},
  [440] = {.lex_state = 500},
  [441] = {.lex_state = 912},
  [442] = {.lex_state = 5},
  [443] = {.lex_state = 5},
  [444] = {.lex_state = 500},
  [445] = {.lex_state = 5},
  [446] = {.lex_state = 500},
  [447] = {.lex_state = 19},
  [448] = {.lex_state = 19},
  [449] = {.lex_state = 5},
  [450] = {.lex_state = 500},
  [451] = {.lex_state = 500},
  [452] = {.lex_state = 500},
  [453] = {.lex_state = 500},
  [454] = {.lex_state = 5},
  [455] = {.lex_state = 625},
  [456] = {.lex_state = 625},
  [457] = {.lex_state = 629},
  [458] = {.lex_state = 625},
  [459] = {.lex_state = 500},
  [460] = {.lex_state = 500},
  [461] = {.lex_state = 500},
  [462] = {.lex_state = 500},
  [463] = {.lex_state = 500},
  [464] = {.lex_state = 500},
  [465] = {.lex_state = 500},
  [466] = {.lex_state = 500},
  [467] = {.lex_state = 19},
  [468] = {.lex_state = 19},
  [469] = {.lex_state = 500},
  [470] = {.lex_state = 500},
  [471] = {.lex_state = 500},
  [472] = {.lex_state = 500},
  [473] = {.lex_state = 500},
  [474] = {.lex_state = 500},
  [475] = {.lex_state = 500},
  [476] = {.lex_state = 500},
  [477] = {.lex_state = 500},
  [478] = {.lex_state = 500},
  [479] = {.lex_state = 500},
  [480] = {.lex_state = 5},
  [481] = {.lex_state = 500},
  [482] = {.lex_state = 500},
  [483] = {.lex_state = 19},
  [484] = {.lex_state = 500},
  [485] = {.lex_state = 500},
  [486] = {.lex_state = 500},
  [487] = {.lex_state = 500},
  [488] = {.lex_state = 500},
  [489] = {.lex_state = 500},
  [490] = {.lex_state = 500},
  [491] = {.lex_state = 500},
  [492] = {.lex_state = 21},
  [493] = {.lex_state = 500},
  [494] = {.lex_state = 500},
  [495] = {.lex_state = 500},
  [496] = {.lex_state = 500},
  [497] = {.lex_state = 5},
  [498] = {.lex_state = 500},
  [499] = {.lex_state = 500},
  [500] = {.lex_state = 500},
  [501] = {.lex_state = 500},
  [502] = {.lex_state = 500},
  [503] = {.lex_state = 5},
  [504] = {.lex_state = 500},
  [505] = {.lex_state = 500},
  [506] = {.lex_state = 500},
  [507] = {.lex_state = 5},
  [508] = {.lex_state = 500},
  [509] = {.lex_state = 500},
  [510] = {.lex_state = 500},
  [511] = {.lex_state = 21},
  [512] = {.lex_state = 625},
  [513] = {.lex_state = 629},
  [514] = {.lex_state = 500},
  [515] = {.lex_state = 500},
  [516] = {.lex_state = 21},
  [517] = {.lex_state = 625},
  [518] = {.lex_state = 629},
  [519] = {.lex_state = 19},
  [520] = {.lex_state = 21},
  [521] = {.lex_state = 625},
  [522] = {.lex_state = 629},
  [523] = {.lex_state = 21},
  [524] = {.lex_state = 625},
  [525] = {.lex_state = 629},
  [526] = {.lex_state = 21},
  [527] = {.lex_state = 625},
  [528] = {.lex_state = 21},
  [529] = {.lex_state = 21},
  [530] = {.lex_state = 21},
  [531] = {.lex_state = 500},
  [532] = {.lex_state = 500},
  [533] = {.lex_state = 500},
  [534] = {.lex_state = 500},
  [535] = {.lex_state = 19},
  [536] = {.lex_state = 500},
  [537] = {.lex_state = 500},
  [538] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_from] = ACTIONS(1),
    [sym_keyword_filter] = ACTIONS(1),
    [sym_keyword_derive] = ACTIONS(1),
    [sym_keyword_group] = ACTIONS(1),
    [sym_keyword_aggregate] = ACTIONS(1),
    [sym_keyword_sort] = ACTIONS(1),
    [sym_keyword_take] = ACTIONS(1),
    [sym_keyword_window] = ACTIONS(1),
    [sym_keyword_join] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_true] = ACTIONS(1),
    [sym_keyword_false] = ACTIONS(1),
    [sym_keyword_case] = ACTIONS(1),
    [sym_keyword_append] = ACTIONS(1),
    [sym_keyword_remove] = ACTIONS(1),
    [sym_keyword_intersect] = ACTIONS(1),
    [sym_keyword_average] = ACTIONS(1),
    [sym_keyword_min] = ACTIONS(1),
    [sym_keyword_max] = ACTIONS(1),
    [sym_keyword_count] = ACTIONS(1),
    [sym_keyword_stddev] = ACTIONS(1),
    [sym_keyword_avg] = ACTIONS(1),
    [sym_keyword_sum] = ACTIONS(1),
    [sym_keyword_count_distinct] = ACTIONS(1),
    [sym_keyword_lag] = ACTIONS(1),
    [sym_keyword_lead] = ACTIONS(1),
    [sym_keyword_first] = ACTIONS(1),
    [sym_keyword_last] = ACTIONS(1),
    [sym_keyword_rank] = ACTIONS(1),
    [sym_keyword_row_number] = ACTIONS(1),
    [sym_keyword_round] = ACTIONS(1),
    [sym_keyword_all] = ACTIONS(1),
    [sym_keyword_map] = ACTIONS(1),
    [sym_keyword_side] = ACTIONS(1),
    [sym_keyword_inner] = ACTIONS(1),
    [sym_keyword_left] = ACTIONS(1),
    [sym_keyword_right] = ACTIONS(1),
    [sym_keyword_full] = ACTIONS(1),
    [sym_keyword_in] = ACTIONS(1),
    [sym_keyword_rolling] = ACTIONS(1),
    [sym_keyword_rows] = ACTIONS(1),
    [sym_keyword_expanding] = ACTIONS(1),
    [sym_keyword_null] = ACTIONS(1),
    [sym_keyword_loop] = ACTIONS(1),
    [sym_keyword_internal] = ACTIONS(1),
    [sym_keyword_module] = ACTIONS(1),
    [sym_keyword_let] = ACTIONS(1),
    [sym_keyword_prql] = ACTIONS(1),
    [sym_keyword_version] = ACTIONS(1),
    [sym_keyword_target] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_sql_DOTansi] = ACTIONS(1),
    [anon_sym_sql_DOTbigquery] = ACTIONS(1),
    [anon_sym_sql_DOTclickhouse] = ACTIONS(1),
    [anon_sym_sql_DOTgeneric] = ACTIONS(1),
    [anon_sym_sql_DOThive] = ACTIONS(1),
    [anon_sym_sql_DOTmssql] = ACTIONS(1),
    [anon_sym_sql_DOTmysql] = ACTIONS(1),
    [anon_sym_sql_DOTpostgres] = ACTIONS(1),
    [anon_sym_sql_DOTsqlite] = ACTIONS(1),
    [anon_sym_sql_DOTsnowflake] = ACTIONS(1),
    [anon_sym_sql_DOTduckdb] = ACTIONS(1),
    [sym_keyword_from_text] = ACTIONS(1),
    [sym_keyword_format] = ACTIONS(1),
    [sym_keyword_csv] = ACTIONS(1),
    [sym_keyword_json] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_f_DQUOTE] = ACTIONS(1),
    [anon_sym_f_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_s_DQUOTE] = ACTIONS(1),
    [anon_sym_s_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym__natural_number] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [aux_sym__date_token1] = ACTIONS(1),
    [aux_sym__date_token2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__time_token1] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_bang] = ACTIONS(1),
    [sym_pipe] = ACTIONS(5),
  },
  [1] = {
    [sym_program] = STATE(532),
    [sym_prql] = STATE(338),
    [sym_pipeline] = STATE(379),
    [sym_variable] = STATE(379),
    [sym_function_definition] = STATE(379),
    [sym_from_text] = STATE(128),
    [sym_from] = STATE(128),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(292),
    [aux_sym_program_repeat2] = STATE(302),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_keyword_from] = ACTIONS(9),
    [sym_keyword_let] = ACTIONS(11),
    [sym_keyword_prql] = ACTIONS(13),
    [sym_keyword_from_text] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_pipe] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 37,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(25), 1,
      sym_keyword_count_distinct,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(2), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(88), 1,
      sym__agg_keywords,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(213), 1,
      sym_binary_expression,
    STATE(271), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    ACTIONS(23), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(418), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(21), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [131] = 36,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(25), 1,
      sym_keyword_count_distinct,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(88), 1,
      sym__agg_keywords,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(225), 1,
      sym_binary_expression,
    STATE(271), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    ACTIONS(23), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(428), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(21), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [259] = 36,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(25), 1,
      sym_keyword_count_distinct,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(88), 1,
      sym__agg_keywords,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(225), 1,
      sym_binary_expression,
    STATE(271), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    ACTIONS(23), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(428), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(21), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [387] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      sym__natural_number,
    ACTIONS(77), 1,
      anon_sym__,
    ACTIONS(79), 1,
      anon_sym_BQUOTE,
    ACTIONS(81), 1,
      sym__identifier,
    STATE(5), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym_function_call_repeat1,
    STATE(131), 1,
      sym_identifier,
    STATE(132), 1,
      aux_sym__friendly_number,
    STATE(136), 1,
      sym__call_parameter,
    STATE(142), 1,
      sym_literal,
    STATE(148), 1,
      sym_integer,
    STATE(137), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(67), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(63), 13,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(65), 18,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [484] = 35,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(25), 1,
      sym_keyword_count_distinct,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(6), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(88), 1,
      sym__agg_keywords,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(225), 1,
      sym_binary_expression,
    STATE(271), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    ACTIONS(23), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(428), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(21), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [609] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      sym_keyword_case,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_BQUOTE,
    ACTIONS(89), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(7), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(77), 1,
      sym__agg_keywords,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(119), 1,
      sym__expression,
    STATE(187), 1,
      sym__agg_rhs_assignment,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(186), 2,
      sym_function_call,
      sym_case,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(21), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [731] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      sym_keyword_case,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_BQUOTE,
    ACTIONS(93), 1,
      sym__identifier,
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(77), 1,
      sym__agg_keywords,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(119), 1,
      sym__expression,
    STATE(187), 1,
      sym__agg_rhs_assignment,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(186), 2,
      sym_function_call,
      sym_case,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(21), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [853] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      sym_keyword_case,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    STATE(9), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym_identifier,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(77), 1,
      sym__agg_keywords,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(119), 1,
      sym__expression,
    STATE(187), 1,
      sym__agg_rhs_assignment,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(186), 2,
      sym_function_call,
      sym_case,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(21), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [975] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym__natural_number,
    ACTIONS(109), 1,
      anon_sym__,
    ACTIONS(111), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__identifier,
    STATE(10), 1,
      sym_comment,
    STATE(121), 1,
      aux_sym_function_call_repeat1,
    STATE(153), 1,
      aux_sym__friendly_number,
    STATE(155), 1,
      sym_identifier,
    STATE(164), 1,
      sym__call_parameter,
    STATE(167), 1,
      sym_literal,
    STATE(170), 1,
      sym_integer,
    STATE(172), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(174), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(99), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(63), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(65), 15,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [1070] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    STATE(11), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym_identifier,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(77), 1,
      sym__agg_keywords,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(266), 1,
      sym_binary_expression,
    STATE(269), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(536), 1,
      sym_function_call,
    STATE(537), 1,
      sym__agg_rhs_assignment,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(21), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1190] = 36,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(19), 1,
      aux_sym_case_repeat1,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(202), 1,
      sym_case_condition,
    STATE(257), 1,
      sym_literal,
    STATE(262), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(383), 1,
      aux_sym_case_repeat2,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1309] = 35,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_case_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(202), 1,
      sym_case_condition,
    STATE(257), 1,
      sym_literal,
    STATE(262), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1425] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(419), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1537] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(193), 1,
      sym__expression,
    STATE(233), 1,
      sym_assignment,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(227), 2,
      sym__tuples,
      sym_term,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1647] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(16), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym__friendly_number,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(131), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [1707] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(17), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym__friendly_number,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(135), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [1767] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(18), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(415), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1879] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(154), 1,
      anon_sym_DASH,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(175), 1,
      sym__natural_number,
    ACTIONS(178), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(184), 1,
      sym__identifier,
    ACTIONS(187), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(202), 1,
      sym_case_condition,
    STATE(257), 1,
      sym_literal,
    STATE(262), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    ACTIONS(149), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_comment,
      aux_sym_case_repeat1,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(143), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1991] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_bang,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(20), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(125), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(235), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2103] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(21), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(125), 1,
      sym__expression,
    STATE(233), 1,
      sym_assignment,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(227), 2,
      sym__tuples,
      sym_term,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2213] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(198), 2,
      sym__natural_number,
      anon_sym__,
    STATE(22), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(196), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(194), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [2271] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(23), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(393), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2383] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(24), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(389), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2495] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_bang,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(25), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(124), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(235), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2607] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(26), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(124), 1,
      sym__expression,
    STATE(233), 1,
      sym_assignment,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(227), 2,
      sym__tuples,
      sym_term,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2717] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(19), 1,
      aux_sym_case_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(202), 1,
      sym_case_condition,
    STATE(257), 1,
      sym_literal,
    STATE(262), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2831] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(28), 1,
      sym_comment,
    ACTIONS(211), 18,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(213), 23,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [2886] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(29), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(434), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2995] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(30), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(453), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3104] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(27), 1,
      aux_sym_case_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(202), 1,
      sym_case_condition,
    STATE(257), 1,
      sym_literal,
    STATE(262), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3217] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(32), 1,
      sym_comment,
    ACTIONS(225), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(223), 36,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      sym__natural_number,
      anon_sym__,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [3272] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(33), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(425), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3381] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(34), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(434), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3490] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(35), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(425), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3599] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(36), 1,
      sym_comment,
    ACTIONS(233), 18,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(235), 23,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [3654] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(27), 1,
      aux_sym_case_repeat1,
    STATE(37), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(202), 1,
      sym_case_condition,
    STATE(257), 1,
      sym_literal,
    STATE(262), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3767] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(38), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(425), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3876] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(39), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(434), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3985] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(40), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(425), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4094] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(41), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(425), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4203] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 1,
      anon_sym_EQ_EQ,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(42), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(243), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(495), 1,
      sym__self_join,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4314] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(257), 1,
      anon_sym_Z,
    STATE(43), 1,
      sym_comment,
    STATE(92), 1,
      sym_timezone,
    STATE(519), 1,
      sym_direction,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(253), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(251), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4376] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(44), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(478), 1,
      sym_term,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4482] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(263), 1,
      anon_sym_COLON,
    ACTIONS(265), 1,
      anon_sym_DOT,
    STATE(45), 1,
      sym_comment,
    ACTIONS(261), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(259), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [4540] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(46), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(425), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4646] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(47), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(434), 1,
      sym_term,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4752] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(271), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      anon_sym_DOT,
    STATE(48), 1,
      sym_comment,
    ACTIONS(269), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(267), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [4810] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(27), 1,
      aux_sym_case_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(202), 1,
      sym_case_condition,
    STATE(257), 1,
      sym_literal,
    STATE(262), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4920] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(50), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(255), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5024] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(51), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(255), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5128] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(281), 1,
      anon_sym_DOT,
    STATE(52), 1,
      sym_comment,
    ACTIONS(279), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [5183] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(53), 1,
      sym_comment,
    ACTIONS(211), 19,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(213), 20,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [5236] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      sym__natural_number,
    ACTIONS(293), 1,
      anon_sym__,
    ACTIONS(295), 1,
      anon_sym_BQUOTE,
    ACTIONS(297), 1,
      sym__identifier,
    STATE(54), 1,
      sym_comment,
    STATE(173), 1,
      aux_sym_function_call_repeat1,
    STATE(273), 1,
      aux_sym__friendly_number,
    STATE(276), 1,
      sym_identifier,
    STATE(280), 1,
      sym_integer,
    STATE(284), 1,
      sym__call_parameter,
    STATE(289), 1,
      sym_literal,
    STATE(279), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(281), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(65), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(283), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(63), 16,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5321] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(55), 1,
      sym_comment,
    ACTIONS(233), 19,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(235), 20,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [5374] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(56), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(123), 1,
      sym__expression,
    STATE(237), 1,
      sym__boolean_expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5477] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(113), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5577] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(90), 1,
      sym__expression,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5677] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(98), 1,
      sym__expression,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5777] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(60), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(106), 1,
      sym__expression,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5877] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(305), 1,
      anon_sym_T,
    STATE(61), 1,
      sym_comment,
    ACTIONS(303), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(301), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5931] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(62), 1,
      sym_comment,
    ACTIONS(309), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(307), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5983] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(63), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(259), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6083] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(64), 1,
      sym_comment,
    ACTIONS(213), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6135] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(65), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(256), 1,
      sym__expression,
    STATE(266), 1,
      sym_binary_expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6237] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(66), 1,
      sym_comment,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(258), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6337] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(315), 1,
      anon_sym_DOT,
    STATE(67), 1,
      sym_comment,
    ACTIONS(313), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(311), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6391] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(68), 1,
      sym_comment,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(283), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(201), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6493] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(69), 1,
      sym_comment,
    ACTIONS(319), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(317), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [6545] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(70), 1,
      sym_comment,
    ACTIONS(279), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [6597] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(71), 1,
      sym_comment,
    ACTIONS(323), 6,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(321), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6649] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(329), 1,
      anon_sym_DOT,
    STATE(72), 1,
      sym_comment,
    ACTIONS(327), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(325), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6703] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(73), 1,
      sym_comment,
    STATE(74), 1,
      sym_identifier,
    STATE(103), 1,
      sym__expression,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6803] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(331), 1,
      anon_sym_DOT,
    STATE(74), 1,
      sym_comment,
    ACTIONS(65), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6857] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(75), 1,
      sym_comment,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(278), 1,
      sym_binary_expression,
    STATE(291), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6959] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(76), 1,
      sym_comment,
    STATE(91), 1,
      sym__expression,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7059] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(77), 1,
      sym_comment,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(122), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7159] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(78), 1,
      sym_comment,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(270), 1,
      sym_binary_expression,
    STATE(291), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7261] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(79), 1,
      sym_comment,
    ACTIONS(235), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(233), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7313] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(80), 1,
      sym_comment,
    STATE(94), 1,
      sym__expression,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7413] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(81), 1,
      sym_comment,
    ACTIONS(261), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(259), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [7465] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(337), 1,
      sym__natural_number,
    STATE(82), 1,
      sym_comment,
    ACTIONS(335), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7519] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(83), 1,
      sym_comment,
    STATE(95), 1,
      sym__expression,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7619] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(84), 1,
      sym_comment,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(254), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7721] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(85), 1,
      sym_comment,
    STATE(96), 1,
      sym__expression,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7821] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(86), 1,
      sym_comment,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(265), 1,
      sym_binary_expression,
    STATE(291), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7923] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(87), 1,
      sym_comment,
    STATE(97), 1,
      sym__expression,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8023] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(88), 1,
      sym_comment,
    STATE(111), 1,
      sym__single_quote_string,
    STATE(253), 1,
      sym__expression,
    STATE(454), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8123] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(89), 1,
      sym_comment,
    ACTIONS(341), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(339), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8174] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    STATE(90), 1,
      sym_comment,
    ACTIONS(345), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(343), 22,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8243] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    STATE(91), 1,
      sym_comment,
    ACTIONS(345), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(343), 29,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8300] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(92), 1,
      sym_comment,
    ACTIONS(367), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8351] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(93), 1,
      sym_comment,
    ACTIONS(371), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(369), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8402] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      sym_comment,
    ACTIONS(345), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(343), 29,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8461] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    STATE(95), 1,
      sym_comment,
    ACTIONS(345), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(343), 28,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8522] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    STATE(96), 1,
      sym_comment,
    ACTIONS(345), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(343), 23,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8589] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    STATE(97), 1,
      sym_comment,
    ACTIONS(345), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(343), 27,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8652] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(98), 1,
      sym_comment,
    ACTIONS(345), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(343), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8703] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(99), 1,
      sym_comment,
    ACTIONS(375), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8754] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(387), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(396), 1,
      sym__natural_number,
    ACTIONS(399), 1,
      anon_sym__,
    ACTIONS(402), 1,
      anon_sym_BQUOTE,
    ACTIONS(405), 1,
      sym__identifier,
    STATE(131), 1,
      sym_identifier,
    STATE(132), 1,
      aux_sym__friendly_number,
    STATE(136), 1,
      sym__call_parameter,
    STATE(142), 1,
      sym_literal,
    STATE(148), 1,
      sym_integer,
    STATE(100), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(137), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(381), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(379), 15,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
  [8837] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(101), 1,
      sym_comment,
    ACTIONS(410), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8888] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(102), 1,
      sym_comment,
    ACTIONS(327), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(325), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8939] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    STATE(103), 1,
      sym_comment,
    ACTIONS(345), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(343), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8994] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(104), 1,
      sym_comment,
    ACTIONS(414), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9045] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(105), 1,
      sym_comment,
    ACTIONS(335), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9096] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    STATE(106), 1,
      sym_comment,
    ACTIONS(345), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(343), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9149] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(107), 1,
      sym_comment,
    ACTIONS(418), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9200] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(108), 1,
      sym_comment,
    ACTIONS(422), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9251] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(109), 1,
      sym_comment,
    ACTIONS(426), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9302] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(110), 1,
      sym_comment,
    ACTIONS(430), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9353] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(111), 1,
      sym_comment,
    ACTIONS(313), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(311), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9404] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(112), 1,
      sym_comment,
    ACTIONS(434), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9455] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    STATE(113), 1,
      sym_comment,
    ACTIONS(345), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(343), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_PIPE_PIPE,
  [9526] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(114), 1,
      sym_comment,
    ACTIONS(440), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9577] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      sym__natural_number,
    ACTIONS(77), 1,
      anon_sym__,
    ACTIONS(79), 1,
      anon_sym_BQUOTE,
    ACTIONS(81), 1,
      sym__identifier,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 1,
      anon_sym_DASH,
    STATE(100), 1,
      aux_sym_function_call_repeat1,
    STATE(115), 1,
      sym_comment,
    STATE(131), 1,
      sym_identifier,
    STATE(132), 1,
      aux_sym__friendly_number,
    STATE(136), 1,
      sym__call_parameter,
    STATE(142), 1,
      sym_literal,
    STATE(148), 1,
      sym_integer,
    STATE(137), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(67), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(444), 15,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
  [9662] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(116), 1,
      sym_comment,
    ACTIONS(450), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9713] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(117), 1,
      sym_comment,
    ACTIONS(454), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(452), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9764] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(118), 1,
      sym_comment,
    ACTIONS(458), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(456), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9815] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(462), 1,
      sym_keyword_from,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    STATE(119), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(460), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [9886] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DOT,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
    ACTIONS(478), 1,
      anon_sym_SQUOTE,
    ACTIONS(481), 1,
      sym__natural_number,
    ACTIONS(484), 1,
      anon_sym__,
    ACTIONS(487), 1,
      anon_sym_BQUOTE,
    ACTIONS(490), 1,
      sym__identifier,
    STATE(153), 1,
      aux_sym__friendly_number,
    STATE(155), 1,
      sym_identifier,
    STATE(164), 1,
      sym__call_parameter,
    STATE(167), 1,
      sym_literal,
    STATE(170), 1,
      sym_integer,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(120), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(172), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(174), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(466), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(379), 12,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
  [9967] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym__natural_number,
    ACTIONS(109), 1,
      anon_sym__,
    ACTIONS(111), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__identifier,
    ACTIONS(493), 1,
      anon_sym_DASH,
    STATE(120), 1,
      aux_sym_function_call_repeat1,
    STATE(121), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym__friendly_number,
    STATE(155), 1,
      sym_identifier,
    STATE(164), 1,
      sym__call_parameter,
    STATE(167), 1,
      sym_literal,
    STATE(170), 1,
      sym_integer,
    ACTIONS(442), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(172), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(174), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(99), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(444), 12,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
  [10050] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(497), 1,
      sym_keyword_from,
    STATE(122), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(495), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [10121] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(501), 1,
      sym_keyword_from,
    STATE(123), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(499), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10190] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(505), 1,
      sym_keyword_from,
    ACTIONS(507), 1,
      anon_sym_EQ,
    STATE(124), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 15,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
  [10260] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(509), 1,
      anon_sym_EQ,
    STATE(125), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 14,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10326] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(126), 1,
      sym_comment,
    ACTIONS(213), 8,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10369] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(127), 1,
      sym_comment,
    ACTIONS(235), 8,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(233), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10412] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(513), 1,
      sym_keyword_from,
    ACTIONS(515), 1,
      sym_keyword_filter,
    ACTIONS(517), 1,
      sym_keyword_derive,
    ACTIONS(519), 1,
      sym_keyword_group,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(527), 1,
      sym_keyword_join,
    ACTIONS(529), 1,
      sym_keyword_select,
    ACTIONS(533), 1,
      sym_keyword_loop,
    STATE(128), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym_transforms_repeat1,
    STATE(325), 1,
      sym_transforms,
    ACTIONS(511), 3,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
    ACTIONS(531), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(239), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10480] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(129), 1,
      sym_comment,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(213), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10522] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(130), 1,
      sym_comment,
    ACTIONS(233), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(235), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10564] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(539), 1,
      anon_sym_COLON,
    STATE(131), 1,
      sym_comment,
    ACTIONS(535), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(537), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10608] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(132), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym__friendly_number,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(131), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10652] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(133), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym__friendly_number,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(135), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10696] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(541), 1,
      sym__natural_number,
    ACTIONS(544), 1,
      anon_sym__,
    STATE(134), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    ACTIONS(196), 19,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      sym__identifier,
  [10742] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(515), 1,
      sym_keyword_filter,
    ACTIONS(517), 1,
      sym_keyword_derive,
    ACTIONS(519), 1,
      sym_keyword_group,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(527), 1,
      sym_keyword_join,
    ACTIONS(529), 1,
      sym_keyword_select,
    ACTIONS(533), 1,
      sym_keyword_loop,
    ACTIONS(549), 1,
      sym_keyword_from,
    STATE(135), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym_transforms_repeat1,
    STATE(378), 1,
      sym_transforms,
    ACTIONS(531), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(547), 3,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(239), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10810] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(136), 1,
      sym_comment,
    ACTIONS(551), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(553), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10851] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(137), 1,
      sym_comment,
    ACTIONS(325), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(327), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10892] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(557), 1,
      sym_keyword_from,
    ACTIONS(559), 1,
      sym_keyword_filter,
    ACTIONS(562), 1,
      sym_keyword_derive,
    ACTIONS(565), 1,
      sym_keyword_group,
    ACTIONS(568), 1,
      sym_keyword_aggregate,
    ACTIONS(571), 1,
      sym_keyword_sort,
    ACTIONS(574), 1,
      sym_keyword_take,
    ACTIONS(577), 1,
      sym_keyword_join,
    ACTIONS(580), 1,
      sym_keyword_select,
    ACTIONS(586), 1,
      sym_keyword_loop,
    STATE(138), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(555), 3,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
    ACTIONS(583), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(239), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10955] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(139), 1,
      sym_comment,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(225), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10996] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(135), 1,
      sym_keyword_from,
    STATE(140), 1,
      sym_comment,
    STATE(141), 1,
      aux_sym__friendly_number,
    ACTIONS(589), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(133), 23,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [11041] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(196), 1,
      sym_keyword_from,
    ACTIONS(591), 2,
      sym__natural_number,
      anon_sym__,
    STATE(141), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(194), 23,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [11084] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(142), 1,
      sym_comment,
    ACTIONS(535), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(537), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11125] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(143), 1,
      sym_comment,
    ACTIONS(438), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(440), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11166] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(131), 1,
      sym_keyword_from,
    STATE(141), 1,
      aux_sym__friendly_number,
    STATE(144), 1,
      sym_comment,
    ACTIONS(589), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(129), 23,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [11211] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(515), 1,
      sym_keyword_filter,
    ACTIONS(517), 1,
      sym_keyword_derive,
    ACTIONS(519), 1,
      sym_keyword_group,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(527), 1,
      sym_keyword_join,
    ACTIONS(529), 1,
      sym_keyword_select,
    ACTIONS(533), 1,
      sym_keyword_loop,
    ACTIONS(596), 1,
      sym_keyword_from,
    STATE(138), 1,
      aux_sym_transforms_repeat1,
    STATE(145), 1,
      sym_comment,
    ACTIONS(531), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(594), 3,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(239), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11276] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(146), 1,
      sym_comment,
    ACTIONS(307), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(309), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11317] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(147), 1,
      sym_comment,
    ACTIONS(311), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(313), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11358] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(148), 1,
      sym_comment,
    ACTIONS(325), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(327), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11399] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(149), 1,
      sym_comment,
    ACTIONS(432), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(434), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11440] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(150), 1,
      sym_comment,
    ACTIONS(333), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(335), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11481] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(151), 1,
      sym_comment,
    ACTIONS(598), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(600), 20,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11522] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(602), 1,
      sym__natural_number,
    ACTIONS(605), 1,
      anon_sym__,
    STATE(152), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(194), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    ACTIONS(196), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      sym__identifier,
  [11566] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(152), 1,
      aux_sym__friendly_number,
    STATE(153), 1,
      sym_comment,
    ACTIONS(129), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(131), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11608] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(154), 1,
      sym_comment,
    ACTIONS(211), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(213), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11648] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(608), 1,
      anon_sym_COLON,
    STATE(155), 1,
      sym_comment,
    ACTIONS(535), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(537), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11690] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(225), 1,
      sym_keyword_from,
    STATE(156), 1,
      sym_comment,
    ACTIONS(223), 25,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__natural_number,
      anon_sym__,
      anon_sym_DOT_DOT,
  [11730] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(152), 1,
      aux_sym__friendly_number,
    STATE(157), 1,
      sym_comment,
    ACTIONS(133), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(135), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11772] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(158), 1,
      sym_comment,
    ACTIONS(233), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(235), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11812] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(515), 1,
      sym_keyword_filter,
    ACTIONS(519), 1,
      sym_keyword_group,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(527), 1,
      sym_keyword_join,
    ACTIONS(533), 1,
      sym_keyword_loop,
    ACTIONS(610), 1,
      sym_keyword_derive,
    ACTIONS(612), 1,
      sym_keyword_select,
    STATE(159), 1,
      sym_comment,
    STATE(166), 1,
      aux_sym_transforms_repeat1,
    STATE(325), 1,
      sym_transforms,
    ACTIONS(511), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(531), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(239), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11876] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(160), 1,
      sym_comment,
    ACTIONS(438), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(440), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11915] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(617), 1,
      anon_sym_DOT,
    ACTIONS(620), 1,
      anon_sym_DASH,
    ACTIONS(623), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
    ACTIONS(629), 1,
      sym__natural_number,
    ACTIONS(632), 1,
      anon_sym__,
    ACTIONS(635), 1,
      anon_sym_BQUOTE,
    ACTIONS(638), 1,
      sym__identifier,
    STATE(273), 1,
      aux_sym__friendly_number,
    STATE(276), 1,
      sym_identifier,
    STATE(280), 1,
      sym_integer,
    STATE(284), 1,
      sym__call_parameter,
    STATE(289), 1,
      sym_literal,
    STATE(161), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(279), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(281), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(614), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(377), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [11984] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(559), 1,
      sym_keyword_filter,
    ACTIONS(565), 1,
      sym_keyword_group,
    ACTIONS(568), 1,
      sym_keyword_aggregate,
    ACTIONS(571), 1,
      sym_keyword_sort,
    ACTIONS(574), 1,
      sym_keyword_take,
    ACTIONS(577), 1,
      sym_keyword_join,
    ACTIONS(586), 1,
      sym_keyword_loop,
    ACTIONS(641), 1,
      sym_keyword_derive,
    ACTIONS(644), 1,
      sym_keyword_select,
    ACTIONS(555), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(162), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(583), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(239), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [12043] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(163), 1,
      sym_comment,
    ACTIONS(333), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(335), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [12082] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(164), 1,
      sym_comment,
    ACTIONS(551), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(553), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [12121] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(165), 1,
      sym_comment,
    ACTIONS(432), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(434), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [12160] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(515), 1,
      sym_keyword_filter,
    ACTIONS(519), 1,
      sym_keyword_group,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(527), 1,
      sym_keyword_join,
    ACTIONS(533), 1,
      sym_keyword_loop,
    ACTIONS(610), 1,
      sym_keyword_derive,
    ACTIONS(612), 1,
      sym_keyword_select,
    STATE(162), 1,
      aux_sym_transforms_repeat1,
    STATE(166), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(531), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(239), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [12221] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(167), 1,
      sym_comment,
    ACTIONS(535), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(537), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [12260] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(168), 1,
      sym_comment,
    ACTIONS(598), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(600), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [12299] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(169), 1,
      sym_comment,
    ACTIONS(307), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(309), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [12338] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(170), 1,
      sym_comment,
    ACTIONS(325), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(327), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [12377] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(171), 1,
      sym_comment,
    ACTIONS(223), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(225), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [12416] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(172), 1,
      sym_comment,
    ACTIONS(311), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(313), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [12455] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      sym__natural_number,
    ACTIONS(293), 1,
      anon_sym__,
    ACTIONS(295), 1,
      anon_sym_BQUOTE,
    ACTIONS(297), 1,
      sym__identifier,
    ACTIONS(647), 1,
      anon_sym_DASH,
    STATE(161), 1,
      aux_sym_function_call_repeat1,
    STATE(173), 1,
      sym_comment,
    STATE(273), 1,
      aux_sym__friendly_number,
    STATE(276), 1,
      sym_identifier,
    STATE(280), 1,
      sym_integer,
    STATE(284), 1,
      sym__call_parameter,
    STATE(289), 1,
      sym_literal,
    STATE(279), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(281), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(283), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(442), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [12526] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(174), 1,
      sym_comment,
    ACTIONS(325), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(327), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [12565] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(303), 1,
      sym_keyword_from,
    STATE(175), 1,
      sym_comment,
    ACTIONS(301), 23,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [12603] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(515), 1,
      sym_keyword_filter,
    ACTIONS(519), 1,
      sym_keyword_group,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(527), 1,
      sym_keyword_join,
    ACTIONS(533), 1,
      sym_keyword_loop,
    ACTIONS(610), 1,
      sym_keyword_derive,
    ACTIONS(612), 1,
      sym_keyword_select,
    STATE(166), 1,
      aux_sym_transforms_repeat1,
    STATE(176), 1,
      sym_comment,
    STATE(466), 1,
      sym_transforms,
    ACTIONS(531), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(239), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [12663] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(323), 1,
      sym_keyword_from,
    STATE(177), 1,
      sym_comment,
    ACTIONS(321), 23,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [12701] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(235), 1,
      sym_keyword_from,
    STATE(178), 1,
      sym_comment,
    ACTIONS(233), 22,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [12738] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(651), 1,
      sym_keyword_from,
    STATE(179), 1,
      sym_comment,
    ACTIONS(649), 22,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12775] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(213), 1,
      sym_keyword_from,
    STATE(180), 1,
      sym_comment,
    ACTIONS(211), 22,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [12812] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(655), 1,
      sym_keyword_from,
    ACTIONS(657), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym_comment,
    STATE(230), 1,
      sym_conditions,
    ACTIONS(653), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12850] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(661), 1,
      sym_keyword_from,
    STATE(182), 1,
      sym_comment,
    ACTIONS(659), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [12884] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(665), 1,
      sym_keyword_from,
    STATE(183), 1,
      sym_comment,
    ACTIONS(663), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [12918] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(669), 1,
      sym_keyword_from,
    STATE(184), 1,
      sym_comment,
    ACTIONS(667), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [12952] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(673), 1,
      sym_keyword_from,
    ACTIONS(675), 1,
      anon_sym_DOT_DOT,
    STATE(185), 1,
      sym_comment,
    ACTIONS(671), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12988] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(679), 1,
      sym_keyword_from,
    STATE(186), 1,
      sym_comment,
    ACTIONS(677), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13022] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(683), 1,
      sym_keyword_from,
    STATE(187), 1,
      sym_comment,
    ACTIONS(681), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13056] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(687), 1,
      sym_keyword_from,
    STATE(188), 1,
      sym_comment,
    ACTIONS(685), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13090] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(691), 1,
      sym_keyword_from,
    ACTIONS(693), 1,
      anon_sym_EQ,
    STATE(189), 1,
      sym_comment,
    ACTIONS(689), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13126] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(505), 1,
      sym_keyword_from,
    STATE(190), 1,
      sym_comment,
    ACTIONS(503), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13160] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(697), 1,
      sym_keyword_from,
    STATE(191), 1,
      sym_comment,
    ACTIONS(695), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13194] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(701), 1,
      sym_keyword_from,
    STATE(192), 1,
      sym_comment,
    ACTIONS(699), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13228] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(703), 1,
      anon_sym_EQ,
    STATE(193), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13284] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(707), 1,
      sym_keyword_from,
    STATE(194), 1,
      sym_comment,
    ACTIONS(705), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13318] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(657), 1,
      anon_sym_LPAREN,
    ACTIONS(711), 1,
      sym_keyword_from,
    STATE(195), 1,
      sym_comment,
    STATE(244), 1,
      sym_conditions,
    ACTIONS(709), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13356] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(715), 1,
      sym_keyword_from,
    STATE(196), 1,
      sym_comment,
    ACTIONS(713), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13390] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(719), 1,
      sym_keyword_from,
    STATE(197), 1,
      sym_comment,
    ACTIONS(717), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13423] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(723), 1,
      sym_keyword_from,
    STATE(198), 1,
      sym_comment,
    ACTIONS(721), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13456] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(727), 1,
      sym_keyword_from,
    STATE(199), 1,
      sym_comment,
    ACTIONS(725), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13489] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(691), 1,
      sym_keyword_from,
    STATE(200), 1,
      sym_comment,
    ACTIONS(689), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13522] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(731), 1,
      sym_keyword_from,
    STATE(201), 1,
      sym_comment,
    ACTIONS(422), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(729), 3,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
    ACTIONS(420), 12,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13559] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(202), 1,
      sym_comment,
    ACTIONS(733), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(735), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [13592] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(203), 1,
      sym_comment,
    ACTIONS(737), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(739), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [13625] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(743), 1,
      sym_keyword_from,
    STATE(204), 1,
      sym_comment,
    ACTIONS(741), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13658] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(747), 1,
      sym_keyword_from,
    STATE(205), 1,
      sym_comment,
    ACTIONS(745), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13691] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(206), 1,
      sym_comment,
    ACTIONS(749), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(751), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [13724] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(755), 1,
      sym_keyword_from,
    STATE(207), 1,
      sym_comment,
    ACTIONS(753), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13757] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(759), 1,
      sym_keyword_from,
    STATE(208), 1,
      sym_comment,
    ACTIONS(757), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13790] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(209), 1,
      sym_comment,
    STATE(395), 1,
      aux_sym__tuples_repeat1,
    ACTIONS(430), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 14,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13825] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(763), 1,
      sym_keyword_from,
    STATE(210), 1,
      sym_comment,
    ACTIONS(761), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13858] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(673), 1,
      sym_keyword_from,
    STATE(211), 1,
      sym_comment,
    ACTIONS(671), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13891] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(767), 1,
      sym_keyword_from,
    STATE(212), 1,
      sym_comment,
    ACTIONS(765), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13924] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(769), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      sym_comment,
    STATE(400), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(422), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 12,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13963] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(775), 1,
      sym_keyword_from,
    STATE(214), 1,
      sym_comment,
    ACTIONS(773), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13996] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(779), 1,
      sym_keyword_from,
    STATE(215), 1,
      sym_comment,
    ACTIONS(777), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14029] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(783), 1,
      sym_keyword_from,
    STATE(216), 1,
      sym_comment,
    ACTIONS(781), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14061] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(787), 1,
      sym_keyword_from,
    STATE(217), 1,
      sym_comment,
    ACTIONS(785), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14093] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(791), 1,
      sym_keyword_from,
    STATE(218), 1,
      sym_comment,
    ACTIONS(789), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14125] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(795), 1,
      sym_keyword_from,
    STATE(219), 1,
      sym_comment,
    ACTIONS(793), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14157] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(799), 1,
      sym_keyword_from,
    STATE(220), 1,
      sym_comment,
    ACTIONS(797), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14189] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(803), 1,
      sym_keyword_from,
    STATE(221), 1,
      sym_comment,
    ACTIONS(801), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14221] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(807), 1,
      sym_keyword_from,
    STATE(222), 1,
      sym_comment,
    ACTIONS(805), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14253] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(811), 1,
      sym_keyword_from,
    STATE(223), 1,
      sym_comment,
    ACTIONS(809), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14285] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(815), 1,
      sym_keyword_from,
    STATE(224), 1,
      sym_comment,
    ACTIONS(813), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14317] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(225), 1,
      sym_comment,
    ACTIONS(817), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(422), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 12,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14351] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(821), 1,
      sym_keyword_from,
    STATE(226), 1,
      sym_comment,
    ACTIONS(819), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14383] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(825), 1,
      sym_keyword_from,
    STATE(227), 1,
      sym_comment,
    ACTIONS(823), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14415] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(829), 1,
      sym_keyword_from,
    STATE(228), 1,
      sym_comment,
    ACTIONS(827), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14447] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(833), 1,
      sym_keyword_from,
    STATE(229), 1,
      sym_comment,
    ACTIONS(831), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14479] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(837), 1,
      sym_keyword_from,
    STATE(230), 1,
      sym_comment,
    ACTIONS(835), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14511] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(841), 1,
      sym_keyword_from,
    STATE(231), 1,
      sym_comment,
    ACTIONS(839), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14543] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(845), 1,
      sym_keyword_from,
    STATE(232), 1,
      sym_comment,
    ACTIONS(843), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14575] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(505), 1,
      sym_keyword_from,
    STATE(233), 1,
      sym_comment,
    ACTIONS(503), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14607] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(849), 1,
      sym_keyword_from,
    STATE(234), 1,
      sym_comment,
    ACTIONS(847), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14639] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(853), 1,
      sym_keyword_from,
    STATE(235), 1,
      sym_comment,
    ACTIONS(851), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14671] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(857), 1,
      sym_keyword_from,
    STATE(236), 1,
      sym_comment,
    ACTIONS(855), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14703] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(861), 1,
      sym_keyword_from,
    STATE(237), 1,
      sym_comment,
    ACTIONS(859), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14735] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(865), 1,
      sym_keyword_from,
    STATE(238), 1,
      sym_comment,
    ACTIONS(863), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14767] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(869), 1,
      sym_keyword_from,
    STATE(239), 1,
      sym_comment,
    ACTIONS(867), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14799] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(873), 1,
      sym_keyword_from,
    STATE(240), 1,
      sym_comment,
    ACTIONS(871), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14831] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(877), 1,
      sym_keyword_from,
    STATE(241), 1,
      sym_comment,
    ACTIONS(875), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14863] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(881), 1,
      sym_keyword_from,
    STATE(242), 1,
      sym_comment,
    ACTIONS(879), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14895] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(883), 1,
      anon_sym_COMMA,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      sym_comment,
    STATE(407), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(422), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 12,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14933] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(889), 1,
      sym_keyword_from,
    STATE(244), 1,
      sym_comment,
    ACTIONS(887), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14965] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(893), 1,
      sym_keyword_from,
    STATE(245), 1,
      sym_comment,
    ACTIONS(891), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14997] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(897), 1,
      sym_keyword_from,
    STATE(246), 1,
      sym_comment,
    ACTIONS(895), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15029] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(901), 1,
      sym_keyword_from,
    STATE(247), 1,
      sym_comment,
    ACTIONS(899), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15061] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(248), 1,
      sym_comment,
    ACTIONS(430), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 14,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15093] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(905), 1,
      sym_keyword_from,
    STATE(249), 1,
      sym_comment,
    ACTIONS(903), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15125] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(909), 1,
      sym_keyword_from,
    STATE(250), 1,
      sym_comment,
    ACTIONS(907), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15157] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(913), 1,
      sym_keyword_from,
    STATE(251), 1,
      sym_comment,
    ACTIONS(911), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15189] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(252), 1,
      sym_comment,
    ACTIONS(915), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(917), 10,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [15220] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    STATE(253), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(919), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15271] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(254), 1,
      sym_comment,
    ACTIONS(921), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(422), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 12,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15304] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    STATE(255), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(923), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15355] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
    ACTIONS(927), 1,
      anon_sym_AMP_AMP,
    ACTIONS(929), 1,
      anon_sym_PIPE_PIPE,
    STATE(256), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15405] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(931), 1,
      anon_sym_EQ_GT,
    STATE(257), 1,
      sym_comment,
    ACTIONS(422), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 12,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15437] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    STATE(258), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(343), 3,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15483] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    STATE(259), 1,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15531] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(260), 1,
      sym_comment,
    ACTIONS(235), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(233), 11,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [15561] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(261), 1,
      sym_comment,
    ACTIONS(213), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(211), 11,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [15591] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(933), 1,
      anon_sym_EQ_GT,
    STATE(262), 1,
      sym_comment,
    ACTIONS(422), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 12,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15623] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(937), 1,
      anon_sym_DOT,
    ACTIONS(939), 1,
      anon_sym_DASH,
    ACTIONS(941), 1,
      anon_sym_DQUOTE,
    ACTIONS(943), 1,
      anon_sym_SQUOTE,
    STATE(263), 1,
      sym_comment,
    STATE(319), 1,
      aux_sym__friendly_number,
    STATE(339), 1,
      sym_integer,
    STATE(409), 1,
      sym_literal,
    ACTIONS(945), 2,
      sym__natural_number,
      anon_sym__,
    STATE(373), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(375), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(935), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15671] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(446), 1,
      anon_sym_DASH,
    STATE(132), 1,
      aux_sym__friendly_number,
    STATE(148), 1,
      sym_integer,
    STATE(151), 1,
      sym_literal,
    STATE(264), 1,
      sym_comment,
    ACTIONS(75), 2,
      sym__natural_number,
      anon_sym__,
    STATE(137), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(947), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15719] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      sym_comment,
    ACTIONS(422), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 12,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15751] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(266), 1,
      sym_comment,
    ACTIONS(422), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 13,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15781] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(937), 1,
      anon_sym_DOT,
    ACTIONS(943), 1,
      anon_sym_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_DASH,
    ACTIONS(953), 1,
      anon_sym_DQUOTE,
    STATE(267), 1,
      sym_comment,
    STATE(339), 1,
      sym_integer,
    STATE(348), 1,
      aux_sym__friendly_number,
    STATE(533), 1,
      sym_literal,
    ACTIONS(955), 2,
      sym__natural_number,
      anon_sym__,
    STATE(373), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(375), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(935), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15829] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      anon_sym_DASH,
    STATE(268), 1,
      sym_comment,
    STATE(273), 1,
      aux_sym__friendly_number,
    STATE(280), 1,
      sym_integer,
    STATE(288), 1,
      sym_literal,
    ACTIONS(291), 2,
      sym__natural_number,
      anon_sym__,
    STATE(279), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(281), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(957), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15877] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    ACTIONS(927), 1,
      anon_sym_AMP_AMP,
    ACTIONS(929), 1,
      anon_sym_PIPE_PIPE,
    STATE(269), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15927] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      sym_comment,
    ACTIONS(422), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 12,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15959] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(703), 1,
      anon_sym_EQ,
    STATE(271), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16009] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(937), 1,
      anon_sym_DOT,
    ACTIONS(943), 1,
      anon_sym_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_DASH,
    ACTIONS(953), 1,
      anon_sym_DQUOTE,
    STATE(272), 1,
      sym_comment,
    STATE(339), 1,
      sym_integer,
    STATE(348), 1,
      aux_sym__friendly_number,
    STATE(531), 1,
      sym_literal,
    ACTIONS(955), 2,
      sym__natural_number,
      anon_sym__,
    STATE(373), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(375), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(935), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [16057] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(273), 1,
      sym_comment,
    STATE(275), 1,
      aux_sym__friendly_number,
    ACTIONS(131), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(129), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16089] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(274), 1,
      sym_comment,
    STATE(275), 1,
      aux_sym__friendly_number,
    ACTIONS(135), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(133), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16121] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(961), 1,
      sym__natural_number,
    ACTIONS(964), 1,
      anon_sym__,
    STATE(275), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(196), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym__identifier,
    ACTIONS(194), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [16155] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(967), 1,
      anon_sym_COLON,
    STATE(276), 1,
      sym_comment,
    ACTIONS(537), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(535), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16187] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(493), 1,
      anon_sym_DASH,
    STATE(153), 1,
      aux_sym__friendly_number,
    STATE(168), 1,
      sym_literal,
    STATE(170), 1,
      sym_integer,
    STATE(277), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym__natural_number,
      anon_sym__,
    STATE(172), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(174), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(969), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [16235] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      sym_comment,
    ACTIONS(422), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 12,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16267] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(279), 1,
      sym_comment,
    ACTIONS(327), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(325), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16296] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(280), 1,
      sym_comment,
    ACTIONS(327), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(325), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16325] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(281), 1,
      sym_comment,
    ACTIONS(313), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(311), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16354] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(282), 1,
      sym_comment,
    ACTIONS(309), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(307), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16383] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    STATE(283), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16430] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(284), 1,
      sym_comment,
    ACTIONS(553), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(551), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16459] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(285), 1,
      sym_comment,
    ACTIONS(335), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(333), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16488] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(286), 1,
      sym_comment,
    ACTIONS(225), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(223), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16517] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(287), 1,
      sym_comment,
    ACTIONS(440), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(438), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16546] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(288), 1,
      sym_comment,
    ACTIONS(600), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(598), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16575] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(289), 1,
      sym_comment,
    ACTIONS(537), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(535), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16604] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(290), 1,
      sym_comment,
    ACTIONS(434), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(432), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16633] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(357), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(363), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(927), 1,
      anon_sym_AMP_AMP,
    ACTIONS(929), 1,
      anon_sym_PIPE_PIPE,
    STATE(291), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16680] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(11), 1,
      sym_keyword_let,
    ACTIONS(13), 1,
      sym_keyword_prql,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(973), 1,
      ts_builtin_sym_end,
    STATE(292), 1,
      sym_comment,
    STATE(301), 1,
      aux_sym_program_repeat2,
    STATE(318), 1,
      aux_sym_program_repeat1,
    STATE(338), 1,
      sym_prql,
    STATE(128), 2,
      sym_from_text,
      sym_from,
    STATE(379), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16723] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(293), 1,
      sym_comment,
    STATE(352), 1,
      sym_target,
    ACTIONS(975), 11,
      anon_sym_sql_DOTansi,
      anon_sym_sql_DOTbigquery,
      anon_sym_sql_DOTclickhouse,
      anon_sym_sql_DOTgeneric,
      anon_sym_sql_DOThive,
      anon_sym_sql_DOTmssql,
      anon_sym_sql_DOTmysql,
      anon_sym_sql_DOTpostgres,
      anon_sym_sql_DOTsqlite,
      anon_sym_sql_DOTsnowflake,
      anon_sym_sql_DOTduckdb,
  [16749] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(977), 1,
      sym_keyword_window,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      sym_comment,
    STATE(297), 1,
      aux_sym_group_repeat2,
    STATE(350), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16783] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(977), 1,
      sym_keyword_window,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      sym_comment,
    STATE(297), 1,
      aux_sym_group_repeat2,
    STATE(350), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16817] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(977), 1,
      sym_keyword_window,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      sym_comment,
    STATE(297), 1,
      aux_sym_group_repeat2,
    STATE(350), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16851] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(985), 1,
      sym_keyword_aggregate,
    ACTIONS(988), 1,
      sym_keyword_sort,
    ACTIONS(991), 1,
      sym_keyword_take,
    ACTIONS(994), 1,
      sym_keyword_window,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    STATE(297), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(350), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16883] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(999), 1,
      ts_builtin_sym_end,
    ACTIONS(1001), 1,
      sym_keyword_from,
    ACTIONS(1004), 1,
      sym_keyword_let,
    ACTIONS(1007), 1,
      sym_keyword_from_text,
    STATE(128), 2,
      sym_from_text,
      sym_from,
    STATE(298), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(379), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16915] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(977), 1,
      sym_keyword_window,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_group_repeat2,
    STATE(299), 1,
      sym_comment,
    STATE(350), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16949] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(977), 1,
      sym_keyword_window,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_group_repeat2,
    STATE(300), 1,
      sym_comment,
    STATE(350), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16983] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(11), 1,
      sym_keyword_let,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1014), 1,
      ts_builtin_sym_end,
    STATE(298), 1,
      aux_sym_program_repeat2,
    STATE(301), 1,
      sym_comment,
    STATE(128), 2,
      sym_from_text,
      sym_from,
    STATE(379), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [17017] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(11), 1,
      sym_keyword_let,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(973), 1,
      ts_builtin_sym_end,
    STATE(298), 1,
      aux_sym_program_repeat2,
    STATE(302), 1,
      sym_comment,
    STATE(128), 2,
      sym_from_text,
      sym_from,
    STATE(379), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [17051] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(977), 1,
      sym_keyword_window,
    STATE(299), 1,
      aux_sym_group_repeat2,
    STATE(303), 1,
      sym_comment,
    STATE(350), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17082] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(977), 1,
      sym_keyword_window,
    STATE(295), 1,
      aux_sym_group_repeat2,
    STATE(304), 1,
      sym_comment,
    STATE(350), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17113] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1018), 1,
      anon_sym_RBRACE,
    ACTIONS(1020), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(192), 1,
      sym_identifier,
    STATE(305), 1,
      sym_comment,
    STATE(382), 1,
      sym_direction,
    STATE(416), 1,
      sym__sort_instruction,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [17148] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(977), 1,
      sym_keyword_window,
    STATE(294), 1,
      aux_sym_group_repeat2,
    STATE(306), 1,
      sym_comment,
    STATE(350), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17179] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(977), 1,
      sym_keyword_window,
    STATE(296), 1,
      aux_sym_group_repeat2,
    STATE(307), 1,
      sym_comment,
    STATE(350), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17210] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(521), 1,
      sym_keyword_aggregate,
    ACTIONS(523), 1,
      sym_keyword_sort,
    ACTIONS(525), 1,
      sym_keyword_take,
    ACTIONS(977), 1,
      sym_keyword_window,
    STATE(300), 1,
      aux_sym_group_repeat2,
    STATE(308), 1,
      sym_comment,
    STATE(350), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17241] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1020), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    ACTIONS(1024), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      sym_identifier,
    STATE(309), 1,
      sym_comment,
    STATE(382), 1,
      sym_direction,
    STATE(431), 1,
      sym__sort_instruction,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [17273] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1020), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    ACTIONS(1026), 1,
      anon_sym_LBRACE,
    STATE(192), 1,
      sym_identifier,
    STATE(215), 1,
      sym__sort_instruction,
    STATE(310), 1,
      sym_comment,
    STATE(382), 1,
      sym_direction,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [17305] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1020), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    ACTIONS(1028), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      sym_identifier,
    STATE(311), 1,
      sym_comment,
    STATE(382), 1,
      sym_direction,
    STATE(431), 1,
      sym__sort_instruction,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [17337] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1030), 1,
      anon_sym_DASH,
    ACTIONS(1032), 1,
      anon_sym_AT,
    STATE(144), 1,
      aux_sym__friendly_number,
    STATE(185), 1,
      sym_integer,
    STATE(211), 1,
      sym_range,
    STATE(312), 1,
      sym_comment,
    STATE(452), 1,
      sym_date,
    ACTIONS(589), 2,
      sym__natural_number,
      anon_sym__,
  [17369] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1030), 1,
      anon_sym_DASH,
    ACTIONS(1032), 1,
      anon_sym_AT,
    STATE(144), 1,
      aux_sym__friendly_number,
    STATE(313), 1,
      sym_comment,
    STATE(344), 1,
      sym_integer,
    STATE(369), 1,
      sym_range,
    STATE(452), 1,
      sym_date,
    ACTIONS(589), 2,
      sym__natural_number,
      anon_sym__,
  [17401] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1020), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(192), 1,
      sym_identifier,
    STATE(314), 1,
      sym_comment,
    STATE(382), 1,
      sym_direction,
    STATE(431), 1,
      sym__sort_instruction,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [17430] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1020), 1,
      anon_sym_BQUOTE,
    ACTIONS(1034), 1,
      sym_keyword_side,
    ACTIONS(1036), 1,
      sym__identifier,
    STATE(181), 1,
      sym__table_selection,
    STATE(189), 1,
      sym_identifier,
    STATE(212), 1,
      sym__table_reference,
    STATE(315), 1,
      sym_comment,
    STATE(335), 1,
      sym__join_definition,
  [17461] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(196), 1,
      sym__identifier,
    ACTIONS(1038), 1,
      sym__natural_number,
    ACTIONS(1041), 1,
      anon_sym__,
    STATE(316), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [17486] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(135), 1,
      sym__identifier,
    ACTIONS(945), 1,
      sym__natural_number,
    ACTIONS(1044), 1,
      anon_sym__,
    STATE(316), 1,
      aux_sym__friendly_number,
    STATE(317), 1,
      sym_comment,
    ACTIONS(133), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [17513] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1048), 1,
      sym_keyword_from,
    ACTIONS(1050), 1,
      sym_keyword_prql,
    STATE(338), 1,
      sym_prql,
    STATE(318), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(1046), 3,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
  [17538] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(131), 1,
      sym__identifier,
    ACTIONS(945), 1,
      sym__natural_number,
    ACTIONS(1044), 1,
      anon_sym__,
    STATE(316), 1,
      aux_sym__friendly_number,
    STATE(319), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [17565] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1020), 1,
      anon_sym_BQUOTE,
    ACTIONS(1036), 1,
      sym__identifier,
    ACTIONS(1053), 1,
      sym_keyword_from_text,
    ACTIONS(1055), 1,
      anon_sym_LPAREN,
    STATE(135), 1,
      sym_from_text,
    STATE(320), 1,
      sym_comment,
    STATE(358), 1,
      sym_module_call,
    STATE(449), 1,
      sym_identifier,
  [17596] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1060), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      sym__window_definition,
    STATE(321), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(1057), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17618] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1064), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      aux_sym_window_definitions_repeat1,
    STATE(322), 1,
      sym_comment,
    STATE(365), 1,
      sym__window_definition,
    ACTIONS(1062), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17642] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(322), 1,
      aux_sym_window_definitions_repeat1,
    STATE(323), 1,
      sym_comment,
    STATE(365), 1,
      sym__window_definition,
    STATE(470), 1,
      sym_window_definitions,
    ACTIONS(1062), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17666] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1066), 1,
      anon_sym_DASH_GT,
    ACTIONS(1068), 1,
      anon_sym_BQUOTE,
    ACTIONS(1071), 1,
      sym__identifier,
    STATE(362), 1,
      sym_identifier,
    STATE(412), 1,
      sym_parameter,
    STATE(324), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [17692] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1076), 1,
      sym_keyword_from,
    STATE(325), 1,
      sym_comment,
    ACTIONS(1074), 5,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17712] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1078), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      sym_comment,
    STATE(411), 1,
      sym_pipeline,
    STATE(159), 2,
      sym_from_text,
      sym_from,
  [17738] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1082), 1,
      sym_keyword_from,
    ACTIONS(1084), 1,
      anon_sym_DOT,
    STATE(327), 2,
      sym_comment,
      aux_sym_module_call_repeat1,
    ACTIONS(1080), 3,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
  [17760] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1087), 1,
      anon_sym_EQ,
    ACTIONS(1089), 1,
      anon_sym_BQUOTE,
    ACTIONS(1091), 1,
      sym__identifier,
    STATE(328), 1,
      sym_comment,
    STATE(332), 1,
      aux_sym_function_definition_repeat1,
    STATE(362), 1,
      sym_identifier,
    STATE(412), 1,
      sym_parameter,
  [17788] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(329), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym__,
      sym__identifier,
    ACTIONS(223), 4,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym__natural_number,
      anon_sym_BQUOTE,
  [17808] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1095), 1,
      sym_keyword_from,
    ACTIONS(1097), 1,
      anon_sym_DOT,
    STATE(330), 1,
      sym_comment,
    STATE(331), 1,
      aux_sym_module_call_repeat1,
    ACTIONS(1093), 3,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
  [17832] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1097), 1,
      anon_sym_DOT,
    ACTIONS(1101), 1,
      sym_keyword_from,
    STATE(327), 1,
      aux_sym_module_call_repeat1,
    STATE(331), 1,
      sym_comment,
    ACTIONS(1099), 3,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
  [17856] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1089), 1,
      anon_sym_BQUOTE,
    ACTIONS(1091), 1,
      sym__identifier,
    ACTIONS(1103), 1,
      anon_sym_DASH_GT,
    STATE(324), 1,
      aux_sym_function_definition_repeat1,
    STATE(332), 1,
      sym_comment,
    STATE(362), 1,
      sym_identifier,
    STATE(412), 1,
      sym_parameter,
  [17884] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(309), 1,
      sym_keyword_from,
    STATE(333), 1,
      sym_comment,
    ACTIONS(307), 5,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
      anon_sym_COMMA,
  [17904] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1105), 1,
      sym__natural_number,
    STATE(334), 1,
      sym_comment,
    ACTIONS(333), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17923] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1020), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(189), 1,
      sym_identifier,
    STATE(195), 1,
      sym__table_selection,
    STATE(212), 1,
      sym__table_reference,
    STATE(335), 1,
      sym_comment,
  [17948] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1020), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(189), 1,
      sym_identifier,
    STATE(212), 1,
      sym__table_reference,
    STATE(216), 1,
      sym__table_selection,
    STATE(336), 1,
      sym_comment,
  [17973] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1107), 1,
      anon_sym_DASH,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(70), 1,
      sym_integer,
    STATE(337), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [17996] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1111), 1,
      sym_keyword_from,
    STATE(338), 1,
      sym_comment,
    ACTIONS(1109), 4,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [18015] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1113), 1,
      anon_sym_DOT,
    STATE(339), 1,
      sym_comment,
    ACTIONS(325), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18034] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(340), 1,
      sym_comment,
    STATE(422), 1,
      sym_pipeline,
    STATE(159), 2,
      sym_from_text,
      sym_from,
  [18057] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1107), 1,
      anon_sym_DASH,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym_integer,
    STATE(341), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [18080] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(342), 1,
      sym_comment,
    ACTIONS(233), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18097] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1030), 1,
      anon_sym_DASH,
    STATE(144), 1,
      aux_sym__friendly_number,
    STATE(179), 1,
      sym_integer,
    STATE(343), 1,
      sym_comment,
    ACTIONS(589), 2,
      sym__natural_number,
      anon_sym__,
  [18120] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(675), 1,
      anon_sym_DOT_DOT,
    STATE(344), 1,
      sym_comment,
    ACTIONS(1115), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [18139] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1020), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(189), 1,
      sym_identifier,
    STATE(212), 1,
      sym__table_reference,
    STATE(250), 1,
      sym__table_selection,
    STATE(345), 1,
      sym_comment,
  [18164] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(1117), 2,
      sym__natural_number,
      anon_sym__,
    STATE(346), 2,
      aux_sym__friendly_number,
      sym_comment,
  [18183] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(346), 1,
      aux_sym__friendly_number,
    STATE(347), 1,
      sym_comment,
    ACTIONS(133), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(955), 2,
      sym__natural_number,
      anon_sym__,
  [18204] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(346), 1,
      aux_sym__friendly_number,
    STATE(348), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(955), 2,
      sym__natural_number,
      anon_sym__,
  [18225] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1122), 1,
      sym_keyword_from,
    STATE(349), 1,
      sym_comment,
    ACTIONS(1120), 4,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_DOT,
  [18244] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(350), 1,
      sym_comment,
    ACTIONS(1124), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [18261] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1107), 1,
      anon_sym_DASH,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(81), 1,
      sym_integer,
    STATE(351), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [18284] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1128), 1,
      sym_keyword_from,
    STATE(352), 1,
      sym_comment,
    ACTIONS(1126), 4,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [18303] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(353), 1,
      sym_comment,
    ACTIONS(1130), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [18320] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(354), 1,
      sym_comment,
    ACTIONS(211), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18337] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1134), 1,
      sym_keyword_from,
    STATE(355), 1,
      sym_comment,
    ACTIONS(1132), 4,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [18356] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1138), 1,
      sym_keyword_from,
    STATE(356), 1,
      sym_comment,
    ACTIONS(1136), 4,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [18375] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(357), 1,
      sym_comment,
    ACTIONS(438), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18391] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(549), 1,
      sym_keyword_from,
    STATE(358), 1,
      sym_comment,
    ACTIONS(547), 3,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
  [18409] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1142), 1,
      sym_keyword_from,
    STATE(359), 1,
      sym_comment,
    ACTIONS(1140), 3,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
  [18427] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1144), 1,
      aux_sym__date_token1,
    ACTIONS(1146), 1,
      aux_sym__time_token1,
    STATE(61), 1,
      sym__date,
    STATE(116), 1,
      sym__time,
    STATE(360), 1,
      sym_comment,
  [18449] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1148), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(361), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [18469] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1150), 1,
      anon_sym_COLON,
    STATE(362), 1,
      sym_comment,
    ACTIONS(1152), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18487] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(363), 1,
      sym_comment,
    ACTIONS(1154), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [18503] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(364), 1,
      sym_comment,
    ACTIONS(333), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18519] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(365), 1,
      sym_comment,
    ACTIONS(1156), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [18535] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1020), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(199), 1,
      sym__table_reference,
    STATE(200), 1,
      sym_identifier,
    STATE(366), 1,
      sym_comment,
  [18557] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(367), 1,
      sym_comment,
    ACTIONS(223), 4,
      anon_sym_COMMA,
      anon_sym_DOT,
      sym__natural_number,
      anon_sym__,
  [18573] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1158), 1,
      anon_sym_DOT,
    STATE(317), 1,
      aux_sym__friendly_number,
    STATE(368), 1,
      sym_comment,
    ACTIONS(945), 2,
      sym__natural_number,
      anon_sym__,
  [18593] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(369), 1,
      sym_comment,
    ACTIONS(1115), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [18609] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1160), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym__friendly_number,
    STATE(370), 1,
      sym_comment,
    ACTIONS(75), 2,
      sym__natural_number,
      anon_sym__,
  [18629] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1162), 1,
      anon_sym_DOT,
    STATE(274), 1,
      aux_sym__friendly_number,
    STATE(371), 1,
      sym_comment,
    ACTIONS(291), 2,
      sym__natural_number,
      anon_sym__,
  [18649] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1164), 1,
      anon_sym_DOT,
    STATE(157), 1,
      aux_sym__friendly_number,
    STATE(372), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym__natural_number,
      anon_sym__,
  [18669] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(373), 1,
      sym_comment,
    ACTIONS(325), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18685] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(374), 1,
      sym_comment,
    ACTIONS(432), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18701] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(375), 1,
      sym_comment,
    ACTIONS(311), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18717] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1168), 1,
      sym_keyword_from,
    STATE(376), 1,
      sym_comment,
    ACTIONS(1166), 3,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
  [18735] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1158), 1,
      anon_sym_DOT,
    STATE(347), 1,
      aux_sym__friendly_number,
    STATE(377), 1,
      sym_comment,
    ACTIONS(955), 2,
      sym__natural_number,
      anon_sym__,
  [18755] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1172), 1,
      sym_keyword_from,
    STATE(378), 1,
      sym_comment,
    ACTIONS(1170), 3,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
  [18773] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      sym_keyword_from,
    STATE(379), 1,
      sym_comment,
    ACTIONS(1174), 3,
      ts_builtin_sym_end,
      sym_keyword_let,
      sym_keyword_from_text,
  [18791] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1028), 1,
      anon_sym_RBRACE,
    ACTIONS(1178), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      sym_comment,
    STATE(397), 1,
      aux_sym_sorts_repeat1,
  [18810] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1020), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(330), 1,
      sym_identifier,
    STATE(381), 1,
      sym_comment,
  [18829] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1020), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(194), 1,
      sym_identifier,
    STATE(382), 1,
      sym_comment,
  [18848] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(1180), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      sym_comment,
    STATE(394), 1,
      aux_sym_case_repeat2,
  [18867] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1089), 1,
      anon_sym_BQUOTE,
    ACTIONS(1091), 1,
      sym__identifier,
    STATE(328), 1,
      sym_identifier,
    STATE(384), 1,
      sym_comment,
  [18886] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1182), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1185), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    STATE(385), 2,
      aux_sym__inner_triple_quotes,
      sym_comment,
  [18903] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_RBRACE,
    STATE(386), 2,
      sym_comment,
      aux_sym__tuples_repeat1,
  [18920] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(140), 1,
      aux_sym__friendly_number,
    STATE(387), 1,
      sym_comment,
    ACTIONS(589), 2,
      sym__natural_number,
      anon_sym__,
  [18937] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1194), 1,
      sym_keyword_format,
    ACTIONS(1196), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(220), 1,
      sym__triple_quote_string,
    STATE(388), 1,
      sym_comment,
  [18956] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    STATE(389), 1,
      sym_comment,
    STATE(396), 1,
      aux_sym_group_repeat1,
  [18975] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      sym_comment,
    STATE(392), 1,
      aux_sym_variable_repeat1,
  [18994] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1207), 1,
      anon_sym_RBRACE,
    STATE(391), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [19011] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(392), 2,
      sym_comment,
      aux_sym_variable_repeat1,
  [19028] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(1214), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      sym_comment,
    STATE(413), 1,
      aux_sym_group_repeat1,
  [19047] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    STATE(394), 2,
      sym_comment,
      aux_sym_case_repeat2,
  [19064] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1219), 1,
      anon_sym_COMMA,
    ACTIONS(1221), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      aux_sym__tuples_repeat1,
    STATE(395), 1,
      sym_comment,
  [19083] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(1214), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_group_repeat1,
    STATE(396), 1,
      sym_comment,
  [19102] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1223), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_RBRACE,
    STATE(397), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [19119] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1228), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1230), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(385), 1,
      aux_sym__inner_triple_quotes,
    STATE(398), 1,
      sym_comment,
  [19138] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1020), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(349), 1,
      sym_identifier,
    STATE(399), 1,
      sym_comment,
  [19157] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(1232), 1,
      anon_sym_COMMA,
    STATE(400), 1,
      sym_comment,
    STATE(414), 1,
      aux_sym_aggregate_repeat1,
  [19176] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_group_repeat1,
    STATE(401), 1,
      sym_comment,
  [19195] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    ACTIONS(1236), 1,
      anon_sym_COMMA,
    STATE(402), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [19212] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1228), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1239), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(385), 1,
      aux_sym__inner_triple_quotes,
    STATE(403), 1,
      sym_comment,
  [19231] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(404), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [19248] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      aux_sym__tuples_repeat1,
    STATE(405), 1,
      sym_comment,
  [19267] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1243), 1,
      sym__identifier,
    STATE(118), 1,
      sym_identifier,
    STATE(406), 1,
      sym_comment,
  [19286] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(883), 1,
      anon_sym_COMMA,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_conditions_repeat1,
    STATE(407), 1,
      sym_comment,
  [19305] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(408), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [19320] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(409), 1,
      sym_comment,
    ACTIONS(1247), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [19335] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(410), 1,
      sym_comment,
    ACTIONS(1249), 3,
      anon_sym_BQUOTE,
      sym__identifier,
      aux_sym__date_token2,
  [19350] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1251), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym_variable_repeat1,
    STATE(411), 1,
      sym_comment,
  [19369] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(412), 1,
      sym_comment,
    ACTIONS(1253), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [19384] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(1255), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_group_repeat1,
    STATE(413), 1,
      sym_comment,
  [19403] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    STATE(414), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [19420] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1260), 1,
      anon_sym_COMMA,
    ACTIONS(1262), 1,
      anon_sym_RBRACE,
    STATE(405), 1,
      aux_sym__tuples_repeat1,
    STATE(415), 1,
      sym_comment,
  [19439] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1264), 1,
      anon_sym_COMMA,
    ACTIONS(1266), 1,
      anon_sym_RBRACE,
    STATE(380), 1,
      aux_sym_sorts_repeat1,
    STATE(416), 1,
      sym_comment,
  [19458] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1228), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1268), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(385), 1,
      aux_sym__inner_triple_quotes,
    STATE(417), 1,
      sym_comment,
  [19477] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(769), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    STATE(400), 1,
      aux_sym_aggregate_repeat1,
    STATE(418), 1,
      sym_comment,
  [19496] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1270), 1,
      anon_sym_COMMA,
    ACTIONS(1272), 1,
      anon_sym_RBRACE,
    STATE(401), 1,
      aux_sym_group_repeat1,
    STATE(419), 1,
      sym_comment,
  [19515] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    STATE(420), 1,
      sym_comment,
    ACTIONS(1274), 2,
      aux_sym__inner_triple_quotes_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [19529] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(421), 1,
      sym_comment,
    ACTIONS(1276), 2,
      sym_keyword_csv,
      sym_keyword_json,
  [19543] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(422), 1,
      sym_comment,
    ACTIONS(1212), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [19557] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1032), 1,
      anon_sym_AT,
    STATE(179), 1,
      sym_date,
    STATE(423), 1,
      sym_comment,
  [19573] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(953), 1,
      anon_sym_DQUOTE,
    STATE(356), 1,
      sym__double_quote_string,
    STATE(424), 1,
      sym_comment,
  [19589] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(425), 1,
      sym_comment,
    ACTIONS(1207), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [19603] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1278), 1,
      aux_sym__time_token1,
    STATE(43), 1,
      sym__time,
    STATE(426), 1,
      sym_comment,
  [19619] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1228), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(398), 1,
      aux_sym__inner_triple_quotes,
    STATE(427), 1,
      sym_comment,
  [19635] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(428), 1,
      sym_comment,
    ACTIONS(817), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [19649] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1228), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(417), 1,
      aux_sym__inner_triple_quotes,
    STATE(429), 1,
      sym_comment,
  [19665] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(430), 1,
      sym_comment,
    ACTIONS(1280), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [19679] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(431), 1,
      sym_comment,
    ACTIONS(1226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [19693] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1228), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(403), 1,
      aux_sym__inner_triple_quotes,
    STATE(432), 1,
      sym_comment,
  [19709] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1282), 1,
      aux_sym__date_token1,
    STATE(175), 1,
      sym__date,
    STATE(433), 1,
      sym_comment,
  [19725] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    STATE(434), 1,
      sym_comment,
    ACTIONS(1192), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [19739] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1284), 1,
      sym_keyword_version,
    ACTIONS(1286), 1,
      sym_keyword_target,
    STATE(435), 1,
      sym_comment,
  [19755] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1196), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(247), 1,
      sym__triple_quote_string,
    STATE(436), 1,
      sym_comment,
  [19771] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1288), 1,
      sym_keyword_derive,
    STATE(437), 1,
      sym_comment,
    STATE(534), 1,
      sym_derives,
  [19787] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    STATE(438), 1,
      sym_comment,
  [19800] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1290), 1,
      anon_sym_DQUOTE,
    STATE(439), 1,
      sym_comment,
  [19813] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1262), 1,
      anon_sym_RBRACE,
    STATE(440), 1,
      sym_comment,
  [19826] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1292), 1,
      aux_sym_comment_token1,
    STATE(441), 1,
      sym_comment,
  [19839] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1294), 1,
      anon_sym_DQUOTE,
    STATE(442), 1,
      sym_comment,
  [19852] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1296), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      sym_comment,
  [19865] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1298), 1,
      anon_sym_SQUOTE,
    STATE(444), 1,
      sym_comment,
  [19878] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1300), 1,
      anon_sym_DQUOTE,
    STATE(445), 1,
      sym_comment,
  [19891] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(337), 1,
      sym__natural_number,
    STATE(446), 1,
      sym_comment,
  [19904] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1302), 1,
      aux_sym__date_token2,
    STATE(447), 1,
      sym_comment,
  [19917] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1304), 1,
      aux_sym__date_token2,
    STATE(448), 1,
      sym_comment,
  [19930] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1306), 1,
      anon_sym_DOT,
    STATE(449), 1,
      sym_comment,
  [19943] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1308), 1,
      anon_sym_LBRACE,
    STATE(450), 1,
      sym_comment,
  [19956] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1310), 1,
      anon_sym_COLON,
    STATE(451), 1,
      sym_comment,
  [19969] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1312), 1,
      anon_sym_DOT_DOT,
    STATE(452), 1,
      sym_comment,
  [19982] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1314), 1,
      anon_sym_LPAREN,
    STATE(453), 1,
      sym_comment,
  [19995] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1316), 1,
      anon_sym_DOT,
    STATE(454), 1,
      sym_comment,
  [20008] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1318), 1,
      aux_sym__double_quote_string_token1,
    STATE(455), 1,
      sym_comment,
  [20021] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1320), 1,
      aux_sym__double_quote_string_token1,
    STATE(456), 1,
      sym_comment,
  [20034] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1322), 1,
      aux_sym__single_quote_string_token1,
    STATE(457), 1,
      sym_comment,
  [20047] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1324), 1,
      aux_sym__double_quote_string_token1,
    STATE(458), 1,
      sym_comment,
  [20060] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1326), 1,
      sym__natural_number,
    STATE(459), 1,
      sym_comment,
  [20073] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1328), 1,
      anon_sym_LPAREN,
    STATE(460), 1,
      sym_comment,
  [20086] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1330), 1,
      anon_sym_LPAREN,
    STATE(461), 1,
      sym_comment,
  [20099] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1332), 1,
      anon_sym_DASH,
    STATE(462), 1,
      sym_comment,
  [20112] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1266), 1,
      anon_sym_RBRACE,
    STATE(463), 1,
      sym_comment,
  [20125] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(464), 1,
      sym_comment,
  [20138] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1334), 1,
      anon_sym_DASH,
    STATE(465), 1,
      sym_comment,
  [20151] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      sym_comment,
  [20164] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1338), 1,
      aux_sym__date_token2,
    STATE(467), 1,
      sym_comment,
  [20177] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1340), 1,
      aux_sym__date_token2,
    STATE(468), 1,
      sym_comment,
  [20190] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1342), 1,
      anon_sym_BQUOTE,
    STATE(469), 1,
      sym_comment,
  [20203] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1344), 1,
      anon_sym_LPAREN,
    STATE(470), 1,
      sym_comment,
  [20216] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(471), 1,
      sym_comment,
  [20229] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1346), 1,
      anon_sym_LPAREN,
    STATE(472), 1,
      sym_comment,
  [20242] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1348), 1,
      anon_sym_LBRACE,
    STATE(473), 1,
      sym_comment,
  [20255] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1350), 1,
      anon_sym_LBRACE,
    STATE(474), 1,
      sym_comment,
  [20268] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1352), 1,
      anon_sym_LPAREN,
    STATE(475), 1,
      sym_comment,
  [20281] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1354), 1,
      anon_sym_BQUOTE,
    STATE(476), 1,
      sym_comment,
  [20294] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1356), 1,
      sym__natural_number,
    STATE(477), 1,
      sym_comment,
  [20307] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
    STATE(478), 1,
      sym_comment,
  [20320] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1105), 1,
      sym__natural_number,
    STATE(479), 1,
      sym_comment,
  [20333] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1360), 1,
      anon_sym_DQUOTE,
    STATE(480), 1,
      sym_comment,
  [20346] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1362), 1,
      anon_sym_SQUOTE,
    STATE(481), 1,
      sym_comment,
  [20359] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1364), 1,
      anon_sym_COLON,
    STATE(482), 1,
      sym_comment,
  [20372] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1366), 1,
      aux_sym__date_token2,
    STATE(483), 1,
      sym_comment,
  [20385] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1368), 1,
      anon_sym_COLON,
    STATE(484), 1,
      sym_comment,
  [20398] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1370), 1,
      anon_sym_BQUOTE,
    STATE(485), 1,
      sym_comment,
  [20411] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1372), 1,
      sym__natural_number,
    STATE(486), 1,
      sym_comment,
  [20424] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1374), 1,
      anon_sym_LPAREN,
    STATE(487), 1,
      sym_comment,
  [20437] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1376), 1,
      sym__natural_number,
    STATE(488), 1,
      sym_comment,
  [20450] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1272), 1,
      anon_sym_RBRACE,
    STATE(489), 1,
      sym_comment,
  [20463] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1378), 1,
      anon_sym_SQUOTE,
    STATE(490), 1,
      sym_comment,
  [20476] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1380), 1,
      anon_sym_COLON,
    STATE(491), 1,
      sym_comment,
  [20489] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1382), 1,
      sym__identifier_dot,
    STATE(492), 1,
      sym_comment,
  [20502] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1384), 1,
      anon_sym_BQUOTE,
    STATE(493), 1,
      sym_comment,
  [20515] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1386), 1,
      sym__natural_number,
    STATE(494), 1,
      sym_comment,
  [20528] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      sym_comment,
  [20541] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1388), 1,
      sym__natural_number,
    STATE(496), 1,
      sym_comment,
  [20554] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1390), 1,
      anon_sym_DQUOTE,
    STATE(497), 1,
      sym_comment,
  [20567] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1392), 1,
      anon_sym_SQUOTE,
    STATE(498), 1,
      sym_comment,
  [20580] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1394), 1,
      anon_sym_BQUOTE,
    STATE(499), 1,
      sym_comment,
  [20593] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1396), 1,
      sym__natural_number,
    STATE(500), 1,
      sym_comment,
  [20606] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1398), 1,
      anon_sym_COLON,
    STATE(501), 1,
      sym_comment,
  [20619] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1400), 1,
      sym__natural_number,
    STATE(502), 1,
      sym_comment,
  [20632] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1402), 1,
      anon_sym_DQUOTE,
    STATE(503), 1,
      sym_comment,
  [20645] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1404), 1,
      anon_sym_SQUOTE,
    STATE(504), 1,
      sym_comment,
  [20658] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1406), 1,
      anon_sym_BQUOTE,
    STATE(505), 1,
      sym_comment,
  [20671] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(506), 1,
      sym_comment,
  [20684] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1408), 1,
      anon_sym_DQUOTE,
    STATE(507), 1,
      sym_comment,
  [20697] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1410), 1,
      anon_sym_BQUOTE,
    STATE(508), 1,
      sym_comment,
  [20710] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1412), 1,
      anon_sym_BQUOTE,
    STATE(509), 1,
      sym_comment,
  [20723] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1414), 1,
      anon_sym_BQUOTE,
    STATE(510), 1,
      sym_comment,
  [20736] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1416), 1,
      sym__identifier_dot,
    STATE(511), 1,
      sym_comment,
  [20749] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1418), 1,
      aux_sym__double_quote_string_token1,
    STATE(512), 1,
      sym_comment,
  [20762] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1420), 1,
      aux_sym__single_quote_string_token1,
    STATE(513), 1,
      sym_comment,
  [20775] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1422), 1,
      anon_sym_DASH,
    STATE(514), 1,
      sym_comment,
  [20788] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1424), 1,
      anon_sym_DASH,
    STATE(515), 1,
      sym_comment,
  [20801] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1426), 1,
      sym__identifier_dot,
    STATE(516), 1,
      sym_comment,
  [20814] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1428), 1,
      aux_sym__double_quote_string_token1,
    STATE(517), 1,
      sym_comment,
  [20827] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1430), 1,
      aux_sym__single_quote_string_token1,
    STATE(518), 1,
      sym_comment,
  [20840] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1432), 1,
      aux_sym__date_token2,
    STATE(519), 1,
      sym_comment,
  [20853] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1434), 1,
      sym__identifier_dot,
    STATE(520), 1,
      sym_comment,
  [20866] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1436), 1,
      aux_sym__double_quote_string_token1,
    STATE(521), 1,
      sym_comment,
  [20879] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1438), 1,
      aux_sym__single_quote_string_token1,
    STATE(522), 1,
      sym_comment,
  [20892] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1440), 1,
      sym__identifier_dot,
    STATE(523), 1,
      sym_comment,
  [20905] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1442), 1,
      aux_sym__double_quote_string_token1,
    STATE(524), 1,
      sym_comment,
  [20918] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1444), 1,
      aux_sym__single_quote_string_token1,
    STATE(525), 1,
      sym_comment,
  [20931] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1446), 1,
      sym__identifier_dot,
    STATE(526), 1,
      sym_comment,
  [20944] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1448), 1,
      aux_sym__double_quote_string_token1,
    STATE(527), 1,
      sym_comment,
  [20957] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1450), 1,
      sym__identifier_dot,
    STATE(528), 1,
      sym_comment,
  [20970] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1452), 1,
      sym__identifier_dot,
    STATE(529), 1,
      sym_comment,
  [20983] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1454), 1,
      sym__identifier_dot,
    STATE(530), 1,
      sym_comment,
  [20996] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1456), 1,
      anon_sym_COMMA,
    STATE(531), 1,
      sym_comment,
  [21009] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1458), 1,
      ts_builtin_sym_end,
    STATE(532), 1,
      sym_comment,
  [21022] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1460), 1,
      anon_sym_COMMA,
    STATE(533), 1,
      sym_comment,
  [21035] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1462), 1,
      anon_sym_RPAREN,
    STATE(534), 1,
      sym_comment,
  [21048] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1464), 1,
      aux_sym__date_token2,
    STATE(535), 1,
      sym_comment,
  [21061] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1466), 1,
      anon_sym_RPAREN,
    STATE(536), 1,
      sym_comment,
  [21074] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_pipe,
    ACTIONS(1468), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      sym_comment,
  [21087] = 1,
    ACTIONS(1470), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 131,
  [SMALL_STATE(4)] = 259,
  [SMALL_STATE(5)] = 387,
  [SMALL_STATE(6)] = 484,
  [SMALL_STATE(7)] = 609,
  [SMALL_STATE(8)] = 731,
  [SMALL_STATE(9)] = 853,
  [SMALL_STATE(10)] = 975,
  [SMALL_STATE(11)] = 1070,
  [SMALL_STATE(12)] = 1190,
  [SMALL_STATE(13)] = 1309,
  [SMALL_STATE(14)] = 1425,
  [SMALL_STATE(15)] = 1537,
  [SMALL_STATE(16)] = 1647,
  [SMALL_STATE(17)] = 1707,
  [SMALL_STATE(18)] = 1767,
  [SMALL_STATE(19)] = 1879,
  [SMALL_STATE(20)] = 1991,
  [SMALL_STATE(21)] = 2103,
  [SMALL_STATE(22)] = 2213,
  [SMALL_STATE(23)] = 2271,
  [SMALL_STATE(24)] = 2383,
  [SMALL_STATE(25)] = 2495,
  [SMALL_STATE(26)] = 2607,
  [SMALL_STATE(27)] = 2717,
  [SMALL_STATE(28)] = 2831,
  [SMALL_STATE(29)] = 2886,
  [SMALL_STATE(30)] = 2995,
  [SMALL_STATE(31)] = 3104,
  [SMALL_STATE(32)] = 3217,
  [SMALL_STATE(33)] = 3272,
  [SMALL_STATE(34)] = 3381,
  [SMALL_STATE(35)] = 3490,
  [SMALL_STATE(36)] = 3599,
  [SMALL_STATE(37)] = 3654,
  [SMALL_STATE(38)] = 3767,
  [SMALL_STATE(39)] = 3876,
  [SMALL_STATE(40)] = 3985,
  [SMALL_STATE(41)] = 4094,
  [SMALL_STATE(42)] = 4203,
  [SMALL_STATE(43)] = 4314,
  [SMALL_STATE(44)] = 4376,
  [SMALL_STATE(45)] = 4482,
  [SMALL_STATE(46)] = 4540,
  [SMALL_STATE(47)] = 4646,
  [SMALL_STATE(48)] = 4752,
  [SMALL_STATE(49)] = 4810,
  [SMALL_STATE(50)] = 4920,
  [SMALL_STATE(51)] = 5024,
  [SMALL_STATE(52)] = 5128,
  [SMALL_STATE(53)] = 5183,
  [SMALL_STATE(54)] = 5236,
  [SMALL_STATE(55)] = 5321,
  [SMALL_STATE(56)] = 5374,
  [SMALL_STATE(57)] = 5477,
  [SMALL_STATE(58)] = 5577,
  [SMALL_STATE(59)] = 5677,
  [SMALL_STATE(60)] = 5777,
  [SMALL_STATE(61)] = 5877,
  [SMALL_STATE(62)] = 5931,
  [SMALL_STATE(63)] = 5983,
  [SMALL_STATE(64)] = 6083,
  [SMALL_STATE(65)] = 6135,
  [SMALL_STATE(66)] = 6237,
  [SMALL_STATE(67)] = 6337,
  [SMALL_STATE(68)] = 6391,
  [SMALL_STATE(69)] = 6493,
  [SMALL_STATE(70)] = 6545,
  [SMALL_STATE(71)] = 6597,
  [SMALL_STATE(72)] = 6649,
  [SMALL_STATE(73)] = 6703,
  [SMALL_STATE(74)] = 6803,
  [SMALL_STATE(75)] = 6857,
  [SMALL_STATE(76)] = 6959,
  [SMALL_STATE(77)] = 7059,
  [SMALL_STATE(78)] = 7159,
  [SMALL_STATE(79)] = 7261,
  [SMALL_STATE(80)] = 7313,
  [SMALL_STATE(81)] = 7413,
  [SMALL_STATE(82)] = 7465,
  [SMALL_STATE(83)] = 7519,
  [SMALL_STATE(84)] = 7619,
  [SMALL_STATE(85)] = 7721,
  [SMALL_STATE(86)] = 7821,
  [SMALL_STATE(87)] = 7923,
  [SMALL_STATE(88)] = 8023,
  [SMALL_STATE(89)] = 8123,
  [SMALL_STATE(90)] = 8174,
  [SMALL_STATE(91)] = 8243,
  [SMALL_STATE(92)] = 8300,
  [SMALL_STATE(93)] = 8351,
  [SMALL_STATE(94)] = 8402,
  [SMALL_STATE(95)] = 8461,
  [SMALL_STATE(96)] = 8522,
  [SMALL_STATE(97)] = 8589,
  [SMALL_STATE(98)] = 8652,
  [SMALL_STATE(99)] = 8703,
  [SMALL_STATE(100)] = 8754,
  [SMALL_STATE(101)] = 8837,
  [SMALL_STATE(102)] = 8888,
  [SMALL_STATE(103)] = 8939,
  [SMALL_STATE(104)] = 8994,
  [SMALL_STATE(105)] = 9045,
  [SMALL_STATE(106)] = 9096,
  [SMALL_STATE(107)] = 9149,
  [SMALL_STATE(108)] = 9200,
  [SMALL_STATE(109)] = 9251,
  [SMALL_STATE(110)] = 9302,
  [SMALL_STATE(111)] = 9353,
  [SMALL_STATE(112)] = 9404,
  [SMALL_STATE(113)] = 9455,
  [SMALL_STATE(114)] = 9526,
  [SMALL_STATE(115)] = 9577,
  [SMALL_STATE(116)] = 9662,
  [SMALL_STATE(117)] = 9713,
  [SMALL_STATE(118)] = 9764,
  [SMALL_STATE(119)] = 9815,
  [SMALL_STATE(120)] = 9886,
  [SMALL_STATE(121)] = 9967,
  [SMALL_STATE(122)] = 10050,
  [SMALL_STATE(123)] = 10121,
  [SMALL_STATE(124)] = 10190,
  [SMALL_STATE(125)] = 10260,
  [SMALL_STATE(126)] = 10326,
  [SMALL_STATE(127)] = 10369,
  [SMALL_STATE(128)] = 10412,
  [SMALL_STATE(129)] = 10480,
  [SMALL_STATE(130)] = 10522,
  [SMALL_STATE(131)] = 10564,
  [SMALL_STATE(132)] = 10608,
  [SMALL_STATE(133)] = 10652,
  [SMALL_STATE(134)] = 10696,
  [SMALL_STATE(135)] = 10742,
  [SMALL_STATE(136)] = 10810,
  [SMALL_STATE(137)] = 10851,
  [SMALL_STATE(138)] = 10892,
  [SMALL_STATE(139)] = 10955,
  [SMALL_STATE(140)] = 10996,
  [SMALL_STATE(141)] = 11041,
  [SMALL_STATE(142)] = 11084,
  [SMALL_STATE(143)] = 11125,
  [SMALL_STATE(144)] = 11166,
  [SMALL_STATE(145)] = 11211,
  [SMALL_STATE(146)] = 11276,
  [SMALL_STATE(147)] = 11317,
  [SMALL_STATE(148)] = 11358,
  [SMALL_STATE(149)] = 11399,
  [SMALL_STATE(150)] = 11440,
  [SMALL_STATE(151)] = 11481,
  [SMALL_STATE(152)] = 11522,
  [SMALL_STATE(153)] = 11566,
  [SMALL_STATE(154)] = 11608,
  [SMALL_STATE(155)] = 11648,
  [SMALL_STATE(156)] = 11690,
  [SMALL_STATE(157)] = 11730,
  [SMALL_STATE(158)] = 11772,
  [SMALL_STATE(159)] = 11812,
  [SMALL_STATE(160)] = 11876,
  [SMALL_STATE(161)] = 11915,
  [SMALL_STATE(162)] = 11984,
  [SMALL_STATE(163)] = 12043,
  [SMALL_STATE(164)] = 12082,
  [SMALL_STATE(165)] = 12121,
  [SMALL_STATE(166)] = 12160,
  [SMALL_STATE(167)] = 12221,
  [SMALL_STATE(168)] = 12260,
  [SMALL_STATE(169)] = 12299,
  [SMALL_STATE(170)] = 12338,
  [SMALL_STATE(171)] = 12377,
  [SMALL_STATE(172)] = 12416,
  [SMALL_STATE(173)] = 12455,
  [SMALL_STATE(174)] = 12526,
  [SMALL_STATE(175)] = 12565,
  [SMALL_STATE(176)] = 12603,
  [SMALL_STATE(177)] = 12663,
  [SMALL_STATE(178)] = 12701,
  [SMALL_STATE(179)] = 12738,
  [SMALL_STATE(180)] = 12775,
  [SMALL_STATE(181)] = 12812,
  [SMALL_STATE(182)] = 12850,
  [SMALL_STATE(183)] = 12884,
  [SMALL_STATE(184)] = 12918,
  [SMALL_STATE(185)] = 12952,
  [SMALL_STATE(186)] = 12988,
  [SMALL_STATE(187)] = 13022,
  [SMALL_STATE(188)] = 13056,
  [SMALL_STATE(189)] = 13090,
  [SMALL_STATE(190)] = 13126,
  [SMALL_STATE(191)] = 13160,
  [SMALL_STATE(192)] = 13194,
  [SMALL_STATE(193)] = 13228,
  [SMALL_STATE(194)] = 13284,
  [SMALL_STATE(195)] = 13318,
  [SMALL_STATE(196)] = 13356,
  [SMALL_STATE(197)] = 13390,
  [SMALL_STATE(198)] = 13423,
  [SMALL_STATE(199)] = 13456,
  [SMALL_STATE(200)] = 13489,
  [SMALL_STATE(201)] = 13522,
  [SMALL_STATE(202)] = 13559,
  [SMALL_STATE(203)] = 13592,
  [SMALL_STATE(204)] = 13625,
  [SMALL_STATE(205)] = 13658,
  [SMALL_STATE(206)] = 13691,
  [SMALL_STATE(207)] = 13724,
  [SMALL_STATE(208)] = 13757,
  [SMALL_STATE(209)] = 13790,
  [SMALL_STATE(210)] = 13825,
  [SMALL_STATE(211)] = 13858,
  [SMALL_STATE(212)] = 13891,
  [SMALL_STATE(213)] = 13924,
  [SMALL_STATE(214)] = 13963,
  [SMALL_STATE(215)] = 13996,
  [SMALL_STATE(216)] = 14029,
  [SMALL_STATE(217)] = 14061,
  [SMALL_STATE(218)] = 14093,
  [SMALL_STATE(219)] = 14125,
  [SMALL_STATE(220)] = 14157,
  [SMALL_STATE(221)] = 14189,
  [SMALL_STATE(222)] = 14221,
  [SMALL_STATE(223)] = 14253,
  [SMALL_STATE(224)] = 14285,
  [SMALL_STATE(225)] = 14317,
  [SMALL_STATE(226)] = 14351,
  [SMALL_STATE(227)] = 14383,
  [SMALL_STATE(228)] = 14415,
  [SMALL_STATE(229)] = 14447,
  [SMALL_STATE(230)] = 14479,
  [SMALL_STATE(231)] = 14511,
  [SMALL_STATE(232)] = 14543,
  [SMALL_STATE(233)] = 14575,
  [SMALL_STATE(234)] = 14607,
  [SMALL_STATE(235)] = 14639,
  [SMALL_STATE(236)] = 14671,
  [SMALL_STATE(237)] = 14703,
  [SMALL_STATE(238)] = 14735,
  [SMALL_STATE(239)] = 14767,
  [SMALL_STATE(240)] = 14799,
  [SMALL_STATE(241)] = 14831,
  [SMALL_STATE(242)] = 14863,
  [SMALL_STATE(243)] = 14895,
  [SMALL_STATE(244)] = 14933,
  [SMALL_STATE(245)] = 14965,
  [SMALL_STATE(246)] = 14997,
  [SMALL_STATE(247)] = 15029,
  [SMALL_STATE(248)] = 15061,
  [SMALL_STATE(249)] = 15093,
  [SMALL_STATE(250)] = 15125,
  [SMALL_STATE(251)] = 15157,
  [SMALL_STATE(252)] = 15189,
  [SMALL_STATE(253)] = 15220,
  [SMALL_STATE(254)] = 15271,
  [SMALL_STATE(255)] = 15304,
  [SMALL_STATE(256)] = 15355,
  [SMALL_STATE(257)] = 15405,
  [SMALL_STATE(258)] = 15437,
  [SMALL_STATE(259)] = 15483,
  [SMALL_STATE(260)] = 15531,
  [SMALL_STATE(261)] = 15561,
  [SMALL_STATE(262)] = 15591,
  [SMALL_STATE(263)] = 15623,
  [SMALL_STATE(264)] = 15671,
  [SMALL_STATE(265)] = 15719,
  [SMALL_STATE(266)] = 15751,
  [SMALL_STATE(267)] = 15781,
  [SMALL_STATE(268)] = 15829,
  [SMALL_STATE(269)] = 15877,
  [SMALL_STATE(270)] = 15927,
  [SMALL_STATE(271)] = 15959,
  [SMALL_STATE(272)] = 16009,
  [SMALL_STATE(273)] = 16057,
  [SMALL_STATE(274)] = 16089,
  [SMALL_STATE(275)] = 16121,
  [SMALL_STATE(276)] = 16155,
  [SMALL_STATE(277)] = 16187,
  [SMALL_STATE(278)] = 16235,
  [SMALL_STATE(279)] = 16267,
  [SMALL_STATE(280)] = 16296,
  [SMALL_STATE(281)] = 16325,
  [SMALL_STATE(282)] = 16354,
  [SMALL_STATE(283)] = 16383,
  [SMALL_STATE(284)] = 16430,
  [SMALL_STATE(285)] = 16459,
  [SMALL_STATE(286)] = 16488,
  [SMALL_STATE(287)] = 16517,
  [SMALL_STATE(288)] = 16546,
  [SMALL_STATE(289)] = 16575,
  [SMALL_STATE(290)] = 16604,
  [SMALL_STATE(291)] = 16633,
  [SMALL_STATE(292)] = 16680,
  [SMALL_STATE(293)] = 16723,
  [SMALL_STATE(294)] = 16749,
  [SMALL_STATE(295)] = 16783,
  [SMALL_STATE(296)] = 16817,
  [SMALL_STATE(297)] = 16851,
  [SMALL_STATE(298)] = 16883,
  [SMALL_STATE(299)] = 16915,
  [SMALL_STATE(300)] = 16949,
  [SMALL_STATE(301)] = 16983,
  [SMALL_STATE(302)] = 17017,
  [SMALL_STATE(303)] = 17051,
  [SMALL_STATE(304)] = 17082,
  [SMALL_STATE(305)] = 17113,
  [SMALL_STATE(306)] = 17148,
  [SMALL_STATE(307)] = 17179,
  [SMALL_STATE(308)] = 17210,
  [SMALL_STATE(309)] = 17241,
  [SMALL_STATE(310)] = 17273,
  [SMALL_STATE(311)] = 17305,
  [SMALL_STATE(312)] = 17337,
  [SMALL_STATE(313)] = 17369,
  [SMALL_STATE(314)] = 17401,
  [SMALL_STATE(315)] = 17430,
  [SMALL_STATE(316)] = 17461,
  [SMALL_STATE(317)] = 17486,
  [SMALL_STATE(318)] = 17513,
  [SMALL_STATE(319)] = 17538,
  [SMALL_STATE(320)] = 17565,
  [SMALL_STATE(321)] = 17596,
  [SMALL_STATE(322)] = 17618,
  [SMALL_STATE(323)] = 17642,
  [SMALL_STATE(324)] = 17666,
  [SMALL_STATE(325)] = 17692,
  [SMALL_STATE(326)] = 17712,
  [SMALL_STATE(327)] = 17738,
  [SMALL_STATE(328)] = 17760,
  [SMALL_STATE(329)] = 17788,
  [SMALL_STATE(330)] = 17808,
  [SMALL_STATE(331)] = 17832,
  [SMALL_STATE(332)] = 17856,
  [SMALL_STATE(333)] = 17884,
  [SMALL_STATE(334)] = 17904,
  [SMALL_STATE(335)] = 17923,
  [SMALL_STATE(336)] = 17948,
  [SMALL_STATE(337)] = 17973,
  [SMALL_STATE(338)] = 17996,
  [SMALL_STATE(339)] = 18015,
  [SMALL_STATE(340)] = 18034,
  [SMALL_STATE(341)] = 18057,
  [SMALL_STATE(342)] = 18080,
  [SMALL_STATE(343)] = 18097,
  [SMALL_STATE(344)] = 18120,
  [SMALL_STATE(345)] = 18139,
  [SMALL_STATE(346)] = 18164,
  [SMALL_STATE(347)] = 18183,
  [SMALL_STATE(348)] = 18204,
  [SMALL_STATE(349)] = 18225,
  [SMALL_STATE(350)] = 18244,
  [SMALL_STATE(351)] = 18261,
  [SMALL_STATE(352)] = 18284,
  [SMALL_STATE(353)] = 18303,
  [SMALL_STATE(354)] = 18320,
  [SMALL_STATE(355)] = 18337,
  [SMALL_STATE(356)] = 18356,
  [SMALL_STATE(357)] = 18375,
  [SMALL_STATE(358)] = 18391,
  [SMALL_STATE(359)] = 18409,
  [SMALL_STATE(360)] = 18427,
  [SMALL_STATE(361)] = 18449,
  [SMALL_STATE(362)] = 18469,
  [SMALL_STATE(363)] = 18487,
  [SMALL_STATE(364)] = 18503,
  [SMALL_STATE(365)] = 18519,
  [SMALL_STATE(366)] = 18535,
  [SMALL_STATE(367)] = 18557,
  [SMALL_STATE(368)] = 18573,
  [SMALL_STATE(369)] = 18593,
  [SMALL_STATE(370)] = 18609,
  [SMALL_STATE(371)] = 18629,
  [SMALL_STATE(372)] = 18649,
  [SMALL_STATE(373)] = 18669,
  [SMALL_STATE(374)] = 18685,
  [SMALL_STATE(375)] = 18701,
  [SMALL_STATE(376)] = 18717,
  [SMALL_STATE(377)] = 18735,
  [SMALL_STATE(378)] = 18755,
  [SMALL_STATE(379)] = 18773,
  [SMALL_STATE(380)] = 18791,
  [SMALL_STATE(381)] = 18810,
  [SMALL_STATE(382)] = 18829,
  [SMALL_STATE(383)] = 18848,
  [SMALL_STATE(384)] = 18867,
  [SMALL_STATE(385)] = 18886,
  [SMALL_STATE(386)] = 18903,
  [SMALL_STATE(387)] = 18920,
  [SMALL_STATE(388)] = 18937,
  [SMALL_STATE(389)] = 18956,
  [SMALL_STATE(390)] = 18975,
  [SMALL_STATE(391)] = 18994,
  [SMALL_STATE(392)] = 19011,
  [SMALL_STATE(393)] = 19028,
  [SMALL_STATE(394)] = 19047,
  [SMALL_STATE(395)] = 19064,
  [SMALL_STATE(396)] = 19083,
  [SMALL_STATE(397)] = 19102,
  [SMALL_STATE(398)] = 19119,
  [SMALL_STATE(399)] = 19138,
  [SMALL_STATE(400)] = 19157,
  [SMALL_STATE(401)] = 19176,
  [SMALL_STATE(402)] = 19195,
  [SMALL_STATE(403)] = 19212,
  [SMALL_STATE(404)] = 19231,
  [SMALL_STATE(405)] = 19248,
  [SMALL_STATE(406)] = 19267,
  [SMALL_STATE(407)] = 19286,
  [SMALL_STATE(408)] = 19305,
  [SMALL_STATE(409)] = 19320,
  [SMALL_STATE(410)] = 19335,
  [SMALL_STATE(411)] = 19350,
  [SMALL_STATE(412)] = 19369,
  [SMALL_STATE(413)] = 19384,
  [SMALL_STATE(414)] = 19403,
  [SMALL_STATE(415)] = 19420,
  [SMALL_STATE(416)] = 19439,
  [SMALL_STATE(417)] = 19458,
  [SMALL_STATE(418)] = 19477,
  [SMALL_STATE(419)] = 19496,
  [SMALL_STATE(420)] = 19515,
  [SMALL_STATE(421)] = 19529,
  [SMALL_STATE(422)] = 19543,
  [SMALL_STATE(423)] = 19557,
  [SMALL_STATE(424)] = 19573,
  [SMALL_STATE(425)] = 19589,
  [SMALL_STATE(426)] = 19603,
  [SMALL_STATE(427)] = 19619,
  [SMALL_STATE(428)] = 19635,
  [SMALL_STATE(429)] = 19649,
  [SMALL_STATE(430)] = 19665,
  [SMALL_STATE(431)] = 19679,
  [SMALL_STATE(432)] = 19693,
  [SMALL_STATE(433)] = 19709,
  [SMALL_STATE(434)] = 19725,
  [SMALL_STATE(435)] = 19739,
  [SMALL_STATE(436)] = 19755,
  [SMALL_STATE(437)] = 19771,
  [SMALL_STATE(438)] = 19787,
  [SMALL_STATE(439)] = 19800,
  [SMALL_STATE(440)] = 19813,
  [SMALL_STATE(441)] = 19826,
  [SMALL_STATE(442)] = 19839,
  [SMALL_STATE(443)] = 19852,
  [SMALL_STATE(444)] = 19865,
  [SMALL_STATE(445)] = 19878,
  [SMALL_STATE(446)] = 19891,
  [SMALL_STATE(447)] = 19904,
  [SMALL_STATE(448)] = 19917,
  [SMALL_STATE(449)] = 19930,
  [SMALL_STATE(450)] = 19943,
  [SMALL_STATE(451)] = 19956,
  [SMALL_STATE(452)] = 19969,
  [SMALL_STATE(453)] = 19982,
  [SMALL_STATE(454)] = 19995,
  [SMALL_STATE(455)] = 20008,
  [SMALL_STATE(456)] = 20021,
  [SMALL_STATE(457)] = 20034,
  [SMALL_STATE(458)] = 20047,
  [SMALL_STATE(459)] = 20060,
  [SMALL_STATE(460)] = 20073,
  [SMALL_STATE(461)] = 20086,
  [SMALL_STATE(462)] = 20099,
  [SMALL_STATE(463)] = 20112,
  [SMALL_STATE(464)] = 20125,
  [SMALL_STATE(465)] = 20138,
  [SMALL_STATE(466)] = 20151,
  [SMALL_STATE(467)] = 20164,
  [SMALL_STATE(468)] = 20177,
  [SMALL_STATE(469)] = 20190,
  [SMALL_STATE(470)] = 20203,
  [SMALL_STATE(471)] = 20216,
  [SMALL_STATE(472)] = 20229,
  [SMALL_STATE(473)] = 20242,
  [SMALL_STATE(474)] = 20255,
  [SMALL_STATE(475)] = 20268,
  [SMALL_STATE(476)] = 20281,
  [SMALL_STATE(477)] = 20294,
  [SMALL_STATE(478)] = 20307,
  [SMALL_STATE(479)] = 20320,
  [SMALL_STATE(480)] = 20333,
  [SMALL_STATE(481)] = 20346,
  [SMALL_STATE(482)] = 20359,
  [SMALL_STATE(483)] = 20372,
  [SMALL_STATE(484)] = 20385,
  [SMALL_STATE(485)] = 20398,
  [SMALL_STATE(486)] = 20411,
  [SMALL_STATE(487)] = 20424,
  [SMALL_STATE(488)] = 20437,
  [SMALL_STATE(489)] = 20450,
  [SMALL_STATE(490)] = 20463,
  [SMALL_STATE(491)] = 20476,
  [SMALL_STATE(492)] = 20489,
  [SMALL_STATE(493)] = 20502,
  [SMALL_STATE(494)] = 20515,
  [SMALL_STATE(495)] = 20528,
  [SMALL_STATE(496)] = 20541,
  [SMALL_STATE(497)] = 20554,
  [SMALL_STATE(498)] = 20567,
  [SMALL_STATE(499)] = 20580,
  [SMALL_STATE(500)] = 20593,
  [SMALL_STATE(501)] = 20606,
  [SMALL_STATE(502)] = 20619,
  [SMALL_STATE(503)] = 20632,
  [SMALL_STATE(504)] = 20645,
  [SMALL_STATE(505)] = 20658,
  [SMALL_STATE(506)] = 20671,
  [SMALL_STATE(507)] = 20684,
  [SMALL_STATE(508)] = 20697,
  [SMALL_STATE(509)] = 20710,
  [SMALL_STATE(510)] = 20723,
  [SMALL_STATE(511)] = 20736,
  [SMALL_STATE(512)] = 20749,
  [SMALL_STATE(513)] = 20762,
  [SMALL_STATE(514)] = 20775,
  [SMALL_STATE(515)] = 20788,
  [SMALL_STATE(516)] = 20801,
  [SMALL_STATE(517)] = 20814,
  [SMALL_STATE(518)] = 20827,
  [SMALL_STATE(519)] = 20840,
  [SMALL_STATE(520)] = 20853,
  [SMALL_STATE(521)] = 20866,
  [SMALL_STATE(522)] = 20879,
  [SMALL_STATE(523)] = 20892,
  [SMALL_STATE(524)] = 20905,
  [SMALL_STATE(525)] = 20918,
  [SMALL_STATE(526)] = 20931,
  [SMALL_STATE(527)] = 20944,
  [SMALL_STATE(528)] = 20957,
  [SMALL_STATE(529)] = 20970,
  [SMALL_STATE(530)] = 20983,
  [SMALL_STATE(531)] = 20996,
  [SMALL_STATE(532)] = 21009,
  [SMALL_STATE(533)] = 21022,
  [SMALL_STATE(534)] = 21035,
  [SMALL_STATE(535)] = 21048,
  [SMALL_STATE(536)] = 21061,
  [SMALL_STATE(537)] = 21074,
  [SMALL_STATE(538)] = 21087,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 7),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 7),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(102),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(75),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(459),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(361),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(458),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(457),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(456),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(427),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(455),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(432),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(32),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(32),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(516),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(79),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(360),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(32),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat2, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_func, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 6),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(137),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(486),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(370),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(521),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(518),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(139),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(139),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(526),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(130),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string, 3),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 19),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 19),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(174),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(500),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(372),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(527),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(525),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(171),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(171),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(530),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(158),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 25),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 25),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 8),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 8),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(139),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(139),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 11),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 11),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 26),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 26),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(56),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(26),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(30),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(474),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(310),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(312),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(315),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(25),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(345),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(472),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(156),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transforms, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 33),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 33),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(171),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(171),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(279),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(494),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(371),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(524),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(522),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(286),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(286),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(528),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(260),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(21),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(20),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 23),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 23),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2, .production_id = 9),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 2, .production_id = 9),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 29),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 29),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 30),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 30),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 4),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 4),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 1),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 1),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 14),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 14),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 6),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 6),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 5),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 1),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_condition, 4, .production_id = 34),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_condition, 4, .production_id = 34),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 4),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_condition, 4, .production_id = 35),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_condition, 4, .production_id = 35),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 6),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2, .production_id = 1),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 2, .production_id = 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 5),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 3),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 3),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 7),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 2),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 2),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 6),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 6),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 2),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 4),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 4),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 4),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 9),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 2),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 7),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 7),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quote_string, 3),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quote_string, 3),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 9),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 9),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 6),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 3),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 3),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 5),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 5),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 4),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 6),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 6),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 5),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 2),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4, .production_id = 14),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 4, .production_id = 14),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 4),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 4),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 8),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 5),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 5),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 4),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 4),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_append, 2, .production_id = 1),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_append, 2, .production_id = 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 7),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 7),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_keywords, 1),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_keywords, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_func, 2),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(286),
  [964] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(286),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(474),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(310),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(312),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(323),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [1001] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(336),
  [1004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(384),
  [1007] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(388),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(329),
  [1041] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(329),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [1048] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(435),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(501),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(511),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(342),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 32),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 32),
  [1084] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 32), SHIFT_REPEAT(399),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_call, 3, .production_id = 24),
  [1095] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_call, 3, .production_id = 24),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_call, 4, .production_id = 27),
  [1101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_call, 4, .production_id = 27),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [1111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(367),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 31),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 31),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 7, .production_id = 11),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 7, .production_id = 11),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [1176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 1),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2), SHIFT_REPEAT(420),
  [1185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuples_repeat1, 2), SHIFT_REPEAT(47),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuples_repeat1, 2),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(46),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [1209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(340),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(49),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(314),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(84),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(6),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 1),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [1320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [1324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 2),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [1430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1458] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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

TS_PUBLIC const TSLanguage *tree_sitter_prql() {
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
