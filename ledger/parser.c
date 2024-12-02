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
#define STATE_COUNT 467
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 166
#define ALIAS_COUNT 0
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 16
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_comment = 3,
  aux_sym_block_comment_token1 = 4,
  anon_sym_end = 5,
  anon_sym_endcomment = 6,
  anon_sym_test = 7,
  anon_sym_endtest = 8,
  anon_sym_DASH = 9,
  anon_sym_DASH_DASH = 10,
  aux_sym_option_token1 = 11,
  anon_sym_EQ = 12,
  aux_sym_option_value_token1 = 13,
  anon_sym_account = 14,
  anon_sym_eval = 15,
  aux_sym_account_subdirective_token1 = 16,
  anon_sym_payee = 17,
  anon_sym_commodity = 18,
  anon_sym_nomarket = 19,
  anon_sym_tag = 20,
  aux_sym_tag_directive_token1 = 21,
  anon_sym_include = 22,
  anon_sym_alias = 23,
  aux_sym_word_directive_token1 = 24,
  anon_sym_def = 25,
  anon_sym_year = 26,
  aux_sym_word_directive_token2 = 27,
  anon_sym_bucket = 28,
  anon_sym_A = 29,
  anon_sym_Y = 30,
  anon_sym_N = 31,
  anon_sym_D = 32,
  anon_sym_C = 33,
  anon_sym_P = 34,
  anon_sym_default = 35,
  anon_sym_format = 36,
  anon_sym_note = 37,
  anon_sym_assert = 38,
  anon_sym_check = 39,
  anon_sym_i = 40,
  anon_sym_I = 41,
  anon_sym_o = 42,
  anon_sym_O = 43,
  anon_sym_TILDE = 44,
  aux_sym__interval_period_token1 = 45,
  aux_sym__interval_period_token2 = 46,
  aux_sym__interval_period_token3 = 47,
  aux_sym__interval_period_token4 = 48,
  aux_sym__interval_period_token5 = 49,
  aux_sym__interval_period_token6 = 50,
  aux_sym__interval_period_token7 = 51,
  aux_sym__interval_period_token8 = 52,
  aux_sym__interval_period_token9 = 53,
  aux_sym__interval_period_token10 = 54,
  aux_sym__interval_period_token11 = 55,
  aux_sym__interval_period_token12 = 56,
  aux_sym__interval_period_token13 = 57,
  aux_sym__interval_period_token14 = 58,
  aux_sym__interval_period_token15 = 59,
  aux_sym__interval_period_token16 = 60,
  aux_sym__interval_period_token17 = 61,
  aux_sym__interval_date_spec_token1 = 62,
  aux_sym__interval_date_spec_token2 = 63,
  aux_sym__interval_date_spec_token3 = 64,
  aux_sym__interval_date_spec_token4 = 65,
  aux_sym__interval_date_spec_token5 = 66,
  sym__month = 67,
  anon_sym_last = 68,
  anon_sym_this = 69,
  anon_sym_next = 70,
  anon_sym_day = 71,
  anon_sym_week = 72,
  anon_sym_month = 73,
  anon_sym_quarter = 74,
  sym__dsep = 75,
  sym__2d = 76,
  sym_time = 77,
  anon_sym_STAR = 78,
  anon_sym_BANG = 79,
  anon_sym_LPAREN = 80,
  aux_sym_code_token1 = 81,
  anon_sym_RPAREN = 82,
  sym_payee = 83,
  sym_query = 84,
  anon_sym_SEMI = 85,
  aux_sym_note_token1 = 86,
  anon_sym_LBRACK = 87,
  anon_sym_RBRACK = 88,
  aux_sym_note_token2 = 89,
  sym_account_name = 90,
  sym__quantity = 91,
  anon_sym_PLUS = 92,
  aux_sym_commodity_token1 = 93,
  aux_sym_commodity_token2 = 94,
  aux_sym_commodity_token3 = 95,
  anon_sym_LBRACE = 96,
  anon_sym_RBRACE = 97,
  anon_sym_LBRACE_LBRACE = 98,
  anon_sym_RBRACE_RBRACE = 99,
  anon_sym_AT = 100,
  anon_sym_AT_AT = 101,
  anon_sym_SPACE = 102,
  anon_sym_TAB = 103,
  anon_sym_ = 104,
  anon_sym_TAB2 = 105,
  anon_sym_TAB3 = 106,
  anon_sym_TAB_TAB = 107,
  sym_source_file = 108,
  sym_journal_item = 109,
  sym_block_comment = 110,
  sym_test = 111,
  sym_option = 112,
  sym_option_value = 113,
  sym_directive = 114,
  sym_account_directive = 115,
  sym_account_subdirective = 116,
  sym_commodity_directive = 117,
  sym_commodity_subdirective = 118,
  sym_tag_directive = 119,
  sym_word_directive = 120,
  sym_filename = 121,
  sym_char_directive = 122,
  sym_alias_subdirective = 123,
  sym_default_subdirective = 124,
  sym_format_subdirective = 125,
  sym_note_subdirective = 126,
  sym_assert_subdirective = 127,
  sym_check_subdirective = 128,
  sym_check_in = 129,
  sym_check_out = 130,
  sym_xact = 131,
  sym_plain_xact = 132,
  sym_periodic_xact = 133,
  sym_interval = 134,
  sym__interval_period = 135,
  sym__interval_date_spec = 136,
  sym_automated_xact = 137,
  sym__xact_date = 138,
  sym_date = 139,
  sym_effective_date = 140,
  sym_date_spec = 141,
  sym__relative_date_spec = 142,
  sym__4d = 143,
  sym__single_date = 144,
  sym_status = 145,
  sym_code = 146,
  sym_note = 147,
  sym_posting = 148,
  sym_account = 149,
  sym_amount = 150,
  sym_quantity = 151,
  sym_negative_quantity = 152,
  sym_commodity = 153,
  sym_lot_price = 154,
  sym_price = 155,
  sym_balance_assertion = 156,
  aux_sym_source_file_repeat1 = 157,
  aux_sym_block_comment_repeat1 = 158,
  aux_sym_account_directive_repeat1 = 159,
  aux_sym_commodity_directive_repeat1 = 160,
  aux_sym_tag_directive_repeat1 = 161,
  aux_sym_plain_xact_repeat1 = 162,
  aux_sym_note_repeat1 = 163,
  aux_sym_note_repeat2 = 164,
  aux_sym_whitespace_repeat1 = 165,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_comment] = "comment",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_end] = "end",
  [anon_sym_endcomment] = "end comment",
  [anon_sym_test] = "test",
  [anon_sym_endtest] = "end test",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_option_token1] = "option_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_option_value_token1] = "option_value_token1",
  [anon_sym_account] = "account",
  [anon_sym_eval] = "eval",
  [aux_sym_account_subdirective_token1] = "account_subdirective_token1",
  [anon_sym_payee] = "payee",
  [anon_sym_commodity] = "commodity",
  [anon_sym_nomarket] = "nomarket",
  [anon_sym_tag] = "tag",
  [aux_sym_tag_directive_token1] = "tag_directive_token1",
  [anon_sym_include] = "include",
  [anon_sym_alias] = "alias",
  [aux_sym_word_directive_token1] = "word_directive_token1",
  [anon_sym_def] = "def",
  [anon_sym_year] = "year",
  [aux_sym_word_directive_token2] = "word_directive_token2",
  [anon_sym_bucket] = "bucket",
  [anon_sym_A] = "A",
  [anon_sym_Y] = "Y",
  [anon_sym_N] = "N",
  [anon_sym_D] = "D",
  [anon_sym_C] = "C",
  [anon_sym_P] = "P",
  [anon_sym_default] = "default",
  [anon_sym_format] = "format",
  [anon_sym_note] = "note",
  [anon_sym_assert] = "assert",
  [anon_sym_check] = "check",
  [anon_sym_i] = "i",
  [anon_sym_I] = "I",
  [anon_sym_o] = "o",
  [anon_sym_O] = "O",
  [anon_sym_TILDE] = "~",
  [aux_sym__interval_period_token1] = "_interval_period_token1",
  [aux_sym__interval_period_token2] = "_interval_period_token2",
  [aux_sym__interval_period_token3] = "_interval_period_token3",
  [aux_sym__interval_period_token4] = "_interval_period_token4",
  [aux_sym__interval_period_token5] = "_interval_period_token5",
  [aux_sym__interval_period_token6] = "_interval_period_token6",
  [aux_sym__interval_period_token7] = "_interval_period_token7",
  [aux_sym__interval_period_token8] = "_interval_period_token8",
  [aux_sym__interval_period_token9] = "_interval_period_token9",
  [aux_sym__interval_period_token10] = "_interval_period_token10",
  [aux_sym__interval_period_token11] = "_interval_period_token11",
  [aux_sym__interval_period_token12] = "_interval_period_token12",
  [aux_sym__interval_period_token13] = "_interval_period_token13",
  [aux_sym__interval_period_token14] = "_interval_period_token14",
  [aux_sym__interval_period_token15] = "_interval_period_token15",
  [aux_sym__interval_period_token16] = "_interval_period_token16",
  [aux_sym__interval_period_token17] = "_interval_period_token17",
  [aux_sym__interval_date_spec_token1] = "_interval_date_spec_token1",
  [aux_sym__interval_date_spec_token2] = "_interval_date_spec_token2",
  [aux_sym__interval_date_spec_token3] = "_interval_date_spec_token3",
  [aux_sym__interval_date_spec_token4] = "_interval_date_spec_token4",
  [aux_sym__interval_date_spec_token5] = "_interval_date_spec_token5",
  [sym__month] = "_month",
  [anon_sym_last] = "last",
  [anon_sym_this] = "this",
  [anon_sym_next] = "next",
  [anon_sym_day] = "day",
  [anon_sym_week] = "week",
  [anon_sym_month] = "month",
  [anon_sym_quarter] = "quarter",
  [sym__dsep] = "_dsep",
  [sym__2d] = "_2d",
  [sym_time] = "time",
  [anon_sym_STAR] = "*",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_RPAREN] = ")",
  [sym_payee] = "payee",
  [sym_query] = "query",
  [anon_sym_SEMI] = ";",
  [aux_sym_note_token1] = "note_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_note_token2] = "note_token2",
  [sym_account_name] = "",
  [sym__quantity] = "_quantity",
  [anon_sym_PLUS] = "+",
  [aux_sym_commodity_token1] = "commodity_token1",
  [aux_sym_commodity_token2] = "commodity_token2",
  [aux_sym_commodity_token3] = "commodity_token3",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_SPACE] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_] = "  ",
  [anon_sym_TAB2] = " \t",
  [anon_sym_TAB3] = "\t ",
  [anon_sym_TAB_TAB] = "\t\t",
  [sym_source_file] = "source_file",
  [sym_journal_item] = "journal_item",
  [sym_block_comment] = "block_comment",
  [sym_test] = "test",
  [sym_option] = "option",
  [sym_option_value] = "option_value",
  [sym_directive] = "directive",
  [sym_account_directive] = "account_directive",
  [sym_account_subdirective] = "account_subdirective",
  [sym_commodity_directive] = "commodity_directive",
  [sym_commodity_subdirective] = "commodity_subdirective",
  [sym_tag_directive] = "tag_directive",
  [sym_word_directive] = "word_directive",
  [sym_filename] = "filename",
  [sym_char_directive] = "char_directive",
  [sym_alias_subdirective] = "alias_subdirective",
  [sym_default_subdirective] = "default_subdirective",
  [sym_format_subdirective] = "format_subdirective",
  [sym_note_subdirective] = "note_subdirective",
  [sym_assert_subdirective] = "assert_subdirective",
  [sym_check_subdirective] = "check_subdirective",
  [sym_check_in] = "check_in",
  [sym_check_out] = "check_out",
  [sym_xact] = "xact",
  [sym_plain_xact] = "plain_xact",
  [sym_periodic_xact] = "periodic_xact",
  [sym_interval] = "interval",
  [sym__interval_period] = "_interval_period",
  [sym__interval_date_spec] = "_interval_date_spec",
  [sym_automated_xact] = "automated_xact",
  [sym__xact_date] = "_xact_date",
  [sym_date] = "date",
  [sym_effective_date] = "effective_date",
  [sym_date_spec] = "date_spec",
  [sym__relative_date_spec] = "_relative_date_spec",
  [sym__4d] = "_4d",
  [sym__single_date] = "_single_date",
  [sym_status] = "status",
  [sym_code] = "code",
  [sym_note] = "note",
  [sym_posting] = "posting",
  [sym_account] = "account",
  [sym_amount] = "amount",
  [sym_quantity] = "quantity",
  [sym_negative_quantity] = "negative_quantity",
  [sym_commodity] = "commodity",
  [sym_lot_price] = "lot_price",
  [sym_price] = "price",
  [sym_balance_assertion] = "balance_assertion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_account_directive_repeat1] = "account_directive_repeat1",
  [aux_sym_commodity_directive_repeat1] = "commodity_directive_repeat1",
  [aux_sym_tag_directive_repeat1] = "tag_directive_repeat1",
  [aux_sym_plain_xact_repeat1] = "plain_xact_repeat1",
  [aux_sym_note_repeat1] = "note_repeat1",
  [aux_sym_note_repeat2] = "note_repeat2",
  [aux_sym_whitespace_repeat1] = "whitespace_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_comment] = anon_sym_comment,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_endcomment] = anon_sym_endcomment,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_endtest] = anon_sym_endtest,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_option_token1] = aux_sym_option_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_option_value_token1] = aux_sym_option_value_token1,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_eval] = anon_sym_eval,
  [aux_sym_account_subdirective_token1] = aux_sym_account_subdirective_token1,
  [anon_sym_payee] = anon_sym_payee,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_nomarket] = anon_sym_nomarket,
  [anon_sym_tag] = anon_sym_tag,
  [aux_sym_tag_directive_token1] = aux_sym_tag_directive_token1,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_alias] = anon_sym_alias,
  [aux_sym_word_directive_token1] = aux_sym_word_directive_token1,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_year] = anon_sym_year,
  [aux_sym_word_directive_token2] = aux_sym_word_directive_token2,
  [anon_sym_bucket] = anon_sym_bucket,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym__interval_period_token1] = aux_sym__interval_period_token1,
  [aux_sym__interval_period_token2] = aux_sym__interval_period_token2,
  [aux_sym__interval_period_token3] = aux_sym__interval_period_token3,
  [aux_sym__interval_period_token4] = aux_sym__interval_period_token4,
  [aux_sym__interval_period_token5] = aux_sym__interval_period_token5,
  [aux_sym__interval_period_token6] = aux_sym__interval_period_token6,
  [aux_sym__interval_period_token7] = aux_sym__interval_period_token7,
  [aux_sym__interval_period_token8] = aux_sym__interval_period_token8,
  [aux_sym__interval_period_token9] = aux_sym__interval_period_token9,
  [aux_sym__interval_period_token10] = aux_sym__interval_period_token10,
  [aux_sym__interval_period_token11] = aux_sym__interval_period_token11,
  [aux_sym__interval_period_token12] = aux_sym__interval_period_token12,
  [aux_sym__interval_period_token13] = aux_sym__interval_period_token13,
  [aux_sym__interval_period_token14] = aux_sym__interval_period_token14,
  [aux_sym__interval_period_token15] = aux_sym__interval_period_token15,
  [aux_sym__interval_period_token16] = aux_sym__interval_period_token16,
  [aux_sym__interval_period_token17] = aux_sym__interval_period_token17,
  [aux_sym__interval_date_spec_token1] = aux_sym__interval_date_spec_token1,
  [aux_sym__interval_date_spec_token2] = aux_sym__interval_date_spec_token2,
  [aux_sym__interval_date_spec_token3] = aux_sym__interval_date_spec_token3,
  [aux_sym__interval_date_spec_token4] = aux_sym__interval_date_spec_token4,
  [aux_sym__interval_date_spec_token5] = aux_sym__interval_date_spec_token5,
  [sym__month] = sym__month,
  [anon_sym_last] = anon_sym_last,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_day] = anon_sym_day,
  [anon_sym_week] = anon_sym_week,
  [anon_sym_month] = anon_sym_month,
  [anon_sym_quarter] = anon_sym_quarter,
  [sym__dsep] = sym__dsep,
  [sym__2d] = sym__2d,
  [sym_time] = sym_time,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_payee] = sym_payee,
  [sym_query] = sym_query,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_note_token1] = aux_sym_note_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_note_token2] = aux_sym_note_token2,
  [sym_account_name] = sym_account_name,
  [sym__quantity] = sym__quantity,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_commodity_token1] = aux_sym_commodity_token1,
  [aux_sym_commodity_token2] = aux_sym_commodity_token2,
  [aux_sym_commodity_token3] = aux_sym_commodity_token3,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB2] = anon_sym_TAB2,
  [anon_sym_TAB3] = anon_sym_TAB3,
  [anon_sym_TAB_TAB] = anon_sym_TAB_TAB,
  [sym_source_file] = sym_source_file,
  [sym_journal_item] = sym_journal_item,
  [sym_block_comment] = sym_block_comment,
  [sym_test] = sym_test,
  [sym_option] = sym_option,
  [sym_option_value] = sym_option_value,
  [sym_directive] = sym_directive,
  [sym_account_directive] = sym_account_directive,
  [sym_account_subdirective] = sym_account_subdirective,
  [sym_commodity_directive] = sym_commodity_directive,
  [sym_commodity_subdirective] = sym_commodity_subdirective,
  [sym_tag_directive] = sym_tag_directive,
  [sym_word_directive] = sym_word_directive,
  [sym_filename] = sym_filename,
  [sym_char_directive] = sym_char_directive,
  [sym_alias_subdirective] = sym_alias_subdirective,
  [sym_default_subdirective] = sym_default_subdirective,
  [sym_format_subdirective] = sym_format_subdirective,
  [sym_note_subdirective] = sym_note_subdirective,
  [sym_assert_subdirective] = sym_assert_subdirective,
  [sym_check_subdirective] = sym_check_subdirective,
  [sym_check_in] = sym_check_in,
  [sym_check_out] = sym_check_out,
  [sym_xact] = sym_xact,
  [sym_plain_xact] = sym_plain_xact,
  [sym_periodic_xact] = sym_periodic_xact,
  [sym_interval] = sym_interval,
  [sym__interval_period] = sym__interval_period,
  [sym__interval_date_spec] = sym__interval_date_spec,
  [sym_automated_xact] = sym_automated_xact,
  [sym__xact_date] = sym__xact_date,
  [sym_date] = sym_date,
  [sym_effective_date] = sym_effective_date,
  [sym_date_spec] = sym_date_spec,
  [sym__relative_date_spec] = sym__relative_date_spec,
  [sym__4d] = sym__4d,
  [sym__single_date] = sym__single_date,
  [sym_status] = sym_status,
  [sym_code] = sym_code,
  [sym_note] = sym_note,
  [sym_posting] = sym_posting,
  [sym_account] = sym_account,
  [sym_amount] = sym_amount,
  [sym_quantity] = sym_quantity,
  [sym_negative_quantity] = sym_negative_quantity,
  [sym_commodity] = sym_commodity,
  [sym_lot_price] = sym_lot_price,
  [sym_price] = sym_price,
  [sym_balance_assertion] = sym_balance_assertion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_account_directive_repeat1] = aux_sym_account_directive_repeat1,
  [aux_sym_commodity_directive_repeat1] = aux_sym_commodity_directive_repeat1,
  [aux_sym_tag_directive_repeat1] = aux_sym_tag_directive_repeat1,
  [aux_sym_plain_xact_repeat1] = aux_sym_plain_xact_repeat1,
  [aux_sym_note_repeat1] = aux_sym_note_repeat1,
  [aux_sym_note_repeat2] = aux_sym_note_repeat2,
  [aux_sym_whitespace_repeat1] = aux_sym_whitespace_repeat1,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcomment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endtest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_option_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_option_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_account] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_account_subdirective_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_payee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nomarket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bucket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__interval_period_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_date_spec_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_date_spec_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_date_spec_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_date_spec_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_date_spec_token5] = {
    .visible = false,
    .named = false,
  },
  [sym__month] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_last] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_day] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_week] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_month] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quarter] = {
    .visible = true,
    .named = false,
  },
  [sym__dsep] = {
    .visible = false,
    .named = true,
  },
  [sym__2d] = {
    .visible = false,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_payee] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_token1] = {
    .visible = false,
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
  [aux_sym_note_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_account_name] = {
    .visible = true,
    .named = false,
  },
  [sym__quantity] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_commodity_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token3] = {
    .visible = false,
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
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB_TAB] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_journal_item] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_option_value] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_account_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_account_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_word_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_char_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_default_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_format_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_note_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_check_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_check_in] = {
    .visible = true,
    .named = true,
  },
  [sym_check_out] = {
    .visible = true,
    .named = true,
  },
  [sym_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_periodic_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_interval] = {
    .visible = true,
    .named = true,
  },
  [sym__interval_period] = {
    .visible = false,
    .named = true,
  },
  [sym__interval_date_spec] = {
    .visible = false,
    .named = true,
  },
  [sym_automated_xact] = {
    .visible = true,
    .named = true,
  },
  [sym__xact_date] = {
    .visible = false,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_effective_date] = {
    .visible = true,
    .named = true,
  },
  [sym_date_spec] = {
    .visible = true,
    .named = true,
  },
  [sym__relative_date_spec] = {
    .visible = false,
    .named = true,
  },
  [sym__4d] = {
    .visible = false,
    .named = true,
  },
  [sym__single_date] = {
    .visible = false,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_lot_price] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_balance_assertion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plain_xact_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_whitespace_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_account_name,
  },
  [2] = {
    [0] = sym_date_spec,
  },
  [3] = {
    [0] = sym_account_name,
    [2] = sym_account_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__relative_date_spec, 2,
    sym__relative_date_spec,
    sym_date_spec,
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
  [16] = 10,
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
  [31] = 29,
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
  [63] = 28,
  [64] = 30,
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
  [96] = 10,
  [97] = 10,
  [98] = 58,
  [99] = 12,
  [100] = 11,
  [101] = 10,
  [102] = 28,
  [103] = 103,
  [104] = 29,
  [105] = 30,
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
  [131] = 131,
  [132] = 132,
  [133] = 61,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 62,
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
  [149] = 10,
  [150] = 10,
  [151] = 10,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 12,
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
  [173] = 167,
  [174] = 174,
  [175] = 175,
  [176] = 158,
  [177] = 177,
  [178] = 153,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 11,
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
  [193] = 193,
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
  [209] = 10,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 214,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 217,
  [223] = 223,
  [224] = 10,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 198,
  [234] = 195,
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
  [260] = 221,
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
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
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
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 10,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 274,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
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
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 304,
  [335] = 335,
  [336] = 336,
  [337] = 10,
  [338] = 10,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 10,
  [344] = 10,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 326,
  [351] = 327,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 330,
  [356] = 331,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 332,
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
  [378] = 329,
  [379] = 319,
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
  [392] = 388,
  [393] = 391,
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
  [404] = 404,
  [405] = 405,
  [406] = 406,
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
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 402,
  [455] = 417,
  [456] = 428,
  [457] = 457,
  [458] = 438,
  [459] = 447,
  [460] = 441,
  [461] = 417,
  [462] = 428,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
};

static TSCharacterRange aux_sym_tag_directive_token1_character_set_1[] = {
  {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1},
  {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f},
  {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556},
  {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5},
  {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1},
  {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858},
  {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961},
  {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd},
  {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28},
  {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d},
  {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1},
  {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d},
  {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a},
  {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10},
  {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c},
  {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2},
  {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f},
  {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46},
  {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd},
  {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a},
  {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e},
  {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258},
  {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5},
  {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c},
  {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c},
  {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa},
  {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54},
  {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f},
  {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa},
  {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b},
  {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3},
  {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102},
  {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d},
  {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3},
  {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae},
  {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006},
  {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e},
  {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c},
  {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca},
  {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873},
  {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2},
  {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76},
  {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd},
  {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a},
  {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9},
  {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41},
  {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc},
  {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b},
  {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0},
  {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d},
  {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595},
  {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785},
  {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855},
  {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static TSCharacterRange aux_sym_tag_directive_token1_character_set_2[] = {
  {'\n', '\n'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6},
  {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d},
  {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f},
  {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3},
  {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5},
  {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828},
  {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950},
  {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9},
  {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10},
  {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74},
  {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0},
  {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39},
  {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95},
  {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80},
  {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1},
  {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61},
  {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33},
  {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3},
  {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256},
  {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0},
  {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd},
  {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751},
  {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8},
  {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16},
  {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23},
  {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59},
  {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc},
  {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c},
  {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128},
  {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee},
  {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6},
  {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f},
  {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f},
  {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd},
  {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788},
  {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822},
  {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c},
  {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b},
  {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2},
  {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e},
  {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d},
  {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e},
  {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74},
  {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc},
  {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c},
  {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf},
  {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592},
  {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767},
  {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c},
  {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static TSCharacterRange aux_sym_commodity_token2_character_set_1[] = {
  {'$', '$'}, {0xa2, 0xa5}, {0x58f, 0x58f}, {0x60b, 0x60b}, {0x7fe, 0x7ff}, {0x9f2, 0x9f3}, {0x9fb, 0x9fb}, {0xaf1, 0xaf1},
  {0xbf9, 0xbf9}, {0xe3f, 0xe3f}, {0x17db, 0x17db}, {0x20a0, 0x20c0}, {0xa838, 0xa838}, {0xfdfc, 0xfdfc}, {0xfe69, 0xfe69}, {0xff04, 0xff04},
  {0xffe0, 0xffe1}, {0xffe5, 0xffe6},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(270);
      ADVANCE_MAP(
        '\t', 780,
        '\n', 271,
        ' ', 774,
        '!', 559,
        '"', 58,
        '(', 561,
        ')', 564,
        '*', 557,
        '+', 577,
        '-', 356,
        ';', 567,
        '=', 361,
        '@', 772,
        'A', 408,
        'B', 680,
        'C', 424,
        'D', 420,
        'E', 714,
        'F', 705,
        'I', 448,
        'M', 702,
        'N', 416,
        'O', 456,
        'P', 428,
        'Q', 713,
        'T', 700,
        'W', 674,
        'Y', 412,
        '[', 569,
        ']', 571,
        'a', 604,
        'b', 661,
        'c', 623,
        'd', 579,
        'e', 596,
        'f', 639,
        'i', 443,
        'l', 600,
        'm', 589,
        'n', 611,
        'o', 452,
        'p', 597,
        'q', 595,
        't', 598,
        'w', 583,
        'y', 584,
        '{', 767,
        '}', 769,
        '~', 459,
        'S', 682,
        's', 682,
        'U', 696,
        'u', 696,
        '.', 549,
        '/', 549,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(765);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 780,
        '\n', 271,
        ' ', 774,
        '"', 58,
        '+', 577,
        '-', 355,
        ';', 567,
        '=', 361,
        '@', 772,
        '{', 767,
        '}', 769,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(765);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(764);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\t', 780,
        '\n', 271,
        ' ', 774,
        '"', 58,
        ';', 567,
        '=', 361,
        '@', 772,
        '{', 767,
        '}', 769,
      );
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(765);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(764);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == ';') ADVANCE(567);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == ']') ADVANCE(571);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '!') ADVANCE(559);
      if (lookahead == '(') ADVANCE(561);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';') ADVANCE(565);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\t', 780,
        ' ', 774,
        '+', 577,
        '-', 355,
        'D', 161,
        'E', 245,
        'F', 221,
        'T', 213,
        'a', 107,
        'c', 99,
        'd', 88,
        'e', 61,
        'f', 123,
        'l', 70,
        'n', 85,
        'p', 65,
        't', 98,
        '}', 154,
        'B', 188,
        'b', 188,
        'I', 206,
        'i', 206,
        'M', 216,
        'm', 216,
        'Q', 244,
        'q', 244,
        'S', 190,
        's', 190,
        'U', 208,
        'u', 208,
        'W', 178,
        'w', 178,
        'Y', 176,
        'y', 176,
        '#', 54,
        '%', 54,
        '*', 54,
        ';', 54,
        '|', 54,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\t', 780,
        ' ', 774,
        '+', 577,
        '-', 355,
        'T', 50,
        'a', 34,
        'c', 28,
        'l', 22,
        'n', 24,
        't', 27,
        'F', 51,
        'f', 51,
        'I', 48,
        'i', 48,
        'S', 43,
        's', 43,
        'U', 46,
        'u', 46,
        '#', 54,
        '%', 54,
        '*', 54,
        ';', 54,
        '|', 54,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(53);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '[') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(568);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == 'd') ADVANCE(502);
      if (lookahead == 'm') ADVANCE(515);
      if (lookahead == 'q') ADVANCE(525);
      if (lookahead == 'w') ADVANCE(509);
      if (lookahead == 'y') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(528);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(528);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(782);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '!') ADVANCE(560);
      if (lookahead == '(') ADVANCE(562);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == ';') ADVANCE(567);
      if (lookahead == '[') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(575);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(782);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '(') ADVANCE(562);
      if (lookahead == '[') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(575);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(14);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(790);
      if (lookahead == ' ') ADVANCE(789);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(788);
      if (lookahead == ' ') ADVANCE(787);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(781);
      if (lookahead == ' ') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == '\t') ADVANCE(786);
      if (lookahead == ' ') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(392);
      END_STATE();
    case 18:
      if (lookahead == '\t') ADVANCE(784);
      if (lookahead == ' ') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(363);
      END_STATE();
    case 19:
      if (lookahead == '\t') ADVANCE(785);
      if (lookahead == ' ') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '[') ADVANCE(569);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(32);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(30);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(39);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(23);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(31);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(496);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'h') ADVANCE(25);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(33);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'k') ADVANCE(442);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(38);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(36);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(535);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(35);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(26);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(531);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(539);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(439);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'x') ADVANCE(37);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(41);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(493);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(490);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(496);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(370);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(260);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(261);
      END_STATE();
    case 61:
      if (lookahead == 'V') ADVANCE(177);
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(393);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(379);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 104:
      if (lookahead == 'k') ADVANCE(440);
      END_STATE();
    case 105:
      if (lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 106:
      if (lookahead == 'k') ADVANCE(93);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(533);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 151:
      if (lookahead == 'x') ADVANCE(143);
      END_STATE();
    case 152:
      if (lookahead == 'y') ADVANCE(373);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 154:
      if (lookahead == '}') ADVANCE(771);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 165:
      ADVANCE_MAP(
        'D', 155,
        'd', 155,
        'M', 212,
        'm', 212,
        'Q', 242,
        'q', 242,
        'W', 171,
        'w', 171,
        'Y', 170,
        'y', 170,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 166:
      ADVANCE_MAP(
        'D', 157,
        'd', 157,
        'M', 215,
        'm', 215,
        'Q', 243,
        'q', 243,
        'W', 174,
        'w', 174,
        'Y', 173,
        'y', 173,
      );
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 183:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(463);
      END_STATE();
    case 184:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(232);
      END_STATE();
    case 185:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(199);
      END_STATE();
    case 186:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 191:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(462);
      END_STATE();
    case 192:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(230);
      END_STATE();
    case 193:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(197);
      END_STATE();
    case 194:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(200);
      END_STATE();
    case 195:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(491);
      END_STATE();
    case 196:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 197:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 198:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 203:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(488);
      END_STATE();
    case 204:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(217);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(182);
      END_STATE();
    case 205:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 206:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 207:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 208:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 209:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 210:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 212:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 213:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 214:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 215:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 216:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 217:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 227:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 228:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 229:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(466);
      END_STATE();
    case 230:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(467);
      END_STATE();
    case 231:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      END_STATE();
    case 232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(468);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(469);
      END_STATE();
    case 234:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 235:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 237:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 238:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 242:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 243:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 244:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 245:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(177);
      END_STATE();
    case 246:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(461);
      END_STATE();
    case 247:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(229);
      END_STATE();
    case 248:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(471);
      END_STATE();
    case 249:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 250:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(473);
      END_STATE();
    case 251:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(483);
      END_STATE();
    case 252:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(477);
      END_STATE();
    case 253:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(475);
      END_STATE();
    case 254:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(479);
      END_STATE();
    case 255:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(481);
      END_STATE();
    case 256:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 263:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(575);
      END_STATE();
    case 264:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(574);
      END_STATE();
    case 265:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(575);
      END_STATE();
    case 266:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(360);
      END_STATE();
    case 267:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(363);
      END_STATE();
    case 268:
      if (eof) ADVANCE(270);
      ADVANCE_MAP(
        '\t', 780,
        '\n', 271,
        ' ', 774,
        '"', 58,
        '-', 356,
        '=', 361,
        'A', 409,
        'C', 425,
        'D', 421,
        'I', 449,
        'N', 417,
        'O', 457,
        'P', 429,
        'Y', 413,
        'a', 727,
        'b', 761,
        'c', 750,
        'd', 734,
        'e', 747,
        'i', 445,
        'o', 453,
        't', 724,
        'y', 735,
        '~', 459,
        '#', 54,
        '%', 54,
        '*', 54,
        ';', 54,
        '|', 54,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(765);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(764);
      END_STATE();
    case 269:
      if (eof) ADVANCE(270);
      ADVANCE_MAP(
        '\t', 780,
        '\n', 271,
        ' ', 774,
        '-', 356,
        '=', 361,
        'A', 407,
        'C', 423,
        'D', 419,
        'I', 447,
        'N', 415,
        'O', 455,
        'P', 427,
        'T', 213,
        'Y', 411,
        'a', 72,
        'b', 147,
        'c', 100,
        'd', 82,
        'e', 117,
        'i', 444,
        'o', 451,
        't', 62,
        'y', 83,
        '}', 768,
        '~', 459,
        'U', 208,
        'u', 208,
        '#', 54,
        '%', 54,
        '*', 54,
        ';', 54,
        '|', 54,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_comment);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(783);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(776);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(783);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(776);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(783);
      if (lookahead == ' ') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'f') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'g') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'k') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'y') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (eof) ADVANCE(270);
      ADVANCE_MAP(
        '\n', 271,
        '-', 357,
        '=', 362,
        'A', 410,
        'C', 426,
        'D', 422,
        'I', 450,
        'N', 418,
        'O', 458,
        'P', 430,
        'Y', 414,
        'a', 284,
        'b', 333,
        'c', 317,
        'd', 294,
        'e', 311,
        'i', 446,
        'o', 454,
        't', 281,
        'y', 295,
        '~', 460,
        '#', 280,
        '%', 280,
        '*', 280,
        ';', 280,
        '|', 280,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == ' ') ADVANCE(71);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_end);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_test);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_endtest);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_endtest);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_option_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_option_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_account);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_eval);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_account_subdirective_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_payee);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_tag);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_tag_directive_token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_include);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_alias);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(663);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_def);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(718);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_year);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_A);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_Y);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_N);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_D);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_C);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_P);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_format);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_note);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N') ADVANCE(499);
      if (lookahead == 'n') ADVANCE(498);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(729);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_I);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_o);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_O);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__interval_period_token1);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__interval_period_token2);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__interval_period_token3);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__interval_period_token4);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__interval_period_token5);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__interval_period_token6);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__interval_period_token7);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__interval_period_token8);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__interval_period_token9);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__interval_period_token10);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__interval_period_token11);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__interval_period_token11);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__interval_period_token12);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__interval_period_token12);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__interval_period_token13);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__interval_period_token13);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__interval_period_token14);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__interval_period_token14);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__interval_period_token15);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__interval_period_token15);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__interval_period_token16);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__interval_period_token16);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__interval_period_token17);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__interval_period_token17);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token1);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token2);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token2);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token2);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token3);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token3);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token3);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token4);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token4);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token4);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token5);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token5);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(631);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token5);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token5);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'a') ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'h') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'h') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'k') ADVANCE(544);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'o') ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'r') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'r') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'r') ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 't') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 't') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 't') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'u') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'x') ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'y') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__month);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_last);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_last);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_last);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_next);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_next);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(53);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_next);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(717);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(719);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_quarter);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(722);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_quarter);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__2d);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__2d);
      if (lookahead == ':') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(554);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_query);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_note_token1);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_note_token2);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(573);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__quantity);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == ' ') ADVANCE(165);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'a') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(621);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'A') ADVANCE(706);
      if (lookahead == 'a') ADVANCE(590);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'A') ADVANCE(707);
      if (lookahead == 'a') ADVANCE(591);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E') ADVANCE(684);
      if (lookahead == 'e') ADVANCE(587);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E') ADVANCE(671);
      if (lookahead == 'e') ADVANCE(582);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E') ADVANCE(669);
      if (lookahead == 'e') ADVANCE(581);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(592);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'H') ADVANCE(690);
      if (lookahead == 'h') ADVANCE(545);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'K') ADVANCE(688);
      if (lookahead == 'k') ADVANCE(543);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N') ADVANCE(709);
      if (lookahead == 'n') ADVANCE(593);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O') ADVANCE(698);
      if (lookahead == 'o') ADVANCE(588);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(594);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R') ADVANCE(689);
      if (lookahead == 'r') ADVANCE(398);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R') ADVANCE(693);
      if (lookahead == 'r') ADVANCE(547);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T') ADVANCE(678);
      if (lookahead == 't') ADVANCE(586);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T') ADVANCE(677);
      if (lookahead == 't') ADVANCE(585);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'U') ADVANCE(668);
      if (lookahead == 'u') ADVANCE(580);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'V') ADVANCE(673);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead == 'v') ADVANCE(599);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(667);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == 'e') ADVANCE(648);
      if (lookahead == 'h') ADVANCE(624);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(644);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(643);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(646);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(654);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 's') ADVANCE(647);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(640);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(628);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(627);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(342);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(625);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(614);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead == 'o') ADVANCE(635);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(436);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(372);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(385);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(642);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(607);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(653);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(613);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(658);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(638);
      if (lookahead == 'o') ADVANCE(609);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(394);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(380);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'h') ADVANCE(616);
      if (lookahead == 'o') ADVANCE(634);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(645);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(659);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(602);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'k') ADVANCE(441);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'k') ADVANCE(617);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'k') ADVANCE(619);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(369);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(662);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(657);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(620);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(633);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(601);
      if (lookahead == 't') ADVANCE(612);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(603);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(655);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(656);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(641);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(701);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(660);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(636);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(652);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(629);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(649);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(534);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(389);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(615);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(651);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(530);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(538);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(350);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(438);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(404);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(434);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(365);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(274);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(432);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(378);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(666);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(637);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(606);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(610);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(632);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'x') ADVANCE(650);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(541);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(374);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(618);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(706);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(707);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(672);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(690);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(692);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(697);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(687);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(688);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(691);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(715);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(492);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(717);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(718);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(719);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(720);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(721);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(722);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(489);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(703);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(676);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(710);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(670);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(709);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(712);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(694);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(698);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(699);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(716);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(701);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(689);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(693);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(678);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(683);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(677);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(679);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(668);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(673);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(472);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(578);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(474);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(484);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(478);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(476);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(480);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(482);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(723);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(753);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(752);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(754);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(730);
      if (lookahead == 'l') ADVANCE(741);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(743);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(744);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(751);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(345);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(742);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(736);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(739);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(725);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(386);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(756);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == 'o') ADVANCE(732);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(395);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'g') ADVANCE(381);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(726);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(759);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(737);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(762);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(738);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(745);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(731);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(757);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(758);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(746);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(760);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(399);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(755);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(390);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(351);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(405);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(366);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(275);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(763);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(748);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(728);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(733);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(375);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(764);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(770);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(771);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(773);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(370);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(363);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(392);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(370);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(363);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(392);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_TAB3);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_TAB_TAB);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 269},
  [2] = {.lex_state = 269},
  [3] = {.lex_state = 269},
  [4] = {.lex_state = 269},
  [5] = {.lex_state = 269},
  [6] = {.lex_state = 269},
  [7] = {.lex_state = 269},
  [8] = {.lex_state = 269},
  [9] = {.lex_state = 269},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 268},
  [12] = {.lex_state = 268},
  [13] = {.lex_state = 269},
  [14] = {.lex_state = 269},
  [15] = {.lex_state = 269},
  [16] = {.lex_state = 268},
  [17] = {.lex_state = 269},
  [18] = {.lex_state = 269},
  [19] = {.lex_state = 269},
  [20] = {.lex_state = 269},
  [21] = {.lex_state = 269},
  [22] = {.lex_state = 269},
  [23] = {.lex_state = 269},
  [24] = {.lex_state = 269},
  [25] = {.lex_state = 269},
  [26] = {.lex_state = 269},
  [27] = {.lex_state = 269},
  [28] = {.lex_state = 268},
  [29] = {.lex_state = 268},
  [30] = {.lex_state = 268},
  [31] = {.lex_state = 269},
  [32] = {.lex_state = 269},
  [33] = {.lex_state = 269},
  [34] = {.lex_state = 269},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 269},
  [37] = {.lex_state = 269},
  [38] = {.lex_state = 269},
  [39] = {.lex_state = 269},
  [40] = {.lex_state = 269},
  [41] = {.lex_state = 269},
  [42] = {.lex_state = 269},
  [43] = {.lex_state = 269},
  [44] = {.lex_state = 269},
  [45] = {.lex_state = 269},
  [46] = {.lex_state = 269},
  [47] = {.lex_state = 269},
  [48] = {.lex_state = 269},
  [49] = {.lex_state = 269},
  [50] = {.lex_state = 269},
  [51] = {.lex_state = 269},
  [52] = {.lex_state = 269},
  [53] = {.lex_state = 269},
  [54] = {.lex_state = 269},
  [55] = {.lex_state = 269},
  [56] = {.lex_state = 269},
  [57] = {.lex_state = 269},
  [58] = {.lex_state = 269},
  [59] = {.lex_state = 269},
  [60] = {.lex_state = 269},
  [61] = {.lex_state = 269},
  [62] = {.lex_state = 269},
  [63] = {.lex_state = 269},
  [64] = {.lex_state = 269},
  [65] = {.lex_state = 269},
  [66] = {.lex_state = 340},
  [67] = {.lex_state = 340},
  [68] = {.lex_state = 340},
  [69] = {.lex_state = 340},
  [70] = {.lex_state = 340},
  [71] = {.lex_state = 340},
  [72] = {.lex_state = 340},
  [73] = {.lex_state = 340},
  [74] = {.lex_state = 269},
  [75] = {.lex_state = 269},
  [76] = {.lex_state = 269},
  [77] = {.lex_state = 269},
  [78] = {.lex_state = 269},
  [79] = {.lex_state = 269},
  [80] = {.lex_state = 269},
  [81] = {.lex_state = 269},
  [82] = {.lex_state = 269},
  [83] = {.lex_state = 269},
  [84] = {.lex_state = 269},
  [85] = {.lex_state = 269},
  [86] = {.lex_state = 269},
  [87] = {.lex_state = 269},
  [88] = {.lex_state = 269},
  [89] = {.lex_state = 269},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 277},
  [154] = {.lex_state = 277},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 278},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 277},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 269},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 278},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 278},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 277},
  [172] = {.lex_state = 269},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 269},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 269},
  [178] = {.lex_state = 278},
  [179] = {.lex_state = 278},
  [180] = {.lex_state = 277},
  [181] = {.lex_state = 269},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 12},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 12},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 12},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 277},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 278},
  [217] = {.lex_state = 278},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 277},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 12},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 269},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 20},
  [234] = {.lex_state = 20},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 13},
  [241] = {.lex_state = 269},
  [242] = {.lex_state = 13},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 18},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 13},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 13},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 20},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 18},
  [267] = {.lex_state = 13},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 13},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 13},
  [274] = {.lex_state = 12},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 13},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 13},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 269},
  [282] = {.lex_state = 8},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 8},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 269},
  [288] = {.lex_state = 269},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 19},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 16},
  [294] = {.lex_state = 4},
  [295] = {.lex_state = 16},
  [296] = {.lex_state = 18},
  [297] = {.lex_state = 16},
  [298] = {.lex_state = 269},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 279},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 279},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 3},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 269},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 8},
  [314] = {.lex_state = 8},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 16},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 10},
  [320] = {.lex_state = 16},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 17},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 279},
  [326] = {.lex_state = 10},
  [327] = {.lex_state = 10},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 10},
  [331] = {.lex_state = 10},
  [332] = {.lex_state = 10},
  [333] = {.lex_state = 279},
  [334] = {.lex_state = 279},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 18},
  [338] = {.lex_state = 17},
  [339] = {.lex_state = 8},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 8},
  [342] = {.lex_state = 8},
  [343] = {.lex_state = 16},
  [344] = {.lex_state = 19},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 21},
  [351] = {.lex_state = 21},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 21},
  [356] = {.lex_state = 21},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 21},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 21},
  [379] = {.lex_state = 21},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 267},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 266},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 13},
  [415] = {.lex_state = 13},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 5},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 2},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 2},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 5},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 563},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 13},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 2},
  [451] = {.lex_state = 265},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 5},
  [456] = {.lex_state = 5},
  [457] = {.lex_state = 265},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 5},
  [462] = {.lex_state = 5},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 267},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_endcomment] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_endtest] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_payee] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_nomarket] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [aux_sym_tag_directive_token1] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [aux_sym_word_directive_token2] = ACTIONS(1),
    [anon_sym_bucket] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym__interval_period_token1] = ACTIONS(1),
    [aux_sym__interval_period_token2] = ACTIONS(1),
    [aux_sym__interval_period_token3] = ACTIONS(1),
    [aux_sym__interval_period_token4] = ACTIONS(1),
    [aux_sym__interval_period_token5] = ACTIONS(1),
    [aux_sym__interval_period_token6] = ACTIONS(1),
    [aux_sym__interval_period_token7] = ACTIONS(1),
    [aux_sym__interval_period_token8] = ACTIONS(1),
    [aux_sym__interval_period_token9] = ACTIONS(1),
    [aux_sym__interval_period_token10] = ACTIONS(1),
    [aux_sym__interval_period_token11] = ACTIONS(1),
    [aux_sym__interval_period_token12] = ACTIONS(1),
    [aux_sym__interval_period_token13] = ACTIONS(1),
    [aux_sym__interval_period_token14] = ACTIONS(1),
    [aux_sym__interval_period_token15] = ACTIONS(1),
    [aux_sym__interval_period_token16] = ACTIONS(1),
    [aux_sym__interval_period_token17] = ACTIONS(1),
    [aux_sym__interval_date_spec_token1] = ACTIONS(1),
    [aux_sym__interval_date_spec_token2] = ACTIONS(1),
    [aux_sym__interval_date_spec_token3] = ACTIONS(1),
    [aux_sym__interval_date_spec_token4] = ACTIONS(1),
    [aux_sym__interval_date_spec_token5] = ACTIONS(1),
    [anon_sym_last] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_day] = ACTIONS(1),
    [anon_sym_week] = ACTIONS(1),
    [anon_sym_month] = ACTIONS(1),
    [anon_sym_quarter] = ACTIONS(1),
    [sym__dsep] = ACTIONS(1),
    [sym__2d] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_commodity_token1] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [aux_sym_commodity_token3] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(431),
    [sym_journal_item] = STATE(2),
    [sym_block_comment] = STATE(74),
    [sym_test] = STATE(74),
    [sym_option] = STATE(87),
    [sym_directive] = STATE(74),
    [sym_account_directive] = STATE(87),
    [sym_commodity_directive] = STATE(87),
    [sym_tag_directive] = STATE(87),
    [sym_word_directive] = STATE(432),
    [sym_char_directive] = STATE(432),
    [sym_check_in] = STATE(433),
    [sym_check_out] = STATE(433),
    [sym_xact] = STATE(74),
    [sym_plain_xact] = STATE(78),
    [sym_periodic_xact] = STATE(78),
    [sym_automated_xact] = STATE(78),
    [sym__xact_date] = STATE(227),
    [sym_date] = STATE(213),
    [sym__4d] = STATE(450),
    [sym__single_date] = STATE(237),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_comment] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_DASH_DASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_account] = ACTIONS(21),
    [anon_sym_commodity] = ACTIONS(23),
    [anon_sym_tag] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_alias] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_year] = ACTIONS(33),
    [aux_sym_word_directive_token2] = ACTIONS(35),
    [anon_sym_bucket] = ACTIONS(37),
    [anon_sym_A] = ACTIONS(39),
    [anon_sym_Y] = ACTIONS(41),
    [anon_sym_N] = ACTIONS(43),
    [anon_sym_D] = ACTIONS(45),
    [anon_sym_C] = ACTIONS(47),
    [anon_sym_P] = ACTIONS(49),
    [anon_sym_i] = ACTIONS(51),
    [anon_sym_I] = ACTIONS(53),
    [anon_sym_o] = ACTIONS(55),
    [anon_sym_O] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(57),
    [sym__2d] = ACTIONS(59),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 39,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_comment,
    ACTIONS(11), 1,
      anon_sym_end,
    ACTIONS(13), 1,
      anon_sym_test,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_account,
    ACTIONS(23), 1,
      anon_sym_commodity,
    ACTIONS(25), 1,
      anon_sym_tag,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_alias,
    ACTIONS(31), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      anon_sym_year,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(37), 1,
      anon_sym_bucket,
    ACTIONS(39), 1,
      anon_sym_A,
    ACTIONS(41), 1,
      anon_sym_Y,
    ACTIONS(43), 1,
      anon_sym_N,
    ACTIONS(45), 1,
      anon_sym_D,
    ACTIONS(47), 1,
      anon_sym_C,
    ACTIONS(49), 1,
      anon_sym_P,
    ACTIONS(51), 1,
      anon_sym_i,
    ACTIONS(53), 1,
      anon_sym_I,
    ACTIONS(57), 1,
      anon_sym_TILDE,
    ACTIONS(59), 1,
      sym__2d,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_LF,
    STATE(213), 1,
      sym_date,
    STATE(227), 1,
      sym__xact_date,
    STATE(237), 1,
      sym__single_date,
    STATE(450), 1,
      sym__4d,
    ACTIONS(55), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(432), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(433), 2,
      sym_check_in,
      sym_check_out,
    STATE(78), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(74), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
    STATE(87), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
  [130] = 39,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_comment,
    ACTIONS(76), 1,
      anon_sym_end,
    ACTIONS(79), 1,
      anon_sym_test,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_DASH_DASH,
    ACTIONS(88), 1,
      anon_sym_EQ,
    ACTIONS(91), 1,
      anon_sym_account,
    ACTIONS(94), 1,
      anon_sym_commodity,
    ACTIONS(97), 1,
      anon_sym_tag,
    ACTIONS(100), 1,
      anon_sym_include,
    ACTIONS(103), 1,
      anon_sym_alias,
    ACTIONS(106), 1,
      anon_sym_def,
    ACTIONS(109), 1,
      anon_sym_year,
    ACTIONS(112), 1,
      aux_sym_word_directive_token2,
    ACTIONS(115), 1,
      anon_sym_bucket,
    ACTIONS(118), 1,
      anon_sym_A,
    ACTIONS(121), 1,
      anon_sym_Y,
    ACTIONS(124), 1,
      anon_sym_N,
    ACTIONS(127), 1,
      anon_sym_D,
    ACTIONS(130), 1,
      anon_sym_C,
    ACTIONS(133), 1,
      anon_sym_P,
    ACTIONS(136), 1,
      anon_sym_i,
    ACTIONS(139), 1,
      anon_sym_I,
    ACTIONS(145), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym__2d,
    STATE(213), 1,
      sym_date,
    STATE(227), 1,
      sym__xact_date,
    STATE(237), 1,
      sym__single_date,
    STATE(450), 1,
      sym__4d,
    ACTIONS(142), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(432), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(433), 2,
      sym_check_in,
      sym_check_out,
    STATE(78), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(74), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
    STATE(87), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
  [260] = 6,
    STATE(136), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(155), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(153), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(32), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(151), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [313] = 6,
    STATE(136), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(155), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(32), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(157), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [366] = 6,
    STATE(136), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(165), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(163), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(32), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(161), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [419] = 6,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(170), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(41), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(168), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [471] = 6,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(7), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(176), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(41), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(174), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [523] = 6,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(182), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(180), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(41), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(178), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [575] = 3,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(187), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(185), 35,
      sym_comment,
      anon_sym_eval,
      anon_sym_payee,
      anon_sym_nomarket,
      anon_sym_alias,
      anon_sym_default,
      anon_sym_format,
      anon_sym_note,
      anon_sym_assert,
      anon_sym_check,
      aux_sym__interval_period_token1,
      aux_sym__interval_period_token2,
      aux_sym__interval_period_token3,
      aux_sym__interval_period_token4,
      aux_sym__interval_period_token5,
      aux_sym__interval_period_token6,
      aux_sym__interval_period_token7,
      aux_sym__interval_period_token8,
      aux_sym__interval_period_token9,
      aux_sym__interval_period_token10,
      aux_sym__interval_period_token11,
      aux_sym__interval_period_token12,
      aux_sym__interval_period_token13,
      aux_sym__interval_period_token14,
      aux_sym__interval_period_token15,
      aux_sym__interval_period_token16,
      aux_sym__interval_period_token17,
      aux_sym__interval_date_spec_token1,
      aux_sym__interval_date_spec_token2,
      aux_sym__interval_date_spec_token3,
      aux_sym__interval_date_spec_token4,
      aux_sym__interval_date_spec_token5,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [620] = 7,
    ACTIONS(194), 1,
      aux_sym_commodity_token1,
    STATE(12), 1,
      aux_sym_whitespace_repeat1,
    STATE(61), 1,
      sym_commodity,
    ACTIONS(196), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(198), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(190), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
    ACTIONS(192), 23,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
  [672] = 6,
    ACTIONS(194), 1,
      aux_sym_commodity_token1,
    STATE(16), 1,
      aux_sym_whitespace_repeat1,
    STATE(62), 1,
      sym_commodity,
    ACTIONS(196), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(200), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(202), 23,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
  [722] = 5,
    STATE(228), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(208), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(206), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(13), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(204), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [769] = 5,
    STATE(228), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(215), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(213), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(15), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(211), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [816] = 5,
    STATE(228), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(215), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(219), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(13), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(217), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [863] = 4,
    STATE(16), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(185), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(221), 24,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
      aux_sym_commodity_token1,
  [908] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(228), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(226), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [954] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(234), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(232), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1000] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(240), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(238), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(236), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1046] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(245), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(243), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1092] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(249), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(247), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1138] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(253), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(251), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1184] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(257), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(255), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1230] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(261), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(259), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1276] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(265), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(263), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1322] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(269), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(267), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1368] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(273), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(271), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1414] = 2,
    ACTIONS(275), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(277), 24,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
      aux_sym_commodity_token1,
  [1454] = 2,
    ACTIONS(279), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(281), 24,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
      aux_sym_commodity_token1,
  [1494] = 2,
    ACTIONS(283), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(285), 24,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
      aux_sym_commodity_token1,
  [1534] = 2,
    ACTIONS(281), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(279), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1571] = 2,
    ACTIONS(289), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(287), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1608] = 2,
    ACTIONS(180), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(178), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1645] = 2,
    ACTIONS(293), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(291), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1682] = 10,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    STATE(259), 1,
      sym__interval_period,
    STATE(353), 1,
      sym_interval,
    STATE(385), 1,
      sym__relative_date_spec,
    STATE(390), 1,
      sym__interval_date_spec,
    ACTIONS(297), 2,
      aux_sym__interval_date_spec_token1,
      aux_sym__interval_date_spec_token2,
    ACTIONS(303), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(299), 3,
      aux_sym__interval_date_spec_token3,
      aux_sym__interval_date_spec_token4,
      aux_sym__interval_date_spec_token5,
    ACTIONS(301), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
    ACTIONS(295), 17,
      aux_sym__interval_period_token1,
      aux_sym__interval_period_token2,
      aux_sym__interval_period_token3,
      aux_sym__interval_period_token4,
      aux_sym__interval_period_token5,
      aux_sym__interval_period_token6,
      aux_sym__interval_period_token7,
      aux_sym__interval_period_token8,
      aux_sym__interval_period_token9,
      aux_sym__interval_period_token10,
      aux_sym__interval_period_token11,
      aux_sym__interval_period_token12,
      aux_sym__interval_period_token13,
      aux_sym__interval_period_token14,
      aux_sym__interval_period_token15,
      aux_sym__interval_period_token16,
      aux_sym__interval_period_token17,
  [1735] = 2,
    ACTIONS(307), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(305), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1772] = 2,
    ACTIONS(311), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(309), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1809] = 2,
    ACTIONS(315), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(313), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1846] = 2,
    ACTIONS(319), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(317), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1883] = 2,
    ACTIONS(323), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(321), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1920] = 2,
    ACTIONS(327), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(325), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1957] = 2,
    ACTIONS(331), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(329), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1994] = 2,
    ACTIONS(335), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(333), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2031] = 2,
    ACTIONS(339), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(337), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2068] = 2,
    ACTIONS(343), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(341), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2105] = 2,
    ACTIONS(347), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(345), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2142] = 2,
    ACTIONS(351), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(349), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2179] = 2,
    ACTIONS(355), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(353), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2216] = 2,
    ACTIONS(163), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(161), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2253] = 2,
    ACTIONS(359), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(357), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2290] = 2,
    ACTIONS(363), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(361), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2327] = 2,
    ACTIONS(367), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(365), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2364] = 2,
    ACTIONS(371), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(369), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2401] = 2,
    ACTIONS(375), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(373), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2438] = 2,
    ACTIONS(379), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(377), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2475] = 2,
    ACTIONS(383), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(381), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2512] = 2,
    ACTIONS(387), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(385), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2549] = 2,
    ACTIONS(391), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(389), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2586] = 2,
    ACTIONS(395), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(393), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2623] = 2,
    ACTIONS(399), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(397), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2660] = 2,
    ACTIONS(202), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(200), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2697] = 2,
    ACTIONS(403), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(401), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2734] = 2,
    ACTIONS(277), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(275), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2771] = 2,
    ACTIONS(285), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(283), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2808] = 2,
    ACTIONS(206), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(204), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2845] = 3,
    ACTIONS(409), 1,
      aux_sym_block_comment_token1,
    ACTIONS(405), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(407), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2883] = 3,
    ACTIONS(415), 1,
      aux_sym_block_comment_token1,
    ACTIONS(411), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(413), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2921] = 3,
    ACTIONS(421), 1,
      aux_sym_block_comment_token1,
    ACTIONS(417), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(419), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2959] = 3,
    ACTIONS(427), 1,
      aux_sym_block_comment_token1,
    ACTIONS(423), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(425), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2997] = 3,
    ACTIONS(433), 1,
      aux_sym_block_comment_token1,
    ACTIONS(429), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(431), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [3035] = 3,
    ACTIONS(439), 1,
      aux_sym_block_comment_token1,
    ACTIONS(435), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(437), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [3073] = 3,
    ACTIONS(445), 1,
      aux_sym_block_comment_token1,
    ACTIONS(441), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(443), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [3111] = 3,
    ACTIONS(451), 1,
      aux_sym_block_comment_token1,
    ACTIONS(447), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(449), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [3149] = 2,
    ACTIONS(455), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(453), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3184] = 2,
    ACTIONS(407), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(405), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3219] = 2,
    ACTIONS(459), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(457), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3254] = 2,
    ACTIONS(463), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(461), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3289] = 2,
    ACTIONS(467), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(465), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3324] = 2,
    ACTIONS(471), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(469), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3359] = 2,
    ACTIONS(419), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(417), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3394] = 2,
    ACTIONS(413), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(411), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3429] = 2,
    ACTIONS(425), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(423), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3464] = 2,
    ACTIONS(475), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(473), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3499] = 2,
    ACTIONS(437), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(435), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3534] = 2,
    ACTIONS(449), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(447), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3569] = 2,
    ACTIONS(479), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(477), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3604] = 2,
    ACTIONS(483), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(481), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3639] = 2,
    ACTIONS(431), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(429), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3674] = 2,
    ACTIONS(443), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(441), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3709] = 20,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(107), 1,
      sym_amount,
    STATE(140), 1,
      sym_lot_price,
    STATE(155), 1,
      sym_price,
    STATE(167), 1,
      sym_commodity,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(426), 1,
      sym_note,
    ACTIONS(507), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3774] = 20,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(509), 1,
      anon_sym_LF,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(108), 1,
      sym_amount,
    STATE(139), 1,
      sym_lot_price,
    STATE(165), 1,
      sym_price,
    STATE(167), 1,
      sym_commodity,
    STATE(230), 1,
      sym_balance_assertion,
    STATE(448), 1,
      sym_note,
    ACTIONS(511), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3839] = 20,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(513), 1,
      anon_sym_LF,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    STATE(106), 1,
      sym_amount,
    STATE(135), 1,
      sym_lot_price,
    STATE(167), 1,
      sym_commodity,
    STATE(175), 1,
      sym_price,
    STATE(219), 1,
      sym_balance_assertion,
    STATE(452), 1,
      sym_note,
    ACTIONS(515), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3904] = 19,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(107), 1,
      sym_amount,
    STATE(140), 1,
      sym_lot_price,
    STATE(155), 1,
      sym_price,
    STATE(167), 1,
      sym_commodity,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(426), 1,
      sym_note,
    ACTIONS(517), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3966] = 19,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(106), 1,
      sym_amount,
    STATE(135), 1,
      sym_lot_price,
    STATE(167), 1,
      sym_commodity,
    STATE(175), 1,
      sym_price,
    STATE(219), 1,
      sym_balance_assertion,
    STATE(452), 1,
      sym_note,
    ACTIONS(517), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4028] = 19,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(103), 1,
      sym_amount,
    STATE(138), 1,
      sym_lot_price,
    STATE(159), 1,
      sym_price,
    STATE(167), 1,
      sym_commodity,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(517), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4090] = 4,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(519), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(221), 4,
      sym__2d,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(185), 11,
      anon_sym_LF,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      sym_time,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
  [4117] = 4,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(522), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(185), 5,
      sym_comment,
      anon_sym_DASH,
      aux_sym_tag_directive_token1,
      sym__quantity,
      anon_sym_PLUS,
    ACTIONS(221), 10,
      anon_sym_assert,
      anon_sym_check,
      aux_sym__interval_date_spec_token1,
      aux_sym__interval_date_spec_token2,
      aux_sym__interval_date_spec_token3,
      aux_sym__interval_date_spec_token4,
      aux_sym__interval_date_spec_token5,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [4144] = 2,
    ACTIONS(391), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(389), 14,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4166] = 5,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(137), 1,
      sym_commodity,
    ACTIONS(202), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(200), 8,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4193] = 6,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(133), 1,
      sym_commodity,
    ACTIONS(525), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(192), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(190), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
  [4222] = 4,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(221), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(527), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(185), 10,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [4246] = 2,
    ACTIONS(277), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(275), 11,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4265] = 13,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(530), 1,
      anon_sym_LF,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_lot_price,
    STATE(161), 1,
      sym_price,
    STATE(231), 1,
      sym_balance_assertion,
    STATE(401), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4306] = 2,
    ACTIONS(281), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(279), 11,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4325] = 2,
    ACTIONS(285), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(283), 11,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4344] = 13,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    STATE(140), 1,
      sym_lot_price,
    STATE(155), 1,
      sym_price,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(426), 1,
      sym_note,
    ACTIONS(534), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4385] = 13,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(536), 1,
      anon_sym_LF,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    STATE(138), 1,
      sym_lot_price,
    STATE(159), 1,
      sym_price,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(538), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4426] = 13,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(513), 1,
      anon_sym_LF,
    STATE(123), 1,
      aux_sym_whitespace_repeat1,
    STATE(135), 1,
      sym_lot_price,
    STATE(175), 1,
      sym_price,
    STATE(219), 1,
      sym_balance_assertion,
    STATE(452), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4467] = 9,
    ACTIONS(59), 1,
      sym__2d,
    ACTIONS(542), 1,
      aux_sym_word_directive_token2,
    ACTIONS(544), 1,
      sym__month,
    STATE(150), 1,
      aux_sym_whitespace_repeat1,
    STATE(276), 1,
      sym__4d,
    STATE(389), 1,
      sym_date_spec,
    ACTIONS(548), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(321), 2,
      sym__relative_date_spec,
      sym__single_date,
    ACTIONS(546), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [4499] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_commodity,
    STATE(290), 1,
      sym_amount,
    ACTIONS(517), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4531] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_commodity,
    STATE(445), 1,
      sym_amount,
    ACTIONS(517), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(182), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4563] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(124), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_commodity,
    STATE(445), 1,
      sym_amount,
    ACTIONS(550), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(182), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4595] = 9,
    ACTIONS(552), 1,
      anon_sym_DASH,
    ACTIONS(554), 1,
      sym__quantity,
    ACTIONS(556), 1,
      anon_sym_PLUS,
    STATE(45), 1,
      sym_amount,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(173), 1,
      sym_commodity,
    ACTIONS(517), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(11), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4627] = 12,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(132), 1,
      sym_lot_price,
    STATE(163), 1,
      sym_price,
    STATE(229), 1,
      sym_balance_assertion,
    STATE(439), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4665] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_commodity,
    STATE(286), 1,
      sym_amount,
    ACTIONS(517), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4697] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_commodity,
    STATE(409), 1,
      sym_amount,
    ACTIONS(560), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(182), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4729] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_commodity,
    STATE(288), 1,
      sym_amount,
    ACTIONS(517), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4761] = 12,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(138), 1,
      sym_lot_price,
    STATE(159), 1,
      sym_price,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4799] = 9,
    ACTIONS(59), 1,
      sym__2d,
    ACTIONS(542), 1,
      aux_sym_word_directive_token2,
    ACTIONS(544), 1,
      sym__month,
    STATE(150), 1,
      aux_sym_whitespace_repeat1,
    STATE(275), 1,
      sym_date_spec,
    STATE(276), 1,
      sym__4d,
    ACTIONS(548), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(321), 2,
      sym__relative_date_spec,
      sym__single_date,
    ACTIONS(546), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [4831] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_commodity,
    STATE(255), 1,
      sym_amount,
    ACTIONS(517), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4863] = 9,
    ACTIONS(59), 1,
      sym__2d,
    ACTIONS(542), 1,
      aux_sym_word_directive_token2,
    ACTIONS(544), 1,
      sym__month,
    STATE(150), 1,
      aux_sym_whitespace_repeat1,
    STATE(276), 1,
      sym__4d,
    STATE(386), 1,
      sym_date_spec,
    ACTIONS(548), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(321), 2,
      sym__relative_date_spec,
      sym__single_date,
    ACTIONS(546), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [4895] = 7,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(385), 1,
      sym__relative_date_spec,
    STATE(387), 1,
      sym__interval_date_spec,
    ACTIONS(297), 2,
      aux_sym__interval_date_spec_token1,
      aux_sym__interval_date_spec_token2,
    ACTIONS(562), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(299), 3,
      aux_sym__interval_date_spec_token3,
      aux_sym__interval_date_spec_token4,
      aux_sym__interval_date_spec_token5,
    ACTIONS(301), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [4923] = 12,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(140), 1,
      sym_lot_price,
    STATE(155), 1,
      sym_price,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(426), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4961] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_commodity,
    STATE(442), 1,
      sym_amount,
    ACTIONS(517), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(182), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4993] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_commodity,
    STATE(309), 1,
      sym_amount,
    ACTIONS(564), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5025] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_commodity,
    STATE(249), 1,
      sym_amount,
    ACTIONS(566), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5057] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_commodity,
    STATE(416), 1,
      sym_amount,
    ACTIONS(517), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(182), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5089] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_commodity,
    STATE(310), 1,
      sym_amount,
    ACTIONS(568), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5121] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(110), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_commodity,
    STATE(311), 1,
      sym_amount,
    ACTIONS(570), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5153] = 12,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_lot_price,
    STATE(161), 1,
      sym_price,
    STATE(231), 1,
      sym_balance_assertion,
    STATE(401), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5191] = 11,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(580), 1,
      anon_sym_SPACE,
    ACTIONS(582), 1,
      anon_sym_TAB,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    STATE(201), 1,
      sym_status,
    STATE(279), 1,
      sym_account,
    STATE(440), 1,
      sym_note,
    ACTIONS(572), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [5226] = 10,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(584), 1,
      anon_sym_LF,
    STATE(141), 1,
      aux_sym_whitespace_repeat1,
    STATE(166), 1,
      sym_price,
    STATE(223), 1,
      sym_balance_assertion,
    STATE(404), 1,
      sym_note,
    ACTIONS(586), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5258] = 2,
    ACTIONS(202), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(200), 8,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5274] = 10,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(588), 1,
      anon_sym_LF,
    STATE(144), 1,
      aux_sym_whitespace_repeat1,
    STATE(163), 1,
      sym_price,
    STATE(229), 1,
      sym_balance_assertion,
    STATE(439), 1,
      sym_note,
    ACTIONS(590), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5306] = 10,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    STATE(155), 1,
      sym_price,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(426), 1,
      sym_note,
    ACTIONS(592), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5338] = 9,
    ACTIONS(594), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_alias,
    ACTIONS(600), 1,
      anon_sym_default,
    ACTIONS(602), 1,
      anon_sym_note,
    ACTIONS(604), 1,
      anon_sym_assert,
    ACTIONS(606), 1,
      anon_sym_check,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(303), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(596), 2,
      anon_sym_eval,
      anon_sym_payee,
  [5368] = 2,
    ACTIONS(403), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(401), 8,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5384] = 10,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(530), 1,
      anon_sym_LF,
    STATE(142), 1,
      aux_sym_whitespace_repeat1,
    STATE(161), 1,
      sym_price,
    STATE(231), 1,
      sym_balance_assertion,
    STATE(401), 1,
      sym_note,
    ACTIONS(608), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5416] = 10,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(513), 1,
      anon_sym_LF,
    STATE(143), 1,
      aux_sym_whitespace_repeat1,
    STATE(175), 1,
      sym_price,
    STATE(219), 1,
      sym_balance_assertion,
    STATE(452), 1,
      sym_note,
    ACTIONS(610), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5448] = 10,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(536), 1,
      anon_sym_LF,
    STATE(145), 1,
      aux_sym_whitespace_repeat1,
    STATE(159), 1,
      sym_price,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(612), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5480] = 9,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(168), 1,
      sym_price,
    STATE(232), 1,
      sym_balance_assertion,
    STATE(464), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5509] = 9,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(163), 1,
      sym_price,
    STATE(229), 1,
      sym_balance_assertion,
    STATE(439), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5538] = 9,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(155), 1,
      sym_price,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(426), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5567] = 9,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(166), 1,
      sym_price,
    STATE(223), 1,
      sym_balance_assertion,
    STATE(404), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5596] = 9,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(161), 1,
      sym_price,
    STATE(231), 1,
      sym_balance_assertion,
    STATE(401), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5625] = 9,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(159), 1,
      sym_price,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5654] = 7,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
    ACTIONS(618), 1,
      sym_payee,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    STATE(215), 1,
      sym_code,
    STATE(235), 1,
      sym_status,
    ACTIONS(614), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(620), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5678] = 8,
    ACTIONS(598), 1,
      anon_sym_alias,
    ACTIONS(600), 1,
      anon_sym_default,
    ACTIONS(602), 1,
      anon_sym_note,
    ACTIONS(622), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_nomarket,
    ACTIONS(626), 1,
      anon_sym_format,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(303), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5704] = 5,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(628), 1,
      anon_sym_SPACE,
    ACTIONS(631), 1,
      anon_sym_TAB,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(221), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [5724] = 4,
    ACTIONS(185), 1,
      aux_sym_word_directive_token2,
    STATE(150), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(634), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(221), 5,
      sym__month,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
      sym__2d,
  [5742] = 3,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(637), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(221), 6,
      anon_sym_year,
      sym__month,
      anon_sym_day,
      anon_sym_week,
      anon_sym_month,
      anon_sym_quarter,
  [5758] = 3,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(642), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(640), 6,
      anon_sym_year,
      sym__month,
      anon_sym_day,
      anon_sym_week,
      anon_sym_month,
      anon_sym_quarter,
  [5774] = 6,
    ACTIONS(644), 1,
      anon_sym_LF,
    ACTIONS(647), 1,
      aux_sym_block_comment_token1,
    STATE(153), 1,
      aux_sym_block_comment_repeat1,
    STATE(334), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(650), 2,
      anon_sym_end,
      anon_sym_endtest,
    ACTIONS(652), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5795] = 7,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(657), 1,
      aux_sym_block_comment_token1,
    ACTIONS(659), 1,
      anon_sym_end,
    ACTIONS(661), 1,
      anon_sym_endtest,
    STATE(160), 1,
      aux_sym_block_comment_repeat1,
    STATE(334), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(663), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5818] = 7,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(536), 1,
      anon_sym_LF,
    STATE(183), 1,
      aux_sym_whitespace_repeat1,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(665), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5841] = 7,
    ACTIONS(427), 1,
      anon_sym_endcomment,
    ACTIONS(667), 1,
      anon_sym_LF,
    ACTIONS(669), 1,
      aux_sym_block_comment_token1,
    ACTIONS(671), 1,
      anon_sym_end,
    STATE(178), 1,
      aux_sym_block_comment_repeat1,
    STATE(304), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(673), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5864] = 5,
    ACTIONS(200), 1,
      anon_sym_LF,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(137), 1,
      sym_commodity,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5883] = 6,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(562), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(137), 2,
      sym_quantity,
      sym_negative_quantity,
  [5904] = 7,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(530), 1,
      anon_sym_LF,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    STATE(231), 1,
      sym_balance_assertion,
    STATE(401), 1,
      sym_note,
    ACTIONS(675), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5927] = 7,
    ACTIONS(451), 1,
      anon_sym_endtest,
    ACTIONS(657), 1,
      aux_sym_block_comment_token1,
    ACTIONS(677), 1,
      anon_sym_LF,
    ACTIONS(679), 1,
      anon_sym_end,
    STATE(153), 1,
      aux_sym_block_comment_repeat1,
    STATE(334), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(663), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5950] = 7,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(588), 1,
      anon_sym_LF,
    STATE(204), 1,
      aux_sym_whitespace_repeat1,
    STATE(229), 1,
      sym_balance_assertion,
    STATE(439), 1,
      sym_note,
    ACTIONS(681), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5973] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(177), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym__single_date,
    STATE(314), 1,
      sym_date,
    STATE(450), 1,
      sym__4d,
    ACTIONS(683), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5996] = 7,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(584), 1,
      anon_sym_LF,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    STATE(223), 1,
      sym_balance_assertion,
    STATE(404), 1,
      sym_note,
    ACTIONS(685), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6019] = 7,
    ACTIONS(669), 1,
      aux_sym_block_comment_token1,
    ACTIONS(687), 1,
      anon_sym_LF,
    ACTIONS(689), 1,
      anon_sym_end,
    ACTIONS(691), 1,
      anon_sym_endcomment,
    STATE(156), 1,
      aux_sym_block_comment_repeat1,
    STATE(304), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(673), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6042] = 7,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(513), 1,
      anon_sym_LF,
    STATE(208), 1,
      aux_sym_whitespace_repeat1,
    STATE(219), 1,
      sym_balance_assertion,
    STATE(452), 1,
      sym_note,
    ACTIONS(693), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6065] = 7,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(695), 1,
      anon_sym_LF,
    STATE(187), 1,
      aux_sym_whitespace_repeat1,
    STATE(232), 1,
      sym_balance_assertion,
    STATE(464), 1,
      sym_note,
    ACTIONS(697), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6088] = 6,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(158), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(699), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(133), 2,
      sym_quantity,
      sym_negative_quantity,
  [6109] = 7,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(701), 1,
      anon_sym_LF,
    STATE(190), 1,
      aux_sym_whitespace_repeat1,
    STATE(218), 1,
      sym_balance_assertion,
    STATE(398), 1,
      sym_note,
    ACTIONS(703), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6132] = 7,
    ACTIONS(439), 1,
      anon_sym_endcomment,
    ACTIONS(667), 1,
      anon_sym_LF,
    ACTIONS(669), 1,
      aux_sym_block_comment_token1,
    ACTIONS(705), 1,
      anon_sym_end,
    STATE(178), 1,
      aux_sym_block_comment_repeat1,
    STATE(304), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(673), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6155] = 2,
    ACTIONS(709), 1,
      sym__dsep,
    ACTIONS(707), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6168] = 7,
    ACTIONS(409), 1,
      anon_sym_endtest,
    ACTIONS(657), 1,
      aux_sym_block_comment_token1,
    ACTIONS(677), 1,
      anon_sym_LF,
    ACTIONS(711), 1,
      anon_sym_end,
    STATE(153), 1,
      aux_sym_block_comment_repeat1,
    STATE(334), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(663), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6191] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym__single_date,
    STATE(377), 1,
      sym_date,
    STATE(450), 1,
      sym__4d,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6214] = 6,
    ACTIONS(713), 1,
      anon_sym_DASH,
    ACTIONS(715), 1,
      sym__quantity,
    ACTIONS(717), 1,
      anon_sym_PLUS,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(719), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(61), 2,
      sym_quantity,
      sym_negative_quantity,
  [6235] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym__single_date,
    STATE(340), 1,
      sym_date,
    STATE(450), 1,
      sym__4d,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6258] = 7,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(205), 1,
      aux_sym_whitespace_repeat1,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(426), 1,
      sym_note,
    ACTIONS(721), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6281] = 6,
    ACTIONS(713), 1,
      anon_sym_DASH,
    ACTIONS(715), 1,
      sym__quantity,
    ACTIONS(717), 1,
      anon_sym_PLUS,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(562), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(62), 2,
      sym_quantity,
      sym_negative_quantity,
  [6302] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym__single_date,
    STATE(342), 1,
      sym_date,
    STATE(450), 1,
      sym__4d,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6325] = 6,
    ACTIONS(723), 1,
      anon_sym_LF,
    ACTIONS(726), 1,
      aux_sym_block_comment_token1,
    STATE(178), 1,
      aux_sym_block_comment_repeat1,
    STATE(304), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(650), 2,
      anon_sym_end,
      anon_sym_endcomment,
    ACTIONS(729), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6346] = 7,
    ACTIONS(421), 1,
      anon_sym_endcomment,
    ACTIONS(669), 1,
      aux_sym_block_comment_token1,
    ACTIONS(732), 1,
      anon_sym_LF,
    ACTIONS(734), 1,
      anon_sym_end,
    STATE(169), 1,
      aux_sym_block_comment_repeat1,
    STATE(304), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(673), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6369] = 7,
    ACTIONS(415), 1,
      anon_sym_endtest,
    ACTIONS(657), 1,
      aux_sym_block_comment_token1,
    ACTIONS(736), 1,
      anon_sym_LF,
    ACTIONS(738), 1,
      anon_sym_end,
    STATE(171), 1,
      aux_sym_block_comment_repeat1,
    STATE(334), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(663), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6392] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(174), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym__single_date,
    STATE(313), 1,
      sym_date,
    STATE(450), 1,
      sym__4d,
    ACTIONS(740), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6415] = 5,
    ACTIONS(190), 1,
      anon_sym_LF,
    STATE(133), 1,
      sym_commodity,
    STATE(157), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(742), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6434] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(231), 1,
      sym_balance_assertion,
    STATE(401), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6454] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(232), 1,
      sym_balance_assertion,
    STATE(464), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6474] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(744), 1,
      anon_sym_SPACE,
    ACTIONS(746), 1,
      anon_sym_TAB,
    STATE(206), 1,
      aux_sym_whitespace_repeat1,
    STATE(273), 1,
      sym_account,
  [6496] = 4,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(397), 1,
      sym_commodity,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6512] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(218), 1,
      sym_balance_assertion,
    STATE(398), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6532] = 2,
    ACTIONS(750), 1,
      anon_sym_AT,
    ACTIONS(748), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6544] = 2,
    ACTIONS(754), 1,
      anon_sym_AT,
    ACTIONS(752), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6556] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(225), 1,
      sym_balance_assertion,
    STATE(403), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6576] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(756), 1,
      anon_sym_SPACE,
    ACTIONS(758), 1,
      anon_sym_TAB,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    STATE(253), 1,
      sym_account,
  [6598] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(760), 1,
      anon_sym_SPACE,
    ACTIONS(762), 1,
      anon_sym_TAB,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    STATE(247), 1,
      sym_account,
  [6620] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(760), 1,
      anon_sym_SPACE,
    ACTIONS(762), 1,
      anon_sym_TAB,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    STATE(411), 1,
      sym_account,
  [6642] = 4,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(280), 1,
      sym_commodity,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6658] = 6,
    ACTIONS(764), 1,
      aux_sym_note_token1,
    ACTIONS(766), 1,
      anon_sym_LBRACK,
    ACTIONS(768), 1,
      aux_sym_note_token2,
    STATE(198), 1,
      aux_sym_note_repeat1,
    STATE(319), 1,
      aux_sym_note_repeat2,
    ACTIONS(770), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6678] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(229), 1,
      sym_balance_assertion,
    STATE(439), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6698] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(760), 1,
      anon_sym_SPACE,
    ACTIONS(762), 1,
      anon_sym_TAB,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    STATE(395), 1,
      sym_account,
  [6720] = 6,
    ACTIONS(772), 1,
      aux_sym_note_token1,
    ACTIONS(774), 1,
      anon_sym_LBRACK,
    ACTIONS(776), 1,
      aux_sym_note_token2,
    STATE(221), 1,
      aux_sym_note_repeat1,
    STATE(326), 1,
      aux_sym_note_repeat2,
    ACTIONS(778), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6740] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(760), 1,
      anon_sym_SPACE,
    ACTIONS(762), 1,
      anon_sym_TAB,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    STATE(416), 1,
      sym_account,
  [6762] = 4,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(416), 1,
      sym_commodity,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6778] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(780), 1,
      anon_sym_SPACE,
    ACTIONS(782), 1,
      anon_sym_TAB,
    STATE(211), 1,
      aux_sym_whitespace_repeat1,
    STATE(277), 1,
      sym_account,
  [6800] = 2,
    ACTIONS(786), 1,
      anon_sym_AT,
    ACTIONS(784), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6812] = 4,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_commodity,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6828] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(223), 1,
      sym_balance_assertion,
    STATE(404), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6848] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6868] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(760), 1,
      anon_sym_SPACE,
    ACTIONS(762), 1,
      anon_sym_TAB,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    STATE(240), 1,
      sym_account,
  [6890] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(788), 1,
      anon_sym_SPACE,
    ACTIONS(790), 1,
      anon_sym_TAB,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    STATE(240), 1,
      sym_account,
  [6912] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(426), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6932] = 3,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(792), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(185), 4,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_payee,
  [6946] = 1,
    ACTIONS(795), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6956] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(760), 1,
      anon_sym_SPACE,
    ACTIONS(762), 1,
      anon_sym_TAB,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    STATE(242), 1,
      sym_account,
  [6978] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(760), 1,
      anon_sym_SPACE,
    ACTIONS(762), 1,
      anon_sym_TAB,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    STATE(273), 1,
      sym_account,
  [7000] = 3,
    ACTIONS(799), 1,
      anon_sym_EQ,
    STATE(285), 1,
      sym_effective_date,
    ACTIONS(797), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7013] = 2,
    ACTIONS(801), 1,
      anon_sym_LF,
    ACTIONS(650), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7024] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(803), 1,
      anon_sym_LF,
    STATE(305), 1,
      aux_sym_whitespace_repeat1,
    STATE(394), 1,
      sym_note,
    ACTIONS(805), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7041] = 2,
    ACTIONS(801), 1,
      anon_sym_LF,
    ACTIONS(650), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7052] = 2,
    ACTIONS(807), 1,
      anon_sym_LF,
    ACTIONS(809), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7063] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(811), 1,
      anon_sym_LF,
    STATE(271), 1,
      aux_sym_whitespace_repeat1,
    STATE(403), 1,
      sym_note,
    ACTIONS(813), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7080] = 5,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    STATE(426), 1,
      sym_note,
    ACTIONS(815), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7097] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(817), 1,
      anon_sym_LF,
    STATE(283), 1,
      aux_sym_whitespace_repeat1,
    STATE(399), 1,
      sym_note,
    ACTIONS(819), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7114] = 4,
    ACTIONS(821), 1,
      aux_sym_note_token1,
    ACTIONS(826), 1,
      aux_sym_note_token2,
    STATE(221), 1,
      aux_sym_note_repeat1,
    ACTIONS(824), 3,
      anon_sym_LBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7129] = 2,
    ACTIONS(807), 1,
      anon_sym_LF,
    ACTIONS(809), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7140] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(695), 1,
      anon_sym_LF,
    STATE(268), 1,
      aux_sym_whitespace_repeat1,
    STATE(464), 1,
      sym_note,
    ACTIONS(828), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7157] = 4,
    ACTIONS(830), 1,
      anon_sym_SPACE,
    ACTIONS(833), 1,
      anon_sym_TAB,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(221), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [7172] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(836), 1,
      anon_sym_LF,
    STATE(272), 1,
      aux_sym_whitespace_repeat1,
    STATE(407), 1,
      sym_note,
    ACTIONS(838), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7189] = 5,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
    ACTIONS(840), 1,
      sym_payee,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    STATE(220), 1,
      sym_code,
    ACTIONS(620), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7206] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(842), 1,
      anon_sym_LF,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    STATE(429), 1,
      sym_note,
    ACTIONS(844), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7223] = 5,
    ACTIONS(604), 1,
      anon_sym_assert,
    ACTIONS(606), 1,
      anon_sym_check,
    ACTIONS(846), 1,
      sym_comment,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(562), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7240] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(584), 1,
      anon_sym_LF,
    STATE(265), 1,
      aux_sym_whitespace_repeat1,
    STATE(404), 1,
      sym_note,
    ACTIONS(848), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7257] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(513), 1,
      anon_sym_LF,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    STATE(452), 1,
      sym_note,
    ACTIONS(850), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7274] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(588), 1,
      anon_sym_LF,
    STATE(264), 1,
      aux_sym_whitespace_repeat1,
    STATE(439), 1,
      sym_note,
    ACTIONS(852), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7291] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(701), 1,
      anon_sym_LF,
    STATE(270), 1,
      aux_sym_whitespace_repeat1,
    STATE(398), 1,
      sym_note,
    ACTIONS(854), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7308] = 6,
    ACTIONS(778), 1,
      anon_sym_LF,
    ACTIONS(856), 1,
      aux_sym_note_token1,
    ACTIONS(858), 1,
      anon_sym_LBRACK,
    ACTIONS(860), 1,
      aux_sym_note_token2,
    STATE(260), 1,
      aux_sym_note_repeat1,
    STATE(350), 1,
      aux_sym_note_repeat2,
  [7327] = 6,
    ACTIONS(770), 1,
      anon_sym_LF,
    ACTIONS(862), 1,
      aux_sym_note_token1,
    ACTIONS(864), 1,
      anon_sym_LBRACK,
    ACTIONS(866), 1,
      aux_sym_note_token2,
    STATE(233), 1,
      aux_sym_note_repeat1,
    STATE(379), 1,
      aux_sym_note_repeat2,
  [7346] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(803), 1,
      anon_sym_LF,
    STATE(226), 1,
      aux_sym_whitespace_repeat1,
    STATE(394), 1,
      sym_note,
    ACTIONS(868), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7363] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(530), 1,
      anon_sym_LF,
    STATE(262), 1,
      aux_sym_whitespace_repeat1,
    STATE(401), 1,
      sym_note,
    ACTIONS(870), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7380] = 1,
    ACTIONS(872), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7389] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(536), 1,
      anon_sym_LF,
    STATE(258), 1,
      aux_sym_whitespace_repeat1,
    STATE(400), 1,
      sym_note,
    ACTIONS(874), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7406] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(26), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7418] = 2,
    ACTIONS(876), 1,
      anon_sym_LF,
    ACTIONS(878), 4,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7428] = 3,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(562), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(880), 2,
      aux_sym__interval_date_spec_token3,
      aux_sym__interval_date_spec_token4,
  [7440] = 2,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(882), 4,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7450] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(20), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7462] = 4,
    ACTIONS(884), 1,
      aux_sym_option_value_token1,
    STATE(337), 1,
      aux_sym_whitespace_repeat1,
    STATE(411), 1,
      sym_filename,
    ACTIONS(886), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7476] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(25), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7488] = 1,
    ACTIONS(888), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7496] = 2,
    ACTIONS(890), 1,
      anon_sym_LF,
    ACTIONS(892), 4,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7506] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7518] = 1,
    ACTIONS(894), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7526] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(426), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7540] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(23), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7552] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7564] = 2,
    ACTIONS(896), 1,
      anon_sym_LF,
    ACTIONS(898), 4,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7574] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(400), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7588] = 1,
    ACTIONS(900), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7596] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7608] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7620] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(401), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7634] = 3,
    STATE(122), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(902), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    ACTIONS(904), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7646] = 4,
    ACTIONS(826), 1,
      aux_sym_note_token2,
    ACTIONS(906), 1,
      aux_sym_note_token1,
    STATE(260), 1,
      aux_sym_note_repeat1,
    ACTIONS(824), 2,
      anon_sym_LF,
      anon_sym_LBRACK,
  [7660] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(27), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7672] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(439), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7686] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(22), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7698] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(404), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7712] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(464), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7726] = 4,
    ACTIONS(909), 1,
      aux_sym_option_value_token1,
    STATE(337), 1,
      aux_sym_whitespace_repeat1,
    STATE(424), 1,
      sym_option_value,
    ACTIONS(886), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7740] = 1,
    ACTIONS(911), 5,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7748] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(398), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7762] = 1,
    ACTIONS(913), 5,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7770] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(403), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7784] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(407), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7798] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(410), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7812] = 2,
    ACTIONS(915), 1,
      anon_sym_LF,
    ACTIONS(917), 4,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7822] = 2,
    ACTIONS(921), 1,
      anon_sym_SPACE,
    ACTIONS(919), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [7832] = 3,
    STATE(241), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(923), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    ACTIONS(925), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7844] = 2,
    ACTIONS(929), 1,
      sym__dsep,
    ACTIONS(927), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7854] = 2,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(931), 4,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7864] = 4,
    ACTIONS(933), 1,
      anon_sym_LF,
    ACTIONS(935), 1,
      anon_sym_EQ,
    STATE(266), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(937), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7878] = 2,
    ACTIONS(939), 1,
      anon_sym_LF,
    ACTIONS(941), 4,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7888] = 3,
    ACTIONS(943), 1,
      anon_sym_EQ,
    STATE(336), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(945), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7899] = 4,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(246), 1,
      sym__single_date,
    STATE(450), 1,
      sym__4d,
  [7912] = 3,
    ACTIONS(947), 1,
      sym_time,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7923] = 3,
    ACTIONS(949), 1,
      sym_payee,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(620), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7934] = 3,
    ACTIONS(951), 1,
      sym_time,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7945] = 1,
    ACTIONS(953), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7952] = 1,
    ACTIONS(955), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7959] = 3,
    ACTIONS(957), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7970] = 3,
    ACTIONS(957), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(959), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7981] = 3,
    ACTIONS(957), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7992] = 3,
    ACTIONS(957), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(299), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(961), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8003] = 3,
    ACTIONS(963), 1,
      sym_query,
    STATE(344), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(965), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8014] = 3,
    ACTIONS(967), 1,
      anon_sym_LF,
    STATE(333), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(969), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8025] = 3,
    ACTIONS(971), 1,
      aux_sym_account_subdirective_token1,
    STATE(343), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(973), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8036] = 3,
    ACTIONS(975), 1,
      sym_payee,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(620), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8047] = 3,
    ACTIONS(977), 1,
      aux_sym_account_subdirective_token1,
    STATE(343), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(973), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8058] = 3,
    ACTIONS(979), 1,
      aux_sym_option_value_token1,
    STATE(337), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(886), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8069] = 3,
    ACTIONS(981), 1,
      aux_sym_account_subdirective_token1,
    STATE(343), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(973), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8080] = 3,
    ACTIONS(983), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8091] = 3,
    ACTIONS(983), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8102] = 3,
    ACTIONS(985), 1,
      aux_sym_word_directive_token2,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8113] = 3,
    ACTIONS(987), 1,
      sym_payee,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(620), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8124] = 3,
    ACTIONS(987), 1,
      sym_payee,
    STATE(323), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(989), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8135] = 3,
    ACTIONS(991), 1,
      sym_payee,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(620), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8146] = 3,
    ACTIONS(993), 1,
      aux_sym_block_comment_token1,
    STATE(306), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(995), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8157] = 3,
    ACTIONS(840), 1,
      sym_payee,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(620), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8168] = 3,
    ACTIONS(221), 1,
      aux_sym_block_comment_token1,
    STATE(306), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(997), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8179] = 3,
    ACTIONS(1000), 1,
      aux_sym_word_directive_token2,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8190] = 3,
    ACTIONS(1002), 1,
      aux_sym_tag_directive_token1,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(562), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8201] = 1,
    ACTIONS(1004), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8208] = 3,
    ACTIONS(1006), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1008), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8219] = 3,
    ACTIONS(1006), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(289), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1010), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8230] = 3,
    ACTIONS(991), 1,
      sym_payee,
    STATE(301), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1012), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8241] = 3,
    ACTIONS(1014), 1,
      sym_time,
    STATE(339), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1016), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8252] = 3,
    ACTIONS(1018), 1,
      sym_time,
    STATE(341), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1020), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8263] = 1,
    ACTIONS(921), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8270] = 3,
    ACTIONS(1022), 1,
      aux_sym_account_subdirective_token1,
    STATE(343), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(973), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8281] = 3,
    ACTIONS(1024), 1,
      sym_payee,
    STATE(303), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1026), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8292] = 3,
    ACTIONS(1028), 1,
      anon_sym_LF,
    STATE(325), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1030), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8303] = 3,
    ACTIONS(1032), 1,
      aux_sym_note_token2,
    STATE(327), 1,
      aux_sym_note_repeat2,
    ACTIONS(778), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8314] = 3,
    ACTIONS(1034), 1,
      aux_sym_account_subdirective_token1,
    STATE(343), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(973), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8325] = 1,
    ACTIONS(927), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8332] = 3,
    ACTIONS(1036), 1,
      aux_sym_word_directive_token1,
    STATE(338), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1038), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8343] = 3,
    ACTIONS(1040), 1,
      sym_payee,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(620), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8354] = 1,
    ACTIONS(1042), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8361] = 3,
    ACTIONS(1044), 1,
      aux_sym_block_comment_token1,
    STATE(306), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(995), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8372] = 3,
    ACTIONS(1032), 1,
      aux_sym_note_token2,
    STATE(327), 1,
      aux_sym_note_repeat2,
    ACTIONS(1046), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8383] = 3,
    ACTIONS(1048), 1,
      aux_sym_note_token2,
    STATE(327), 1,
      aux_sym_note_repeat2,
    ACTIONS(1051), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8394] = 3,
    ACTIONS(1040), 1,
      sym_payee,
    STATE(294), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1053), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8405] = 3,
    ACTIONS(1055), 1,
      aux_sym_note_token2,
    STATE(330), 1,
      aux_sym_note_repeat2,
    ACTIONS(1057), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8416] = 3,
    ACTIONS(1032), 1,
      aux_sym_note_token2,
    STATE(327), 1,
      aux_sym_note_repeat2,
    ACTIONS(1059), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8427] = 3,
    ACTIONS(1061), 1,
      aux_sym_note_token2,
    STATE(332), 1,
      aux_sym_note_repeat2,
    ACTIONS(1059), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8438] = 3,
    ACTIONS(1032), 1,
      aux_sym_note_token2,
    STATE(327), 1,
      aux_sym_note_repeat2,
    ACTIONS(1063), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8449] = 3,
    ACTIONS(1065), 1,
      aux_sym_block_comment_token1,
    STATE(306), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(995), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8460] = 3,
    ACTIONS(1067), 1,
      aux_sym_block_comment_token1,
    STATE(306), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(995), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8471] = 1,
    ACTIONS(1069), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8478] = 3,
    ACTIONS(1071), 1,
      anon_sym_EQ,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8489] = 3,
    ACTIONS(221), 1,
      aux_sym_option_value_token1,
    STATE(337), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1073), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8500] = 3,
    ACTIONS(221), 1,
      aux_sym_word_directive_token1,
    STATE(338), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1076), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8511] = 3,
    ACTIONS(1079), 1,
      sym_time,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8522] = 3,
    ACTIONS(1079), 1,
      sym_time,
    STATE(282), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1081), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8533] = 3,
    ACTIONS(1083), 1,
      sym_time,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8544] = 3,
    ACTIONS(1083), 1,
      sym_time,
    STATE(284), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1085), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8555] = 3,
    ACTIONS(185), 1,
      aux_sym_account_subdirective_token1,
    STATE(343), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1087), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8566] = 3,
    ACTIONS(221), 1,
      sym_query,
    STATE(344), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1090), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8577] = 2,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1093), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8585] = 2,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1095), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8593] = 2,
    STATE(307), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1097), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8601] = 2,
    STATE(200), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1099), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8609] = 2,
    STATE(127), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1101), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8617] = 3,
    ACTIONS(1046), 1,
      anon_sym_LF,
    ACTIONS(1103), 1,
      aux_sym_note_token2,
    STATE(351), 1,
      aux_sym_note_repeat2,
  [8627] = 3,
    ACTIONS(1051), 1,
      anon_sym_LF,
    ACTIONS(1105), 1,
      aux_sym_note_token2,
    STATE(351), 1,
      aux_sym_note_repeat2,
  [8637] = 3,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(803), 1,
      anon_sym_LF,
    STATE(394), 1,
      sym_note,
  [8647] = 3,
    ACTIONS(1108), 1,
      anon_sym_LF,
    ACTIONS(1110), 1,
      anon_sym_SEMI,
    STATE(257), 1,
      sym_note,
  [8657] = 2,
    STATE(194), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1112), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8665] = 3,
    ACTIONS(1059), 1,
      anon_sym_LF,
    ACTIONS(1103), 1,
      aux_sym_note_token2,
    STATE(351), 1,
      aux_sym_note_repeat2,
  [8675] = 3,
    ACTIONS(1059), 1,
      anon_sym_LF,
    ACTIONS(1114), 1,
      aux_sym_note_token2,
    STATE(363), 1,
      aux_sym_note_repeat2,
  [8685] = 2,
    STATE(291), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1116), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8693] = 2,
    STATE(197), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1118), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8701] = 2,
    STATE(186), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1120), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8709] = 2,
    STATE(172), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1122), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8717] = 2,
    STATE(295), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1124), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8725] = 3,
    ACTIONS(1110), 1,
      anon_sym_SEMI,
    ACTIONS(1126), 1,
      anon_sym_LF,
    STATE(248), 1,
      sym_note,
  [8735] = 3,
    ACTIONS(1063), 1,
      anon_sym_LF,
    ACTIONS(1103), 1,
      aux_sym_note_token2,
    STATE(351), 1,
      aux_sym_note_repeat2,
  [8745] = 2,
    STATE(308), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1128), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8753] = 2,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1130), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8761] = 2,
    STATE(320), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1132), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8769] = 2,
    STATE(316), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1134), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8777] = 3,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(1136), 1,
      anon_sym_LF,
    STATE(463), 1,
      sym_note,
  [8787] = 2,
    STATE(35), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1138), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8795] = 2,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1140), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8803] = 2,
    STATE(296), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1142), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8811] = 2,
    STATE(297), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1144), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8819] = 2,
    STATE(322), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1146), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8827] = 2,
    STATE(300), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1148), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8835] = 2,
    STATE(193), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1150), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8843] = 2,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1152), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8851] = 2,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1154), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8859] = 3,
    ACTIONS(1057), 1,
      anon_sym_LF,
    ACTIONS(1156), 1,
      aux_sym_note_token2,
    STATE(355), 1,
      aux_sym_note_repeat2,
  [8869] = 3,
    ACTIONS(778), 1,
      anon_sym_LF,
    ACTIONS(1103), 1,
      aux_sym_note_token2,
    STATE(351), 1,
      aux_sym_note_repeat2,
  [8879] = 3,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(817), 1,
      anon_sym_LF,
    STATE(399), 1,
      sym_note,
  [8889] = 2,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1158), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8897] = 2,
    STATE(119), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1160), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8905] = 2,
    STATE(293), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1162), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8913] = 2,
    ACTIONS(1164), 1,
      aux_sym_option_value_token1,
    STATE(424), 1,
      sym_option_value,
  [8920] = 1,
    ACTIONS(1166), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [8925] = 1,
    ACTIONS(923), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [8930] = 1,
    ACTIONS(1168), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [8935] = 2,
    ACTIONS(799), 1,
      anon_sym_EQ,
    STATE(447), 1,
      sym_effective_date,
  [8942] = 1,
    ACTIONS(1170), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [8947] = 1,
    ACTIONS(902), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [8952] = 2,
    ACTIONS(799), 1,
      anon_sym_EQ,
    STATE(441), 1,
      sym_effective_date,
  [8959] = 2,
    ACTIONS(799), 1,
      anon_sym_EQ,
    STATE(459), 1,
      sym_effective_date,
  [8966] = 2,
    ACTIONS(799), 1,
      anon_sym_EQ,
    STATE(460), 1,
      sym_effective_date,
  [8973] = 1,
    ACTIONS(1172), 1,
      anon_sym_LF,
  [8977] = 1,
    ACTIONS(1174), 1,
      anon_sym_LF,
  [8981] = 1,
    ACTIONS(1176), 1,
      anon_sym_LF,
  [8985] = 1,
    ACTIONS(1178), 1,
      anon_sym_LF,
  [8989] = 1,
    ACTIONS(811), 1,
      anon_sym_LF,
  [8993] = 1,
    ACTIONS(1180), 1,
      anon_sym_LF,
  [8997] = 1,
    ACTIONS(530), 1,
      anon_sym_LF,
  [9001] = 1,
    ACTIONS(588), 1,
      anon_sym_LF,
  [9005] = 1,
    ACTIONS(1182), 1,
      anon_sym_LF,
  [9009] = 1,
    ACTIONS(836), 1,
      anon_sym_LF,
  [9013] = 1,
    ACTIONS(695), 1,
      anon_sym_LF,
  [9017] = 1,
    ACTIONS(1184), 1,
      anon_sym_LF,
  [9021] = 1,
    ACTIONS(1186), 1,
      anon_sym_LF,
  [9025] = 1,
    ACTIONS(1188), 1,
      anon_sym_LF,
  [9029] = 1,
    ACTIONS(1190), 1,
      aux_sym_option_token1,
  [9033] = 1,
    ACTIONS(1192), 1,
      anon_sym_LF,
  [9037] = 1,
    ACTIONS(1194), 1,
      anon_sym_LF,
  [9041] = 1,
    ACTIONS(1196), 1,
      anon_sym_LF,
  [9045] = 1,
    ACTIONS(1198), 1,
      anon_sym_EQ,
  [9049] = 1,
    ACTIONS(1200), 1,
      anon_sym_LF,
  [9053] = 1,
    ACTIONS(1202), 1,
      sym__2d,
  [9057] = 1,
    ACTIONS(1204), 1,
      sym__2d,
  [9061] = 1,
    ACTIONS(1206), 1,
      anon_sym_LF,
  [9065] = 1,
    ACTIONS(1208), 1,
      sym__quantity,
  [9069] = 1,
    ACTIONS(1210), 1,
      anon_sym_LF,
  [9073] = 1,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
  [9077] = 1,
    ACTIONS(1214), 1,
      anon_sym_LF,
  [9081] = 1,
    ACTIONS(709), 1,
      sym__dsep,
  [9085] = 1,
    ACTIONS(1216), 1,
      anon_sym_LF,
  [9089] = 1,
    ACTIONS(1218), 1,
      sym__dsep,
  [9093] = 1,
    ACTIONS(1220), 1,
      anon_sym_LF,
  [9097] = 1,
    ACTIONS(1222), 1,
      anon_sym_RBRACK,
  [9101] = 1,
    ACTIONS(536), 1,
      anon_sym_LF,
  [9105] = 1,
    ACTIONS(876), 1,
      anon_sym_LF,
  [9109] = 1,
    ACTIONS(1224), 1,
      sym__quantity,
  [9113] = 1,
    ACTIONS(1226), 1,
      anon_sym_LF,
  [9117] = 1,
    ACTIONS(1228), 1,
      anon_sym_LF,
  [9121] = 1,
    ACTIONS(1230), 1,
      ts_builtin_sym_end,
  [9125] = 1,
    ACTIONS(1232), 1,
      anon_sym_LF,
  [9129] = 1,
    ACTIONS(1234), 1,
      anon_sym_LF,
  [9133] = 1,
    ACTIONS(1222), 1,
      anon_sym_RPAREN,
  [9137] = 1,
    ACTIONS(1236), 1,
      anon_sym_LF,
  [9141] = 1,
    ACTIONS(1238), 1,
      anon_sym_LF,
  [9145] = 1,
    ACTIONS(1240), 1,
      aux_sym_code_token1,
  [9149] = 1,
    ACTIONS(1242), 1,
      anon_sym_LF,
  [9153] = 1,
    ACTIONS(584), 1,
      anon_sym_LF,
  [9157] = 1,
    ACTIONS(1244), 1,
      anon_sym_LF,
  [9161] = 1,
    ACTIONS(1246), 1,
      anon_sym_RBRACK,
  [9165] = 1,
    ACTIONS(1248), 1,
      anon_sym_LF,
  [9169] = 1,
    ACTIONS(1250), 1,
      sym__2d,
  [9173] = 1,
    ACTIONS(890), 1,
      anon_sym_LF,
  [9177] = 1,
    ACTIONS(1252), 1,
      anon_sym_LF,
  [9181] = 1,
    ACTIONS(1254), 1,
      anon_sym_LF,
  [9185] = 1,
    ACTIONS(1256), 1,
      anon_sym_RBRACK,
  [9189] = 1,
    ACTIONS(513), 1,
      anon_sym_LF,
  [9193] = 1,
    ACTIONS(1258), 1,
      anon_sym_LF,
  [9197] = 1,
    ACTIONS(929), 1,
      sym__dsep,
  [9201] = 1,
    ACTIONS(1260), 1,
      sym_account_name,
  [9205] = 1,
    ACTIONS(485), 1,
      anon_sym_LF,
  [9209] = 1,
    ACTIONS(1262), 1,
      anon_sym_LF,
  [9213] = 1,
    ACTIONS(1264), 1,
      anon_sym_LF,
  [9217] = 1,
    ACTIONS(1266), 1,
      sym__quantity,
  [9221] = 1,
    ACTIONS(1268), 1,
      sym__quantity,
  [9225] = 1,
    ACTIONS(1270), 1,
      sym_account_name,
  [9229] = 1,
    ACTIONS(1272), 1,
      anon_sym_LF,
  [9233] = 1,
    ACTIONS(1274), 1,
      anon_sym_RBRACK,
  [9237] = 1,
    ACTIONS(1276), 1,
      anon_sym_RBRACK,
  [9241] = 1,
    ACTIONS(1278), 1,
      sym__quantity,
  [9245] = 1,
    ACTIONS(1280), 1,
      sym__quantity,
  [9249] = 1,
    ACTIONS(1282), 1,
      anon_sym_LF,
  [9253] = 1,
    ACTIONS(701), 1,
      anon_sym_LF,
  [9257] = 1,
    ACTIONS(1284), 1,
      anon_sym_LF,
  [9261] = 1,
    ACTIONS(1286), 1,
      aux_sym_option_value_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 130,
  [SMALL_STATE(4)] = 260,
  [SMALL_STATE(5)] = 313,
  [SMALL_STATE(6)] = 366,
  [SMALL_STATE(7)] = 419,
  [SMALL_STATE(8)] = 471,
  [SMALL_STATE(9)] = 523,
  [SMALL_STATE(10)] = 575,
  [SMALL_STATE(11)] = 620,
  [SMALL_STATE(12)] = 672,
  [SMALL_STATE(13)] = 722,
  [SMALL_STATE(14)] = 769,
  [SMALL_STATE(15)] = 816,
  [SMALL_STATE(16)] = 863,
  [SMALL_STATE(17)] = 908,
  [SMALL_STATE(18)] = 954,
  [SMALL_STATE(19)] = 1000,
  [SMALL_STATE(20)] = 1046,
  [SMALL_STATE(21)] = 1092,
  [SMALL_STATE(22)] = 1138,
  [SMALL_STATE(23)] = 1184,
  [SMALL_STATE(24)] = 1230,
  [SMALL_STATE(25)] = 1276,
  [SMALL_STATE(26)] = 1322,
  [SMALL_STATE(27)] = 1368,
  [SMALL_STATE(28)] = 1414,
  [SMALL_STATE(29)] = 1454,
  [SMALL_STATE(30)] = 1494,
  [SMALL_STATE(31)] = 1534,
  [SMALL_STATE(32)] = 1571,
  [SMALL_STATE(33)] = 1608,
  [SMALL_STATE(34)] = 1645,
  [SMALL_STATE(35)] = 1682,
  [SMALL_STATE(36)] = 1735,
  [SMALL_STATE(37)] = 1772,
  [SMALL_STATE(38)] = 1809,
  [SMALL_STATE(39)] = 1846,
  [SMALL_STATE(40)] = 1883,
  [SMALL_STATE(41)] = 1920,
  [SMALL_STATE(42)] = 1957,
  [SMALL_STATE(43)] = 1994,
  [SMALL_STATE(44)] = 2031,
  [SMALL_STATE(45)] = 2068,
  [SMALL_STATE(46)] = 2105,
  [SMALL_STATE(47)] = 2142,
  [SMALL_STATE(48)] = 2179,
  [SMALL_STATE(49)] = 2216,
  [SMALL_STATE(50)] = 2253,
  [SMALL_STATE(51)] = 2290,
  [SMALL_STATE(52)] = 2327,
  [SMALL_STATE(53)] = 2364,
  [SMALL_STATE(54)] = 2401,
  [SMALL_STATE(55)] = 2438,
  [SMALL_STATE(56)] = 2475,
  [SMALL_STATE(57)] = 2512,
  [SMALL_STATE(58)] = 2549,
  [SMALL_STATE(59)] = 2586,
  [SMALL_STATE(60)] = 2623,
  [SMALL_STATE(61)] = 2660,
  [SMALL_STATE(62)] = 2697,
  [SMALL_STATE(63)] = 2734,
  [SMALL_STATE(64)] = 2771,
  [SMALL_STATE(65)] = 2808,
  [SMALL_STATE(66)] = 2845,
  [SMALL_STATE(67)] = 2883,
  [SMALL_STATE(68)] = 2921,
  [SMALL_STATE(69)] = 2959,
  [SMALL_STATE(70)] = 2997,
  [SMALL_STATE(71)] = 3035,
  [SMALL_STATE(72)] = 3073,
  [SMALL_STATE(73)] = 3111,
  [SMALL_STATE(74)] = 3149,
  [SMALL_STATE(75)] = 3184,
  [SMALL_STATE(76)] = 3219,
  [SMALL_STATE(77)] = 3254,
  [SMALL_STATE(78)] = 3289,
  [SMALL_STATE(79)] = 3324,
  [SMALL_STATE(80)] = 3359,
  [SMALL_STATE(81)] = 3394,
  [SMALL_STATE(82)] = 3429,
  [SMALL_STATE(83)] = 3464,
  [SMALL_STATE(84)] = 3499,
  [SMALL_STATE(85)] = 3534,
  [SMALL_STATE(86)] = 3569,
  [SMALL_STATE(87)] = 3604,
  [SMALL_STATE(88)] = 3639,
  [SMALL_STATE(89)] = 3674,
  [SMALL_STATE(90)] = 3709,
  [SMALL_STATE(91)] = 3774,
  [SMALL_STATE(92)] = 3839,
  [SMALL_STATE(93)] = 3904,
  [SMALL_STATE(94)] = 3966,
  [SMALL_STATE(95)] = 4028,
  [SMALL_STATE(96)] = 4090,
  [SMALL_STATE(97)] = 4117,
  [SMALL_STATE(98)] = 4144,
  [SMALL_STATE(99)] = 4166,
  [SMALL_STATE(100)] = 4193,
  [SMALL_STATE(101)] = 4222,
  [SMALL_STATE(102)] = 4246,
  [SMALL_STATE(103)] = 4265,
  [SMALL_STATE(104)] = 4306,
  [SMALL_STATE(105)] = 4325,
  [SMALL_STATE(106)] = 4344,
  [SMALL_STATE(107)] = 4385,
  [SMALL_STATE(108)] = 4426,
  [SMALL_STATE(109)] = 4467,
  [SMALL_STATE(110)] = 4499,
  [SMALL_STATE(111)] = 4531,
  [SMALL_STATE(112)] = 4563,
  [SMALL_STATE(113)] = 4595,
  [SMALL_STATE(114)] = 4627,
  [SMALL_STATE(115)] = 4665,
  [SMALL_STATE(116)] = 4697,
  [SMALL_STATE(117)] = 4729,
  [SMALL_STATE(118)] = 4761,
  [SMALL_STATE(119)] = 4799,
  [SMALL_STATE(120)] = 4831,
  [SMALL_STATE(121)] = 4863,
  [SMALL_STATE(122)] = 4895,
  [SMALL_STATE(123)] = 4923,
  [SMALL_STATE(124)] = 4961,
  [SMALL_STATE(125)] = 4993,
  [SMALL_STATE(126)] = 5025,
  [SMALL_STATE(127)] = 5057,
  [SMALL_STATE(128)] = 5089,
  [SMALL_STATE(129)] = 5121,
  [SMALL_STATE(130)] = 5153,
  [SMALL_STATE(131)] = 5191,
  [SMALL_STATE(132)] = 5226,
  [SMALL_STATE(133)] = 5258,
  [SMALL_STATE(134)] = 5274,
  [SMALL_STATE(135)] = 5306,
  [SMALL_STATE(136)] = 5338,
  [SMALL_STATE(137)] = 5368,
  [SMALL_STATE(138)] = 5384,
  [SMALL_STATE(139)] = 5416,
  [SMALL_STATE(140)] = 5448,
  [SMALL_STATE(141)] = 5480,
  [SMALL_STATE(142)] = 5509,
  [SMALL_STATE(143)] = 5538,
  [SMALL_STATE(144)] = 5567,
  [SMALL_STATE(145)] = 5596,
  [SMALL_STATE(146)] = 5625,
  [SMALL_STATE(147)] = 5654,
  [SMALL_STATE(148)] = 5678,
  [SMALL_STATE(149)] = 5704,
  [SMALL_STATE(150)] = 5724,
  [SMALL_STATE(151)] = 5742,
  [SMALL_STATE(152)] = 5758,
  [SMALL_STATE(153)] = 5774,
  [SMALL_STATE(154)] = 5795,
  [SMALL_STATE(155)] = 5818,
  [SMALL_STATE(156)] = 5841,
  [SMALL_STATE(157)] = 5864,
  [SMALL_STATE(158)] = 5883,
  [SMALL_STATE(159)] = 5904,
  [SMALL_STATE(160)] = 5927,
  [SMALL_STATE(161)] = 5950,
  [SMALL_STATE(162)] = 5973,
  [SMALL_STATE(163)] = 5996,
  [SMALL_STATE(164)] = 6019,
  [SMALL_STATE(165)] = 6042,
  [SMALL_STATE(166)] = 6065,
  [SMALL_STATE(167)] = 6088,
  [SMALL_STATE(168)] = 6109,
  [SMALL_STATE(169)] = 6132,
  [SMALL_STATE(170)] = 6155,
  [SMALL_STATE(171)] = 6168,
  [SMALL_STATE(172)] = 6191,
  [SMALL_STATE(173)] = 6214,
  [SMALL_STATE(174)] = 6235,
  [SMALL_STATE(175)] = 6258,
  [SMALL_STATE(176)] = 6281,
  [SMALL_STATE(177)] = 6302,
  [SMALL_STATE(178)] = 6325,
  [SMALL_STATE(179)] = 6346,
  [SMALL_STATE(180)] = 6369,
  [SMALL_STATE(181)] = 6392,
  [SMALL_STATE(182)] = 6415,
  [SMALL_STATE(183)] = 6434,
  [SMALL_STATE(184)] = 6454,
  [SMALL_STATE(185)] = 6474,
  [SMALL_STATE(186)] = 6496,
  [SMALL_STATE(187)] = 6512,
  [SMALL_STATE(188)] = 6532,
  [SMALL_STATE(189)] = 6544,
  [SMALL_STATE(190)] = 6556,
  [SMALL_STATE(191)] = 6576,
  [SMALL_STATE(192)] = 6598,
  [SMALL_STATE(193)] = 6620,
  [SMALL_STATE(194)] = 6642,
  [SMALL_STATE(195)] = 6658,
  [SMALL_STATE(196)] = 6678,
  [SMALL_STATE(197)] = 6698,
  [SMALL_STATE(198)] = 6720,
  [SMALL_STATE(199)] = 6740,
  [SMALL_STATE(200)] = 6762,
  [SMALL_STATE(201)] = 6778,
  [SMALL_STATE(202)] = 6800,
  [SMALL_STATE(203)] = 6812,
  [SMALL_STATE(204)] = 6828,
  [SMALL_STATE(205)] = 6848,
  [SMALL_STATE(206)] = 6868,
  [SMALL_STATE(207)] = 6890,
  [SMALL_STATE(208)] = 6912,
  [SMALL_STATE(209)] = 6932,
  [SMALL_STATE(210)] = 6946,
  [SMALL_STATE(211)] = 6956,
  [SMALL_STATE(212)] = 6978,
  [SMALL_STATE(213)] = 7000,
  [SMALL_STATE(214)] = 7013,
  [SMALL_STATE(215)] = 7024,
  [SMALL_STATE(216)] = 7041,
  [SMALL_STATE(217)] = 7052,
  [SMALL_STATE(218)] = 7063,
  [SMALL_STATE(219)] = 7080,
  [SMALL_STATE(220)] = 7097,
  [SMALL_STATE(221)] = 7114,
  [SMALL_STATE(222)] = 7129,
  [SMALL_STATE(223)] = 7140,
  [SMALL_STATE(224)] = 7157,
  [SMALL_STATE(225)] = 7172,
  [SMALL_STATE(226)] = 7189,
  [SMALL_STATE(227)] = 7206,
  [SMALL_STATE(228)] = 7223,
  [SMALL_STATE(229)] = 7240,
  [SMALL_STATE(230)] = 7257,
  [SMALL_STATE(231)] = 7274,
  [SMALL_STATE(232)] = 7291,
  [SMALL_STATE(233)] = 7308,
  [SMALL_STATE(234)] = 7327,
  [SMALL_STATE(235)] = 7346,
  [SMALL_STATE(236)] = 7363,
  [SMALL_STATE(237)] = 7380,
  [SMALL_STATE(238)] = 7389,
  [SMALL_STATE(239)] = 7406,
  [SMALL_STATE(240)] = 7418,
  [SMALL_STATE(241)] = 7428,
  [SMALL_STATE(242)] = 7440,
  [SMALL_STATE(243)] = 7450,
  [SMALL_STATE(244)] = 7462,
  [SMALL_STATE(245)] = 7476,
  [SMALL_STATE(246)] = 7488,
  [SMALL_STATE(247)] = 7496,
  [SMALL_STATE(248)] = 7506,
  [SMALL_STATE(249)] = 7518,
  [SMALL_STATE(250)] = 7526,
  [SMALL_STATE(251)] = 7540,
  [SMALL_STATE(252)] = 7552,
  [SMALL_STATE(253)] = 7564,
  [SMALL_STATE(254)] = 7574,
  [SMALL_STATE(255)] = 7588,
  [SMALL_STATE(256)] = 7596,
  [SMALL_STATE(257)] = 7608,
  [SMALL_STATE(258)] = 7620,
  [SMALL_STATE(259)] = 7634,
  [SMALL_STATE(260)] = 7646,
  [SMALL_STATE(261)] = 7660,
  [SMALL_STATE(262)] = 7672,
  [SMALL_STATE(263)] = 7686,
  [SMALL_STATE(264)] = 7698,
  [SMALL_STATE(265)] = 7712,
  [SMALL_STATE(266)] = 7726,
  [SMALL_STATE(267)] = 7740,
  [SMALL_STATE(268)] = 7748,
  [SMALL_STATE(269)] = 7762,
  [SMALL_STATE(270)] = 7770,
  [SMALL_STATE(271)] = 7784,
  [SMALL_STATE(272)] = 7798,
  [SMALL_STATE(273)] = 7812,
  [SMALL_STATE(274)] = 7822,
  [SMALL_STATE(275)] = 7832,
  [SMALL_STATE(276)] = 7844,
  [SMALL_STATE(277)] = 7854,
  [SMALL_STATE(278)] = 7864,
  [SMALL_STATE(279)] = 7878,
  [SMALL_STATE(280)] = 7888,
  [SMALL_STATE(281)] = 7899,
  [SMALL_STATE(282)] = 7912,
  [SMALL_STATE(283)] = 7923,
  [SMALL_STATE(284)] = 7934,
  [SMALL_STATE(285)] = 7945,
  [SMALL_STATE(286)] = 7952,
  [SMALL_STATE(287)] = 7959,
  [SMALL_STATE(288)] = 7970,
  [SMALL_STATE(289)] = 7981,
  [SMALL_STATE(290)] = 7992,
  [SMALL_STATE(291)] = 8003,
  [SMALL_STATE(292)] = 8014,
  [SMALL_STATE(293)] = 8025,
  [SMALL_STATE(294)] = 8036,
  [SMALL_STATE(295)] = 8047,
  [SMALL_STATE(296)] = 8058,
  [SMALL_STATE(297)] = 8069,
  [SMALL_STATE(298)] = 8080,
  [SMALL_STATE(299)] = 8091,
  [SMALL_STATE(300)] = 8102,
  [SMALL_STATE(301)] = 8113,
  [SMALL_STATE(302)] = 8124,
  [SMALL_STATE(303)] = 8135,
  [SMALL_STATE(304)] = 8146,
  [SMALL_STATE(305)] = 8157,
  [SMALL_STATE(306)] = 8168,
  [SMALL_STATE(307)] = 8179,
  [SMALL_STATE(308)] = 8190,
  [SMALL_STATE(309)] = 8201,
  [SMALL_STATE(310)] = 8208,
  [SMALL_STATE(311)] = 8219,
  [SMALL_STATE(312)] = 8230,
  [SMALL_STATE(313)] = 8241,
  [SMALL_STATE(314)] = 8252,
  [SMALL_STATE(315)] = 8263,
  [SMALL_STATE(316)] = 8270,
  [SMALL_STATE(317)] = 8281,
  [SMALL_STATE(318)] = 8292,
  [SMALL_STATE(319)] = 8303,
  [SMALL_STATE(320)] = 8314,
  [SMALL_STATE(321)] = 8325,
  [SMALL_STATE(322)] = 8332,
  [SMALL_STATE(323)] = 8343,
  [SMALL_STATE(324)] = 8354,
  [SMALL_STATE(325)] = 8361,
  [SMALL_STATE(326)] = 8372,
  [SMALL_STATE(327)] = 8383,
  [SMALL_STATE(328)] = 8394,
  [SMALL_STATE(329)] = 8405,
  [SMALL_STATE(330)] = 8416,
  [SMALL_STATE(331)] = 8427,
  [SMALL_STATE(332)] = 8438,
  [SMALL_STATE(333)] = 8449,
  [SMALL_STATE(334)] = 8460,
  [SMALL_STATE(335)] = 8471,
  [SMALL_STATE(336)] = 8478,
  [SMALL_STATE(337)] = 8489,
  [SMALL_STATE(338)] = 8500,
  [SMALL_STATE(339)] = 8511,
  [SMALL_STATE(340)] = 8522,
  [SMALL_STATE(341)] = 8533,
  [SMALL_STATE(342)] = 8544,
  [SMALL_STATE(343)] = 8555,
  [SMALL_STATE(344)] = 8566,
  [SMALL_STATE(345)] = 8577,
  [SMALL_STATE(346)] = 8585,
  [SMALL_STATE(347)] = 8593,
  [SMALL_STATE(348)] = 8601,
  [SMALL_STATE(349)] = 8609,
  [SMALL_STATE(350)] = 8617,
  [SMALL_STATE(351)] = 8627,
  [SMALL_STATE(352)] = 8637,
  [SMALL_STATE(353)] = 8647,
  [SMALL_STATE(354)] = 8657,
  [SMALL_STATE(355)] = 8665,
  [SMALL_STATE(356)] = 8675,
  [SMALL_STATE(357)] = 8685,
  [SMALL_STATE(358)] = 8693,
  [SMALL_STATE(359)] = 8701,
  [SMALL_STATE(360)] = 8709,
  [SMALL_STATE(361)] = 8717,
  [SMALL_STATE(362)] = 8725,
  [SMALL_STATE(363)] = 8735,
  [SMALL_STATE(364)] = 8745,
  [SMALL_STATE(365)] = 8753,
  [SMALL_STATE(366)] = 8761,
  [SMALL_STATE(367)] = 8769,
  [SMALL_STATE(368)] = 8777,
  [SMALL_STATE(369)] = 8787,
  [SMALL_STATE(370)] = 8795,
  [SMALL_STATE(371)] = 8803,
  [SMALL_STATE(372)] = 8811,
  [SMALL_STATE(373)] = 8819,
  [SMALL_STATE(374)] = 8827,
  [SMALL_STATE(375)] = 8835,
  [SMALL_STATE(376)] = 8843,
  [SMALL_STATE(377)] = 8851,
  [SMALL_STATE(378)] = 8859,
  [SMALL_STATE(379)] = 8869,
  [SMALL_STATE(380)] = 8879,
  [SMALL_STATE(381)] = 8889,
  [SMALL_STATE(382)] = 8897,
  [SMALL_STATE(383)] = 8905,
  [SMALL_STATE(384)] = 8913,
  [SMALL_STATE(385)] = 8920,
  [SMALL_STATE(386)] = 8925,
  [SMALL_STATE(387)] = 8930,
  [SMALL_STATE(388)] = 8935,
  [SMALL_STATE(389)] = 8942,
  [SMALL_STATE(390)] = 8947,
  [SMALL_STATE(391)] = 8952,
  [SMALL_STATE(392)] = 8959,
  [SMALL_STATE(393)] = 8966,
  [SMALL_STATE(394)] = 8973,
  [SMALL_STATE(395)] = 8977,
  [SMALL_STATE(396)] = 8981,
  [SMALL_STATE(397)] = 8985,
  [SMALL_STATE(398)] = 8989,
  [SMALL_STATE(399)] = 8993,
  [SMALL_STATE(400)] = 8997,
  [SMALL_STATE(401)] = 9001,
  [SMALL_STATE(402)] = 9005,
  [SMALL_STATE(403)] = 9009,
  [SMALL_STATE(404)] = 9013,
  [SMALL_STATE(405)] = 9017,
  [SMALL_STATE(406)] = 9021,
  [SMALL_STATE(407)] = 9025,
  [SMALL_STATE(408)] = 9029,
  [SMALL_STATE(409)] = 9033,
  [SMALL_STATE(410)] = 9037,
  [SMALL_STATE(411)] = 9041,
  [SMALL_STATE(412)] = 9045,
  [SMALL_STATE(413)] = 9049,
  [SMALL_STATE(414)] = 9053,
  [SMALL_STATE(415)] = 9057,
  [SMALL_STATE(416)] = 9061,
  [SMALL_STATE(417)] = 9065,
  [SMALL_STATE(418)] = 9069,
  [SMALL_STATE(419)] = 9073,
  [SMALL_STATE(420)] = 9077,
  [SMALL_STATE(421)] = 9081,
  [SMALL_STATE(422)] = 9085,
  [SMALL_STATE(423)] = 9089,
  [SMALL_STATE(424)] = 9093,
  [SMALL_STATE(425)] = 9097,
  [SMALL_STATE(426)] = 9101,
  [SMALL_STATE(427)] = 9105,
  [SMALL_STATE(428)] = 9109,
  [SMALL_STATE(429)] = 9113,
  [SMALL_STATE(430)] = 9117,
  [SMALL_STATE(431)] = 9121,
  [SMALL_STATE(432)] = 9125,
  [SMALL_STATE(433)] = 9129,
  [SMALL_STATE(434)] = 9133,
  [SMALL_STATE(435)] = 9137,
  [SMALL_STATE(436)] = 9141,
  [SMALL_STATE(437)] = 9145,
  [SMALL_STATE(438)] = 9149,
  [SMALL_STATE(439)] = 9153,
  [SMALL_STATE(440)] = 9157,
  [SMALL_STATE(441)] = 9161,
  [SMALL_STATE(442)] = 9165,
  [SMALL_STATE(443)] = 9169,
  [SMALL_STATE(444)] = 9173,
  [SMALL_STATE(445)] = 9177,
  [SMALL_STATE(446)] = 9181,
  [SMALL_STATE(447)] = 9185,
  [SMALL_STATE(448)] = 9189,
  [SMALL_STATE(449)] = 9193,
  [SMALL_STATE(450)] = 9197,
  [SMALL_STATE(451)] = 9201,
  [SMALL_STATE(452)] = 9205,
  [SMALL_STATE(453)] = 9209,
  [SMALL_STATE(454)] = 9213,
  [SMALL_STATE(455)] = 9217,
  [SMALL_STATE(456)] = 9221,
  [SMALL_STATE(457)] = 9225,
  [SMALL_STATE(458)] = 9229,
  [SMALL_STATE(459)] = 9233,
  [SMALL_STATE(460)] = 9237,
  [SMALL_STATE(461)] = 9241,
  [SMALL_STATE(462)] = 9245,
  [SMALL_STATE(463)] = 9249,
  [SMALL_STATE(464)] = 9253,
  [SMALL_STATE(465)] = 9257,
  [SMALL_STATE(466)] = 9261,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(318),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(413),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(364),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(347),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(348),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(360),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(369),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automated_xact, 5, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automated_xact, 5, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 8, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 8, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 6, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 6, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 10, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 10, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_quantity, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_quantity, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 15, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 15, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 16, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 16, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 4, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 6, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 6, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 5, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 6, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 7, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 7, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 7, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [729] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 3, 0, 0),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 3, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 4, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 4, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 5, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 5, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 1, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 3, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 3, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [821] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [833] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_date, 2, 0, 0),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7, 0, 0),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2, 0, 0),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4, 0, 0),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3, 0, 0),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1, 0, 0),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [906] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, 0, 3),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, 0, 1),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5, 0, 0),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interval_date_spec, 3, 0, 0),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_spec, 1, 0, 0),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 2, 0, 0),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3, 0, 0),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [997] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2, 0, 0),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_date_spec, 3, 0, 0),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3, 0, 0),
  [1048] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0), SHIFT_REPEAT(327),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, 0, 0),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, 0, 0),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1073] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [1076] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1087] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [1090] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0), SHIFT_REPEAT(351),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interval_date_spec, 1, 0, 2),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 3, 0, 0),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interval_date_spec, 7, 0, 0),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10, 0, 0),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5, 0, 0),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1, 0, 0),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5, 0, 0),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3, 0, 0),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1, 0, 0),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3, 0, 0),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5, 0, 0),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8, 0, 0),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9, 0, 0),
  [1230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1, 0, 0),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4, 0, 0),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7, 0, 0),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6, 0, 0),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1, 0, 0),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3, 0, 0),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
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

TS_PUBLIC const TSLanguage *tree_sitter_ledger(void) {
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
