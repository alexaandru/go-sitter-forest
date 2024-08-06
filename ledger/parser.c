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
#define STATE_COUNT 368
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 3

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
  aux_sym_interval_token1 = 45,
  aux_sym_interval_token2 = 46,
  aux_sym_interval_token3 = 47,
  aux_sym_interval_token4 = 48,
  aux_sym_interval_token5 = 49,
  aux_sym_interval_token6 = 50,
  aux_sym_interval_token7 = 51,
  aux_sym_interval_token8 = 52,
  aux_sym_interval_token9 = 53,
  aux_sym_interval_token10 = 54,
  aux_sym_interval_token11 = 55,
  aux_sym_interval_token12 = 56,
  aux_sym_interval_token13 = 57,
  aux_sym_interval_token14 = 58,
  aux_sym_interval_token15 = 59,
  aux_sym_interval_token16 = 60,
  aux_sym_interval_token17 = 61,
  sym__dsep = 62,
  sym__2d = 63,
  sym_time = 64,
  anon_sym_STAR = 65,
  anon_sym_BANG = 66,
  anon_sym_LPAREN = 67,
  aux_sym_code_token1 = 68,
  anon_sym_RPAREN = 69,
  sym_payee = 70,
  sym_query = 71,
  anon_sym_SEMI = 72,
  anon_sym_LBRACK = 73,
  anon_sym_RBRACK = 74,
  aux_sym_note_token1 = 75,
  sym_account_name = 76,
  sym__quantity = 77,
  anon_sym_PLUS = 78,
  aux_sym_commodity_token1 = 79,
  aux_sym_commodity_token2 = 80,
  aux_sym_commodity_token3 = 81,
  anon_sym_AT = 82,
  anon_sym_AT_AT = 83,
  anon_sym_SPACE = 84,
  anon_sym_TAB = 85,
  anon_sym_ = 86,
  anon_sym_TAB2 = 87,
  sym_source_file = 88,
  sym_journal_item = 89,
  sym_block_comment = 90,
  sym_test = 91,
  sym_option = 92,
  sym_option_value = 93,
  sym_directive = 94,
  sym_account_directive = 95,
  sym_account_subdirective = 96,
  sym_commodity_directive = 97,
  sym_commodity_subdirective = 98,
  sym_tag_directive = 99,
  sym_word_directive = 100,
  sym_filename = 101,
  sym_char_directive = 102,
  sym_alias_subdirective = 103,
  sym_default_subdirective = 104,
  sym_format_subdirective = 105,
  sym_note_subdirective = 106,
  sym_assert_subdirective = 107,
  sym_check_subdirective = 108,
  sym_check_in = 109,
  sym_check_out = 110,
  sym_xact = 111,
  sym_plain_xact = 112,
  sym_periodic_xact = 113,
  sym_interval = 114,
  sym_automated_xact = 115,
  sym__xact_date = 116,
  sym_date = 117,
  sym_effective_date = 118,
  sym__4d = 119,
  sym__single_date = 120,
  sym_status = 121,
  sym_code = 122,
  sym_note = 123,
  sym_posting = 124,
  sym_account = 125,
  sym_amount = 126,
  sym_quantity = 127,
  sym_negative_quantity = 128,
  sym_commodity = 129,
  sym_price = 130,
  sym_balance_assertion = 131,
  aux_sym_source_file_repeat1 = 132,
  aux_sym_block_comment_repeat1 = 133,
  aux_sym_account_directive_repeat1 = 134,
  aux_sym_commodity_directive_repeat1 = 135,
  aux_sym_tag_directive_repeat1 = 136,
  aux_sym_plain_xact_repeat1 = 137,
  aux_sym_whitespace_repeat1 = 138,
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
  [aux_sym_interval_token1] = "interval_token1",
  [aux_sym_interval_token2] = "interval_token2",
  [aux_sym_interval_token3] = "interval_token3",
  [aux_sym_interval_token4] = "interval_token4",
  [aux_sym_interval_token5] = "interval_token5",
  [aux_sym_interval_token6] = "interval_token6",
  [aux_sym_interval_token7] = "interval_token7",
  [aux_sym_interval_token8] = "interval_token8",
  [aux_sym_interval_token9] = "interval_token9",
  [aux_sym_interval_token10] = "interval_token10",
  [aux_sym_interval_token11] = "interval_token11",
  [aux_sym_interval_token12] = "interval_token12",
  [aux_sym_interval_token13] = "interval_token13",
  [aux_sym_interval_token14] = "interval_token14",
  [aux_sym_interval_token15] = "interval_token15",
  [aux_sym_interval_token16] = "interval_token16",
  [aux_sym_interval_token17] = "interval_token17",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_note_token1] = "note_token1",
  [sym_account_name] = "",
  [sym__quantity] = "_quantity",
  [anon_sym_PLUS] = "+",
  [aux_sym_commodity_token1] = "commodity_token1",
  [aux_sym_commodity_token2] = "commodity_token2",
  [aux_sym_commodity_token3] = "commodity_token3",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_SPACE] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_] = "  ",
  [anon_sym_TAB2] = " \t",
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
  [sym_automated_xact] = "automated_xact",
  [sym__xact_date] = "_xact_date",
  [sym_date] = "date",
  [sym_effective_date] = "effective_date",
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
  [sym_price] = "price",
  [sym_balance_assertion] = "balance_assertion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_account_directive_repeat1] = "account_directive_repeat1",
  [aux_sym_commodity_directive_repeat1] = "commodity_directive_repeat1",
  [aux_sym_tag_directive_repeat1] = "tag_directive_repeat1",
  [aux_sym_plain_xact_repeat1] = "plain_xact_repeat1",
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
  [aux_sym_interval_token1] = aux_sym_interval_token1,
  [aux_sym_interval_token2] = aux_sym_interval_token2,
  [aux_sym_interval_token3] = aux_sym_interval_token3,
  [aux_sym_interval_token4] = aux_sym_interval_token4,
  [aux_sym_interval_token5] = aux_sym_interval_token5,
  [aux_sym_interval_token6] = aux_sym_interval_token6,
  [aux_sym_interval_token7] = aux_sym_interval_token7,
  [aux_sym_interval_token8] = aux_sym_interval_token8,
  [aux_sym_interval_token9] = aux_sym_interval_token9,
  [aux_sym_interval_token10] = aux_sym_interval_token10,
  [aux_sym_interval_token11] = aux_sym_interval_token11,
  [aux_sym_interval_token12] = aux_sym_interval_token12,
  [aux_sym_interval_token13] = aux_sym_interval_token13,
  [aux_sym_interval_token14] = aux_sym_interval_token14,
  [aux_sym_interval_token15] = aux_sym_interval_token15,
  [aux_sym_interval_token16] = aux_sym_interval_token16,
  [aux_sym_interval_token17] = aux_sym_interval_token17,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_note_token1] = aux_sym_note_token1,
  [sym_account_name] = sym_account_name,
  [sym__quantity] = sym__quantity,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_commodity_token1] = aux_sym_commodity_token1,
  [aux_sym_commodity_token2] = aux_sym_commodity_token2,
  [aux_sym_commodity_token3] = aux_sym_commodity_token3,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB2] = anon_sym_TAB2,
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
  [sym_automated_xact] = sym_automated_xact,
  [sym__xact_date] = sym__xact_date,
  [sym_date] = sym_date,
  [sym_effective_date] = sym_effective_date,
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
  [sym_price] = sym_price,
  [sym_balance_assertion] = sym_balance_assertion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_account_directive_repeat1] = aux_sym_account_directive_repeat1,
  [aux_sym_commodity_directive_repeat1] = aux_sym_commodity_directive_repeat1,
  [aux_sym_tag_directive_repeat1] = aux_sym_tag_directive_repeat1,
  [aux_sym_plain_xact_repeat1] = aux_sym_plain_xact_repeat1,
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
  [aux_sym_interval_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token17] = {
    .visible = false,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_token1] = {
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
    [0] = sym_account_name,
    [2] = sym_account_name,
  },
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
  [26] = 23,
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
  [41] = 21,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 20,
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
  [91] = 77,
  [92] = 92,
  [93] = 93,
  [94] = 77,
  [95] = 95,
  [96] = 46,
  [97] = 97,
  [98] = 98,
  [99] = 10,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 20,
  [107] = 23,
  [108] = 108,
  [109] = 21,
  [110] = 110,
  [111] = 111,
  [112] = 77,
  [113] = 113,
  [114] = 77,
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
  [128] = 115,
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
  [139] = 127,
  [140] = 136,
  [141] = 141,
  [142] = 142,
  [143] = 34,
  [144] = 144,
  [145] = 144,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 28,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 77,
  [155] = 155,
  [156] = 156,
  [157] = 157,
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
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 77,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 177,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 171,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 77,
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
  [216] = 197,
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
  [235] = 77,
  [236] = 236,
  [237] = 77,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 77,
  [247] = 247,
  [248] = 77,
  [249] = 218,
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
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 77,
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
  [335] = 335,
  [336] = 336,
  [337] = 337,
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
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 336,
  [362] = 320,
  [363] = 304,
  [364] = 313,
  [365] = 320,
  [366] = 304,
  [367] = 367,
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
  {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915}, {0x10920, 0x1092b},
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
  {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915}, {0x10920, 0x1092b},
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
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '\t', 561,
        '\n', 210,
        ' ', 553,
        '!', 414,
        '"', 30,
        '(', 416,
        ')', 419,
        '*', 412,
        '+', 430,
        '-', 290,
        ';', 422,
        '=', 295,
        '@', 551,
        'A', 335,
        'B', 518,
        'C', 349,
        'D', 345,
        'I', 370,
        'N', 342,
        'O', 376,
        'P', 352,
        'Y', 338,
        '[', 423,
        ']', 425,
        'a', 441,
        'b', 503,
        'c', 465,
        'd', 450,
        'e', 478,
        'f', 483,
        'i', 366,
        'n', 484,
        'o', 373,
        'p', 434,
        't', 435,
        'y', 432,
        '~', 378,
        'M', 532,
        'm', 532,
        'Q', 540,
        'q', 540,
        'W', 512,
        'w', 512,
        '.', 404,
        '/', 404,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(549);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(548);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 561,
        '\n', 210,
        ' ', 553,
        '"', 30,
        '+', 430,
        '-', 289,
        ';', 422,
        '=', 295,
        '@', 551,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(549);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(548);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\t', 561,
        '\n', 210,
        ' ', 553,
        ';', 422,
        '=', 295,
        'D', 108,
        'E', 185,
        ']', 425,
        'a', 72,
        'c', 65,
        'd', 55,
        'e', 33,
        'f', 85,
        'n', 83,
        'p', 37,
        'B', 138,
        'b', 138,
        'M', 156,
        'm', 156,
        'Q', 182,
        'q', 182,
        'W', 123,
        'w', 123,
        'Y', 128,
        'y', 128,
      );
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(561);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(561);
      if (lookahead == ' ') ADVANCE(553);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == ';') ADVANCE(422);
      if (lookahead == '=') ADVANCE(295);
      if (lookahead == '@') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(549);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(561);
      if (lookahead == ' ') ADVANCE(553);
      if (lookahead == '+') ADVANCE(430);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(561);
      if (lookahead == ' ') ADVANCE(553);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(563);
      if (lookahead == ' ') ADVANCE(553);
      if (lookahead == '!') ADVANCE(415);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead == ';') ADVANCE(422);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(563);
      if (lookahead == ' ') ADVANCE(553);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(428);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(564);
      if (lookahead == ' ') ADVANCE(555);
      if (lookahead == '!') ADVANCE(414);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(565);
      if (lookahead == ' ') ADVANCE(556);
      if (lookahead == '[') ADVANCE(423);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(562);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(571);
      if (lookahead == ' ') ADVANCE(570);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(569);
      if (lookahead == ' ') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(321);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(568);
      if (lookahead == ' ') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(421);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(21);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(17);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(22);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 'h') ADVANCE(18);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 'k') ADVANCE(364);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(25);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 's') ADVANCE(24);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 's') ADVANCE(19);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 't') ADVANCE(361);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(314);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(200);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(201);
      END_STATE();
    case 33:
      if (lookahead == 'V') ADVANCE(119);
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(322);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(311);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'k') ADVANCE(363);
      END_STATE();
    case 70:
      if (lookahead == 'k') ADVANCE(57);
      END_STATE();
    case 71:
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 107:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 117:
      ADVANCE_MAP(
        'D', 113,
        'd', 113,
        'M', 157,
        'm', 157,
        'Q', 183,
        'q', 183,
        'W', 124,
        'w', 124,
        'Y', 129,
        'y', 129,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 118:
      ADVANCE_MAP(
        'D', 114,
        'd', 114,
        'M', 158,
        'm', 158,
        'Q', 184,
        'q', 184,
        'W', 126,
        'w', 126,
        'Y', 130,
        'y', 130,
      );
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 134:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(382);
      END_STATE();
    case 135:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(173);
      END_STATE();
    case 136:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 137:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(149);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 140:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(381);
      END_STATE();
    case 141:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(171);
      END_STATE();
    case 142:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(145);
      END_STATE();
    case 143:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(148);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 151:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(159);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(133);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 154:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 156:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 157:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 158:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 159:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 160:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 161:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 162:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 163:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 164:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 165:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 166:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 167:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 168:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 169:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 170:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      END_STATE();
    case 171:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(386);
      END_STATE();
    case 172:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(389);
      END_STATE();
    case 173:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(387);
      END_STATE();
    case 174:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(388);
      END_STATE();
    case 175:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 176:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 177:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 178:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 179:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 180:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 181:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 182:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 183:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 184:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 185:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 186:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(390);
      END_STATE();
    case 187:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 188:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(392);
      END_STATE();
    case 189:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(402);
      END_STATE();
    case 190:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(396);
      END_STATE();
    case 191:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(394);
      END_STATE();
    case 192:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(380);
      END_STATE();
    case 193:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(398);
      END_STATE();
    case 194:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(400);
      END_STATE();
    case 195:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 196:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 203:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(428);
      END_STATE();
    case 204:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(294);
      END_STATE();
    case 205:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(428);
      END_STATE();
    case 206:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 207:
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '\t', 561,
        '\n', 210,
        ' ', 553,
        '"', 30,
        '-', 290,
        '=', 295,
        'A', 335,
        'C', 349,
        'D', 346,
        'I', 370,
        'N', 342,
        'O', 376,
        'P', 352,
        'Y', 339,
        'a', 442,
        'b', 504,
        'c', 482,
        'd', 454,
        'e', 479,
        'i', 366,
        'o', 373,
        't', 435,
        'y', 458,
        '~', 378,
        '#', 16,
        '%', 16,
        '*', 16,
        ';', 16,
        '|', 16,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(549);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(548);
      END_STATE();
    case 208:
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '\t', 561,
        '\n', 210,
        ' ', 553,
        '-', 290,
        '=', 295,
        'A', 334,
        'C', 348,
        'D', 344,
        'I', 369,
        'N', 341,
        'O', 375,
        'P', 351,
        'Y', 337,
        'a', 42,
        'b', 103,
        'c', 66,
        'd', 50,
        'e', 80,
        'i', 367,
        'o', 372,
        't', 34,
        'y', 51,
        '~', 378,
        '#', 16,
        '%', 16,
        '*', 16,
        ';', 16,
        '|', 16,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_comment);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(566);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == ' ') ADVANCE(557);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(566);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == ' ') ADVANCE(557);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'g') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'y') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '\n', 210,
        '-', 291,
        '=', 296,
        'A', 336,
        'C', 350,
        'D', 347,
        'I', 371,
        'N', 343,
        'O', 377,
        'P', 353,
        'Y', 340,
        'a', 222,
        'b', 271,
        'c', 255,
        'd', 232,
        'e', 249,
        'i', 368,
        'o', 374,
        't', 219,
        'y', 233,
        '~', 379,
        '#', 218,
        '%', 218,
        '*', 218,
        ';', 218,
        '|', 218,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_end);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_test);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_endtest);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_option_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_option_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_account);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_eval);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_account_subdirective_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_payee);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_tag);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_tag_directive_token1);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_include);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_alias);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'a') ADVANCE(506);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_def);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_year);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_A);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_Y);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_N);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(519);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_D);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_C);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_P);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_default);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_format);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_note);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(314);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(26);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_assert);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(314);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 431, lookahead)) ADVANCE(26);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_check);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(445);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_I);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_o);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_O);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_interval_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_interval_token2);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_interval_token3);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_interval_token4);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_interval_token5);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_interval_token6);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_interval_token7);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_interval_token8);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_interval_token9);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_interval_token10);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__2d);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__2d);
      if (lookahead == ':') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(427);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(427);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(427);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_query);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(427);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(427);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__quantity);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(433);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E') ADVANCE(509);
      if (lookahead == 'e') ADVANCE(431);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(327);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(508);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead == 'e') ADVANCE(490);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(471);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(491);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(489);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(486);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(496);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead == 's') ADVANCE(492);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(466);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(469);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(468);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(472);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(485);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(282);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(467);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(453);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(519);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(359);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(305);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(316);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(463);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(487);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(495);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(444);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(439);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(452);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(500);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(448);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(323);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(324);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'g') ADVANCE(312);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'h') ADVANCE(457);
      if (lookahead == 'o') ADVANCE(475);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(437);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(501);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(365);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(456);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(460);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(302);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(505);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(499);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(461);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(474);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(438);
      if (lookahead == 't') ADVANCE(451);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(440);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(447);
      if (lookahead == 'v') ADVANCE(436);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(447);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(497);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(498);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(475);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(488);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(476);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(502);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(328);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(494);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(477);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(470);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(493);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(319);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(455);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(286);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(362);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(332);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(357);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(299);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(213);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(355);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(310);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(507);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(480);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(443);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(529);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(443);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(449);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(473);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(307);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(459);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(525);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(527);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(529);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(522);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(524);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(526);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(543);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(544);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(545);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(546);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(547);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(533);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(515);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(537);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(539);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(531);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(523);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(513);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(517);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(510);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(391);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(403);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(393);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(397);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(395);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(399);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(401);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(420);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(426);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(421);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(321);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(427);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(420);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(426);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(421);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(321);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 208},
  [2] = {.lex_state = 208},
  [3] = {.lex_state = 208},
  [4] = {.lex_state = 208},
  [5] = {.lex_state = 208},
  [6] = {.lex_state = 208},
  [7] = {.lex_state = 208},
  [8] = {.lex_state = 208},
  [9] = {.lex_state = 208},
  [10] = {.lex_state = 207},
  [11] = {.lex_state = 208},
  [12] = {.lex_state = 208},
  [13] = {.lex_state = 208},
  [14] = {.lex_state = 208},
  [15] = {.lex_state = 208},
  [16] = {.lex_state = 208},
  [17] = {.lex_state = 208},
  [18] = {.lex_state = 208},
  [19] = {.lex_state = 208},
  [20] = {.lex_state = 207},
  [21] = {.lex_state = 207},
  [22] = {.lex_state = 208},
  [23] = {.lex_state = 207},
  [24] = {.lex_state = 208},
  [25] = {.lex_state = 208},
  [26] = {.lex_state = 208},
  [27] = {.lex_state = 208},
  [28] = {.lex_state = 208},
  [29] = {.lex_state = 208},
  [30] = {.lex_state = 208},
  [31] = {.lex_state = 208},
  [32] = {.lex_state = 208},
  [33] = {.lex_state = 208},
  [34] = {.lex_state = 208},
  [35] = {.lex_state = 208},
  [36] = {.lex_state = 208},
  [37] = {.lex_state = 208},
  [38] = {.lex_state = 208},
  [39] = {.lex_state = 208},
  [40] = {.lex_state = 208},
  [41] = {.lex_state = 208},
  [42] = {.lex_state = 208},
  [43] = {.lex_state = 208},
  [44] = {.lex_state = 208},
  [45] = {.lex_state = 208},
  [46] = {.lex_state = 208},
  [47] = {.lex_state = 208},
  [48] = {.lex_state = 208},
  [49] = {.lex_state = 208},
  [50] = {.lex_state = 208},
  [51] = {.lex_state = 208},
  [52] = {.lex_state = 208},
  [53] = {.lex_state = 278},
  [54] = {.lex_state = 278},
  [55] = {.lex_state = 278},
  [56] = {.lex_state = 278},
  [57] = {.lex_state = 278},
  [58] = {.lex_state = 278},
  [59] = {.lex_state = 278},
  [60] = {.lex_state = 278},
  [61] = {.lex_state = 208},
  [62] = {.lex_state = 208},
  [63] = {.lex_state = 208},
  [64] = {.lex_state = 208},
  [65] = {.lex_state = 208},
  [66] = {.lex_state = 208},
  [67] = {.lex_state = 208},
  [68] = {.lex_state = 208},
  [69] = {.lex_state = 208},
  [70] = {.lex_state = 208},
  [71] = {.lex_state = 208},
  [72] = {.lex_state = 208},
  [73] = {.lex_state = 208},
  [74] = {.lex_state = 208},
  [75] = {.lex_state = 208},
  [76] = {.lex_state = 208},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 215},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 216},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 216},
  [121] = {.lex_state = 215},
  [122] = {.lex_state = 208},
  [123] = {.lex_state = 208},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 216},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 216},
  [131] = {.lex_state = 208},
  [132] = {.lex_state = 215},
  [133] = {.lex_state = 215},
  [134] = {.lex_state = 208},
  [135] = {.lex_state = 208},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 215},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 216},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 215},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 215},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 216},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 216},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 208},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 14},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 11},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 217},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 217},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 11},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 217},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 14},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 11},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 9},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 11},
  [245] = {.lex_state = 11},
  [246] = {.lex_state = 15},
  [247] = {.lex_state = 11},
  [248] = {.lex_state = 217},
  [249] = {.lex_state = 217},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 208},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 3},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 15},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 3},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 14},
  [266] = {.lex_state = 13},
  [267] = {.lex_state = 13},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 9},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 206},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 206},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 418},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 205},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 205},
  [332] = {.lex_state = 3},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 3},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 3},
  [340] = {.lex_state = 2},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 2},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 1},
  [363] = {.lex_state = 1},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 1},
  [366] = {.lex_state = 1},
  [367] = {.lex_state = 204},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_payee] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_nomarket] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
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
    [aux_sym_interval_token11] = ACTIONS(1),
    [aux_sym_interval_token12] = ACTIONS(1),
    [aux_sym_interval_token13] = ACTIONS(1),
    [aux_sym_interval_token14] = ACTIONS(1),
    [aux_sym_interval_token15] = ACTIONS(1),
    [aux_sym_interval_token16] = ACTIONS(1),
    [aux_sym_interval_token17] = ACTIONS(1),
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
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(343),
    [sym_journal_item] = STATE(2),
    [sym_block_comment] = STATE(75),
    [sym_test] = STATE(75),
    [sym_option] = STATE(65),
    [sym_directive] = STATE(75),
    [sym_account_directive] = STATE(65),
    [sym_commodity_directive] = STATE(65),
    [sym_tag_directive] = STATE(65),
    [sym_word_directive] = STATE(342),
    [sym_char_directive] = STATE(342),
    [sym_check_in] = STATE(341),
    [sym_check_out] = STATE(341),
    [sym_xact] = STATE(75),
    [sym_plain_xact] = STATE(76),
    [sym_periodic_xact] = STATE(76),
    [sym_automated_xact] = STATE(76),
    [sym__xact_date] = STATE(184),
    [sym_date] = STATE(170),
    [sym__4d] = STATE(340),
    [sym__single_date] = STATE(173),
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
    STATE(170), 1,
      sym_date,
    STATE(173), 1,
      sym__single_date,
    STATE(184), 1,
      sym__xact_date,
    STATE(340), 1,
      sym__4d,
    ACTIONS(55), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(341), 2,
      sym_check_in,
      sym_check_out,
    STATE(342), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(76), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(65), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(75), 4,
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
    STATE(170), 1,
      sym_date,
    STATE(173), 1,
      sym__single_date,
    STATE(184), 1,
      sym__xact_date,
    STATE(340), 1,
      sym__4d,
    ACTIONS(142), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(341), 2,
      sym_check_in,
      sym_check_out,
    STATE(342), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(76), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(65), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(75), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
  [260] = 6,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(155), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(153), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(45), 5,
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
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(161), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(45), 5,
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
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(155), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(166), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(45), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(164), 27,
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
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(7), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(170), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(44), 4,
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
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(179), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(7), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(177), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(44), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(175), 27,
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
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(179), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(8), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(183), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(44), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(181), 27,
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
  [575] = 7,
    ACTIONS(189), 1,
      aux_sym_commodity_token1,
    STATE(34), 1,
      sym_commodity,
    STATE(145), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(191), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(193), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
    ACTIONS(187), 23,
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
  [627] = 5,
    STATE(194), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(199), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(197), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(13), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(195), 27,
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
  [674] = 5,
    STATE(194), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(205), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(203), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(12), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(201), 27,
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
  [721] = 5,
    STATE(194), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(199), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(210), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(12), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(208), 27,
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
  [768] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(214), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(212), 27,
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
  [814] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(222), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(220), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(218), 27,
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
  [860] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(227), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(225), 27,
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
  [906] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(231), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(229), 27,
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
  [952] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(235), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(233), 27,
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
  [998] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(239), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(237), 27,
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
  [1044] = 2,
    ACTIONS(241), 11,
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
    ACTIONS(243), 24,
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
  [1084] = 2,
    ACTIONS(245), 11,
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
    ACTIONS(247), 24,
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
  [1124] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
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
  [1170] = 2,
    ACTIONS(253), 11,
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
    ACTIONS(255), 24,
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
  [1210] = 2,
    ACTIONS(259), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(257), 29,
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
  [1247] = 2,
    ACTIONS(263), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(261), 29,
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
  [1284] = 2,
    ACTIONS(255), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(253), 29,
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
  [1321] = 2,
    ACTIONS(267), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(265), 29,
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
  [1358] = 2,
    ACTIONS(271), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(269), 29,
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
  [1395] = 2,
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
  [1432] = 2,
    ACTIONS(279), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(277), 29,
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
  [1469] = 2,
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
  [1506] = 2,
    ACTIONS(287), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(285), 29,
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
  [1543] = 2,
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
  [1580] = 2,
    ACTIONS(295), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(293), 29,
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
  [1617] = 2,
    ACTIONS(299), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(297), 29,
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
  [1654] = 2,
    ACTIONS(303), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(301), 29,
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
  [1691] = 2,
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
  [1728] = 2,
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
  [1765] = 2,
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
  [1802] = 2,
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
  [1839] = 2,
    ACTIONS(247), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(245), 29,
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
  [1876] = 2,
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
  [1913] = 2,
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
  [1950] = 2,
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
  [1987] = 2,
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
  [2024] = 2,
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
  [2061] = 2,
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
  [2098] = 2,
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
  [2135] = 2,
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
  [2172] = 2,
    ACTIONS(243), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(241), 29,
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
  [2209] = 2,
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
  [2246] = 2,
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
  [2283] = 3,
    ACTIONS(365), 1,
      aux_sym_block_comment_token1,
    ACTIONS(361), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(363), 27,
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
  [2321] = 3,
    ACTIONS(371), 1,
      aux_sym_block_comment_token1,
    ACTIONS(367), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(369), 27,
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
  [2359] = 3,
    ACTIONS(377), 1,
      aux_sym_block_comment_token1,
    ACTIONS(373), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(375), 27,
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
  [2397] = 3,
    ACTIONS(383), 1,
      aux_sym_block_comment_token1,
    ACTIONS(379), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(381), 27,
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
  [2435] = 3,
    ACTIONS(389), 1,
      aux_sym_block_comment_token1,
    ACTIONS(385), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(387), 27,
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
  [2473] = 3,
    ACTIONS(395), 1,
      aux_sym_block_comment_token1,
    ACTIONS(391), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(393), 27,
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
  [2511] = 3,
    ACTIONS(401), 1,
      aux_sym_block_comment_token1,
    ACTIONS(397), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(399), 27,
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
  [2549] = 3,
    ACTIONS(407), 1,
      aux_sym_block_comment_token1,
    ACTIONS(403), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(405), 27,
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
  [2587] = 2,
    ACTIONS(399), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(397), 27,
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
  [2622] = 2,
    ACTIONS(369), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(367), 27,
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
  [2657] = 2,
    ACTIONS(381), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(379), 27,
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
  [2692] = 2,
    ACTIONS(405), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(403), 27,
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
  [2727] = 2,
    ACTIONS(411), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(409), 27,
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
  [2762] = 2,
    ACTIONS(363), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(361), 27,
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
  [2797] = 2,
    ACTIONS(375), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(373), 27,
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
  [2832] = 2,
    ACTIONS(415), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(413), 27,
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
  [2867] = 2,
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
  [2902] = 2,
    ACTIONS(423), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(421), 27,
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
  [2937] = 2,
    ACTIONS(387), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(385), 27,
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
  [2972] = 2,
    ACTIONS(393), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(391), 27,
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
  [3007] = 2,
    ACTIONS(427), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(425), 27,
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
  [3042] = 2,
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
  [3077] = 2,
    ACTIONS(435), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(433), 27,
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
  [3112] = 2,
    ACTIONS(439), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(437), 27,
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
  [3147] = 3,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(441), 26,
      anon_sym_eval,
      anon_sym_payee,
      anon_sym_nomarket,
      anon_sym_alias,
      anon_sym_default,
      anon_sym_format,
      anon_sym_note,
      anon_sym_assert,
      anon_sym_check,
      aux_sym_interval_token1,
      aux_sym_interval_token2,
      aux_sym_interval_token3,
      aux_sym_interval_token4,
      aux_sym_interval_token5,
      aux_sym_interval_token6,
      aux_sym_interval_token7,
      aux_sym_interval_token8,
      aux_sym_interval_token9,
      aux_sym_interval_token10,
      aux_sym_interval_token11,
      aux_sym_interval_token12,
      aux_sym_interval_token13,
      aux_sym_interval_token14,
      aux_sym_interval_token15,
      aux_sym_interval_token16,
      aux_sym_interval_token17,
  [3183] = 4,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    STATE(296), 1,
      sym_interval,
    ACTIONS(448), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(446), 17,
      aux_sym_interval_token1,
      aux_sym_interval_token2,
      aux_sym_interval_token3,
      aux_sym_interval_token4,
      aux_sym_interval_token5,
      aux_sym_interval_token6,
      aux_sym_interval_token7,
      aux_sym_interval_token8,
      aux_sym_interval_token9,
      aux_sym_interval_token10,
      aux_sym_interval_token11,
      aux_sym_interval_token12,
      aux_sym_interval_token13,
      aux_sym_interval_token14,
      aux_sym_interval_token15,
      aux_sym_interval_token16,
      aux_sym_interval_token17,
  [3213] = 17,
    ACTIONS(450), 1,
      anon_sym_LF,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(100), 1,
      sym_amount,
    STATE(127), 1,
      sym_commodity,
    STATE(137), 1,
      sym_price,
    STATE(186), 1,
      sym_balance_assertion,
    STATE(356), 1,
      sym_note,
    ACTIONS(468), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3269] = 17,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    ACTIONS(470), 1,
      anon_sym_LF,
    STATE(84), 1,
      aux_sym_whitespace_repeat1,
    STATE(102), 1,
      sym_amount,
    STATE(119), 1,
      sym_price,
    STATE(127), 1,
      sym_commodity,
    STATE(174), 1,
      sym_balance_assertion,
    STATE(353), 1,
      sym_note,
    ACTIONS(472), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3325] = 17,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(101), 1,
      sym_amount,
    STATE(124), 1,
      sym_price,
    STATE(127), 1,
      sym_commodity,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(359), 1,
      sym_note,
    ACTIONS(476), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3381] = 16,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(101), 1,
      sym_amount,
    STATE(124), 1,
      sym_price,
    STATE(127), 1,
      sym_commodity,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(359), 1,
      sym_note,
    ACTIONS(478), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3434] = 16,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(102), 1,
      sym_amount,
    STATE(119), 1,
      sym_price,
    STATE(127), 1,
      sym_commodity,
    STATE(174), 1,
      sym_balance_assertion,
    STATE(353), 1,
      sym_note,
    ACTIONS(478), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3487] = 16,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(103), 1,
      sym_amount,
    STATE(116), 1,
      sym_price,
    STATE(127), 1,
      sym_commodity,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(345), 1,
      sym_note,
    ACTIONS(478), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3540] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_commodity,
    STATE(209), 1,
      sym_amount,
    ACTIONS(480), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3572] = 9,
    ACTIONS(482), 1,
      anon_sym_DASH,
    ACTIONS(484), 1,
      sym__quantity,
    ACTIONS(486), 1,
      anon_sym_PLUS,
    STATE(36), 1,
      sym_amount,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_commodity,
    ACTIONS(478), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(10), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3604] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_commodity,
    STATE(190), 1,
      sym_amount,
    ACTIONS(478), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3636] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_commodity,
    STATE(319), 1,
      sym_amount,
    ACTIONS(478), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3668] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_commodity,
    STATE(348), 1,
      sym_amount,
    ACTIONS(488), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3700] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(88), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_commodity,
    STATE(354), 1,
      sym_amount,
    ACTIONS(490), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3732] = 4,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(492), 2,
      sym__2d,
      anon_sym_AT,
    ACTIONS(494), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(441), 8,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      sym_time,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3754] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_commodity,
    STATE(236), 1,
      sym_amount,
    ACTIONS(478), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3786] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_commodity,
    STATE(354), 1,
      sym_amount,
    ACTIONS(478), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3818] = 4,
    ACTIONS(492), 1,
      anon_sym_AT,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(497), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(441), 9,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3840] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_commodity,
    STATE(321), 1,
      sym_amount,
    ACTIONS(478), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3872] = 2,
    ACTIONS(339), 1,
      anon_sym_AT,
    ACTIONS(337), 12,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [3890] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_commodity,
    STATE(261), 1,
      sym_amount,
    ACTIONS(500), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3922] = 11,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(510), 1,
      anon_sym_SPACE,
    ACTIONS(512), 1,
      anon_sym_TAB,
    STATE(112), 1,
      aux_sym_whitespace_repeat1,
    STATE(158), 1,
      sym_status,
    STATE(257), 1,
      sym_account,
    STATE(333), 1,
      sym_note,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [3957] = 6,
    ACTIONS(187), 1,
      anon_sym_AT,
    STATE(143), 1,
      sym_commodity,
    STATE(144), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(514), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(185), 4,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
  [3982] = 10,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(110), 1,
      aux_sym_whitespace_repeat1,
    STATE(124), 1,
      sym_price,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(359), 1,
      sym_note,
    ACTIONS(516), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4014] = 10,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    ACTIONS(470), 1,
      anon_sym_LF,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_price,
    STATE(174), 1,
      sym_balance_assertion,
    STATE(353), 1,
      sym_note,
    ACTIONS(518), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4046] = 10,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_price,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(345), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4078] = 10,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    ACTIONS(524), 1,
      anon_sym_LF,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    STATE(125), 1,
      sym_price,
    STATE(183), 1,
      sym_balance_assertion,
    STATE(309), 1,
      sym_note,
    ACTIONS(526), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4110] = 8,
    ACTIONS(530), 1,
      anon_sym_alias,
    ACTIONS(532), 1,
      anon_sym_default,
    ACTIONS(534), 1,
      anon_sym_note,
    ACTIONS(536), 1,
      anon_sym_assert,
    ACTIONS(538), 1,
      anon_sym_check,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(448), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(528), 2,
      anon_sym_eval,
      anon_sym_payee,
  [4137] = 9,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_price,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(345), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4166] = 2,
    ACTIONS(243), 1,
      anon_sym_AT,
    ACTIONS(241), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4181] = 2,
    ACTIONS(255), 1,
      anon_sym_AT,
    ACTIONS(253), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4196] = 9,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(125), 1,
      sym_price,
    STATE(183), 1,
      sym_balance_assertion,
    STATE(309), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4225] = 2,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(245), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4240] = 9,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_price,
    STATE(174), 1,
      sym_balance_assertion,
    STATE(353), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4269] = 9,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_price,
    STATE(172), 1,
      sym_balance_assertion,
    STATE(315), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4298] = 5,
    ACTIONS(441), 1,
      anon_sym_SEMI,
    ACTIONS(542), 1,
      anon_sym_SPACE,
    ACTIONS(545), 1,
      anon_sym_TAB,
    STATE(112), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(492), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [4318] = 7,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(552), 1,
      sym_payee,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    STATE(175), 1,
      sym_status,
    STATE(181), 1,
      sym_code,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4342] = 4,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(492), 2,
      anon_sym_assert,
      anon_sym_check,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(441), 4,
      anon_sym_DASH,
      aux_sym_tag_directive_token1,
      sym__quantity,
      anon_sym_PLUS,
  [4360] = 6,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(562), 1,
      aux_sym_block_comment_token1,
    STATE(115), 1,
      aux_sym_block_comment_repeat1,
    STATE(218), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(565), 2,
      anon_sym_end,
      anon_sym_endtest,
    ACTIONS(567), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4381] = 7,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(524), 1,
      anon_sym_LF,
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    STATE(183), 1,
      sym_balance_assertion,
    STATE(309), 1,
      sym_note,
    ACTIONS(570), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4404] = 2,
    ACTIONS(574), 1,
      sym__dsep,
    ACTIONS(572), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4417] = 7,
    ACTIONS(377), 1,
      anon_sym_endcomment,
    ACTIONS(576), 1,
      anon_sym_LF,
    ACTIONS(578), 1,
      aux_sym_block_comment_token1,
    ACTIONS(580), 1,
      anon_sym_end,
    STATE(128), 1,
      aux_sym_block_comment_repeat1,
    STATE(249), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(582), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4440] = 7,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(161), 1,
      aux_sym_whitespace_repeat1,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(345), 1,
      sym_note,
    ACTIONS(584), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4463] = 7,
    ACTIONS(578), 1,
      aux_sym_block_comment_token1,
    ACTIONS(586), 1,
      anon_sym_LF,
    ACTIONS(588), 1,
      anon_sym_end,
    ACTIONS(590), 1,
      anon_sym_endcomment,
    STATE(141), 1,
      aux_sym_block_comment_repeat1,
    STATE(249), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(582), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4486] = 7,
    ACTIONS(383), 1,
      anon_sym_endtest,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(594), 1,
      aux_sym_block_comment_token1,
    ACTIONS(596), 1,
      anon_sym_end,
    STATE(115), 1,
      aux_sym_block_comment_repeat1,
    STATE(218), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(598), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4509] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(173), 1,
      sym__single_date,
    STATE(298), 1,
      sym_date,
    STATE(340), 1,
      sym__4d,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4532] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(173), 1,
      sym__single_date,
    STATE(228), 1,
      sym_date,
    STATE(340), 1,
      sym__4d,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4555] = 7,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      anon_sym_LF,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    STATE(174), 1,
      sym_balance_assertion,
    STATE(353), 1,
      sym_note,
    ACTIONS(600), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4578] = 7,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(602), 1,
      anon_sym_LF,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    STATE(172), 1,
      sym_balance_assertion,
    STATE(315), 1,
      sym_note,
    ACTIONS(604), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4601] = 7,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(606), 1,
      anon_sym_LF,
    STATE(153), 1,
      aux_sym_whitespace_repeat1,
    STATE(185), 1,
      sym_balance_assertion,
    STATE(318), 1,
      sym_note,
    ACTIONS(608), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4624] = 6,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(140), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(610), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(143), 2,
      sym_quantity,
      sym_negative_quantity,
  [4645] = 6,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(615), 1,
      aux_sym_block_comment_token1,
    STATE(128), 1,
      aux_sym_block_comment_repeat1,
    STATE(249), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(565), 2,
      anon_sym_end,
      anon_sym_endcomment,
    ACTIONS(618), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4666] = 7,
    ACTIONS(530), 1,
      anon_sym_alias,
    ACTIONS(532), 1,
      anon_sym_default,
    ACTIONS(534), 1,
      anon_sym_note,
    ACTIONS(621), 1,
      anon_sym_nomarket,
    ACTIONS(623), 1,
      anon_sym_format,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(448), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4689] = 7,
    ACTIONS(389), 1,
      anon_sym_endcomment,
    ACTIONS(578), 1,
      aux_sym_block_comment_token1,
    ACTIONS(625), 1,
      anon_sym_LF,
    ACTIONS(627), 1,
      anon_sym_end,
    STATE(118), 1,
      aux_sym_block_comment_repeat1,
    STATE(249), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(582), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4712] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(173), 1,
      sym__single_date,
    STATE(219), 1,
      sym_date,
    STATE(340), 1,
      sym__4d,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4735] = 7,
    ACTIONS(371), 1,
      anon_sym_endtest,
    ACTIONS(594), 1,
      aux_sym_block_comment_token1,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 1,
      anon_sym_end,
    STATE(121), 1,
      aux_sym_block_comment_repeat1,
    STATE(218), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(598), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4758] = 7,
    ACTIONS(594), 1,
      aux_sym_block_comment_token1,
    ACTIONS(633), 1,
      anon_sym_LF,
    ACTIONS(635), 1,
      anon_sym_end,
    ACTIONS(637), 1,
      anon_sym_endtest,
    STATE(138), 1,
      aux_sym_block_comment_repeat1,
    STATE(218), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(598), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4781] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(123), 1,
      aux_sym_whitespace_repeat1,
    STATE(173), 1,
      sym__single_date,
    STATE(260), 1,
      sym_date,
    STATE(340), 1,
      sym__4d,
    ACTIONS(639), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4804] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    STATE(173), 1,
      sym__single_date,
    STATE(259), 1,
      sym_date,
    STATE(340), 1,
      sym__4d,
    ACTIONS(641), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4827] = 6,
    ACTIONS(643), 1,
      anon_sym_DASH,
    ACTIONS(645), 1,
      sym__quantity,
    ACTIONS(647), 1,
      anon_sym_PLUS,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(649), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(28), 2,
      sym_quantity,
      sym_negative_quantity,
  [4848] = 7,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(167), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(359), 1,
      sym_note,
    ACTIONS(651), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4871] = 7,
    ACTIONS(365), 1,
      anon_sym_endtest,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(594), 1,
      aux_sym_block_comment_token1,
    ACTIONS(653), 1,
      anon_sym_end,
    STATE(115), 1,
      aux_sym_block_comment_repeat1,
    STATE(218), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(598), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4894] = 6,
    ACTIONS(643), 1,
      anon_sym_DASH,
    ACTIONS(645), 1,
      sym__quantity,
    ACTIONS(647), 1,
      anon_sym_PLUS,
    STATE(136), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(655), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(34), 2,
      sym_quantity,
      sym_negative_quantity,
  [4915] = 6,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(649), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(149), 2,
      sym_quantity,
      sym_negative_quantity,
  [4936] = 7,
    ACTIONS(395), 1,
      anon_sym_endcomment,
    ACTIONS(576), 1,
      anon_sym_LF,
    ACTIONS(578), 1,
      aux_sym_block_comment_token1,
    ACTIONS(657), 1,
      anon_sym_end,
    STATE(128), 1,
      aux_sym_block_comment_repeat1,
    STATE(249), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(582), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4959] = 4,
    STATE(90), 1,
      sym_commodity,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4975] = 2,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(293), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4987] = 4,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5003] = 4,
    STATE(28), 1,
      sym_commodity,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(191), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5019] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(659), 1,
      anon_sym_SPACE,
    ACTIONS(661), 1,
      anon_sym_TAB,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    STATE(227), 1,
      sym_account,
  [5041] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(663), 1,
      anon_sym_SPACE,
    ACTIONS(665), 1,
      anon_sym_TAB,
    STATE(159), 1,
      aux_sym_whitespace_repeat1,
    STATE(227), 1,
      sym_account,
  [5063] = 1,
    ACTIONS(667), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5073] = 2,
    ACTIONS(271), 1,
      anon_sym_AT,
    ACTIONS(269), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5085] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(659), 1,
      anon_sym_SPACE,
    ACTIONS(661), 1,
      anon_sym_TAB,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    STATE(238), 1,
      sym_account,
  [5107] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(669), 1,
      anon_sym_SPACE,
    ACTIONS(671), 1,
      anon_sym_TAB,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    STATE(238), 1,
      sym_account,
  [5129] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(659), 1,
      anon_sym_SPACE,
    ACTIONS(661), 1,
      anon_sym_TAB,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    STATE(231), 1,
      sym_account,
  [5151] = 6,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(187), 1,
      sym_balance_assertion,
    STATE(323), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5171] = 4,
    ACTIONS(492), 1,
      sym_payee,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(673), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(441), 3,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
  [5187] = 6,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(172), 1,
      sym_balance_assertion,
    STATE(315), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5207] = 6,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(345), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5227] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(676), 1,
      anon_sym_SPACE,
    ACTIONS(678), 1,
      anon_sym_TAB,
    STATE(150), 1,
      aux_sym_whitespace_repeat1,
    STATE(214), 1,
      sym_account,
  [5249] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(680), 1,
      anon_sym_SPACE,
    ACTIONS(682), 1,
      anon_sym_TAB,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    STATE(234), 1,
      sym_account,
  [5271] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(659), 1,
      anon_sym_SPACE,
    ACTIONS(661), 1,
      anon_sym_TAB,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    STATE(254), 1,
      sym_account,
  [5293] = 6,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(185), 1,
      sym_balance_assertion,
    STATE(318), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5313] = 6,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(183), 1,
      sym_balance_assertion,
    STATE(309), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5333] = 4,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(232), 1,
      sym_commodity,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5349] = 4,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(321), 1,
      sym_commodity,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5365] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(659), 1,
      anon_sym_SPACE,
    ACTIONS(661), 1,
      anon_sym_TAB,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    STATE(328), 1,
      sym_account,
  [5387] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(659), 1,
      anon_sym_SPACE,
    ACTIONS(661), 1,
      anon_sym_TAB,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    STATE(321), 1,
      sym_account,
  [5409] = 4,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(326), 1,
      sym_commodity,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5425] = 6,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(174), 1,
      sym_balance_assertion,
    STATE(353), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5445] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(659), 1,
      anon_sym_SPACE,
    ACTIONS(661), 1,
      anon_sym_TAB,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    STATE(324), 1,
      sym_account,
  [5467] = 5,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(684), 1,
      sym_payee,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym_code,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5484] = 3,
    ACTIONS(688), 1,
      anon_sym_EQ,
    STATE(250), 1,
      sym_effective_date,
    ACTIONS(686), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5497] = 2,
    ACTIONS(690), 1,
      anon_sym_LF,
    ACTIONS(692), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5508] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(606), 1,
      anon_sym_LF,
    STATE(198), 1,
      aux_sym_whitespace_repeat1,
    STATE(318), 1,
      sym_note,
    ACTIONS(694), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5525] = 1,
    ACTIONS(696), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5534] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    STATE(345), 1,
      sym_note,
    ACTIONS(698), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5551] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(700), 1,
      anon_sym_LF,
    STATE(169), 1,
      aux_sym_whitespace_repeat1,
    STATE(210), 1,
      sym_note,
    ACTIONS(702), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5568] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      anon_sym_LF,
    STATE(200), 1,
      aux_sym_whitespace_repeat1,
    STATE(353), 1,
      sym_note,
    ACTIONS(704), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5585] = 2,
    ACTIONS(706), 1,
      anon_sym_LF,
    ACTIONS(565), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5596] = 4,
    ACTIONS(708), 1,
      anon_sym_SPACE,
    ACTIONS(711), 1,
      anon_sym_TAB,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(492), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [5611] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(524), 1,
      anon_sym_LF,
    STATE(201), 1,
      aux_sym_whitespace_repeat1,
    STATE(309), 1,
      sym_note,
    ACTIONS(714), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5628] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(716), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_note,
    STATE(241), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(718), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5645] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(700), 1,
      anon_sym_LF,
    STATE(210), 1,
      sym_note,
    STATE(269), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(720), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5662] = 2,
    ACTIONS(706), 1,
      anon_sym_LF,
    ACTIONS(565), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5673] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(602), 1,
      anon_sym_LF,
    STATE(208), 1,
      aux_sym_whitespace_repeat1,
    STATE(315), 1,
      sym_note,
    ACTIONS(722), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5690] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(724), 1,
      anon_sym_LF,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    STATE(206), 1,
      sym_note,
    ACTIONS(726), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5707] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(728), 1,
      anon_sym_LF,
    STATE(193), 1,
      aux_sym_whitespace_repeat1,
    STATE(323), 1,
      sym_note,
    ACTIONS(730), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5724] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    STATE(359), 1,
      sym_note,
    ACTIONS(732), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5741] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(734), 1,
      anon_sym_LF,
    STATE(191), 1,
      aux_sym_whitespace_repeat1,
    STATE(327), 1,
      sym_note,
    ACTIONS(736), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5758] = 2,
    ACTIONS(690), 1,
      anon_sym_LF,
    ACTIONS(692), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5769] = 3,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5781] = 1,
    ACTIONS(738), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5789] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(330), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5803] = 3,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5815] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(327), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5829] = 4,
    ACTIONS(536), 1,
      anon_sym_assert,
    ACTIONS(538), 1,
      anon_sym_check,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(649), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5843] = 4,
    ACTIONS(740), 1,
      aux_sym_option_value_token1,
    STATE(235), 1,
      aux_sym_whitespace_repeat1,
    STATE(358), 1,
      sym_option_value,
    ACTIONS(742), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5857] = 4,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      aux_sym_note_token1,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(744), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5871] = 2,
    ACTIONS(749), 1,
      anon_sym_SPACE,
    ACTIONS(747), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [5881] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(323), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5895] = 3,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5907] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(345), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5921] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(315), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5935] = 3,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5947] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(309), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5961] = 4,
    ACTIONS(751), 1,
      anon_sym_LBRACK,
    ACTIONS(753), 1,
      aux_sym_note_token1,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(755), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5975] = 1,
    ACTIONS(757), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5983] = 3,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5995] = 4,
    ACTIONS(759), 1,
      anon_sym_LF,
    ACTIONS(761), 1,
      anon_sym_EQ,
    STATE(195), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(763), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6009] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(318), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6023] = 1,
    ACTIONS(765), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6031] = 3,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(22), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6043] = 4,
    ACTIONS(767), 1,
      aux_sym_option_value_token1,
    STATE(235), 1,
      aux_sym_whitespace_repeat1,
    STATE(324), 1,
      sym_filename,
    ACTIONS(742), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6057] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(353), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6071] = 3,
    ACTIONS(769), 1,
      aux_sym_account_subdirective_token1,
    STATE(237), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(771), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6082] = 2,
    ACTIONS(773), 1,
      anon_sym_LF,
    ACTIONS(775), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6091] = 3,
    ACTIONS(777), 1,
      aux_sym_block_comment_token1,
    STATE(248), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(779), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6102] = 1,
    ACTIONS(749), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6109] = 3,
    ACTIONS(781), 1,
      anon_sym_LF,
    STATE(233), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(783), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6120] = 3,
    ACTIONS(785), 1,
      aux_sym_block_comment_token1,
    STATE(248), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(779), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6131] = 3,
    ACTIONS(787), 1,
      sym_time,
    STATE(256), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(789), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6142] = 3,
    ACTIONS(791), 1,
      aux_sym_tag_directive_token1,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(649), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6153] = 3,
    ACTIONS(793), 1,
      aux_sym_account_subdirective_token1,
    STATE(237), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(771), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6164] = 3,
    ACTIONS(795), 1,
      sym_payee,
    STATE(255), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(797), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6175] = 3,
    ACTIONS(787), 1,
      sym_time,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6186] = 3,
    ACTIONS(795), 1,
      sym_payee,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6197] = 3,
    ACTIONS(799), 1,
      sym_payee,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6208] = 3,
    ACTIONS(799), 1,
      sym_payee,
    STATE(252), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(801), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6219] = 2,
    ACTIONS(803), 1,
      anon_sym_LF,
    ACTIONS(805), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6228] = 3,
    ACTIONS(807), 1,
      sym_time,
    STATE(243), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(809), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6239] = 3,
    ACTIONS(811), 1,
      anon_sym_EQ,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6250] = 3,
    ACTIONS(807), 1,
      sym_time,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6261] = 2,
    ACTIONS(474), 1,
      anon_sym_LF,
    ACTIONS(813), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6270] = 3,
    ACTIONS(815), 1,
      anon_sym_EQ,
    STATE(229), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(817), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6281] = 3,
    ACTIONS(819), 1,
      aux_sym_block_comment_token1,
    STATE(248), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(779), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6292] = 2,
    ACTIONS(450), 1,
      anon_sym_LF,
    ACTIONS(821), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6301] = 3,
    ACTIONS(492), 1,
      aux_sym_option_value_token1,
    STATE(235), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(823), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6312] = 1,
    ACTIONS(826), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6319] = 3,
    ACTIONS(441), 1,
      aux_sym_account_subdirective_token1,
    STATE(237), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(828), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6330] = 2,
    ACTIONS(831), 1,
      anon_sym_LF,
    ACTIONS(833), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6339] = 1,
    ACTIONS(835), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6346] = 3,
    ACTIONS(837), 1,
      sym_payee,
    STATE(225), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(839), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6357] = 3,
    ACTIONS(841), 1,
      sym_payee,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6368] = 1,
    ACTIONS(843), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6375] = 3,
    ACTIONS(845), 1,
      sym_time,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6386] = 3,
    ACTIONS(847), 1,
      aux_sym_account_subdirective_token1,
    STATE(237), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(771), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6397] = 3,
    ACTIONS(849), 1,
      aux_sym_account_subdirective_token1,
    STATE(237), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(771), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6408] = 3,
    ACTIONS(492), 1,
      sym_query,
    STATE(246), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(851), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6419] = 3,
    ACTIONS(854), 1,
      aux_sym_account_subdirective_token1,
    STATE(237), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(771), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6430] = 3,
    ACTIONS(492), 1,
      aux_sym_block_comment_token1,
    STATE(248), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(856), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6441] = 3,
    ACTIONS(859), 1,
      aux_sym_block_comment_token1,
    STATE(248), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(779), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6452] = 1,
    ACTIONS(861), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6459] = 4,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(205), 1,
      sym__single_date,
    STATE(340), 1,
      sym__4d,
  [6472] = 3,
    ACTIONS(863), 1,
      sym_payee,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6483] = 3,
    ACTIONS(863), 1,
      sym_payee,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(865), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6494] = 2,
    ACTIONS(867), 1,
      anon_sym_LF,
    ACTIONS(869), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6503] = 3,
    ACTIONS(871), 1,
      sym_payee,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6514] = 3,
    ACTIONS(873), 1,
      sym_time,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6525] = 2,
    ACTIONS(875), 1,
      anon_sym_LF,
    ACTIONS(877), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6534] = 3,
    ACTIONS(879), 1,
      sym_query,
    STATE(246), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(881), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6545] = 3,
    ACTIONS(883), 1,
      sym_time,
    STATE(223), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(885), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6556] = 3,
    ACTIONS(887), 1,
      sym_time,
    STATE(230), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(889), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6567] = 1,
    ACTIONS(891), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6574] = 3,
    ACTIONS(893), 1,
      aux_sym_word_directive_token2,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6585] = 1,
    ACTIONS(895), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6592] = 3,
    ACTIONS(897), 1,
      aux_sym_word_directive_token2,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6603] = 3,
    ACTIONS(899), 1,
      aux_sym_option_value_token1,
    STATE(235), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(742), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6614] = 3,
    ACTIONS(901), 1,
      aux_sym_word_directive_token1,
    STATE(267), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(903), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6625] = 3,
    ACTIONS(492), 1,
      aux_sym_word_directive_token1,
    STATE(267), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(905), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6636] = 3,
    ACTIONS(908), 1,
      anon_sym_LF,
    STATE(215), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(910), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6647] = 3,
    ACTIONS(684), 1,
      sym_payee,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6658] = 2,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(912), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6666] = 2,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(914), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6674] = 1,
    ACTIONS(916), 3,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6680] = 2,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(918), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6688] = 2,
    STATE(247), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(920), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6696] = 2,
    STATE(245), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(922), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6704] = 2,
    STATE(258), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(924), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6712] = 2,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(926), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6720] = 2,
    STATE(166), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(928), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6728] = 2,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(930), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6736] = 2,
    STATE(211), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(932), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6744] = 2,
    STATE(266), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(934), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6752] = 2,
    STATE(265), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(936), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6760] = 2,
    STATE(264), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(938), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6768] = 2,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(940), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6776] = 2,
    STATE(165), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(942), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6784] = 2,
    STATE(262), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(944), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6792] = 3,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(700), 1,
      anon_sym_LF,
    STATE(210), 1,
      sym_note,
  [6802] = 3,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(716), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_note,
  [6812] = 2,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(946), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6820] = 2,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(948), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6828] = 2,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(950), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6836] = 2,
    STATE(122), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(952), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6844] = 2,
    STATE(78), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(954), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6852] = 2,
    STATE(221), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(956), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6860] = 2,
    STATE(204), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(958), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6868] = 3,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(960), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_note,
  [6878] = 1,
    ACTIONS(962), 3,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6884] = 2,
    STATE(142), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(964), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6892] = 3,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(966), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym_note,
  [6902] = 3,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(968), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_note,
  [6912] = 2,
    ACTIONS(688), 1,
      anon_sym_EQ,
    STATE(350), 1,
      sym_effective_date,
  [6919] = 2,
    ACTIONS(970), 1,
      aux_sym_option_value_token1,
    STATE(358), 1,
      sym_option_value,
  [6926] = 1,
    ACTIONS(972), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [6931] = 1,
    ACTIONS(974), 1,
      sym__quantity,
  [6935] = 1,
    ACTIONS(976), 1,
      anon_sym_LF,
  [6939] = 1,
    ACTIONS(978), 1,
      aux_sym_option_value_token1,
  [6943] = 1,
    ACTIONS(980), 1,
      anon_sym_LF,
  [6947] = 1,
    ACTIONS(982), 1,
      anon_sym_RBRACK,
  [6951] = 1,
    ACTIONS(602), 1,
      anon_sym_LF,
  [6955] = 1,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
  [6959] = 1,
    ACTIONS(984), 1,
      anon_sym_LF,
  [6963] = 1,
    ACTIONS(986), 1,
      anon_sym_LF,
  [6967] = 1,
    ACTIONS(988), 1,
      anon_sym_LF,
  [6971] = 1,
    ACTIONS(574), 1,
      sym__dsep,
  [6975] = 1,
    ACTIONS(606), 1,
      anon_sym_LF,
  [6979] = 1,
    ACTIONS(990), 1,
      aux_sym_code_token1,
  [6983] = 1,
    ACTIONS(992), 1,
      anon_sym_LF,
  [6987] = 1,
    ACTIONS(728), 1,
      anon_sym_LF,
  [6991] = 1,
    ACTIONS(994), 1,
      anon_sym_LF,
  [6995] = 1,
    ACTIONS(996), 1,
      sym__quantity,
  [6999] = 1,
    ACTIONS(998), 1,
      anon_sym_LF,
  [7003] = 1,
    ACTIONS(1000), 1,
      anon_sym_EQ,
  [7007] = 1,
    ACTIONS(734), 1,
      anon_sym_LF,
  [7011] = 1,
    ACTIONS(1002), 1,
      anon_sym_LF,
  [7015] = 1,
    ACTIONS(1004), 1,
      anon_sym_LF,
  [7019] = 1,
    ACTIONS(1006), 1,
      anon_sym_LF,
  [7023] = 1,
    ACTIONS(1008), 1,
      anon_sym_LF,
  [7027] = 1,
    ACTIONS(1010), 1,
      anon_sym_LF,
  [7031] = 1,
    ACTIONS(1012), 1,
      sym_account_name,
  [7035] = 1,
    ACTIONS(1014), 1,
      anon_sym_LF,
  [7039] = 1,
    ACTIONS(1016), 1,
      sym_account_name,
  [7043] = 1,
    ACTIONS(1018), 1,
      sym__2d,
  [7047] = 1,
    ACTIONS(1020), 1,
      anon_sym_LF,
  [7051] = 1,
    ACTIONS(1022), 1,
      anon_sym_LF,
  [7055] = 1,
    ACTIONS(1024), 1,
      anon_sym_LF,
  [7059] = 1,
    ACTIONS(1026), 1,
      anon_sym_LF,
  [7063] = 1,
    ACTIONS(1028), 1,
      sym__2d,
  [7067] = 1,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
  [7071] = 1,
    ACTIONS(1032), 1,
      sym__2d,
  [7075] = 1,
    ACTIONS(1034), 1,
      sym__dsep,
  [7079] = 1,
    ACTIONS(1036), 1,
      anon_sym_LF,
  [7083] = 1,
    ACTIONS(1038), 1,
      anon_sym_LF,
  [7087] = 1,
    ACTIONS(1040), 1,
      ts_builtin_sym_end,
  [7091] = 1,
    ACTIONS(1042), 1,
      sym__dsep,
  [7095] = 1,
    ACTIONS(524), 1,
      anon_sym_LF,
  [7099] = 1,
    ACTIONS(1044), 1,
      anon_sym_LF,
  [7103] = 1,
    ACTIONS(1046), 1,
      anon_sym_LF,
  [7107] = 1,
    ACTIONS(1048), 1,
      anon_sym_LF,
  [7111] = 1,
    ACTIONS(1050), 1,
      anon_sym_LF,
  [7115] = 1,
    ACTIONS(1052), 1,
      anon_sym_RBRACK,
  [7119] = 1,
    ACTIONS(1054), 1,
      anon_sym_LF,
  [7123] = 1,
    ACTIONS(1056), 1,
      anon_sym_LF,
  [7127] = 1,
    ACTIONS(520), 1,
      anon_sym_LF,
  [7131] = 1,
    ACTIONS(1058), 1,
      anon_sym_LF,
  [7135] = 1,
    ACTIONS(803), 1,
      anon_sym_LF,
  [7139] = 1,
    ACTIONS(474), 1,
      anon_sym_LF,
  [7143] = 1,
    ACTIONS(1060), 1,
      anon_sym_LF,
  [7147] = 1,
    ACTIONS(1062), 1,
      anon_sym_LF,
  [7151] = 1,
    ACTIONS(470), 1,
      anon_sym_LF,
  [7155] = 1,
    ACTIONS(867), 1,
      anon_sym_LF,
  [7159] = 1,
    ACTIONS(1064), 1,
      anon_sym_LF,
  [7163] = 1,
    ACTIONS(1066), 1,
      sym__quantity,
  [7167] = 1,
    ACTIONS(1068), 1,
      sym__quantity,
  [7171] = 1,
    ACTIONS(1070), 1,
      anon_sym_LF,
  [7175] = 1,
    ACTIONS(1072), 1,
      sym__quantity,
  [7179] = 1,
    ACTIONS(1074), 1,
      sym__quantity,
  [7183] = 1,
    ACTIONS(1076), 1,
      aux_sym_option_token1,
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
  [SMALL_STATE(11)] = 627,
  [SMALL_STATE(12)] = 674,
  [SMALL_STATE(13)] = 721,
  [SMALL_STATE(14)] = 768,
  [SMALL_STATE(15)] = 814,
  [SMALL_STATE(16)] = 860,
  [SMALL_STATE(17)] = 906,
  [SMALL_STATE(18)] = 952,
  [SMALL_STATE(19)] = 998,
  [SMALL_STATE(20)] = 1044,
  [SMALL_STATE(21)] = 1084,
  [SMALL_STATE(22)] = 1124,
  [SMALL_STATE(23)] = 1170,
  [SMALL_STATE(24)] = 1210,
  [SMALL_STATE(25)] = 1247,
  [SMALL_STATE(26)] = 1284,
  [SMALL_STATE(27)] = 1321,
  [SMALL_STATE(28)] = 1358,
  [SMALL_STATE(29)] = 1395,
  [SMALL_STATE(30)] = 1432,
  [SMALL_STATE(31)] = 1469,
  [SMALL_STATE(32)] = 1506,
  [SMALL_STATE(33)] = 1543,
  [SMALL_STATE(34)] = 1580,
  [SMALL_STATE(35)] = 1617,
  [SMALL_STATE(36)] = 1654,
  [SMALL_STATE(37)] = 1691,
  [SMALL_STATE(38)] = 1728,
  [SMALL_STATE(39)] = 1765,
  [SMALL_STATE(40)] = 1802,
  [SMALL_STATE(41)] = 1839,
  [SMALL_STATE(42)] = 1876,
  [SMALL_STATE(43)] = 1913,
  [SMALL_STATE(44)] = 1950,
  [SMALL_STATE(45)] = 1987,
  [SMALL_STATE(46)] = 2024,
  [SMALL_STATE(47)] = 2061,
  [SMALL_STATE(48)] = 2098,
  [SMALL_STATE(49)] = 2135,
  [SMALL_STATE(50)] = 2172,
  [SMALL_STATE(51)] = 2209,
  [SMALL_STATE(52)] = 2246,
  [SMALL_STATE(53)] = 2283,
  [SMALL_STATE(54)] = 2321,
  [SMALL_STATE(55)] = 2359,
  [SMALL_STATE(56)] = 2397,
  [SMALL_STATE(57)] = 2435,
  [SMALL_STATE(58)] = 2473,
  [SMALL_STATE(59)] = 2511,
  [SMALL_STATE(60)] = 2549,
  [SMALL_STATE(61)] = 2587,
  [SMALL_STATE(62)] = 2622,
  [SMALL_STATE(63)] = 2657,
  [SMALL_STATE(64)] = 2692,
  [SMALL_STATE(65)] = 2727,
  [SMALL_STATE(66)] = 2762,
  [SMALL_STATE(67)] = 2797,
  [SMALL_STATE(68)] = 2832,
  [SMALL_STATE(69)] = 2867,
  [SMALL_STATE(70)] = 2902,
  [SMALL_STATE(71)] = 2937,
  [SMALL_STATE(72)] = 2972,
  [SMALL_STATE(73)] = 3007,
  [SMALL_STATE(74)] = 3042,
  [SMALL_STATE(75)] = 3077,
  [SMALL_STATE(76)] = 3112,
  [SMALL_STATE(77)] = 3147,
  [SMALL_STATE(78)] = 3183,
  [SMALL_STATE(79)] = 3213,
  [SMALL_STATE(80)] = 3269,
  [SMALL_STATE(81)] = 3325,
  [SMALL_STATE(82)] = 3381,
  [SMALL_STATE(83)] = 3434,
  [SMALL_STATE(84)] = 3487,
  [SMALL_STATE(85)] = 3540,
  [SMALL_STATE(86)] = 3572,
  [SMALL_STATE(87)] = 3604,
  [SMALL_STATE(88)] = 3636,
  [SMALL_STATE(89)] = 3668,
  [SMALL_STATE(90)] = 3700,
  [SMALL_STATE(91)] = 3732,
  [SMALL_STATE(92)] = 3754,
  [SMALL_STATE(93)] = 3786,
  [SMALL_STATE(94)] = 3818,
  [SMALL_STATE(95)] = 3840,
  [SMALL_STATE(96)] = 3872,
  [SMALL_STATE(97)] = 3890,
  [SMALL_STATE(98)] = 3922,
  [SMALL_STATE(99)] = 3957,
  [SMALL_STATE(100)] = 3982,
  [SMALL_STATE(101)] = 4014,
  [SMALL_STATE(102)] = 4046,
  [SMALL_STATE(103)] = 4078,
  [SMALL_STATE(104)] = 4110,
  [SMALL_STATE(105)] = 4137,
  [SMALL_STATE(106)] = 4166,
  [SMALL_STATE(107)] = 4181,
  [SMALL_STATE(108)] = 4196,
  [SMALL_STATE(109)] = 4225,
  [SMALL_STATE(110)] = 4240,
  [SMALL_STATE(111)] = 4269,
  [SMALL_STATE(112)] = 4298,
  [SMALL_STATE(113)] = 4318,
  [SMALL_STATE(114)] = 4342,
  [SMALL_STATE(115)] = 4360,
  [SMALL_STATE(116)] = 4381,
  [SMALL_STATE(117)] = 4404,
  [SMALL_STATE(118)] = 4417,
  [SMALL_STATE(119)] = 4440,
  [SMALL_STATE(120)] = 4463,
  [SMALL_STATE(121)] = 4486,
  [SMALL_STATE(122)] = 4509,
  [SMALL_STATE(123)] = 4532,
  [SMALL_STATE(124)] = 4555,
  [SMALL_STATE(125)] = 4578,
  [SMALL_STATE(126)] = 4601,
  [SMALL_STATE(127)] = 4624,
  [SMALL_STATE(128)] = 4645,
  [SMALL_STATE(129)] = 4666,
  [SMALL_STATE(130)] = 4689,
  [SMALL_STATE(131)] = 4712,
  [SMALL_STATE(132)] = 4735,
  [SMALL_STATE(133)] = 4758,
  [SMALL_STATE(134)] = 4781,
  [SMALL_STATE(135)] = 4804,
  [SMALL_STATE(136)] = 4827,
  [SMALL_STATE(137)] = 4848,
  [SMALL_STATE(138)] = 4871,
  [SMALL_STATE(139)] = 4894,
  [SMALL_STATE(140)] = 4915,
  [SMALL_STATE(141)] = 4936,
  [SMALL_STATE(142)] = 4959,
  [SMALL_STATE(143)] = 4975,
  [SMALL_STATE(144)] = 4987,
  [SMALL_STATE(145)] = 5003,
  [SMALL_STATE(146)] = 5019,
  [SMALL_STATE(147)] = 5041,
  [SMALL_STATE(148)] = 5063,
  [SMALL_STATE(149)] = 5073,
  [SMALL_STATE(150)] = 5085,
  [SMALL_STATE(151)] = 5107,
  [SMALL_STATE(152)] = 5129,
  [SMALL_STATE(153)] = 5151,
  [SMALL_STATE(154)] = 5171,
  [SMALL_STATE(155)] = 5187,
  [SMALL_STATE(156)] = 5207,
  [SMALL_STATE(157)] = 5227,
  [SMALL_STATE(158)] = 5249,
  [SMALL_STATE(159)] = 5271,
  [SMALL_STATE(160)] = 5293,
  [SMALL_STATE(161)] = 5313,
  [SMALL_STATE(162)] = 5333,
  [SMALL_STATE(163)] = 5349,
  [SMALL_STATE(164)] = 5365,
  [SMALL_STATE(165)] = 5387,
  [SMALL_STATE(166)] = 5409,
  [SMALL_STATE(167)] = 5425,
  [SMALL_STATE(168)] = 5445,
  [SMALL_STATE(169)] = 5467,
  [SMALL_STATE(170)] = 5484,
  [SMALL_STATE(171)] = 5497,
  [SMALL_STATE(172)] = 5508,
  [SMALL_STATE(173)] = 5525,
  [SMALL_STATE(174)] = 5534,
  [SMALL_STATE(175)] = 5551,
  [SMALL_STATE(176)] = 5568,
  [SMALL_STATE(177)] = 5585,
  [SMALL_STATE(178)] = 5596,
  [SMALL_STATE(179)] = 5611,
  [SMALL_STATE(180)] = 5628,
  [SMALL_STATE(181)] = 5645,
  [SMALL_STATE(182)] = 5662,
  [SMALL_STATE(183)] = 5673,
  [SMALL_STATE(184)] = 5690,
  [SMALL_STATE(185)] = 5707,
  [SMALL_STATE(186)] = 5724,
  [SMALL_STATE(187)] = 5741,
  [SMALL_STATE(188)] = 5758,
  [SMALL_STATE(189)] = 5769,
  [SMALL_STATE(190)] = 5781,
  [SMALL_STATE(191)] = 5789,
  [SMALL_STATE(192)] = 5803,
  [SMALL_STATE(193)] = 5815,
  [SMALL_STATE(194)] = 5829,
  [SMALL_STATE(195)] = 5843,
  [SMALL_STATE(196)] = 5857,
  [SMALL_STATE(197)] = 5871,
  [SMALL_STATE(198)] = 5881,
  [SMALL_STATE(199)] = 5895,
  [SMALL_STATE(200)] = 5907,
  [SMALL_STATE(201)] = 5921,
  [SMALL_STATE(202)] = 5935,
  [SMALL_STATE(203)] = 5947,
  [SMALL_STATE(204)] = 5961,
  [SMALL_STATE(205)] = 5975,
  [SMALL_STATE(206)] = 5983,
  [SMALL_STATE(207)] = 5995,
  [SMALL_STATE(208)] = 6009,
  [SMALL_STATE(209)] = 6023,
  [SMALL_STATE(210)] = 6031,
  [SMALL_STATE(211)] = 6043,
  [SMALL_STATE(212)] = 6057,
  [SMALL_STATE(213)] = 6071,
  [SMALL_STATE(214)] = 6082,
  [SMALL_STATE(215)] = 6091,
  [SMALL_STATE(216)] = 6102,
  [SMALL_STATE(217)] = 6109,
  [SMALL_STATE(218)] = 6120,
  [SMALL_STATE(219)] = 6131,
  [SMALL_STATE(220)] = 6142,
  [SMALL_STATE(221)] = 6153,
  [SMALL_STATE(222)] = 6164,
  [SMALL_STATE(223)] = 6175,
  [SMALL_STATE(224)] = 6186,
  [SMALL_STATE(225)] = 6197,
  [SMALL_STATE(226)] = 6208,
  [SMALL_STATE(227)] = 6219,
  [SMALL_STATE(228)] = 6228,
  [SMALL_STATE(229)] = 6239,
  [SMALL_STATE(230)] = 6250,
  [SMALL_STATE(231)] = 6261,
  [SMALL_STATE(232)] = 6270,
  [SMALL_STATE(233)] = 6281,
  [SMALL_STATE(234)] = 6292,
  [SMALL_STATE(235)] = 6301,
  [SMALL_STATE(236)] = 6312,
  [SMALL_STATE(237)] = 6319,
  [SMALL_STATE(238)] = 6330,
  [SMALL_STATE(239)] = 6339,
  [SMALL_STATE(240)] = 6346,
  [SMALL_STATE(241)] = 6357,
  [SMALL_STATE(242)] = 6368,
  [SMALL_STATE(243)] = 6375,
  [SMALL_STATE(244)] = 6386,
  [SMALL_STATE(245)] = 6397,
  [SMALL_STATE(246)] = 6408,
  [SMALL_STATE(247)] = 6419,
  [SMALL_STATE(248)] = 6430,
  [SMALL_STATE(249)] = 6441,
  [SMALL_STATE(250)] = 6452,
  [SMALL_STATE(251)] = 6459,
  [SMALL_STATE(252)] = 6472,
  [SMALL_STATE(253)] = 6483,
  [SMALL_STATE(254)] = 6494,
  [SMALL_STATE(255)] = 6503,
  [SMALL_STATE(256)] = 6514,
  [SMALL_STATE(257)] = 6525,
  [SMALL_STATE(258)] = 6534,
  [SMALL_STATE(259)] = 6545,
  [SMALL_STATE(260)] = 6556,
  [SMALL_STATE(261)] = 6567,
  [SMALL_STATE(262)] = 6574,
  [SMALL_STATE(263)] = 6585,
  [SMALL_STATE(264)] = 6592,
  [SMALL_STATE(265)] = 6603,
  [SMALL_STATE(266)] = 6614,
  [SMALL_STATE(267)] = 6625,
  [SMALL_STATE(268)] = 6636,
  [SMALL_STATE(269)] = 6647,
  [SMALL_STATE(270)] = 6658,
  [SMALL_STATE(271)] = 6666,
  [SMALL_STATE(272)] = 6674,
  [SMALL_STATE(273)] = 6680,
  [SMALL_STATE(274)] = 6688,
  [SMALL_STATE(275)] = 6696,
  [SMALL_STATE(276)] = 6704,
  [SMALL_STATE(277)] = 6712,
  [SMALL_STATE(278)] = 6720,
  [SMALL_STATE(279)] = 6728,
  [SMALL_STATE(280)] = 6736,
  [SMALL_STATE(281)] = 6744,
  [SMALL_STATE(282)] = 6752,
  [SMALL_STATE(283)] = 6760,
  [SMALL_STATE(284)] = 6768,
  [SMALL_STATE(285)] = 6776,
  [SMALL_STATE(286)] = 6784,
  [SMALL_STATE(287)] = 6792,
  [SMALL_STATE(288)] = 6802,
  [SMALL_STATE(289)] = 6812,
  [SMALL_STATE(290)] = 6820,
  [SMALL_STATE(291)] = 6828,
  [SMALL_STATE(292)] = 6836,
  [SMALL_STATE(293)] = 6844,
  [SMALL_STATE(294)] = 6852,
  [SMALL_STATE(295)] = 6860,
  [SMALL_STATE(296)] = 6868,
  [SMALL_STATE(297)] = 6878,
  [SMALL_STATE(298)] = 6884,
  [SMALL_STATE(299)] = 6892,
  [SMALL_STATE(300)] = 6902,
  [SMALL_STATE(301)] = 6912,
  [SMALL_STATE(302)] = 6919,
  [SMALL_STATE(303)] = 6926,
  [SMALL_STATE(304)] = 6931,
  [SMALL_STATE(305)] = 6935,
  [SMALL_STATE(306)] = 6939,
  [SMALL_STATE(307)] = 6943,
  [SMALL_STATE(308)] = 6947,
  [SMALL_STATE(309)] = 6951,
  [SMALL_STATE(310)] = 6955,
  [SMALL_STATE(311)] = 6959,
  [SMALL_STATE(312)] = 6963,
  [SMALL_STATE(313)] = 6967,
  [SMALL_STATE(314)] = 6971,
  [SMALL_STATE(315)] = 6975,
  [SMALL_STATE(316)] = 6979,
  [SMALL_STATE(317)] = 6983,
  [SMALL_STATE(318)] = 6987,
  [SMALL_STATE(319)] = 6991,
  [SMALL_STATE(320)] = 6995,
  [SMALL_STATE(321)] = 6999,
  [SMALL_STATE(322)] = 7003,
  [SMALL_STATE(323)] = 7007,
  [SMALL_STATE(324)] = 7011,
  [SMALL_STATE(325)] = 7015,
  [SMALL_STATE(326)] = 7019,
  [SMALL_STATE(327)] = 7023,
  [SMALL_STATE(328)] = 7027,
  [SMALL_STATE(329)] = 7031,
  [SMALL_STATE(330)] = 7035,
  [SMALL_STATE(331)] = 7039,
  [SMALL_STATE(332)] = 7043,
  [SMALL_STATE(333)] = 7047,
  [SMALL_STATE(334)] = 7051,
  [SMALL_STATE(335)] = 7055,
  [SMALL_STATE(336)] = 7059,
  [SMALL_STATE(337)] = 7063,
  [SMALL_STATE(338)] = 7067,
  [SMALL_STATE(339)] = 7071,
  [SMALL_STATE(340)] = 7075,
  [SMALL_STATE(341)] = 7079,
  [SMALL_STATE(342)] = 7083,
  [SMALL_STATE(343)] = 7087,
  [SMALL_STATE(344)] = 7091,
  [SMALL_STATE(345)] = 7095,
  [SMALL_STATE(346)] = 7099,
  [SMALL_STATE(347)] = 7103,
  [SMALL_STATE(348)] = 7107,
  [SMALL_STATE(349)] = 7111,
  [SMALL_STATE(350)] = 7115,
  [SMALL_STATE(351)] = 7119,
  [SMALL_STATE(352)] = 7123,
  [SMALL_STATE(353)] = 7127,
  [SMALL_STATE(354)] = 7131,
  [SMALL_STATE(355)] = 7135,
  [SMALL_STATE(356)] = 7139,
  [SMALL_STATE(357)] = 7143,
  [SMALL_STATE(358)] = 7147,
  [SMALL_STATE(359)] = 7151,
  [SMALL_STATE(360)] = 7155,
  [SMALL_STATE(361)] = 7159,
  [SMALL_STATE(362)] = 7163,
  [SMALL_STATE(363)] = 7167,
  [SMALL_STATE(364)] = 7171,
  [SMALL_STATE(365)] = 7175,
  [SMALL_STATE(366)] = 7179,
  [SMALL_STATE(367)] = 7183,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automated_xact, 5, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automated_xact, 5, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_quantity, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_quantity, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 5, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 4, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 6, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 6, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 6, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 7, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 7, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 7, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(336),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 1, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 3, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 3, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [744] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_date, 2, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [823] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3, 0, 0),
  [828] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5, 0, 0),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, 0, 1),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [851] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [856] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 2, 0, 0),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2, 0, 0),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, 0, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [905] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3, 0, 0),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1, 0, 0),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10, 0, 0),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1, 0, 0),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1, 0, 0),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7, 0, 0),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3, 0, 0),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3, 0, 0),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1, 0, 0),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4, 0, 0),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1, 0, 0),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1040] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5, 0, 0),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9, 0, 0),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5, 0, 0),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5, 0, 0),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6, 0, 0),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8, 0, 0),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
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
