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
#define STATE_COUNT 440
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 147
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 16
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
  anon_sym_LBRACE = 83,
  anon_sym_RBRACE = 84,
  anon_sym_LBRACE_LBRACE = 85,
  anon_sym_RBRACE_RBRACE = 86,
  anon_sym_AT = 87,
  anon_sym_AT_AT = 88,
  anon_sym_SPACE = 89,
  anon_sym_TAB = 90,
  anon_sym_ = 91,
  anon_sym_TAB2 = 92,
  sym_source_file = 93,
  sym_journal_item = 94,
  sym_block_comment = 95,
  sym_test = 96,
  sym_option = 97,
  sym_option_value = 98,
  sym_directive = 99,
  sym_account_directive = 100,
  sym_account_subdirective = 101,
  sym_commodity_directive = 102,
  sym_commodity_subdirective = 103,
  sym_tag_directive = 104,
  sym_word_directive = 105,
  sym_filename = 106,
  sym_char_directive = 107,
  sym_alias_subdirective = 108,
  sym_default_subdirective = 109,
  sym_format_subdirective = 110,
  sym_note_subdirective = 111,
  sym_assert_subdirective = 112,
  sym_check_subdirective = 113,
  sym_check_in = 114,
  sym_check_out = 115,
  sym_xact = 116,
  sym_plain_xact = 117,
  sym_periodic_xact = 118,
  sym_interval = 119,
  sym_automated_xact = 120,
  sym__xact_date = 121,
  sym_date = 122,
  sym_effective_date = 123,
  sym__4d = 124,
  sym__single_date = 125,
  sym_status = 126,
  sym_code = 127,
  sym_note = 128,
  sym_posting = 129,
  sym_account = 130,
  sym_amount = 131,
  sym_quantity = 132,
  sym_negative_quantity = 133,
  sym_commodity = 134,
  sym_lot_price = 135,
  sym_price = 136,
  sym_balance_assertion = 137,
  aux_sym_source_file_repeat1 = 138,
  aux_sym_block_comment_repeat1 = 139,
  aux_sym_account_directive_repeat1 = 140,
  aux_sym_commodity_directive_repeat1 = 141,
  aux_sym_tag_directive_repeat1 = 142,
  aux_sym_plain_xact_repeat1 = 143,
  aux_sym_note_repeat1 = 144,
  aux_sym_note_repeat2 = 145,
  aux_sym_whitespace_repeat1 = 146,
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
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 27,
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
  [57] = 24,
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
  [91] = 54,
  [92] = 83,
  [93] = 10,
  [94] = 83,
  [95] = 24,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 27,
  [100] = 26,
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
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 56,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 55,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 83,
  [137] = 137,
  [138] = 83,
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
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 154,
  [162] = 162,
  [163] = 163,
  [164] = 148,
  [165] = 162,
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
  [176] = 83,
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
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 196,
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
  [213] = 211,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 200,
  [219] = 194,
  [220] = 83,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 192,
  [225] = 225,
  [226] = 217,
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
  [260] = 260,
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
  [284] = 277,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 83,
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
  [301] = 252,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 83,
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
  [322] = 83,
  [323] = 83,
  [324] = 83,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 313,
  [333] = 333,
  [334] = 316,
  [335] = 335,
  [336] = 336,
  [337] = 317,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 318,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 314,
  [347] = 347,
  [348] = 348,
  [349] = 315,
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
  [360] = 308,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 364,
  [366] = 362,
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
  [382] = 367,
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
  [429] = 398,
  [430] = 430,
  [431] = 416,
  [432] = 409,
  [433] = 400,
  [434] = 398,
  [435] = 430,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 430,
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
      if (eof) ADVANCE(224);
      ADVANCE_MAP(
        '\t', 637,
        '\n', 225,
        ' ', 631,
        '!', 448,
        '"', 33,
        '(', 450,
        ')', 453,
        '*', 446,
        '+', 466,
        '-', 310,
        ';', 456,
        '=', 315,
        '@', 629,
        'A', 361,
        'B', 547,
        'C', 377,
        'D', 373,
        'E', 571,
        'I', 401,
        'N', 369,
        'O', 409,
        'P', 381,
        'Y', 365,
        '[', 458,
        ']', 460,
        'a', 478,
        'b', 532,
        'c', 498,
        'd', 486,
        'e', 471,
        'f', 513,
        'i', 396,
        'n', 514,
        'o', 405,
        'p', 472,
        't', 473,
        'y', 469,
        '{', 624,
        '}', 626,
        '~', 412,
        'M', 561,
        'm', 561,
        'Q', 570,
        'q', 570,
        'W', 541,
        'w', 541,
        '.', 438,
        '/', 438,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(622);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 637,
        '\n', 225,
        ' ', 631,
        '"', 33,
        '+', 466,
        '-', 309,
        ';', 456,
        '=', 315,
        '@', 629,
        '{', 624,
        '}', 626,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(622);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(621);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == ';') ADVANCE(456);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == ']') ADVANCE(460);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '!') ADVANCE(448);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == '*') ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';') ADVANCE(454);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\t', 637,
        ' ', 631,
        '"', 33,
        ';', 456,
        '=', 315,
        '@', 629,
        '{', 624,
        '}', 626,
      );
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(622);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\t', 637,
        ' ', 631,
        '+', 466,
        '-', 309,
        'D', 126,
        'E', 199,
        'a', 78,
        'c', 71,
        'd', 61,
        'e', 36,
        'f', 95,
        'n', 93,
        'p', 40,
        'B', 152,
        'b', 152,
        'M', 172,
        'm', 172,
        'Q', 198,
        'q', 198,
        'W', 143,
        'w', 143,
        'Y', 142,
        'y', 142,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '+') ADVANCE(466);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '[') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(457);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(639);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '!') ADVANCE(449);
      if (lookahead == '(') ADVANCE(451);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead == ';') ADVANCE(456);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(464);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(639);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '(') ADVANCE(451);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(464);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(645);
      if (lookahead == ' ') ADVANCE(644);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(638);
      if (lookahead == ' ') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(643);
      if (lookahead == ' ') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(346);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(641);
      if (lookahead == ' ') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(642);
      if (lookahead == ' ') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '[') ADVANCE(458);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(23);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(19);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(24);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'h') ADVANCE(20);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(395);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(27);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 's') ADVANCE(26);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 's') ADVANCE(21);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(392);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(215);
      END_STATE();
    case 36:
      if (lookahead == 'V') ADVANCE(141);
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
          lookahead == 'e') ADVANCE(178);
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
      if (lookahead == 'd') ADVANCE(295);
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
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
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
      if (lookahead == 'f') ADVANCE(347);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(333);
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
      if (lookahead == 'k') ADVANCE(393);
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
      if (lookahead == 'l') ADVANCE(322);
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
      if (lookahead == 'r') ADVANCE(351);
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
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(331);
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
      if (lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 121:
      if (lookahead == '}') ADVANCE(628);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 131:
      ADVANCE_MAP(
        'D', 122,
        'd', 122,
        'M', 170,
        'm', 170,
        'Q', 196,
        'q', 196,
        'W', 136,
        'w', 136,
        'Y', 135,
        'y', 135,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 132:
      ADVANCE_MAP(
        'D', 124,
        'd', 124,
        'M', 171,
        'm', 171,
        'Q', 197,
        'q', 197,
        'W', 139,
        'w', 139,
        'Y', 138,
        'y', 138,
      );
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 148:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(416);
      END_STATE();
    case 149:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(187);
      END_STATE();
    case 150:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 151:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 154:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(415);
      END_STATE();
    case 155:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(185);
      END_STATE();
    case 156:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(159);
      END_STATE();
    case 157:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(162);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
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
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 165:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(173);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(147);
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
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
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
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 174:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 175:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 176:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 177:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 178:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 179:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 184:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 185:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(420);
      END_STATE();
    case 186:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      END_STATE();
    case 187:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      END_STATE();
    case 188:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(422);
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
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 192:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 193:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 194:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 195:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 196:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 197:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 198:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 199:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 200:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(414);
      END_STATE();
    case 201:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(184);
      END_STATE();
    case 202:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(424);
      END_STATE();
    case 203:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 204:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(426);
      END_STATE();
    case 205:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(436);
      END_STATE();
    case 206:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(430);
      END_STATE();
    case 207:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 208:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(432);
      END_STATE();
    case 209:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 210:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 217:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(464);
      END_STATE();
    case 218:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(463);
      END_STATE();
    case 219:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(464);
      END_STATE();
    case 220:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(314);
      END_STATE();
    case 221:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 222:
      if (eof) ADVANCE(224);
      ADVANCE_MAP(
        '\t', 637,
        '\n', 225,
        ' ', 631,
        '"', 33,
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
        'a', 584,
        'b', 618,
        'c', 607,
        'd', 591,
        'e', 604,
        'i', 398,
        'o', 406,
        't', 581,
        'y', 592,
        '}', 121,
        '~', 412,
        '#', 29,
        '%', 29,
        '*', 29,
        ';', 29,
        '|', 29,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(622);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(621);
      END_STATE();
    case 223:
      if (eof) ADVANCE(224);
      ADVANCE_MAP(
        '\t', 637,
        '\n', 225,
        ' ', 631,
        '-', 310,
        '=', 315,
        'A', 360,
        'C', 376,
        'D', 372,
        'I', 400,
        'N', 368,
        'O', 408,
        'P', 380,
        'Y', 364,
        'a', 46,
        'b', 115,
        'c', 72,
        'd', 56,
        'e', 88,
        'i', 397,
        'o', 404,
        't', 37,
        'y', 57,
        '}', 625,
        '~', 412,
        '#', 29,
        '%', 29,
        '*', 29,
        ';', 29,
        '|', 29,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_comment);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == ' ') ADVANCE(633);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == ' ') ADVANCE(633);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == ' ') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'g') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'k') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'y') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (eof) ADVANCE(224);
      ADVANCE_MAP(
        '\n', 225,
        '-', 311,
        '=', 316,
        'A', 363,
        'C', 379,
        'D', 375,
        'I', 403,
        'N', 371,
        'O', 411,
        'P', 383,
        'Y', 367,
        'a', 238,
        'b', 287,
        'c', 271,
        'd', 248,
        'e', 265,
        'i', 399,
        'o', 407,
        't', 235,
        'y', 249,
        '~', 413,
        '#', 234,
        '%', 234,
        '*', 234,
        ';', 234,
        '|', 234,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == ' ') ADVANCE(45);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_end);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_test);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_endtest);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_endtest);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(312);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_option_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_option_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_account);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_eval);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_account_subdirective_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_payee);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_tag);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_tag_directive_token1);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_include);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_alias);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(534);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_def);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_year);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_A);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_Y);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_N);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(548);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_D);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_C);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_P);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_format);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_note);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(28);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'n') ADVANCE(481);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(586);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_I);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_o);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_O);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_interval_token1);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_interval_token2);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_interval_token3);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_interval_token4);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_interval_token5);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_interval_token6);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_interval_token7);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_interval_token8);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_interval_token9);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_interval_token10);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__2d);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__2d);
      if (lookahead == ':') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_query);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_note_token1);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_note_token2);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(462);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__quantity);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == ' ') ADVANCE(131);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'A') ADVANCE(565);
      if (lookahead == 'a') ADVANCE(470);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E') ADVANCE(537);
      if (lookahead == 'e') ADVANCE(468);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'R') ADVANCE(552);
      if (lookahead == 'r') ADVANCE(352);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'V') ADVANCE(539);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead == 'v') ADVANCE(474);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(536);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'e') ADVANCE(519);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(520);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(518);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(525);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(499);
      if (lookahead == 's') ADVANCE(521);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(502);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(501);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(505);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(515);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(296);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(500);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(489);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(548);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(389);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(326);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(339);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(516);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(524);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(480);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(488);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(529);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == 'o') ADVANCE(484);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'f') ADVANCE(348);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'g') ADVANCE(334);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'h') ADVANCE(492);
      if (lookahead == 'o') ADVANCE(508);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(475);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(530);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(394);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(491);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(494);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(323);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(533);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(528);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'm') ADVANCE(495);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'm') ADVANCE(507);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'm') ADVANCE(476);
      if (lookahead == 't') ADVANCE(487);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'm') ADVANCE(477);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'n') ADVANCE(526);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'n') ADVANCE(527);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(517);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(509);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(531);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(523);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(510);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(503);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 's') ADVANCE(522);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 's') ADVANCE(343);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 's') ADVANCE(490);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(304);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(391);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(357);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(387);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(319);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(228);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(385);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(332);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(535);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(511);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(479);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(485);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(506);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'y') ADVANCE(328);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'y') ADVANCE(493);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(563);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(550);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(554);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(556);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(551);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(553);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(555);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(575);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(577);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(578);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(579);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(562);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(544);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(567);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(569);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(560);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(573);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(552);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(557);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(543);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(538);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(539);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(425);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(467);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(437);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(427);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(431);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(429);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(433);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(435);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(610);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(609);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(611);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(587);
      if (lookahead == 'l') ADVANCE(598);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(600);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(601);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(608);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(299);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(599);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(593);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(596);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(582);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(340);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(613);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'o') ADVANCE(589);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(349);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'g') ADVANCE(335);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(583);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(616);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(594);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(619);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(595);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(602);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(588);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(614);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(615);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(603);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(617);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(353);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(612);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(344);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(305);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(358);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(320);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(229);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(620);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(605);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(585);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(590);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(329);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(621);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(627);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(628);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(630);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(346);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(346);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 223},
  [2] = {.lex_state = 223},
  [3] = {.lex_state = 223},
  [4] = {.lex_state = 223},
  [5] = {.lex_state = 223},
  [6] = {.lex_state = 223},
  [7] = {.lex_state = 223},
  [8] = {.lex_state = 223},
  [9] = {.lex_state = 223},
  [10] = {.lex_state = 222},
  [11] = {.lex_state = 223},
  [12] = {.lex_state = 223},
  [13] = {.lex_state = 223},
  [14] = {.lex_state = 223},
  [15] = {.lex_state = 223},
  [16] = {.lex_state = 223},
  [17] = {.lex_state = 223},
  [18] = {.lex_state = 223},
  [19] = {.lex_state = 223},
  [20] = {.lex_state = 223},
  [21] = {.lex_state = 223},
  [22] = {.lex_state = 223},
  [23] = {.lex_state = 223},
  [24] = {.lex_state = 222},
  [25] = {.lex_state = 223},
  [26] = {.lex_state = 222},
  [27] = {.lex_state = 222},
  [28] = {.lex_state = 223},
  [29] = {.lex_state = 223},
  [30] = {.lex_state = 223},
  [31] = {.lex_state = 223},
  [32] = {.lex_state = 223},
  [33] = {.lex_state = 223},
  [34] = {.lex_state = 223},
  [35] = {.lex_state = 223},
  [36] = {.lex_state = 223},
  [37] = {.lex_state = 223},
  [38] = {.lex_state = 223},
  [39] = {.lex_state = 223},
  [40] = {.lex_state = 223},
  [41] = {.lex_state = 223},
  [42] = {.lex_state = 223},
  [43] = {.lex_state = 223},
  [44] = {.lex_state = 223},
  [45] = {.lex_state = 223},
  [46] = {.lex_state = 223},
  [47] = {.lex_state = 223},
  [48] = {.lex_state = 223},
  [49] = {.lex_state = 223},
  [50] = {.lex_state = 223},
  [51] = {.lex_state = 223},
  [52] = {.lex_state = 223},
  [53] = {.lex_state = 223},
  [54] = {.lex_state = 223},
  [55] = {.lex_state = 223},
  [56] = {.lex_state = 223},
  [57] = {.lex_state = 223},
  [58] = {.lex_state = 223},
  [59] = {.lex_state = 294},
  [60] = {.lex_state = 294},
  [61] = {.lex_state = 294},
  [62] = {.lex_state = 294},
  [63] = {.lex_state = 294},
  [64] = {.lex_state = 294},
  [65] = {.lex_state = 294},
  [66] = {.lex_state = 294},
  [67] = {.lex_state = 223},
  [68] = {.lex_state = 223},
  [69] = {.lex_state = 223},
  [70] = {.lex_state = 223},
  [71] = {.lex_state = 223},
  [72] = {.lex_state = 223},
  [73] = {.lex_state = 223},
  [74] = {.lex_state = 223},
  [75] = {.lex_state = 223},
  [76] = {.lex_state = 223},
  [77] = {.lex_state = 223},
  [78] = {.lex_state = 223},
  [79] = {.lex_state = 223},
  [80] = {.lex_state = 223},
  [81] = {.lex_state = 223},
  [82] = {.lex_state = 223},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 10},
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
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 231},
  [140] = {.lex_state = 232},
  [141] = {.lex_state = 232},
  [142] = {.lex_state = 231},
  [143] = {.lex_state = 231},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 223},
  [146] = {.lex_state = 223},
  [147] = {.lex_state = 223},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 232},
  [151] = {.lex_state = 231},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 231},
  [163] = {.lex_state = 223},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 232},
  [166] = {.lex_state = 232},
  [167] = {.lex_state = 223},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 11},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 11},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 232},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 231},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 232},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 231},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 17},
  [225] = {.lex_state = 15},
  [226] = {.lex_state = 17},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 223},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 15},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 11},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 223},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 233},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 223},
  [264] = {.lex_state = 223},
  [265] = {.lex_state = 222},
  [266] = {.lex_state = 222},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 233},
  [272] = {.lex_state = 3},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 13},
  [276] = {.lex_state = 16},
  [277] = {.lex_state = 233},
  [278] = {.lex_state = 13},
  [279] = {.lex_state = 223},
  [280] = {.lex_state = 222},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 13},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 233},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 233},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 13},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 15},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 4},
  [295] = {.lex_state = 3},
  [296] = {.lex_state = 3},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 223},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 3},
  [303] = {.lex_state = 222},
  [304] = {.lex_state = 3},
  [305] = {.lex_state = 16},
  [306] = {.lex_state = 3},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 9},
  [309] = {.lex_state = 3},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 3},
  [313] = {.lex_state = 9},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 9},
  [316] = {.lex_state = 9},
  [317] = {.lex_state = 9},
  [318] = {.lex_state = 9},
  [319] = {.lex_state = 2},
  [320] = {.lex_state = 13},
  [321] = {.lex_state = 2},
  [322] = {.lex_state = 15},
  [323] = {.lex_state = 14},
  [324] = {.lex_state = 13},
  [325] = {.lex_state = 14},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 18},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 18},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 18},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 18},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 18},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 18},
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
  [360] = {.lex_state = 18},
  [361] = {.lex_state = 221},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 3},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 5},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 219},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 3},
  [384] = {.lex_state = 452},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 219},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 5},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 6},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 3},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 220},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 5},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 221},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 6},
  [430] = {.lex_state = 6},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 6},
  [435] = {.lex_state = 6},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 6},
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
    [sym_source_file] = STATE(393),
    [sym_journal_item] = STATE(2),
    [sym_block_comment] = STATE(68),
    [sym_test] = STATE(68),
    [sym_option] = STATE(71),
    [sym_directive] = STATE(68),
    [sym_account_directive] = STATE(71),
    [sym_commodity_directive] = STATE(71),
    [sym_tag_directive] = STATE(71),
    [sym_word_directive] = STATE(390),
    [sym_char_directive] = STATE(390),
    [sym_check_in] = STATE(392),
    [sym_check_out] = STATE(392),
    [sym_xact] = STATE(68),
    [sym_plain_xact] = STATE(82),
    [sym_periodic_xact] = STATE(82),
    [sym_automated_xact] = STATE(82),
    [sym__xact_date] = STATE(216),
    [sym_date] = STATE(201),
    [sym__4d] = STATE(415),
    [sym__single_date] = STATE(222),
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
    STATE(201), 1,
      sym_date,
    STATE(216), 1,
      sym__xact_date,
    STATE(222), 1,
      sym__single_date,
    STATE(415), 1,
      sym__4d,
    ACTIONS(55), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(390), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(392), 2,
      sym_check_in,
      sym_check_out,
    STATE(82), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(68), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
    STATE(71), 4,
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
    STATE(201), 1,
      sym_date,
    STATE(216), 1,
      sym__xact_date,
    STATE(222), 1,
      sym__single_date,
    STATE(415), 1,
      sym__4d,
    ACTIONS(142), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(390), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(392), 2,
      sym_check_in,
      sym_check_out,
    STATE(82), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(68), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
    STATE(71), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
  [260] = 6,
    STATE(133), 1,
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
    STATE(30), 5,
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
    STATE(133), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(155), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(4), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(30), 5,
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
    STATE(133), 1,
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
    STATE(30), 5,
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
    STATE(144), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(8), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(170), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(31), 4,
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
    STATE(144), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(176), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(31), 4,
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
    STATE(144), 1,
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
    STATE(31), 4,
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
    STATE(55), 1,
      sym_commodity,
    STATE(196), 1,
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
    STATE(239), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(199), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(197), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(12), 3,
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
    STATE(239), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(199), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(203), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(13), 3,
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
    STATE(239), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(209), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(207), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(13), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(205), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
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
    STATE(120), 1,
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
    STATE(120), 1,
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
    STATE(120), 1,
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
    STATE(120), 1,
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
    STATE(120), 1,
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
    STATE(120), 1,
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
    STATE(120), 1,
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
    STATE(120), 1,
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
    STATE(120), 1,
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
    STATE(120), 1,
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
    STATE(120), 1,
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
  [1653] = 2,
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
  [1690] = 2,
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
  [1727] = 2,
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
  [1764] = 2,
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
  [1801] = 2,
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
  [2467] = 2,
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
  [2504] = 2,
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
  [2541] = 3,
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
  [2579] = 3,
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
  [2617] = 3,
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
  [2655] = 3,
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
  [2693] = 3,
    ACTIONS(413), 1,
      aux_sym_block_comment_token1,
    ACTIONS(409), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(411), 27,
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
  [2731] = 3,
    ACTIONS(419), 1,
      aux_sym_block_comment_token1,
    ACTIONS(415), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(417), 27,
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
  [2769] = 3,
    ACTIONS(425), 1,
      aux_sym_block_comment_token1,
    ACTIONS(421), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(423), 27,
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
  [2807] = 3,
    ACTIONS(431), 1,
      aux_sym_block_comment_token1,
    ACTIONS(427), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(429), 27,
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
  [2845] = 2,
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
  [2880] = 2,
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
  [2915] = 2,
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
  [2950] = 2,
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
  [2985] = 2,
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
  [3020] = 2,
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
  [3055] = 2,
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
  [3090] = 2,
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
  [3125] = 2,
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
  [3160] = 2,
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
  [3195] = 2,
    ACTIONS(417), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(415), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3230] = 2,
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
  [3265] = 2,
    ACTIONS(429), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(427), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3300] = 2,
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
  [3335] = 2,
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
  [3370] = 2,
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
  [3405] = 3,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(467), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(465), 26,
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
  [3441] = 20,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(88), 1,
      aux_sym_whitespace_repeat1,
    STATE(96), 1,
      sym_amount,
    STATE(121), 1,
      sym_lot_price,
    STATE(153), 1,
      sym_price,
    STATE(154), 1,
      sym_commodity,
    STATE(204), 1,
      sym_balance_assertion,
    STATE(389), 1,
      sym_note,
    ACTIONS(492), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3506] = 20,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(494), 1,
      anon_sym_LF,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(98), 1,
      sym_amount,
    STATE(123), 1,
      sym_lot_price,
    STATE(149), 1,
      sym_price,
    STATE(154), 1,
      sym_commodity,
    STATE(210), 1,
      sym_balance_assertion,
    STATE(399), 1,
      sym_note,
    ACTIONS(496), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3571] = 20,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(498), 1,
      anon_sym_LF,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(101), 1,
      sym_amount,
    STATE(127), 1,
      sym_lot_price,
    STATE(152), 1,
      sym_price,
    STATE(154), 1,
      sym_commodity,
    STATE(209), 1,
      sym_balance_assertion,
    STATE(395), 1,
      sym_note,
    ACTIONS(500), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3636] = 19,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(96), 1,
      sym_amount,
    STATE(121), 1,
      sym_lot_price,
    STATE(153), 1,
      sym_price,
    STATE(154), 1,
      sym_commodity,
    STATE(204), 1,
      sym_balance_assertion,
    STATE(389), 1,
      sym_note,
    ACTIONS(502), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3698] = 19,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(97), 1,
      sym_amount,
    STATE(126), 1,
      sym_lot_price,
    STATE(154), 1,
      sym_commodity,
    STATE(155), 1,
      sym_price,
    STATE(202), 1,
      sym_balance_assertion,
    STATE(405), 1,
      sym_note,
    ACTIONS(502), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3760] = 19,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(101), 1,
      sym_amount,
    STATE(127), 1,
      sym_lot_price,
    STATE(152), 1,
      sym_price,
    STATE(154), 1,
      sym_commodity,
    STATE(209), 1,
      sym_balance_assertion,
    STATE(395), 1,
      sym_note,
    ACTIONS(502), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3822] = 4,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(335), 1,
      sym_interval,
    ACTIONS(506), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(504), 17,
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
  [3852] = 2,
    ACTIONS(371), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(369), 14,
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
  [3874] = 4,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(510), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(508), 4,
      sym__2d,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(465), 10,
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
  [3900] = 6,
    STATE(128), 1,
      sym_commodity,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(513), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(187), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(185), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
  [3929] = 4,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(508), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(515), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(465), 10,
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
  [3953] = 2,
    ACTIONS(259), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(257), 11,
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
  [3972] = 13,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(518), 1,
      anon_sym_LF,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_lot_price,
    STATE(155), 1,
      sym_price,
    STATE(202), 1,
      sym_balance_assertion,
    STATE(405), 1,
      sym_note,
    ACTIONS(520), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4013] = 13,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(522), 1,
      anon_sym_LF,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    STATE(122), 1,
      sym_lot_price,
    STATE(156), 1,
      sym_price,
    STATE(215), 1,
      sym_balance_assertion,
    STATE(413), 1,
      sym_note,
    ACTIONS(524), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4054] = 13,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(498), 1,
      anon_sym_LF,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_lot_price,
    STATE(152), 1,
      sym_price,
    STATE(209), 1,
      sym_balance_assertion,
    STATE(395), 1,
      sym_note,
    ACTIONS(526), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4095] = 2,
    ACTIONS(271), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(269), 11,
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
  [4114] = 2,
    ACTIONS(267), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(265), 11,
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
  [4133] = 13,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    STATE(121), 1,
      sym_lot_price,
    STATE(153), 1,
      sym_price,
    STATE(204), 1,
      sym_balance_assertion,
    STATE(389), 1,
      sym_note,
    ACTIONS(528), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4174] = 12,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_lot_price,
    STATE(155), 1,
      sym_price,
    STATE(202), 1,
      sym_balance_assertion,
    STATE(405), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4212] = 9,
    ACTIONS(532), 1,
      anon_sym_DASH,
    ACTIONS(534), 1,
      sym__quantity,
    ACTIONS(536), 1,
      anon_sym_PLUS,
    STATE(43), 1,
      sym_amount,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(161), 1,
      sym_commodity,
    ACTIONS(502), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(10), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4244] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_commodity,
    STATE(261), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4276] = 12,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(122), 1,
      sym_lot_price,
    STATE(156), 1,
      sym_price,
    STATE(215), 1,
      sym_balance_assertion,
    STATE(413), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4314] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_commodity,
    STATE(428), 1,
      sym_amount,
    ACTIONS(538), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4346] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_commodity,
    STATE(264), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4378] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_commodity,
    STATE(266), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4410] = 12,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(125), 1,
      sym_lot_price,
    STATE(158), 1,
      sym_price,
    STATE(207), 1,
      sym_balance_assertion,
    STATE(402), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4448] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_commodity,
    STATE(235), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4480] = 12,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(121), 1,
      sym_lot_price,
    STATE(153), 1,
      sym_price,
    STATE(204), 1,
      sym_balance_assertion,
    STATE(389), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4518] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_commodity,
    STATE(411), 1,
      sym_amount,
    ACTIONS(540), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4550] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_commodity,
    STATE(299), 1,
      sym_amount,
    ACTIONS(542), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4582] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_commodity,
    STATE(300), 1,
      sym_amount,
    ACTIONS(544), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4614] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_commodity,
    STATE(303), 1,
      sym_amount,
    ACTIONS(546), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4646] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(110), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_commodity,
    STATE(231), 1,
      sym_amount,
    ACTIONS(548), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4678] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_commodity,
    STATE(417), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4710] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_commodity,
    STATE(411), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4742] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_commodity,
    STATE(397), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4774] = 11,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(558), 1,
      anon_sym_SPACE,
    ACTIONS(560), 1,
      anon_sym_TAB,
    STATE(136), 1,
      aux_sym_whitespace_repeat1,
    STATE(198), 1,
      sym_status,
    STATE(312), 1,
      sym_account,
    STATE(396), 1,
      sym_note,
    ACTIONS(550), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [4809] = 10,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(518), 1,
      anon_sym_LF,
    STATE(132), 1,
      aux_sym_whitespace_repeat1,
    STATE(155), 1,
      sym_price,
    STATE(202), 1,
      sym_balance_assertion,
    STATE(405), 1,
      sym_note,
    ACTIONS(562), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4841] = 10,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(564), 1,
      anon_sym_LF,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    STATE(158), 1,
      sym_price,
    STATE(207), 1,
      sym_balance_assertion,
    STATE(402), 1,
      sym_note,
    ACTIONS(566), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4873] = 10,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(498), 1,
      anon_sym_LF,
    STATE(135), 1,
      aux_sym_whitespace_repeat1,
    STATE(152), 1,
      sym_price,
    STATE(209), 1,
      sym_balance_assertion,
    STATE(395), 1,
      sym_note,
    ACTIONS(568), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4905] = 2,
    ACTIONS(379), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(377), 8,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4921] = 10,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(570), 1,
      anon_sym_LF,
    STATE(134), 1,
      aux_sym_whitespace_repeat1,
    STATE(159), 1,
      sym_price,
    STATE(212), 1,
      sym_balance_assertion,
    STATE(420), 1,
      sym_note,
    ACTIONS(572), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4953] = 10,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(522), 1,
      anon_sym_LF,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    STATE(156), 1,
      sym_price,
    STATE(215), 1,
      sym_balance_assertion,
    STATE(413), 1,
      sym_note,
    ACTIONS(574), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4985] = 10,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    STATE(153), 1,
      sym_price,
    STATE(204), 1,
      sym_balance_assertion,
    STATE(389), 1,
      sym_note,
    ACTIONS(576), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5017] = 2,
    ACTIONS(375), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(373), 8,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5033] = 9,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(155), 1,
      sym_price,
    STATE(202), 1,
      sym_balance_assertion,
    STATE(405), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5062] = 9,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(158), 1,
      sym_price,
    STATE(207), 1,
      sym_balance_assertion,
    STATE(402), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5091] = 9,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(159), 1,
      sym_price,
    STATE(212), 1,
      sym_balance_assertion,
    STATE(420), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5120] = 9,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(156), 1,
      sym_price,
    STATE(215), 1,
      sym_balance_assertion,
    STATE(413), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5149] = 8,
    ACTIONS(580), 1,
      anon_sym_alias,
    ACTIONS(582), 1,
      anon_sym_default,
    ACTIONS(584), 1,
      anon_sym_note,
    ACTIONS(586), 1,
      anon_sym_assert,
    ACTIONS(588), 1,
      anon_sym_check,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(506), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(578), 2,
      anon_sym_eval,
      anon_sym_payee,
  [5176] = 9,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(160), 1,
      sym_price,
    STATE(223), 1,
      sym_balance_assertion,
    STATE(370), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5205] = 9,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(153), 1,
      sym_price,
    STATE(204), 1,
      sym_balance_assertion,
    STATE(389), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5234] = 5,
    ACTIONS(465), 1,
      anon_sym_SEMI,
    ACTIONS(590), 1,
      anon_sym_SPACE,
    ACTIONS(593), 1,
      anon_sym_TAB,
    STATE(136), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(508), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [5254] = 7,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(600), 1,
      sym_payee,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    STATE(206), 1,
      sym_status,
    STATE(208), 1,
      sym_code,
    ACTIONS(596), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(602), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5278] = 4,
    STATE(138), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(508), 2,
      anon_sym_assert,
      anon_sym_check,
    ACTIONS(604), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(465), 4,
      anon_sym_DASH,
      aux_sym_tag_directive_token1,
      sym__quantity,
      anon_sym_PLUS,
  [5296] = 7,
    ACTIONS(401), 1,
      anon_sym_endtest,
    ACTIONS(607), 1,
      anon_sym_LF,
    ACTIONS(609), 1,
      aux_sym_block_comment_token1,
    ACTIONS(611), 1,
      anon_sym_end,
    STATE(142), 1,
      aux_sym_block_comment_repeat1,
    STATE(277), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(613), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5319] = 7,
    ACTIONS(395), 1,
      anon_sym_endcomment,
    ACTIONS(615), 1,
      anon_sym_LF,
    ACTIONS(617), 1,
      aux_sym_block_comment_token1,
    ACTIONS(619), 1,
      anon_sym_end,
    STATE(165), 1,
      aux_sym_block_comment_repeat1,
    STATE(284), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(621), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5342] = 7,
    ACTIONS(617), 1,
      aux_sym_block_comment_token1,
    ACTIONS(623), 1,
      anon_sym_LF,
    ACTIONS(625), 1,
      anon_sym_end,
    ACTIONS(627), 1,
      anon_sym_endcomment,
    STATE(150), 1,
      aux_sym_block_comment_repeat1,
    STATE(284), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(621), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5365] = 7,
    ACTIONS(419), 1,
      anon_sym_endtest,
    ACTIONS(609), 1,
      aux_sym_block_comment_token1,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 1,
      anon_sym_end,
    STATE(162), 1,
      aux_sym_block_comment_repeat1,
    STATE(277), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(613), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5388] = 7,
    ACTIONS(609), 1,
      aux_sym_block_comment_token1,
    ACTIONS(633), 1,
      anon_sym_LF,
    ACTIONS(635), 1,
      anon_sym_end,
    ACTIONS(637), 1,
      anon_sym_endtest,
    STATE(151), 1,
      aux_sym_block_comment_repeat1,
    STATE(277), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(613), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5411] = 7,
    ACTIONS(580), 1,
      anon_sym_alias,
    ACTIONS(582), 1,
      anon_sym_default,
    ACTIONS(584), 1,
      anon_sym_note,
    ACTIONS(639), 1,
      anon_sym_nomarket,
    ACTIONS(641), 1,
      anon_sym_format,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(506), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5434] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(222), 1,
      sym__single_date,
    STATE(329), 1,
      sym_date,
    STATE(415), 1,
      sym__4d,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5457] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(222), 1,
      sym__single_date,
    STATE(281), 1,
      sym_date,
    STATE(415), 1,
      sym__4d,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5480] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(222), 1,
      sym__single_date,
    STATE(287), 1,
      sym_date,
    STATE(415), 1,
      sym__4d,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5503] = 6,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(138), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(643), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(124), 2,
      sym_quantity,
      sym_negative_quantity,
  [5524] = 7,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(498), 1,
      anon_sym_LF,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    STATE(209), 1,
      sym_balance_assertion,
    STATE(395), 1,
      sym_note,
    ACTIONS(645), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5547] = 7,
    ACTIONS(389), 1,
      anon_sym_endcomment,
    ACTIONS(615), 1,
      anon_sym_LF,
    ACTIONS(617), 1,
      aux_sym_block_comment_token1,
    ACTIONS(647), 1,
      anon_sym_end,
    STATE(165), 1,
      aux_sym_block_comment_repeat1,
    STATE(284), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(621), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5570] = 7,
    ACTIONS(431), 1,
      anon_sym_endtest,
    ACTIONS(609), 1,
      aux_sym_block_comment_token1,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(649), 1,
      anon_sym_end,
    STATE(162), 1,
      aux_sym_block_comment_repeat1,
    STATE(277), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(613), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5593] = 7,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(175), 1,
      aux_sym_whitespace_repeat1,
    STATE(204), 1,
      sym_balance_assertion,
    STATE(389), 1,
      sym_note,
    ACTIONS(651), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5616] = 7,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(518), 1,
      anon_sym_LF,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    STATE(202), 1,
      sym_balance_assertion,
    STATE(405), 1,
      sym_note,
    ACTIONS(653), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5639] = 6,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(655), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(128), 2,
      sym_quantity,
      sym_negative_quantity,
  [5660] = 7,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(522), 1,
      anon_sym_LF,
    STATE(181), 1,
      aux_sym_whitespace_repeat1,
    STATE(215), 1,
      sym_balance_assertion,
    STATE(413), 1,
      sym_note,
    ACTIONS(657), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5683] = 7,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(564), 1,
      anon_sym_LF,
    STATE(185), 1,
      aux_sym_whitespace_repeat1,
    STATE(207), 1,
      sym_balance_assertion,
    STATE(402), 1,
      sym_note,
    ACTIONS(659), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5706] = 2,
    ACTIONS(663), 1,
      sym__dsep,
    ACTIONS(661), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5719] = 7,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(570), 1,
      anon_sym_LF,
    STATE(187), 1,
      aux_sym_whitespace_repeat1,
    STATE(212), 1,
      sym_balance_assertion,
    STATE(420), 1,
      sym_note,
    ACTIONS(665), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5742] = 7,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(667), 1,
      anon_sym_LF,
    STATE(189), 1,
      aux_sym_whitespace_repeat1,
    STATE(223), 1,
      sym_balance_assertion,
    STATE(370), 1,
      sym_note,
    ACTIONS(669), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5765] = 7,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(671), 1,
      anon_sym_LF,
    STATE(191), 1,
      aux_sym_whitespace_repeat1,
    STATE(203), 1,
      sym_balance_assertion,
    STATE(376), 1,
      sym_note,
    ACTIONS(673), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5788] = 6,
    ACTIONS(675), 1,
      anon_sym_DASH,
    ACTIONS(677), 1,
      sym__quantity,
    ACTIONS(679), 1,
      anon_sym_PLUS,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(681), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(55), 2,
      sym_quantity,
      sym_negative_quantity,
  [5809] = 6,
    ACTIONS(683), 1,
      anon_sym_LF,
    ACTIONS(686), 1,
      aux_sym_block_comment_token1,
    STATE(162), 1,
      aux_sym_block_comment_repeat1,
    STATE(277), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(689), 2,
      anon_sym_end,
      anon_sym_endtest,
    ACTIONS(691), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5830] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    STATE(222), 1,
      sym__single_date,
    STATE(319), 1,
      sym_date,
    STATE(415), 1,
      sym__4d,
    ACTIONS(694), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5853] = 6,
    ACTIONS(675), 1,
      anon_sym_DASH,
    ACTIONS(677), 1,
      sym__quantity,
    ACTIONS(679), 1,
      anon_sym_PLUS,
    STATE(138), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(643), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(56), 2,
      sym_quantity,
      sym_negative_quantity,
  [5874] = 6,
    ACTIONS(696), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      aux_sym_block_comment_token1,
    STATE(165), 1,
      aux_sym_block_comment_repeat1,
    STATE(284), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(689), 2,
      anon_sym_end,
      anon_sym_endcomment,
    ACTIONS(702), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5895] = 7,
    ACTIONS(425), 1,
      anon_sym_endcomment,
    ACTIONS(617), 1,
      aux_sym_block_comment_token1,
    ACTIONS(705), 1,
      anon_sym_LF,
    ACTIONS(707), 1,
      anon_sym_end,
    STATE(140), 1,
      aux_sym_block_comment_repeat1,
    STATE(284), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(621), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5918] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    STATE(222), 1,
      sym__single_date,
    STATE(321), 1,
      sym_date,
    STATE(415), 1,
      sym__4d,
    ACTIONS(709), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5941] = 2,
    ACTIONS(713), 1,
      anon_sym_AT,
    ACTIONS(711), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5953] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(715), 1,
      anon_sym_SPACE,
    ACTIONS(717), 1,
      anon_sym_TAB,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    STATE(295), 1,
      sym_account,
  [5975] = 4,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_commodity,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5991] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(715), 1,
      anon_sym_SPACE,
    ACTIONS(717), 1,
      anon_sym_TAB,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    STATE(296), 1,
      sym_account,
  [6013] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(719), 1,
      anon_sym_SPACE,
    ACTIONS(721), 1,
      anon_sym_TAB,
    STATE(182), 1,
      aux_sym_whitespace_repeat1,
    STATE(296), 1,
      sym_account,
  [6035] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(204), 1,
      sym_balance_assertion,
    STATE(389), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6055] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(715), 1,
      anon_sym_SPACE,
    ACTIONS(717), 1,
      anon_sym_TAB,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    STATE(438), 1,
      sym_account,
  [6077] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(202), 1,
      sym_balance_assertion,
    STATE(405), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6097] = 3,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(723), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(465), 4,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_payee,
  [6111] = 4,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(374), 1,
      sym_commodity,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6127] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(215), 1,
      sym_balance_assertion,
    STATE(413), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6147] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(726), 1,
      anon_sym_SPACE,
    ACTIONS(728), 1,
      anon_sym_TAB,
    STATE(171), 1,
      aux_sym_whitespace_repeat1,
    STATE(270), 1,
      sym_account,
  [6169] = 2,
    ACTIONS(732), 1,
      anon_sym_AT,
    ACTIONS(730), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6181] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(207), 1,
      sym_balance_assertion,
    STATE(402), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6201] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(715), 1,
      anon_sym_SPACE,
    ACTIONS(717), 1,
      anon_sym_TAB,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    STATE(302), 1,
      sym_account,
  [6223] = 2,
    ACTIONS(736), 1,
      anon_sym_AT,
    ACTIONS(734), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6235] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(738), 1,
      anon_sym_SPACE,
    ACTIONS(740), 1,
      anon_sym_TAB,
    STATE(169), 1,
      aux_sym_whitespace_repeat1,
    STATE(302), 1,
      sym_account,
  [6257] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(212), 1,
      sym_balance_assertion,
    STATE(420), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6277] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(715), 1,
      anon_sym_SPACE,
    ACTIONS(717), 1,
      anon_sym_TAB,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    STATE(386), 1,
      sym_account,
  [6299] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(223), 1,
      sym_balance_assertion,
    STATE(370), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6319] = 1,
    ACTIONS(742), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6329] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(203), 1,
      sym_balance_assertion,
    STATE(376), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6349] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(715), 1,
      anon_sym_SPACE,
    ACTIONS(717), 1,
      anon_sym_TAB,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    STATE(306), 1,
      sym_account,
  [6371] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(205), 1,
      sym_balance_assertion,
    STATE(381), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6391] = 6,
    ACTIONS(744), 1,
      aux_sym_note_token1,
    ACTIONS(746), 1,
      anon_sym_LBRACK,
    ACTIONS(748), 1,
      aux_sym_note_token2,
    STATE(194), 1,
      aux_sym_note_repeat1,
    STATE(308), 1,
      aux_sym_note_repeat2,
    ACTIONS(750), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6411] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(715), 1,
      anon_sym_SPACE,
    ACTIONS(717), 1,
      anon_sym_TAB,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    STATE(397), 1,
      sym_account,
  [6433] = 6,
    ACTIONS(752), 1,
      aux_sym_note_token1,
    ACTIONS(754), 1,
      anon_sym_LBRACK,
    ACTIONS(756), 1,
      aux_sym_note_token2,
    STATE(217), 1,
      aux_sym_note_repeat1,
    STATE(313), 1,
      aux_sym_note_repeat2,
    ACTIONS(758), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6453] = 4,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(397), 1,
      sym_commodity,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6469] = 4,
    STATE(56), 1,
      sym_commodity,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(191), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6485] = 4,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(273), 1,
      sym_commodity,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6501] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(760), 1,
      anon_sym_SPACE,
    ACTIONS(762), 1,
      anon_sym_TAB,
    STATE(190), 1,
      aux_sym_whitespace_repeat1,
    STATE(304), 1,
      sym_account,
  [6523] = 4,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(124), 1,
      sym_commodity,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6539] = 2,
    ACTIONS(764), 1,
      anon_sym_LF,
    ACTIONS(766), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6550] = 3,
    ACTIONS(770), 1,
      anon_sym_EQ,
    STATE(260), 1,
      sym_effective_date,
    ACTIONS(768), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6563] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(522), 1,
      anon_sym_LF,
    STATE(241), 1,
      aux_sym_whitespace_repeat1,
    STATE(413), 1,
      sym_note,
    ACTIONS(772), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6580] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(774), 1,
      anon_sym_LF,
    STATE(249), 1,
      aux_sym_whitespace_repeat1,
    STATE(381), 1,
      sym_note,
    ACTIONS(776), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6597] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(518), 1,
      anon_sym_LF,
    STATE(238), 1,
      aux_sym_whitespace_repeat1,
    STATE(405), 1,
      sym_note,
    ACTIONS(778), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6614] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(780), 1,
      anon_sym_LF,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    STATE(385), 1,
      sym_note,
    ACTIONS(782), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6631] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(784), 1,
      anon_sym_LF,
    STATE(221), 1,
      aux_sym_whitespace_repeat1,
    STATE(437), 1,
      sym_note,
    ACTIONS(786), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6648] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(570), 1,
      anon_sym_LF,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    STATE(420), 1,
      sym_note,
    ACTIONS(788), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6665] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(784), 1,
      anon_sym_LF,
    STATE(298), 1,
      aux_sym_whitespace_repeat1,
    STATE(437), 1,
      sym_note,
    ACTIONS(790), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6682] = 5,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(234), 1,
      aux_sym_whitespace_repeat1,
    STATE(389), 1,
      sym_note,
    ACTIONS(792), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6699] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(498), 1,
      anon_sym_LF,
    STATE(232), 1,
      aux_sym_whitespace_repeat1,
    STATE(395), 1,
      sym_note,
    ACTIONS(794), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6716] = 2,
    ACTIONS(796), 1,
      anon_sym_LF,
    ACTIONS(689), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6727] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(667), 1,
      anon_sym_LF,
    STATE(245), 1,
      aux_sym_whitespace_repeat1,
    STATE(370), 1,
      sym_note,
    ACTIONS(798), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6744] = 2,
    ACTIONS(796), 1,
      anon_sym_LF,
    ACTIONS(689), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6755] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(800), 1,
      anon_sym_LF,
    STATE(274), 1,
      aux_sym_whitespace_repeat1,
    STATE(368), 1,
      sym_note,
    ACTIONS(802), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6772] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(564), 1,
      anon_sym_LF,
    STATE(243), 1,
      aux_sym_whitespace_repeat1,
    STATE(402), 1,
      sym_note,
    ACTIONS(804), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6789] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(806), 1,
      anon_sym_LF,
    STATE(137), 1,
      aux_sym_whitespace_repeat1,
    STATE(436), 1,
      sym_note,
    ACTIONS(808), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6806] = 4,
    ACTIONS(810), 1,
      aux_sym_note_token1,
    ACTIONS(815), 1,
      aux_sym_note_token2,
    STATE(217), 1,
      aux_sym_note_repeat1,
    ACTIONS(813), 3,
      anon_sym_LBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6821] = 2,
    ACTIONS(764), 1,
      anon_sym_LF,
    ACTIONS(766), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6832] = 6,
    ACTIONS(758), 1,
      anon_sym_LF,
    ACTIONS(817), 1,
      aux_sym_note_token1,
    ACTIONS(819), 1,
      anon_sym_LBRACK,
    ACTIONS(821), 1,
      aux_sym_note_token2,
    STATE(226), 1,
      aux_sym_note_repeat1,
    STATE(332), 1,
      aux_sym_note_repeat2,
  [6851] = 4,
    ACTIONS(823), 1,
      anon_sym_SPACE,
    ACTIONS(826), 1,
      anon_sym_TAB,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(508), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [6866] = 5,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(829), 1,
      sym_payee,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    STATE(214), 1,
      sym_code,
    ACTIONS(602), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6883] = 1,
    ACTIONS(831), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6892] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(671), 1,
      anon_sym_LF,
    STATE(247), 1,
      aux_sym_whitespace_repeat1,
    STATE(376), 1,
      sym_note,
    ACTIONS(833), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6909] = 6,
    ACTIONS(750), 1,
      anon_sym_LF,
    ACTIONS(835), 1,
      aux_sym_note_token1,
    ACTIONS(837), 1,
      anon_sym_LBRACK,
    ACTIONS(839), 1,
      aux_sym_note_token2,
    STATE(219), 1,
      aux_sym_note_repeat1,
    STATE(360), 1,
      aux_sym_note_repeat2,
  [6928] = 4,
    ACTIONS(841), 1,
      aux_sym_option_value_token1,
    STATE(322), 1,
      aux_sym_whitespace_repeat1,
    STATE(426), 1,
      sym_option_value,
    ACTIONS(843), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6942] = 4,
    ACTIONS(815), 1,
      aux_sym_note_token2,
    ACTIONS(845), 1,
      aux_sym_note_token1,
    STATE(226), 1,
      aux_sym_note_repeat1,
    ACTIONS(813), 2,
      anon_sym_LF,
      anon_sym_LBRACK,
  [6956] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6968] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6980] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(25), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6992] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7004] = 1,
    ACTIONS(848), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7012] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(389), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7026] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(20), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7038] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(405), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7052] = 1,
    ACTIONS(850), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7060] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(23), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7072] = 4,
    ACTIONS(852), 1,
      anon_sym_LF,
    ACTIONS(854), 1,
      anon_sym_EQ,
    STATE(225), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(856), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7086] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(413), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7100] = 4,
    ACTIONS(586), 1,
      anon_sym_assert,
    ACTIONS(588), 1,
      anon_sym_check,
    STATE(138), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(643), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7114] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(22), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7126] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(402), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7140] = 4,
    ACTIONS(858), 1,
      aux_sym_option_value_token1,
    STATE(322), 1,
      aux_sym_whitespace_repeat1,
    STATE(386), 1,
      sym_filename,
    ACTIONS(843), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7154] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(420), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7168] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(370), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7182] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(376), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7196] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7208] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(381), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7222] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7234] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(385), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7248] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(388), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7262] = 1,
    ACTIONS(860), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7270] = 2,
    ACTIONS(864), 1,
      anon_sym_SPACE,
    ACTIONS(862), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [7280] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7292] = 3,
    ACTIONS(866), 1,
      sym_time,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7303] = 4,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(251), 1,
      sym__single_date,
    STATE(415), 1,
      sym__4d,
  [7316] = 3,
    ACTIONS(868), 1,
      sym_payee,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(602), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7327] = 3,
    ACTIONS(868), 1,
      sym_payee,
    STATE(269), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(870), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7338] = 3,
    ACTIONS(872), 1,
      anon_sym_EQ,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7349] = 3,
    ACTIONS(874), 1,
      aux_sym_block_comment_token1,
    STATE(288), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(876), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7360] = 1,
    ACTIONS(878), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7367] = 1,
    ACTIONS(880), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7374] = 3,
    ACTIONS(882), 1,
      anon_sym_LF,
    STATE(259), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(884), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7385] = 3,
    ACTIONS(886), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7396] = 3,
    ACTIONS(886), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(888), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7407] = 3,
    ACTIONS(886), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7418] = 3,
    ACTIONS(886), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(280), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(890), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7429] = 3,
    ACTIONS(892), 1,
      sym_payee,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(602), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7440] = 3,
    ACTIONS(892), 1,
      sym_payee,
    STATE(289), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(894), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7451] = 3,
    ACTIONS(896), 1,
      sym_payee,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(602), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7462] = 2,
    ACTIONS(898), 1,
      anon_sym_LF,
    ACTIONS(900), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [7471] = 3,
    ACTIONS(902), 1,
      aux_sym_block_comment_token1,
    STATE(288), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(876), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7482] = 1,
    ACTIONS(904), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [7489] = 3,
    ACTIONS(906), 1,
      anon_sym_EQ,
    STATE(258), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(908), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7500] = 3,
    ACTIONS(910), 1,
      sym_payee,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(602), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7511] = 3,
    ACTIONS(912), 1,
      aux_sym_account_subdirective_token1,
    STATE(324), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(914), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7522] = 3,
    ACTIONS(916), 1,
      sym_query,
    STATE(305), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(918), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7533] = 3,
    ACTIONS(920), 1,
      aux_sym_block_comment_token1,
    STATE(288), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(876), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7544] = 3,
    ACTIONS(922), 1,
      aux_sym_account_subdirective_token1,
    STATE(324), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(914), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7555] = 3,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7566] = 3,
    ACTIONS(924), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7577] = 3,
    ACTIONS(866), 1,
      sym_time,
    STATE(285), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(926), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7588] = 3,
    ACTIONS(928), 1,
      aux_sym_account_subdirective_token1,
    STATE(324), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(914), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7599] = 3,
    ACTIONS(930), 1,
      aux_sym_tag_directive_token1,
    STATE(138), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(643), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7610] = 3,
    ACTIONS(932), 1,
      aux_sym_block_comment_token1,
    STATE(288), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(876), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7621] = 3,
    ACTIONS(934), 1,
      sym_time,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7632] = 3,
    ACTIONS(936), 1,
      sym_time,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7643] = 3,
    ACTIONS(936), 1,
      sym_time,
    STATE(297), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(938), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7654] = 3,
    ACTIONS(508), 1,
      aux_sym_block_comment_token1,
    STATE(288), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(940), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7665] = 3,
    ACTIONS(943), 1,
      sym_payee,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(602), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7676] = 3,
    ACTIONS(945), 1,
      aux_sym_account_subdirective_token1,
    STATE(324), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(914), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7687] = 3,
    ACTIONS(943), 1,
      sym_payee,
    STATE(256), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(947), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7698] = 3,
    ACTIONS(949), 1,
      aux_sym_option_value_token1,
    STATE(322), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(843), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7709] = 3,
    ACTIONS(951), 1,
      aux_sym_word_directive_token2,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7720] = 3,
    ACTIONS(953), 1,
      sym_payee,
    STATE(267), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(955), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7731] = 2,
    ACTIONS(957), 1,
      anon_sym_LF,
    ACTIONS(959), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [7740] = 2,
    ACTIONS(961), 1,
      anon_sym_LF,
    ACTIONS(963), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [7749] = 3,
    ACTIONS(965), 1,
      sym_time,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7760] = 3,
    ACTIONS(829), 1,
      sym_payee,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(602), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7771] = 1,
    ACTIONS(967), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7778] = 3,
    ACTIONS(969), 1,
      anon_sym_RBRACE,
    STATE(263), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(971), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7789] = 1,
    ACTIONS(864), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7796] = 2,
    ACTIONS(973), 1,
      anon_sym_LF,
    ACTIONS(975), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [7805] = 3,
    ACTIONS(969), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(265), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(977), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7816] = 2,
    ACTIONS(494), 1,
      anon_sym_LF,
    ACTIONS(979), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [7825] = 3,
    ACTIONS(508), 1,
      sym_query,
    STATE(305), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(981), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7836] = 2,
    ACTIONS(498), 1,
      anon_sym_LF,
    ACTIONS(984), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [7845] = 3,
    ACTIONS(986), 1,
      aux_sym_word_directive_token2,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7856] = 3,
    ACTIONS(988), 1,
      aux_sym_note_token2,
    STATE(314), 1,
      aux_sym_note_repeat2,
    ACTIONS(758), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7867] = 1,
    ACTIONS(990), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [7874] = 1,
    ACTIONS(992), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7881] = 3,
    ACTIONS(994), 1,
      anon_sym_LF,
    STATE(271), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(996), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7892] = 2,
    ACTIONS(998), 1,
      anon_sym_LF,
    ACTIONS(1000), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [7901] = 3,
    ACTIONS(988), 1,
      aux_sym_note_token2,
    STATE(314), 1,
      aux_sym_note_repeat2,
    ACTIONS(1002), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7912] = 3,
    ACTIONS(1004), 1,
      aux_sym_note_token2,
    STATE(314), 1,
      aux_sym_note_repeat2,
    ACTIONS(1007), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7923] = 3,
    ACTIONS(1009), 1,
      aux_sym_note_token2,
    STATE(316), 1,
      aux_sym_note_repeat2,
    ACTIONS(1011), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7934] = 3,
    ACTIONS(988), 1,
      aux_sym_note_token2,
    STATE(314), 1,
      aux_sym_note_repeat2,
    ACTIONS(1013), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7945] = 3,
    ACTIONS(1015), 1,
      aux_sym_note_token2,
    STATE(318), 1,
      aux_sym_note_repeat2,
    ACTIONS(1013), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7956] = 3,
    ACTIONS(988), 1,
      aux_sym_note_token2,
    STATE(314), 1,
      aux_sym_note_repeat2,
    ACTIONS(1017), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7967] = 3,
    ACTIONS(1019), 1,
      sym_time,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1021), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7978] = 3,
    ACTIONS(1023), 1,
      aux_sym_account_subdirective_token1,
    STATE(324), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(914), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [7989] = 3,
    ACTIONS(1025), 1,
      sym_time,
    STATE(286), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1027), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8000] = 3,
    ACTIONS(508), 1,
      aux_sym_option_value_token1,
    STATE(322), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1029), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8011] = 3,
    ACTIONS(508), 1,
      aux_sym_word_directive_token1,
    STATE(323), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1032), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8022] = 3,
    ACTIONS(465), 1,
      aux_sym_account_subdirective_token1,
    STATE(324), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1035), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8033] = 3,
    ACTIONS(1038), 1,
      aux_sym_word_directive_token1,
    STATE(323), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1040), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8044] = 2,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1042), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8052] = 2,
    STATE(325), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1044), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8060] = 2,
    STATE(292), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1046), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8068] = 2,
    STATE(170), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1048), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8076] = 2,
    STATE(293), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1050), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8084] = 2,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1052), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8092] = 3,
    ACTIONS(1002), 1,
      anon_sym_LF,
    ACTIONS(1054), 1,
      aux_sym_note_token2,
    STATE(346), 1,
      aux_sym_note_repeat2,
  [8102] = 3,
    ACTIONS(1056), 1,
      anon_sym_LF,
    ACTIONS(1058), 1,
      anon_sym_SEMI,
    STATE(230), 1,
      sym_note,
  [8112] = 3,
    ACTIONS(1013), 1,
      anon_sym_LF,
    ACTIONS(1054), 1,
      aux_sym_note_token2,
    STATE(346), 1,
      aux_sym_note_repeat2,
  [8122] = 3,
    ACTIONS(1058), 1,
      anon_sym_SEMI,
    ACTIONS(1060), 1,
      anon_sym_LF,
    STATE(248), 1,
      sym_note,
  [8132] = 2,
    STATE(290), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1062), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8140] = 3,
    ACTIONS(1013), 1,
      anon_sym_LF,
    ACTIONS(1064), 1,
      aux_sym_note_token2,
    STATE(342), 1,
      aux_sym_note_repeat2,
  [8150] = 2,
    STATE(320), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1066), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8158] = 2,
    STATE(177), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1068), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8166] = 2,
    STATE(119), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1070), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8174] = 2,
    STATE(197), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1072), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8182] = 3,
    ACTIONS(1017), 1,
      anon_sym_LF,
    ACTIONS(1054), 1,
      aux_sym_note_token2,
    STATE(346), 1,
      aux_sym_note_repeat2,
  [8192] = 3,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(1074), 1,
      anon_sym_LF,
    STATE(422), 1,
      sym_note,
  [8202] = 2,
    STATE(186), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1076), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8210] = 2,
    STATE(193), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1078), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8218] = 3,
    ACTIONS(1007), 1,
      anon_sym_LF,
    ACTIONS(1080), 1,
      aux_sym_note_token2,
    STATE(346), 1,
      aux_sym_note_repeat2,
  [8228] = 3,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(784), 1,
      anon_sym_LF,
    STATE(437), 1,
      sym_note,
  [8238] = 2,
    STATE(283), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1083), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8246] = 3,
    ACTIONS(1011), 1,
      anon_sym_LF,
    ACTIONS(1085), 1,
      aux_sym_note_token2,
    STATE(334), 1,
      aux_sym_note_repeat2,
  [8256] = 2,
    STATE(145), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1087), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8264] = 2,
    STATE(174), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1089), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8272] = 3,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(800), 1,
      anon_sym_LF,
    STATE(368), 1,
      sym_note,
  [8282] = 2,
    STATE(307), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1091), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8290] = 2,
    STATE(242), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1093), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8298] = 2,
    STATE(276), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1095), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8306] = 2,
    STATE(195), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1097), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8314] = 2,
    STATE(275), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1099), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8322] = 2,
    STATE(278), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1101), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8330] = 2,
    STATE(282), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1103), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [8338] = 3,
    ACTIONS(758), 1,
      anon_sym_LF,
    ACTIONS(1054), 1,
      aux_sym_note_token2,
    STATE(346), 1,
      aux_sym_note_repeat2,
  [8348] = 2,
    ACTIONS(1105), 1,
      aux_sym_option_value_token1,
    STATE(426), 1,
      sym_option_value,
  [8355] = 2,
    ACTIONS(770), 1,
      anon_sym_EQ,
    STATE(409), 1,
      sym_effective_date,
  [8362] = 1,
    ACTIONS(1107), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [8367] = 2,
    ACTIONS(770), 1,
      anon_sym_EQ,
    STATE(433), 1,
      sym_effective_date,
  [8374] = 2,
    ACTIONS(770), 1,
      anon_sym_EQ,
    STATE(400), 1,
      sym_effective_date,
  [8381] = 2,
    ACTIONS(770), 1,
      anon_sym_EQ,
    STATE(432), 1,
      sym_effective_date,
  [8388] = 1,
    ACTIONS(1109), 1,
      anon_sym_LF,
  [8392] = 1,
    ACTIONS(1111), 1,
      anon_sym_LF,
  [8396] = 1,
    ACTIONS(1113), 1,
      sym__2d,
  [8400] = 1,
    ACTIONS(671), 1,
      anon_sym_LF,
  [8404] = 1,
    ACTIONS(1115), 1,
      anon_sym_RBRACK,
  [8408] = 1,
    ACTIONS(1117), 1,
      sym__dsep,
  [8412] = 1,
    ACTIONS(1119), 1,
      anon_sym_LF,
  [8416] = 1,
    ACTIONS(1121), 1,
      anon_sym_LF,
  [8420] = 1,
    ACTIONS(1123), 1,
      sym_account_name,
  [8424] = 1,
    ACTIONS(774), 1,
      anon_sym_LF,
  [8428] = 1,
    ACTIONS(1125), 1,
      anon_sym_LF,
  [8432] = 1,
    ACTIONS(1127), 1,
      anon_sym_LF,
  [8436] = 1,
    ACTIONS(1129), 1,
      anon_sym_LF,
  [8440] = 1,
    ACTIONS(1131), 1,
      anon_sym_LF,
  [8444] = 1,
    ACTIONS(780), 1,
      anon_sym_LF,
  [8448] = 1,
    ACTIONS(1133), 1,
      anon_sym_LF,
  [8452] = 1,
    ACTIONS(1135), 1,
      sym__2d,
  [8456] = 1,
    ACTIONS(1137), 1,
      aux_sym_code_token1,
  [8460] = 1,
    ACTIONS(1139), 1,
      anon_sym_LF,
  [8464] = 1,
    ACTIONS(1141), 1,
      anon_sym_LF,
  [8468] = 1,
    ACTIONS(1143), 1,
      sym_account_name,
  [8472] = 1,
    ACTIONS(1145), 1,
      anon_sym_LF,
  [8476] = 1,
    ACTIONS(518), 1,
      anon_sym_LF,
  [8480] = 1,
    ACTIONS(1147), 1,
      anon_sym_LF,
  [8484] = 1,
    ACTIONS(1149), 1,
      anon_sym_EQ,
  [8488] = 1,
    ACTIONS(1151), 1,
      anon_sym_LF,
  [8492] = 1,
    ACTIONS(1153), 1,
      ts_builtin_sym_end,
  [8496] = 1,
    ACTIONS(663), 1,
      sym__dsep,
  [8500] = 1,
    ACTIONS(470), 1,
      anon_sym_LF,
  [8504] = 1,
    ACTIONS(1155), 1,
      anon_sym_LF,
  [8508] = 1,
    ACTIONS(1157), 1,
      anon_sym_LF,
  [8512] = 1,
    ACTIONS(1159), 1,
      sym__quantity,
  [8516] = 1,
    ACTIONS(498), 1,
      anon_sym_LF,
  [8520] = 1,
    ACTIONS(1161), 1,
      anon_sym_RBRACK,
  [8524] = 1,
    ACTIONS(1163), 1,
      sym__2d,
  [8528] = 1,
    ACTIONS(570), 1,
      anon_sym_LF,
  [8532] = 1,
    ACTIONS(1165), 1,
      aux_sym_option_token1,
  [8536] = 1,
    ACTIONS(973), 1,
      anon_sym_LF,
  [8540] = 1,
    ACTIONS(522), 1,
      anon_sym_LF,
  [8544] = 1,
    ACTIONS(1167), 1,
      anon_sym_LF,
  [8548] = 1,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
  [8552] = 1,
    ACTIONS(1171), 1,
      anon_sym_LF,
  [8556] = 1,
    ACTIONS(1173), 1,
      anon_sym_RBRACK,
  [8560] = 1,
    ACTIONS(1175), 1,
      anon_sym_LF,
  [8564] = 1,
    ACTIONS(1177), 1,
      anon_sym_LF,
  [8568] = 1,
    ACTIONS(1179), 1,
      anon_sym_LF,
  [8572] = 1,
    ACTIONS(564), 1,
      anon_sym_LF,
  [8576] = 1,
    ACTIONS(1181), 1,
      anon_sym_LF,
  [8580] = 1,
    ACTIONS(1183), 1,
      sym__dsep,
  [8584] = 1,
    ACTIONS(1185), 1,
      anon_sym_LF,
  [8588] = 1,
    ACTIONS(1187), 1,
      anon_sym_LF,
  [8592] = 1,
    ACTIONS(1189), 1,
      aux_sym_option_value_token1,
  [8596] = 1,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
  [8600] = 1,
    ACTIONS(667), 1,
      anon_sym_LF,
  [8604] = 1,
    ACTIONS(957), 1,
      anon_sym_LF,
  [8608] = 1,
    ACTIONS(1191), 1,
      anon_sym_LF,
  [8612] = 1,
    ACTIONS(1193), 1,
      anon_sym_LF,
  [8616] = 1,
    ACTIONS(1195), 1,
      anon_sym_LF,
  [8620] = 1,
    ACTIONS(1197), 1,
      anon_sym_LF,
  [8624] = 1,
    ACTIONS(1199), 1,
      anon_sym_LF,
  [8628] = 1,
    ACTIONS(1201), 1,
      anon_sym_LF,
  [8632] = 1,
    ACTIONS(1203), 1,
      anon_sym_LF,
  [8636] = 1,
    ACTIONS(1205), 1,
      sym__quantity,
  [8640] = 1,
    ACTIONS(1207), 1,
      sym__quantity,
  [8644] = 1,
    ACTIONS(1209), 1,
      anon_sym_LF,
  [8648] = 1,
    ACTIONS(1211), 1,
      anon_sym_RBRACK,
  [8652] = 1,
    ACTIONS(1213), 1,
      anon_sym_RBRACK,
  [8656] = 1,
    ACTIONS(1215), 1,
      sym__quantity,
  [8660] = 1,
    ACTIONS(1217), 1,
      sym__quantity,
  [8664] = 1,
    ACTIONS(1219), 1,
      anon_sym_LF,
  [8668] = 1,
    ACTIONS(1221), 1,
      anon_sym_LF,
  [8672] = 1,
    ACTIONS(1223), 1,
      anon_sym_LF,
  [8676] = 1,
    ACTIONS(1225), 1,
      sym__quantity,
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
  [SMALL_STATE(58)] = 2504,
  [SMALL_STATE(59)] = 2541,
  [SMALL_STATE(60)] = 2579,
  [SMALL_STATE(61)] = 2617,
  [SMALL_STATE(62)] = 2655,
  [SMALL_STATE(63)] = 2693,
  [SMALL_STATE(64)] = 2731,
  [SMALL_STATE(65)] = 2769,
  [SMALL_STATE(66)] = 2807,
  [SMALL_STATE(67)] = 2845,
  [SMALL_STATE(68)] = 2880,
  [SMALL_STATE(69)] = 2915,
  [SMALL_STATE(70)] = 2950,
  [SMALL_STATE(71)] = 2985,
  [SMALL_STATE(72)] = 3020,
  [SMALL_STATE(73)] = 3055,
  [SMALL_STATE(74)] = 3090,
  [SMALL_STATE(75)] = 3125,
  [SMALL_STATE(76)] = 3160,
  [SMALL_STATE(77)] = 3195,
  [SMALL_STATE(78)] = 3230,
  [SMALL_STATE(79)] = 3265,
  [SMALL_STATE(80)] = 3300,
  [SMALL_STATE(81)] = 3335,
  [SMALL_STATE(82)] = 3370,
  [SMALL_STATE(83)] = 3405,
  [SMALL_STATE(84)] = 3441,
  [SMALL_STATE(85)] = 3506,
  [SMALL_STATE(86)] = 3571,
  [SMALL_STATE(87)] = 3636,
  [SMALL_STATE(88)] = 3698,
  [SMALL_STATE(89)] = 3760,
  [SMALL_STATE(90)] = 3822,
  [SMALL_STATE(91)] = 3852,
  [SMALL_STATE(92)] = 3874,
  [SMALL_STATE(93)] = 3900,
  [SMALL_STATE(94)] = 3929,
  [SMALL_STATE(95)] = 3953,
  [SMALL_STATE(96)] = 3972,
  [SMALL_STATE(97)] = 4013,
  [SMALL_STATE(98)] = 4054,
  [SMALL_STATE(99)] = 4095,
  [SMALL_STATE(100)] = 4114,
  [SMALL_STATE(101)] = 4133,
  [SMALL_STATE(102)] = 4174,
  [SMALL_STATE(103)] = 4212,
  [SMALL_STATE(104)] = 4244,
  [SMALL_STATE(105)] = 4276,
  [SMALL_STATE(106)] = 4314,
  [SMALL_STATE(107)] = 4346,
  [SMALL_STATE(108)] = 4378,
  [SMALL_STATE(109)] = 4410,
  [SMALL_STATE(110)] = 4448,
  [SMALL_STATE(111)] = 4480,
  [SMALL_STATE(112)] = 4518,
  [SMALL_STATE(113)] = 4550,
  [SMALL_STATE(114)] = 4582,
  [SMALL_STATE(115)] = 4614,
  [SMALL_STATE(116)] = 4646,
  [SMALL_STATE(117)] = 4678,
  [SMALL_STATE(118)] = 4710,
  [SMALL_STATE(119)] = 4742,
  [SMALL_STATE(120)] = 4774,
  [SMALL_STATE(121)] = 4809,
  [SMALL_STATE(122)] = 4841,
  [SMALL_STATE(123)] = 4873,
  [SMALL_STATE(124)] = 4905,
  [SMALL_STATE(125)] = 4921,
  [SMALL_STATE(126)] = 4953,
  [SMALL_STATE(127)] = 4985,
  [SMALL_STATE(128)] = 5017,
  [SMALL_STATE(129)] = 5033,
  [SMALL_STATE(130)] = 5062,
  [SMALL_STATE(131)] = 5091,
  [SMALL_STATE(132)] = 5120,
  [SMALL_STATE(133)] = 5149,
  [SMALL_STATE(134)] = 5176,
  [SMALL_STATE(135)] = 5205,
  [SMALL_STATE(136)] = 5234,
  [SMALL_STATE(137)] = 5254,
  [SMALL_STATE(138)] = 5278,
  [SMALL_STATE(139)] = 5296,
  [SMALL_STATE(140)] = 5319,
  [SMALL_STATE(141)] = 5342,
  [SMALL_STATE(142)] = 5365,
  [SMALL_STATE(143)] = 5388,
  [SMALL_STATE(144)] = 5411,
  [SMALL_STATE(145)] = 5434,
  [SMALL_STATE(146)] = 5457,
  [SMALL_STATE(147)] = 5480,
  [SMALL_STATE(148)] = 5503,
  [SMALL_STATE(149)] = 5524,
  [SMALL_STATE(150)] = 5547,
  [SMALL_STATE(151)] = 5570,
  [SMALL_STATE(152)] = 5593,
  [SMALL_STATE(153)] = 5616,
  [SMALL_STATE(154)] = 5639,
  [SMALL_STATE(155)] = 5660,
  [SMALL_STATE(156)] = 5683,
  [SMALL_STATE(157)] = 5706,
  [SMALL_STATE(158)] = 5719,
  [SMALL_STATE(159)] = 5742,
  [SMALL_STATE(160)] = 5765,
  [SMALL_STATE(161)] = 5788,
  [SMALL_STATE(162)] = 5809,
  [SMALL_STATE(163)] = 5830,
  [SMALL_STATE(164)] = 5853,
  [SMALL_STATE(165)] = 5874,
  [SMALL_STATE(166)] = 5895,
  [SMALL_STATE(167)] = 5918,
  [SMALL_STATE(168)] = 5941,
  [SMALL_STATE(169)] = 5953,
  [SMALL_STATE(170)] = 5975,
  [SMALL_STATE(171)] = 5991,
  [SMALL_STATE(172)] = 6013,
  [SMALL_STATE(173)] = 6035,
  [SMALL_STATE(174)] = 6055,
  [SMALL_STATE(175)] = 6077,
  [SMALL_STATE(176)] = 6097,
  [SMALL_STATE(177)] = 6111,
  [SMALL_STATE(178)] = 6127,
  [SMALL_STATE(179)] = 6147,
  [SMALL_STATE(180)] = 6169,
  [SMALL_STATE(181)] = 6181,
  [SMALL_STATE(182)] = 6201,
  [SMALL_STATE(183)] = 6223,
  [SMALL_STATE(184)] = 6235,
  [SMALL_STATE(185)] = 6257,
  [SMALL_STATE(186)] = 6277,
  [SMALL_STATE(187)] = 6299,
  [SMALL_STATE(188)] = 6319,
  [SMALL_STATE(189)] = 6329,
  [SMALL_STATE(190)] = 6349,
  [SMALL_STATE(191)] = 6371,
  [SMALL_STATE(192)] = 6391,
  [SMALL_STATE(193)] = 6411,
  [SMALL_STATE(194)] = 6433,
  [SMALL_STATE(195)] = 6453,
  [SMALL_STATE(196)] = 6469,
  [SMALL_STATE(197)] = 6485,
  [SMALL_STATE(198)] = 6501,
  [SMALL_STATE(199)] = 6523,
  [SMALL_STATE(200)] = 6539,
  [SMALL_STATE(201)] = 6550,
  [SMALL_STATE(202)] = 6563,
  [SMALL_STATE(203)] = 6580,
  [SMALL_STATE(204)] = 6597,
  [SMALL_STATE(205)] = 6614,
  [SMALL_STATE(206)] = 6631,
  [SMALL_STATE(207)] = 6648,
  [SMALL_STATE(208)] = 6665,
  [SMALL_STATE(209)] = 6682,
  [SMALL_STATE(210)] = 6699,
  [SMALL_STATE(211)] = 6716,
  [SMALL_STATE(212)] = 6727,
  [SMALL_STATE(213)] = 6744,
  [SMALL_STATE(214)] = 6755,
  [SMALL_STATE(215)] = 6772,
  [SMALL_STATE(216)] = 6789,
  [SMALL_STATE(217)] = 6806,
  [SMALL_STATE(218)] = 6821,
  [SMALL_STATE(219)] = 6832,
  [SMALL_STATE(220)] = 6851,
  [SMALL_STATE(221)] = 6866,
  [SMALL_STATE(222)] = 6883,
  [SMALL_STATE(223)] = 6892,
  [SMALL_STATE(224)] = 6909,
  [SMALL_STATE(225)] = 6928,
  [SMALL_STATE(226)] = 6942,
  [SMALL_STATE(227)] = 6956,
  [SMALL_STATE(228)] = 6968,
  [SMALL_STATE(229)] = 6980,
  [SMALL_STATE(230)] = 6992,
  [SMALL_STATE(231)] = 7004,
  [SMALL_STATE(232)] = 7012,
  [SMALL_STATE(233)] = 7026,
  [SMALL_STATE(234)] = 7038,
  [SMALL_STATE(235)] = 7052,
  [SMALL_STATE(236)] = 7060,
  [SMALL_STATE(237)] = 7072,
  [SMALL_STATE(238)] = 7086,
  [SMALL_STATE(239)] = 7100,
  [SMALL_STATE(240)] = 7114,
  [SMALL_STATE(241)] = 7126,
  [SMALL_STATE(242)] = 7140,
  [SMALL_STATE(243)] = 7154,
  [SMALL_STATE(244)] = 7168,
  [SMALL_STATE(245)] = 7182,
  [SMALL_STATE(246)] = 7196,
  [SMALL_STATE(247)] = 7208,
  [SMALL_STATE(248)] = 7222,
  [SMALL_STATE(249)] = 7234,
  [SMALL_STATE(250)] = 7248,
  [SMALL_STATE(251)] = 7262,
  [SMALL_STATE(252)] = 7270,
  [SMALL_STATE(253)] = 7280,
  [SMALL_STATE(254)] = 7292,
  [SMALL_STATE(255)] = 7303,
  [SMALL_STATE(256)] = 7316,
  [SMALL_STATE(257)] = 7327,
  [SMALL_STATE(258)] = 7338,
  [SMALL_STATE(259)] = 7349,
  [SMALL_STATE(260)] = 7360,
  [SMALL_STATE(261)] = 7367,
  [SMALL_STATE(262)] = 7374,
  [SMALL_STATE(263)] = 7385,
  [SMALL_STATE(264)] = 7396,
  [SMALL_STATE(265)] = 7407,
  [SMALL_STATE(266)] = 7418,
  [SMALL_STATE(267)] = 7429,
  [SMALL_STATE(268)] = 7440,
  [SMALL_STATE(269)] = 7451,
  [SMALL_STATE(270)] = 7462,
  [SMALL_STATE(271)] = 7471,
  [SMALL_STATE(272)] = 7482,
  [SMALL_STATE(273)] = 7489,
  [SMALL_STATE(274)] = 7500,
  [SMALL_STATE(275)] = 7511,
  [SMALL_STATE(276)] = 7522,
  [SMALL_STATE(277)] = 7533,
  [SMALL_STATE(278)] = 7544,
  [SMALL_STATE(279)] = 7555,
  [SMALL_STATE(280)] = 7566,
  [SMALL_STATE(281)] = 7577,
  [SMALL_STATE(282)] = 7588,
  [SMALL_STATE(283)] = 7599,
  [SMALL_STATE(284)] = 7610,
  [SMALL_STATE(285)] = 7621,
  [SMALL_STATE(286)] = 7632,
  [SMALL_STATE(287)] = 7643,
  [SMALL_STATE(288)] = 7654,
  [SMALL_STATE(289)] = 7665,
  [SMALL_STATE(290)] = 7676,
  [SMALL_STATE(291)] = 7687,
  [SMALL_STATE(292)] = 7698,
  [SMALL_STATE(293)] = 7709,
  [SMALL_STATE(294)] = 7720,
  [SMALL_STATE(295)] = 7731,
  [SMALL_STATE(296)] = 7740,
  [SMALL_STATE(297)] = 7749,
  [SMALL_STATE(298)] = 7760,
  [SMALL_STATE(299)] = 7771,
  [SMALL_STATE(300)] = 7778,
  [SMALL_STATE(301)] = 7789,
  [SMALL_STATE(302)] = 7796,
  [SMALL_STATE(303)] = 7805,
  [SMALL_STATE(304)] = 7816,
  [SMALL_STATE(305)] = 7825,
  [SMALL_STATE(306)] = 7836,
  [SMALL_STATE(307)] = 7845,
  [SMALL_STATE(308)] = 7856,
  [SMALL_STATE(309)] = 7867,
  [SMALL_STATE(310)] = 7874,
  [SMALL_STATE(311)] = 7881,
  [SMALL_STATE(312)] = 7892,
  [SMALL_STATE(313)] = 7901,
  [SMALL_STATE(314)] = 7912,
  [SMALL_STATE(315)] = 7923,
  [SMALL_STATE(316)] = 7934,
  [SMALL_STATE(317)] = 7945,
  [SMALL_STATE(318)] = 7956,
  [SMALL_STATE(319)] = 7967,
  [SMALL_STATE(320)] = 7978,
  [SMALL_STATE(321)] = 7989,
  [SMALL_STATE(322)] = 8000,
  [SMALL_STATE(323)] = 8011,
  [SMALL_STATE(324)] = 8022,
  [SMALL_STATE(325)] = 8033,
  [SMALL_STATE(326)] = 8044,
  [SMALL_STATE(327)] = 8052,
  [SMALL_STATE(328)] = 8060,
  [SMALL_STATE(329)] = 8068,
  [SMALL_STATE(330)] = 8076,
  [SMALL_STATE(331)] = 8084,
  [SMALL_STATE(332)] = 8092,
  [SMALL_STATE(333)] = 8102,
  [SMALL_STATE(334)] = 8112,
  [SMALL_STATE(335)] = 8122,
  [SMALL_STATE(336)] = 8132,
  [SMALL_STATE(337)] = 8140,
  [SMALL_STATE(338)] = 8150,
  [SMALL_STATE(339)] = 8158,
  [SMALL_STATE(340)] = 8166,
  [SMALL_STATE(341)] = 8174,
  [SMALL_STATE(342)] = 8182,
  [SMALL_STATE(343)] = 8192,
  [SMALL_STATE(344)] = 8202,
  [SMALL_STATE(345)] = 8210,
  [SMALL_STATE(346)] = 8218,
  [SMALL_STATE(347)] = 8228,
  [SMALL_STATE(348)] = 8238,
  [SMALL_STATE(349)] = 8246,
  [SMALL_STATE(350)] = 8256,
  [SMALL_STATE(351)] = 8264,
  [SMALL_STATE(352)] = 8272,
  [SMALL_STATE(353)] = 8282,
  [SMALL_STATE(354)] = 8290,
  [SMALL_STATE(355)] = 8298,
  [SMALL_STATE(356)] = 8306,
  [SMALL_STATE(357)] = 8314,
  [SMALL_STATE(358)] = 8322,
  [SMALL_STATE(359)] = 8330,
  [SMALL_STATE(360)] = 8338,
  [SMALL_STATE(361)] = 8348,
  [SMALL_STATE(362)] = 8355,
  [SMALL_STATE(363)] = 8362,
  [SMALL_STATE(364)] = 8367,
  [SMALL_STATE(365)] = 8374,
  [SMALL_STATE(366)] = 8381,
  [SMALL_STATE(367)] = 8388,
  [SMALL_STATE(368)] = 8392,
  [SMALL_STATE(369)] = 8396,
  [SMALL_STATE(370)] = 8400,
  [SMALL_STATE(371)] = 8404,
  [SMALL_STATE(372)] = 8408,
  [SMALL_STATE(373)] = 8412,
  [SMALL_STATE(374)] = 8416,
  [SMALL_STATE(375)] = 8420,
  [SMALL_STATE(376)] = 8424,
  [SMALL_STATE(377)] = 8428,
  [SMALL_STATE(378)] = 8432,
  [SMALL_STATE(379)] = 8436,
  [SMALL_STATE(380)] = 8440,
  [SMALL_STATE(381)] = 8444,
  [SMALL_STATE(382)] = 8448,
  [SMALL_STATE(383)] = 8452,
  [SMALL_STATE(384)] = 8456,
  [SMALL_STATE(385)] = 8460,
  [SMALL_STATE(386)] = 8464,
  [SMALL_STATE(387)] = 8468,
  [SMALL_STATE(388)] = 8472,
  [SMALL_STATE(389)] = 8476,
  [SMALL_STATE(390)] = 8480,
  [SMALL_STATE(391)] = 8484,
  [SMALL_STATE(392)] = 8488,
  [SMALL_STATE(393)] = 8492,
  [SMALL_STATE(394)] = 8496,
  [SMALL_STATE(395)] = 8500,
  [SMALL_STATE(396)] = 8504,
  [SMALL_STATE(397)] = 8508,
  [SMALL_STATE(398)] = 8512,
  [SMALL_STATE(399)] = 8516,
  [SMALL_STATE(400)] = 8520,
  [SMALL_STATE(401)] = 8524,
  [SMALL_STATE(402)] = 8528,
  [SMALL_STATE(403)] = 8532,
  [SMALL_STATE(404)] = 8536,
  [SMALL_STATE(405)] = 8540,
  [SMALL_STATE(406)] = 8544,
  [SMALL_STATE(407)] = 8548,
  [SMALL_STATE(408)] = 8552,
  [SMALL_STATE(409)] = 8556,
  [SMALL_STATE(410)] = 8560,
  [SMALL_STATE(411)] = 8564,
  [SMALL_STATE(412)] = 8568,
  [SMALL_STATE(413)] = 8572,
  [SMALL_STATE(414)] = 8576,
  [SMALL_STATE(415)] = 8580,
  [SMALL_STATE(416)] = 8584,
  [SMALL_STATE(417)] = 8588,
  [SMALL_STATE(418)] = 8592,
  [SMALL_STATE(419)] = 8596,
  [SMALL_STATE(420)] = 8600,
  [SMALL_STATE(421)] = 8604,
  [SMALL_STATE(422)] = 8608,
  [SMALL_STATE(423)] = 8612,
  [SMALL_STATE(424)] = 8616,
  [SMALL_STATE(425)] = 8620,
  [SMALL_STATE(426)] = 8624,
  [SMALL_STATE(427)] = 8628,
  [SMALL_STATE(428)] = 8632,
  [SMALL_STATE(429)] = 8636,
  [SMALL_STATE(430)] = 8640,
  [SMALL_STATE(431)] = 8644,
  [SMALL_STATE(432)] = 8648,
  [SMALL_STATE(433)] = 8652,
  [SMALL_STATE(434)] = 8656,
  [SMALL_STATE(435)] = 8660,
  [SMALL_STATE(436)] = 8664,
  [SMALL_STATE(437)] = 8668,
  [SMALL_STATE(438)] = 8672,
  [SMALL_STATE(439)] = 8676,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(403),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(403),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(348),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(415),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(341),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 4, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automated_xact, 5, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automated_xact, 5, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 8, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 8, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 6, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 6, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 10, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 10, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_quantity, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_quantity, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 15, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 15, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 16, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 16, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 5, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 6, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 6, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 6, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 4, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 7, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 7, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 7, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [702] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 3, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 3, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 4, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 4, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 5, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 5, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 3, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 3, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 1, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [810] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1, 0, 0),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [845] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_date, 2, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 2, 0, 0),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3, 0, 0),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4, 0, 0),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, 0, 2),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [940] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7, 0, 0),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2, 0, 0),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6, 0, 0),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [981] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, 0, 1),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3, 0, 0),
  [1004] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0), SHIFT_REPEAT(314),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, 0, 0),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, 0, 0),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1029] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [1032] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(323),
  [1035] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0), SHIFT_REPEAT(346),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1, 0, 0),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4, 0, 0),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1, 0, 0),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5, 0, 0),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3, 0, 0),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1, 0, 0),
  [1153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3, 0, 0),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5, 0, 0),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10, 0, 0),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3, 0, 0),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6, 0, 0),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1, 0, 0),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7, 0, 0),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1, 0, 0),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9, 0, 0),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5, 0, 0),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
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
