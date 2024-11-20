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
#define STATE_COUNT 401
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 0
#define TOKEN_COUNT 89
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
  aux_sym_note_token1 = 73,
  anon_sym_LBRACK = 74,
  anon_sym_RBRACK = 75,
  aux_sym_note_token2 = 76,
  sym_account_name = 77,
  sym__quantity = 78,
  anon_sym_PLUS = 79,
  aux_sym_commodity_token1 = 80,
  aux_sym_commodity_token2 = 81,
  aux_sym_commodity_token3 = 82,
  anon_sym_AT = 83,
  anon_sym_AT_AT = 84,
  anon_sym_SPACE = 85,
  anon_sym_TAB = 86,
  anon_sym_ = 87,
  anon_sym_TAB2 = 88,
  sym_source_file = 89,
  sym_journal_item = 90,
  sym_block_comment = 91,
  sym_test = 92,
  sym_option = 93,
  sym_option_value = 94,
  sym_directive = 95,
  sym_account_directive = 96,
  sym_account_subdirective = 97,
  sym_commodity_directive = 98,
  sym_commodity_subdirective = 99,
  sym_tag_directive = 100,
  sym_word_directive = 101,
  sym_filename = 102,
  sym_char_directive = 103,
  sym_alias_subdirective = 104,
  sym_default_subdirective = 105,
  sym_format_subdirective = 106,
  sym_note_subdirective = 107,
  sym_assert_subdirective = 108,
  sym_check_subdirective = 109,
  sym_check_in = 110,
  sym_check_out = 111,
  sym_xact = 112,
  sym_plain_xact = 113,
  sym_periodic_xact = 114,
  sym_interval = 115,
  sym_automated_xact = 116,
  sym__xact_date = 117,
  sym_date = 118,
  sym_effective_date = 119,
  sym__4d = 120,
  sym__single_date = 121,
  sym_status = 122,
  sym_code = 123,
  sym_note = 124,
  sym_posting = 125,
  sym_account = 126,
  sym_amount = 127,
  sym_quantity = 128,
  sym_negative_quantity = 129,
  sym_commodity = 130,
  sym_price = 131,
  sym_balance_assertion = 132,
  aux_sym_source_file_repeat1 = 133,
  aux_sym_block_comment_repeat1 = 134,
  aux_sym_account_directive_repeat1 = 135,
  aux_sym_commodity_directive_repeat1 = 136,
  aux_sym_tag_directive_repeat1 = 137,
  aux_sym_plain_xact_repeat1 = 138,
  aux_sym_note_repeat1 = 139,
  aux_sym_note_repeat2 = 140,
  aux_sym_whitespace_repeat1 = 141,
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
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 26,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 27,
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
  [56] = 24,
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
  [90] = 51,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 81,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 81,
  [101] = 101,
  [102] = 102,
  [103] = 10,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 24,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 27,
  [114] = 26,
  [115] = 115,
  [116] = 81,
  [117] = 117,
  [118] = 81,
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
  [137] = 126,
  [138] = 133,
  [139] = 139,
  [140] = 140,
  [141] = 121,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 54,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 164,
  [168] = 168,
  [169] = 55,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 81,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 155,
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
  [190] = 181,
  [191] = 191,
  [192] = 175,
  [193] = 160,
  [194] = 194,
  [195] = 195,
  [196] = 81,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 194,
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
  [228] = 204,
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
  [254] = 253,
  [255] = 81,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 81,
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
  [284] = 81,
  [285] = 81,
  [286] = 286,
  [287] = 81,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 275,
  [294] = 276,
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
  [308] = 278,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 281,
  [316] = 279,
  [317] = 317,
  [318] = 268,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 280,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 324,
  [329] = 325,
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
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 382,
  [390] = 341,
  [391] = 350,
  [392] = 392,
  [393] = 345,
  [394] = 367,
  [395] = 341,
  [396] = 350,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 392,
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
      if (eof) ADVANCE(223);
      ADVANCE_MAP(
        '\t', 631,
        '\n', 224,
        ' ', 625,
        '!', 447,
        '"', 33,
        '(', 449,
        ')', 452,
        '*', 445,
        '+', 465,
        '-', 309,
        ';', 455,
        '=', 314,
        '@', 623,
        'A', 360,
        'B', 546,
        'C', 376,
        'D', 372,
        'E', 570,
        'I', 400,
        'N', 368,
        'O', 408,
        'P', 380,
        'Y', 364,
        '[', 457,
        ']', 459,
        'a', 477,
        'b', 531,
        'c', 497,
        'd', 485,
        'e', 470,
        'f', 512,
        'i', 395,
        'n', 513,
        'o', 404,
        'p', 471,
        't', 472,
        'y', 468,
        '~', 411,
        'M', 560,
        'm', 560,
        'Q', 569,
        'q', 569,
        'W', 540,
        'w', 540,
        '.', 437,
        '/', 437,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(621);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 631,
        '\n', 224,
        ' ', 625,
        '"', 33,
        '+', 465,
        '-', 308,
        ';', 455,
        '=', 314,
        '@', 623,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(621);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(620);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(631);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == ']') ADVANCE(459);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(631);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(631);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '!') ADVANCE(447);
      if (lookahead == '(') ADVANCE(449);
      if (lookahead == '*') ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';') ADVANCE(453);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(631);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == '@') ADVANCE(623);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(621);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\t', 631,
        ' ', 625,
        '+', 465,
        '-', 308,
        'D', 125,
        'E', 198,
        'a', 78,
        'c', 71,
        'd', 61,
        'e', 36,
        'f', 95,
        'n', 93,
        'p', 40,
        'B', 151,
        'b', 151,
        'M', 171,
        'm', 171,
        'Q', 197,
        'q', 197,
        'W', 142,
        'w', 142,
        'Y', 141,
        'y', 141,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(631);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '+') ADVANCE(465);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(631);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(456);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(631);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(460);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(633);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '!') ADVANCE(448);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == '*') ADVANCE(446);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '[') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(463);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(633);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == '[') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(463);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == ' ') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(639);
      if (lookahead == ' ') ADVANCE(638);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == ' ') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(345);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(635);
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(636);
      if (lookahead == ' ') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(23);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(19);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(24);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'h') ADVANCE(20);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(394);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(27);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(26);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(21);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(391);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(213);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 36:
      if (lookahead == 'V') ADVANCE(140);
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(346);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 75:
      if (lookahead == 'k') ADVANCE(392);
      END_STATE();
    case 76:
      if (lookahead == 'k') ADVANCE(64);
      END_STATE();
    case 77:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 119:
      if (lookahead == 'y') ADVANCE(326);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 130:
      ADVANCE_MAP(
        'D', 121,
        'd', 121,
        'M', 169,
        'm', 169,
        'Q', 195,
        'q', 195,
        'W', 135,
        'w', 135,
        'Y', 134,
        'y', 134,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 131:
      ADVANCE_MAP(
        'D', 123,
        'd', 123,
        'M', 170,
        'm', 170,
        'Q', 196,
        'q', 196,
        'W', 138,
        'w', 138,
        'Y', 137,
        'y', 137,
      );
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 147:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(415);
      END_STATE();
    case 148:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 149:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(160);
      END_STATE();
    case 150:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 153:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(414);
      END_STATE();
    case 154:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(184);
      END_STATE();
    case 155:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(158);
      END_STATE();
    case 156:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(161);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 164:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(146);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 173:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 174:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 175:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 176:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 177:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 178:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 179:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 183:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      END_STATE();
    case 184:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 185:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(422);
      END_STATE();
    case 186:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(420);
      END_STATE();
    case 187:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      END_STATE();
    case 188:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 189:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 190:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 191:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 192:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 193:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 194:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 195:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 196:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 197:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 198:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 199:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(413);
      END_STATE();
    case 200:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 201:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(423);
      END_STATE();
    case 202:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 203:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(425);
      END_STATE();
    case 204:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(435);
      END_STATE();
    case 205:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(429);
      END_STATE();
    case 206:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(427);
      END_STATE();
    case 207:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 208:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(433);
      END_STATE();
    case 209:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 216:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(463);
      END_STATE();
    case 217:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 218:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(463);
      END_STATE();
    case 219:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(313);
      END_STATE();
    case 220:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 221:
      if (eof) ADVANCE(223);
      ADVANCE_MAP(
        '\t', 631,
        '\n', 224,
        ' ', 625,
        '"', 33,
        '-', 309,
        '=', 314,
        'A', 361,
        'C', 377,
        'D', 373,
        'I', 401,
        'N', 369,
        'O', 409,
        'P', 381,
        'Y', 365,
        'a', 583,
        'b', 617,
        'c', 606,
        'd', 590,
        'e', 603,
        'i', 397,
        'o', 405,
        't', 580,
        'y', 591,
        '~', 411,
        '#', 29,
        '%', 29,
        '*', 29,
        ';', 29,
        '|', 29,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(621);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(620);
      END_STATE();
    case 222:
      if (eof) ADVANCE(223);
      ADVANCE_MAP(
        '\t', 631,
        '\n', 224,
        ' ', 625,
        '-', 309,
        '=', 314,
        'A', 359,
        'C', 375,
        'D', 371,
        'I', 399,
        'N', 367,
        'O', 407,
        'P', 379,
        'Y', 363,
        'a', 46,
        'b', 115,
        'c', 72,
        'd', 56,
        'e', 88,
        'i', 396,
        'o', 403,
        't', 37,
        'y', 57,
        '~', 411,
        '#', 29,
        '%', 29,
        '*', 29,
        ';', 29,
        '|', 29,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_comment);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(634);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(627);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(634);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(627);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(634);
      if (lookahead == ' ') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'g') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'k') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'y') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (eof) ADVANCE(223);
      ADVANCE_MAP(
        '\n', 224,
        '-', 310,
        '=', 315,
        'A', 362,
        'C', 378,
        'D', 374,
        'I', 402,
        'N', 370,
        'O', 410,
        'P', 382,
        'Y', 366,
        'a', 237,
        'b', 286,
        'c', 270,
        'd', 247,
        'e', 264,
        'i', 398,
        'o', 406,
        't', 234,
        'y', 248,
        '~', 412,
        '#', 233,
        '%', 233,
        '*', 233,
        ';', 233,
        '|', 233,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == ' ') ADVANCE(45);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_end);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_test);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_endtest);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_endtest);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_option_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_option_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_account);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_eval);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_account_subdirective_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_payee);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_tag);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_tag_directive_token1);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_include);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_alias);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(533);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_def);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_year);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_A);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_Y);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_N);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_D);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_C);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_P);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_format);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_note);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(480);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(585);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_I);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_o);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_O);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_interval_token1);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_interval_token2);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_interval_token3);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_interval_token4);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_interval_token5);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_interval_token6);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_interval_token7);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_interval_token8);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_interval_token9);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_interval_token10);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__2d);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__2d);
      if (lookahead == ':') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_query);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_note_token1);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_note_token2);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(461);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__quantity);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == ' ') ADVANCE(130);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'A') ADVANCE(564);
      if (lookahead == 'a') ADVANCE(469);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(467);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R') ADVANCE(551);
      if (lookahead == 'r') ADVANCE(351);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'V') ADVANCE(538);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead == 'v') ADVANCE(473);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(535);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'e') ADVANCE(518);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(519);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(517);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(524);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(498);
      if (lookahead == 's') ADVANCE(520);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(501);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(500);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(504);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(514);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'd') ADVANCE(295);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'd') ADVANCE(499);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'd') ADVANCE(488);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(388);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(325);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(338);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(515);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(523);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(479);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(487);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(528);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'o') ADVANCE(483);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'f') ADVANCE(347);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'g') ADVANCE(333);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'h') ADVANCE(491);
      if (lookahead == 'o') ADVANCE(507);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(474);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(529);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(393);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(490);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(493);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(322);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(532);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(527);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'm') ADVANCE(494);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'm') ADVANCE(506);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'm') ADVANCE(475);
      if (lookahead == 't') ADVANCE(486);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'm') ADVANCE(476);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(525);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(526);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(516);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(508);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(530);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(522);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(509);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(502);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(521);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(342);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(489);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(303);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(390);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(356);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(386);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(318);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(227);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(384);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(331);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(534);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(510);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(478);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(484);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(505);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'y') ADVANCE(327);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'y') ADVANCE(492);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(553);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(555);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(552);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(554);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(575);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(577);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(578);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(561);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(543);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(566);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(568);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(558);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(544);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(542);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(537);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(538);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(424);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(466);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(436);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(426);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(430);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(428);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(432);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(434);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(609);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(608);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(610);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == 'l') ADVANCE(597);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(599);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(600);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(607);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(298);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(598);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(592);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(595);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(581);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(612);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(588);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(348);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'g') ADVANCE(334);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(582);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(615);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(593);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(618);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(594);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(601);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(587);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(613);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(614);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(602);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(616);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(352);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(611);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(343);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(304);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(357);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(319);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(228);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(619);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(604);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(584);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(589);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(328);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(624);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(345);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(345);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 222},
  [2] = {.lex_state = 222},
  [3] = {.lex_state = 222},
  [4] = {.lex_state = 222},
  [5] = {.lex_state = 222},
  [6] = {.lex_state = 222},
  [7] = {.lex_state = 222},
  [8] = {.lex_state = 222},
  [9] = {.lex_state = 222},
  [10] = {.lex_state = 221},
  [11] = {.lex_state = 222},
  [12] = {.lex_state = 222},
  [13] = {.lex_state = 222},
  [14] = {.lex_state = 222},
  [15] = {.lex_state = 222},
  [16] = {.lex_state = 222},
  [17] = {.lex_state = 222},
  [18] = {.lex_state = 222},
  [19] = {.lex_state = 222},
  [20] = {.lex_state = 222},
  [21] = {.lex_state = 222},
  [22] = {.lex_state = 222},
  [23] = {.lex_state = 222},
  [24] = {.lex_state = 221},
  [25] = {.lex_state = 222},
  [26] = {.lex_state = 221},
  [27] = {.lex_state = 221},
  [28] = {.lex_state = 222},
  [29] = {.lex_state = 222},
  [30] = {.lex_state = 222},
  [31] = {.lex_state = 222},
  [32] = {.lex_state = 222},
  [33] = {.lex_state = 222},
  [34] = {.lex_state = 222},
  [35] = {.lex_state = 222},
  [36] = {.lex_state = 222},
  [37] = {.lex_state = 222},
  [38] = {.lex_state = 222},
  [39] = {.lex_state = 222},
  [40] = {.lex_state = 222},
  [41] = {.lex_state = 222},
  [42] = {.lex_state = 222},
  [43] = {.lex_state = 222},
  [44] = {.lex_state = 222},
  [45] = {.lex_state = 222},
  [46] = {.lex_state = 222},
  [47] = {.lex_state = 222},
  [48] = {.lex_state = 222},
  [49] = {.lex_state = 222},
  [50] = {.lex_state = 222},
  [51] = {.lex_state = 222},
  [52] = {.lex_state = 222},
  [53] = {.lex_state = 222},
  [54] = {.lex_state = 222},
  [55] = {.lex_state = 222},
  [56] = {.lex_state = 222},
  [57] = {.lex_state = 293},
  [58] = {.lex_state = 293},
  [59] = {.lex_state = 293},
  [60] = {.lex_state = 293},
  [61] = {.lex_state = 293},
  [62] = {.lex_state = 293},
  [63] = {.lex_state = 293},
  [64] = {.lex_state = 293},
  [65] = {.lex_state = 222},
  [66] = {.lex_state = 222},
  [67] = {.lex_state = 222},
  [68] = {.lex_state = 222},
  [69] = {.lex_state = 222},
  [70] = {.lex_state = 222},
  [71] = {.lex_state = 222},
  [72] = {.lex_state = 222},
  [73] = {.lex_state = 222},
  [74] = {.lex_state = 222},
  [75] = {.lex_state = 222},
  [76] = {.lex_state = 222},
  [77] = {.lex_state = 222},
  [78] = {.lex_state = 222},
  [79] = {.lex_state = 222},
  [80] = {.lex_state = 222},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 222},
  [120] = {.lex_state = 222},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 230},
  [124] = {.lex_state = 222},
  [125] = {.lex_state = 231},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 230},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 230},
  [134] = {.lex_state = 230},
  [135] = {.lex_state = 222},
  [136] = {.lex_state = 231},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 231},
  [139] = {.lex_state = 230},
  [140] = {.lex_state = 231},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 222},
  [145] = {.lex_state = 231},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 11},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 231},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 17},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 230},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 231},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 230},
  [193] = {.lex_state = 17},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 11},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 17},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 15},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 222},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 15},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 12},
  [239] = {.lex_state = 12},
  [240] = {.lex_state = 12},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 222},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 232},
  [254] = {.lex_state = 232},
  [255] = {.lex_state = 232},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 232},
  [261] = {.lex_state = 3},
  [262] = {.lex_state = 232},
  [263] = {.lex_state = 3},
  [264] = {.lex_state = 16},
  [265] = {.lex_state = 16},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 9},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 9},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 14},
  [283] = {.lex_state = 15},
  [284] = {.lex_state = 15},
  [285] = {.lex_state = 14},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 12},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 18},
  [294] = {.lex_state = 18},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 18},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 18},
  [316] = {.lex_state = 18},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 18},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 18},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 220},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 3},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 6},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 5},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 6},
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
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 5},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 220},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 3},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 219},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 5},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 3},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 451},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 6},
  [391] = {.lex_state = 6},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 6},
  [396] = {.lex_state = 6},
  [397] = {.lex_state = 218},
  [398] = {.lex_state = 218},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
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
    [aux_sym_interval_token1] = ACTIONS(1),
    [aux_sym_interval_token2] = ACTIONS(1),
    [aux_sym_interval_token3] = ACTIONS(1),
    [aux_sym_interval_token4] = ACTIONS(1),
    [aux_sym_interval_token5] = ACTIONS(1),
    [aux_sym_interval_token6] = ACTIONS(1),
    [aux_sym_interval_token7] = ACTIONS(1),
    [aux_sym_interval_token8] = ACTIONS(1),
    [aux_sym_interval_token9] = ACTIONS(1),
    [aux_sym_interval_token10] = ACTIONS(1),
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
    [sym_source_file] = STATE(362),
    [sym_journal_item] = STATE(2),
    [sym_block_comment] = STATE(80),
    [sym_test] = STATE(80),
    [sym_option] = STATE(72),
    [sym_directive] = STATE(80),
    [sym_account_directive] = STATE(72),
    [sym_commodity_directive] = STATE(72),
    [sym_tag_directive] = STATE(72),
    [sym_word_directive] = STATE(365),
    [sym_char_directive] = STATE(365),
    [sym_check_in] = STATE(372),
    [sym_check_out] = STATE(372),
    [sym_xact] = STATE(80),
    [sym_plain_xact] = STATE(73),
    [sym_periodic_xact] = STATE(73),
    [sym_automated_xact] = STATE(73),
    [sym__xact_date] = STATE(186),
    [sym_date] = STATE(185),
    [sym__4d] = STATE(344),
    [sym__single_date] = STATE(184),
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
    STATE(184), 1,
      sym__single_date,
    STATE(185), 1,
      sym_date,
    STATE(186), 1,
      sym__xact_date,
    STATE(344), 1,
      sym__4d,
    ACTIONS(55), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(365), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(372), 2,
      sym_check_in,
      sym_check_out,
    STATE(73), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(72), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(80), 4,
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
    STATE(184), 1,
      sym__single_date,
    STATE(185), 1,
      sym_date,
    STATE(186), 1,
      sym__xact_date,
    STATE(344), 1,
      sym__4d,
    ACTIONS(142), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(365), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(372), 2,
      sym_check_in,
      sym_check_out,
    STATE(73), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(72), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(80), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
  [260] = 6,
    STATE(108), 1,
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
    STATE(53), 5,
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
    STATE(108), 1,
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
    STATE(53), 5,
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
    STATE(108), 1,
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
    STATE(53), 5,
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
    STATE(142), 1,
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
    STATE(30), 4,
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
    STATE(142), 1,
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
    STATE(30), 4,
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
    STATE(142), 1,
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
    STATE(30), 4,
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
  [575] = 7,
    ACTIONS(189), 1,
      aux_sym_commodity_token1,
    STATE(54), 1,
      sym_commodity,
    STATE(164), 1,
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
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(199), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(197), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(11), 3,
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
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(204), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(13), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(202), 27,
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
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(210), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(11), 3,
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
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(16), 2,
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
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(16), 2,
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
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(226), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(224), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(222), 27,
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
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(16), 2,
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
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(16), 2,
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
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(16), 2,
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
  [1044] = 5,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(243), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(241), 27,
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
  [1090] = 5,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(247), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(245), 27,
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
  [1136] = 5,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(16), 2,
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
  [1182] = 5,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(16), 2,
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
  [1228] = 2,
    ACTIONS(257), 11,
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
    ACTIONS(259), 24,
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
  [1268] = 5,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(16), 2,
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
  [1314] = 2,
    ACTIONS(265), 11,
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
    ACTIONS(267), 24,
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
  [1354] = 2,
    ACTIONS(269), 11,
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
    ACTIONS(271), 24,
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
  [1394] = 2,
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
  [1431] = 2,
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
  [1468] = 2,
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
  [1505] = 2,
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
  [1542] = 2,
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
  [1579] = 2,
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
  [1616] = 2,
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
  [1653] = 2,
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
  [1690] = 2,
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
  [1727] = 2,
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
  [1764] = 2,
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
  [1801] = 2,
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
  [1838] = 2,
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
  [1875] = 2,
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
  [1912] = 2,
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
  [1949] = 2,
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
  [1986] = 2,
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
  [2023] = 2,
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
  [2060] = 2,
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
  [2097] = 2,
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
  [2134] = 2,
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
  [2171] = 2,
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
  [2208] = 2,
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
  [2245] = 2,
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
  [2282] = 2,
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
  [2319] = 2,
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
  [2356] = 2,
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
  [2393] = 2,
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
  [2430] = 2,
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
  [2467] = 3,
    ACTIONS(381), 1,
      aux_sym_block_comment_token1,
    ACTIONS(377), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(379), 27,
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
  [2505] = 3,
    ACTIONS(387), 1,
      aux_sym_block_comment_token1,
    ACTIONS(383), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(385), 27,
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
  [2543] = 3,
    ACTIONS(393), 1,
      aux_sym_block_comment_token1,
    ACTIONS(389), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(391), 27,
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
  [2581] = 3,
    ACTIONS(399), 1,
      aux_sym_block_comment_token1,
    ACTIONS(395), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(397), 27,
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
  [2619] = 3,
    ACTIONS(405), 1,
      aux_sym_block_comment_token1,
    ACTIONS(401), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(403), 27,
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
  [2657] = 3,
    ACTIONS(411), 1,
      aux_sym_block_comment_token1,
    ACTIONS(407), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(409), 27,
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
  [2695] = 3,
    ACTIONS(417), 1,
      aux_sym_block_comment_token1,
    ACTIONS(413), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(415), 27,
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
  [2733] = 3,
    ACTIONS(423), 1,
      aux_sym_block_comment_token1,
    ACTIONS(419), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(421), 27,
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
  [2771] = 2,
    ACTIONS(397), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(395), 27,
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
  [2806] = 2,
    ACTIONS(379), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(377), 27,
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
  [2841] = 2,
    ACTIONS(403), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(401), 27,
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
  [2876] = 2,
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
  [2911] = 2,
    ACTIONS(391), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(389), 27,
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
  [2946] = 2,
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
  [2981] = 2,
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
  [3016] = 2,
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
  [3051] = 2,
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
  [3086] = 2,
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
  [3121] = 2,
    ACTIONS(421), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(419), 27,
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
  [3156] = 2,
    ACTIONS(447), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(445), 27,
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
  [3191] = 2,
    ACTIONS(385), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(383), 27,
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
  [3226] = 2,
    ACTIONS(451), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(449), 27,
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
  [3261] = 2,
    ACTIONS(409), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(407), 27,
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
  [3296] = 2,
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
  [3331] = 3,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(459), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(457), 26,
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
  [3367] = 17,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(88), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_amount,
    STATE(126), 1,
      sym_commodity,
    STATE(143), 1,
      sym_price,
    STATE(191), 1,
      sym_balance_assertion,
    STATE(358), 1,
      sym_note,
    ACTIONS(480), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3423] = 4,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    STATE(312), 1,
      sym_interval,
    ACTIONS(484), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(482), 17,
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
  [3453] = 17,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    ACTIONS(486), 1,
      anon_sym_LF,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(106), 1,
      sym_amount,
    STATE(122), 1,
      sym_price,
    STATE(126), 1,
      sym_commodity,
    STATE(189), 1,
      sym_balance_assertion,
    STATE(360), 1,
      sym_note,
    ACTIONS(488), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3509] = 17,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    ACTIONS(490), 1,
      anon_sym_LF,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(107), 1,
      sym_amount,
    STATE(126), 1,
      sym_commodity,
    STATE(128), 1,
      sym_price,
    STATE(187), 1,
      sym_balance_assertion,
    STATE(373), 1,
      sym_note,
    ACTIONS(492), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3565] = 16,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(107), 1,
      sym_amount,
    STATE(126), 1,
      sym_commodity,
    STATE(128), 1,
      sym_price,
    STATE(187), 1,
      sym_balance_assertion,
    STATE(373), 1,
      sym_note,
    ACTIONS(494), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3618] = 16,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(104), 1,
      sym_amount,
    STATE(126), 1,
      sym_commodity,
    STATE(130), 1,
      sym_price,
    STATE(195), 1,
      sym_balance_assertion,
    STATE(369), 1,
      sym_note,
    ACTIONS(494), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3671] = 16,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(106), 1,
      sym_amount,
    STATE(122), 1,
      sym_price,
    STATE(126), 1,
      sym_commodity,
    STATE(189), 1,
      sym_balance_assertion,
    STATE(360), 1,
      sym_note,
    ACTIONS(494), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3724] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_commodity,
    STATE(245), 1,
      sym_amount,
    ACTIONS(496), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3756] = 2,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(357), 12,
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
  [3774] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_commodity,
    STATE(219), 1,
      sym_amount,
    ACTIONS(498), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3806] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_commodity,
    STATE(377), 1,
      sym_amount,
    ACTIONS(500), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3838] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_commodity,
    STATE(256), 1,
      sym_amount,
    ACTIONS(494), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3870] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_commodity,
    STATE(208), 1,
      sym_amount,
    ACTIONS(494), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3902] = 4,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(502), 2,
      sym__2d,
      anon_sym_AT,
    ACTIONS(504), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(457), 8,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      sym_time,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3924] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_commodity,
    STATE(347), 1,
      sym_amount,
    ACTIONS(494), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3956] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_commodity,
    STATE(377), 1,
      sym_amount,
    ACTIONS(494), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3988] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_commodity,
    STATE(340), 1,
      sym_amount,
    ACTIONS(494), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4020] = 9,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_commodity,
    STATE(348), 1,
      sym_amount,
    ACTIONS(507), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(103), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4052] = 4,
    ACTIONS(502), 1,
      anon_sym_AT,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(509), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(457), 9,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [4074] = 9,
    ACTIONS(512), 1,
      anon_sym_DASH,
    ACTIONS(514), 1,
      sym__quantity,
    ACTIONS(516), 1,
      anon_sym_PLUS,
    STATE(40), 1,
      sym_amount,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(137), 1,
      sym_commodity,
    ACTIONS(494), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(10), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4106] = 11,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      sym_account_name,
    ACTIONS(526), 1,
      anon_sym_SPACE,
    ACTIONS(528), 1,
      anon_sym_TAB,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    STATE(170), 1,
      sym_status,
    STATE(257), 1,
      sym_account,
    STATE(335), 1,
      sym_note,
    ACTIONS(518), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [4141] = 6,
    ACTIONS(187), 1,
      anon_sym_AT,
    STATE(157), 1,
      sym_commodity,
    STATE(167), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(185), 4,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
  [4166] = 10,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    ACTIONS(532), 1,
      anon_sym_LF,
    STATE(110), 1,
      aux_sym_whitespace_repeat1,
    STATE(131), 1,
      sym_price,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(385), 1,
      sym_note,
    ACTIONS(534), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4198] = 10,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    ACTIONS(486), 1,
      anon_sym_LF,
    STATE(112), 1,
      aux_sym_whitespace_repeat1,
    STATE(122), 1,
      sym_price,
    STATE(189), 1,
      sym_balance_assertion,
    STATE(360), 1,
      sym_note,
    ACTIONS(536), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4230] = 10,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    ACTIONS(490), 1,
      anon_sym_LF,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(128), 1,
      sym_price,
    STATE(187), 1,
      sym_balance_assertion,
    STATE(373), 1,
      sym_note,
    ACTIONS(538), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4262] = 10,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    ACTIONS(540), 1,
      anon_sym_LF,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    STATE(130), 1,
      sym_price,
    STATE(195), 1,
      sym_balance_assertion,
    STATE(369), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4294] = 8,
    ACTIONS(546), 1,
      anon_sym_alias,
    ACTIONS(548), 1,
      anon_sym_default,
    ACTIONS(550), 1,
      anon_sym_note,
    ACTIONS(552), 1,
      anon_sym_assert,
    ACTIONS(554), 1,
      anon_sym_check,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(484), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(544), 2,
      anon_sym_eval,
      anon_sym_payee,
  [4321] = 2,
    ACTIONS(259), 1,
      anon_sym_AT,
    ACTIONS(257), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4336] = 9,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(132), 1,
      sym_price,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(331), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4365] = 9,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(131), 1,
      sym_price,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(385), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4394] = 9,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(128), 1,
      sym_price,
    STATE(187), 1,
      sym_balance_assertion,
    STATE(373), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4423] = 2,
    ACTIONS(271), 1,
      anon_sym_AT,
    ACTIONS(269), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4438] = 2,
    ACTIONS(267), 1,
      anon_sym_AT,
    ACTIONS(265), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4453] = 9,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_AT_AT,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(130), 1,
      sym_price,
    STATE(195), 1,
      sym_balance_assertion,
    STATE(369), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4482] = 5,
    ACTIONS(457), 1,
      anon_sym_SEMI,
    ACTIONS(558), 1,
      anon_sym_SPACE,
    ACTIONS(561), 1,
      anon_sym_TAB,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(502), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [4502] = 7,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    ACTIONS(568), 1,
      sym_payee,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    STATE(178), 1,
      sym_code,
    STATE(197), 1,
      sym_status,
    ACTIONS(564), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(570), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4526] = 4,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(502), 2,
      anon_sym_assert,
      anon_sym_check,
    ACTIONS(572), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(457), 4,
      anon_sym_DASH,
      aux_sym_tag_directive_token1,
      sym__quantity,
      anon_sym_PLUS,
  [4544] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(144), 1,
      aux_sym_whitespace_repeat1,
    STATE(184), 1,
      sym__single_date,
    STATE(235), 1,
      sym_date,
    STATE(344), 1,
      sym__4d,
    ACTIONS(575), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4567] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(184), 1,
      sym__single_date,
    STATE(274), 1,
      sym_date,
    STATE(344), 1,
      sym__4d,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4590] = 6,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(577), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(169), 2,
      sym_quantity,
      sym_negative_quantity,
  [4611] = 7,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(490), 1,
      anon_sym_LF,
    STATE(159), 1,
      aux_sym_whitespace_repeat1,
    STATE(187), 1,
      sym_balance_assertion,
    STATE(373), 1,
      sym_note,
    ACTIONS(579), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4634] = 7,
    ACTIONS(381), 1,
      anon_sym_endcomment,
    ACTIONS(581), 1,
      anon_sym_LF,
    ACTIONS(583), 1,
      aux_sym_block_comment_token1,
    ACTIONS(585), 1,
      anon_sym_end,
    STATE(133), 1,
      aux_sym_block_comment_repeat1,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(587), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4657] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    STATE(184), 1,
      sym__single_date,
    STATE(237), 1,
      sym_date,
    STATE(344), 1,
      sym__4d,
    ACTIONS(589), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4680] = 7,
    ACTIONS(405), 1,
      anon_sym_endtest,
    ACTIONS(591), 1,
      anon_sym_LF,
    ACTIONS(593), 1,
      aux_sym_block_comment_token1,
    ACTIONS(595), 1,
      anon_sym_end,
    STATE(138), 1,
      aux_sym_block_comment_repeat1,
    STATE(253), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(597), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4703] = 6,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      sym__quantity,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(599), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(157), 2,
      sym_quantity,
      sym_negative_quantity,
  [4724] = 2,
    ACTIONS(603), 1,
      sym__dsep,
    ACTIONS(601), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4737] = 7,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(540), 1,
      anon_sym_LF,
    STATE(165), 1,
      aux_sym_whitespace_repeat1,
    STATE(195), 1,
      sym_balance_assertion,
    STATE(369), 1,
      sym_note,
    ACTIONS(605), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4760] = 7,
    ACTIONS(393), 1,
      anon_sym_endcomment,
    ACTIONS(581), 1,
      anon_sym_LF,
    ACTIONS(583), 1,
      aux_sym_block_comment_token1,
    ACTIONS(607), 1,
      anon_sym_end,
    STATE(133), 1,
      aux_sym_block_comment_repeat1,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(587), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4783] = 7,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(532), 1,
      anon_sym_LF,
    STATE(172), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(385), 1,
      sym_note,
    ACTIONS(609), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4806] = 7,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(611), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(331), 1,
      sym_note,
    ACTIONS(613), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4829] = 7,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(615), 1,
      anon_sym_LF,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    STATE(182), 1,
      sym_balance_assertion,
    STATE(337), 1,
      sym_note,
    ACTIONS(617), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4852] = 6,
    ACTIONS(619), 1,
      anon_sym_LF,
    ACTIONS(622), 1,
      aux_sym_block_comment_token1,
    STATE(133), 1,
      aux_sym_block_comment_repeat1,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(625), 2,
      anon_sym_end,
      anon_sym_endcomment,
    ACTIONS(627), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4873] = 7,
    ACTIONS(387), 1,
      anon_sym_endcomment,
    ACTIONS(583), 1,
      aux_sym_block_comment_token1,
    ACTIONS(630), 1,
      anon_sym_LF,
    ACTIONS(632), 1,
      anon_sym_end,
    STATE(123), 1,
      aux_sym_block_comment_repeat1,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(587), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4896] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(184), 1,
      sym__single_date,
    STATE(323), 1,
      sym_date,
    STATE(344), 1,
      sym__4d,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4919] = 7,
    ACTIONS(411), 1,
      anon_sym_endtest,
    ACTIONS(593), 1,
      aux_sym_block_comment_token1,
    ACTIONS(634), 1,
      anon_sym_LF,
    ACTIONS(636), 1,
      anon_sym_end,
    STATE(125), 1,
      aux_sym_block_comment_repeat1,
    STATE(253), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(597), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4942] = 6,
    ACTIONS(638), 1,
      anon_sym_DASH,
    ACTIONS(640), 1,
      sym__quantity,
    ACTIONS(642), 1,
      anon_sym_PLUS,
    STATE(141), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(644), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(54), 2,
      sym_quantity,
      sym_negative_quantity,
  [4963] = 6,
    ACTIONS(646), 1,
      anon_sym_LF,
    ACTIONS(649), 1,
      aux_sym_block_comment_token1,
    STATE(138), 1,
      aux_sym_block_comment_repeat1,
    STATE(253), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(625), 2,
      anon_sym_end,
      anon_sym_endtest,
    ACTIONS(652), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4984] = 7,
    ACTIONS(583), 1,
      aux_sym_block_comment_token1,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(657), 1,
      anon_sym_end,
    ACTIONS(659), 1,
      anon_sym_endcomment,
    STATE(129), 1,
      aux_sym_block_comment_repeat1,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(587), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5007] = 7,
    ACTIONS(593), 1,
      aux_sym_block_comment_token1,
    ACTIONS(661), 1,
      anon_sym_LF,
    ACTIONS(663), 1,
      anon_sym_end,
    ACTIONS(665), 1,
      anon_sym_endtest,
    STATE(145), 1,
      aux_sym_block_comment_repeat1,
    STATE(253), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(597), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5030] = 6,
    ACTIONS(638), 1,
      anon_sym_DASH,
    ACTIONS(640), 1,
      sym__quantity,
    ACTIONS(642), 1,
      anon_sym_PLUS,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(577), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(55), 2,
      sym_quantity,
      sym_negative_quantity,
  [5051] = 7,
    ACTIONS(546), 1,
      anon_sym_alias,
    ACTIONS(548), 1,
      anon_sym_default,
    ACTIONS(550), 1,
      anon_sym_note,
    ACTIONS(667), 1,
      anon_sym_nomarket,
    ACTIONS(669), 1,
      anon_sym_format,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(484), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5074] = 7,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(486), 1,
      anon_sym_LF,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    STATE(189), 1,
      sym_balance_assertion,
    STATE(360), 1,
      sym_note,
    ACTIONS(671), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5097] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(184), 1,
      sym__single_date,
    STATE(272), 1,
      sym_date,
    STATE(344), 1,
      sym__4d,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5120] = 7,
    ACTIONS(423), 1,
      anon_sym_endtest,
    ACTIONS(591), 1,
      anon_sym_LF,
    ACTIONS(593), 1,
      aux_sym_block_comment_token1,
    ACTIONS(673), 1,
      anon_sym_end,
    STATE(138), 1,
      aux_sym_block_comment_repeat1,
    STATE(253), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(597), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5143] = 7,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      sym_account_name,
    ACTIONS(675), 1,
      anon_sym_SPACE,
    ACTIONS(677), 1,
      anon_sym_TAB,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    STATE(243), 1,
      sym_account,
  [5165] = 7,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      sym_account_name,
    ACTIONS(675), 1,
      anon_sym_SPACE,
    ACTIONS(677), 1,
      anon_sym_TAB,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    STATE(231), 1,
      sym_account,
  [5187] = 7,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      sym_account_name,
    ACTIONS(675), 1,
      anon_sym_SPACE,
    ACTIONS(677), 1,
      anon_sym_TAB,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    STATE(366), 1,
      sym_account,
  [5209] = 6,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(182), 1,
      sym_balance_assertion,
    STATE(337), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5229] = 7,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      sym_account_name,
    ACTIONS(679), 1,
      anon_sym_SPACE,
    ACTIONS(681), 1,
      anon_sym_TAB,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    STATE(231), 1,
      sym_account,
  [5251] = 6,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(183), 1,
      sym_balance_assertion,
    STATE(342), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5271] = 4,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(267), 1,
      sym_commodity,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5287] = 7,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      sym_account_name,
    ACTIONS(683), 1,
      anon_sym_SPACE,
    ACTIONS(685), 1,
      anon_sym_TAB,
    STATE(158), 1,
      aux_sym_whitespace_repeat1,
    STATE(249), 1,
      sym_account,
  [5309] = 4,
    STATE(92), 1,
      sym_commodity,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5325] = 6,
    ACTIONS(687), 1,
      aux_sym_note_token1,
    ACTIONS(689), 1,
      anon_sym_LBRACK,
    ACTIONS(691), 1,
      aux_sym_note_token2,
    STATE(160), 1,
      aux_sym_note_repeat1,
    STATE(268), 1,
      aux_sym_note_repeat2,
    ACTIONS(693), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5345] = 7,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      sym_account_name,
    ACTIONS(675), 1,
      anon_sym_SPACE,
    ACTIONS(677), 1,
      anon_sym_TAB,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    STATE(338), 1,
      sym_account,
  [5367] = 2,
    ACTIONS(371), 1,
      anon_sym_AT,
    ACTIONS(369), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5379] = 7,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      sym_account_name,
    ACTIONS(675), 1,
      anon_sym_SPACE,
    ACTIONS(677), 1,
      anon_sym_TAB,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    STATE(266), 1,
      sym_account,
  [5401] = 6,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(195), 1,
      sym_balance_assertion,
    STATE(369), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5421] = 6,
    ACTIONS(695), 1,
      aux_sym_note_token1,
    ACTIONS(697), 1,
      anon_sym_LBRACK,
    ACTIONS(699), 1,
      aux_sym_note_token2,
    STATE(194), 1,
      aux_sym_note_repeat1,
    STATE(275), 1,
      aux_sym_note_repeat2,
    ACTIONS(701), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5441] = 7,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      sym_account_name,
    ACTIONS(675), 1,
      anon_sym_SPACE,
    ACTIONS(677), 1,
      anon_sym_TAB,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    STATE(340), 1,
      sym_account,
  [5463] = 6,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(187), 1,
      sym_balance_assertion,
    STATE(373), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5483] = 4,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(340), 1,
      sym_commodity,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5499] = 4,
    STATE(55), 1,
      sym_commodity,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(191), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5515] = 6,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(385), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5535] = 1,
    ACTIONS(703), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5545] = 4,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(169), 1,
      sym_commodity,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5561] = 7,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      sym_account_name,
    ACTIONS(705), 1,
      anon_sym_SPACE,
    ACTIONS(707), 1,
      anon_sym_TAB,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    STATE(266), 1,
      sym_account,
  [5583] = 2,
    ACTIONS(375), 1,
      anon_sym_AT,
    ACTIONS(373), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5595] = 7,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      sym_account_name,
    ACTIONS(709), 1,
      anon_sym_SPACE,
    ACTIONS(711), 1,
      anon_sym_TAB,
    STATE(174), 1,
      aux_sym_whitespace_repeat1,
    STATE(271), 1,
      sym_account,
  [5617] = 4,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(334), 1,
      sym_commodity,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(474), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5633] = 6,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(331), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5653] = 3,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(713), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(457), 4,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_payee,
  [5667] = 7,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      sym_account_name,
    ACTIONS(675), 1,
      anon_sym_SPACE,
    ACTIONS(677), 1,
      anon_sym_TAB,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    STATE(232), 1,
      sym_account,
  [5689] = 2,
    ACTIONS(716), 1,
      anon_sym_LF,
    ACTIONS(718), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5700] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(611), 1,
      anon_sym_LF,
    STATE(200), 1,
      aux_sym_whitespace_repeat1,
    STATE(331), 1,
      sym_note,
    ACTIONS(720), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5717] = 6,
    ACTIONS(693), 1,
      anon_sym_LF,
    ACTIONS(722), 1,
      aux_sym_note_token1,
    ACTIONS(724), 1,
      anon_sym_LBRACK,
    ACTIONS(726), 1,
      aux_sym_note_token2,
    STATE(193), 1,
      aux_sym_note_repeat1,
    STATE(318), 1,
      aux_sym_note_repeat2,
  [5736] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(728), 1,
      anon_sym_LF,
    STATE(259), 1,
      aux_sym_whitespace_repeat1,
    STATE(378), 1,
      sym_note,
    ACTIONS(730), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5753] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(615), 1,
      anon_sym_LF,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    STATE(337), 1,
      sym_note,
    ACTIONS(732), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5770] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(734), 1,
      anon_sym_LF,
    STATE(236), 1,
      aux_sym_whitespace_repeat1,
    STATE(371), 1,
      sym_note,
    ACTIONS(736), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5787] = 2,
    ACTIONS(738), 1,
      anon_sym_LF,
    ACTIONS(625), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5798] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(740), 1,
      anon_sym_LF,
    STATE(206), 1,
      aux_sym_whitespace_repeat1,
    STATE(342), 1,
      sym_note,
    ACTIONS(742), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5815] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(744), 1,
      anon_sym_LF,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    STATE(346), 1,
      sym_note,
    ACTIONS(746), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5832] = 1,
    ACTIONS(748), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5841] = 3,
    ACTIONS(752), 1,
      anon_sym_EQ,
    STATE(247), 1,
      sym_effective_date,
    ACTIONS(750), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5854] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(754), 1,
      anon_sym_LF,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    STATE(368), 1,
      sym_note,
    ACTIONS(756), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5871] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(540), 1,
      anon_sym_LF,
    STATE(198), 1,
      aux_sym_whitespace_repeat1,
    STATE(369), 1,
      sym_note,
    ACTIONS(758), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5888] = 5,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    ACTIONS(760), 1,
      sym_payee,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym_code,
    ACTIONS(570), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5905] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(490), 1,
      anon_sym_LF,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    STATE(373), 1,
      sym_note,
    ACTIONS(762), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5922] = 2,
    ACTIONS(738), 1,
      anon_sym_LF,
    ACTIONS(625), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5933] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(486), 1,
      anon_sym_LF,
    STATE(215), 1,
      aux_sym_whitespace_repeat1,
    STATE(360), 1,
      sym_note,
    ACTIONS(764), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5950] = 2,
    ACTIONS(716), 1,
      anon_sym_LF,
    ACTIONS(718), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5961] = 6,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(766), 1,
      aux_sym_note_token1,
    ACTIONS(768), 1,
      anon_sym_LBRACK,
    ACTIONS(770), 1,
      aux_sym_note_token2,
    STATE(201), 1,
      aux_sym_note_repeat1,
    STATE(293), 1,
      aux_sym_note_repeat2,
  [5980] = 4,
    ACTIONS(772), 1,
      aux_sym_note_token1,
    ACTIONS(777), 1,
      aux_sym_note_token2,
    STATE(194), 1,
      aux_sym_note_repeat1,
    ACTIONS(775), 3,
      anon_sym_LBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5995] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(532), 1,
      anon_sym_LF,
    STATE(218), 1,
      aux_sym_whitespace_repeat1,
    STATE(385), 1,
      sym_note,
    ACTIONS(779), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6012] = 4,
    ACTIONS(781), 1,
      anon_sym_SPACE,
    ACTIONS(784), 1,
      anon_sym_TAB,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(502), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [6027] = 5,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(728), 1,
      anon_sym_LF,
    STATE(188), 1,
      aux_sym_whitespace_repeat1,
    STATE(378), 1,
      sym_note,
    ACTIONS(787), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6044] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(385), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6058] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(342), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6072] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(337), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6086] = 4,
    ACTIONS(777), 1,
      aux_sym_note_token2,
    ACTIONS(789), 1,
      aux_sym_note_token1,
    STATE(201), 1,
      aux_sym_note_repeat1,
    ACTIONS(775), 2,
      anon_sym_LF,
      anon_sym_LBRACK,
  [6100] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(369), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6114] = 3,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6126] = 2,
    ACTIONS(794), 1,
      anon_sym_SPACE,
    ACTIONS(792), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [6136] = 4,
    ACTIONS(796), 1,
      aux_sym_option_value_token1,
    STATE(284), 1,
      aux_sym_whitespace_repeat1,
    STATE(332), 1,
      sym_option_value,
    ACTIONS(798), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6150] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(346), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6164] = 3,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6176] = 1,
    ACTIONS(800), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6184] = 3,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(25), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6196] = 3,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(22), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6208] = 3,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6220] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(349), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6234] = 3,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6246] = 4,
    ACTIONS(802), 1,
      anon_sym_LF,
    ACTIONS(804), 1,
      anon_sym_EQ,
    STATE(205), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(806), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6260] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(373), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6274] = 4,
    ACTIONS(552), 1,
      anon_sym_assert,
    ACTIONS(554), 1,
      anon_sym_check,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(577), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6288] = 3,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6300] = 4,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(331), 1,
      sym_note,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6314] = 1,
    ACTIONS(808), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6322] = 3,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(20), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6334] = 4,
    ACTIONS(810), 1,
      aux_sym_option_value_token1,
    STATE(284), 1,
      aux_sym_whitespace_repeat1,
    STATE(338), 1,
      sym_filename,
    ACTIONS(798), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6348] = 3,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6360] = 3,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(23), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6372] = 1,
    ACTIONS(812), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6380] = 3,
    ACTIONS(814), 1,
      sym_payee,
    STATE(229), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(816), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6391] = 3,
    ACTIONS(818), 1,
      aux_sym_account_subdirective_token1,
    STATE(287), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(820), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6402] = 3,
    ACTIONS(822), 1,
      aux_sym_account_subdirective_token1,
    STATE(287), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(820), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6413] = 1,
    ACTIONS(794), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6420] = 3,
    ACTIONS(824), 1,
      sym_payee,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(570), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6431] = 3,
    ACTIONS(824), 1,
      sym_payee,
    STATE(241), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(826), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6442] = 2,
    ACTIONS(828), 1,
      anon_sym_LF,
    ACTIONS(830), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6451] = 2,
    ACTIONS(486), 1,
      anon_sym_LF,
    ACTIONS(832), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6460] = 3,
    ACTIONS(834), 1,
      aux_sym_word_directive_token2,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6471] = 3,
    ACTIONS(836), 1,
      anon_sym_LF,
    STATE(260), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(838), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6482] = 3,
    ACTIONS(840), 1,
      sym_time,
    STATE(270), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(842), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6493] = 3,
    ACTIONS(844), 1,
      sym_payee,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(570), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6504] = 3,
    ACTIONS(846), 1,
      sym_time,
    STATE(273), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(848), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6515] = 3,
    ACTIONS(850), 1,
      aux_sym_account_subdirective_token1,
    STATE(287), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(820), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6526] = 3,
    ACTIONS(852), 1,
      aux_sym_account_subdirective_token1,
    STATE(287), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(820), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6537] = 3,
    ACTIONS(854), 1,
      aux_sym_account_subdirective_token1,
    STATE(287), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(820), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6548] = 3,
    ACTIONS(856), 1,
      sym_payee,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(570), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6559] = 3,
    ACTIONS(856), 1,
      sym_payee,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(858), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6570] = 2,
    ACTIONS(860), 1,
      anon_sym_LF,
    ACTIONS(862), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6579] = 3,
    ACTIONS(864), 1,
      anon_sym_LF,
    STATE(262), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(866), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6590] = 1,
    ACTIONS(868), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6597] = 4,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(224), 1,
      sym__single_date,
    STATE(344), 1,
      sym__4d,
  [6610] = 1,
    ACTIONS(870), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6617] = 3,
    ACTIONS(872), 1,
      anon_sym_EQ,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6628] = 2,
    ACTIONS(874), 1,
      anon_sym_LF,
    ACTIONS(876), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6637] = 3,
    ACTIONS(878), 1,
      sym_payee,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(570), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6648] = 3,
    ACTIONS(878), 1,
      sym_payee,
    STATE(258), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(880), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6659] = 3,
    ACTIONS(882), 1,
      sym_time,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6670] = 3,
    ACTIONS(884), 1,
      aux_sym_block_comment_token1,
    STATE(255), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(886), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6681] = 3,
    ACTIONS(888), 1,
      aux_sym_block_comment_token1,
    STATE(255), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(886), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6692] = 3,
    ACTIONS(502), 1,
      aux_sym_block_comment_token1,
    STATE(255), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(890), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6703] = 1,
    ACTIONS(893), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6710] = 2,
    ACTIONS(895), 1,
      anon_sym_LF,
    ACTIONS(897), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6719] = 3,
    ACTIONS(899), 1,
      sym_payee,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(570), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6730] = 3,
    ACTIONS(760), 1,
      sym_payee,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(570), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6741] = 3,
    ACTIONS(901), 1,
      aux_sym_block_comment_token1,
    STATE(255), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(886), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6752] = 1,
    ACTIONS(903), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6759] = 3,
    ACTIONS(905), 1,
      aux_sym_block_comment_token1,
    STATE(255), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(886), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6770] = 1,
    ACTIONS(907), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6777] = 3,
    ACTIONS(909), 1,
      sym_query,
    STATE(265), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(911), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6788] = 3,
    ACTIONS(502), 1,
      sym_query,
    STATE(265), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(913), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6799] = 2,
    ACTIONS(916), 1,
      anon_sym_LF,
    ACTIONS(918), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6808] = 3,
    ACTIONS(920), 1,
      anon_sym_EQ,
    STATE(248), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(922), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6819] = 3,
    ACTIONS(924), 1,
      aux_sym_note_token2,
    STATE(276), 1,
      aux_sym_note_repeat2,
    ACTIONS(701), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6830] = 3,
    ACTIONS(926), 1,
      aux_sym_tag_directive_token1,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(577), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6841] = 3,
    ACTIONS(928), 1,
      sym_time,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6852] = 2,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(930), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6861] = 3,
    ACTIONS(928), 1,
      sym_time,
    STATE(252), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(932), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6872] = 3,
    ACTIONS(934), 1,
      sym_time,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6883] = 3,
    ACTIONS(934), 1,
      sym_time,
    STATE(288), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(936), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6894] = 3,
    ACTIONS(924), 1,
      aux_sym_note_token2,
    STATE(276), 1,
      aux_sym_note_repeat2,
    ACTIONS(938), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6905] = 3,
    ACTIONS(940), 1,
      aux_sym_note_token2,
    STATE(276), 1,
      aux_sym_note_repeat2,
    ACTIONS(943), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6916] = 1,
    ACTIONS(945), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6923] = 3,
    ACTIONS(947), 1,
      aux_sym_note_token2,
    STATE(279), 1,
      aux_sym_note_repeat2,
    ACTIONS(949), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6934] = 3,
    ACTIONS(924), 1,
      aux_sym_note_token2,
    STATE(276), 1,
      aux_sym_note_repeat2,
    ACTIONS(951), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6945] = 3,
    ACTIONS(953), 1,
      aux_sym_note_token2,
    STATE(281), 1,
      aux_sym_note_repeat2,
    ACTIONS(951), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6956] = 3,
    ACTIONS(924), 1,
      aux_sym_note_token2,
    STATE(276), 1,
      aux_sym_note_repeat2,
    ACTIONS(955), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6967] = 3,
    ACTIONS(957), 1,
      aux_sym_word_directive_token1,
    STATE(285), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(959), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6978] = 3,
    ACTIONS(961), 1,
      aux_sym_option_value_token1,
    STATE(284), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(798), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6989] = 3,
    ACTIONS(502), 1,
      aux_sym_option_value_token1,
    STATE(284), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(963), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7000] = 3,
    ACTIONS(502), 1,
      aux_sym_word_directive_token1,
    STATE(285), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(966), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7011] = 3,
    ACTIONS(969), 1,
      aux_sym_word_directive_token2,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7022] = 3,
    ACTIONS(457), 1,
      aux_sym_account_subdirective_token1,
    STATE(287), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(971), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7033] = 3,
    ACTIONS(974), 1,
      sym_time,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7044] = 3,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(728), 1,
      anon_sym_LF,
    STATE(378), 1,
      sym_note,
  [7054] = 2,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(976), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7062] = 2,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(978), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7070] = 2,
    STATE(171), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(980), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7078] = 3,
    ACTIONS(938), 1,
      anon_sym_LF,
    ACTIONS(982), 1,
      aux_sym_note_token2,
    STATE(294), 1,
      aux_sym_note_repeat2,
  [7088] = 3,
    ACTIONS(943), 1,
      anon_sym_LF,
    ACTIONS(984), 1,
      aux_sym_note_token2,
    STATE(294), 1,
      aux_sym_note_repeat2,
  [7098] = 2,
    STATE(269), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(987), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7106] = 2,
    STATE(221), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(989), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7114] = 2,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(991), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7122] = 2,
    STATE(282), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(993), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7130] = 3,
    ACTIONS(995), 1,
      anon_sym_LF,
    ACTIONS(997), 1,
      anon_sym_SEMI,
    STATE(207), 1,
      sym_note,
  [7140] = 2,
    STATE(283), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(999), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7148] = 2,
    STATE(226), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1001), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7156] = 2,
    STATE(227), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1003), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7164] = 2,
    STATE(240), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1005), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7172] = 2,
    STATE(286), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1007), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7180] = 2,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1009), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7188] = 2,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1011), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7196] = 2,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1013), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7204] = 3,
    ACTIONS(949), 1,
      anon_sym_LF,
    ACTIONS(1015), 1,
      aux_sym_note_token2,
    STATE(316), 1,
      aux_sym_note_repeat2,
  [7214] = 2,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1017), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7222] = 2,
    STATE(135), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1019), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7230] = 2,
    STATE(233), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1021), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7238] = 3,
    ACTIONS(997), 1,
      anon_sym_SEMI,
    ACTIONS(1023), 1,
      anon_sym_LF,
    STATE(203), 1,
      sym_note,
  [7248] = 3,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(734), 1,
      anon_sym_LF,
    STATE(371), 1,
      sym_note,
  [7258] = 2,
    STATE(161), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1025), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7266] = 3,
    ACTIONS(955), 1,
      anon_sym_LF,
    ACTIONS(982), 1,
      aux_sym_note_token2,
    STATE(294), 1,
      aux_sym_note_repeat2,
  [7276] = 3,
    ACTIONS(951), 1,
      anon_sym_LF,
    ACTIONS(982), 1,
      aux_sym_note_token2,
    STATE(294), 1,
      aux_sym_note_repeat2,
  [7286] = 3,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(1027), 1,
      anon_sym_LF,
    STATE(353), 1,
      sym_note,
  [7296] = 3,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(982), 1,
      aux_sym_note_token2,
    STATE(294), 1,
      aux_sym_note_repeat2,
  [7306] = 2,
    STATE(238), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1029), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7314] = 2,
    STATE(239), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1031), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7322] = 2,
    STATE(264), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1033), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7330] = 3,
    ACTIONS(951), 1,
      anon_sym_LF,
    ACTIONS(1035), 1,
      aux_sym_note_token2,
    STATE(315), 1,
      aux_sym_note_repeat2,
  [7340] = 2,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1037), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7348] = 2,
    ACTIONS(752), 1,
      anon_sym_EQ,
    STATE(345), 1,
      sym_effective_date,
  [7355] = 2,
    ACTIONS(752), 1,
      anon_sym_EQ,
    STATE(367), 1,
      sym_effective_date,
  [7362] = 2,
    ACTIONS(1039), 1,
      aux_sym_option_value_token1,
    STATE(332), 1,
      sym_option_value,
  [7369] = 1,
    ACTIONS(1041), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [7374] = 2,
    ACTIONS(752), 1,
      anon_sym_EQ,
    STATE(393), 1,
      sym_effective_date,
  [7381] = 2,
    ACTIONS(752), 1,
      anon_sym_EQ,
    STATE(394), 1,
      sym_effective_date,
  [7388] = 1,
    ACTIONS(1043), 1,
      anon_sym_LF,
  [7392] = 1,
    ACTIONS(615), 1,
      anon_sym_LF,
  [7396] = 1,
    ACTIONS(1045), 1,
      anon_sym_LF,
  [7400] = 1,
    ACTIONS(1047), 1,
      sym__2d,
  [7404] = 1,
    ACTIONS(1049), 1,
      anon_sym_LF,
  [7408] = 1,
    ACTIONS(1051), 1,
      anon_sym_LF,
  [7412] = 1,
    ACTIONS(1053), 1,
      anon_sym_LF,
  [7416] = 1,
    ACTIONS(740), 1,
      anon_sym_LF,
  [7420] = 1,
    ACTIONS(1055), 1,
      anon_sym_LF,
  [7424] = 1,
    ACTIONS(1057), 1,
      anon_sym_EQ,
  [7428] = 1,
    ACTIONS(1059), 1,
      anon_sym_LF,
  [7432] = 1,
    ACTIONS(1061), 1,
      sym__quantity,
  [7436] = 1,
    ACTIONS(744), 1,
      anon_sym_LF,
  [7440] = 1,
    ACTIONS(1063), 1,
      anon_sym_LF,
  [7444] = 1,
    ACTIONS(1065), 1,
      sym__dsep,
  [7448] = 1,
    ACTIONS(1067), 1,
      anon_sym_RBRACK,
  [7452] = 1,
    ACTIONS(1069), 1,
      anon_sym_LF,
  [7456] = 1,
    ACTIONS(1071), 1,
      anon_sym_LF,
  [7460] = 1,
    ACTIONS(1073), 1,
      anon_sym_LF,
  [7464] = 1,
    ACTIONS(1075), 1,
      anon_sym_LF,
  [7468] = 1,
    ACTIONS(1077), 1,
      sym__quantity,
  [7472] = 1,
    ACTIONS(1079), 1,
      anon_sym_LF,
  [7476] = 1,
    ACTIONS(860), 1,
      anon_sym_LF,
  [7480] = 1,
    ACTIONS(1081), 1,
      anon_sym_LF,
  [7484] = 1,
    ACTIONS(828), 1,
      anon_sym_LF,
  [7488] = 1,
    ACTIONS(1083), 1,
      anon_sym_LF,
  [7492] = 1,
    ACTIONS(1085), 1,
      anon_sym_LF,
  [7496] = 1,
    ACTIONS(1087), 1,
      anon_sym_LF,
  [7500] = 1,
    ACTIONS(486), 1,
      anon_sym_LF,
  [7504] = 1,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
  [7508] = 1,
    ACTIONS(490), 1,
      anon_sym_LF,
  [7512] = 1,
    ACTIONS(1089), 1,
      anon_sym_RBRACK,
  [7516] = 1,
    ACTIONS(1091), 1,
      ts_builtin_sym_end,
  [7520] = 1,
    ACTIONS(1093), 1,
      anon_sym_LF,
  [7524] = 1,
    ACTIONS(603), 1,
      sym__dsep,
  [7528] = 1,
    ACTIONS(1095), 1,
      anon_sym_LF,
  [7532] = 1,
    ACTIONS(1097), 1,
      anon_sym_LF,
  [7536] = 1,
    ACTIONS(1099), 1,
      anon_sym_RBRACK,
  [7540] = 1,
    ACTIONS(1101), 1,
      anon_sym_LF,
  [7544] = 1,
    ACTIONS(532), 1,
      anon_sym_LF,
  [7548] = 1,
    ACTIONS(1103), 1,
      aux_sym_option_value_token1,
  [7552] = 1,
    ACTIONS(1105), 1,
      anon_sym_LF,
  [7556] = 1,
    ACTIONS(1107), 1,
      anon_sym_LF,
  [7560] = 1,
    ACTIONS(540), 1,
      anon_sym_LF,
  [7564] = 1,
    ACTIONS(1109), 1,
      anon_sym_LF,
  [7568] = 1,
    ACTIONS(1111), 1,
      sym__2d,
  [7572] = 1,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
  [7576] = 1,
    ACTIONS(1115), 1,
      anon_sym_LF,
  [7580] = 1,
    ACTIONS(1117), 1,
      anon_sym_LF,
  [7584] = 1,
    ACTIONS(1119), 1,
      aux_sym_option_token1,
  [7588] = 1,
    ACTIONS(1121), 1,
      anon_sym_LF,
  [7592] = 1,
    ACTIONS(1123), 1,
      anon_sym_LF,
  [7596] = 1,
    ACTIONS(1125), 1,
      anon_sym_LF,
  [7600] = 1,
    ACTIONS(1127), 1,
      anon_sym_LF,
  [7604] = 1,
    ACTIONS(1129), 1,
      sym__dsep,
  [7608] = 1,
    ACTIONS(611), 1,
      anon_sym_LF,
  [7612] = 1,
    ACTIONS(1131), 1,
      sym__2d,
  [7616] = 1,
    ACTIONS(1133), 1,
      anon_sym_LF,
  [7620] = 1,
    ACTIONS(1135), 1,
      aux_sym_code_token1,
  [7624] = 1,
    ACTIONS(1137), 1,
      anon_sym_LF,
  [7628] = 1,
    ACTIONS(1139), 1,
      sym__quantity,
  [7632] = 1,
    ACTIONS(1141), 1,
      sym__quantity,
  [7636] = 1,
    ACTIONS(1143), 1,
      anon_sym_LF,
  [7640] = 1,
    ACTIONS(1145), 1,
      anon_sym_RBRACK,
  [7644] = 1,
    ACTIONS(1147), 1,
      anon_sym_RBRACK,
  [7648] = 1,
    ACTIONS(1149), 1,
      sym__quantity,
  [7652] = 1,
    ACTIONS(1151), 1,
      sym__quantity,
  [7656] = 1,
    ACTIONS(1153), 1,
      sym_account_name,
  [7660] = 1,
    ACTIONS(1155), 1,
      sym_account_name,
  [7664] = 1,
    ACTIONS(1157), 1,
      anon_sym_LF,
  [7668] = 1,
    ACTIONS(1159), 1,
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
  [SMALL_STATE(21)] = 1090,
  [SMALL_STATE(22)] = 1136,
  [SMALL_STATE(23)] = 1182,
  [SMALL_STATE(24)] = 1228,
  [SMALL_STATE(25)] = 1268,
  [SMALL_STATE(26)] = 1314,
  [SMALL_STATE(27)] = 1354,
  [SMALL_STATE(28)] = 1394,
  [SMALL_STATE(29)] = 1431,
  [SMALL_STATE(30)] = 1468,
  [SMALL_STATE(31)] = 1505,
  [SMALL_STATE(32)] = 1542,
  [SMALL_STATE(33)] = 1579,
  [SMALL_STATE(34)] = 1616,
  [SMALL_STATE(35)] = 1653,
  [SMALL_STATE(36)] = 1690,
  [SMALL_STATE(37)] = 1727,
  [SMALL_STATE(38)] = 1764,
  [SMALL_STATE(39)] = 1801,
  [SMALL_STATE(40)] = 1838,
  [SMALL_STATE(41)] = 1875,
  [SMALL_STATE(42)] = 1912,
  [SMALL_STATE(43)] = 1949,
  [SMALL_STATE(44)] = 1986,
  [SMALL_STATE(45)] = 2023,
  [SMALL_STATE(46)] = 2060,
  [SMALL_STATE(47)] = 2097,
  [SMALL_STATE(48)] = 2134,
  [SMALL_STATE(49)] = 2171,
  [SMALL_STATE(50)] = 2208,
  [SMALL_STATE(51)] = 2245,
  [SMALL_STATE(52)] = 2282,
  [SMALL_STATE(53)] = 2319,
  [SMALL_STATE(54)] = 2356,
  [SMALL_STATE(55)] = 2393,
  [SMALL_STATE(56)] = 2430,
  [SMALL_STATE(57)] = 2467,
  [SMALL_STATE(58)] = 2505,
  [SMALL_STATE(59)] = 2543,
  [SMALL_STATE(60)] = 2581,
  [SMALL_STATE(61)] = 2619,
  [SMALL_STATE(62)] = 2657,
  [SMALL_STATE(63)] = 2695,
  [SMALL_STATE(64)] = 2733,
  [SMALL_STATE(65)] = 2771,
  [SMALL_STATE(66)] = 2806,
  [SMALL_STATE(67)] = 2841,
  [SMALL_STATE(68)] = 2876,
  [SMALL_STATE(69)] = 2911,
  [SMALL_STATE(70)] = 2946,
  [SMALL_STATE(71)] = 2981,
  [SMALL_STATE(72)] = 3016,
  [SMALL_STATE(73)] = 3051,
  [SMALL_STATE(74)] = 3086,
  [SMALL_STATE(75)] = 3121,
  [SMALL_STATE(76)] = 3156,
  [SMALL_STATE(77)] = 3191,
  [SMALL_STATE(78)] = 3226,
  [SMALL_STATE(79)] = 3261,
  [SMALL_STATE(80)] = 3296,
  [SMALL_STATE(81)] = 3331,
  [SMALL_STATE(82)] = 3367,
  [SMALL_STATE(83)] = 3423,
  [SMALL_STATE(84)] = 3453,
  [SMALL_STATE(85)] = 3509,
  [SMALL_STATE(86)] = 3565,
  [SMALL_STATE(87)] = 3618,
  [SMALL_STATE(88)] = 3671,
  [SMALL_STATE(89)] = 3724,
  [SMALL_STATE(90)] = 3756,
  [SMALL_STATE(91)] = 3774,
  [SMALL_STATE(92)] = 3806,
  [SMALL_STATE(93)] = 3838,
  [SMALL_STATE(94)] = 3870,
  [SMALL_STATE(95)] = 3902,
  [SMALL_STATE(96)] = 3924,
  [SMALL_STATE(97)] = 3956,
  [SMALL_STATE(98)] = 3988,
  [SMALL_STATE(99)] = 4020,
  [SMALL_STATE(100)] = 4052,
  [SMALL_STATE(101)] = 4074,
  [SMALL_STATE(102)] = 4106,
  [SMALL_STATE(103)] = 4141,
  [SMALL_STATE(104)] = 4166,
  [SMALL_STATE(105)] = 4198,
  [SMALL_STATE(106)] = 4230,
  [SMALL_STATE(107)] = 4262,
  [SMALL_STATE(108)] = 4294,
  [SMALL_STATE(109)] = 4321,
  [SMALL_STATE(110)] = 4336,
  [SMALL_STATE(111)] = 4365,
  [SMALL_STATE(112)] = 4394,
  [SMALL_STATE(113)] = 4423,
  [SMALL_STATE(114)] = 4438,
  [SMALL_STATE(115)] = 4453,
  [SMALL_STATE(116)] = 4482,
  [SMALL_STATE(117)] = 4502,
  [SMALL_STATE(118)] = 4526,
  [SMALL_STATE(119)] = 4544,
  [SMALL_STATE(120)] = 4567,
  [SMALL_STATE(121)] = 4590,
  [SMALL_STATE(122)] = 4611,
  [SMALL_STATE(123)] = 4634,
  [SMALL_STATE(124)] = 4657,
  [SMALL_STATE(125)] = 4680,
  [SMALL_STATE(126)] = 4703,
  [SMALL_STATE(127)] = 4724,
  [SMALL_STATE(128)] = 4737,
  [SMALL_STATE(129)] = 4760,
  [SMALL_STATE(130)] = 4783,
  [SMALL_STATE(131)] = 4806,
  [SMALL_STATE(132)] = 4829,
  [SMALL_STATE(133)] = 4852,
  [SMALL_STATE(134)] = 4873,
  [SMALL_STATE(135)] = 4896,
  [SMALL_STATE(136)] = 4919,
  [SMALL_STATE(137)] = 4942,
  [SMALL_STATE(138)] = 4963,
  [SMALL_STATE(139)] = 4984,
  [SMALL_STATE(140)] = 5007,
  [SMALL_STATE(141)] = 5030,
  [SMALL_STATE(142)] = 5051,
  [SMALL_STATE(143)] = 5074,
  [SMALL_STATE(144)] = 5097,
  [SMALL_STATE(145)] = 5120,
  [SMALL_STATE(146)] = 5143,
  [SMALL_STATE(147)] = 5165,
  [SMALL_STATE(148)] = 5187,
  [SMALL_STATE(149)] = 5209,
  [SMALL_STATE(150)] = 5229,
  [SMALL_STATE(151)] = 5251,
  [SMALL_STATE(152)] = 5271,
  [SMALL_STATE(153)] = 5287,
  [SMALL_STATE(154)] = 5309,
  [SMALL_STATE(155)] = 5325,
  [SMALL_STATE(156)] = 5345,
  [SMALL_STATE(157)] = 5367,
  [SMALL_STATE(158)] = 5379,
  [SMALL_STATE(159)] = 5401,
  [SMALL_STATE(160)] = 5421,
  [SMALL_STATE(161)] = 5441,
  [SMALL_STATE(162)] = 5463,
  [SMALL_STATE(163)] = 5483,
  [SMALL_STATE(164)] = 5499,
  [SMALL_STATE(165)] = 5515,
  [SMALL_STATE(166)] = 5535,
  [SMALL_STATE(167)] = 5545,
  [SMALL_STATE(168)] = 5561,
  [SMALL_STATE(169)] = 5583,
  [SMALL_STATE(170)] = 5595,
  [SMALL_STATE(171)] = 5617,
  [SMALL_STATE(172)] = 5633,
  [SMALL_STATE(173)] = 5653,
  [SMALL_STATE(174)] = 5667,
  [SMALL_STATE(175)] = 5689,
  [SMALL_STATE(176)] = 5700,
  [SMALL_STATE(177)] = 5717,
  [SMALL_STATE(178)] = 5736,
  [SMALL_STATE(179)] = 5753,
  [SMALL_STATE(180)] = 5770,
  [SMALL_STATE(181)] = 5787,
  [SMALL_STATE(182)] = 5798,
  [SMALL_STATE(183)] = 5815,
  [SMALL_STATE(184)] = 5832,
  [SMALL_STATE(185)] = 5841,
  [SMALL_STATE(186)] = 5854,
  [SMALL_STATE(187)] = 5871,
  [SMALL_STATE(188)] = 5888,
  [SMALL_STATE(189)] = 5905,
  [SMALL_STATE(190)] = 5922,
  [SMALL_STATE(191)] = 5933,
  [SMALL_STATE(192)] = 5950,
  [SMALL_STATE(193)] = 5961,
  [SMALL_STATE(194)] = 5980,
  [SMALL_STATE(195)] = 5995,
  [SMALL_STATE(196)] = 6012,
  [SMALL_STATE(197)] = 6027,
  [SMALL_STATE(198)] = 6044,
  [SMALL_STATE(199)] = 6058,
  [SMALL_STATE(200)] = 6072,
  [SMALL_STATE(201)] = 6086,
  [SMALL_STATE(202)] = 6100,
  [SMALL_STATE(203)] = 6114,
  [SMALL_STATE(204)] = 6126,
  [SMALL_STATE(205)] = 6136,
  [SMALL_STATE(206)] = 6150,
  [SMALL_STATE(207)] = 6164,
  [SMALL_STATE(208)] = 6176,
  [SMALL_STATE(209)] = 6184,
  [SMALL_STATE(210)] = 6196,
  [SMALL_STATE(211)] = 6208,
  [SMALL_STATE(212)] = 6220,
  [SMALL_STATE(213)] = 6234,
  [SMALL_STATE(214)] = 6246,
  [SMALL_STATE(215)] = 6260,
  [SMALL_STATE(216)] = 6274,
  [SMALL_STATE(217)] = 6288,
  [SMALL_STATE(218)] = 6300,
  [SMALL_STATE(219)] = 6314,
  [SMALL_STATE(220)] = 6322,
  [SMALL_STATE(221)] = 6334,
  [SMALL_STATE(222)] = 6348,
  [SMALL_STATE(223)] = 6360,
  [SMALL_STATE(224)] = 6372,
  [SMALL_STATE(225)] = 6380,
  [SMALL_STATE(226)] = 6391,
  [SMALL_STATE(227)] = 6402,
  [SMALL_STATE(228)] = 6413,
  [SMALL_STATE(229)] = 6420,
  [SMALL_STATE(230)] = 6431,
  [SMALL_STATE(231)] = 6442,
  [SMALL_STATE(232)] = 6451,
  [SMALL_STATE(233)] = 6460,
  [SMALL_STATE(234)] = 6471,
  [SMALL_STATE(235)] = 6482,
  [SMALL_STATE(236)] = 6493,
  [SMALL_STATE(237)] = 6504,
  [SMALL_STATE(238)] = 6515,
  [SMALL_STATE(239)] = 6526,
  [SMALL_STATE(240)] = 6537,
  [SMALL_STATE(241)] = 6548,
  [SMALL_STATE(242)] = 6559,
  [SMALL_STATE(243)] = 6570,
  [SMALL_STATE(244)] = 6579,
  [SMALL_STATE(245)] = 6590,
  [SMALL_STATE(246)] = 6597,
  [SMALL_STATE(247)] = 6610,
  [SMALL_STATE(248)] = 6617,
  [SMALL_STATE(249)] = 6628,
  [SMALL_STATE(250)] = 6637,
  [SMALL_STATE(251)] = 6648,
  [SMALL_STATE(252)] = 6659,
  [SMALL_STATE(253)] = 6670,
  [SMALL_STATE(254)] = 6681,
  [SMALL_STATE(255)] = 6692,
  [SMALL_STATE(256)] = 6703,
  [SMALL_STATE(257)] = 6710,
  [SMALL_STATE(258)] = 6719,
  [SMALL_STATE(259)] = 6730,
  [SMALL_STATE(260)] = 6741,
  [SMALL_STATE(261)] = 6752,
  [SMALL_STATE(262)] = 6759,
  [SMALL_STATE(263)] = 6770,
  [SMALL_STATE(264)] = 6777,
  [SMALL_STATE(265)] = 6788,
  [SMALL_STATE(266)] = 6799,
  [SMALL_STATE(267)] = 6808,
  [SMALL_STATE(268)] = 6819,
  [SMALL_STATE(269)] = 6830,
  [SMALL_STATE(270)] = 6841,
  [SMALL_STATE(271)] = 6852,
  [SMALL_STATE(272)] = 6861,
  [SMALL_STATE(273)] = 6872,
  [SMALL_STATE(274)] = 6883,
  [SMALL_STATE(275)] = 6894,
  [SMALL_STATE(276)] = 6905,
  [SMALL_STATE(277)] = 6916,
  [SMALL_STATE(278)] = 6923,
  [SMALL_STATE(279)] = 6934,
  [SMALL_STATE(280)] = 6945,
  [SMALL_STATE(281)] = 6956,
  [SMALL_STATE(282)] = 6967,
  [SMALL_STATE(283)] = 6978,
  [SMALL_STATE(284)] = 6989,
  [SMALL_STATE(285)] = 7000,
  [SMALL_STATE(286)] = 7011,
  [SMALL_STATE(287)] = 7022,
  [SMALL_STATE(288)] = 7033,
  [SMALL_STATE(289)] = 7044,
  [SMALL_STATE(290)] = 7054,
  [SMALL_STATE(291)] = 7062,
  [SMALL_STATE(292)] = 7070,
  [SMALL_STATE(293)] = 7078,
  [SMALL_STATE(294)] = 7088,
  [SMALL_STATE(295)] = 7098,
  [SMALL_STATE(296)] = 7106,
  [SMALL_STATE(297)] = 7114,
  [SMALL_STATE(298)] = 7122,
  [SMALL_STATE(299)] = 7130,
  [SMALL_STATE(300)] = 7140,
  [SMALL_STATE(301)] = 7148,
  [SMALL_STATE(302)] = 7156,
  [SMALL_STATE(303)] = 7164,
  [SMALL_STATE(304)] = 7172,
  [SMALL_STATE(305)] = 7180,
  [SMALL_STATE(306)] = 7188,
  [SMALL_STATE(307)] = 7196,
  [SMALL_STATE(308)] = 7204,
  [SMALL_STATE(309)] = 7214,
  [SMALL_STATE(310)] = 7222,
  [SMALL_STATE(311)] = 7230,
  [SMALL_STATE(312)] = 7238,
  [SMALL_STATE(313)] = 7248,
  [SMALL_STATE(314)] = 7258,
  [SMALL_STATE(315)] = 7266,
  [SMALL_STATE(316)] = 7276,
  [SMALL_STATE(317)] = 7286,
  [SMALL_STATE(318)] = 7296,
  [SMALL_STATE(319)] = 7306,
  [SMALL_STATE(320)] = 7314,
  [SMALL_STATE(321)] = 7322,
  [SMALL_STATE(322)] = 7330,
  [SMALL_STATE(323)] = 7340,
  [SMALL_STATE(324)] = 7348,
  [SMALL_STATE(325)] = 7355,
  [SMALL_STATE(326)] = 7362,
  [SMALL_STATE(327)] = 7369,
  [SMALL_STATE(328)] = 7374,
  [SMALL_STATE(329)] = 7381,
  [SMALL_STATE(330)] = 7388,
  [SMALL_STATE(331)] = 7392,
  [SMALL_STATE(332)] = 7396,
  [SMALL_STATE(333)] = 7400,
  [SMALL_STATE(334)] = 7404,
  [SMALL_STATE(335)] = 7408,
  [SMALL_STATE(336)] = 7412,
  [SMALL_STATE(337)] = 7416,
  [SMALL_STATE(338)] = 7420,
  [SMALL_STATE(339)] = 7424,
  [SMALL_STATE(340)] = 7428,
  [SMALL_STATE(341)] = 7432,
  [SMALL_STATE(342)] = 7436,
  [SMALL_STATE(343)] = 7440,
  [SMALL_STATE(344)] = 7444,
  [SMALL_STATE(345)] = 7448,
  [SMALL_STATE(346)] = 7452,
  [SMALL_STATE(347)] = 7456,
  [SMALL_STATE(348)] = 7460,
  [SMALL_STATE(349)] = 7464,
  [SMALL_STATE(350)] = 7468,
  [SMALL_STATE(351)] = 7472,
  [SMALL_STATE(352)] = 7476,
  [SMALL_STATE(353)] = 7480,
  [SMALL_STATE(354)] = 7484,
  [SMALL_STATE(355)] = 7488,
  [SMALL_STATE(356)] = 7492,
  [SMALL_STATE(357)] = 7496,
  [SMALL_STATE(358)] = 7500,
  [SMALL_STATE(359)] = 7504,
  [SMALL_STATE(360)] = 7508,
  [SMALL_STATE(361)] = 7512,
  [SMALL_STATE(362)] = 7516,
  [SMALL_STATE(363)] = 7520,
  [SMALL_STATE(364)] = 7524,
  [SMALL_STATE(365)] = 7528,
  [SMALL_STATE(366)] = 7532,
  [SMALL_STATE(367)] = 7536,
  [SMALL_STATE(368)] = 7540,
  [SMALL_STATE(369)] = 7544,
  [SMALL_STATE(370)] = 7548,
  [SMALL_STATE(371)] = 7552,
  [SMALL_STATE(372)] = 7556,
  [SMALL_STATE(373)] = 7560,
  [SMALL_STATE(374)] = 7564,
  [SMALL_STATE(375)] = 7568,
  [SMALL_STATE(376)] = 7572,
  [SMALL_STATE(377)] = 7576,
  [SMALL_STATE(378)] = 7580,
  [SMALL_STATE(379)] = 7584,
  [SMALL_STATE(380)] = 7588,
  [SMALL_STATE(381)] = 7592,
  [SMALL_STATE(382)] = 7596,
  [SMALL_STATE(383)] = 7600,
  [SMALL_STATE(384)] = 7604,
  [SMALL_STATE(385)] = 7608,
  [SMALL_STATE(386)] = 7612,
  [SMALL_STATE(387)] = 7616,
  [SMALL_STATE(388)] = 7620,
  [SMALL_STATE(389)] = 7624,
  [SMALL_STATE(390)] = 7628,
  [SMALL_STATE(391)] = 7632,
  [SMALL_STATE(392)] = 7636,
  [SMALL_STATE(393)] = 7640,
  [SMALL_STATE(394)] = 7644,
  [SMALL_STATE(395)] = 7648,
  [SMALL_STATE(396)] = 7652,
  [SMALL_STATE(397)] = 7656,
  [SMALL_STATE(398)] = 7660,
  [SMALL_STATE(399)] = 7664,
  [SMALL_STATE(400)] = 7668,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(379),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(379),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automated_xact, 5, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automated_xact, 5, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 4, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 4, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 8, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 8, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 10, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 10, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 6, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 6, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_quantity, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_quantity, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 5, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 4, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 6, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 6, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 6, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 7, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 7, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 7, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 3, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 3, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1, 0, 0),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 1, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [772] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [784] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [789] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2, 0, 0),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_date, 2, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 2, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [890] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, 0, 1),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, 0, 2),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [913] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3, 0, 0),
  [940] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0), SHIFT_REPEAT(276),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, 0, 0),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, 0, 0),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [963] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [966] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [971] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0), SHIFT_REPEAT(294),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1, 0, 0),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5, 0, 0),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1, 0, 0),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3, 0, 0),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3, 0, 0),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7, 0, 0),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5, 0, 0),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8, 0, 0),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9, 0, 0),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5, 0, 0),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1091] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3, 0, 0),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1, 0, 0),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4, 0, 0),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6, 0, 0),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1, 0, 0),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10, 0, 0),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1, 0, 0),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
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
