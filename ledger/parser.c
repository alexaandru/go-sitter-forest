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
#define STATE_COUNT 492
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
  anon_sym_PLUS = 91,
  sym__quantity = 92,
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
  [anon_sym_PLUS] = "+",
  [sym__quantity] = "_quantity",
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym__quantity] = sym__quantity,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym__quantity] = {
    .visible = false,
    .named = true,
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
  [16] = 16,
  [17] = 17,
  [18] = 10,
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
  [32] = 30,
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
  [65] = 28,
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
  [98] = 10,
  [99] = 10,
  [100] = 58,
  [101] = 13,
  [102] = 14,
  [103] = 11,
  [104] = 12,
  [105] = 10,
  [106] = 30,
  [107] = 28,
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
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 61,
  [142] = 64,
  [143] = 62,
  [144] = 144,
  [145] = 63,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 10,
  [153] = 153,
  [154] = 154,
  [155] = 10,
  [156] = 156,
  [157] = 10,
  [158] = 153,
  [159] = 153,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 12,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 13,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 14,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 11,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 185,
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
  [209] = 191,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 10,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 204,
  [221] = 221,
  [222] = 222,
  [223] = 192,
  [224] = 224,
  [225] = 225,
  [226] = 224,
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
  [246] = 202,
  [247] = 233,
  [248] = 248,
  [249] = 240,
  [250] = 10,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 248,
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
  [286] = 279,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 289,
  [291] = 291,
  [292] = 253,
  [293] = 293,
  [294] = 291,
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
  [334] = 334,
  [335] = 10,
  [336] = 336,
  [337] = 10,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
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
  [355] = 10,
  [356] = 10,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 10,
  [361] = 284,
  [362] = 362,
  [363] = 357,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 343,
  [368] = 368,
  [369] = 344,
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
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 350,
  [384] = 384,
  [385] = 351,
  [386] = 386,
  [387] = 387,
  [388] = 348,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 352,
  [399] = 399,
  [400] = 339,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 404,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 409,
  [412] = 410,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 415,
  [418] = 416,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 421,
  [423] = 421,
  [424] = 413,
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
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 434,
  [482] = 482,
  [483] = 483,
  [484] = 428,
  [485] = 448,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 477,
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
        '+', 576,
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
        '+', 576,
        '-', 355,
        ';', 567,
        '=', 361,
        '@', 772,
        '{', 767,
        '}', 769,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
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
        '+', 576,
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
        '}', 768,
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\t', 780,
        ' ', 774,
        '+', 576,
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
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
      if (lookahead == '\t') ADVANCE(786);
      if (lookahead == ' ') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(392);
      END_STATE();
    case 17:
      if (lookahead == '\t') ADVANCE(781);
      if (lookahead == ' ') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(55);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
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
        '}', 154,
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
      if (lookahead == 'd') ADVANCE(343);
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
      if (lookahead == 'd') ADVANCE(344);
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
      if (lookahead == 'n') ADVANCE(329);
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
      if (lookahead == 's') ADVANCE(330);
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
      if (lookahead == 't') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(354);
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
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__quantity);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
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
  [13] = {.lex_state = 268},
  [14] = {.lex_state = 268},
  [15] = {.lex_state = 269},
  [16] = {.lex_state = 269},
  [17] = {.lex_state = 269},
  [18] = {.lex_state = 268},
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
  [29] = {.lex_state = 269},
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
  [66] = {.lex_state = 269},
  [67] = {.lex_state = 269},
  [68] = {.lex_state = 340},
  [69] = {.lex_state = 340},
  [70] = {.lex_state = 340},
  [71] = {.lex_state = 340},
  [72] = {.lex_state = 340},
  [73] = {.lex_state = 340},
  [74] = {.lex_state = 340},
  [75] = {.lex_state = 340},
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
  [90] = {.lex_state = 269},
  [91] = {.lex_state = 269},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 0},
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
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 277},
  [162] = {.lex_state = 278},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 277},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 277},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 278},
  [170] = {.lex_state = 278},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 269},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 269},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 278},
  [178] = {.lex_state = 269},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 269},
  [183] = {.lex_state = 269},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 278},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 277},
  [188] = {.lex_state = 277},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 12},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 12},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 12},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 12},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 20},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 277},
  [234] = {.lex_state = 269},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 277},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 20},
  [247] = {.lex_state = 278},
  [248] = {.lex_state = 7},
  [249] = {.lex_state = 278},
  [250] = {.lex_state = 12},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 18},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 13},
  [259] = {.lex_state = 13},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 20},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 269},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 13},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 13},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 13},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 13},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 13},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 12},
  [285] = {.lex_state = 18},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 13},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 13},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 269},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 5},
  [304] = {.lex_state = 269},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 3},
  [308] = {.lex_state = 16},
  [309] = {.lex_state = 18},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 8},
  [314] = {.lex_state = 8},
  [315] = {.lex_state = 8},
  [316] = {.lex_state = 8},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 8},
  [319] = {.lex_state = 5},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 269},
  [322] = {.lex_state = 269},
  [323] = {.lex_state = 17},
  [324] = {.lex_state = 17},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 8},
  [327] = {.lex_state = 5},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 8},
  [334] = {.lex_state = 8},
  [335] = {.lex_state = 279},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 19},
  [338] = {.lex_state = 279},
  [339] = {.lex_state = 10},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 4},
  [342] = {.lex_state = 269},
  [343] = {.lex_state = 10},
  [344] = {.lex_state = 10},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 17},
  [347] = {.lex_state = 17},
  [348] = {.lex_state = 10},
  [349] = {.lex_state = 17},
  [350] = {.lex_state = 10},
  [351] = {.lex_state = 10},
  [352] = {.lex_state = 10},
  [353] = {.lex_state = 279},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 18},
  [356] = {.lex_state = 16},
  [357] = {.lex_state = 279},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 19},
  [360] = {.lex_state = 17},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 279},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 21},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 21},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 21},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 21},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 21},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 21},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 21},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 267},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 5},
  [410] = {.lex_state = 5},
  [411] = {.lex_state = 5},
  [412] = {.lex_state = 5},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 5},
  [416] = {.lex_state = 5},
  [417] = {.lex_state = 5},
  [418] = {.lex_state = 5},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 5},
  [422] = {.lex_state = 5},
  [423] = {.lex_state = 5},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 266},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 2},
  [443] = {.lex_state = 2},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 13},
  [455] = {.lex_state = 265},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 563},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 13},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 265},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 267},
  [475] = {.lex_state = 2},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 13},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
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
    [sym_source_file] = STATE(446),
    [sym_journal_item] = STATE(2),
    [sym_block_comment] = STATE(86),
    [sym_test] = STATE(86),
    [sym_option] = STATE(85),
    [sym_directive] = STATE(86),
    [sym_account_directive] = STATE(85),
    [sym_commodity_directive] = STATE(85),
    [sym_tag_directive] = STATE(85),
    [sym_word_directive] = STATE(430),
    [sym_char_directive] = STATE(430),
    [sym_check_in] = STATE(463),
    [sym_check_out] = STATE(463),
    [sym_xact] = STATE(86),
    [sym_plain_xact] = STATE(78),
    [sym_periodic_xact] = STATE(78),
    [sym_automated_xact] = STATE(78),
    [sym__xact_date] = STATE(230),
    [sym_date] = STATE(231),
    [sym__4d] = STATE(443),
    [sym__single_date] = STATE(232),
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
    STATE(230), 1,
      sym__xact_date,
    STATE(231), 1,
      sym_date,
    STATE(232), 1,
      sym__single_date,
    STATE(443), 1,
      sym__4d,
    ACTIONS(55), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(430), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(463), 2,
      sym_check_in,
      sym_check_out,
    STATE(78), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(85), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(86), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
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
    STATE(230), 1,
      sym__xact_date,
    STATE(231), 1,
      sym_date,
    STATE(232), 1,
      sym__single_date,
    STATE(443), 1,
      sym__4d,
    ACTIONS(142), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(430), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(463), 2,
      sym_check_in,
      sym_check_out,
    STATE(78), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(85), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(86), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
  [260] = 6,
    STATE(135), 1,
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
    STATE(50), 5,
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
    STATE(135), 1,
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
    STATE(50), 5,
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
    STATE(135), 1,
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
    STATE(50), 5,
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
    STATE(154), 1,
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
    STATE(154), 1,
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
    STATE(154), 1,
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
    STATE(13), 1,
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
  [672] = 7,
    ACTIONS(194), 1,
      aux_sym_commodity_token1,
    STATE(14), 1,
      aux_sym_whitespace_repeat1,
    STATE(62), 1,
      sym_commodity,
    ACTIONS(196), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(204), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(200), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
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
  [724] = 6,
    ACTIONS(194), 1,
      aux_sym_commodity_token1,
    STATE(18), 1,
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
  [774] = 6,
    ACTIONS(194), 1,
      aux_sym_commodity_token1,
    STATE(18), 1,
      aux_sym_whitespace_repeat1,
    STATE(63), 1,
      sym_commodity,
    ACTIONS(196), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(206), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(208), 23,
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
  [824] = 5,
    STATE(234), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(214), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(212), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(15), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(210), 27,
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
  [871] = 5,
    STATE(234), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(221), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(219), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(17), 3,
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
  [918] = 5,
    STATE(234), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(221), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(225), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(15), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(223), 27,
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
  [965] = 4,
    STATE(18), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(229), 2,
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
    ACTIONS(227), 24,
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
  [1010] = 5,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(21), 2,
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
  [1056] = 5,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(240), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(238), 27,
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
  [1102] = 5,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(246), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(244), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(242), 27,
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
  [1148] = 5,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(251), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(249), 27,
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
  [1194] = 5,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(255), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(253), 27,
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
  [1240] = 5,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(259), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(257), 27,
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
  [1286] = 5,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(263), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(261), 27,
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
  [1332] = 5,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(267), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(265), 27,
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
  [1378] = 5,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(271), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(269), 27,
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
  [1424] = 2,
    ACTIONS(273), 11,
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
    ACTIONS(275), 24,
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
  [1464] = 5,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(279), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(277), 27,
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
  [1510] = 2,
    ACTIONS(281), 11,
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
    ACTIONS(283), 24,
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
  [1550] = 5,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(287), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(285), 27,
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
  [1596] = 2,
    ACTIONS(283), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(281), 29,
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
  [1633] = 2,
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
  [1670] = 2,
    ACTIONS(291), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(289), 29,
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
  [1707] = 10,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    STATE(272), 1,
      sym__interval_period,
    STATE(376), 1,
      sym_interval,
    STATE(407), 1,
      sym__interval_date_spec,
    STATE(408), 1,
      sym__relative_date_spec,
    ACTIONS(295), 2,
      aux_sym__interval_date_spec_token1,
      aux_sym__interval_date_spec_token2,
    ACTIONS(301), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(297), 3,
      aux_sym__interval_date_spec_token3,
      aux_sym__interval_date_spec_token4,
      aux_sym__interval_date_spec_token5,
    ACTIONS(299), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
    ACTIONS(293), 17,
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
  [1760] = 2,
    ACTIONS(305), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(303), 29,
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
  [1797] = 2,
    ACTIONS(309), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(307), 29,
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
  [1834] = 2,
    ACTIONS(313), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(311), 29,
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
  [1871] = 2,
    ACTIONS(317), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(315), 29,
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
  [1908] = 2,
    ACTIONS(321), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(319), 29,
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
  [1945] = 2,
    ACTIONS(325), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(323), 29,
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
  [1982] = 2,
    ACTIONS(329), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(327), 29,
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
  [2019] = 2,
    ACTIONS(333), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(331), 29,
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
  [2056] = 2,
    ACTIONS(337), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(335), 29,
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
  [2093] = 2,
    ACTIONS(341), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(339), 29,
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
  [2130] = 2,
    ACTIONS(345), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(343), 29,
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
  [2167] = 2,
    ACTIONS(349), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(347), 29,
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
  [2204] = 2,
    ACTIONS(353), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(351), 29,
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
  [2241] = 2,
    ACTIONS(212), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(210), 29,
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
  [2278] = 2,
    ACTIONS(357), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(355), 29,
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
  [2315] = 2,
    ACTIONS(361), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(359), 29,
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
  [2352] = 2,
    ACTIONS(365), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(363), 29,
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
  [2389] = 2,
    ACTIONS(369), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(367), 29,
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
  [2426] = 2,
    ACTIONS(373), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(371), 29,
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
  [2463] = 2,
    ACTIONS(377), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(375), 29,
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
  [2500] = 2,
    ACTIONS(381), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(379), 29,
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
  [2537] = 2,
    ACTIONS(385), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(383), 29,
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
  [2574] = 2,
    ACTIONS(389), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(387), 29,
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
  [2611] = 2,
    ACTIONS(393), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(391), 29,
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
  [2648] = 2,
    ACTIONS(397), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(395), 29,
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
  [2685] = 2,
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
  [2722] = 2,
    ACTIONS(208), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(206), 29,
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
  [2759] = 2,
    ACTIONS(401), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(399), 29,
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
  [2796] = 2,
    ACTIONS(405), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(403), 29,
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
  [2833] = 2,
    ACTIONS(275), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(273), 29,
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
  [2870] = 2,
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
  [2907] = 2,
    ACTIONS(409), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(407), 29,
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
  [2944] = 3,
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
  [2982] = 3,
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
  [3020] = 3,
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
  [3058] = 3,
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
  [3096] = 3,
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
  [3134] = 3,
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
  [3172] = 3,
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
  [3210] = 3,
    ACTIONS(457), 1,
      aux_sym_block_comment_token1,
    ACTIONS(453), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(455), 27,
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
  [3248] = 2,
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
  [3283] = 2,
    ACTIONS(461), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(459), 27,
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
  [3318] = 2,
    ACTIONS(465), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(463), 27,
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
  [3353] = 2,
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
  [3388] = 2,
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
  [3423] = 2,
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
  [3458] = 2,
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
  [3493] = 2,
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
  [3528] = 2,
    ACTIONS(469), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(467), 27,
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
  [3563] = 2,
    ACTIONS(473), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(471), 27,
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
  [3598] = 2,
    ACTIONS(477), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(475), 27,
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
  [3633] = 2,
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
  [3668] = 2,
    ACTIONS(481), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(479), 27,
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
  [3703] = 2,
    ACTIONS(485), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(483), 27,
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
  [3738] = 2,
    ACTIONS(489), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(487), 27,
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
  [3773] = 2,
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
  [3808] = 20,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      sym__quantity,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(103), 1,
      sym_quantity,
    STATE(108), 1,
      sym_amount,
    STATE(136), 1,
      sym_lot_price,
    STATE(173), 1,
      sym_price,
    STATE(220), 1,
      sym_commodity,
    STATE(225), 1,
      sym_balance_assertion,
    STATE(465), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3872] = 20,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      sym__quantity,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    ACTIONS(515), 1,
      anon_sym_LF,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(103), 1,
      sym_quantity,
    STATE(110), 1,
      sym_amount,
    STATE(144), 1,
      sym_lot_price,
    STATE(186), 1,
      sym_price,
    STATE(220), 1,
      sym_commodity,
    STATE(235), 1,
      sym_balance_assertion,
    STATE(456), 1,
      sym_note,
    ACTIONS(517), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3936] = 20,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      sym__quantity,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    ACTIONS(519), 1,
      anon_sym_LF,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(103), 1,
      sym_quantity,
    STATE(111), 1,
      sym_amount,
    STATE(137), 1,
      sym_lot_price,
    STATE(163), 1,
      sym_price,
    STATE(220), 1,
      sym_commodity,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(490), 1,
      sym_note,
    ACTIONS(521), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4000] = 19,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      sym__quantity,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    STATE(103), 1,
      sym_quantity,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(109), 1,
      sym_amount,
    STATE(138), 1,
      sym_lot_price,
    STATE(167), 1,
      sym_price,
    STATE(220), 1,
      sym_commodity,
    STATE(237), 1,
      sym_balance_assertion,
    STATE(478), 1,
      sym_note,
    ACTIONS(523), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4061] = 19,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      sym__quantity,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    STATE(103), 1,
      sym_quantity,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(111), 1,
      sym_amount,
    STATE(137), 1,
      sym_lot_price,
    STATE(163), 1,
      sym_price,
    STATE(220), 1,
      sym_commodity,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(490), 1,
      sym_note,
    ACTIONS(523), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4122] = 19,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      sym__quantity,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    STATE(103), 1,
      sym_quantity,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(110), 1,
      sym_amount,
    STATE(144), 1,
      sym_lot_price,
    STATE(186), 1,
      sym_price,
    STATE(220), 1,
      sym_commodity,
    STATE(235), 1,
      sym_balance_assertion,
    STATE(456), 1,
      sym_note,
    ACTIONS(523), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4183] = 4,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(525), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(227), 4,
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
  [4210] = 4,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(528), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(185), 5,
      sym_comment,
      anon_sym_DASH,
      aux_sym_tag_directive_token1,
      anon_sym_PLUS,
      sym__quantity,
    ACTIONS(227), 10,
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
  [4237] = 2,
    ACTIONS(389), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(387), 14,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      sym__quantity,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4259] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(143), 1,
      sym_commodity,
    ACTIONS(202), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(503), 3,
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
  [4286] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(145), 1,
      sym_commodity,
    ACTIONS(208), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(206), 8,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4313] = 6,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(141), 1,
      sym_commodity,
    ACTIONS(531), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(192), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(503), 3,
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
  [4342] = 6,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    STATE(143), 1,
      sym_commodity,
    ACTIONS(533), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(202), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(200), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
  [4371] = 4,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(227), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(535), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(185), 10,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      sym__quantity,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [4395] = 2,
    ACTIONS(283), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(281), 11,
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
  [4414] = 2,
    ACTIONS(275), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(273), 11,
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
  [4433] = 13,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    ACTIONS(515), 1,
      anon_sym_LF,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    STATE(144), 1,
      sym_lot_price,
    STATE(186), 1,
      sym_price,
    STATE(235), 1,
      sym_balance_assertion,
    STATE(456), 1,
      sym_note,
    ACTIONS(538), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4474] = 13,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    ACTIONS(540), 1,
      anon_sym_LF,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    STATE(140), 1,
      sym_lot_price,
    STATE(171), 1,
      sym_price,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(469), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4515] = 13,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    ACTIONS(519), 1,
      anon_sym_LF,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    STATE(137), 1,
      sym_lot_price,
    STATE(163), 1,
      sym_price,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(490), 1,
      sym_note,
    ACTIONS(544), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4556] = 13,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(138), 1,
      sym_lot_price,
    STATE(167), 1,
      sym_price,
    STATE(237), 1,
      sym_balance_assertion,
    STATE(478), 1,
      sym_note,
    ACTIONS(548), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4597] = 9,
    ACTIONS(59), 1,
      sym__2d,
    ACTIONS(550), 1,
      aux_sym_word_directive_token2,
    ACTIONS(552), 1,
      sym__month,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    STATE(265), 1,
      sym__4d,
    STATE(414), 1,
      sym_date_spec,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(362), 2,
      sym__relative_date_spec,
      sym__single_date,
    ACTIONS(554), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [4629] = 12,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(138), 1,
      sym_lot_price,
    STATE(167), 1,
      sym_price,
    STATE(237), 1,
      sym_balance_assertion,
    STATE(478), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4667] = 12,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(137), 1,
      sym_lot_price,
    STATE(163), 1,
      sym_price,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(490), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4705] = 12,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(140), 1,
      sym_lot_price,
    STATE(171), 1,
      sym_price,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(469), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4743] = 7,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(408), 1,
      sym__relative_date_spec,
    STATE(419), 1,
      sym__interval_date_spec,
    ACTIONS(295), 2,
      aux_sym__interval_date_spec_token1,
      aux_sym__interval_date_spec_token2,
    ACTIONS(560), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(297), 3,
      aux_sym__interval_date_spec_token3,
      aux_sym__interval_date_spec_token4,
      aux_sym__interval_date_spec_token5,
    ACTIONS(299), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [4771] = 12,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_lot_price,
    STATE(176), 1,
      sym_price,
    STATE(241), 1,
      sym_balance_assertion,
    STATE(432), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4809] = 9,
    ACTIONS(59), 1,
      sym__2d,
    ACTIONS(550), 1,
      aux_sym_word_directive_token2,
    ACTIONS(552), 1,
      sym__month,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    STATE(265), 1,
      sym__4d,
    STATE(420), 1,
      sym_date_spec,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(362), 2,
      sym__relative_date_spec,
      sym__single_date,
    ACTIONS(554), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [4841] = 9,
    ACTIONS(59), 1,
      sym__2d,
    ACTIONS(550), 1,
      aux_sym_word_directive_token2,
    ACTIONS(552), 1,
      sym__month,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    STATE(265), 1,
      sym__4d,
    STATE(298), 1,
      sym_date_spec,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(362), 2,
      sym__relative_date_spec,
      sym__single_date,
    ACTIONS(554), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [4873] = 9,
    ACTIONS(501), 1,
      sym__quantity,
    ACTIONS(562), 1,
      anon_sym_DASH,
    ACTIONS(564), 1,
      anon_sym_PLUS,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(184), 1,
      sym_quantity,
    STATE(220), 1,
      sym_commodity,
    STATE(483), 1,
      sym_amount,
    ACTIONS(523), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4904] = 11,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      sym_account_name,
    ACTIONS(574), 1,
      anon_sym_SPACE,
    ACTIONS(576), 1,
      anon_sym_TAB,
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    STATE(190), 1,
      sym_status,
    STATE(259), 1,
      sym_account,
    STATE(429), 1,
      sym_note,
    ACTIONS(566), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [4939] = 9,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      sym__quantity,
    STATE(103), 1,
      sym_quantity,
    STATE(126), 1,
      aux_sym_whitespace_repeat1,
    STATE(220), 1,
      sym_commodity,
    STATE(287), 1,
      sym_amount,
    ACTIONS(578), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4970] = 9,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      sym__quantity,
    STATE(103), 1,
      sym_quantity,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(220), 1,
      sym_commodity,
    STATE(317), 1,
      sym_amount,
    ACTIONS(523), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5001] = 9,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      sym__quantity,
    STATE(103), 1,
      sym_quantity,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(220), 1,
      sym_commodity,
    STATE(320), 1,
      sym_amount,
    ACTIONS(523), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5032] = 9,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      sym__quantity,
    STATE(103), 1,
      sym_quantity,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(220), 1,
      sym_commodity,
    STATE(322), 1,
      sym_amount,
    ACTIONS(523), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5063] = 9,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      sym__quantity,
    STATE(103), 1,
      sym_quantity,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(220), 1,
      sym_commodity,
    STATE(256), 1,
      sym_amount,
    ACTIONS(523), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5094] = 9,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      sym__quantity,
    STATE(103), 1,
      sym_quantity,
    STATE(124), 1,
      aux_sym_whitespace_repeat1,
    STATE(220), 1,
      sym_commodity,
    STATE(303), 1,
      sym_amount,
    ACTIONS(580), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5125] = 9,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      sym__quantity,
    STATE(103), 1,
      sym_quantity,
    STATE(123), 1,
      aux_sym_whitespace_repeat1,
    STATE(220), 1,
      sym_commodity,
    STATE(302), 1,
      sym_amount,
    ACTIONS(582), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5156] = 9,
    ACTIONS(501), 1,
      sym__quantity,
    ACTIONS(562), 1,
      anon_sym_DASH,
    ACTIONS(564), 1,
      anon_sym_PLUS,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    STATE(184), 1,
      sym_quantity,
    STATE(220), 1,
      sym_commodity,
    STATE(466), 1,
      sym_amount,
    ACTIONS(584), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5187] = 9,
    ACTIONS(501), 1,
      sym__quantity,
    ACTIONS(562), 1,
      anon_sym_DASH,
    ACTIONS(564), 1,
      anon_sym_PLUS,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(184), 1,
      sym_quantity,
    STATE(220), 1,
      sym_commodity,
    STATE(450), 1,
      sym_amount,
    ACTIONS(523), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5218] = 9,
    ACTIONS(586), 1,
      anon_sym_DASH,
    ACTIONS(588), 1,
      anon_sym_PLUS,
    ACTIONS(590), 1,
      sym__quantity,
    STATE(11), 1,
      sym_quantity,
    STATE(45), 1,
      sym_amount,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(204), 1,
      sym_commodity,
    ACTIONS(523), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5249] = 9,
    ACTIONS(501), 1,
      sym__quantity,
    ACTIONS(562), 1,
      anon_sym_DASH,
    ACTIONS(564), 1,
      anon_sym_PLUS,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(184), 1,
      sym_quantity,
    STATE(220), 1,
      sym_commodity,
    STATE(457), 1,
      sym_amount,
    ACTIONS(523), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5280] = 9,
    ACTIONS(501), 1,
      sym__quantity,
    ACTIONS(562), 1,
      anon_sym_DASH,
    ACTIONS(564), 1,
      anon_sym_PLUS,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    STATE(184), 1,
      sym_quantity,
    STATE(220), 1,
      sym_commodity,
    STATE(450), 1,
      sym_amount,
    ACTIONS(592), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5311] = 9,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    ACTIONS(501), 1,
      sym__quantity,
    STATE(103), 1,
      sym_quantity,
    STATE(125), 1,
      aux_sym_whitespace_repeat1,
    STATE(220), 1,
      sym_commodity,
    STATE(304), 1,
      sym_amount,
    ACTIONS(594), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5342] = 9,
    ACTIONS(596), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_alias,
    ACTIONS(602), 1,
      anon_sym_default,
    ACTIONS(604), 1,
      anon_sym_note,
    ACTIONS(606), 1,
      anon_sym_assert,
    ACTIONS(608), 1,
      anon_sym_check,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(301), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(598), 2,
      anon_sym_eval,
      anon_sym_payee,
  [5372] = 10,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    ACTIONS(515), 1,
      anon_sym_LF,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    STATE(186), 1,
      sym_price,
    STATE(235), 1,
      sym_balance_assertion,
    STATE(456), 1,
      sym_note,
    ACTIONS(610), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5404] = 10,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_price,
    STATE(237), 1,
      sym_balance_assertion,
    STATE(478), 1,
      sym_note,
    ACTIONS(612), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5436] = 10,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    ACTIONS(540), 1,
      anon_sym_LF,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    STATE(171), 1,
      sym_price,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(469), 1,
      sym_note,
    ACTIONS(614), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5468] = 10,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    ACTIONS(616), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    STATE(179), 1,
      sym_price,
    STATE(242), 1,
      sym_balance_assertion,
    STATE(453), 1,
      sym_note,
    ACTIONS(618), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5500] = 10,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    ACTIONS(620), 1,
      anon_sym_LF,
    STATE(150), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_price,
    STATE(241), 1,
      sym_balance_assertion,
    STATE(432), 1,
      sym_note,
    ACTIONS(622), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5532] = 2,
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
  [5548] = 2,
    ACTIONS(405), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(403), 8,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5564] = 2,
    ACTIONS(208), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(206), 8,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5580] = 10,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    ACTIONS(519), 1,
      anon_sym_LF,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    STATE(163), 1,
      sym_price,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(490), 1,
      sym_note,
    ACTIONS(624), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5612] = 2,
    ACTIONS(401), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(399), 8,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5628] = 9,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(163), 1,
      sym_price,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(490), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5657] = 9,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_price,
    STATE(237), 1,
      sym_balance_assertion,
    STATE(478), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5686] = 9,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(171), 1,
      sym_price,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(469), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5715] = 9,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(181), 1,
      sym_price,
    STATE(243), 1,
      sym_balance_assertion,
    STATE(482), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5744] = 9,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(179), 1,
      sym_price,
    STATE(242), 1,
      sym_balance_assertion,
    STATE(453), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5773] = 9,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_AT_AT,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_price,
    STATE(241), 1,
      sym_balance_assertion,
    STATE(432), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5802] = 4,
    ACTIONS(185), 1,
      aux_sym_word_directive_token2,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(626), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(227), 5,
      sym__month,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
      sym__2d,
  [5820] = 6,
    ACTIONS(629), 1,
      sym__quantity,
    STATE(104), 1,
      sym_negative_quantity,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    STATE(279), 1,
      sym_commodity,
    ACTIONS(631), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5842] = 8,
    ACTIONS(600), 1,
      anon_sym_alias,
    ACTIONS(602), 1,
      anon_sym_default,
    ACTIONS(604), 1,
      anon_sym_note,
    ACTIONS(633), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_nomarket,
    ACTIONS(637), 1,
      anon_sym_format,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(301), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5868] = 5,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(639), 1,
      anon_sym_SPACE,
    ACTIONS(642), 1,
      anon_sym_TAB,
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(227), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [5888] = 3,
    STATE(157), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(647), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(645), 6,
      anon_sym_year,
      sym__month,
      anon_sym_day,
      anon_sym_week,
      anon_sym_month,
      anon_sym_quarter,
  [5904] = 3,
    STATE(157), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(649), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(227), 6,
      anon_sym_year,
      sym__month,
      anon_sym_day,
      anon_sym_week,
      anon_sym_month,
      anon_sym_quarter,
  [5920] = 6,
    ACTIONS(652), 1,
      sym__quantity,
    STATE(12), 1,
      sym_negative_quantity,
    STATE(223), 1,
      aux_sym_whitespace_repeat1,
    STATE(286), 1,
      sym_commodity,
    ACTIONS(654), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5942] = 6,
    ACTIONS(629), 1,
      sym__quantity,
    STATE(168), 1,
      sym_negative_quantity,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    STATE(279), 1,
      sym_commodity,
    ACTIONS(631), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5964] = 7,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
    ACTIONS(660), 1,
      sym_payee,
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    STATE(227), 1,
      sym_status,
    STATE(228), 1,
      sym_code,
    ACTIONS(656), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(662), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5988] = 7,
    ACTIONS(457), 1,
      anon_sym_endcomment,
    ACTIONS(664), 1,
      anon_sym_LF,
    ACTIONS(666), 1,
      aux_sym_block_comment_token1,
    ACTIONS(668), 1,
      anon_sym_end,
    STATE(166), 1,
      aux_sym_block_comment_repeat1,
    STATE(357), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(670), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6011] = 7,
    ACTIONS(433), 1,
      anon_sym_endtest,
    ACTIONS(672), 1,
      anon_sym_LF,
    ACTIONS(674), 1,
      aux_sym_block_comment_token1,
    ACTIONS(676), 1,
      anon_sym_end,
    STATE(169), 1,
      aux_sym_block_comment_repeat1,
    STATE(363), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(678), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6034] = 7,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym_balance_assertion,
    STATE(478), 1,
      sym_note,
    ACTIONS(680), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6057] = 7,
    ACTIONS(666), 1,
      aux_sym_block_comment_token1,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(684), 1,
      anon_sym_end,
    ACTIONS(686), 1,
      anon_sym_endcomment,
    STATE(187), 1,
      aux_sym_block_comment_repeat1,
    STATE(357), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(670), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6080] = 2,
    ACTIONS(690), 1,
      sym__dsep,
    ACTIONS(688), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6093] = 7,
    ACTIONS(421), 1,
      anon_sym_endcomment,
    ACTIONS(666), 1,
      aux_sym_block_comment_token1,
    ACTIONS(692), 1,
      anon_sym_LF,
    ACTIONS(694), 1,
      anon_sym_end,
    STATE(188), 1,
      aux_sym_block_comment_repeat1,
    STATE(357), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(670), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6116] = 7,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(540), 1,
      anon_sym_LF,
    STATE(198), 1,
      aux_sym_whitespace_repeat1,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(469), 1,
      sym_note,
    ACTIONS(696), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6139] = 5,
    ACTIONS(200), 1,
      anon_sym_LF,
    STATE(143), 1,
      sym_commodity,
    STATE(180), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(698), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6158] = 7,
    ACTIONS(427), 1,
      anon_sym_endtest,
    ACTIONS(674), 1,
      aux_sym_block_comment_token1,
    ACTIONS(700), 1,
      anon_sym_LF,
    ACTIONS(702), 1,
      anon_sym_end,
    STATE(185), 1,
      aux_sym_block_comment_repeat1,
    STATE(363), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(678), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6181] = 7,
    ACTIONS(451), 1,
      anon_sym_endtest,
    ACTIONS(674), 1,
      aux_sym_block_comment_token1,
    ACTIONS(700), 1,
      anon_sym_LF,
    ACTIONS(704), 1,
      anon_sym_end,
    STATE(185), 1,
      aux_sym_block_comment_repeat1,
    STATE(363), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(678), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6204] = 7,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(620), 1,
      anon_sym_LF,
    STATE(189), 1,
      aux_sym_whitespace_repeat1,
    STATE(241), 1,
      sym_balance_assertion,
    STATE(432), 1,
      sym_note,
    ACTIONS(706), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6227] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(182), 1,
      aux_sym_whitespace_repeat1,
    STATE(232), 1,
      sym__single_date,
    STATE(333), 1,
      sym_date,
    STATE(443), 1,
      sym__4d,
    ACTIONS(708), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6250] = 7,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(515), 1,
      anon_sym_LF,
    STATE(222), 1,
      aux_sym_whitespace_repeat1,
    STATE(235), 1,
      sym_balance_assertion,
    STATE(456), 1,
      sym_note,
    ACTIONS(710), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6273] = 5,
    ACTIONS(200), 1,
      anon_sym_LF,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(143), 1,
      sym_commodity,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6292] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(183), 1,
      aux_sym_whitespace_repeat1,
    STATE(232), 1,
      sym__single_date,
    STATE(334), 1,
      sym_date,
    STATE(443), 1,
      sym__4d,
    ACTIONS(712), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6315] = 7,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(616), 1,
      anon_sym_LF,
    STATE(194), 1,
      aux_sym_whitespace_repeat1,
    STATE(242), 1,
      sym_balance_assertion,
    STATE(453), 1,
      sym_note,
    ACTIONS(714), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6338] = 7,
    ACTIONS(674), 1,
      aux_sym_block_comment_token1,
    ACTIONS(716), 1,
      anon_sym_LF,
    ACTIONS(718), 1,
      anon_sym_end,
    ACTIONS(720), 1,
      anon_sym_endtest,
    STATE(170), 1,
      aux_sym_block_comment_repeat1,
    STATE(363), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(678), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6361] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(232), 1,
      sym__single_date,
    STATE(401), 1,
      sym_date,
    STATE(443), 1,
      sym__4d,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6384] = 7,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(722), 1,
      anon_sym_LF,
    STATE(197), 1,
      aux_sym_whitespace_repeat1,
    STATE(243), 1,
      sym_balance_assertion,
    STATE(482), 1,
      sym_note,
    ACTIONS(724), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6407] = 5,
    ACTIONS(206), 1,
      anon_sym_LF,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(145), 1,
      sym_commodity,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6426] = 7,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(726), 1,
      anon_sym_LF,
    STATE(200), 1,
      aux_sym_whitespace_repeat1,
    STATE(244), 1,
      sym_balance_assertion,
    STATE(438), 1,
      sym_note,
    ACTIONS(728), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6449] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(232), 1,
      sym__single_date,
    STATE(316), 1,
      sym_date,
    STATE(443), 1,
      sym__4d,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6472] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(232), 1,
      sym__single_date,
    STATE(326), 1,
      sym_date,
    STATE(443), 1,
      sym__4d,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6495] = 5,
    ACTIONS(190), 1,
      anon_sym_LF,
    STATE(141), 1,
      sym_commodity,
    STATE(174), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(730), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6514] = 6,
    ACTIONS(732), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      aux_sym_block_comment_token1,
    STATE(185), 1,
      aux_sym_block_comment_repeat1,
    STATE(363), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(738), 2,
      anon_sym_end,
      anon_sym_endtest,
    ACTIONS(740), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6535] = 7,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(519), 1,
      anon_sym_LF,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(490), 1,
      sym_note,
    ACTIONS(743), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6558] = 7,
    ACTIONS(415), 1,
      anon_sym_endcomment,
    ACTIONS(666), 1,
      aux_sym_block_comment_token1,
    ACTIONS(692), 1,
      anon_sym_LF,
    ACTIONS(745), 1,
      anon_sym_end,
    STATE(188), 1,
      aux_sym_block_comment_repeat1,
    STATE(357), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(670), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6581] = 6,
    ACTIONS(747), 1,
      anon_sym_LF,
    ACTIONS(750), 1,
      aux_sym_block_comment_token1,
    STATE(188), 1,
      aux_sym_block_comment_repeat1,
    STATE(357), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(738), 2,
      anon_sym_end,
      anon_sym_endcomment,
    ACTIONS(753), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6602] = 6,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(242), 1,
      sym_balance_assertion,
    STATE(453), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6622] = 7,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      sym_account_name,
    ACTIONS(756), 1,
      anon_sym_SPACE,
    ACTIONS(758), 1,
      anon_sym_TAB,
    STATE(215), 1,
      aux_sym_whitespace_repeat1,
    STATE(275), 1,
      sym_account,
  [6644] = 6,
    ACTIONS(501), 1,
      sym__quantity,
    ACTIONS(760), 1,
      anon_sym_DASH,
    ACTIONS(762), 1,
      anon_sym_PLUS,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(143), 1,
      sym_quantity,
    ACTIONS(560), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6664] = 4,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(294), 1,
      sym_commodity,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6680] = 2,
    ACTIONS(766), 1,
      anon_sym_AT,
    ACTIONS(764), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6692] = 6,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(243), 1,
      sym_balance_assertion,
    STATE(482), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6712] = 2,
    ACTIONS(770), 1,
      anon_sym_AT,
    ACTIONS(768), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6724] = 4,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(457), 1,
      sym_commodity,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6740] = 6,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(244), 1,
      sym_balance_assertion,
    STATE(438), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6760] = 6,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(241), 1,
      sym_balance_assertion,
    STATE(432), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6780] = 7,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      sym_account_name,
    ACTIONS(772), 1,
      anon_sym_SPACE,
    ACTIONS(774), 1,
      anon_sym_TAB,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    STATE(472), 1,
      sym_account,
  [6802] = 6,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(245), 1,
      sym_balance_assertion,
    STATE(451), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6822] = 7,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      sym_account_name,
    ACTIONS(772), 1,
      anon_sym_SPACE,
    ACTIONS(774), 1,
      anon_sym_TAB,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    STATE(457), 1,
      sym_account,
  [6844] = 6,
    ACTIONS(776), 1,
      aux_sym_note_token1,
    ACTIONS(778), 1,
      anon_sym_LBRACK,
    ACTIONS(780), 1,
      aux_sym_note_token2,
    STATE(224), 1,
      aux_sym_note_repeat1,
    STATE(339), 1,
      aux_sym_note_repeat2,
    ACTIONS(782), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6864] = 6,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym_balance_assertion,
    STATE(478), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6884] = 6,
    ACTIONS(784), 1,
      anon_sym_DASH,
    ACTIONS(786), 1,
      anon_sym_PLUS,
    ACTIONS(788), 1,
      sym__quantity,
    STATE(61), 1,
      sym_quantity,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(790), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6904] = 4,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(426), 1,
      sym_commodity,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6920] = 7,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      sym_account_name,
    ACTIONS(772), 1,
      anon_sym_SPACE,
    ACTIONS(774), 1,
      anon_sym_TAB,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    STATE(277), 1,
      sym_account,
  [6942] = 7,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      sym_account_name,
    ACTIONS(772), 1,
      anon_sym_SPACE,
    ACTIONS(774), 1,
      anon_sym_TAB,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    STATE(439), 1,
      sym_account,
  [6964] = 4,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(133), 1,
      sym_commodity,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6980] = 6,
    ACTIONS(788), 1,
      sym__quantity,
    ACTIONS(792), 1,
      anon_sym_DASH,
    ACTIONS(794), 1,
      anon_sym_PLUS,
    STATE(62), 1,
      sym_quantity,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7000] = 7,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      sym_account_name,
    ACTIONS(772), 1,
      anon_sym_SPACE,
    ACTIONS(774), 1,
      anon_sym_TAB,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    STATE(258), 1,
      sym_account,
  [7022] = 2,
    ACTIONS(798), 1,
      anon_sym_AT,
    ACTIONS(796), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7034] = 6,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(469), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7054] = 7,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      sym_account_name,
    ACTIONS(800), 1,
      anon_sym_SPACE,
    ACTIONS(802), 1,
      anon_sym_TAB,
    STATE(206), 1,
      aux_sym_whitespace_repeat1,
    STATE(258), 1,
      sym_account,
  [7076] = 1,
    ACTIONS(804), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7086] = 7,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      sym_account_name,
    ACTIONS(772), 1,
      anon_sym_SPACE,
    ACTIONS(774), 1,
      anon_sym_TAB,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    STATE(266), 1,
      sym_account,
  [7108] = 3,
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(806), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(185), 4,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_payee,
  [7122] = 7,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      sym_account_name,
    ACTIONS(772), 1,
      anon_sym_SPACE,
    ACTIONS(774), 1,
      anon_sym_TAB,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    STATE(296), 1,
      sym_account,
  [7144] = 7,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      sym_account_name,
    ACTIONS(809), 1,
      anon_sym_SPACE,
    ACTIONS(811), 1,
      anon_sym_TAB,
    STATE(210), 1,
      aux_sym_whitespace_repeat1,
    STATE(296), 1,
      sym_account,
  [7166] = 4,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(306), 1,
      sym_commodity,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [7182] = 6,
    ACTIONS(501), 1,
      sym__quantity,
    ACTIONS(813), 1,
      anon_sym_DASH,
    ACTIONS(815), 1,
      anon_sym_PLUS,
    STATE(141), 1,
      sym_quantity,
    STATE(191), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(817), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7202] = 7,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      sym_account_name,
    ACTIONS(819), 1,
      anon_sym_SPACE,
    ACTIONS(821), 1,
      anon_sym_TAB,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    STATE(288), 1,
      sym_account,
  [7224] = 6,
    ACTIONS(495), 1,
      anon_sym_EQ,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(236), 1,
      sym_balance_assertion,
    STATE(490), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7244] = 4,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(291), 1,
      sym_commodity,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(503), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [7260] = 6,
    ACTIONS(823), 1,
      aux_sym_note_token1,
    ACTIONS(825), 1,
      anon_sym_LBRACK,
    ACTIONS(827), 1,
      aux_sym_note_token2,
    STATE(248), 1,
      aux_sym_note_repeat1,
    STATE(343), 1,
      aux_sym_note_repeat2,
    ACTIONS(829), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7280] = 5,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(515), 1,
      anon_sym_LF,
    STATE(293), 1,
      aux_sym_whitespace_repeat1,
    STATE(456), 1,
      sym_note,
    ACTIONS(831), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7297] = 6,
    ACTIONS(829), 1,
      anon_sym_LF,
    ACTIONS(833), 1,
      aux_sym_note_token1,
    ACTIONS(835), 1,
      anon_sym_LBRACK,
    ACTIONS(837), 1,
      aux_sym_note_token2,
    STATE(261), 1,
      aux_sym_note_repeat1,
    STATE(367), 1,
      aux_sym_note_repeat2,
  [7316] = 5,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(839), 1,
      anon_sym_LF,
    STATE(239), 1,
      aux_sym_whitespace_repeat1,
    STATE(489), 1,
      sym_note,
    ACTIONS(841), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7333] = 5,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(839), 1,
      anon_sym_LF,
    STATE(332), 1,
      aux_sym_whitespace_repeat1,
    STATE(489), 1,
      sym_note,
    ACTIONS(843), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7350] = 5,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(845), 1,
      anon_sym_LF,
    STATE(341), 1,
      aux_sym_whitespace_repeat1,
    STATE(433), 1,
      sym_note,
    ACTIONS(847), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7367] = 5,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(849), 1,
      anon_sym_LF,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    STATE(435), 1,
      sym_note,
    ACTIONS(851), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7384] = 3,
    ACTIONS(855), 1,
      anon_sym_EQ,
    STATE(345), 1,
      sym_effective_date,
    ACTIONS(853), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7397] = 1,
    ACTIONS(857), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7406] = 2,
    ACTIONS(859), 1,
      anon_sym_LF,
    ACTIONS(738), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7417] = 5,
    ACTIONS(606), 1,
      anon_sym_assert,
    ACTIONS(608), 1,
      anon_sym_check,
    ACTIONS(861), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7434] = 5,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(519), 1,
      anon_sym_LF,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    STATE(490), 1,
      sym_note,
    ACTIONS(863), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7451] = 5,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(260), 1,
      aux_sym_whitespace_repeat1,
    STATE(478), 1,
      sym_note,
    ACTIONS(865), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7468] = 5,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(540), 1,
      anon_sym_LF,
    STATE(264), 1,
      aux_sym_whitespace_repeat1,
    STATE(469), 1,
      sym_note,
    ACTIONS(867), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7485] = 5,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(620), 1,
      anon_sym_LF,
    STATE(268), 1,
      aux_sym_whitespace_repeat1,
    STATE(432), 1,
      sym_note,
    ACTIONS(869), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7502] = 5,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
    ACTIONS(871), 1,
      sym_payee,
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    STATE(229), 1,
      sym_code,
    ACTIONS(662), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7519] = 2,
    ACTIONS(873), 1,
      anon_sym_LF,
    ACTIONS(875), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7530] = 5,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(616), 1,
      anon_sym_LF,
    STATE(270), 1,
      aux_sym_whitespace_repeat1,
    STATE(453), 1,
      sym_note,
    ACTIONS(877), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7547] = 5,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(722), 1,
      anon_sym_LF,
    STATE(274), 1,
      aux_sym_whitespace_repeat1,
    STATE(482), 1,
      sym_note,
    ACTIONS(879), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7564] = 5,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(726), 1,
      anon_sym_LF,
    STATE(276), 1,
      aux_sym_whitespace_repeat1,
    STATE(438), 1,
      sym_note,
    ACTIONS(881), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7581] = 5,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(883), 1,
      anon_sym_LF,
    STATE(278), 1,
      aux_sym_whitespace_repeat1,
    STATE(451), 1,
      sym_note,
    ACTIONS(885), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7598] = 5,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(887), 1,
      anon_sym_LF,
    STATE(280), 1,
      aux_sym_whitespace_repeat1,
    STATE(471), 1,
      sym_note,
    ACTIONS(889), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7615] = 6,
    ACTIONS(782), 1,
      anon_sym_LF,
    ACTIONS(891), 1,
      aux_sym_note_token1,
    ACTIONS(893), 1,
      anon_sym_LBRACK,
    ACTIONS(895), 1,
      aux_sym_note_token2,
    STATE(226), 1,
      aux_sym_note_repeat1,
    STATE(400), 1,
      aux_sym_note_repeat2,
  [7634] = 2,
    ACTIONS(859), 1,
      anon_sym_LF,
    ACTIONS(738), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7645] = 4,
    ACTIONS(897), 1,
      aux_sym_note_token1,
    ACTIONS(902), 1,
      aux_sym_note_token2,
    STATE(248), 1,
      aux_sym_note_repeat1,
    ACTIONS(900), 3,
      anon_sym_LBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7660] = 2,
    ACTIONS(873), 1,
      anon_sym_LF,
    ACTIONS(875), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7671] = 4,
    ACTIONS(904), 1,
      anon_sym_SPACE,
    ACTIONS(907), 1,
      anon_sym_TAB,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(227), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [7686] = 3,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7698] = 4,
    ACTIONS(910), 1,
      aux_sym_option_value_token1,
    STATE(355), 1,
      aux_sym_whitespace_repeat1,
    STATE(472), 1,
      sym_filename,
    ACTIONS(912), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7712] = 4,
    ACTIONS(629), 1,
      sym__quantity,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(142), 1,
      sym_negative_quantity,
    ACTIONS(560), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7726] = 4,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(478), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7740] = 3,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(23), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7752] = 1,
    ACTIONS(914), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7760] = 3,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(31), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7772] = 2,
    ACTIONS(916), 1,
      anon_sym_LF,
    ACTIONS(918), 4,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7782] = 2,
    ACTIONS(920), 1,
      anon_sym_LF,
    ACTIONS(922), 4,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7792] = 4,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(469), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7806] = 4,
    ACTIONS(902), 1,
      aux_sym_note_token2,
    ACTIONS(924), 1,
      aux_sym_note_token1,
    STATE(261), 1,
      aux_sym_note_repeat1,
    ACTIONS(900), 2,
      anon_sym_LF,
      anon_sym_LBRACK,
  [7820] = 3,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(29), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7832] = 3,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(927), 2,
      aux_sym__interval_date_spec_token3,
      aux_sym__interval_date_spec_token4,
  [7844] = 4,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(432), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7858] = 2,
    ACTIONS(931), 1,
      sym__dsep,
    ACTIONS(929), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7868] = 2,
    ACTIONS(515), 1,
      anon_sym_LF,
    ACTIONS(933), 4,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7878] = 3,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(20), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7890] = 4,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(453), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7904] = 3,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(25), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7916] = 4,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(482), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7930] = 3,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(26), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7942] = 3,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(935), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    ACTIONS(937), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7954] = 1,
    ACTIONS(939), 5,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7962] = 4,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(438), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7976] = 2,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(941), 4,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7986] = 4,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(451), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8000] = 2,
    ACTIONS(943), 1,
      anon_sym_LF,
    ACTIONS(945), 4,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [8010] = 4,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(471), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8024] = 4,
    ACTIONS(629), 1,
      sym__quantity,
    STATE(143), 1,
      sym_negative_quantity,
    STATE(289), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(947), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8038] = 4,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(479), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8052] = 1,
    ACTIONS(949), 5,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [8060] = 3,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [8072] = 1,
    ACTIONS(951), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8080] = 2,
    ACTIONS(955), 1,
      anon_sym_SPACE,
    ACTIONS(953), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [8090] = 4,
    ACTIONS(957), 1,
      aux_sym_option_value_token1,
    STATE(355), 1,
      aux_sym_whitespace_repeat1,
    STATE(440), 1,
      sym_option_value,
    ACTIONS(912), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8104] = 4,
    ACTIONS(959), 1,
      sym__quantity,
    STATE(62), 1,
      sym_negative_quantity,
    STATE(290), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(961), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8118] = 1,
    ACTIONS(963), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8126] = 2,
    ACTIONS(965), 1,
      anon_sym_LF,
    ACTIONS(967), 4,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [8136] = 4,
    ACTIONS(629), 1,
      sym__quantity,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(145), 1,
      sym_negative_quantity,
    ACTIONS(560), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8150] = 4,
    ACTIONS(959), 1,
      sym__quantity,
    STATE(63), 1,
      sym_negative_quantity,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8164] = 4,
    ACTIONS(959), 1,
      sym__quantity,
    STATE(63), 1,
      sym_negative_quantity,
    STATE(292), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(969), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8178] = 4,
    ACTIONS(959), 1,
      sym__quantity,
    STATE(64), 1,
      sym_negative_quantity,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8192] = 4,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(490), 1,
      sym_note,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8206] = 4,
    ACTIONS(629), 1,
      sym__quantity,
    STATE(145), 1,
      sym_negative_quantity,
    STATE(253), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(971), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8220] = 3,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(27), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [8232] = 2,
    ACTIONS(973), 1,
      anon_sym_LF,
    ACTIONS(975), 4,
      anon_sym_,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [8242] = 3,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(22), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [8254] = 3,
    STATE(263), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(977), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    ACTIONS(979), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8266] = 4,
    ACTIONS(981), 1,
      anon_sym_LF,
    ACTIONS(983), 1,
      anon_sym_EQ,
    STATE(285), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(985), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8280] = 3,
    ACTIONS(987), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8291] = 3,
    ACTIONS(989), 1,
      sym_payee,
    STATE(310), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(991), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8302] = 1,
    ACTIONS(993), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8309] = 3,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(997), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8320] = 3,
    ACTIONS(995), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(321), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(999), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8331] = 3,
    ACTIONS(1001), 1,
      anon_sym_EQ,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8342] = 3,
    ACTIONS(1003), 1,
      anon_sym_EQ,
    STATE(305), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1005), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8353] = 3,
    ACTIONS(1007), 1,
      aux_sym_tag_directive_token1,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8364] = 3,
    ACTIONS(1009), 1,
      aux_sym_word_directive_token1,
    STATE(356), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1011), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8375] = 3,
    ACTIONS(1013), 1,
      aux_sym_option_value_token1,
    STATE(355), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(912), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8386] = 3,
    ACTIONS(1015), 1,
      sym_payee,
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(662), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8397] = 3,
    ACTIONS(1015), 1,
      sym_payee,
    STATE(325), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1017), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8408] = 3,
    ACTIONS(1019), 1,
      aux_sym_word_directive_token2,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8419] = 3,
    ACTIONS(1021), 1,
      sym_time,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8430] = 3,
    ACTIONS(1023), 1,
      sym_time,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8441] = 3,
    ACTIONS(1025), 1,
      sym_time,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8452] = 3,
    ACTIONS(1025), 1,
      sym_time,
    STATE(313), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1027), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8463] = 1,
    ACTIONS(1029), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8470] = 3,
    ACTIONS(1031), 1,
      sym_time,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8481] = 3,
    ACTIONS(1033), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8492] = 3,
    ACTIONS(1033), 1,
      anon_sym_RBRACE,
    STATE(327), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1035), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8503] = 3,
    ACTIONS(1033), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8514] = 3,
    ACTIONS(1033), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(300), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1037), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8525] = 3,
    ACTIONS(1039), 1,
      aux_sym_account_subdirective_token1,
    STATE(360), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1041), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8536] = 3,
    ACTIONS(1043), 1,
      aux_sym_account_subdirective_token1,
    STATE(360), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1041), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8547] = 3,
    ACTIONS(1045), 1,
      sym_payee,
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(662), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8558] = 3,
    ACTIONS(1031), 1,
      sym_time,
    STATE(314), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1047), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8569] = 3,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8580] = 3,
    ACTIONS(1049), 1,
      aux_sym_word_directive_token2,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(558), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8591] = 3,
    ACTIONS(1051), 1,
      sym_payee,
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(662), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8602] = 3,
    ACTIONS(1051), 1,
      sym_payee,
    STATE(336), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1053), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8613] = 1,
    ACTIONS(1055), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8620] = 3,
    ACTIONS(871), 1,
      sym_payee,
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(662), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8631] = 3,
    ACTIONS(1057), 1,
      sym_time,
    STATE(315), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1059), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8642] = 3,
    ACTIONS(1061), 1,
      sym_time,
    STATE(318), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1063), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8653] = 3,
    ACTIONS(227), 1,
      aux_sym_block_comment_token1,
    STATE(335), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1065), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8664] = 3,
    ACTIONS(989), 1,
      sym_payee,
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(662), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8675] = 3,
    ACTIONS(227), 1,
      sym_query,
    STATE(337), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1068), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8686] = 3,
    ACTIONS(1071), 1,
      aux_sym_block_comment_token1,
    STATE(335), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1073), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8697] = 3,
    ACTIONS(1075), 1,
      aux_sym_note_token2,
    STATE(344), 1,
      aux_sym_note_repeat2,
    ACTIONS(829), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8708] = 1,
    ACTIONS(1077), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8715] = 3,
    ACTIONS(1079), 1,
      sym_payee,
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(662), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8726] = 4,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(283), 1,
      sym__single_date,
    STATE(443), 1,
      sym__4d,
  [8739] = 3,
    ACTIONS(1075), 1,
      aux_sym_note_token2,
    STATE(344), 1,
      aux_sym_note_repeat2,
    ACTIONS(1081), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8750] = 3,
    ACTIONS(1083), 1,
      aux_sym_note_token2,
    STATE(344), 1,
      aux_sym_note_repeat2,
    ACTIONS(1086), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8761] = 1,
    ACTIONS(1088), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8768] = 3,
    ACTIONS(1090), 1,
      aux_sym_account_subdirective_token1,
    STATE(360), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1041), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8779] = 3,
    ACTIONS(1092), 1,
      aux_sym_account_subdirective_token1,
    STATE(360), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1041), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8790] = 3,
    ACTIONS(1094), 1,
      aux_sym_note_token2,
    STATE(350), 1,
      aux_sym_note_repeat2,
    ACTIONS(1096), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8801] = 3,
    ACTIONS(1098), 1,
      aux_sym_account_subdirective_token1,
    STATE(360), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1041), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8812] = 3,
    ACTIONS(1075), 1,
      aux_sym_note_token2,
    STATE(344), 1,
      aux_sym_note_repeat2,
    ACTIONS(1100), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8823] = 3,
    ACTIONS(1102), 1,
      aux_sym_note_token2,
    STATE(352), 1,
      aux_sym_note_repeat2,
    ACTIONS(1100), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8834] = 3,
    ACTIONS(1075), 1,
      aux_sym_note_token2,
    STATE(344), 1,
      aux_sym_note_repeat2,
    ACTIONS(1104), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8845] = 3,
    ACTIONS(1106), 1,
      aux_sym_block_comment_token1,
    STATE(335), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1073), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8856] = 3,
    ACTIONS(1108), 1,
      anon_sym_LF,
    STATE(353), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1110), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8867] = 3,
    ACTIONS(227), 1,
      aux_sym_option_value_token1,
    STATE(355), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1112), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8878] = 3,
    ACTIONS(227), 1,
      aux_sym_word_directive_token1,
    STATE(356), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1115), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8889] = 3,
    ACTIONS(1118), 1,
      aux_sym_block_comment_token1,
    STATE(335), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1073), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8900] = 3,
    ACTIONS(1120), 1,
      sym_payee,
    STATE(329), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1122), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8911] = 3,
    ACTIONS(1124), 1,
      sym_query,
    STATE(337), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1126), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8922] = 3,
    ACTIONS(185), 1,
      aux_sym_account_subdirective_token1,
    STATE(360), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1128), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8933] = 1,
    ACTIONS(955), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8940] = 1,
    ACTIONS(929), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8947] = 3,
    ACTIONS(1131), 1,
      aux_sym_block_comment_token1,
    STATE(335), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1073), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8958] = 3,
    ACTIONS(1133), 1,
      anon_sym_LF,
    STATE(338), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1135), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8969] = 2,
    STATE(201), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1137), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8977] = 2,
    STATE(205), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1139), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8985] = 3,
    ACTIONS(1081), 1,
      anon_sym_LF,
    ACTIONS(1141), 1,
      aux_sym_note_token2,
    STATE(369), 1,
      aux_sym_note_repeat2,
  [8995] = 3,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(1143), 1,
      anon_sym_LF,
    STATE(468), 1,
      sym_note,
  [9005] = 3,
    ACTIONS(1086), 1,
      anon_sym_LF,
    ACTIONS(1145), 1,
      aux_sym_note_token2,
    STATE(369), 1,
      aux_sym_note_repeat2,
  [9015] = 2,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1148), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9023] = 2,
    STATE(119), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1150), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9031] = 2,
    STATE(359), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1152), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9039] = 2,
    STATE(112), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1154), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9047] = 2,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1156), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9055] = 2,
    STATE(328), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1158), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9063] = 3,
    ACTIONS(1160), 1,
      anon_sym_LF,
    ACTIONS(1162), 1,
      anon_sym_SEMI,
    STATE(255), 1,
      sym_note,
  [9073] = 2,
    STATE(307), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1164), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9081] = 2,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1166), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9089] = 2,
    STATE(132), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1168), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9097] = 2,
    STATE(219), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1170), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9105] = 2,
    STATE(349), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1172), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9113] = 2,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1174), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9121] = 3,
    ACTIONS(1100), 1,
      anon_sym_LF,
    ACTIONS(1141), 1,
      aux_sym_note_token2,
    STATE(369), 1,
      aux_sym_note_repeat2,
  [9131] = 2,
    STATE(207), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1176), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9139] = 3,
    ACTIONS(1100), 1,
      anon_sym_LF,
    ACTIONS(1178), 1,
      aux_sym_note_token2,
    STATE(398), 1,
      aux_sym_note_repeat2,
  [9149] = 2,
    STATE(35), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1180), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9157] = 2,
    STATE(323), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1182), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9165] = 3,
    ACTIONS(1096), 1,
      anon_sym_LF,
    ACTIONS(1184), 1,
      aux_sym_note_token2,
    STATE(383), 1,
      aux_sym_note_repeat2,
  [9175] = 2,
    STATE(324), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1186), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9183] = 2,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1188), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9191] = 2,
    STATE(252), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1190), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9199] = 2,
    STATE(308), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1192), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9207] = 2,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1194), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9215] = 3,
    ACTIONS(1162), 1,
      anon_sym_SEMI,
    ACTIONS(1196), 1,
      anon_sym_LF,
    STATE(267), 1,
      sym_note,
  [9225] = 2,
    STATE(309), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1198), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9233] = 2,
    STATE(346), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1200), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9241] = 2,
    STATE(347), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1202), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9249] = 3,
    ACTIONS(1104), 1,
      anon_sym_LF,
    ACTIONS(1141), 1,
      aux_sym_note_token2,
    STATE(369), 1,
      aux_sym_note_repeat2,
  [9259] = 3,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(839), 1,
      anon_sym_LF,
    STATE(489), 1,
      sym_note,
  [9269] = 3,
    ACTIONS(829), 1,
      anon_sym_LF,
    ACTIONS(1141), 1,
      aux_sym_note_token2,
    STATE(369), 1,
      aux_sym_note_repeat2,
  [9279] = 2,
    STATE(208), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1204), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9287] = 2,
    STATE(312), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1206), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [9295] = 3,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(845), 1,
      anon_sym_LF,
    STATE(433), 1,
      sym_note,
  [9305] = 2,
    ACTIONS(855), 1,
      anon_sym_EQ,
    STATE(448), 1,
      sym_effective_date,
  [9312] = 2,
    ACTIONS(855), 1,
      anon_sym_EQ,
    STATE(485), 1,
      sym_effective_date,
  [9319] = 2,
    ACTIONS(1208), 1,
      aux_sym_option_value_token1,
    STATE(440), 1,
      sym_option_value,
  [9326] = 1,
    ACTIONS(935), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [9331] = 1,
    ACTIONS(1210), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [9336] = 2,
    ACTIONS(629), 1,
      sym__quantity,
    STATE(143), 1,
      sym_negative_quantity,
  [9343] = 2,
    ACTIONS(501), 1,
      sym__quantity,
    STATE(143), 1,
      sym_quantity,
  [9350] = 2,
    ACTIONS(959), 1,
      sym__quantity,
    STATE(62), 1,
      sym_negative_quantity,
  [9357] = 2,
    ACTIONS(788), 1,
      sym__quantity,
    STATE(62), 1,
      sym_quantity,
  [9364] = 2,
    ACTIONS(855), 1,
      anon_sym_EQ,
    STATE(428), 1,
      sym_effective_date,
  [9371] = 1,
    ACTIONS(977), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [9376] = 2,
    ACTIONS(959), 1,
      sym__quantity,
    STATE(63), 1,
      sym_negative_quantity,
  [9383] = 2,
    ACTIONS(788), 1,
      sym__quantity,
    STATE(63), 1,
      sym_quantity,
  [9390] = 2,
    ACTIONS(629), 1,
      sym__quantity,
    STATE(145), 1,
      sym_negative_quantity,
  [9397] = 2,
    ACTIONS(501), 1,
      sym__quantity,
    STATE(145), 1,
      sym_quantity,
  [9404] = 1,
    ACTIONS(1212), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [9409] = 1,
    ACTIONS(1214), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [9414] = 2,
    ACTIONS(501), 1,
      sym__quantity,
    STATE(168), 1,
      sym_quantity,
  [9421] = 2,
    ACTIONS(590), 1,
      sym__quantity,
    STATE(12), 1,
      sym_quantity,
  [9428] = 2,
    ACTIONS(501), 1,
      sym__quantity,
    STATE(104), 1,
      sym_quantity,
  [9435] = 2,
    ACTIONS(855), 1,
      anon_sym_EQ,
    STATE(484), 1,
      sym_effective_date,
  [9442] = 1,
    ACTIONS(916), 1,
      anon_sym_LF,
  [9446] = 1,
    ACTIONS(1216), 1,
      anon_sym_LF,
  [9450] = 1,
    ACTIONS(1218), 1,
      anon_sym_LF,
  [9454] = 1,
    ACTIONS(1220), 1,
      anon_sym_RBRACK,
  [9458] = 1,
    ACTIONS(1222), 1,
      anon_sym_LF,
  [9462] = 1,
    ACTIONS(1224), 1,
      anon_sym_LF,
  [9466] = 1,
    ACTIONS(1226), 1,
      anon_sym_LF,
  [9470] = 1,
    ACTIONS(616), 1,
      anon_sym_LF,
  [9474] = 1,
    ACTIONS(1228), 1,
      anon_sym_LF,
  [9478] = 1,
    ACTIONS(1230), 1,
      anon_sym_LF,
  [9482] = 1,
    ACTIONS(1232), 1,
      anon_sym_LF,
  [9486] = 1,
    ACTIONS(1234), 1,
      anon_sym_LF,
  [9490] = 1,
    ACTIONS(1236), 1,
      aux_sym_option_token1,
  [9494] = 1,
    ACTIONS(883), 1,
      anon_sym_LF,
  [9498] = 1,
    ACTIONS(1238), 1,
      anon_sym_LF,
  [9502] = 1,
    ACTIONS(1240), 1,
      anon_sym_LF,
  [9506] = 1,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
  [9510] = 1,
    ACTIONS(1244), 1,
      sym__dsep,
  [9514] = 1,
    ACTIONS(931), 1,
      sym__dsep,
  [9518] = 1,
    ACTIONS(1246), 1,
      anon_sym_EQ,
  [9522] = 1,
    ACTIONS(1248), 1,
      anon_sym_LF,
  [9526] = 1,
    ACTIONS(1250), 1,
      ts_builtin_sym_end,
  [9530] = 1,
    ACTIONS(1252), 1,
      anon_sym_LF,
  [9534] = 1,
    ACTIONS(1254), 1,
      anon_sym_RBRACK,
  [9538] = 1,
    ACTIONS(1256), 1,
      anon_sym_LF,
  [9542] = 1,
    ACTIONS(1258), 1,
      anon_sym_LF,
  [9546] = 1,
    ACTIONS(887), 1,
      anon_sym_LF,
  [9550] = 1,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
  [9554] = 1,
    ACTIONS(722), 1,
      anon_sym_LF,
  [9558] = 1,
    ACTIONS(1262), 1,
      sym__2d,
  [9562] = 1,
    ACTIONS(1264), 1,
      sym_account_name,
  [9566] = 1,
    ACTIONS(519), 1,
      anon_sym_LF,
  [9570] = 1,
    ACTIONS(1266), 1,
      anon_sym_LF,
  [9574] = 1,
    ACTIONS(1268), 1,
      anon_sym_LF,
  [9578] = 1,
    ACTIONS(1270), 1,
      aux_sym_code_token1,
  [9582] = 1,
    ACTIONS(1272), 1,
      anon_sym_LF,
  [9586] = 1,
    ACTIONS(1274), 1,
      anon_sym_LF,
  [9590] = 1,
    ACTIONS(1276), 1,
      sym__2d,
  [9594] = 1,
    ACTIONS(1278), 1,
      anon_sym_LF,
  [9598] = 1,
    ACTIONS(1280), 1,
      sym_account_name,
  [9602] = 1,
    ACTIONS(515), 1,
      anon_sym_LF,
  [9606] = 1,
    ACTIONS(1282), 1,
      anon_sym_LF,
  [9610] = 1,
    ACTIONS(1284), 1,
      anon_sym_LF,
  [9614] = 1,
    ACTIONS(1286), 1,
      anon_sym_LF,
  [9618] = 1,
    ACTIONS(620), 1,
      anon_sym_LF,
  [9622] = 1,
    ACTIONS(1288), 1,
      anon_sym_LF,
  [9626] = 1,
    ACTIONS(1290), 1,
      anon_sym_LF,
  [9630] = 1,
    ACTIONS(1292), 1,
      anon_sym_LF,
  [9634] = 1,
    ACTIONS(1260), 1,
      anon_sym_RBRACK,
  [9638] = 1,
    ACTIONS(1294), 1,
      aux_sym_option_value_token1,
  [9642] = 1,
    ACTIONS(690), 1,
      sym__dsep,
  [9646] = 1,
    ACTIONS(1296), 1,
      anon_sym_LF,
  [9650] = 1,
    ACTIONS(1298), 1,
      anon_sym_LF,
  [9654] = 1,
    ACTIONS(540), 1,
      anon_sym_LF,
  [9658] = 1,
    ACTIONS(1300), 1,
      anon_sym_LF,
  [9662] = 1,
    ACTIONS(1302), 1,
      anon_sym_LF,
  [9666] = 1,
    ACTIONS(1304), 1,
      anon_sym_LF,
  [9670] = 1,
    ACTIONS(726), 1,
      anon_sym_LF,
  [9674] = 1,
    ACTIONS(1306), 1,
      anon_sym_LF,
  [9678] = 1,
    ACTIONS(1308), 1,
      anon_sym_RBRACK,
  [9682] = 1,
    ACTIONS(1310), 1,
      anon_sym_RBRACK,
  [9686] = 1,
    ACTIONS(1312), 1,
      anon_sym_LF,
  [9690] = 1,
    ACTIONS(943), 1,
      anon_sym_LF,
  [9694] = 1,
    ACTIONS(1314), 1,
      sym__2d,
  [9698] = 1,
    ACTIONS(1316), 1,
      anon_sym_LF,
  [9702] = 1,
    ACTIONS(546), 1,
      anon_sym_LF,
  [9706] = 1,
    ACTIONS(1318), 1,
      anon_sym_LF,
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
  [SMALL_STATE(13)] = 724,
  [SMALL_STATE(14)] = 774,
  [SMALL_STATE(15)] = 824,
  [SMALL_STATE(16)] = 871,
  [SMALL_STATE(17)] = 918,
  [SMALL_STATE(18)] = 965,
  [SMALL_STATE(19)] = 1010,
  [SMALL_STATE(20)] = 1056,
  [SMALL_STATE(21)] = 1102,
  [SMALL_STATE(22)] = 1148,
  [SMALL_STATE(23)] = 1194,
  [SMALL_STATE(24)] = 1240,
  [SMALL_STATE(25)] = 1286,
  [SMALL_STATE(26)] = 1332,
  [SMALL_STATE(27)] = 1378,
  [SMALL_STATE(28)] = 1424,
  [SMALL_STATE(29)] = 1464,
  [SMALL_STATE(30)] = 1510,
  [SMALL_STATE(31)] = 1550,
  [SMALL_STATE(32)] = 1596,
  [SMALL_STATE(33)] = 1633,
  [SMALL_STATE(34)] = 1670,
  [SMALL_STATE(35)] = 1707,
  [SMALL_STATE(36)] = 1760,
  [SMALL_STATE(37)] = 1797,
  [SMALL_STATE(38)] = 1834,
  [SMALL_STATE(39)] = 1871,
  [SMALL_STATE(40)] = 1908,
  [SMALL_STATE(41)] = 1945,
  [SMALL_STATE(42)] = 1982,
  [SMALL_STATE(43)] = 2019,
  [SMALL_STATE(44)] = 2056,
  [SMALL_STATE(45)] = 2093,
  [SMALL_STATE(46)] = 2130,
  [SMALL_STATE(47)] = 2167,
  [SMALL_STATE(48)] = 2204,
  [SMALL_STATE(49)] = 2241,
  [SMALL_STATE(50)] = 2278,
  [SMALL_STATE(51)] = 2315,
  [SMALL_STATE(52)] = 2352,
  [SMALL_STATE(53)] = 2389,
  [SMALL_STATE(54)] = 2426,
  [SMALL_STATE(55)] = 2463,
  [SMALL_STATE(56)] = 2500,
  [SMALL_STATE(57)] = 2537,
  [SMALL_STATE(58)] = 2574,
  [SMALL_STATE(59)] = 2611,
  [SMALL_STATE(60)] = 2648,
  [SMALL_STATE(61)] = 2685,
  [SMALL_STATE(62)] = 2722,
  [SMALL_STATE(63)] = 2759,
  [SMALL_STATE(64)] = 2796,
  [SMALL_STATE(65)] = 2833,
  [SMALL_STATE(66)] = 2870,
  [SMALL_STATE(67)] = 2907,
  [SMALL_STATE(68)] = 2944,
  [SMALL_STATE(69)] = 2982,
  [SMALL_STATE(70)] = 3020,
  [SMALL_STATE(71)] = 3058,
  [SMALL_STATE(72)] = 3096,
  [SMALL_STATE(73)] = 3134,
  [SMALL_STATE(74)] = 3172,
  [SMALL_STATE(75)] = 3210,
  [SMALL_STATE(76)] = 3248,
  [SMALL_STATE(77)] = 3283,
  [SMALL_STATE(78)] = 3318,
  [SMALL_STATE(79)] = 3353,
  [SMALL_STATE(80)] = 3388,
  [SMALL_STATE(81)] = 3423,
  [SMALL_STATE(82)] = 3458,
  [SMALL_STATE(83)] = 3493,
  [SMALL_STATE(84)] = 3528,
  [SMALL_STATE(85)] = 3563,
  [SMALL_STATE(86)] = 3598,
  [SMALL_STATE(87)] = 3633,
  [SMALL_STATE(88)] = 3668,
  [SMALL_STATE(89)] = 3703,
  [SMALL_STATE(90)] = 3738,
  [SMALL_STATE(91)] = 3773,
  [SMALL_STATE(92)] = 3808,
  [SMALL_STATE(93)] = 3872,
  [SMALL_STATE(94)] = 3936,
  [SMALL_STATE(95)] = 4000,
  [SMALL_STATE(96)] = 4061,
  [SMALL_STATE(97)] = 4122,
  [SMALL_STATE(98)] = 4183,
  [SMALL_STATE(99)] = 4210,
  [SMALL_STATE(100)] = 4237,
  [SMALL_STATE(101)] = 4259,
  [SMALL_STATE(102)] = 4286,
  [SMALL_STATE(103)] = 4313,
  [SMALL_STATE(104)] = 4342,
  [SMALL_STATE(105)] = 4371,
  [SMALL_STATE(106)] = 4395,
  [SMALL_STATE(107)] = 4414,
  [SMALL_STATE(108)] = 4433,
  [SMALL_STATE(109)] = 4474,
  [SMALL_STATE(110)] = 4515,
  [SMALL_STATE(111)] = 4556,
  [SMALL_STATE(112)] = 4597,
  [SMALL_STATE(113)] = 4629,
  [SMALL_STATE(114)] = 4667,
  [SMALL_STATE(115)] = 4705,
  [SMALL_STATE(116)] = 4743,
  [SMALL_STATE(117)] = 4771,
  [SMALL_STATE(118)] = 4809,
  [SMALL_STATE(119)] = 4841,
  [SMALL_STATE(120)] = 4873,
  [SMALL_STATE(121)] = 4904,
  [SMALL_STATE(122)] = 4939,
  [SMALL_STATE(123)] = 4970,
  [SMALL_STATE(124)] = 5001,
  [SMALL_STATE(125)] = 5032,
  [SMALL_STATE(126)] = 5063,
  [SMALL_STATE(127)] = 5094,
  [SMALL_STATE(128)] = 5125,
  [SMALL_STATE(129)] = 5156,
  [SMALL_STATE(130)] = 5187,
  [SMALL_STATE(131)] = 5218,
  [SMALL_STATE(132)] = 5249,
  [SMALL_STATE(133)] = 5280,
  [SMALL_STATE(134)] = 5311,
  [SMALL_STATE(135)] = 5342,
  [SMALL_STATE(136)] = 5372,
  [SMALL_STATE(137)] = 5404,
  [SMALL_STATE(138)] = 5436,
  [SMALL_STATE(139)] = 5468,
  [SMALL_STATE(140)] = 5500,
  [SMALL_STATE(141)] = 5532,
  [SMALL_STATE(142)] = 5548,
  [SMALL_STATE(143)] = 5564,
  [SMALL_STATE(144)] = 5580,
  [SMALL_STATE(145)] = 5612,
  [SMALL_STATE(146)] = 5628,
  [SMALL_STATE(147)] = 5657,
  [SMALL_STATE(148)] = 5686,
  [SMALL_STATE(149)] = 5715,
  [SMALL_STATE(150)] = 5744,
  [SMALL_STATE(151)] = 5773,
  [SMALL_STATE(152)] = 5802,
  [SMALL_STATE(153)] = 5820,
  [SMALL_STATE(154)] = 5842,
  [SMALL_STATE(155)] = 5868,
  [SMALL_STATE(156)] = 5888,
  [SMALL_STATE(157)] = 5904,
  [SMALL_STATE(158)] = 5920,
  [SMALL_STATE(159)] = 5942,
  [SMALL_STATE(160)] = 5964,
  [SMALL_STATE(161)] = 5988,
  [SMALL_STATE(162)] = 6011,
  [SMALL_STATE(163)] = 6034,
  [SMALL_STATE(164)] = 6057,
  [SMALL_STATE(165)] = 6080,
  [SMALL_STATE(166)] = 6093,
  [SMALL_STATE(167)] = 6116,
  [SMALL_STATE(168)] = 6139,
  [SMALL_STATE(169)] = 6158,
  [SMALL_STATE(170)] = 6181,
  [SMALL_STATE(171)] = 6204,
  [SMALL_STATE(172)] = 6227,
  [SMALL_STATE(173)] = 6250,
  [SMALL_STATE(174)] = 6273,
  [SMALL_STATE(175)] = 6292,
  [SMALL_STATE(176)] = 6315,
  [SMALL_STATE(177)] = 6338,
  [SMALL_STATE(178)] = 6361,
  [SMALL_STATE(179)] = 6384,
  [SMALL_STATE(180)] = 6407,
  [SMALL_STATE(181)] = 6426,
  [SMALL_STATE(182)] = 6449,
  [SMALL_STATE(183)] = 6472,
  [SMALL_STATE(184)] = 6495,
  [SMALL_STATE(185)] = 6514,
  [SMALL_STATE(186)] = 6535,
  [SMALL_STATE(187)] = 6558,
  [SMALL_STATE(188)] = 6581,
  [SMALL_STATE(189)] = 6602,
  [SMALL_STATE(190)] = 6622,
  [SMALL_STATE(191)] = 6644,
  [SMALL_STATE(192)] = 6664,
  [SMALL_STATE(193)] = 6680,
  [SMALL_STATE(194)] = 6692,
  [SMALL_STATE(195)] = 6712,
  [SMALL_STATE(196)] = 6724,
  [SMALL_STATE(197)] = 6740,
  [SMALL_STATE(198)] = 6760,
  [SMALL_STATE(199)] = 6780,
  [SMALL_STATE(200)] = 6802,
  [SMALL_STATE(201)] = 6822,
  [SMALL_STATE(202)] = 6844,
  [SMALL_STATE(203)] = 6864,
  [SMALL_STATE(204)] = 6884,
  [SMALL_STATE(205)] = 6904,
  [SMALL_STATE(206)] = 6920,
  [SMALL_STATE(207)] = 6942,
  [SMALL_STATE(208)] = 6964,
  [SMALL_STATE(209)] = 6980,
  [SMALL_STATE(210)] = 7000,
  [SMALL_STATE(211)] = 7022,
  [SMALL_STATE(212)] = 7034,
  [SMALL_STATE(213)] = 7054,
  [SMALL_STATE(214)] = 7076,
  [SMALL_STATE(215)] = 7086,
  [SMALL_STATE(216)] = 7108,
  [SMALL_STATE(217)] = 7122,
  [SMALL_STATE(218)] = 7144,
  [SMALL_STATE(219)] = 7166,
  [SMALL_STATE(220)] = 7182,
  [SMALL_STATE(221)] = 7202,
  [SMALL_STATE(222)] = 7224,
  [SMALL_STATE(223)] = 7244,
  [SMALL_STATE(224)] = 7260,
  [SMALL_STATE(225)] = 7280,
  [SMALL_STATE(226)] = 7297,
  [SMALL_STATE(227)] = 7316,
  [SMALL_STATE(228)] = 7333,
  [SMALL_STATE(229)] = 7350,
  [SMALL_STATE(230)] = 7367,
  [SMALL_STATE(231)] = 7384,
  [SMALL_STATE(232)] = 7397,
  [SMALL_STATE(233)] = 7406,
  [SMALL_STATE(234)] = 7417,
  [SMALL_STATE(235)] = 7434,
  [SMALL_STATE(236)] = 7451,
  [SMALL_STATE(237)] = 7468,
  [SMALL_STATE(238)] = 7485,
  [SMALL_STATE(239)] = 7502,
  [SMALL_STATE(240)] = 7519,
  [SMALL_STATE(241)] = 7530,
  [SMALL_STATE(242)] = 7547,
  [SMALL_STATE(243)] = 7564,
  [SMALL_STATE(244)] = 7581,
  [SMALL_STATE(245)] = 7598,
  [SMALL_STATE(246)] = 7615,
  [SMALL_STATE(247)] = 7634,
  [SMALL_STATE(248)] = 7645,
  [SMALL_STATE(249)] = 7660,
  [SMALL_STATE(250)] = 7671,
  [SMALL_STATE(251)] = 7686,
  [SMALL_STATE(252)] = 7698,
  [SMALL_STATE(253)] = 7712,
  [SMALL_STATE(254)] = 7726,
  [SMALL_STATE(255)] = 7740,
  [SMALL_STATE(256)] = 7752,
  [SMALL_STATE(257)] = 7760,
  [SMALL_STATE(258)] = 7772,
  [SMALL_STATE(259)] = 7782,
  [SMALL_STATE(260)] = 7792,
  [SMALL_STATE(261)] = 7806,
  [SMALL_STATE(262)] = 7820,
  [SMALL_STATE(263)] = 7832,
  [SMALL_STATE(264)] = 7844,
  [SMALL_STATE(265)] = 7858,
  [SMALL_STATE(266)] = 7868,
  [SMALL_STATE(267)] = 7878,
  [SMALL_STATE(268)] = 7890,
  [SMALL_STATE(269)] = 7904,
  [SMALL_STATE(270)] = 7916,
  [SMALL_STATE(271)] = 7930,
  [SMALL_STATE(272)] = 7942,
  [SMALL_STATE(273)] = 7954,
  [SMALL_STATE(274)] = 7962,
  [SMALL_STATE(275)] = 7976,
  [SMALL_STATE(276)] = 7986,
  [SMALL_STATE(277)] = 8000,
  [SMALL_STATE(278)] = 8010,
  [SMALL_STATE(279)] = 8024,
  [SMALL_STATE(280)] = 8038,
  [SMALL_STATE(281)] = 8052,
  [SMALL_STATE(282)] = 8060,
  [SMALL_STATE(283)] = 8072,
  [SMALL_STATE(284)] = 8080,
  [SMALL_STATE(285)] = 8090,
  [SMALL_STATE(286)] = 8104,
  [SMALL_STATE(287)] = 8118,
  [SMALL_STATE(288)] = 8126,
  [SMALL_STATE(289)] = 8136,
  [SMALL_STATE(290)] = 8150,
  [SMALL_STATE(291)] = 8164,
  [SMALL_STATE(292)] = 8178,
  [SMALL_STATE(293)] = 8192,
  [SMALL_STATE(294)] = 8206,
  [SMALL_STATE(295)] = 8220,
  [SMALL_STATE(296)] = 8232,
  [SMALL_STATE(297)] = 8242,
  [SMALL_STATE(298)] = 8254,
  [SMALL_STATE(299)] = 8266,
  [SMALL_STATE(300)] = 8280,
  [SMALL_STATE(301)] = 8291,
  [SMALL_STATE(302)] = 8302,
  [SMALL_STATE(303)] = 8309,
  [SMALL_STATE(304)] = 8320,
  [SMALL_STATE(305)] = 8331,
  [SMALL_STATE(306)] = 8342,
  [SMALL_STATE(307)] = 8353,
  [SMALL_STATE(308)] = 8364,
  [SMALL_STATE(309)] = 8375,
  [SMALL_STATE(310)] = 8386,
  [SMALL_STATE(311)] = 8397,
  [SMALL_STATE(312)] = 8408,
  [SMALL_STATE(313)] = 8419,
  [SMALL_STATE(314)] = 8430,
  [SMALL_STATE(315)] = 8441,
  [SMALL_STATE(316)] = 8452,
  [SMALL_STATE(317)] = 8463,
  [SMALL_STATE(318)] = 8470,
  [SMALL_STATE(319)] = 8481,
  [SMALL_STATE(320)] = 8492,
  [SMALL_STATE(321)] = 8503,
  [SMALL_STATE(322)] = 8514,
  [SMALL_STATE(323)] = 8525,
  [SMALL_STATE(324)] = 8536,
  [SMALL_STATE(325)] = 8547,
  [SMALL_STATE(326)] = 8558,
  [SMALL_STATE(327)] = 8569,
  [SMALL_STATE(328)] = 8580,
  [SMALL_STATE(329)] = 8591,
  [SMALL_STATE(330)] = 8602,
  [SMALL_STATE(331)] = 8613,
  [SMALL_STATE(332)] = 8620,
  [SMALL_STATE(333)] = 8631,
  [SMALL_STATE(334)] = 8642,
  [SMALL_STATE(335)] = 8653,
  [SMALL_STATE(336)] = 8664,
  [SMALL_STATE(337)] = 8675,
  [SMALL_STATE(338)] = 8686,
  [SMALL_STATE(339)] = 8697,
  [SMALL_STATE(340)] = 8708,
  [SMALL_STATE(341)] = 8715,
  [SMALL_STATE(342)] = 8726,
  [SMALL_STATE(343)] = 8739,
  [SMALL_STATE(344)] = 8750,
  [SMALL_STATE(345)] = 8761,
  [SMALL_STATE(346)] = 8768,
  [SMALL_STATE(347)] = 8779,
  [SMALL_STATE(348)] = 8790,
  [SMALL_STATE(349)] = 8801,
  [SMALL_STATE(350)] = 8812,
  [SMALL_STATE(351)] = 8823,
  [SMALL_STATE(352)] = 8834,
  [SMALL_STATE(353)] = 8845,
  [SMALL_STATE(354)] = 8856,
  [SMALL_STATE(355)] = 8867,
  [SMALL_STATE(356)] = 8878,
  [SMALL_STATE(357)] = 8889,
  [SMALL_STATE(358)] = 8900,
  [SMALL_STATE(359)] = 8911,
  [SMALL_STATE(360)] = 8922,
  [SMALL_STATE(361)] = 8933,
  [SMALL_STATE(362)] = 8940,
  [SMALL_STATE(363)] = 8947,
  [SMALL_STATE(364)] = 8958,
  [SMALL_STATE(365)] = 8969,
  [SMALL_STATE(366)] = 8977,
  [SMALL_STATE(367)] = 8985,
  [SMALL_STATE(368)] = 8995,
  [SMALL_STATE(369)] = 9005,
  [SMALL_STATE(370)] = 9015,
  [SMALL_STATE(371)] = 9023,
  [SMALL_STATE(372)] = 9031,
  [SMALL_STATE(373)] = 9039,
  [SMALL_STATE(374)] = 9047,
  [SMALL_STATE(375)] = 9055,
  [SMALL_STATE(376)] = 9063,
  [SMALL_STATE(377)] = 9073,
  [SMALL_STATE(378)] = 9081,
  [SMALL_STATE(379)] = 9089,
  [SMALL_STATE(380)] = 9097,
  [SMALL_STATE(381)] = 9105,
  [SMALL_STATE(382)] = 9113,
  [SMALL_STATE(383)] = 9121,
  [SMALL_STATE(384)] = 9131,
  [SMALL_STATE(385)] = 9139,
  [SMALL_STATE(386)] = 9149,
  [SMALL_STATE(387)] = 9157,
  [SMALL_STATE(388)] = 9165,
  [SMALL_STATE(389)] = 9175,
  [SMALL_STATE(390)] = 9183,
  [SMALL_STATE(391)] = 9191,
  [SMALL_STATE(392)] = 9199,
  [SMALL_STATE(393)] = 9207,
  [SMALL_STATE(394)] = 9215,
  [SMALL_STATE(395)] = 9225,
  [SMALL_STATE(396)] = 9233,
  [SMALL_STATE(397)] = 9241,
  [SMALL_STATE(398)] = 9249,
  [SMALL_STATE(399)] = 9259,
  [SMALL_STATE(400)] = 9269,
  [SMALL_STATE(401)] = 9279,
  [SMALL_STATE(402)] = 9287,
  [SMALL_STATE(403)] = 9295,
  [SMALL_STATE(404)] = 9305,
  [SMALL_STATE(405)] = 9312,
  [SMALL_STATE(406)] = 9319,
  [SMALL_STATE(407)] = 9326,
  [SMALL_STATE(408)] = 9331,
  [SMALL_STATE(409)] = 9336,
  [SMALL_STATE(410)] = 9343,
  [SMALL_STATE(411)] = 9350,
  [SMALL_STATE(412)] = 9357,
  [SMALL_STATE(413)] = 9364,
  [SMALL_STATE(414)] = 9371,
  [SMALL_STATE(415)] = 9376,
  [SMALL_STATE(416)] = 9383,
  [SMALL_STATE(417)] = 9390,
  [SMALL_STATE(418)] = 9397,
  [SMALL_STATE(419)] = 9404,
  [SMALL_STATE(420)] = 9409,
  [SMALL_STATE(421)] = 9414,
  [SMALL_STATE(422)] = 9421,
  [SMALL_STATE(423)] = 9428,
  [SMALL_STATE(424)] = 9435,
  [SMALL_STATE(425)] = 9442,
  [SMALL_STATE(426)] = 9446,
  [SMALL_STATE(427)] = 9450,
  [SMALL_STATE(428)] = 9454,
  [SMALL_STATE(429)] = 9458,
  [SMALL_STATE(430)] = 9462,
  [SMALL_STATE(431)] = 9466,
  [SMALL_STATE(432)] = 9470,
  [SMALL_STATE(433)] = 9474,
  [SMALL_STATE(434)] = 9478,
  [SMALL_STATE(435)] = 9482,
  [SMALL_STATE(436)] = 9486,
  [SMALL_STATE(437)] = 9490,
  [SMALL_STATE(438)] = 9494,
  [SMALL_STATE(439)] = 9498,
  [SMALL_STATE(440)] = 9502,
  [SMALL_STATE(441)] = 9506,
  [SMALL_STATE(442)] = 9510,
  [SMALL_STATE(443)] = 9514,
  [SMALL_STATE(444)] = 9518,
  [SMALL_STATE(445)] = 9522,
  [SMALL_STATE(446)] = 9526,
  [SMALL_STATE(447)] = 9530,
  [SMALL_STATE(448)] = 9534,
  [SMALL_STATE(449)] = 9538,
  [SMALL_STATE(450)] = 9542,
  [SMALL_STATE(451)] = 9546,
  [SMALL_STATE(452)] = 9550,
  [SMALL_STATE(453)] = 9554,
  [SMALL_STATE(454)] = 9558,
  [SMALL_STATE(455)] = 9562,
  [SMALL_STATE(456)] = 9566,
  [SMALL_STATE(457)] = 9570,
  [SMALL_STATE(458)] = 9574,
  [SMALL_STATE(459)] = 9578,
  [SMALL_STATE(460)] = 9582,
  [SMALL_STATE(461)] = 9586,
  [SMALL_STATE(462)] = 9590,
  [SMALL_STATE(463)] = 9594,
  [SMALL_STATE(464)] = 9598,
  [SMALL_STATE(465)] = 9602,
  [SMALL_STATE(466)] = 9606,
  [SMALL_STATE(467)] = 9610,
  [SMALL_STATE(468)] = 9614,
  [SMALL_STATE(469)] = 9618,
  [SMALL_STATE(470)] = 9622,
  [SMALL_STATE(471)] = 9626,
  [SMALL_STATE(472)] = 9630,
  [SMALL_STATE(473)] = 9634,
  [SMALL_STATE(474)] = 9638,
  [SMALL_STATE(475)] = 9642,
  [SMALL_STATE(476)] = 9646,
  [SMALL_STATE(477)] = 9650,
  [SMALL_STATE(478)] = 9654,
  [SMALL_STATE(479)] = 9658,
  [SMALL_STATE(480)] = 9662,
  [SMALL_STATE(481)] = 9666,
  [SMALL_STATE(482)] = 9670,
  [SMALL_STATE(483)] = 9674,
  [SMALL_STATE(484)] = 9678,
  [SMALL_STATE(485)] = 9682,
  [SMALL_STATE(486)] = 9686,
  [SMALL_STATE(487)] = 9690,
  [SMALL_STATE(488)] = 9694,
  [SMALL_STATE(489)] = 9698,
  [SMALL_STATE(490)] = 9702,
  [SMALL_STATE(491)] = 9706,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(364),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(392),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(370),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(379),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(386),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automated_xact, 5, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automated_xact, 5, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 4, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 6, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 6, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 8, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 8, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_quantity, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_quantity, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 10, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 10, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 15, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 15, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 16, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 16, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 4, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 4, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 5, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 5, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 5, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 6, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 6, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 6, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 4, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 7, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 7, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 7, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(477),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(491),
  [753] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 3, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 3, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 4, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 4, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 5, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 5, 0, 0),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5, 0, 0),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 1, 0, 0),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1, 0, 0),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 3, 0, 0),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 3, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [897] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [907] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [924] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_spec, 1, 0, 0),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1, 0, 0),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, 0, 3),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7, 0, 0),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, 0, 1),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_date, 2, 0, 0),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2, 0, 0),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5, 0, 0),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interval_date_spec, 3, 0, 0),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2, 0, 0),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3, 0, 0),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1065] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [1068] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_date_spec, 3, 0, 0),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3, 0, 0),
  [1083] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0), SHIFT_REPEAT(344),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 2, 0, 0),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, 0, 0),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, 0, 0),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [1115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(360),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0), SHIFT_REPEAT(369),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interval_date_spec, 1, 0, 2),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 3, 0, 0),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interval_date_spec, 7, 0, 0),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8, 0, 0),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4, 0, 0),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5, 0, 0),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1250] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3, 0, 0),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10, 0, 0),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6, 0, 0),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3, 0, 0),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1, 0, 0),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1, 0, 0),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1, 0, 0),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5, 0, 0),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1, 0, 0),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9, 0, 0),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3, 0, 0),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5, 0, 0),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7, 0, 0),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
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
