#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 616
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 133
#define ALIAS_COUNT 2
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 30
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 88

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_CR = 3,
  sym__eol = 4,
  aux_sym__any_token1 = 5,
  aux_sym__org_stars_token1 = 6,
  aux_sym_headline_token1 = 7,
  sym__indent = 8,
  sym_atat = 9,
  sym_at = 10,
  anon_sym_STAR = 11,
  sym_slash = 12,
  sym_plus = 13,
  sym_minus = 14,
  sym_flag = 15,
  sym__none = 16,
  sym_bool = 17,
  sym_date = 18,
  sym_account = 19,
  sym_currency = 20,
  sym_string = 21,
  sym_number = 22,
  sym_tag = 23,
  sym_link = 24,
  anon_sym_txn = 25,
  anon_sym_POUND = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  sym_key = 29,
  anon_sym_COLON = 30,
  anon_sym_pushtag = 31,
  anon_sym_poptag = 32,
  anon_sym_pushmeta = 33,
  anon_sym_popmeta = 34,
  anon_sym_open = 35,
  anon_sym_COMMA = 36,
  anon_sym_close = 37,
  anon_sym_commodity = 38,
  anon_sym_pad = 39,
  anon_sym_balance = 40,
  anon_sym_TILDE = 41,
  anon_sym_LBRACE = 42,
  anon_sym_RBRACE = 43,
  anon_sym_LBRACE_LBRACE = 44,
  anon_sym_RBRACE_RBRACE = 45,
  anon_sym_price = 46,
  anon_sym_event = 47,
  anon_sym_query = 48,
  anon_sym_note = 49,
  anon_sym_document = 50,
  anon_sym_custom = 51,
  anon_sym_option = 52,
  anon_sym_include = 53,
  anon_sym_plugin = 54,
  anon_sym_SEMI = 55,
  sym__UTF_8_1 = 56,
  aux_sym__UTF_8_2_token1 = 57,
  aux_sym__UTF_8_3_token1 = 58,
  aux_sym__UTF_8_3_token2 = 59,
  aux_sym__UTF_8_3_token3 = 60,
  aux_sym__UTF_8_3_token4 = 61,
  aux_sym__UTF_8_4_token1 = 62,
  aux_sym__UTF_8_4_token2 = 63,
  aux_sym__UTF_8_4_token3 = 64,
  sym__stars = 65,
  sym__sectionend = 66,
  sym__eof = 67,
  sym_file = 68,
  sym__nl = 69,
  sym__any = 70,
  sym_section = 71,
  sym__org_stars = 72,
  sym_headline = 73,
  sym_item = 74,
  sym_asterisk = 75,
  sym_txn = 76,
  sym__number_expr = 77,
  sym__paren__number_expr = 78,
  sym_unary_number_expr = 79,
  sym_binary_number_expr = 80,
  sym__txn_strings = 81,
  sym_tags_links = 82,
  sym_transaction = 83,
  sym_optflag = 84,
  sym_price_annotation = 85,
  sym_posting = 86,
  sym_value = 87,
  sym_key_value = 88,
  sym__key_value_line = 89,
  aux_sym__key_value_list = 90,
  sym_pushtag = 91,
  sym_poptag = 92,
  sym_pushmeta = 93,
  sym_popmeta = 94,
  sym_open = 95,
  sym_opt_booking = 96,
  sym_close = 97,
  sym_commodity = 98,
  sym_pad = 99,
  sym_balance = 100,
  sym_amount = 101,
  sym_amount_tolerance = 102,
  sym_compound_amount = 103,
  sym_incomplete_amount = 104,
  sym_cost_spec = 105,
  sym__cost_comp_list = 106,
  sym_cost_comp = 107,
  sym_price = 108,
  sym_event = 109,
  sym_query = 110,
  sym_note = 111,
  sym_filename = 112,
  sym_document = 113,
  sym_custom_value = 114,
  sym_custom = 115,
  sym__entry = 116,
  sym_option = 117,
  sym_include = 118,
  sym_plugin = 119,
  sym__directive = 120,
  sym__declarations = 121,
  sym_comment = 122,
  sym__skipped_lines = 123,
  aux_sym_file_repeat1 = 124,
  aux_sym_section_repeat1 = 125,
  aux_sym_section_repeat2 = 126,
  aux_sym_tags_links_repeat1 = 127,
  aux_sym_transaction_repeat1 = 128,
  aux_sym_open_repeat1 = 129,
  aux_sym_open_repeat2 = 130,
  aux_sym__cost_comp_list_repeat1 = 131,
  aux_sym_custom_repeat1 = 132,
  alias_sym_narration = 133,
  alias_sym_payee = 134,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [sym__eol] = "_eol",
  [aux_sym__any_token1] = "_any_token1",
  [aux_sym__org_stars_token1] = "_org_stars_token1",
  [aux_sym_headline_token1] = "headline_token1",
  [sym__indent] = "_indent",
  [sym_atat] = "atat",
  [sym_at] = "at",
  [anon_sym_STAR] = "*",
  [sym_slash] = "slash",
  [sym_plus] = "plus",
  [sym_minus] = "minus",
  [sym_flag] = "flag",
  [sym__none] = "_none",
  [sym_bool] = "bool",
  [sym_date] = "date",
  [sym_account] = "account",
  [sym_currency] = "currency",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_tag] = "tag",
  [sym_link] = "link",
  [anon_sym_txn] = "txn",
  [anon_sym_POUND] = "#",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_key] = "key",
  [anon_sym_COLON] = ":",
  [anon_sym_pushtag] = "pushtag",
  [anon_sym_poptag] = "poptag",
  [anon_sym_pushmeta] = "pushmeta",
  [anon_sym_popmeta] = "popmeta",
  [anon_sym_open] = "open",
  [anon_sym_COMMA] = ",",
  [anon_sym_close] = "close",
  [anon_sym_commodity] = "commodity",
  [anon_sym_pad] = "pad",
  [anon_sym_balance] = "balance",
  [anon_sym_TILDE] = "~",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_price] = "price",
  [anon_sym_event] = "event",
  [anon_sym_query] = "query",
  [anon_sym_note] = "note",
  [anon_sym_document] = "document",
  [anon_sym_custom] = "custom",
  [anon_sym_option] = "option",
  [anon_sym_include] = "include",
  [anon_sym_plugin] = "plugin",
  [anon_sym_SEMI] = ";",
  [sym__UTF_8_1] = "_UTF_8_1",
  [aux_sym__UTF_8_2_token1] = "_UTF_8_2_token1",
  [aux_sym__UTF_8_3_token1] = "_UTF_8_3_token1",
  [aux_sym__UTF_8_3_token2] = "_UTF_8_3_token2",
  [aux_sym__UTF_8_3_token3] = "_UTF_8_3_token3",
  [aux_sym__UTF_8_3_token4] = "_UTF_8_3_token4",
  [aux_sym__UTF_8_4_token1] = "_UTF_8_4_token1",
  [aux_sym__UTF_8_4_token2] = "_UTF_8_4_token2",
  [aux_sym__UTF_8_4_token3] = "_UTF_8_4_token3",
  [sym__stars] = "_stars",
  [sym__sectionend] = "_sectionend",
  [sym__eof] = "_eof",
  [sym_file] = "file",
  [sym__nl] = "_nl",
  [sym__any] = "_any",
  [sym_section] = "section",
  [sym__org_stars] = "_org_stars",
  [sym_headline] = "headline",
  [sym_item] = "item",
  [sym_asterisk] = "asterisk",
  [sym_txn] = "txn",
  [sym__number_expr] = "_number_expr",
  [sym__paren__number_expr] = "_paren__number_expr",
  [sym_unary_number_expr] = "unary_number_expr",
  [sym_binary_number_expr] = "binary_number_expr",
  [sym__txn_strings] = "_txn_strings",
  [sym_tags_links] = "tags_links",
  [sym_transaction] = "transaction",
  [sym_optflag] = "optflag",
  [sym_price_annotation] = "price_annotation",
  [sym_posting] = "posting",
  [sym_value] = "value",
  [sym_key_value] = "key_value",
  [sym__key_value_line] = "_key_value_line",
  [aux_sym__key_value_list] = "_key_value_list",
  [sym_pushtag] = "pushtag",
  [sym_poptag] = "poptag",
  [sym_pushmeta] = "pushmeta",
  [sym_popmeta] = "popmeta",
  [sym_open] = "open",
  [sym_opt_booking] = "opt_booking",
  [sym_close] = "close",
  [sym_commodity] = "commodity",
  [sym_pad] = "pad",
  [sym_balance] = "balance",
  [sym_amount] = "amount",
  [sym_amount_tolerance] = "amount_tolerance",
  [sym_compound_amount] = "compound_amount",
  [sym_incomplete_amount] = "incomplete_amount",
  [sym_cost_spec] = "cost_spec",
  [sym__cost_comp_list] = "_cost_comp_list",
  [sym_cost_comp] = "cost_comp",
  [sym_price] = "price",
  [sym_event] = "event",
  [sym_query] = "query",
  [sym_note] = "note",
  [sym_filename] = "filename",
  [sym_document] = "document",
  [sym_custom_value] = "custom_value",
  [sym_custom] = "custom",
  [sym__entry] = "_entry",
  [sym_option] = "option",
  [sym_include] = "include",
  [sym_plugin] = "plugin",
  [sym__directive] = "_directive",
  [sym__declarations] = "_declarations",
  [sym_comment] = "comment",
  [sym__skipped_lines] = "_skipped_lines",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_section_repeat2] = "section_repeat2",
  [aux_sym_tags_links_repeat1] = "tags_links_repeat1",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
  [aux_sym_open_repeat1] = "open_repeat1",
  [aux_sym_open_repeat2] = "open_repeat2",
  [aux_sym__cost_comp_list_repeat1] = "_cost_comp_list_repeat1",
  [aux_sym_custom_repeat1] = "custom_repeat1",
  [alias_sym_narration] = "narration",
  [alias_sym_payee] = "payee",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [sym__eol] = sym__eol,
  [aux_sym__any_token1] = aux_sym__any_token1,
  [aux_sym__org_stars_token1] = aux_sym__org_stars_token1,
  [aux_sym_headline_token1] = aux_sym_headline_token1,
  [sym__indent] = sym__indent,
  [sym_atat] = sym_atat,
  [sym_at] = sym_at,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_slash] = sym_slash,
  [sym_plus] = sym_plus,
  [sym_minus] = sym_minus,
  [sym_flag] = sym_flag,
  [sym__none] = sym__none,
  [sym_bool] = sym_bool,
  [sym_date] = sym_date,
  [sym_account] = sym_account,
  [sym_currency] = sym_currency,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_tag] = sym_tag,
  [sym_link] = sym_link,
  [anon_sym_txn] = anon_sym_txn,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_key] = sym_key,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_pushtag] = anon_sym_pushtag,
  [anon_sym_poptag] = anon_sym_poptag,
  [anon_sym_pushmeta] = anon_sym_pushmeta,
  [anon_sym_popmeta] = anon_sym_popmeta,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_pad] = anon_sym_pad,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_price] = anon_sym_price,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_document] = anon_sym_document,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_plugin] = anon_sym_plugin,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__UTF_8_1] = sym__UTF_8_1,
  [aux_sym__UTF_8_2_token1] = aux_sym__UTF_8_2_token1,
  [aux_sym__UTF_8_3_token1] = aux_sym__UTF_8_3_token1,
  [aux_sym__UTF_8_3_token2] = aux_sym__UTF_8_3_token2,
  [aux_sym__UTF_8_3_token3] = aux_sym__UTF_8_3_token3,
  [aux_sym__UTF_8_3_token4] = aux_sym__UTF_8_3_token4,
  [aux_sym__UTF_8_4_token1] = aux_sym__UTF_8_4_token1,
  [aux_sym__UTF_8_4_token2] = aux_sym__UTF_8_4_token2,
  [aux_sym__UTF_8_4_token3] = aux_sym__UTF_8_4_token3,
  [sym__stars] = sym__stars,
  [sym__sectionend] = sym__sectionend,
  [sym__eof] = sym__eof,
  [sym_file] = sym_file,
  [sym__nl] = sym__nl,
  [sym__any] = sym__any,
  [sym_section] = sym_section,
  [sym__org_stars] = sym__org_stars,
  [sym_headline] = sym_headline,
  [sym_item] = sym_item,
  [sym_asterisk] = sym_asterisk,
  [sym_txn] = sym_txn,
  [sym__number_expr] = sym__number_expr,
  [sym__paren__number_expr] = sym__paren__number_expr,
  [sym_unary_number_expr] = sym_unary_number_expr,
  [sym_binary_number_expr] = sym_binary_number_expr,
  [sym__txn_strings] = sym__txn_strings,
  [sym_tags_links] = sym_tags_links,
  [sym_transaction] = sym_transaction,
  [sym_optflag] = sym_optflag,
  [sym_price_annotation] = sym_price_annotation,
  [sym_posting] = sym_posting,
  [sym_value] = sym_value,
  [sym_key_value] = sym_key_value,
  [sym__key_value_line] = sym__key_value_line,
  [aux_sym__key_value_list] = aux_sym__key_value_list,
  [sym_pushtag] = sym_pushtag,
  [sym_poptag] = sym_poptag,
  [sym_pushmeta] = sym_pushmeta,
  [sym_popmeta] = sym_popmeta,
  [sym_open] = sym_open,
  [sym_opt_booking] = sym_opt_booking,
  [sym_close] = sym_close,
  [sym_commodity] = sym_commodity,
  [sym_pad] = sym_pad,
  [sym_balance] = sym_balance,
  [sym_amount] = sym_amount,
  [sym_amount_tolerance] = sym_amount_tolerance,
  [sym_compound_amount] = sym_compound_amount,
  [sym_incomplete_amount] = sym_incomplete_amount,
  [sym_cost_spec] = sym_cost_spec,
  [sym__cost_comp_list] = sym__cost_comp_list,
  [sym_cost_comp] = sym_cost_comp,
  [sym_price] = sym_price,
  [sym_event] = sym_event,
  [sym_query] = sym_query,
  [sym_note] = sym_note,
  [sym_filename] = sym_filename,
  [sym_document] = sym_document,
  [sym_custom_value] = sym_custom_value,
  [sym_custom] = sym_custom,
  [sym__entry] = sym__entry,
  [sym_option] = sym_option,
  [sym_include] = sym_include,
  [sym_plugin] = sym_plugin,
  [sym__directive] = sym__directive,
  [sym__declarations] = sym__declarations,
  [sym_comment] = sym_comment,
  [sym__skipped_lines] = sym__skipped_lines,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_section_repeat2] = aux_sym_section_repeat2,
  [aux_sym_tags_links_repeat1] = aux_sym_tags_links_repeat1,
  [aux_sym_transaction_repeat1] = aux_sym_transaction_repeat1,
  [aux_sym_open_repeat1] = aux_sym_open_repeat1,
  [aux_sym_open_repeat2] = aux_sym_open_repeat2,
  [aux_sym__cost_comp_list_repeat1] = aux_sym__cost_comp_list_repeat1,
  [aux_sym_custom_repeat1] = aux_sym_custom_repeat1,
  [alias_sym_narration] = alias_sym_narration,
  [alias_sym_payee] = alias_sym_payee,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__any_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__org_stars_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_headline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym_atat] = {
    .visible = true,
    .named = true,
  },
  [sym_at] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_slash] = {
    .visible = true,
    .named = true,
  },
  [sym_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym__none] = {
    .visible = false,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_currency] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_txn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
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
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushtag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poptag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_price] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_document] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plugin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__UTF_8_1] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__UTF_8_2_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__UTF_8_3_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__UTF_8_3_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__UTF_8_3_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__UTF_8_3_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__UTF_8_4_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__UTF_8_4_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__UTF_8_4_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__stars] = {
    .visible = false,
    .named = true,
  },
  [sym__sectionend] = {
    .visible = false,
    .named = true,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__nl] = {
    .visible = false,
    .named = true,
  },
  [sym__any] = {
    .visible = false,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__org_stars] = {
    .visible = false,
    .named = true,
  },
  [sym_headline] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_asterisk] = {
    .visible = true,
    .named = true,
  },
  [sym_txn] = {
    .visible = true,
    .named = true,
  },
  [sym__number_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__paren__number_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_number_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_number_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__txn_strings] = {
    .visible = false,
    .named = true,
  },
  [sym_tags_links] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_optflag] = {
    .visible = true,
    .named = true,
  },
  [sym_price_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym__key_value_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__key_value_list] = {
    .visible = false,
    .named = false,
  },
  [sym_pushtag] = {
    .visible = true,
    .named = true,
  },
  [sym_poptag] = {
    .visible = true,
    .named = true,
  },
  [sym_pushmeta] = {
    .visible = true,
    .named = true,
  },
  [sym_popmeta] = {
    .visible = true,
    .named = true,
  },
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_booking] = {
    .visible = true,
    .named = true,
  },
  [sym_close] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_pad] = {
    .visible = true,
    .named = true,
  },
  [sym_balance] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_amount_tolerance] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_incomplete_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_cost_spec] = {
    .visible = true,
    .named = true,
  },
  [sym__cost_comp_list] = {
    .visible = false,
    .named = true,
  },
  [sym_cost_comp] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_event] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_value] = {
    .visible = true,
    .named = true,
  },
  [sym_custom] = {
    .visible = true,
    .named = true,
  },
  [sym__entry] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__declarations] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__skipped_lines] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_links_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transaction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_open_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cost_comp_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_narration] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_payee] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_account = 1,
  field_amount = 2,
  field_comment = 3,
  field_cost_comp_list = 4,
  field_cost_spec = 5,
  field_currencies = 6,
  field_currency = 7,
  field_custom_value_list = 8,
  field_date = 9,
  field_desc = 10,
  field_filename = 11,
  field_from_account = 12,
  field_headline = 13,
  field_item = 14,
  field_key = 15,
  field_name = 16,
  field_narration = 17,
  field_note = 18,
  field_opt_booking = 19,
  field_optflag = 20,
  field_payee = 21,
  field_per = 22,
  field_price_annotation = 23,
  field_query = 24,
  field_subsection = 25,
  field_tags_links = 26,
  field_total = 27,
  field_txn = 28,
  field_type = 29,
  field_value = 30,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_account] = "account",
  [field_amount] = "amount",
  [field_comment] = "comment",
  [field_cost_comp_list] = "cost_comp_list",
  [field_cost_spec] = "cost_spec",
  [field_currencies] = "currencies",
  [field_currency] = "currency",
  [field_custom_value_list] = "custom_value_list",
  [field_date] = "date",
  [field_desc] = "desc",
  [field_filename] = "filename",
  [field_from_account] = "from_account",
  [field_headline] = "headline",
  [field_item] = "item",
  [field_key] = "key",
  [field_name] = "name",
  [field_narration] = "narration",
  [field_note] = "note",
  [field_opt_booking] = "opt_booking",
  [field_optflag] = "optflag",
  [field_payee] = "payee",
  [field_per] = "per",
  [field_price_annotation] = "price_annotation",
  [field_query] = "query",
  [field_subsection] = "subsection",
  [field_tags_links] = "tags_links",
  [field_total] = "total",
  [field_txn] = "txn",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 4},
  [12] = {.index = 21, .length = 3},
  [13] = {.index = 24, .length = 3},
  [14] = {.index = 27, .length = 2},
  [15] = {.index = 29, .length = 1},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 3},
  [18] = {.index = 35, .length = 3},
  [19] = {.index = 38, .length = 3},
  [20] = {.index = 41, .length = 3},
  [21] = {.index = 44, .length = 3},
  [22] = {.index = 47, .length = 3},
  [23] = {.index = 50, .length = 3},
  [24] = {.index = 53, .length = 3},
  [25] = {.index = 56, .length = 3},
  [26] = {.index = 59, .length = 3},
  [27] = {.index = 62, .length = 3},
  [28] = {.index = 65, .length = 3},
  [29] = {.index = 68, .length = 5},
  [30] = {.index = 73, .length = 5},
  [31] = {.index = 78, .length = 4},
  [32] = {.index = 82, .length = 4},
  [33] = {.index = 86, .length = 4},
  [34] = {.index = 90, .length = 4},
  [35] = {.index = 94, .length = 4},
  [36] = {.index = 98, .length = 4},
  [37] = {.index = 102, .length = 4},
  [38] = {.index = 106, .length = 1},
  [39] = {.index = 107, .length = 6},
  [40] = {.index = 113, .length = 5},
  [41] = {.index = 118, .length = 1},
  [42] = {.index = 119, .length = 1},
  [43] = {.index = 120, .length = 2},
  [44] = {.index = 122, .length = 2},
  [45] = {.index = 124, .length = 2},
  [46] = {.index = 126, .length = 2},
  [47] = {.index = 128, .length = 2},
  [48] = {.index = 130, .length = 2},
  [49] = {.index = 132, .length = 1},
  [50] = {.index = 133, .length = 2},
  [51] = {.index = 135, .length = 1},
  [52] = {.index = 136, .length = 3},
  [53] = {.index = 139, .length = 3},
  [54] = {.index = 142, .length = 3},
  [55] = {.index = 145, .length = 3},
  [56] = {.index = 148, .length = 3},
  [57] = {.index = 151, .length = 3},
  [58] = {.index = 154, .length = 3},
  [59] = {.index = 157, .length = 2},
  [60] = {.index = 159, .length = 2},
  [61] = {.index = 161, .length = 3},
  [62] = {.index = 164, .length = 3},
  [63] = {.index = 167, .length = 4},
  [64] = {.index = 171, .length = 3},
  [65] = {.index = 174, .length = 3},
  [66] = {.index = 177, .length = 3},
  [67] = {.index = 180, .length = 3},
  [68] = {.index = 183, .length = 4},
  [69] = {.index = 187, .length = 4},
  [70] = {.index = 191, .length = 4},
  [71] = {.index = 195, .length = 3},
  [72] = {.index = 198, .length = 4},
  [73] = {.index = 202, .length = 4},
  [74] = {.index = 206, .length = 4},
  [75] = {.index = 210, .length = 4},
  [76] = {.index = 214, .length = 4},
  [77] = {.index = 218, .length = 4},
  [78] = {.index = 222, .length = 4},
  [79] = {.index = 226, .length = 5},
  [80] = {.index = 231, .length = 4},
  [81] = {.index = 235, .length = 4},
  [82] = {.index = 239, .length = 5},
  [83] = {.index = 244, .length = 5},
  [84] = {.index = 249, .length = 5},
  [85] = {.index = 254, .length = 5},
  [86] = {.index = 259, .length = 5},
  [87] = {.index = 264, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_headline, 0},
  [1] =
    {field_subsection, 0},
  [2] =
    {field_date, 0},
    {field_txn, 1},
  [4] =
    {field_narration, 0},
  [5] =
    {field_headline, 0},
    {field_subsection, 1, .inherited = true},
  [7] =
    {field_subsection, 0, .inherited = true},
    {field_subsection, 1, .inherited = true},
  [9] =
    {field_account, 2},
    {field_date, 0},
  [11] =
    {field_currency, 2},
    {field_date, 0},
  [13] =
    {field_date, 0},
    {field_name, 2},
  [15] =
    {field_narration, 1},
    {field_payee, 0},
  [17] =
    {field_date, 0},
    {field_narration, 2, .inherited = true},
    {field_payee, 2, .inherited = true},
    {field_txn, 1},
  [21] =
    {field_date, 0},
    {field_tags_links, 2},
    {field_txn, 1},
  [24] =
    {field_comment, 2},
    {field_date, 0},
    {field_txn, 1},
  [27] =
    {field_key, 1},
    {field_value, 2},
  [29] =
    {field_item, 2},
  [30] =
    {field_headline, 0},
    {field_subsection, 2, .inherited = true},
  [32] =
    {field_account, 2},
    {field_date, 0},
    {field_opt_booking, 3},
  [35] =
    {field_account, 2},
    {field_comment, 3},
    {field_date, 0},
  [38] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
  [41] =
    {field_comment, 3},
    {field_currency, 2},
    {field_date, 0},
  [44] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
  [47] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
  [50] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
  [53] =
    {field_date, 0},
    {field_desc, 3},
    {field_type, 2},
  [56] =
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [59] =
    {field_account, 2},
    {field_date, 0},
    {field_note, 3},
  [62] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
  [65] =
    {field_custom_value_list, 3},
    {field_date, 0},
    {field_name, 2},
  [68] =
    {field_date, 0},
    {field_narration, 2, .inherited = true},
    {field_payee, 2, .inherited = true},
    {field_tags_links, 3},
    {field_txn, 1},
  [73] =
    {field_comment, 3},
    {field_date, 0},
    {field_narration, 2, .inherited = true},
    {field_payee, 2, .inherited = true},
    {field_txn, 1},
  [78] =
    {field_comment, 3},
    {field_date, 0},
    {field_tags_links, 2},
    {field_txn, 1},
  [82] =
    {field_account, 2},
    {field_comment, 4},
    {field_date, 0},
    {field_opt_booking, 3},
  [86] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
    {field_opt_booking, 4},
  [90] =
    {field_account, 2},
    {field_comment, 4},
    {field_currencies, 3},
    {field_date, 0},
  [94] =
    {field_account, 2},
    {field_comment, 4},
    {field_date, 0},
    {field_from_account, 3},
  [98] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 4},
    {field_date, 0},
  [102] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_links, 4},
  [106] =
    {field_account, 1},
  [107] =
    {field_comment, 4},
    {field_date, 0},
    {field_narration, 2, .inherited = true},
    {field_payee, 2, .inherited = true},
    {field_tags_links, 3},
    {field_txn, 1},
  [113] =
    {field_account, 2},
    {field_comment, 5},
    {field_currencies, 3},
    {field_date, 0},
    {field_opt_booking, 4},
  [118] =
    {field_currency, 0},
  [119] =
    {field_per, 0},
  [120] =
    {field_account, 1},
    {field_amount, 2},
  [122] =
    {field_account, 1},
    {field_cost_spec, 2},
  [124] =
    {field_account, 1},
    {field_comment, 2},
  [126] =
    {field_account, 2},
    {field_optflag, 1},
  [128] =
    {field_account, 1},
    {field_price_annotation, 3},
  [130] =
    {field_account, 1},
    {field_comment, 3},
  [132] =
    {field_currency, 1},
  [133] =
    {field_currency, 1},
    {field_per, 0},
  [135] =
    {field_cost_comp_list, 1},
  [136] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
  [139] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 3},
  [142] =
    {field_account, 1},
    {field_comment, 3},
    {field_cost_spec, 2},
  [145] =
    {field_account, 2},
    {field_amount, 3},
    {field_optflag, 1},
  [148] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_optflag, 1},
  [151] =
    {field_account, 2},
    {field_comment, 3},
    {field_optflag, 1},
  [154] =
    {field_account, 1},
    {field_comment, 4},
    {field_price_annotation, 3},
  [157] =
    {field_currency, 2},
    {field_total, 1},
  [159] =
    {field_currency, 2},
    {field_per, 0},
  [161] =
    {field_account, 1},
    {field_amount, 2},
    {field_price_annotation, 4},
  [164] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 4},
  [167] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 4},
    {field_cost_spec, 3},
  [171] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_price_annotation, 4},
  [174] =
    {field_account, 1},
    {field_comment, 4},
    {field_cost_spec, 2},
  [177] =
    {field_account, 2},
    {field_optflag, 1},
    {field_price_annotation, 4},
  [180] =
    {field_account, 2},
    {field_comment, 4},
    {field_optflag, 1},
  [183] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_optflag, 1},
  [187] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 4},
    {field_optflag, 1},
  [191] =
    {field_account, 2},
    {field_comment, 4},
    {field_cost_spec, 3},
    {field_optflag, 1},
  [195] =
    {field_currency, 3},
    {field_per, 0},
    {field_total, 2},
  [198] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 5},
    {field_price_annotation, 4},
  [202] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 5},
  [206] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 5},
    {field_cost_spec, 3},
  [210] =
    {field_account, 1},
    {field_comment, 5},
    {field_cost_spec, 2},
    {field_price_annotation, 4},
  [214] =
    {field_account, 2},
    {field_comment, 5},
    {field_optflag, 1},
    {field_price_annotation, 4},
  [218] =
    {field_account, 2},
    {field_amount, 3},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [222] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 5},
    {field_optflag, 1},
  [226] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 5},
    {field_cost_spec, 4},
    {field_optflag, 1},
  [231] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [235] =
    {field_account, 2},
    {field_comment, 5},
    {field_cost_spec, 3},
    {field_optflag, 1},
  [239] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 6},
    {field_cost_spec, 3},
    {field_price_annotation, 5},
  [244] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 6},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [249] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_optflag, 1},
    {field_price_annotation, 6},
  [254] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 6},
    {field_cost_spec, 4},
    {field_optflag, 1},
  [259] =
    {field_account, 2},
    {field_comment, 6},
    {field_cost_spec, 3},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [264] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 7},
    {field_cost_spec, 4},
    {field_optflag, 1},
    {field_price_annotation, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_narration,
  },
  [10] = {
    [0] = alias_sym_payee,
    [1] = alias_sym_narration,
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
  [4] = 2,
  [5] = 3,
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
  [20] = 11,
  [21] = 21,
  [22] = 22,
  [23] = 19,
  [24] = 18,
  [25] = 17,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 22,
  [31] = 21,
  [32] = 14,
  [33] = 12,
  [34] = 26,
  [35] = 35,
  [36] = 27,
  [37] = 35,
  [38] = 28,
  [39] = 29,
  [40] = 9,
  [41] = 15,
  [42] = 13,
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
  [55] = 45,
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
  [73] = 44,
  [74] = 74,
  [75] = 75,
  [76] = 67,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 74,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 72,
  [95] = 95,
  [96] = 96,
  [97] = 90,
  [98] = 89,
  [99] = 88,
  [100] = 87,
  [101] = 82,
  [102] = 77,
  [103] = 75,
  [104] = 70,
  [105] = 69,
  [106] = 68,
  [107] = 92,
  [108] = 71,
  [109] = 43,
  [110] = 46,
  [111] = 47,
  [112] = 48,
  [113] = 96,
  [114] = 49,
  [115] = 95,
  [116] = 93,
  [117] = 91,
  [118] = 85,
  [119] = 84,
  [120] = 83,
  [121] = 81,
  [122] = 80,
  [123] = 79,
  [124] = 78,
  [125] = 50,
  [126] = 51,
  [127] = 52,
  [128] = 53,
  [129] = 54,
  [130] = 66,
  [131] = 65,
  [132] = 64,
  [133] = 63,
  [134] = 62,
  [135] = 61,
  [136] = 60,
  [137] = 59,
  [138] = 58,
  [139] = 57,
  [140] = 56,
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
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 141,
  [170] = 170,
  [171] = 168,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 166,
  [183] = 183,
  [184] = 143,
  [185] = 180,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 144,
  [190] = 145,
  [191] = 146,
  [192] = 147,
  [193] = 148,
  [194] = 149,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 150,
  [199] = 151,
  [200] = 152,
  [201] = 153,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 154,
  [206] = 155,
  [207] = 156,
  [208] = 197,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 157,
  [213] = 142,
  [214] = 158,
  [215] = 159,
  [216] = 202,
  [217] = 167,
  [218] = 204,
  [219] = 219,
  [220] = 160,
  [221] = 162,
  [222] = 163,
  [223] = 164,
  [224] = 165,
  [225] = 225,
  [226] = 170,
  [227] = 227,
  [228] = 172,
  [229] = 173,
  [230] = 174,
  [231] = 209,
  [232] = 175,
  [233] = 176,
  [234] = 177,
  [235] = 178,
  [236] = 179,
  [237] = 237,
  [238] = 181,
  [239] = 239,
  [240] = 183,
  [241] = 186,
  [242] = 187,
  [243] = 188,
  [244] = 227,
  [245] = 219,
  [246] = 195,
  [247] = 196,
  [248] = 225,
  [249] = 239,
  [250] = 203,
  [251] = 237,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 253,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 257,
  [265] = 265,
  [266] = 263,
  [267] = 267,
  [268] = 254,
  [269] = 265,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 262,
  [275] = 275,
  [276] = 261,
  [277] = 256,
  [278] = 278,
  [279] = 272,
  [280] = 267,
  [281] = 281,
  [282] = 282,
  [283] = 258,
  [284] = 275,
  [285] = 285,
  [286] = 278,
  [287] = 270,
  [288] = 282,
  [289] = 289,
  [290] = 290,
  [291] = 290,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 294,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 296,
  [302] = 293,
  [303] = 303,
  [304] = 298,
  [305] = 303,
  [306] = 292,
  [307] = 299,
  [308] = 308,
  [309] = 309,
  [310] = 300,
  [311] = 308,
  [312] = 312,
  [313] = 309,
  [314] = 297,
  [315] = 315,
  [316] = 315,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 322,
  [325] = 321,
  [326] = 326,
  [327] = 318,
  [328] = 328,
  [329] = 328,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 331,
  [336] = 334,
  [337] = 337,
  [338] = 333,
  [339] = 337,
  [340] = 332,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 345,
  [347] = 342,
  [348] = 343,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 349,
  [355] = 355,
  [356] = 356,
  [357] = 350,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 359,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 366,
  [371] = 367,
  [372] = 372,
  [373] = 373,
  [374] = 372,
  [375] = 373,
  [376] = 368,
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
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 396,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 399,
  [404] = 404,
  [405] = 397,
  [406] = 406,
  [407] = 407,
  [408] = 400,
  [409] = 391,
  [410] = 389,
  [411] = 392,
  [412] = 412,
  [413] = 413,
  [414] = 402,
  [415] = 412,
  [416] = 416,
  [417] = 407,
  [418] = 418,
  [419] = 404,
  [420] = 401,
  [421] = 421,
  [422] = 422,
  [423] = 406,
  [424] = 413,
  [425] = 422,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 427,
  [431] = 431,
  [432] = 395,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 252,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 440,
  [442] = 260,
  [443] = 259,
  [444] = 444,
  [445] = 285,
  [446] = 439,
  [447] = 447,
  [448] = 438,
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
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 454,
  [487] = 451,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 465,
  [503] = 503,
  [504] = 504,
  [505] = 463,
  [506] = 506,
  [507] = 507,
  [508] = 473,
  [509] = 509,
  [510] = 475,
  [511] = 476,
  [512] = 512,
  [513] = 489,
  [514] = 490,
  [515] = 477,
  [516] = 479,
  [517] = 480,
  [518] = 481,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 491,
  [523] = 500,
  [524] = 509,
  [525] = 525,
  [526] = 495,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 492,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 521,
  [537] = 484,
  [538] = 535,
  [539] = 539,
  [540] = 540,
  [541] = 474,
  [542] = 534,
  [543] = 543,
  [544] = 471,
  [545] = 545,
  [546] = 546,
  [547] = 468,
  [548] = 450,
  [549] = 467,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 466,
  [554] = 462,
  [555] = 555,
  [556] = 488,
  [557] = 531,
  [558] = 452,
  [559] = 559,
  [560] = 498,
  [561] = 561,
  [562] = 512,
  [563] = 528,
  [564] = 564,
  [565] = 543,
  [566] = 566,
  [567] = 546,
  [568] = 551,
  [569] = 569,
  [570] = 552,
  [571] = 564,
  [572] = 566,
  [573] = 573,
  [574] = 573,
  [575] = 575,
  [576] = 575,
  [577] = 577,
  [578] = 577,
  [579] = 579,
  [580] = 580,
  [581] = 579,
  [582] = 582,
  [583] = 583,
  [584] = 482,
  [585] = 494,
  [586] = 503,
  [587] = 472,
  [588] = 464,
  [589] = 504,
  [590] = 459,
  [591] = 458,
  [592] = 532,
  [593] = 483,
  [594] = 485,
  [595] = 507,
  [596] = 525,
  [597] = 527,
  [598] = 550,
  [599] = 529,
  [600] = 580,
  [601] = 555,
  [602] = 559,
  [603] = 561,
  [604] = 582,
  [605] = 583,
  [606] = 539,
  [607] = 461,
  [608] = 460,
  [609] = 449,
  [610] = 493,
  [611] = 496,
  [612] = 497,
  [613] = 499,
  [614] = 501,
  [615] = 506,
};

static inline bool sym_flag_character_set_1(int32_t c) {
  return (c < '?'
    ? (c < '%'
      ? (c < '#'
        ? c == '!'
        : c <= '#')
      : (c <= '&' || c == '*'))
    : (c <= '?' || (c < 'P'
      ? (c < 'M'
        ? c == 'C'
        : c <= 'M')
      : (c <= 'P' || (c >= 'R' && c <= 'U')))));
}

static inline bool sym_account_character_set_1(int32_t c) {
  return (c < 7736
    ? (c < 1012
      ? (c < 439
        ? (c < 330
          ? (c < 284
            ? (c < 262
              ? (c < 192
                ? (c < 178
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= 179 || (c < 188
                    ? c == 185
                    : c <= 190)))
                : (c <= 214 || (c < 258
                  ? (c < 256
                    ? (c >= 216 && c <= 222)
                    : c <= 256)
                  : (c <= 258 || c == 260))))
              : (c <= 262 || (c < 274
                ? (c < 268
                  ? (c < 266
                    ? c == 264
                    : c <= 266)
                  : (c <= 268 || (c < 272
                    ? c == 270
                    : c <= 272)))
                : (c <= 274 || (c < 280
                  ? (c < 278
                    ? c == 276
                    : c <= 278)
                  : (c <= 280 || c == 282))))))
            : (c <= 284 || (c < 306
              ? (c < 296
                ? (c < 290
                  ? (c < 288
                    ? c == 286
                    : c <= 288)
                  : (c <= 290 || (c < 294
                    ? c == 292
                    : c <= 294)))
                : (c <= 296 || (c < 302
                  ? (c < 300
                    ? c == 298
                    : c <= 300)
                  : (c <= 302 || c == 304))))
              : (c <= 306 || (c < 319
                ? (c < 313
                  ? (c < 310
                    ? c == 308
                    : c <= 310)
                  : (c <= 313 || (c < 317
                    ? c == 315
                    : c <= 317)))
                : (c <= 319 || (c < 325
                  ? (c < 323
                    ? c == 321
                    : c <= 323)
                  : (c <= 325 || c == 327))))))))
          : (c <= 330 || (c < 374
            ? (c < 352
              ? (c < 342
                ? (c < 336
                  ? (c < 334
                    ? c == 332
                    : c <= 334)
                  : (c <= 336 || (c < 340
                    ? c == 338
                    : c <= 340)))
                : (c <= 342 || (c < 348
                  ? (c < 346
                    ? c == 344
                    : c <= 346)
                  : (c <= 348 || c == 350))))
              : (c <= 352 || (c < 364
                ? (c < 358
                  ? (c < 356
                    ? c == 354
                    : c <= 356)
                  : (c <= 358 || (c < 362
                    ? c == 360
                    : c <= 362)))
                : (c <= 364 || (c < 370
                  ? (c < 368
                    ? c == 366
                    : c <= 368)
                  : (c <= 370 || c == 372))))))
            : (c <= 374 || (c < 412
              ? (c < 390
                ? (c < 381
                  ? (c < 379
                    ? (c >= 376 && c <= 377)
                    : c <= 379)
                  : (c <= 381 || (c < 388
                    ? (c >= 385 && c <= 386)
                    : c <= 388)))
                : (c <= 391 || (c < 403
                  ? (c < 398
                    ? (c >= 393 && c <= 395)
                    : c <= 401)
                  : (c <= 404 || (c >= 406 && c <= 408)))))
              : (c <= 413 || (c < 425
                ? (c < 420
                  ? (c < 418
                    ? (c >= 415 && c <= 416)
                    : c <= 418)
                  : (c <= 420 || (c >= 422 && c <= 423)))
                : (c <= 425 || (c < 433
                  ? (c < 430
                    ? c == 428
                    : c <= 431)
                  : (c <= 435 || c == 437))))))))))
        : (c <= 440 || (c < 542
          ? (c < 497
            ? (c < 473
              ? (c < 463
                ? (c < 455
                  ? (c < 452
                    ? c == 444
                    : c <= 452)
                  : (c <= 455 || (c < 461
                    ? c == 458
                    : c <= 461)))
                : (c <= 463 || (c < 469
                  ? (c < 467
                    ? c == 465
                    : c <= 467)
                  : (c <= 469 || c == 471))))
              : (c <= 473 || (c < 486
                ? (c < 480
                  ? (c < 478
                    ? c == 475
                    : c <= 478)
                  : (c <= 480 || (c < 484
                    ? c == 482
                    : c <= 484)))
                : (c <= 486 || (c < 492
                  ? (c < 490
                    ? c == 488
                    : c <= 490)
                  : (c <= 492 || c == 494))))))
            : (c <= 497 || (c < 522
              ? (c < 512
                ? (c < 506
                  ? (c < 502
                    ? c == 500
                    : c <= 504)
                  : (c <= 506 || (c < 510
                    ? c == 508
                    : c <= 510)))
                : (c <= 512 || (c < 518
                  ? (c < 516
                    ? c == 514
                    : c <= 516)
                  : (c <= 518 || c == 520))))
              : (c <= 522 || (c < 532
                ? (c < 528
                  ? (c < 526
                    ? c == 524
                    : c <= 526)
                  : (c <= 528 || c == 530))
                : (c <= 532 || (c < 538
                  ? (c < 536
                    ? c == 534
                    : c <= 536)
                  : (c <= 538 || c == 540))))))))
          : (c <= 542 || (c < 895
            ? (c < 570
              ? (c < 554
                ? (c < 548
                  ? (c < 546
                    ? c == 544
                    : c <= 546)
                  : (c <= 548 || (c < 552
                    ? c == 550
                    : c <= 552)))
                : (c <= 554 || (c < 560
                  ? (c < 558
                    ? c == 556
                    : c <= 558)
                  : (c <= 560 || c == 562))))
              : (c <= 571 || (c < 588
                ? (c < 579
                  ? (c < 577
                    ? (c >= 573 && c <= 574)
                    : c <= 577)
                  : (c <= 582 || (c < 586
                    ? c == 584
                    : c <= 586)))
                : (c <= 588 || (c < 882
                  ? (c < 880
                    ? c == 590
                    : c <= 880)
                  : (c <= 882 || c == 886))))))
            : (c <= 895 || (c < 988
              ? (c < 931
                ? (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c < 913
                    ? (c >= 910 && c <= 911)
                    : c <= 929)))
                : (c <= 939 || (c < 984
                  ? (c < 978
                    ? c == 975
                    : c <= 980)
                  : (c <= 984 || c == 986))))
              : (c <= 988 || (c < 998
                ? (c < 994
                  ? (c < 992
                    ? c == 990
                    : c <= 992)
                  : (c <= 994 || c == 996))
                : (c <= 998 || (c < 1004
                  ? (c < 1002
                    ? c == 1000
                    : c <= 1002)
                  : (c <= 1004 || c == 1006))))))))))))
      : (c <= 1012 || (c < 1296
        ? (c < 1208
          ? (c < 1164
            ? (c < 1134
              ? (c < 1124
                ? (c < 1021
                  ? (c < 1017
                    ? c == 1015
                    : c <= 1018)
                  : (c <= 1071 || (c < 1122
                    ? c == 1120
                    : c <= 1122)))
                : (c <= 1124 || (c < 1130
                  ? (c < 1128
                    ? c == 1126
                    : c <= 1128)
                  : (c <= 1130 || c == 1132))))
              : (c <= 1134 || (c < 1146
                ? (c < 1140
                  ? (c < 1138
                    ? c == 1136
                    : c <= 1138)
                  : (c <= 1140 || (c < 1144
                    ? c == 1142
                    : c <= 1144)))
                : (c <= 1146 || (c < 1152
                  ? (c < 1150
                    ? c == 1148
                    : c <= 1150)
                  : (c <= 1152 || c == 1162))))))
            : (c <= 1164 || (c < 1186
              ? (c < 1176
                ? (c < 1170
                  ? (c < 1168
                    ? c == 1166
                    : c <= 1168)
                  : (c <= 1170 || (c < 1174
                    ? c == 1172
                    : c <= 1174)))
                : (c <= 1176 || (c < 1182
                  ? (c < 1180
                    ? c == 1178
                    : c <= 1180)
                  : (c <= 1182 || c == 1184))))
              : (c <= 1186 || (c < 1198
                ? (c < 1192
                  ? (c < 1190
                    ? c == 1188
                    : c <= 1190)
                  : (c <= 1192 || (c < 1196
                    ? c == 1194
                    : c <= 1196)))
                : (c <= 1198 || (c < 1204
                  ? (c < 1202
                    ? c == 1200
                    : c <= 1202)
                  : (c <= 1204 || c == 1206))))))))
          : (c <= 1208 || (c < 1254
            ? (c < 1232
              ? (c < 1221
                ? (c < 1214
                  ? (c < 1212
                    ? c == 1210
                    : c <= 1212)
                  : (c <= 1214 || (c < 1219
                    ? (c >= 1216 && c <= 1217)
                    : c <= 1219)))
                : (c <= 1221 || (c < 1227
                  ? (c < 1225
                    ? c == 1223
                    : c <= 1225)
                  : (c <= 1227 || c == 1229))))
              : (c <= 1232 || (c < 1244
                ? (c < 1238
                  ? (c < 1236
                    ? c == 1234
                    : c <= 1236)
                  : (c <= 1238 || (c < 1242
                    ? c == 1240
                    : c <= 1242)))
                : (c <= 1244 || (c < 1250
                  ? (c < 1248
                    ? c == 1246
                    : c <= 1248)
                  : (c <= 1250 || c == 1252))))))
            : (c <= 1254 || (c < 1276
              ? (c < 1266
                ? (c < 1260
                  ? (c < 1258
                    ? c == 1256
                    : c <= 1258)
                  : (c <= 1260 || (c < 1264
                    ? c == 1262
                    : c <= 1264)))
                : (c <= 1266 || (c < 1272
                  ? (c < 1270
                    ? c == 1268
                    : c <= 1270)
                  : (c <= 1272 || c == 1274))))
              : (c <= 1276 || (c < 1286
                ? (c < 1282
                  ? (c < 1280
                    ? c == 1278
                    : c <= 1280)
                  : (c <= 1282 || c == 1284))
                : (c <= 1286 || (c < 1292
                  ? (c < 1290
                    ? c == 1288
                    : c <= 1290)
                  : (c <= 1292 || c == 1294))))))))))
        : (c <= 1296 || (c < 5024
          ? (c < 2548
            ? (c < 1318
              ? (c < 1308
                ? (c < 1302
                  ? (c < 1300
                    ? c == 1298
                    : c <= 1300)
                  : (c <= 1302 || (c < 1306
                    ? c == 1304
                    : c <= 1306)))
                : (c <= 1308 || (c < 1314
                  ? (c < 1312
                    ? c == 1310
                    : c <= 1312)
                  : (c <= 1314 || c == 1316))))
              : (c <= 1318 || (c < 1632
                ? (c < 1324
                  ? (c < 1322
                    ? c == 1320
                    : c <= 1322)
                  : (c <= 1324 || (c < 1329
                    ? c == 1326
                    : c <= 1366)))
                : (c <= 1641 || (c < 2406
                  ? (c < 1984
                    ? (c >= 1776 && c <= 1785)
                    : c <= 1993)
                  : (c <= 2415 || (c >= 2534 && c <= 2543)))))))
            : (c <= 2553 || (c < 3558
              ? (c < 3174
                ? (c < 2918
                  ? (c < 2790
                    ? (c >= 2662 && c <= 2671)
                    : c <= 2799)
                  : (c <= 2927 || (c < 3046
                    ? (c >= 2930 && c <= 2935)
                    : c <= 3058)))
                : (c <= 3183 || (c < 3416
                  ? (c < 3302
                    ? (c >= 3192 && c <= 3198)
                    : c <= 3311)
                  : (c <= 3422 || (c >= 3430 && c <= 3448)))))
              : (c <= 3567 || (c < 4240
                ? (c < 3872
                  ? (c < 3792
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3801)
                  : (c <= 3891 || (c >= 4160 && c <= 4169)))
                : (c <= 4249 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c >= 4969 && c <= 4988)))))))))
          : (c <= 5109 || (c < 7694
            ? (c < 7232
              ? (c < 6608
                ? (c < 6128
                  ? (c < 6112
                    ? (c >= 5870 && c <= 5872)
                    : c <= 6121)
                  : (c <= 6137 || (c < 6470
                    ? (c >= 6160 && c <= 6169)
                    : c <= 6479)))
                : (c <= 6618 || (c < 6992
                  ? (c < 6800
                    ? (c >= 6784 && c <= 6793)
                    : c <= 6809)
                  : (c <= 7001 || (c >= 7088 && c <= 7097)))))
              : (c <= 7241 || (c < 7684
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7248 && c <= 7257)
                    : c <= 7354)
                  : (c <= 7359 || (c < 7682
                    ? c == 7680
                    : c <= 7682)))
                : (c <= 7684 || (c < 7690
                  ? (c < 7688
                    ? c == 7686
                    : c <= 7688)
                  : (c <= 7690 || c == 7692))))))
            : (c <= 7694 || (c < 7716
              ? (c < 7706
                ? (c < 7700
                  ? (c < 7698
                    ? c == 7696
                    : c <= 7698)
                  : (c <= 7700 || (c < 7704
                    ? c == 7702
                    : c <= 7704)))
                : (c <= 7706 || (c < 7712
                  ? (c < 7710
                    ? c == 7708
                    : c <= 7710)
                  : (c <= 7712 || c == 7714))))
              : (c <= 7716 || (c < 7726
                ? (c < 7722
                  ? (c < 7720
                    ? c == 7718
                    : c <= 7720)
                  : (c <= 7722 || c == 7724))
                : (c <= 7726 || (c < 7732
                  ? (c < 7730
                    ? c == 7728
                    : c <= 7730)
                  : (c <= 7732 || c == 7734))))))))))))))
    : (c <= 7736 || (c < 11456
      ? (c < 7918
        ? (c < 7824
          ? (c < 7780
            ? (c < 7758
              ? (c < 7748
                ? (c < 7742
                  ? (c < 7740
                    ? c == 7738
                    : c <= 7740)
                  : (c <= 7742 || (c < 7746
                    ? c == 7744
                    : c <= 7746)))
                : (c <= 7748 || (c < 7754
                  ? (c < 7752
                    ? c == 7750
                    : c <= 7752)
                  : (c <= 7754 || c == 7756))))
              : (c <= 7758 || (c < 7770
                ? (c < 7764
                  ? (c < 7762
                    ? c == 7760
                    : c <= 7762)
                  : (c <= 7764 || (c < 7768
                    ? c == 7766
                    : c <= 7768)))
                : (c <= 7770 || (c < 7776
                  ? (c < 7774
                    ? c == 7772
                    : c <= 7774)
                  : (c <= 7776 || c == 7778))))))
            : (c <= 7780 || (c < 7802
              ? (c < 7792
                ? (c < 7786
                  ? (c < 7784
                    ? c == 7782
                    : c <= 7784)
                  : (c <= 7786 || (c < 7790
                    ? c == 7788
                    : c <= 7790)))
                : (c <= 7792 || (c < 7798
                  ? (c < 7796
                    ? c == 7794
                    : c <= 7796)
                  : (c <= 7798 || c == 7800))))
              : (c <= 7802 || (c < 7814
                ? (c < 7808
                  ? (c < 7806
                    ? c == 7804
                    : c <= 7806)
                  : (c <= 7808 || (c < 7812
                    ? c == 7810
                    : c <= 7812)))
                : (c <= 7814 || (c < 7820
                  ? (c < 7818
                    ? c == 7816
                    : c <= 7818)
                  : (c <= 7820 || c == 7822))))))))
          : (c <= 7824 || (c < 7876
            ? (c < 7854
              ? (c < 7844
                ? (c < 7838
                  ? (c < 7828
                    ? c == 7826
                    : c <= 7828)
                  : (c <= 7838 || (c < 7842
                    ? c == 7840
                    : c <= 7842)))
                : (c <= 7844 || (c < 7850
                  ? (c < 7848
                    ? c == 7846
                    : c <= 7848)
                  : (c <= 7850 || c == 7852))))
              : (c <= 7854 || (c < 7866
                ? (c < 7860
                  ? (c < 7858
                    ? c == 7856
                    : c <= 7858)
                  : (c <= 7860 || (c < 7864
                    ? c == 7862
                    : c <= 7864)))
                : (c <= 7866 || (c < 7872
                  ? (c < 7870
                    ? c == 7868
                    : c <= 7870)
                  : (c <= 7872 || c == 7874))))))
            : (c <= 7876 || (c < 7898
              ? (c < 7888
                ? (c < 7882
                  ? (c < 7880
                    ? c == 7878
                    : c <= 7880)
                  : (c <= 7882 || (c < 7886
                    ? c == 7884
                    : c <= 7886)))
                : (c <= 7888 || (c < 7894
                  ? (c < 7892
                    ? c == 7890
                    : c <= 7892)
                  : (c <= 7894 || c == 7896))))
              : (c <= 7898 || (c < 7908
                ? (c < 7904
                  ? (c < 7902
                    ? c == 7900
                    : c <= 7902)
                  : (c <= 7904 || c == 7906))
                : (c <= 7908 || (c < 7914
                  ? (c < 7912
                    ? c == 7910
                    : c <= 7912)
                  : (c <= 7914 || c == 7916))))))))))
        : (c <= 7918 || (c < 9450
          ? (c < 8168
            ? (c < 7976
              ? (c < 7930
                ? (c < 7924
                  ? (c < 7922
                    ? c == 7920
                    : c <= 7922)
                  : (c <= 7924 || (c < 7928
                    ? c == 7926
                    : c <= 7928)))
                : (c <= 7930 || (c < 7944
                  ? (c < 7934
                    ? c == 7932
                    : c <= 7934)
                  : (c <= 7951 || (c >= 7960 && c <= 7965)))))
              : (c <= 7983 || (c < 8031
                ? (c < 8025
                  ? (c < 8008
                    ? (c >= 7992 && c <= 7999)
                    : c <= 8013)
                  : (c <= 8025 || (c < 8029
                    ? c == 8027
                    : c <= 8029)))
                : (c <= 8031 || (c < 8136
                  ? (c < 8120
                    ? (c >= 8040 && c <= 8047)
                    : c <= 8123)
                  : (c <= 8139 || (c >= 8152 && c <= 8155)))))))
            : (c <= 8172 || (c < 8484
              ? (c < 8455
                ? (c < 8308
                  ? (c < 8304
                    ? (c >= 8184 && c <= 8187)
                    : c <= 8304)
                  : (c <= 8313 || (c < 8450
                    ? (c >= 8320 && c <= 8329)
                    : c <= 8450)))
                : (c <= 8455 || (c < 8469
                  ? (c < 8464
                    ? (c >= 8459 && c <= 8461)
                    : c <= 8466)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))))
              : (c <= 8484 || (c < 8510
                ? (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8493 || (c >= 8496 && c <= 8499)))
                : (c <= 8511 || (c < 8581
                  ? (c < 8528
                    ? c == 8517
                    : c <= 8579)
                  : (c <= 8585 || (c >= 9312 && c <= 9371)))))))))
          : (c <= 9471 || (c < 11414
            ? (c < 11390
              ? (c < 11369
                ? (c < 11360
                  ? (c < 11264
                    ? (c >= 10102 && c <= 10131)
                    : c <= 11311)
                  : (c <= 11360 || (c < 11367
                    ? (c >= 11362 && c <= 11364)
                    : c <= 11367)))
                : (c <= 11369 || (c < 11378
                  ? (c < 11373
                    ? c == 11371
                    : c <= 11376)
                  : (c <= 11378 || c == 11381))))
              : (c <= 11392 || (c < 11404
                ? (c < 11398
                  ? (c < 11396
                    ? c == 11394
                    : c <= 11396)
                  : (c <= 11398 || (c < 11402
                    ? c == 11400
                    : c <= 11402)))
                : (c <= 11404 || (c < 11410
                  ? (c < 11408
                    ? c == 11406
                    : c <= 11408)
                  : (c <= 11410 || c == 11412))))))
            : (c <= 11414 || (c < 11436
              ? (c < 11426
                ? (c < 11420
                  ? (c < 11418
                    ? c == 11416
                    : c <= 11418)
                  : (c <= 11420 || (c < 11424
                    ? c == 11422
                    : c <= 11424)))
                : (c <= 11426 || (c < 11432
                  ? (c < 11430
                    ? c == 11428
                    : c <= 11430)
                  : (c <= 11432 || c == 11434))))
              : (c <= 11436 || (c < 11446
                ? (c < 11442
                  ? (c < 11440
                    ? c == 11438
                    : c <= 11440)
                  : (c <= 11442 || c == 11444))
                : (c <= 11446 || (c < 11452
                  ? (c < 11450
                    ? c == 11448
                    : c <= 11450)
                  : (c <= 11452 || c == 11454))))))))))))
      : (c <= 11456 || (c < 42822
        ? (c < 42584
          ? (c < 12295
            ? (c < 11478
              ? (c < 11468
                ? (c < 11462
                  ? (c < 11460
                    ? c == 11458
                    : c <= 11460)
                  : (c <= 11462 || (c < 11466
                    ? c == 11464
                    : c <= 11466)))
                : (c <= 11468 || (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))))
              : (c <= 11478 || (c < 11490
                ? (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || (c < 11488
                    ? c == 11486
                    : c <= 11488)))
                : (c <= 11490 || (c < 11506
                  ? (c < 11501
                    ? c == 11499
                    : c <= 11501)
                  : (c <= 11506 || c == 11517))))))
            : (c <= 12295 || (c < 42562
              ? (c < 12881
                ? (c < 12690
                  ? (c < 12344
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12346)
                  : (c <= 12693 || (c < 12872
                    ? (c >= 12832 && c <= 12841)
                    : c <= 12879)))
                : (c <= 12895 || (c < 42528
                  ? (c < 12977
                    ? (c >= 12928 && c <= 12937)
                    : c <= 12991)
                  : (c <= 42537 || c == 42560))))
              : (c <= 42562 || (c < 42574
                ? (c < 42568
                  ? (c < 42566
                    ? c == 42564
                    : c <= 42566)
                  : (c <= 42568 || (c < 42572
                    ? c == 42570
                    : c <= 42572)))
                : (c <= 42574 || (c < 42580
                  ? (c < 42578
                    ? c == 42576
                    : c <= 42578)
                  : (c <= 42580 || c == 42582))))))))
          : (c <= 42584 || (c < 42646
            ? (c < 42624
              ? (c < 42596
                ? (c < 42590
                  ? (c < 42588
                    ? c == 42586
                    : c <= 42588)
                  : (c <= 42590 || (c < 42594
                    ? c == 42592
                    : c <= 42594)))
                : (c <= 42596 || (c < 42602
                  ? (c < 42600
                    ? c == 42598
                    : c <= 42600)
                  : (c <= 42602 || c == 42604))))
              : (c <= 42624 || (c < 42636
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || (c < 42634
                    ? c == 42632
                    : c <= 42634)))
                : (c <= 42636 || (c < 42642
                  ? (c < 42640
                    ? c == 42638
                    : c <= 42640)
                  : (c <= 42642 || c == 42644))))))
            : (c <= 42646 || (c < 42802
              ? (c < 42790
                ? (c < 42726
                  ? (c < 42650
                    ? c == 42648
                    : c <= 42650)
                  : (c <= 42735 || (c < 42788
                    ? c == 42786
                    : c <= 42788)))
                : (c <= 42790 || (c < 42796
                  ? (c < 42794
                    ? c == 42792
                    : c <= 42794)
                  : (c <= 42796 || c == 42798))))
              : (c <= 42802 || (c < 42812
                ? (c < 42808
                  ? (c < 42806
                    ? c == 42804
                    : c <= 42806)
                  : (c <= 42808 || c == 42810))
                : (c <= 42812 || (c < 42818
                  ? (c < 42816
                    ? c == 42814
                    : c <= 42816)
                  : (c <= 42818 || c == 42820))))))))))
        : (c <= 42822 || (c < 42928
          ? (c < 42875
            ? (c < 42844
              ? (c < 42834
                ? (c < 42828
                  ? (c < 42826
                    ? c == 42824
                    : c <= 42826)
                  : (c <= 42828 || (c < 42832
                    ? c == 42830
                    : c <= 42832)))
                : (c <= 42834 || (c < 42840
                  ? (c < 42838
                    ? c == 42836
                    : c <= 42838)
                  : (c <= 42840 || c == 42842))))
              : (c <= 42844 || (c < 42856
                ? (c < 42850
                  ? (c < 42848
                    ? c == 42846
                    : c <= 42848)
                  : (c <= 42850 || (c < 42854
                    ? c == 42852
                    : c <= 42854)))
                : (c <= 42856 || (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))))))
            : (c <= 42875 || (c < 42904
              ? (c < 42891
                ? (c < 42882
                  ? (c < 42880
                    ? (c >= 42877 && c <= 42878)
                    : c <= 42880)
                  : (c <= 42882 || (c < 42886
                    ? c == 42884
                    : c <= 42886)))
                : (c <= 42891 || (c < 42898
                  ? (c < 42896
                    ? c == 42893
                    : c <= 42896)
                  : (c <= 42898 || c == 42902))))
              : (c <= 42904 || (c < 42914
                ? (c < 42910
                  ? (c < 42908
                    ? c == 42906
                    : c <= 42908)
                  : (c <= 42910 || c == 42912))
                : (c <= 42914 || (c < 42920
                  ? (c < 42918
                    ? c == 42916
                    : c <= 42918)
                  : (c <= 42920 || (c >= 42922 && c <= 42926)))))))))
          : (c <= 42932 || (c < 65313
            ? (c < 42966
              ? (c < 42944
                ? (c < 42938
                  ? (c < 42936
                    ? c == 42934
                    : c <= 42936)
                  : (c <= 42938 || (c < 42942
                    ? c == 42940
                    : c <= 42942)))
                : (c <= 42944 || (c < 42953
                  ? (c < 42948
                    ? c == 42946
                    : c <= 42951)
                  : (c <= 42953 || c == 42960))))
              : (c <= 42966 || (c < 43472
                ? (c < 43056
                  ? (c < 42997
                    ? c == 42968
                    : c <= 42997)
                  : (c <= 43061 || (c < 43264
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43273)))
                : (c <= 43481 || (c < 44016
                  ? (c < 43600
                    ? (c >= 43504 && c <= 43513)
                    : c <= 43609)
                  : (c <= 44025 || (c >= 65296 && c <= 65305)))))))
            : (c <= 65338 || (c < 66736
              ? (c < 66369
                ? (c < 65930
                  ? (c < 65856
                    ? (c >= 65799 && c <= 65843)
                    : c <= 65912)
                  : (c <= 65931 || (c < 66336
                    ? (c >= 66273 && c <= 66299)
                    : c <= 66339)))
                : (c <= 66369 || (c < 66560
                  ? (c < 66513
                    ? c == 66378
                    : c <= 66517)
                  : (c <= 66599 || (c >= 66720 && c <= 66729)))))
              : (c <= 66771 || (c < 67672
                ? (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 67679 || (c < 67835
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67711)
                    : c <= 67759)
                  : (c <= 67839 || (c >= 67862 && c <= 67867)))))))))))))))));
}

static inline bool sym_account_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 3046
      ? (c < 2392
        ? (c < 1376
          ? (c < 748
            ? (c < 185
              ? (c < 'a'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 248
                ? (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1984
            ? (c < 1765
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2144
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))
              : (c <= 2154 || (c < 2308
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))))))))
        : (c <= 2401 || (c < 2730
          ? (c < 2556
            ? (c < 2486
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2548
                  ? (c >= 2534 && c <= 2545)
                  : c <= 2553)))))
            : (c <= 2556 || (c < 2649
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2908
            ? (c < 2821
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))))
            : (c <= 2909 || (c < 2969
              ? (c < 2947
                ? (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))
              : (c <= 2970 || (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))))))))))
      : (c <= 3058 || (c < 4176
        ? (c < 3450
          ? (c < 3242
            ? (c < 3168
              ? (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))))
              : (c <= 3169 || (c < 3205
                ? (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3412
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : c <= 3448)))))))
          : (c <= 3455 || (c < 3749
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))))
              : (c <= 3635 || (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3792
                  ? c == 3782
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))))
              : (c <= 3840 || (c < 3976
                ? (c < 3904
                  ? (c >= 3872 && c <= 3891)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4169)))))))))
        : (c <= 4181 || (c < 5024
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4240 && c <= 4249)))))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4802
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6112
            ? (c < 5919
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))))
              : (c <= 5937 || (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6121 || (c < 6320
              ? (c < 6272
                ? (c < 6160
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6528
                ? (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6618)))))))))))))
    : (c <= 6678 || (c < 43138
      ? (c < 10102
        ? (c < 8064
          ? (c < 7357
            ? (c < 7043
              ? (c < 6823
                ? (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7072 || (c < 7245
                ? (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7968
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : c <= 9471)))))))))
        : (c <= 10131 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42560
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42965
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(119);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'L') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(17);
      if (lookahead == '^') ADVANCE(100);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '}') ADVANCE(180);
      if (lookahead == '~') ADVANCE(177);
      if (lookahead == 224) ADVANCE(95);
      if (lookahead == 237) ADVANCE(94);
      if (lookahead == 240) ADVANCE(97);
      if (lookahead == 244) ADVANCE(93);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(165);
      if (lookahead == 238 ||
          lookahead == 239) ADVANCE(190);
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(123);
      if ((225 <= lookahead && lookahead <= 236)) ADVANCE(188);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(186);
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(185);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(161);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ',') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '1') ADVANCE(64);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(88);
      if (lookahead == '3') ADVANCE(55);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(101);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 11:
      if (lookahead == 'L') ADVANCE(124);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'R') ADVANCE(138);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 15:
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'S') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'U') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'U') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'U') ADVANCE(136);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'q') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'q') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(39);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 51:
      if (lookahead == 'y') ADVANCE(7);
      END_STATE();
    case 52:
      if (lookahead == '}') ADVANCE(182);
      END_STATE();
    case 53:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(106);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead == '\r') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(129);
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'E') ADVANCE(41);
      if (lookahead == 'F') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'L') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == '^') ADVANCE(100);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '}') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == '}') ADVANCE(179);
      if (lookahead == '~') ADVANCE(177);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'L') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 61:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'L') ADVANCE(27);
      if (lookahead == '^') ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '}') ADVANCE(180);
      if (lookahead == '~') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'E') ADVANCE(41);
      if (lookahead == 'F') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'L') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(4);
      END_STATE();
    case 65:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      END_STATE();
    case 66:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      END_STATE();
    case 67:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 68:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 69:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 70:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 71:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      END_STATE();
    case 72:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 73:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      END_STATE();
    case 74:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      END_STATE();
    case 75:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      END_STATE();
    case 76:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 77:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      END_STATE();
    case 78:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      END_STATE();
    case 79:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 80:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 81:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 82:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      END_STATE();
    case 83:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 84:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 85:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 86:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 87:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 88:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 93:
      if ((128 <= lookahead && lookahead <= 143)) ADVANCE(193);
      END_STATE();
    case 94:
      if ((128 <= lookahead && lookahead <= 159)) ADVANCE(189);
      END_STATE();
    case 95:
      if ((160 <= lookahead && lookahead <= 191)) ADVANCE(187);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      END_STATE();
    case 97:
      if ((144 <= lookahead && lookahead <= 191)) ADVANCE(191);
      END_STATE();
    case 98:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 99:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 100:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 101:
      if (sym_account_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 102:
      if (eof) ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(102)
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(106);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(92);
      if (sym_flag_character_set_1(lookahead)) ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 103:
      if (eof) ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(107);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(92);
      if (sym_flag_character_set_1(lookahead)) ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__any_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__any_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__any_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__org_stars_token1);
      if (lookahead == '*') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_headline_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__indent);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(107);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_atat);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_at);
      if (lookahead == '@') ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(113);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_slash);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_plus);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_minus);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_flag);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__none);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__none);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(101);
      if (sym_account_character_set_2(lookahead)) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'L') ADVANCE(137);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'L') ADVANCE(125);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'L') ADVANCE(135);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'S') ADVANCE(133);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'U') ADVANCE(132);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '.') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '.') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '.') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '.') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__UTF_8_1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__UTF_8_2_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token2);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token3);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token4);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token3);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'q') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_txn);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_price);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_popmeta);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 93:
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_pushmeta);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 102, .external_lex_state = 2},
  [2] = {.lex_state = 102, .external_lex_state = 3},
  [3] = {.lex_state = 102, .external_lex_state = 3},
  [4] = {.lex_state = 102, .external_lex_state = 3},
  [5] = {.lex_state = 102, .external_lex_state = 3},
  [6] = {.lex_state = 102, .external_lex_state = 2},
  [7] = {.lex_state = 102, .external_lex_state = 2},
  [8] = {.lex_state = 102, .external_lex_state = 3},
  [9] = {.lex_state = 103, .external_lex_state = 2},
  [10] = {.lex_state = 103, .external_lex_state = 2},
  [11] = {.lex_state = 103, .external_lex_state = 2},
  [12] = {.lex_state = 103, .external_lex_state = 2},
  [13] = {.lex_state = 103, .external_lex_state = 2},
  [14] = {.lex_state = 103, .external_lex_state = 2},
  [15] = {.lex_state = 103, .external_lex_state = 2},
  [16] = {.lex_state = 103, .external_lex_state = 3},
  [17] = {.lex_state = 103, .external_lex_state = 3},
  [18] = {.lex_state = 103, .external_lex_state = 3},
  [19] = {.lex_state = 103, .external_lex_state = 3},
  [20] = {.lex_state = 103, .external_lex_state = 3},
  [21] = {.lex_state = 103, .external_lex_state = 2},
  [22] = {.lex_state = 103, .external_lex_state = 2},
  [23] = {.lex_state = 103, .external_lex_state = 2},
  [24] = {.lex_state = 103, .external_lex_state = 2},
  [25] = {.lex_state = 103, .external_lex_state = 2},
  [26] = {.lex_state = 103, .external_lex_state = 2},
  [27] = {.lex_state = 103, .external_lex_state = 2},
  [28] = {.lex_state = 103, .external_lex_state = 2},
  [29] = {.lex_state = 103, .external_lex_state = 3},
  [30] = {.lex_state = 103, .external_lex_state = 3},
  [31] = {.lex_state = 103, .external_lex_state = 3},
  [32] = {.lex_state = 103, .external_lex_state = 3},
  [33] = {.lex_state = 103, .external_lex_state = 3},
  [34] = {.lex_state = 103, .external_lex_state = 3},
  [35] = {.lex_state = 103, .external_lex_state = 3},
  [36] = {.lex_state = 103, .external_lex_state = 3},
  [37] = {.lex_state = 103, .external_lex_state = 2},
  [38] = {.lex_state = 103, .external_lex_state = 3},
  [39] = {.lex_state = 103, .external_lex_state = 2},
  [40] = {.lex_state = 103, .external_lex_state = 3},
  [41] = {.lex_state = 103, .external_lex_state = 3},
  [42] = {.lex_state = 103, .external_lex_state = 3},
  [43] = {.lex_state = 103, .external_lex_state = 3},
  [44] = {.lex_state = 103, .external_lex_state = 2},
  [45] = {.lex_state = 103, .external_lex_state = 2},
  [46] = {.lex_state = 103, .external_lex_state = 3},
  [47] = {.lex_state = 103, .external_lex_state = 3},
  [48] = {.lex_state = 103, .external_lex_state = 3},
  [49] = {.lex_state = 103, .external_lex_state = 3},
  [50] = {.lex_state = 103, .external_lex_state = 3},
  [51] = {.lex_state = 103, .external_lex_state = 3},
  [52] = {.lex_state = 103, .external_lex_state = 3},
  [53] = {.lex_state = 103, .external_lex_state = 3},
  [54] = {.lex_state = 103, .external_lex_state = 3},
  [55] = {.lex_state = 103, .external_lex_state = 3},
  [56] = {.lex_state = 103, .external_lex_state = 3},
  [57] = {.lex_state = 103, .external_lex_state = 3},
  [58] = {.lex_state = 103, .external_lex_state = 3},
  [59] = {.lex_state = 103, .external_lex_state = 3},
  [60] = {.lex_state = 103, .external_lex_state = 3},
  [61] = {.lex_state = 103, .external_lex_state = 3},
  [62] = {.lex_state = 103, .external_lex_state = 3},
  [63] = {.lex_state = 103, .external_lex_state = 3},
  [64] = {.lex_state = 103, .external_lex_state = 3},
  [65] = {.lex_state = 103, .external_lex_state = 3},
  [66] = {.lex_state = 103, .external_lex_state = 3},
  [67] = {.lex_state = 103, .external_lex_state = 3},
  [68] = {.lex_state = 103, .external_lex_state = 3},
  [69] = {.lex_state = 103, .external_lex_state = 3},
  [70] = {.lex_state = 103, .external_lex_state = 3},
  [71] = {.lex_state = 103, .external_lex_state = 3},
  [72] = {.lex_state = 103, .external_lex_state = 3},
  [73] = {.lex_state = 103, .external_lex_state = 3},
  [74] = {.lex_state = 103, .external_lex_state = 3},
  [75] = {.lex_state = 103, .external_lex_state = 3},
  [76] = {.lex_state = 103, .external_lex_state = 2},
  [77] = {.lex_state = 103, .external_lex_state = 3},
  [78] = {.lex_state = 103, .external_lex_state = 2},
  [79] = {.lex_state = 103, .external_lex_state = 2},
  [80] = {.lex_state = 103, .external_lex_state = 2},
  [81] = {.lex_state = 103, .external_lex_state = 2},
  [82] = {.lex_state = 103, .external_lex_state = 3},
  [83] = {.lex_state = 103, .external_lex_state = 2},
  [84] = {.lex_state = 103, .external_lex_state = 2},
  [85] = {.lex_state = 103, .external_lex_state = 2},
  [86] = {.lex_state = 103, .external_lex_state = 2},
  [87] = {.lex_state = 103, .external_lex_state = 3},
  [88] = {.lex_state = 103, .external_lex_state = 3},
  [89] = {.lex_state = 103, .external_lex_state = 3},
  [90] = {.lex_state = 103, .external_lex_state = 3},
  [91] = {.lex_state = 103, .external_lex_state = 2},
  [92] = {.lex_state = 103, .external_lex_state = 3},
  [93] = {.lex_state = 103, .external_lex_state = 2},
  [94] = {.lex_state = 103, .external_lex_state = 2},
  [95] = {.lex_state = 103, .external_lex_state = 2},
  [96] = {.lex_state = 103, .external_lex_state = 2},
  [97] = {.lex_state = 103, .external_lex_state = 2},
  [98] = {.lex_state = 103, .external_lex_state = 2},
  [99] = {.lex_state = 103, .external_lex_state = 2},
  [100] = {.lex_state = 103, .external_lex_state = 2},
  [101] = {.lex_state = 103, .external_lex_state = 2},
  [102] = {.lex_state = 103, .external_lex_state = 2},
  [103] = {.lex_state = 103, .external_lex_state = 2},
  [104] = {.lex_state = 103, .external_lex_state = 2},
  [105] = {.lex_state = 103, .external_lex_state = 2},
  [106] = {.lex_state = 103, .external_lex_state = 2},
  [107] = {.lex_state = 103, .external_lex_state = 2},
  [108] = {.lex_state = 103, .external_lex_state = 2},
  [109] = {.lex_state = 103, .external_lex_state = 2},
  [110] = {.lex_state = 103, .external_lex_state = 2},
  [111] = {.lex_state = 103, .external_lex_state = 2},
  [112] = {.lex_state = 103, .external_lex_state = 2},
  [113] = {.lex_state = 103, .external_lex_state = 3},
  [114] = {.lex_state = 103, .external_lex_state = 2},
  [115] = {.lex_state = 103, .external_lex_state = 3},
  [116] = {.lex_state = 103, .external_lex_state = 3},
  [117] = {.lex_state = 103, .external_lex_state = 3},
  [118] = {.lex_state = 103, .external_lex_state = 3},
  [119] = {.lex_state = 103, .external_lex_state = 3},
  [120] = {.lex_state = 103, .external_lex_state = 3},
  [121] = {.lex_state = 103, .external_lex_state = 3},
  [122] = {.lex_state = 103, .external_lex_state = 3},
  [123] = {.lex_state = 103, .external_lex_state = 3},
  [124] = {.lex_state = 103, .external_lex_state = 3},
  [125] = {.lex_state = 103, .external_lex_state = 2},
  [126] = {.lex_state = 103, .external_lex_state = 2},
  [127] = {.lex_state = 103, .external_lex_state = 2},
  [128] = {.lex_state = 103, .external_lex_state = 2},
  [129] = {.lex_state = 103, .external_lex_state = 2},
  [130] = {.lex_state = 103, .external_lex_state = 2},
  [131] = {.lex_state = 103, .external_lex_state = 2},
  [132] = {.lex_state = 103, .external_lex_state = 2},
  [133] = {.lex_state = 103, .external_lex_state = 2},
  [134] = {.lex_state = 103, .external_lex_state = 2},
  [135] = {.lex_state = 103, .external_lex_state = 2},
  [136] = {.lex_state = 103, .external_lex_state = 2},
  [137] = {.lex_state = 103, .external_lex_state = 2},
  [138] = {.lex_state = 103, .external_lex_state = 2},
  [139] = {.lex_state = 103, .external_lex_state = 2},
  [140] = {.lex_state = 103, .external_lex_state = 2},
  [141] = {.lex_state = 103, .external_lex_state = 3},
  [142] = {.lex_state = 103, .external_lex_state = 2},
  [143] = {.lex_state = 103, .external_lex_state = 2},
  [144] = {.lex_state = 103, .external_lex_state = 2},
  [145] = {.lex_state = 103, .external_lex_state = 2},
  [146] = {.lex_state = 103, .external_lex_state = 2},
  [147] = {.lex_state = 103, .external_lex_state = 2},
  [148] = {.lex_state = 103, .external_lex_state = 2},
  [149] = {.lex_state = 103, .external_lex_state = 2},
  [150] = {.lex_state = 103, .external_lex_state = 2},
  [151] = {.lex_state = 103, .external_lex_state = 2},
  [152] = {.lex_state = 103, .external_lex_state = 2},
  [153] = {.lex_state = 103, .external_lex_state = 2},
  [154] = {.lex_state = 103, .external_lex_state = 2},
  [155] = {.lex_state = 103, .external_lex_state = 2},
  [156] = {.lex_state = 103, .external_lex_state = 2},
  [157] = {.lex_state = 103, .external_lex_state = 2},
  [158] = {.lex_state = 103, .external_lex_state = 2},
  [159] = {.lex_state = 103, .external_lex_state = 2},
  [160] = {.lex_state = 103, .external_lex_state = 2},
  [161] = {.lex_state = 56},
  [162] = {.lex_state = 103, .external_lex_state = 2},
  [163] = {.lex_state = 103, .external_lex_state = 2},
  [164] = {.lex_state = 103, .external_lex_state = 2},
  [165] = {.lex_state = 103, .external_lex_state = 2},
  [166] = {.lex_state = 103, .external_lex_state = 2},
  [167] = {.lex_state = 57},
  [168] = {.lex_state = 57},
  [169] = {.lex_state = 103, .external_lex_state = 2},
  [170] = {.lex_state = 103, .external_lex_state = 2},
  [171] = {.lex_state = 57},
  [172] = {.lex_state = 103, .external_lex_state = 2},
  [173] = {.lex_state = 103, .external_lex_state = 2},
  [174] = {.lex_state = 103, .external_lex_state = 2},
  [175] = {.lex_state = 103, .external_lex_state = 2},
  [176] = {.lex_state = 103, .external_lex_state = 2},
  [177] = {.lex_state = 103, .external_lex_state = 2},
  [178] = {.lex_state = 103, .external_lex_state = 2},
  [179] = {.lex_state = 103, .external_lex_state = 2},
  [180] = {.lex_state = 103, .external_lex_state = 2},
  [181] = {.lex_state = 103, .external_lex_state = 2},
  [182] = {.lex_state = 103, .external_lex_state = 3},
  [183] = {.lex_state = 103, .external_lex_state = 2},
  [184] = {.lex_state = 103, .external_lex_state = 3},
  [185] = {.lex_state = 103, .external_lex_state = 3},
  [186] = {.lex_state = 103, .external_lex_state = 2},
  [187] = {.lex_state = 103, .external_lex_state = 2},
  [188] = {.lex_state = 103, .external_lex_state = 2},
  [189] = {.lex_state = 103, .external_lex_state = 3},
  [190] = {.lex_state = 103, .external_lex_state = 3},
  [191] = {.lex_state = 103, .external_lex_state = 3},
  [192] = {.lex_state = 103, .external_lex_state = 3},
  [193] = {.lex_state = 103, .external_lex_state = 3},
  [194] = {.lex_state = 103, .external_lex_state = 3},
  [195] = {.lex_state = 103, .external_lex_state = 2},
  [196] = {.lex_state = 103, .external_lex_state = 2},
  [197] = {.lex_state = 103, .external_lex_state = 3},
  [198] = {.lex_state = 103, .external_lex_state = 3},
  [199] = {.lex_state = 103, .external_lex_state = 3},
  [200] = {.lex_state = 103, .external_lex_state = 3},
  [201] = {.lex_state = 103, .external_lex_state = 3},
  [202] = {.lex_state = 103, .external_lex_state = 3},
  [203] = {.lex_state = 103, .external_lex_state = 2},
  [204] = {.lex_state = 103, .external_lex_state = 3},
  [205] = {.lex_state = 103, .external_lex_state = 3},
  [206] = {.lex_state = 103, .external_lex_state = 3},
  [207] = {.lex_state = 103, .external_lex_state = 3},
  [208] = {.lex_state = 103, .external_lex_state = 2},
  [209] = {.lex_state = 103, .external_lex_state = 3},
  [210] = {.lex_state = 58},
  [211] = {.lex_state = 59},
  [212] = {.lex_state = 103, .external_lex_state = 3},
  [213] = {.lex_state = 103, .external_lex_state = 3},
  [214] = {.lex_state = 103, .external_lex_state = 3},
  [215] = {.lex_state = 103, .external_lex_state = 3},
  [216] = {.lex_state = 103, .external_lex_state = 2},
  [217] = {.lex_state = 57},
  [218] = {.lex_state = 103, .external_lex_state = 2},
  [219] = {.lex_state = 103, .external_lex_state = 2},
  [220] = {.lex_state = 103, .external_lex_state = 3},
  [221] = {.lex_state = 103, .external_lex_state = 3},
  [222] = {.lex_state = 103, .external_lex_state = 3},
  [223] = {.lex_state = 103, .external_lex_state = 3},
  [224] = {.lex_state = 103, .external_lex_state = 3},
  [225] = {.lex_state = 103, .external_lex_state = 3},
  [226] = {.lex_state = 103, .external_lex_state = 3},
  [227] = {.lex_state = 103, .external_lex_state = 2},
  [228] = {.lex_state = 103, .external_lex_state = 3},
  [229] = {.lex_state = 103, .external_lex_state = 3},
  [230] = {.lex_state = 103, .external_lex_state = 3},
  [231] = {.lex_state = 103, .external_lex_state = 2},
  [232] = {.lex_state = 103, .external_lex_state = 3},
  [233] = {.lex_state = 103, .external_lex_state = 3},
  [234] = {.lex_state = 103, .external_lex_state = 3},
  [235] = {.lex_state = 103, .external_lex_state = 3},
  [236] = {.lex_state = 103, .external_lex_state = 3},
  [237] = {.lex_state = 103, .external_lex_state = 3},
  [238] = {.lex_state = 103, .external_lex_state = 3},
  [239] = {.lex_state = 103, .external_lex_state = 3},
  [240] = {.lex_state = 103, .external_lex_state = 3},
  [241] = {.lex_state = 103, .external_lex_state = 3},
  [242] = {.lex_state = 103, .external_lex_state = 3},
  [243] = {.lex_state = 103, .external_lex_state = 3},
  [244] = {.lex_state = 103, .external_lex_state = 3},
  [245] = {.lex_state = 103, .external_lex_state = 3},
  [246] = {.lex_state = 103, .external_lex_state = 3},
  [247] = {.lex_state = 103, .external_lex_state = 3},
  [248] = {.lex_state = 103, .external_lex_state = 2},
  [249] = {.lex_state = 103, .external_lex_state = 2},
  [250] = {.lex_state = 103, .external_lex_state = 3},
  [251] = {.lex_state = 103, .external_lex_state = 2},
  [252] = {.lex_state = 102, .external_lex_state = 2},
  [253] = {.lex_state = 102, .external_lex_state = 2},
  [254] = {.lex_state = 102, .external_lex_state = 2},
  [255] = {.lex_state = 102, .external_lex_state = 3},
  [256] = {.lex_state = 102, .external_lex_state = 3},
  [257] = {.lex_state = 102, .external_lex_state = 3},
  [258] = {.lex_state = 57},
  [259] = {.lex_state = 102, .external_lex_state = 2},
  [260] = {.lex_state = 102, .external_lex_state = 2},
  [261] = {.lex_state = 102, .external_lex_state = 3},
  [262] = {.lex_state = 102, .external_lex_state = 3},
  [263] = {.lex_state = 102, .external_lex_state = 3},
  [264] = {.lex_state = 102, .external_lex_state = 2},
  [265] = {.lex_state = 102, .external_lex_state = 3},
  [266] = {.lex_state = 102, .external_lex_state = 2},
  [267] = {.lex_state = 60},
  [268] = {.lex_state = 102, .external_lex_state = 3},
  [269] = {.lex_state = 102, .external_lex_state = 2},
  [270] = {.lex_state = 102, .external_lex_state = 3},
  [271] = {.lex_state = 102, .external_lex_state = 3},
  [272] = {.lex_state = 102, .external_lex_state = 2},
  [273] = {.lex_state = 102, .external_lex_state = 3},
  [274] = {.lex_state = 102, .external_lex_state = 2},
  [275] = {.lex_state = 102, .external_lex_state = 2},
  [276] = {.lex_state = 102, .external_lex_state = 2},
  [277] = {.lex_state = 102, .external_lex_state = 2},
  [278] = {.lex_state = 102, .external_lex_state = 3},
  [279] = {.lex_state = 102, .external_lex_state = 3},
  [280] = {.lex_state = 60},
  [281] = {.lex_state = 60},
  [282] = {.lex_state = 60},
  [283] = {.lex_state = 57},
  [284] = {.lex_state = 102, .external_lex_state = 3},
  [285] = {.lex_state = 102, .external_lex_state = 2},
  [286] = {.lex_state = 102, .external_lex_state = 2},
  [287] = {.lex_state = 102, .external_lex_state = 2},
  [288] = {.lex_state = 60},
  [289] = {.lex_state = 58},
  [290] = {.lex_state = 61},
  [291] = {.lex_state = 61},
  [292] = {.lex_state = 57},
  [293] = {.lex_state = 57},
  [294] = {.lex_state = 57},
  [295] = {.lex_state = 57},
  [296] = {.lex_state = 62},
  [297] = {.lex_state = 57},
  [298] = {.lex_state = 57},
  [299] = {.lex_state = 57},
  [300] = {.lex_state = 57},
  [301] = {.lex_state = 63},
  [302] = {.lex_state = 57},
  [303] = {.lex_state = 57},
  [304] = {.lex_state = 57},
  [305] = {.lex_state = 57},
  [306] = {.lex_state = 57},
  [307] = {.lex_state = 57},
  [308] = {.lex_state = 62},
  [309] = {.lex_state = 62},
  [310] = {.lex_state = 57},
  [311] = {.lex_state = 63},
  [312] = {.lex_state = 63},
  [313] = {.lex_state = 63},
  [314] = {.lex_state = 57},
  [315] = {.lex_state = 63},
  [316] = {.lex_state = 62},
  [317] = {.lex_state = 62},
  [318] = {.lex_state = 56},
  [319] = {.lex_state = 62},
  [320] = {.lex_state = 60},
  [321] = {.lex_state = 57},
  [322] = {.lex_state = 57},
  [323] = {.lex_state = 62},
  [324] = {.lex_state = 57},
  [325] = {.lex_state = 57},
  [326] = {.lex_state = 60},
  [327] = {.lex_state = 56},
  [328] = {.lex_state = 57},
  [329] = {.lex_state = 57},
  [330] = {.lex_state = 57},
  [331] = {.lex_state = 57},
  [332] = {.lex_state = 56},
  [333] = {.lex_state = 57},
  [334] = {.lex_state = 57},
  [335] = {.lex_state = 57},
  [336] = {.lex_state = 57},
  [337] = {.lex_state = 56},
  [338] = {.lex_state = 57},
  [339] = {.lex_state = 56},
  [340] = {.lex_state = 56},
  [341] = {.lex_state = 58},
  [342] = {.lex_state = 56},
  [343] = {.lex_state = 58},
  [344] = {.lex_state = 58},
  [345] = {.lex_state = 58},
  [346] = {.lex_state = 58},
  [347] = {.lex_state = 56},
  [348] = {.lex_state = 58},
  [349] = {.lex_state = 0, .external_lex_state = 3},
  [350] = {.lex_state = 0, .external_lex_state = 3},
  [351] = {.lex_state = 58},
  [352] = {.lex_state = 58},
  [353] = {.lex_state = 58},
  [354] = {.lex_state = 0, .external_lex_state = 3},
  [355] = {.lex_state = 58},
  [356] = {.lex_state = 0, .external_lex_state = 3},
  [357] = {.lex_state = 0, .external_lex_state = 3},
  [358] = {.lex_state = 58},
  [359] = {.lex_state = 56},
  [360] = {.lex_state = 58},
  [361] = {.lex_state = 56},
  [362] = {.lex_state = 110},
  [363] = {.lex_state = 58},
  [364] = {.lex_state = 56},
  [365] = {.lex_state = 58},
  [366] = {.lex_state = 56},
  [367] = {.lex_state = 56},
  [368] = {.lex_state = 56},
  [369] = {.lex_state = 56},
  [370] = {.lex_state = 56},
  [371] = {.lex_state = 56},
  [372] = {.lex_state = 56},
  [373] = {.lex_state = 56},
  [374] = {.lex_state = 56},
  [375] = {.lex_state = 56},
  [376] = {.lex_state = 56},
  [377] = {.lex_state = 58},
  [378] = {.lex_state = 56},
  [379] = {.lex_state = 58},
  [380] = {.lex_state = 56},
  [381] = {.lex_state = 56},
  [382] = {.lex_state = 56},
  [383] = {.lex_state = 56},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 57},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 56},
  [389] = {.lex_state = 56},
  [390] = {.lex_state = 56},
  [391] = {.lex_state = 56},
  [392] = {.lex_state = 56},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 56},
  [396] = {.lex_state = 56},
  [397] = {.lex_state = 56},
  [398] = {.lex_state = 56},
  [399] = {.lex_state = 56},
  [400] = {.lex_state = 56},
  [401] = {.lex_state = 56},
  [402] = {.lex_state = 56},
  [403] = {.lex_state = 56},
  [404] = {.lex_state = 56},
  [405] = {.lex_state = 56},
  [406] = {.lex_state = 56},
  [407] = {.lex_state = 56},
  [408] = {.lex_state = 56},
  [409] = {.lex_state = 56},
  [410] = {.lex_state = 56},
  [411] = {.lex_state = 56},
  [412] = {.lex_state = 56},
  [413] = {.lex_state = 56},
  [414] = {.lex_state = 56},
  [415] = {.lex_state = 56},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 56},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 56},
  [420] = {.lex_state = 56},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 56},
  [423] = {.lex_state = 56},
  [424] = {.lex_state = 56},
  [425] = {.lex_state = 56},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 56},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 56},
  [431] = {.lex_state = 53},
  [432] = {.lex_state = 56},
  [433] = {.lex_state = 53},
  [434] = {.lex_state = 56},
  [435] = {.lex_state = 56},
  [436] = {.lex_state = 0, .external_lex_state = 3},
  [437] = {.lex_state = 56},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 56},
  [440] = {.lex_state = 56},
  [441] = {.lex_state = 56},
  [442] = {.lex_state = 0, .external_lex_state = 3},
  [443] = {.lex_state = 0, .external_lex_state = 3},
  [444] = {.lex_state = 56},
  [445] = {.lex_state = 0, .external_lex_state = 3},
  [446] = {.lex_state = 56},
  [447] = {.lex_state = 0, .external_lex_state = 3},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 56},
  [451] = {.lex_state = 56},
  [452] = {.lex_state = 56},
  [453] = {.lex_state = 54},
  [454] = {.lex_state = 56},
  [455] = {.lex_state = 54},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 111},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 56},
  [462] = {.lex_state = 56},
  [463] = {.lex_state = 56},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 56},
  [466] = {.lex_state = 56},
  [467] = {.lex_state = 56},
  [468] = {.lex_state = 56},
  [469] = {.lex_state = 56},
  [470] = {.lex_state = 57},
  [471] = {.lex_state = 56},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 56},
  [474] = {.lex_state = 56},
  [475] = {.lex_state = 56},
  [476] = {.lex_state = 56},
  [477] = {.lex_state = 56},
  [478] = {.lex_state = 58},
  [479] = {.lex_state = 56},
  [480] = {.lex_state = 56},
  [481] = {.lex_state = 56},
  [482] = {.lex_state = 56},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 56},
  [485] = {.lex_state = 58},
  [486] = {.lex_state = 56},
  [487] = {.lex_state = 56},
  [488] = {.lex_state = 56},
  [489] = {.lex_state = 56},
  [490] = {.lex_state = 56},
  [491] = {.lex_state = 56},
  [492] = {.lex_state = 56},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 111},
  [495] = {.lex_state = 56},
  [496] = {.lex_state = 58},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 56},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 56},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 56},
  [503] = {.lex_state = 56},
  [504] = {.lex_state = 56},
  [505] = {.lex_state = 56},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 56},
  [509] = {.lex_state = 56},
  [510] = {.lex_state = 56},
  [511] = {.lex_state = 56},
  [512] = {.lex_state = 56},
  [513] = {.lex_state = 56},
  [514] = {.lex_state = 56},
  [515] = {.lex_state = 56},
  [516] = {.lex_state = 56},
  [517] = {.lex_state = 56},
  [518] = {.lex_state = 56},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 56},
  [521] = {.lex_state = 56},
  [522] = {.lex_state = 56},
  [523] = {.lex_state = 56},
  [524] = {.lex_state = 56},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 56},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 56},
  [529] = {.lex_state = 56},
  [530] = {.lex_state = 56},
  [531] = {.lex_state = 56},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 56},
  [534] = {.lex_state = 56},
  [535] = {.lex_state = 56},
  [536] = {.lex_state = 56},
  [537] = {.lex_state = 56},
  [538] = {.lex_state = 56},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 56},
  [541] = {.lex_state = 56},
  [542] = {.lex_state = 56},
  [543] = {.lex_state = 56},
  [544] = {.lex_state = 56},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 56},
  [547] = {.lex_state = 56},
  [548] = {.lex_state = 56},
  [549] = {.lex_state = 56},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 56},
  [552] = {.lex_state = 56},
  [553] = {.lex_state = 56},
  [554] = {.lex_state = 56},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 56},
  [557] = {.lex_state = 56},
  [558] = {.lex_state = 56},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 56},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 56},
  [563] = {.lex_state = 56},
  [564] = {.lex_state = 56},
  [565] = {.lex_state = 56},
  [566] = {.lex_state = 56},
  [567] = {.lex_state = 56},
  [568] = {.lex_state = 56},
  [569] = {.lex_state = 60},
  [570] = {.lex_state = 56},
  [571] = {.lex_state = 56},
  [572] = {.lex_state = 56},
  [573] = {.lex_state = 56},
  [574] = {.lex_state = 56},
  [575] = {.lex_state = 56},
  [576] = {.lex_state = 56},
  [577] = {.lex_state = 56},
  [578] = {.lex_state = 56},
  [579] = {.lex_state = 56},
  [580] = {.lex_state = 56},
  [581] = {.lex_state = 56},
  [582] = {.lex_state = 56},
  [583] = {.lex_state = 56},
  [584] = {.lex_state = 56},
  [585] = {.lex_state = 111},
  [586] = {.lex_state = 56},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 56},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 58},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 56},
  [600] = {.lex_state = 56},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 56},
  [605] = {.lex_state = 56},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 56},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 58},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [aux_sym__org_stars_token1] = ACTIONS(1),
    [sym_atat] = ACTIONS(1),
    [sym_at] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_slash] = ACTIONS(1),
    [sym_plus] = ACTIONS(1),
    [sym_minus] = ACTIONS(1),
    [sym_flag] = ACTIONS(1),
    [sym__none] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_account] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [anon_sym_txn] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_pushtag] = ACTIONS(1),
    [anon_sym_poptag] = ACTIONS(1),
    [anon_sym_pushmeta] = ACTIONS(1),
    [anon_sym_popmeta] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_pad] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_price] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_document] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_plugin] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__UTF_8_1] = ACTIONS(1),
    [aux_sym__UTF_8_2_token1] = ACTIONS(1),
    [aux_sym__UTF_8_3_token1] = ACTIONS(1),
    [aux_sym__UTF_8_3_token2] = ACTIONS(1),
    [aux_sym__UTF_8_3_token3] = ACTIONS(1),
    [aux_sym__UTF_8_3_token4] = ACTIONS(1),
    [aux_sym__UTF_8_4_token1] = ACTIONS(1),
    [aux_sym__UTF_8_4_token2] = ACTIONS(1),
    [aux_sym__UTF_8_4_token3] = ACTIONS(1),
    [sym__stars] = ACTIONS(1),
    [sym__sectionend] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(456),
    [sym__nl] = STATE(7),
    [sym_section] = STATE(7),
    [sym__org_stars] = STATE(455),
    [sym_headline] = STATE(2),
    [sym_transaction] = STATE(264),
    [sym_pushtag] = STATE(253),
    [sym_poptag] = STATE(253),
    [sym_pushmeta] = STATE(253),
    [sym_popmeta] = STATE(253),
    [sym_open] = STATE(264),
    [sym_close] = STATE(264),
    [sym_commodity] = STATE(264),
    [sym_pad] = STATE(264),
    [sym_balance] = STATE(264),
    [sym_price] = STATE(264),
    [sym_event] = STATE(264),
    [sym_query] = STATE(264),
    [sym_note] = STATE(264),
    [sym_document] = STATE(264),
    [sym_custom] = STATE(264),
    [sym__entry] = STATE(7),
    [sym_option] = STATE(253),
    [sym_include] = STATE(253),
    [sym_plugin] = STATE(253),
    [sym__directive] = STATE(7),
    [sym__declarations] = STATE(7),
    [sym_comment] = STATE(454),
    [sym__skipped_lines] = STATE(7),
    [aux_sym_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_CR] = ACTIONS(7),
    [sym__eol] = ACTIONS(5),
    [sym_flag] = ACTIONS(9),
    [sym_date] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_pushtag] = ACTIONS(13),
    [anon_sym_poptag] = ACTIONS(15),
    [anon_sym_pushmeta] = ACTIONS(17),
    [anon_sym_popmeta] = ACTIONS(19),
    [anon_sym_option] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_plugin] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [sym__stars] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(33), 1,
      anon_sym_CR,
    ACTIONS(37), 1,
      sym_date,
    ACTIONS(39), 1,
      anon_sym_pushtag,
    ACTIONS(41), 1,
      anon_sym_poptag,
    ACTIONS(43), 1,
      anon_sym_pushmeta,
    ACTIONS(45), 1,
      anon_sym_popmeta,
    ACTIONS(47), 1,
      anon_sym_option,
    ACTIONS(49), 1,
      anon_sym_include,
    ACTIONS(51), 1,
      anon_sym_plugin,
    ACTIONS(53), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(354), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(455), 1,
      sym__org_stars,
    STATE(486), 1,
      sym_comment,
    ACTIONS(31), 2,
      anon_sym_LF,
      sym__eol,
    ACTIONS(35), 2,
      sym_flag,
      anon_sym_COLON,
    STATE(5), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(255), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(257), 12,
      sym_transaction,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
  [91] = 22,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(37), 1,
      sym_date,
    ACTIONS(39), 1,
      anon_sym_pushtag,
    ACTIONS(41), 1,
      anon_sym_poptag,
    ACTIONS(43), 1,
      anon_sym_pushmeta,
    ACTIONS(45), 1,
      anon_sym_popmeta,
    ACTIONS(47), 1,
      anon_sym_option,
    ACTIONS(49), 1,
      anon_sym_include,
    ACTIONS(51), 1,
      anon_sym_plugin,
    ACTIONS(57), 1,
      anon_sym_CR,
    ACTIONS(59), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(350), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(455), 1,
      sym__org_stars,
    STATE(486), 1,
      sym_comment,
    ACTIONS(35), 2,
      sym_flag,
      anon_sym_COLON,
    ACTIONS(55), 2,
      anon_sym_LF,
      sym__eol,
    STATE(8), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(255), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(257), 12,
      sym_transaction,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
  [182] = 22,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(37), 1,
      sym_date,
    ACTIONS(39), 1,
      anon_sym_pushtag,
    ACTIONS(41), 1,
      anon_sym_poptag,
    ACTIONS(43), 1,
      anon_sym_pushmeta,
    ACTIONS(45), 1,
      anon_sym_popmeta,
    ACTIONS(47), 1,
      anon_sym_option,
    ACTIONS(49), 1,
      anon_sym_include,
    ACTIONS(51), 1,
      anon_sym_plugin,
    ACTIONS(63), 1,
      anon_sym_CR,
    ACTIONS(65), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(349), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(455), 1,
      sym__org_stars,
    STATE(486), 1,
      sym_comment,
    ACTIONS(35), 2,
      sym_flag,
      anon_sym_COLON,
    ACTIONS(61), 2,
      anon_sym_LF,
      sym__eol,
    STATE(3), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(255), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(257), 12,
      sym_transaction,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
  [273] = 22,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(37), 1,
      sym_date,
    ACTIONS(39), 1,
      anon_sym_pushtag,
    ACTIONS(41), 1,
      anon_sym_poptag,
    ACTIONS(43), 1,
      anon_sym_pushmeta,
    ACTIONS(45), 1,
      anon_sym_popmeta,
    ACTIONS(47), 1,
      anon_sym_option,
    ACTIONS(49), 1,
      anon_sym_include,
    ACTIONS(51), 1,
      anon_sym_plugin,
    ACTIONS(57), 1,
      anon_sym_CR,
    ACTIONS(67), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(357), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(455), 1,
      sym__org_stars,
    STATE(486), 1,
      sym_comment,
    ACTIONS(35), 2,
      sym_flag,
      anon_sym_COLON,
    ACTIONS(55), 2,
      anon_sym_LF,
      sym__eol,
    STATE(8), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(255), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(257), 12,
      sym_transaction,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
  [364] = 20,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      anon_sym_CR,
    ACTIONS(80), 1,
      sym_date,
    ACTIONS(83), 1,
      anon_sym_pushtag,
    ACTIONS(86), 1,
      anon_sym_poptag,
    ACTIONS(89), 1,
      anon_sym_pushmeta,
    ACTIONS(92), 1,
      anon_sym_popmeta,
    ACTIONS(95), 1,
      anon_sym_option,
    ACTIONS(98), 1,
      anon_sym_include,
    ACTIONS(101), 1,
      anon_sym_plugin,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      sym__stars,
    STATE(2), 1,
      sym_headline,
    STATE(454), 1,
      sym_comment,
    STATE(455), 1,
      sym__org_stars,
    ACTIONS(71), 2,
      anon_sym_LF,
      sym__eol,
    ACTIONS(77), 2,
      sym_flag,
      anon_sym_COLON,
    STATE(6), 7,
      sym__nl,
      sym_section,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_file_repeat1,
    STATE(253), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(264), 12,
      sym_transaction,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
  [450] = 20,
    ACTIONS(11), 1,
      sym_date,
    ACTIONS(13), 1,
      anon_sym_pushtag,
    ACTIONS(15), 1,
      anon_sym_poptag,
    ACTIONS(17), 1,
      anon_sym_pushmeta,
    ACTIONS(19), 1,
      anon_sym_popmeta,
    ACTIONS(21), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_plugin,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      anon_sym_CR,
    STATE(2), 1,
      sym_headline,
    STATE(454), 1,
      sym_comment,
    STATE(455), 1,
      sym__org_stars,
    ACTIONS(9), 2,
      sym_flag,
      anon_sym_COLON,
    ACTIONS(112), 2,
      anon_sym_LF,
      sym__eol,
    STATE(6), 7,
      sym__nl,
      sym_section,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_file_repeat1,
    STATE(253), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(264), 12,
      sym_transaction,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
  [536] = 17,
    ACTIONS(119), 1,
      anon_sym_CR,
    ACTIONS(125), 1,
      sym_date,
    ACTIONS(128), 1,
      anon_sym_pushtag,
    ACTIONS(131), 1,
      anon_sym_poptag,
    ACTIONS(134), 1,
      anon_sym_pushmeta,
    ACTIONS(137), 1,
      anon_sym_popmeta,
    ACTIONS(140), 1,
      anon_sym_option,
    ACTIONS(143), 1,
      anon_sym_include,
    ACTIONS(146), 1,
      anon_sym_plugin,
    ACTIONS(149), 1,
      anon_sym_SEMI,
    STATE(486), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_LF,
      sym__eol,
    ACTIONS(122), 2,
      sym_flag,
      anon_sym_COLON,
    ACTIONS(152), 2,
      sym__stars,
      sym__sectionend,
    STATE(8), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(255), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(257), 12,
      sym_transaction,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
  [613] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(154), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(156), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [642] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(160), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(162), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [671] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(164), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(25), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(166), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [700] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(168), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(9), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(170), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [729] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(172), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(174), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [758] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(176), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(13), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(178), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [787] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(180), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(10), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(182), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [816] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(160), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(162), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [845] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(188), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(186), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [874] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(192), 2,
      sym__stars,
      sym__sectionend,
    STATE(38), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(190), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [903] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(196), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(194), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [932] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(164), 2,
      sym__stars,
      sym__sectionend,
    STATE(17), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(166), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [961] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(198), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(37), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(200), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [990] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(202), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(204), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1019] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(196), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(194), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1048] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(192), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(28), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(190), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1077] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(188), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(186), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1106] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(206), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(23), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(208), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1135] = 4,
    ACTIONS(214), 1,
      sym__indent,
    ACTIONS(210), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(212), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1164] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(217), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(219), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1193] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(223), 2,
      sym__stars,
      sym__sectionend,
    STATE(30), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(221), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1222] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(202), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(204), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1251] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(198), 2,
      sym__stars,
      sym__sectionend,
    STATE(35), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(200), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1280] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(176), 2,
      sym__stars,
      sym__sectionend,
    STATE(42), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(178), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1309] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(168), 2,
      sym__stars,
      sym__sectionend,
    STATE(40), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(170), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1338] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(206), 2,
      sym__stars,
      sym__sectionend,
    STATE(19), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(208), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1367] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(227), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(225), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1396] = 4,
    ACTIONS(229), 1,
      sym__indent,
    ACTIONS(210), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(212), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1425] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(227), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(225), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1454] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(217), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(219), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1483] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(223), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(221), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1512] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(154), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(156), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1541] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(180), 2,
      sym__stars,
      sym__sectionend,
    STATE(16), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(182), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1570] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(172), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(174), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1599] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(236), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(232), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1627] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(238), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(134), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(240), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1655] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(244), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(98), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(246), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1683] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(250), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(248), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1711] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(254), 2,
      sym__stars,
      sym__sectionend,
    STATE(118), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(252), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1739] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(258), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(256), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1767] = 4,
    ACTIONS(262), 1,
      sym__indent,
    ACTIONS(265), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(260), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1795] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(269), 2,
      sym__stars,
      sym__sectionend,
    STATE(117), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(267), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1823] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(273), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(271), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1851] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(277), 2,
      sym__stars,
      sym__sectionend,
    STATE(115), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(275), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1879] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(281), 2,
      sym__stars,
      sym__sectionend,
    STATE(113), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(279), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1907] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(285), 2,
      sym__stars,
      sym__sectionend,
    STATE(90), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(283), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1935] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(244), 2,
      sym__stars,
      sym__sectionend,
    STATE(89), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(246), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1963] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(289), 2,
      sym__stars,
      sym__sectionend,
    STATE(88), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(287), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1991] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(293), 2,
      sym__stars,
      sym__sectionend,
    STATE(82), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(291), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2019] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(297), 2,
      sym__stars,
      sym__sectionend,
    STATE(75), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(295), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2047] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(301), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(299), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2075] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(305), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(303), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2103] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(309), 2,
      sym__stars,
      sym__sectionend,
    STATE(69), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(307), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2131] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(313), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(311), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2159] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(317), 2,
      sym__stars,
      sym__sectionend,
    STATE(43), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(315), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2187] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(321), 2,
      sym__stars,
      sym__sectionend,
    STATE(46), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(319), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2215] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(325), 2,
      sym__stars,
      sym__sectionend,
    STATE(48), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(323), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2243] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(329), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(327), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2271] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(333), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(331), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2299] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(337), 2,
      sym__stars,
      sym__sectionend,
    STATE(121), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(335), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2327] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(341), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(339), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2355] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(345), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(343), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2383] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(349), 2,
      sym__stars,
      sym__sectionend,
    STATE(51), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(347), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2411] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(353), 2,
      sym__stars,
      sym__sectionend,
    STATE(60), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(351), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2439] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(238), 2,
      sym__stars,
      sym__sectionend,
    STATE(62), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(240), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2467] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(357), 2,
      sym__stars,
      sym__sectionend,
    STATE(66), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(355), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2495] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(361), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(359), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2523] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(333), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(331), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2551] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(365), 2,
      sym__stars,
      sym__sectionend,
    STATE(122), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(363), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2579] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(367), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(369), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2607] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(371), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(373), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2635] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(375), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(377), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2663] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(379), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(381), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2691] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(385), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(383), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2719] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(387), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(389), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2747] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(391), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(393), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2775] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(395), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(397), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2803] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(357), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(130), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(355), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2831] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(401), 2,
      sym__stars,
      sym__sectionend,
    STATE(123), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(399), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2859] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(405), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(403), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2887] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(409), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(407), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2915] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(413), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(411), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2943] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(415), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(417), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2971] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(421), 2,
      sym__stars,
      sym__sectionend,
    STATE(119), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(419), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2999] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(423), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(78), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(425), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3027] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(353), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(136), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(351), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3055] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(427), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(429), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3083] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(431), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(433), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3111] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(413), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(411), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3139] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(409), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(407), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3167] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(405), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(403), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3195] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(401), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(79), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(399), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3223] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(385), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(383), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3251] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(365), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(80), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(363), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3279] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(361), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(359), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3307] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(345), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(343), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3335] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(341), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(339), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3363] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(337), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(81), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(335), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3391] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(421), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(84), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(419), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3419] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(349), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(126), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(347), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3447] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(236), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(232), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3475] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(250), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(248), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3503] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(254), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(85), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(252), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3531] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(258), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(256), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3559] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(431), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(433), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3587] = 4,
    ACTIONS(435), 1,
      sym__indent,
    ACTIONS(265), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(260), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3615] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(427), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(429), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3643] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(423), 2,
      sym__stars,
      sym__sectionend,
    STATE(124), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(425), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3671] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(415), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(417), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3699] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(395), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(397), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3727] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(391), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(393), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3755] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(387), 2,
      sym__stars,
      sym__sectionend,
    STATE(67), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(389), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3783] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(379), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(381), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3811] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(375), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(377), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3839] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(371), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(373), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3867] = 4,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(367), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(369), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3895] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(269), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(91), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(267), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3923] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(273), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(271), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3951] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(277), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(95), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(275), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3979] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(281), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(96), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(279), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4007] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(285), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(97), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(283), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4035] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(329), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(327), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4063] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(325), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(112), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(323), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4091] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(321), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(110), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(319), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4119] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(317), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(109), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(315), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4147] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(313), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(311), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4175] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(309), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(105), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(307), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4203] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(305), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(303), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4231] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(301), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(104), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(299), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4259] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(297), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(103), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(295), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4287] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(293), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(101), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(291), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4315] = 4,
    ACTIONS(242), 1,
      sym__indent,
    ACTIONS(289), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(99), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(287), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4343] = 2,
    ACTIONS(440), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(438), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4365] = 2,
    ACTIONS(442), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(444), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4387] = 2,
    ACTIONS(446), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(448), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4409] = 2,
    ACTIONS(450), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(452), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4431] = 2,
    ACTIONS(454), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(456), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4453] = 2,
    ACTIONS(458), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(460), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4475] = 2,
    ACTIONS(462), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(464), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4497] = 2,
    ACTIONS(466), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(468), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4519] = 2,
    ACTIONS(470), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(472), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4541] = 2,
    ACTIONS(474), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(476), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4563] = 2,
    ACTIONS(478), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(480), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4585] = 2,
    ACTIONS(482), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(484), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4607] = 2,
    ACTIONS(486), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(488), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4629] = 2,
    ACTIONS(490), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(492), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4651] = 2,
    ACTIONS(494), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(496), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4673] = 2,
    ACTIONS(498), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(500), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4695] = 2,
    ACTIONS(502), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(504), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4717] = 2,
    ACTIONS(506), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(508), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4739] = 2,
    ACTIONS(510), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(512), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4761] = 2,
    ACTIONS(514), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(516), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4783] = 8,
    ACTIONS(524), 1,
      sym_number,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(520), 1,
      sym_amount,
    STATE(533), 1,
      sym_value,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    ACTIONS(520), 3,
      sym__none,
      sym_bool,
      sym_currency,
    ACTIONS(522), 4,
      sym_date,
      sym_account,
      sym_string,
      sym_tag,
    STATE(341), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4817] = 2,
    ACTIONS(528), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(530), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4839] = 2,
    ACTIONS(532), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(534), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4861] = 2,
    ACTIONS(536), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(538), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4883] = 2,
    ACTIONS(540), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(542), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4905] = 2,
    ACTIONS(210), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(212), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4927] = 13,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      sym__eol,
    ACTIONS(546), 1,
      sym_atat,
    ACTIONS(548), 1,
      sym_at,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
    ACTIONS(554), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    STATE(332), 1,
      sym_incomplete_amount,
    STATE(373), 1,
      sym_cost_spec,
    STATE(553), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4971] = 13,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
    ACTIONS(554), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(558), 1,
      sym__eol,
    ACTIONS(560), 1,
      sym_atat,
    ACTIONS(562), 1,
      sym_at,
    STATE(337), 1,
      sym_incomplete_amount,
    STATE(376), 1,
      sym_cost_spec,
    STATE(474), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5015] = 2,
    ACTIONS(440), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(438), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5037] = 2,
    ACTIONS(564), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(566), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5059] = 13,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
    ACTIONS(554), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(568), 1,
      sym__eol,
    ACTIONS(570), 1,
      sym_atat,
    ACTIONS(572), 1,
      sym_at,
    STATE(339), 1,
      sym_incomplete_amount,
    STATE(368), 1,
      sym_cost_spec,
    STATE(541), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5103] = 2,
    ACTIONS(574), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(576), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5125] = 2,
    ACTIONS(578), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(580), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5147] = 2,
    ACTIONS(582), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(584), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5169] = 2,
    ACTIONS(586), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(588), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5191] = 2,
    ACTIONS(590), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(592), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5213] = 2,
    ACTIONS(594), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(596), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5235] = 2,
    ACTIONS(598), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(600), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5257] = 2,
    ACTIONS(602), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(604), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5279] = 2,
    ACTIONS(265), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(260), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5301] = 2,
    ACTIONS(606), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(608), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5323] = 2,
    ACTIONS(210), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(212), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5345] = 2,
    ACTIONS(610), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(612), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5367] = 2,
    ACTIONS(446), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(448), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5389] = 2,
    ACTIONS(265), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(260), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5411] = 2,
    ACTIONS(614), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(616), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5433] = 2,
    ACTIONS(618), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(620), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5455] = 2,
    ACTIONS(622), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(624), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5477] = 2,
    ACTIONS(450), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(452), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5499] = 2,
    ACTIONS(454), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(456), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5521] = 2,
    ACTIONS(458), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(460), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5543] = 2,
    ACTIONS(462), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(464), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5565] = 2,
    ACTIONS(466), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(468), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5587] = 2,
    ACTIONS(470), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(472), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5609] = 2,
    ACTIONS(626), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(628), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5631] = 2,
    ACTIONS(630), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(632), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5653] = 2,
    ACTIONS(636), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(634), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5675] = 2,
    ACTIONS(474), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(476), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5697] = 2,
    ACTIONS(478), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(480), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5719] = 2,
    ACTIONS(482), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(484), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5741] = 2,
    ACTIONS(486), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(488), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5763] = 2,
    ACTIONS(640), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(638), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5785] = 2,
    ACTIONS(642), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(644), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5807] = 2,
    ACTIONS(648), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(646), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5829] = 2,
    ACTIONS(490), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(492), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5851] = 2,
    ACTIONS(494), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(496), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5873] = 2,
    ACTIONS(498), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(500), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5895] = 2,
    ACTIONS(636), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(634), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5917] = 2,
    ACTIONS(652), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(650), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5939] = 11,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      sym_currency,
    ACTIONS(658), 1,
      sym_number,
    ACTIONS(660), 1,
      anon_sym_POUND,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      sym_cost_comp,
    STATE(429), 1,
      sym_compound_amount,
    STATE(470), 1,
      sym__cost_comp_list,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    ACTIONS(654), 3,
      anon_sym_STAR,
      sym_date,
      sym_string,
    STATE(317), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5979] = 11,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      sym_currency,
    ACTIONS(658), 1,
      sym_number,
    ACTIONS(660), 1,
      anon_sym_POUND,
    ACTIONS(662), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(385), 1,
      sym_cost_comp,
    STATE(429), 1,
      sym_compound_amount,
    STATE(469), 1,
      sym__cost_comp_list,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    ACTIONS(654), 3,
      anon_sym_STAR,
      sym_date,
      sym_string,
    STATE(317), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [6019] = 2,
    ACTIONS(502), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(504), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6041] = 2,
    ACTIONS(442), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(444), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6063] = 2,
    ACTIONS(506), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(508), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6085] = 2,
    ACTIONS(510), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(512), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6107] = 2,
    ACTIONS(640), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(638), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6129] = 13,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
    ACTIONS(554), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(664), 1,
      sym__eol,
    ACTIONS(666), 1,
      sym_atat,
    ACTIONS(668), 1,
      sym_at,
    STATE(340), 1,
      sym_incomplete_amount,
    STATE(375), 1,
      sym_cost_spec,
    STATE(466), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [6173] = 2,
    ACTIONS(648), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(646), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6195] = 2,
    ACTIONS(670), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(672), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6217] = 2,
    ACTIONS(514), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(516), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6239] = 2,
    ACTIONS(528), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(530), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6261] = 2,
    ACTIONS(532), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(534), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6283] = 2,
    ACTIONS(536), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(538), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6305] = 2,
    ACTIONS(540), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(542), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6327] = 2,
    ACTIONS(676), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(674), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6349] = 2,
    ACTIONS(564), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(566), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6371] = 2,
    ACTIONS(678), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(680), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6393] = 2,
    ACTIONS(574), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(576), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6415] = 2,
    ACTIONS(578), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(580), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6437] = 2,
    ACTIONS(582), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(584), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6459] = 2,
    ACTIONS(652), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(650), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6481] = 2,
    ACTIONS(586), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(588), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6503] = 2,
    ACTIONS(590), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(592), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6525] = 2,
    ACTIONS(594), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(596), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6547] = 2,
    ACTIONS(598), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(600), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6569] = 2,
    ACTIONS(602), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(604), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6591] = 2,
    ACTIONS(684), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(682), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6613] = 2,
    ACTIONS(606), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(608), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6635] = 2,
    ACTIONS(688), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(686), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6657] = 2,
    ACTIONS(610), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(612), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6679] = 2,
    ACTIONS(614), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(616), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6701] = 2,
    ACTIONS(618), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(620), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6723] = 2,
    ACTIONS(622), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(624), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6745] = 2,
    ACTIONS(678), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(680), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6767] = 2,
    ACTIONS(670), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(672), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6789] = 2,
    ACTIONS(626), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(628), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6811] = 2,
    ACTIONS(630), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(632), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6833] = 2,
    ACTIONS(676), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(674), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6855] = 2,
    ACTIONS(688), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(686), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6877] = 2,
    ACTIONS(642), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(644), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6899] = 2,
    ACTIONS(684), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(682), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6921] = 2,
    ACTIONS(690), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(692), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6942] = 2,
    ACTIONS(694), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(696), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6963] = 2,
    ACTIONS(698), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(700), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6984] = 2,
    ACTIONS(694), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(696), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7005] = 2,
    ACTIONS(704), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(702), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7026] = 2,
    ACTIONS(708), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(706), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7047] = 14,
    ACTIONS(712), 1,
      sym_flag,
    ACTIONS(714), 1,
      anon_sym_open,
    ACTIONS(716), 1,
      anon_sym_close,
    ACTIONS(718), 1,
      anon_sym_commodity,
    ACTIONS(720), 1,
      anon_sym_pad,
    ACTIONS(722), 1,
      anon_sym_balance,
    ACTIONS(724), 1,
      anon_sym_price,
    ACTIONS(726), 1,
      anon_sym_event,
    ACTIONS(728), 1,
      anon_sym_query,
    ACTIONS(730), 1,
      anon_sym_note,
    ACTIONS(732), 1,
      anon_sym_document,
    ACTIONS(734), 1,
      anon_sym_custom,
    STATE(318), 1,
      sym_txn,
    ACTIONS(710), 3,
      anon_sym_STAR,
      anon_sym_txn,
      anon_sym_POUND,
  [7092] = 2,
    ACTIONS(736), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(738), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7113] = 2,
    ACTIONS(740), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(742), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7134] = 2,
    ACTIONS(746), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(744), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7155] = 2,
    ACTIONS(750), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(748), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7176] = 2,
    ACTIONS(754), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(752), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7197] = 2,
    ACTIONS(708), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(706), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7218] = 2,
    ACTIONS(758), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(756), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7239] = 2,
    ACTIONS(754), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(752), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7260] = 8,
    ACTIONS(760), 1,
      sym__eol,
    ACTIONS(766), 1,
      sym_number,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    STATE(320), 1,
      sym_amount,
    ACTIONS(762), 2,
      sym_plus,
      sym_minus,
    STATE(281), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(764), 4,
      sym_bool,
      sym_date,
      sym_account,
      sym_string,
    STATE(312), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [7293] = 2,
    ACTIONS(698), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(700), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7314] = 2,
    ACTIONS(758), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(756), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7335] = 2,
    ACTIONS(772), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(770), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7356] = 2,
    ACTIONS(776), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(774), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7377] = 2,
    ACTIONS(778), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(780), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7398] = 2,
    ACTIONS(784), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(782), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7419] = 2,
    ACTIONS(750), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(748), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7440] = 2,
    ACTIONS(786), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(788), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7461] = 2,
    ACTIONS(746), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(744), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7482] = 2,
    ACTIONS(704), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(702), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7503] = 2,
    ACTIONS(792), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(790), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7524] = 2,
    ACTIONS(778), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(780), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7545] = 8,
    ACTIONS(766), 1,
      sym_number,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(794), 1,
      sym__eol,
    STATE(320), 1,
      sym_amount,
    ACTIONS(762), 2,
      sym_plus,
      sym_minus,
    STATE(281), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(764), 4,
      sym_bool,
      sym_date,
      sym_account,
      sym_string,
    STATE(312), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [7578] = 8,
    ACTIONS(796), 1,
      sym__eol,
    ACTIONS(804), 1,
      sym_number,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    STATE(320), 1,
      sym_amount,
    ACTIONS(798), 2,
      sym_plus,
      sym_minus,
    STATE(281), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(801), 4,
      sym_bool,
      sym_date,
      sym_account,
      sym_string,
    STATE(312), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [7611] = 8,
    ACTIONS(766), 1,
      sym_number,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(810), 1,
      sym__eol,
    STATE(320), 1,
      sym_amount,
    ACTIONS(762), 2,
      sym_plus,
      sym_minus,
    STATE(267), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(764), 4,
      sym_bool,
      sym_date,
      sym_account,
      sym_string,
    STATE(312), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [7644] = 14,
    ACTIONS(712), 1,
      sym_flag,
    ACTIONS(812), 1,
      anon_sym_open,
    ACTIONS(814), 1,
      anon_sym_close,
    ACTIONS(816), 1,
      anon_sym_commodity,
    ACTIONS(818), 1,
      anon_sym_pad,
    ACTIONS(820), 1,
      anon_sym_balance,
    ACTIONS(822), 1,
      anon_sym_price,
    ACTIONS(824), 1,
      anon_sym_event,
    ACTIONS(826), 1,
      anon_sym_query,
    ACTIONS(828), 1,
      anon_sym_note,
    ACTIONS(830), 1,
      anon_sym_document,
    ACTIONS(832), 1,
      anon_sym_custom,
    STATE(327), 1,
      sym_txn,
    ACTIONS(710), 3,
      anon_sym_STAR,
      anon_sym_txn,
      anon_sym_POUND,
  [7689] = 2,
    ACTIONS(786), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(788), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7710] = 2,
    ACTIONS(834), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(836), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7731] = 2,
    ACTIONS(792), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(790), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7752] = 2,
    ACTIONS(772), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(770), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7773] = 8,
    ACTIONS(766), 1,
      sym_number,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      sym__eol,
    STATE(320), 1,
      sym_amount,
    ACTIONS(762), 2,
      sym_plus,
      sym_minus,
    STATE(280), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(764), 4,
      sym_bool,
      sym_date,
      sym_account,
      sym_string,
    STATE(312), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [7806] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      sym_currency,
    ACTIONS(658), 1,
      sym_number,
    ACTIONS(660), 1,
      anon_sym_POUND,
    STATE(418), 1,
      sym_cost_comp,
    STATE(429), 1,
      sym_compound_amount,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    ACTIONS(654), 3,
      anon_sym_STAR,
      sym_date,
      sym_string,
    STATE(317), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [7840] = 11,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(840), 1,
      sym__eol,
    ACTIONS(842), 1,
      anon_sym_STAR,
    ACTIONS(846), 1,
      sym_account,
    ACTIONS(850), 1,
      sym_key,
    STATE(381), 1,
      aux_sym_tags_links_repeat1,
    STATE(535), 1,
      sym_key_value,
    STATE(606), 1,
      sym_optflag,
    ACTIONS(844), 2,
      sym_flag,
      anon_sym_POUND,
    ACTIONS(848), 2,
      sym_tag,
      sym_link,
    STATE(534), 2,
      sym_tags_links,
      sym_comment,
  [7877] = 11,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(842), 1,
      anon_sym_STAR,
    ACTIONS(850), 1,
      sym_key,
    ACTIONS(852), 1,
      sym__eol,
    ACTIONS(854), 1,
      sym_account,
    STATE(381), 1,
      aux_sym_tags_links_repeat1,
    STATE(538), 1,
      sym_key_value,
    STATE(539), 1,
      sym_optflag,
    ACTIONS(844), 2,
      sym_flag,
      anon_sym_POUND,
    ACTIONS(848), 2,
      sym_tag,
      sym_link,
    STATE(542), 2,
      sym_tags_links,
      sym_comment,
  [7914] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(856), 1,
      sym__eol,
    STATE(415), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(560), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [7946] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(858), 1,
      sym__eol,
    STATE(389), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(562), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [7978] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(860), 1,
      sym__eol,
    STATE(424), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(488), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8010] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(862), 1,
      sym__eol,
    STATE(413), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(556), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8042] = 3,
    ACTIONS(866), 1,
      anon_sym_RBRACE,
    STATE(334), 1,
      sym_asterisk,
    ACTIONS(864), 11,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_currency,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_RBRACE_RBRACE,
  [8062] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(868), 1,
      sym__eol,
    STATE(420), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(582), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8094] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(870), 1,
      sym__eol,
    STATE(430), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(578), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8126] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(872), 1,
      sym__eol,
    STATE(432), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(471), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8158] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(874), 1,
      sym__eol,
    STATE(425), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(574), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8190] = 3,
    STATE(336), 1,
      sym_asterisk,
    ACTIONS(866), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(864), 9,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      sym_string,
      anon_sym_LPAREN,
  [8210] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(876), 1,
      sym__eol,
    STATE(410), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(512), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8242] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(878), 1,
      sym__eol,
    STATE(423), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(570), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8274] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(880), 1,
      sym__eol,
    STATE(427), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(577), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8306] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(882), 1,
      sym__eol,
    STATE(406), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(552), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8338] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(884), 1,
      sym__eol,
    STATE(412), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(498), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8370] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(886), 1,
      sym__eol,
    STATE(395), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(544), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8402] = 5,
    ACTIONS(890), 1,
      anon_sym_STAR,
    ACTIONS(892), 1,
      sym_slash,
    ACTIONS(894), 1,
      anon_sym_RBRACE,
    STATE(334), 1,
      sym_asterisk,
    ACTIONS(888), 9,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_currency,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_RBRACE_RBRACE,
  [8426] = 3,
    ACTIONS(894), 1,
      anon_sym_RBRACE,
    STATE(334), 1,
      sym_asterisk,
    ACTIONS(888), 11,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_currency,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_RBRACE_RBRACE,
  [8446] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(896), 1,
      sym__eol,
    STATE(422), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(573), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8478] = 5,
    ACTIONS(890), 1,
      anon_sym_STAR,
    ACTIONS(898), 1,
      sym_slash,
    STATE(336), 1,
      sym_asterisk,
    ACTIONS(894), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(888), 7,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      sym_string,
      anon_sym_LPAREN,
  [8502] = 7,
    ACTIONS(890), 1,
      anon_sym_STAR,
    ACTIONS(898), 1,
      sym_slash,
    ACTIONS(906), 1,
      sym_currency,
    STATE(336), 1,
      sym_asterisk,
    ACTIONS(902), 2,
      sym_plus,
      sym_minus,
    ACTIONS(904), 2,
      sym_bool,
      sym_number,
    ACTIONS(900), 5,
      sym__eol,
      sym_date,
      sym_account,
      sym_string,
      anon_sym_LPAREN,
  [8530] = 3,
    STATE(336), 1,
      sym_asterisk,
    ACTIONS(894), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(888), 9,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      sym_string,
      anon_sym_LPAREN,
  [8550] = 9,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_number,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(908), 1,
      sym__eol,
    STATE(401), 1,
      sym_price_annotation,
    STATE(434), 1,
      sym_incomplete_amount,
    STATE(604), 1,
      sym_comment,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8582] = 2,
    ACTIONS(912), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(910), 9,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      sym_string,
      anon_sym_LPAREN,
  [8599] = 2,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
    ACTIONS(910), 11,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_currency,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_RBRACE_RBRACE,
  [8616] = 8,
    ACTIONS(890), 1,
      anon_sym_STAR,
    ACTIONS(892), 1,
      sym_slash,
    ACTIONS(916), 1,
      sym_currency,
    ACTIONS(918), 1,
      anon_sym_POUND,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
    STATE(334), 1,
      sym_asterisk,
    ACTIONS(914), 2,
      sym_plus,
      sym_minus,
    ACTIONS(920), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [8643] = 8,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(924), 1,
      sym__eol,
    ACTIONS(926), 1,
      sym_string,
    STATE(347), 1,
      sym__txn_strings,
    STATE(381), 1,
      aux_sym_tags_links_repeat1,
    STATE(407), 1,
      sym_tags_links,
    STATE(502), 1,
      sym_comment,
    ACTIONS(848), 2,
      sym_tag,
      sym_link,
  [8669] = 5,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      sym_currency,
    ACTIONS(930), 1,
      sym_number,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(351), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8689] = 2,
    ACTIONS(904), 1,
      sym_number,
    ACTIONS(900), 8,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_bool,
      sym_date,
      sym_account,
      sym_string,
      anon_sym_LPAREN,
  [8703] = 5,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      sym_number,
    STATE(414), 1,
      sym_amount_tolerance,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(344), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8723] = 5,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(934), 1,
      sym_number,
    STATE(477), 1,
      sym_amount,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(353), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8743] = 5,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_currency,
    ACTIONS(938), 1,
      sym_number,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(358), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8763] = 5,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(934), 1,
      sym_number,
    STATE(515), 1,
      sym_amount,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(353), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8783] = 5,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      sym_number,
    STATE(402), 1,
      sym_amount_tolerance,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(344), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8803] = 2,
    ACTIONS(942), 1,
      sym_number,
    ACTIONS(940), 8,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_bool,
      sym_date,
      sym_account,
      sym_string,
      anon_sym_LPAREN,
  [8817] = 8,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(926), 1,
      sym_string,
    ACTIONS(944), 1,
      sym__eol,
    STATE(342), 1,
      sym__txn_strings,
    STATE(381), 1,
      aux_sym_tags_links_repeat1,
    STATE(417), 1,
      sym_tags_links,
    STATE(465), 1,
      sym_comment,
    ACTIONS(848), 2,
      sym_tag,
      sym_link,
  [8843] = 4,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(946), 1,
      sym_number,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(361), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8860] = 4,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(948), 1,
      sym_number,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(359), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8877] = 4,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(950), 1,
      sym_number,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(365), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8894] = 4,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(952), 1,
      sym_number,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(296), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8911] = 8,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
    ACTIONS(554), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(954), 1,
      sym__eol,
    ACTIONS(956), 1,
      sym_atat,
    ACTIONS(958), 1,
      sym_at,
    STATE(372), 1,
      sym_cost_spec,
    STATE(565), 1,
      sym_comment,
  [8936] = 4,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(960), 1,
      sym_number,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(308), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8953] = 4,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      sym_number,
    ACTIONS(518), 2,
      sym_plus,
      sym_minus,
    STATE(309), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8970] = 4,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(964), 1,
      sym_number,
    ACTIONS(762), 2,
      sym_plus,
      sym_minus,
    STATE(301), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8987] = 4,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(966), 1,
      sym_number,
    ACTIONS(762), 2,
      sym_plus,
      sym_minus,
    STATE(313), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9004] = 8,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
    ACTIONS(554), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(968), 1,
      sym__eol,
    ACTIONS(970), 1,
      sym_atat,
    ACTIONS(972), 1,
      sym_at,
    STATE(371), 1,
      sym_cost_spec,
    STATE(468), 1,
      sym_comment,
  [9029] = 4,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(974), 1,
      sym_number,
    ACTIONS(762), 2,
      sym_plus,
      sym_minus,
    STATE(311), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9046] = 8,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
    ACTIONS(554), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(976), 1,
      sym__eol,
    ACTIONS(978), 1,
      sym_atat,
    ACTIONS(980), 1,
      sym_at,
    STATE(367), 1,
      sym_cost_spec,
    STATE(547), 1,
      sym_comment,
  [9071] = 8,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
    ACTIONS(554), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(982), 1,
      sym__eol,
    ACTIONS(984), 1,
      sym_atat,
    ACTIONS(986), 1,
      sym_at,
    STATE(374), 1,
      sym_cost_spec,
    STATE(543), 1,
      sym_comment,
  [9096] = 6,
    ACTIONS(890), 1,
      anon_sym_STAR,
    ACTIONS(892), 1,
      sym_slash,
    ACTIONS(988), 1,
      sym__eol,
    ACTIONS(990), 1,
      sym_currency,
    STATE(334), 1,
      sym_asterisk,
    ACTIONS(914), 2,
      sym_plus,
      sym_minus,
  [9116] = 6,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(992), 1,
      sym__eol,
    STATE(381), 1,
      aux_sym_tags_links_repeat1,
    STATE(408), 1,
      sym_tags_links,
    STATE(500), 1,
      sym_comment,
    ACTIONS(848), 2,
      sym_tag,
      sym_link,
  [9136] = 7,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(994), 1,
      sym__eol,
    ACTIONS(996), 1,
      sym_currency,
    ACTIONS(998), 1,
      sym_string,
    STATE(345), 1,
      aux_sym_open_repeat2,
    STATE(405), 1,
      sym_opt_booking,
    STATE(508), 1,
      sym_comment,
  [9158] = 6,
    ACTIONS(890), 1,
      anon_sym_STAR,
    ACTIONS(892), 1,
      sym_slash,
    ACTIONS(1000), 1,
      sym_currency,
    ACTIONS(1002), 1,
      anon_sym_TILDE,
    STATE(334), 1,
      sym_asterisk,
    ACTIONS(914), 2,
      sym_plus,
      sym_minus,
  [9178] = 7,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(996), 1,
      sym_currency,
    ACTIONS(998), 1,
      sym_string,
    ACTIONS(1004), 1,
      sym__eol,
    STATE(379), 1,
      aux_sym_open_repeat2,
    STATE(398), 1,
      sym_opt_booking,
    STATE(528), 1,
      sym_comment,
  [9200] = 7,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(996), 1,
      sym_currency,
    ACTIONS(998), 1,
      sym_string,
    ACTIONS(1006), 1,
      sym__eol,
    STATE(379), 1,
      aux_sym_open_repeat2,
    STATE(396), 1,
      sym_opt_booking,
    STATE(563), 1,
      sym_comment,
  [9222] = 6,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1008), 1,
      sym__eol,
    STATE(381), 1,
      aux_sym_tags_links_repeat1,
    STATE(400), 1,
      sym_tags_links,
    STATE(523), 1,
      sym_comment,
    ACTIONS(848), 2,
      sym_tag,
      sym_link,
  [9242] = 7,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(996), 1,
      sym_currency,
    ACTIONS(998), 1,
      sym_string,
    ACTIONS(1010), 1,
      sym__eol,
    STATE(346), 1,
      aux_sym_open_repeat2,
    STATE(397), 1,
      sym_opt_booking,
    STATE(473), 1,
      sym_comment,
  [9264] = 6,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(1012), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(356), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(455), 1,
      sym__org_stars,
  [9283] = 6,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(1014), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(356), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(455), 1,
      sym__org_stars,
  [9302] = 5,
    ACTIONS(890), 1,
      anon_sym_STAR,
    ACTIONS(892), 1,
      sym_slash,
    ACTIONS(1016), 1,
      sym_currency,
    STATE(334), 1,
      sym_asterisk,
    ACTIONS(914), 2,
      sym_plus,
      sym_minus,
  [9319] = 3,
    ACTIONS(1020), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      aux_sym_open_repeat1,
    ACTIONS(1018), 4,
      sym__eol,
      sym_currency,
      sym_string,
      anon_sym_SEMI,
  [9332] = 5,
    ACTIONS(890), 1,
      anon_sym_STAR,
    ACTIONS(892), 1,
      sym_slash,
    ACTIONS(990), 1,
      sym_currency,
    STATE(334), 1,
      sym_asterisk,
    ACTIONS(914), 2,
      sym_plus,
      sym_minus,
  [9349] = 6,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(1022), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(356), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(455), 1,
      sym__org_stars,
  [9368] = 3,
    ACTIONS(1020), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym_open_repeat1,
    ACTIONS(1024), 4,
      sym__eol,
      sym_currency,
      sym_string,
      anon_sym_SEMI,
  [9381] = 6,
    ACTIONS(1026), 1,
      sym__stars,
    ACTIONS(1029), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(356), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(455), 1,
      sym__org_stars,
  [9400] = 6,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(1031), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(356), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(455), 1,
      sym__org_stars,
  [9419] = 5,
    ACTIONS(890), 1,
      anon_sym_STAR,
    ACTIONS(892), 1,
      sym_slash,
    ACTIONS(1033), 1,
      sym_currency,
    STATE(334), 1,
      sym_asterisk,
    ACTIONS(914), 2,
      sym_plus,
      sym_minus,
  [9436] = 5,
    ACTIONS(890), 1,
      anon_sym_STAR,
    ACTIONS(892), 1,
      sym_slash,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    STATE(334), 1,
      sym_asterisk,
    ACTIONS(914), 2,
      sym_plus,
      sym_minus,
  [9453] = 5,
    ACTIONS(890), 1,
      anon_sym_STAR,
    ACTIONS(892), 1,
      sym_slash,
    ACTIONS(1037), 1,
      sym_currency,
    STATE(334), 1,
      sym_asterisk,
    ACTIONS(914), 2,
      sym_plus,
      sym_minus,
  [9470] = 5,
    ACTIONS(890), 1,
      anon_sym_STAR,
    ACTIONS(892), 1,
      sym_slash,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    STATE(334), 1,
      sym_asterisk,
    ACTIONS(914), 2,
      sym_plus,
      sym_minus,
  [9487] = 5,
    ACTIONS(1043), 1,
      aux_sym__any_token1,
    STATE(271), 1,
      sym__nl,
    STATE(431), 1,
      sym_item,
    STATE(433), 1,
      sym__any,
    ACTIONS(1041), 2,
      anon_sym_LF,
      anon_sym_CR,
  [9504] = 3,
    ACTIONS(1047), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      aux_sym_open_repeat1,
    ACTIONS(1045), 4,
      sym__eol,
      sym_currency,
      sym_string,
      anon_sym_SEMI,
  [9517] = 2,
    ACTIONS(1052), 2,
      sym_at,
      anon_sym_LBRACE,
    ACTIONS(1050), 4,
      sym__eol,
      sym_atat,
      anon_sym_LBRACE_LBRACE,
      anon_sym_SEMI,
  [9528] = 5,
    ACTIONS(890), 1,
      anon_sym_STAR,
    ACTIONS(892), 1,
      sym_slash,
    ACTIONS(1054), 1,
      sym_currency,
    STATE(334), 1,
      sym_asterisk,
    ACTIONS(914), 2,
      sym_plus,
      sym_minus,
  [9545] = 4,
    ACTIONS(1056), 1,
      sym__eol,
    STATE(381), 1,
      aux_sym_tags_links_repeat1,
    STATE(450), 1,
      sym_tags_links,
    ACTIONS(848), 2,
      sym_tag,
      sym_link,
  [9559] = 5,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1058), 1,
      sym__eol,
    ACTIONS(1060), 1,
      sym_atat,
    ACTIONS(1062), 1,
      sym_at,
    STATE(558), 1,
      sym_comment,
  [9575] = 5,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1064), 1,
      sym__eol,
    ACTIONS(1066), 1,
      sym_atat,
    ACTIONS(1068), 1,
      sym_at,
    STATE(549), 1,
      sym_comment,
  [9591] = 1,
    ACTIONS(1070), 5,
      sym__eol,
      sym_string,
      sym_tag,
      sym_link,
      anon_sym_SEMI,
  [9599] = 4,
    ACTIONS(1072), 1,
      sym__eol,
    STATE(381), 1,
      aux_sym_tags_links_repeat1,
    STATE(548), 1,
      sym_tags_links,
    ACTIONS(848), 2,
      sym_tag,
      sym_link,
  [9613] = 5,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1074), 1,
      sym__eol,
    ACTIONS(1076), 1,
      sym_atat,
    ACTIONS(1078), 1,
      sym_at,
    STATE(452), 1,
      sym_comment,
  [9629] = 5,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1080), 1,
      sym__eol,
    ACTIONS(1082), 1,
      sym_atat,
    ACTIONS(1084), 1,
      sym_at,
    STATE(576), 1,
      sym_comment,
  [9645] = 5,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1086), 1,
      sym__eol,
    ACTIONS(1088), 1,
      sym_atat,
    ACTIONS(1090), 1,
      sym_at,
    STATE(567), 1,
      sym_comment,
  [9661] = 5,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1092), 1,
      sym__eol,
    ACTIONS(1094), 1,
      sym_atat,
    ACTIONS(1096), 1,
      sym_at,
    STATE(575), 1,
      sym_comment,
  [9677] = 5,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1098), 1,
      sym__eol,
    ACTIONS(1100), 1,
      sym_atat,
    ACTIONS(1102), 1,
      sym_at,
    STATE(546), 1,
      sym_comment,
  [9693] = 5,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1104), 1,
      sym__eol,
    ACTIONS(1106), 1,
      sym_atat,
    ACTIONS(1108), 1,
      sym_at,
    STATE(467), 1,
      sym_comment,
  [9709] = 1,
    ACTIONS(1045), 5,
      sym__eol,
      sym_currency,
      sym_string,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9717] = 2,
    ACTIONS(1112), 1,
      sym_string,
    ACTIONS(1110), 4,
      sym__eol,
      sym_tag,
      sym_link,
      anon_sym_SEMI,
  [9727] = 3,
    ACTIONS(1114), 1,
      sym_currency,
    STATE(379), 1,
      aux_sym_open_repeat2,
    ACTIONS(1018), 3,
      sym__eol,
      sym_string,
      anon_sym_SEMI,
  [9739] = 3,
    STATE(380), 1,
      aux_sym_tags_links_repeat1,
    ACTIONS(1117), 2,
      sym__eol,
      anon_sym_SEMI,
    ACTIONS(1119), 2,
      sym_tag,
      sym_link,
  [9751] = 3,
    STATE(380), 1,
      aux_sym_tags_links_repeat1,
    ACTIONS(1122), 2,
      sym__eol,
      anon_sym_SEMI,
    ACTIONS(1124), 2,
      sym_tag,
      sym_link,
  [9763] = 2,
    ACTIONS(1128), 1,
      sym_at,
    ACTIONS(1126), 3,
      sym__eol,
      sym_atat,
      anon_sym_SEMI,
  [9772] = 2,
    ACTIONS(1132), 1,
      sym_at,
    ACTIONS(1130), 3,
      sym__eol,
      sym_atat,
      anon_sym_SEMI,
  [9781] = 4,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_RBRACE,
    ACTIONS(1139), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(384), 1,
      aux_sym__cost_comp_list_repeat1,
  [9794] = 4,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
    ACTIONS(1143), 1,
      anon_sym_RBRACE,
    ACTIONS(1145), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(387), 1,
      aux_sym__cost_comp_list_repeat1,
  [9807] = 1,
    ACTIONS(1147), 4,
      sym_plus,
      sym_minus,
      sym_number,
      anon_sym_LPAREN,
  [9814] = 4,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
    ACTIONS(1149), 1,
      anon_sym_RBRACE,
    ACTIONS(1151), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(384), 1,
      aux_sym__cost_comp_list_repeat1,
  [9827] = 1,
    ACTIONS(1153), 4,
      sym__eol,
      sym_tag,
      sym_link,
      anon_sym_SEMI,
  [9834] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1155), 1,
      sym__eol,
    STATE(572), 1,
      sym_comment,
  [9844] = 1,
    ACTIONS(1157), 3,
      sym__eol,
      sym_tag,
      sym_link,
  [9850] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1159), 1,
      sym__eol,
    STATE(476), 1,
      sym_comment,
  [9860] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1161), 1,
      sym__eol,
    STATE(475), 1,
      sym_comment,
  [9870] = 2,
    ACTIONS(1165), 1,
      anon_sym_RBRACE,
    ACTIONS(1163), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [9878] = 2,
    ACTIONS(1169), 1,
      anon_sym_RBRACE,
    ACTIONS(1167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [9886] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1171), 1,
      sym__eol,
    STATE(554), 1,
      sym_comment,
  [9896] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1173), 1,
      sym__eol,
    STATE(484), 1,
      sym_comment,
  [9906] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1175), 1,
      sym__eol,
    STATE(495), 1,
      sym_comment,
  [9916] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1177), 1,
      sym__eol,
    STATE(537), 1,
      sym_comment,
  [9926] = 3,
    ACTIONS(850), 1,
      sym_key,
    ACTIONS(1179), 1,
      sym__eol,
    STATE(535), 1,
      sym_key_value,
  [9936] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1181), 1,
      sym__eol,
    STATE(536), 1,
      sym_comment,
  [9946] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1183), 1,
      sym__eol,
    STATE(482), 1,
      sym_comment,
  [9956] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1185), 1,
      sym__eol,
    STATE(531), 1,
      sym_comment,
  [9966] = 3,
    ACTIONS(850), 1,
      sym_key,
    ACTIONS(1187), 1,
      sym__eol,
    STATE(538), 1,
      sym_key_value,
  [9976] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1189), 1,
      sym__eol,
    STATE(529), 1,
      sym_comment,
  [9986] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1191), 1,
      sym__eol,
    STATE(526), 1,
      sym_comment,
  [9996] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1193), 1,
      sym__eol,
    STATE(581), 1,
      sym_comment,
  [10006] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1195), 1,
      sym__eol,
    STATE(524), 1,
      sym_comment,
  [10016] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1197), 1,
      sym__eol,
    STATE(521), 1,
      sym_comment,
  [10026] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1199), 1,
      sym__eol,
    STATE(511), 1,
      sym_comment,
  [10036] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1201), 1,
      sym__eol,
    STATE(566), 1,
      sym_comment,
  [10046] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1203), 1,
      sym__eol,
    STATE(510), 1,
      sym_comment,
  [10056] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1205), 1,
      sym__eol,
    STATE(564), 1,
      sym_comment,
  [10066] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1207), 1,
      sym__eol,
    STATE(568), 1,
      sym_comment,
  [10076] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1209), 1,
      sym__eol,
    STATE(557), 1,
      sym_comment,
  [10086] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1211), 1,
      sym__eol,
    STATE(571), 1,
      sym_comment,
  [10096] = 2,
    ACTIONS(1215), 1,
      anon_sym_RBRACE,
    ACTIONS(1213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10104] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1217), 1,
      sym__eol,
    STATE(509), 1,
      sym_comment,
  [10114] = 2,
    ACTIONS(1137), 1,
      anon_sym_RBRACE,
    ACTIONS(1139), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10122] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1219), 1,
      sym__eol,
    STATE(599), 1,
      sym_comment,
  [10132] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1221), 1,
      sym__eol,
    STATE(584), 1,
      sym_comment,
  [10142] = 2,
    ACTIONS(1225), 1,
      anon_sym_RBRACE,
    ACTIONS(1223), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10150] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1227), 1,
      sym__eol,
    STATE(600), 1,
      sym_comment,
  [10160] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1229), 1,
      sym__eol,
    STATE(579), 1,
      sym_comment,
  [10170] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1231), 1,
      sym__eol,
    STATE(551), 1,
      sym_comment,
  [10180] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1233), 1,
      sym__eol,
    STATE(580), 1,
      sym_comment,
  [10190] = 2,
    ACTIONS(1237), 1,
      anon_sym_RBRACE,
    ACTIONS(1235), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10198] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1239), 1,
      sym__eol,
    STATE(605), 1,
      sym_comment,
  [10208] = 2,
    ACTIONS(1243), 1,
      anon_sym_RBRACE,
    ACTIONS(1241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10216] = 2,
    ACTIONS(1247), 1,
      anon_sym_RBRACE,
    ACTIONS(1245), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10224] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1249), 1,
      sym__eol,
    STATE(583), 1,
      sym_comment,
  [10234] = 3,
    ACTIONS(1251), 1,
      anon_sym_LF,
    ACTIONS(1253), 1,
      anon_sym_CR,
    STATE(273), 1,
      sym__nl,
  [10244] = 3,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(1255), 1,
      sym__eol,
    STATE(462), 1,
      sym_comment,
  [10254] = 2,
    ACTIONS(1257), 1,
      anon_sym_LF,
    ACTIONS(1259), 1,
      anon_sym_CR,
  [10261] = 1,
    ACTIONS(1261), 2,
      sym__eol,
      anon_sym_SEMI,
  [10266] = 1,
    ACTIONS(1263), 2,
      sym__eol,
      anon_sym_SEMI,
  [10271] = 1,
    ACTIONS(690), 2,
      sym__stars,
      sym__sectionend,
  [10276] = 1,
    ACTIONS(1265), 2,
      sym__eol,
      anon_sym_SEMI,
  [10281] = 2,
    ACTIONS(1267), 1,
      sym_string,
    STATE(370), 1,
      sym_filename,
  [10288] = 2,
    ACTIONS(1269), 1,
      sym__eol,
    ACTIONS(1271), 1,
      sym_string,
  [10295] = 2,
    ACTIONS(850), 1,
      sym_key,
    STATE(491), 1,
      sym_key_value,
  [10302] = 2,
    ACTIONS(850), 1,
      sym_key,
    STATE(522), 1,
      sym_key_value,
  [10309] = 1,
    ACTIONS(740), 2,
      sym__stars,
      sym__sectionend,
  [10314] = 1,
    ACTIONS(736), 2,
      sym__stars,
      sym__sectionend,
  [10319] = 1,
    ACTIONS(1273), 2,
      sym__eol,
      anon_sym_SEMI,
  [10324] = 1,
    ACTIONS(834), 2,
      sym__stars,
      sym__sectionend,
  [10329] = 2,
    ACTIONS(1275), 1,
      sym__eol,
    ACTIONS(1277), 1,
      sym_string,
  [10336] = 1,
    ACTIONS(1279), 2,
      sym__stars,
      sym__sectionend,
  [10341] = 2,
    ACTIONS(1267), 1,
      sym_string,
    STATE(366), 1,
      sym_filename,
  [10348] = 1,
    ACTIONS(1281), 1,
      sym_account,
  [10352] = 1,
    ACTIONS(1283), 1,
      sym__eol,
  [10356] = 1,
    ACTIONS(1285), 1,
      sym__eol,
  [10360] = 1,
    ACTIONS(1287), 1,
      sym__eol,
  [10364] = 1,
    ACTIONS(1289), 1,
      aux_sym_headline_token1,
  [10368] = 1,
    ACTIONS(1291), 1,
      sym__eol,
  [10372] = 1,
    ACTIONS(1293), 1,
      aux_sym_headline_token1,
  [10376] = 1,
    ACTIONS(1295), 1,
      ts_builtin_sym_end,
  [10380] = 1,
    ACTIONS(1297), 1,
      aux_sym__any_token1,
  [10384] = 1,
    ACTIONS(1299), 1,
      sym_string,
  [10388] = 1,
    ACTIONS(1301), 1,
      sym_string,
  [10392] = 1,
    ACTIONS(1303), 1,
      sym_string,
  [10396] = 1,
    ACTIONS(1305), 1,
      sym_key,
  [10400] = 1,
    ACTIONS(1307), 1,
      sym__eol,
  [10404] = 1,
    ACTIONS(1309), 1,
      sym__eol,
  [10408] = 1,
    ACTIONS(1311), 1,
      sym_tag,
  [10412] = 1,
    ACTIONS(1313), 1,
      sym__eol,
  [10416] = 1,
    ACTIONS(1315), 1,
      sym__eol,
  [10420] = 1,
    ACTIONS(1317), 1,
      sym__eol,
  [10424] = 1,
    ACTIONS(1319), 1,
      sym__eol,
  [10428] = 1,
    ACTIONS(1321), 1,
      anon_sym_RBRACE_RBRACE,
  [10432] = 1,
    ACTIONS(1321), 1,
      anon_sym_RBRACE,
  [10436] = 1,
    ACTIONS(1323), 1,
      sym__eol,
  [10440] = 1,
    ACTIONS(1325), 1,
      sym_tag,
  [10444] = 1,
    ACTIONS(1327), 1,
      sym__eol,
  [10448] = 1,
    ACTIONS(1329), 1,
      sym__eol,
  [10452] = 1,
    ACTIONS(1331), 1,
      sym__eol,
  [10456] = 1,
    ACTIONS(1333), 1,
      sym__eol,
  [10460] = 1,
    ACTIONS(1335), 1,
      sym__eol,
  [10464] = 1,
    ACTIONS(1337), 1,
      sym_currency,
  [10468] = 1,
    ACTIONS(1339), 1,
      sym__eol,
  [10472] = 1,
    ACTIONS(1341), 1,
      sym__eol,
  [10476] = 1,
    ACTIONS(1343), 1,
      sym__eol,
  [10480] = 1,
    ACTIONS(1345), 1,
      sym__eol,
  [10484] = 1,
    ACTIONS(1347), 1,
      sym_account,
  [10488] = 1,
    ACTIONS(1349), 1,
      sym__eol,
  [10492] = 1,
    ACTIONS(1351), 1,
      sym_currency,
  [10496] = 1,
    ACTIONS(1353), 1,
      sym__eol,
  [10500] = 1,
    ACTIONS(1355), 1,
      sym__eol,
  [10504] = 1,
    ACTIONS(1357), 1,
      sym__eol,
  [10508] = 1,
    ACTIONS(1359), 1,
      sym__eol,
  [10512] = 1,
    ACTIONS(1361), 1,
      sym__eol,
  [10516] = 1,
    ACTIONS(1363), 1,
      sym__eol,
  [10520] = 1,
    ACTIONS(1365), 1,
      sym__eol,
  [10524] = 1,
    ACTIONS(1367), 1,
      sym_account,
  [10528] = 1,
    ACTIONS(1369), 1,
      aux_sym__any_token1,
  [10532] = 1,
    ACTIONS(1371), 1,
      sym__eol,
  [10536] = 1,
    ACTIONS(1373), 1,
      sym_currency,
  [10540] = 1,
    ACTIONS(1375), 1,
      sym_string,
  [10544] = 1,
    ACTIONS(1377), 1,
      sym__eol,
  [10548] = 1,
    ACTIONS(1379), 1,
      sym_string,
  [10552] = 1,
    ACTIONS(1381), 1,
      sym__eol,
  [10556] = 1,
    ACTIONS(1383), 1,
      sym_account,
  [10560] = 1,
    ACTIONS(1385), 1,
      sym__eol,
  [10564] = 1,
    ACTIONS(1387), 1,
      sym__eol,
  [10568] = 1,
    ACTIONS(1389), 1,
      sym__eol,
  [10572] = 1,
    ACTIONS(1391), 1,
      sym__eol,
  [10576] = 1,
    ACTIONS(1393), 1,
      sym_account,
  [10580] = 1,
    ACTIONS(1395), 1,
      sym_string,
  [10584] = 1,
    ACTIONS(1397), 1,
      sym__eol,
  [10588] = 1,
    ACTIONS(1399), 1,
      sym__eol,
  [10592] = 1,
    ACTIONS(1401), 1,
      sym__eol,
  [10596] = 1,
    ACTIONS(1403), 1,
      sym__eol,
  [10600] = 1,
    ACTIONS(1405), 1,
      sym__eol,
  [10604] = 1,
    ACTIONS(1407), 1,
      sym__eol,
  [10608] = 1,
    ACTIONS(1409), 1,
      sym__eol,
  [10612] = 1,
    ACTIONS(1411), 1,
      sym__eol,
  [10616] = 1,
    ACTIONS(1413), 1,
      sym__eol,
  [10620] = 1,
    ACTIONS(1415), 1,
      sym__eol,
  [10624] = 1,
    ACTIONS(1417), 1,
      sym__eol,
  [10628] = 1,
    ACTIONS(1419), 1,
      anon_sym_COLON,
  [10632] = 1,
    ACTIONS(988), 1,
      sym__eol,
  [10636] = 1,
    ACTIONS(1421), 1,
      sym__eol,
  [10640] = 1,
    ACTIONS(1423), 1,
      sym__eol,
  [10644] = 1,
    ACTIONS(1425), 1,
      sym__eol,
  [10648] = 1,
    ACTIONS(1427), 1,
      sym__eol,
  [10652] = 1,
    ACTIONS(1429), 1,
      anon_sym_COLON,
  [10656] = 1,
    ACTIONS(1431), 1,
      sym__eol,
  [10660] = 1,
    ACTIONS(1433), 1,
      sym_string,
  [10664] = 1,
    ACTIONS(1435), 1,
      sym__eol,
  [10668] = 1,
    ACTIONS(1437), 1,
      sym__eol,
  [10672] = 1,
    ACTIONS(1439), 1,
      sym__eol,
  [10676] = 1,
    ACTIONS(1441), 1,
      sym__eol,
  [10680] = 1,
    ACTIONS(1443), 1,
      sym_account,
  [10684] = 1,
    ACTIONS(1445), 1,
      sym__eol,
  [10688] = 1,
    ACTIONS(1447), 1,
      sym__eol,
  [10692] = 1,
    ACTIONS(1449), 1,
      sym__eol,
  [10696] = 1,
    ACTIONS(1451), 1,
      sym__eol,
  [10700] = 1,
    ACTIONS(1453), 1,
      sym__eol,
  [10704] = 1,
    ACTIONS(1455), 1,
      sym__eol,
  [10708] = 1,
    ACTIONS(1457), 1,
      sym_account,
  [10712] = 1,
    ACTIONS(1459), 1,
      sym__eol,
  [10716] = 1,
    ACTIONS(1461), 1,
      sym__eol,
  [10720] = 1,
    ACTIONS(1463), 1,
      sym__eol,
  [10724] = 1,
    ACTIONS(1465), 1,
      sym__eol,
  [10728] = 1,
    ACTIONS(1467), 1,
      sym__eol,
  [10732] = 1,
    ACTIONS(1469), 1,
      sym_account,
  [10736] = 1,
    ACTIONS(1471), 1,
      sym__eol,
  [10740] = 1,
    ACTIONS(1473), 1,
      sym__eol,
  [10744] = 1,
    ACTIONS(1475), 1,
      sym__eol,
  [10748] = 1,
    ACTIONS(1477), 1,
      sym__eol,
  [10752] = 1,
    ACTIONS(1479), 1,
      sym_account,
  [10756] = 1,
    ACTIONS(1481), 1,
      sym__eol,
  [10760] = 1,
    ACTIONS(1483), 1,
      sym__eol,
  [10764] = 1,
    ACTIONS(1485), 1,
      sym__eol,
  [10768] = 1,
    ACTIONS(1487), 1,
      sym__eol,
  [10772] = 1,
    ACTIONS(1489), 1,
      sym_string,
  [10776] = 1,
    ACTIONS(1491), 1,
      sym__eol,
  [10780] = 1,
    ACTIONS(1493), 1,
      sym__eol,
  [10784] = 1,
    ACTIONS(1495), 1,
      sym__eol,
  [10788] = 1,
    ACTIONS(1497), 1,
      sym_string,
  [10792] = 1,
    ACTIONS(1499), 1,
      sym__eol,
  [10796] = 1,
    ACTIONS(1501), 1,
      sym_string,
  [10800] = 1,
    ACTIONS(1503), 1,
      sym__eol,
  [10804] = 1,
    ACTIONS(1505), 1,
      sym__eol,
  [10808] = 1,
    ACTIONS(1507), 1,
      sym__eol,
  [10812] = 1,
    ACTIONS(1509), 1,
      sym__eol,
  [10816] = 1,
    ACTIONS(1511), 1,
      sym__eol,
  [10820] = 1,
    ACTIONS(1513), 1,
      sym__eol,
  [10824] = 1,
    ACTIONS(1515), 1,
      sym__eol,
  [10828] = 1,
    ACTIONS(1517), 1,
      aux_sym__org_stars_token1,
  [10832] = 1,
    ACTIONS(1519), 1,
      sym__eol,
  [10836] = 1,
    ACTIONS(1521), 1,
      sym__eol,
  [10840] = 1,
    ACTIONS(1523), 1,
      sym__eol,
  [10844] = 1,
    ACTIONS(1525), 1,
      sym__eol,
  [10848] = 1,
    ACTIONS(1527), 1,
      sym__eol,
  [10852] = 1,
    ACTIONS(1529), 1,
      sym__eol,
  [10856] = 1,
    ACTIONS(1531), 1,
      sym__eol,
  [10860] = 1,
    ACTIONS(1533), 1,
      sym__eol,
  [10864] = 1,
    ACTIONS(1535), 1,
      sym__eol,
  [10868] = 1,
    ACTIONS(1537), 1,
      sym__eol,
  [10872] = 1,
    ACTIONS(1539), 1,
      sym__eol,
  [10876] = 1,
    ACTIONS(1541), 1,
      sym__eol,
  [10880] = 1,
    ACTIONS(1543), 1,
      sym__eol,
  [10884] = 1,
    ACTIONS(1545), 1,
      sym__eol,
  [10888] = 1,
    ACTIONS(1547), 1,
      sym__eol,
  [10892] = 1,
    ACTIONS(1549), 1,
      aux_sym__any_token1,
  [10896] = 1,
    ACTIONS(1551), 1,
      sym__eol,
  [10900] = 1,
    ACTIONS(1553), 1,
      sym_tag,
  [10904] = 1,
    ACTIONS(1555), 1,
      sym_tag,
  [10908] = 1,
    ACTIONS(1557), 1,
      sym__eol,
  [10912] = 1,
    ACTIONS(1559), 1,
      sym_string,
  [10916] = 1,
    ACTIONS(1561), 1,
      sym_string,
  [10920] = 1,
    ACTIONS(1563), 1,
      sym_account,
  [10924] = 1,
    ACTIONS(1565), 1,
      sym_account,
  [10928] = 1,
    ACTIONS(1567), 1,
      sym_currency,
  [10932] = 1,
    ACTIONS(1569), 1,
      sym_string,
  [10936] = 1,
    ACTIONS(1571), 1,
      anon_sym_COLON,
  [10940] = 1,
    ACTIONS(1573), 1,
      sym_string,
  [10944] = 1,
    ACTIONS(1575), 1,
      sym_account,
  [10948] = 1,
    ACTIONS(1577), 1,
      sym__eol,
  [10952] = 1,
    ACTIONS(1579), 1,
      sym__eol,
  [10956] = 1,
    ACTIONS(1581), 1,
      sym_string,
  [10960] = 1,
    ACTIONS(1583), 1,
      sym_string,
  [10964] = 1,
    ACTIONS(1585), 1,
      sym_string,
  [10968] = 1,
    ACTIONS(1587), 1,
      sym__eol,
  [10972] = 1,
    ACTIONS(1589), 1,
      sym__eol,
  [10976] = 1,
    ACTIONS(1591), 1,
      sym_account,
  [10980] = 1,
    ACTIONS(1593), 1,
      sym_key,
  [10984] = 1,
    ACTIONS(1595), 1,
      sym_string,
  [10988] = 1,
    ACTIONS(1597), 1,
      sym_account,
  [10992] = 1,
    ACTIONS(1599), 1,
      sym_account,
  [10996] = 1,
    ACTIONS(1601), 1,
      sym_currency,
  [11000] = 1,
    ACTIONS(1603), 1,
      sym_string,
  [11004] = 1,
    ACTIONS(1605), 1,
      sym_string,
  [11008] = 1,
    ACTIONS(1607), 1,
      sym_account,
  [11012] = 1,
    ACTIONS(1609), 1,
      sym_account,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 364,
  [SMALL_STATE(7)] = 450,
  [SMALL_STATE(8)] = 536,
  [SMALL_STATE(9)] = 613,
  [SMALL_STATE(10)] = 642,
  [SMALL_STATE(11)] = 671,
  [SMALL_STATE(12)] = 700,
  [SMALL_STATE(13)] = 729,
  [SMALL_STATE(14)] = 758,
  [SMALL_STATE(15)] = 787,
  [SMALL_STATE(16)] = 816,
  [SMALL_STATE(17)] = 845,
  [SMALL_STATE(18)] = 874,
  [SMALL_STATE(19)] = 903,
  [SMALL_STATE(20)] = 932,
  [SMALL_STATE(21)] = 961,
  [SMALL_STATE(22)] = 990,
  [SMALL_STATE(23)] = 1019,
  [SMALL_STATE(24)] = 1048,
  [SMALL_STATE(25)] = 1077,
  [SMALL_STATE(26)] = 1106,
  [SMALL_STATE(27)] = 1135,
  [SMALL_STATE(28)] = 1164,
  [SMALL_STATE(29)] = 1193,
  [SMALL_STATE(30)] = 1222,
  [SMALL_STATE(31)] = 1251,
  [SMALL_STATE(32)] = 1280,
  [SMALL_STATE(33)] = 1309,
  [SMALL_STATE(34)] = 1338,
  [SMALL_STATE(35)] = 1367,
  [SMALL_STATE(36)] = 1396,
  [SMALL_STATE(37)] = 1425,
  [SMALL_STATE(38)] = 1454,
  [SMALL_STATE(39)] = 1483,
  [SMALL_STATE(40)] = 1512,
  [SMALL_STATE(41)] = 1541,
  [SMALL_STATE(42)] = 1570,
  [SMALL_STATE(43)] = 1599,
  [SMALL_STATE(44)] = 1627,
  [SMALL_STATE(45)] = 1655,
  [SMALL_STATE(46)] = 1683,
  [SMALL_STATE(47)] = 1711,
  [SMALL_STATE(48)] = 1739,
  [SMALL_STATE(49)] = 1767,
  [SMALL_STATE(50)] = 1795,
  [SMALL_STATE(51)] = 1823,
  [SMALL_STATE(52)] = 1851,
  [SMALL_STATE(53)] = 1879,
  [SMALL_STATE(54)] = 1907,
  [SMALL_STATE(55)] = 1935,
  [SMALL_STATE(56)] = 1963,
  [SMALL_STATE(57)] = 1991,
  [SMALL_STATE(58)] = 2019,
  [SMALL_STATE(59)] = 2047,
  [SMALL_STATE(60)] = 2075,
  [SMALL_STATE(61)] = 2103,
  [SMALL_STATE(62)] = 2131,
  [SMALL_STATE(63)] = 2159,
  [SMALL_STATE(64)] = 2187,
  [SMALL_STATE(65)] = 2215,
  [SMALL_STATE(66)] = 2243,
  [SMALL_STATE(67)] = 2271,
  [SMALL_STATE(68)] = 2299,
  [SMALL_STATE(69)] = 2327,
  [SMALL_STATE(70)] = 2355,
  [SMALL_STATE(71)] = 2383,
  [SMALL_STATE(72)] = 2411,
  [SMALL_STATE(73)] = 2439,
  [SMALL_STATE(74)] = 2467,
  [SMALL_STATE(75)] = 2495,
  [SMALL_STATE(76)] = 2523,
  [SMALL_STATE(77)] = 2551,
  [SMALL_STATE(78)] = 2579,
  [SMALL_STATE(79)] = 2607,
  [SMALL_STATE(80)] = 2635,
  [SMALL_STATE(81)] = 2663,
  [SMALL_STATE(82)] = 2691,
  [SMALL_STATE(83)] = 2719,
  [SMALL_STATE(84)] = 2747,
  [SMALL_STATE(85)] = 2775,
  [SMALL_STATE(86)] = 2803,
  [SMALL_STATE(87)] = 2831,
  [SMALL_STATE(88)] = 2859,
  [SMALL_STATE(89)] = 2887,
  [SMALL_STATE(90)] = 2915,
  [SMALL_STATE(91)] = 2943,
  [SMALL_STATE(92)] = 2971,
  [SMALL_STATE(93)] = 2999,
  [SMALL_STATE(94)] = 3027,
  [SMALL_STATE(95)] = 3055,
  [SMALL_STATE(96)] = 3083,
  [SMALL_STATE(97)] = 3111,
  [SMALL_STATE(98)] = 3139,
  [SMALL_STATE(99)] = 3167,
  [SMALL_STATE(100)] = 3195,
  [SMALL_STATE(101)] = 3223,
  [SMALL_STATE(102)] = 3251,
  [SMALL_STATE(103)] = 3279,
  [SMALL_STATE(104)] = 3307,
  [SMALL_STATE(105)] = 3335,
  [SMALL_STATE(106)] = 3363,
  [SMALL_STATE(107)] = 3391,
  [SMALL_STATE(108)] = 3419,
  [SMALL_STATE(109)] = 3447,
  [SMALL_STATE(110)] = 3475,
  [SMALL_STATE(111)] = 3503,
  [SMALL_STATE(112)] = 3531,
  [SMALL_STATE(113)] = 3559,
  [SMALL_STATE(114)] = 3587,
  [SMALL_STATE(115)] = 3615,
  [SMALL_STATE(116)] = 3643,
  [SMALL_STATE(117)] = 3671,
  [SMALL_STATE(118)] = 3699,
  [SMALL_STATE(119)] = 3727,
  [SMALL_STATE(120)] = 3755,
  [SMALL_STATE(121)] = 3783,
  [SMALL_STATE(122)] = 3811,
  [SMALL_STATE(123)] = 3839,
  [SMALL_STATE(124)] = 3867,
  [SMALL_STATE(125)] = 3895,
  [SMALL_STATE(126)] = 3923,
  [SMALL_STATE(127)] = 3951,
  [SMALL_STATE(128)] = 3979,
  [SMALL_STATE(129)] = 4007,
  [SMALL_STATE(130)] = 4035,
  [SMALL_STATE(131)] = 4063,
  [SMALL_STATE(132)] = 4091,
  [SMALL_STATE(133)] = 4119,
  [SMALL_STATE(134)] = 4147,
  [SMALL_STATE(135)] = 4175,
  [SMALL_STATE(136)] = 4203,
  [SMALL_STATE(137)] = 4231,
  [SMALL_STATE(138)] = 4259,
  [SMALL_STATE(139)] = 4287,
  [SMALL_STATE(140)] = 4315,
  [SMALL_STATE(141)] = 4343,
  [SMALL_STATE(142)] = 4365,
  [SMALL_STATE(143)] = 4387,
  [SMALL_STATE(144)] = 4409,
  [SMALL_STATE(145)] = 4431,
  [SMALL_STATE(146)] = 4453,
  [SMALL_STATE(147)] = 4475,
  [SMALL_STATE(148)] = 4497,
  [SMALL_STATE(149)] = 4519,
  [SMALL_STATE(150)] = 4541,
  [SMALL_STATE(151)] = 4563,
  [SMALL_STATE(152)] = 4585,
  [SMALL_STATE(153)] = 4607,
  [SMALL_STATE(154)] = 4629,
  [SMALL_STATE(155)] = 4651,
  [SMALL_STATE(156)] = 4673,
  [SMALL_STATE(157)] = 4695,
  [SMALL_STATE(158)] = 4717,
  [SMALL_STATE(159)] = 4739,
  [SMALL_STATE(160)] = 4761,
  [SMALL_STATE(161)] = 4783,
  [SMALL_STATE(162)] = 4817,
  [SMALL_STATE(163)] = 4839,
  [SMALL_STATE(164)] = 4861,
  [SMALL_STATE(165)] = 4883,
  [SMALL_STATE(166)] = 4905,
  [SMALL_STATE(167)] = 4927,
  [SMALL_STATE(168)] = 4971,
  [SMALL_STATE(169)] = 5015,
  [SMALL_STATE(170)] = 5037,
  [SMALL_STATE(171)] = 5059,
  [SMALL_STATE(172)] = 5103,
  [SMALL_STATE(173)] = 5125,
  [SMALL_STATE(174)] = 5147,
  [SMALL_STATE(175)] = 5169,
  [SMALL_STATE(176)] = 5191,
  [SMALL_STATE(177)] = 5213,
  [SMALL_STATE(178)] = 5235,
  [SMALL_STATE(179)] = 5257,
  [SMALL_STATE(180)] = 5279,
  [SMALL_STATE(181)] = 5301,
  [SMALL_STATE(182)] = 5323,
  [SMALL_STATE(183)] = 5345,
  [SMALL_STATE(184)] = 5367,
  [SMALL_STATE(185)] = 5389,
  [SMALL_STATE(186)] = 5411,
  [SMALL_STATE(187)] = 5433,
  [SMALL_STATE(188)] = 5455,
  [SMALL_STATE(189)] = 5477,
  [SMALL_STATE(190)] = 5499,
  [SMALL_STATE(191)] = 5521,
  [SMALL_STATE(192)] = 5543,
  [SMALL_STATE(193)] = 5565,
  [SMALL_STATE(194)] = 5587,
  [SMALL_STATE(195)] = 5609,
  [SMALL_STATE(196)] = 5631,
  [SMALL_STATE(197)] = 5653,
  [SMALL_STATE(198)] = 5675,
  [SMALL_STATE(199)] = 5697,
  [SMALL_STATE(200)] = 5719,
  [SMALL_STATE(201)] = 5741,
  [SMALL_STATE(202)] = 5763,
  [SMALL_STATE(203)] = 5785,
  [SMALL_STATE(204)] = 5807,
  [SMALL_STATE(205)] = 5829,
  [SMALL_STATE(206)] = 5851,
  [SMALL_STATE(207)] = 5873,
  [SMALL_STATE(208)] = 5895,
  [SMALL_STATE(209)] = 5917,
  [SMALL_STATE(210)] = 5939,
  [SMALL_STATE(211)] = 5979,
  [SMALL_STATE(212)] = 6019,
  [SMALL_STATE(213)] = 6041,
  [SMALL_STATE(214)] = 6063,
  [SMALL_STATE(215)] = 6085,
  [SMALL_STATE(216)] = 6107,
  [SMALL_STATE(217)] = 6129,
  [SMALL_STATE(218)] = 6173,
  [SMALL_STATE(219)] = 6195,
  [SMALL_STATE(220)] = 6217,
  [SMALL_STATE(221)] = 6239,
  [SMALL_STATE(222)] = 6261,
  [SMALL_STATE(223)] = 6283,
  [SMALL_STATE(224)] = 6305,
  [SMALL_STATE(225)] = 6327,
  [SMALL_STATE(226)] = 6349,
  [SMALL_STATE(227)] = 6371,
  [SMALL_STATE(228)] = 6393,
  [SMALL_STATE(229)] = 6415,
  [SMALL_STATE(230)] = 6437,
  [SMALL_STATE(231)] = 6459,
  [SMALL_STATE(232)] = 6481,
  [SMALL_STATE(233)] = 6503,
  [SMALL_STATE(234)] = 6525,
  [SMALL_STATE(235)] = 6547,
  [SMALL_STATE(236)] = 6569,
  [SMALL_STATE(237)] = 6591,
  [SMALL_STATE(238)] = 6613,
  [SMALL_STATE(239)] = 6635,
  [SMALL_STATE(240)] = 6657,
  [SMALL_STATE(241)] = 6679,
  [SMALL_STATE(242)] = 6701,
  [SMALL_STATE(243)] = 6723,
  [SMALL_STATE(244)] = 6745,
  [SMALL_STATE(245)] = 6767,
  [SMALL_STATE(246)] = 6789,
  [SMALL_STATE(247)] = 6811,
  [SMALL_STATE(248)] = 6833,
  [SMALL_STATE(249)] = 6855,
  [SMALL_STATE(250)] = 6877,
  [SMALL_STATE(251)] = 6899,
  [SMALL_STATE(252)] = 6921,
  [SMALL_STATE(253)] = 6942,
  [SMALL_STATE(254)] = 6963,
  [SMALL_STATE(255)] = 6984,
  [SMALL_STATE(256)] = 7005,
  [SMALL_STATE(257)] = 7026,
  [SMALL_STATE(258)] = 7047,
  [SMALL_STATE(259)] = 7092,
  [SMALL_STATE(260)] = 7113,
  [SMALL_STATE(261)] = 7134,
  [SMALL_STATE(262)] = 7155,
  [SMALL_STATE(263)] = 7176,
  [SMALL_STATE(264)] = 7197,
  [SMALL_STATE(265)] = 7218,
  [SMALL_STATE(266)] = 7239,
  [SMALL_STATE(267)] = 7260,
  [SMALL_STATE(268)] = 7293,
  [SMALL_STATE(269)] = 7314,
  [SMALL_STATE(270)] = 7335,
  [SMALL_STATE(271)] = 7356,
  [SMALL_STATE(272)] = 7377,
  [SMALL_STATE(273)] = 7398,
  [SMALL_STATE(274)] = 7419,
  [SMALL_STATE(275)] = 7440,
  [SMALL_STATE(276)] = 7461,
  [SMALL_STATE(277)] = 7482,
  [SMALL_STATE(278)] = 7503,
  [SMALL_STATE(279)] = 7524,
  [SMALL_STATE(280)] = 7545,
  [SMALL_STATE(281)] = 7578,
  [SMALL_STATE(282)] = 7611,
  [SMALL_STATE(283)] = 7644,
  [SMALL_STATE(284)] = 7689,
  [SMALL_STATE(285)] = 7710,
  [SMALL_STATE(286)] = 7731,
  [SMALL_STATE(287)] = 7752,
  [SMALL_STATE(288)] = 7773,
  [SMALL_STATE(289)] = 7806,
  [SMALL_STATE(290)] = 7840,
  [SMALL_STATE(291)] = 7877,
  [SMALL_STATE(292)] = 7914,
  [SMALL_STATE(293)] = 7946,
  [SMALL_STATE(294)] = 7978,
  [SMALL_STATE(295)] = 8010,
  [SMALL_STATE(296)] = 8042,
  [SMALL_STATE(297)] = 8062,
  [SMALL_STATE(298)] = 8094,
  [SMALL_STATE(299)] = 8126,
  [SMALL_STATE(300)] = 8158,
  [SMALL_STATE(301)] = 8190,
  [SMALL_STATE(302)] = 8210,
  [SMALL_STATE(303)] = 8242,
  [SMALL_STATE(304)] = 8274,
  [SMALL_STATE(305)] = 8306,
  [SMALL_STATE(306)] = 8338,
  [SMALL_STATE(307)] = 8370,
  [SMALL_STATE(308)] = 8402,
  [SMALL_STATE(309)] = 8426,
  [SMALL_STATE(310)] = 8446,
  [SMALL_STATE(311)] = 8478,
  [SMALL_STATE(312)] = 8502,
  [SMALL_STATE(313)] = 8530,
  [SMALL_STATE(314)] = 8550,
  [SMALL_STATE(315)] = 8582,
  [SMALL_STATE(316)] = 8599,
  [SMALL_STATE(317)] = 8616,
  [SMALL_STATE(318)] = 8643,
  [SMALL_STATE(319)] = 8669,
  [SMALL_STATE(320)] = 8689,
  [SMALL_STATE(321)] = 8703,
  [SMALL_STATE(322)] = 8723,
  [SMALL_STATE(323)] = 8743,
  [SMALL_STATE(324)] = 8763,
  [SMALL_STATE(325)] = 8783,
  [SMALL_STATE(326)] = 8803,
  [SMALL_STATE(327)] = 8817,
  [SMALL_STATE(328)] = 8843,
  [SMALL_STATE(329)] = 8860,
  [SMALL_STATE(330)] = 8877,
  [SMALL_STATE(331)] = 8894,
  [SMALL_STATE(332)] = 8911,
  [SMALL_STATE(333)] = 8936,
  [SMALL_STATE(334)] = 8953,
  [SMALL_STATE(335)] = 8970,
  [SMALL_STATE(336)] = 8987,
  [SMALL_STATE(337)] = 9004,
  [SMALL_STATE(338)] = 9029,
  [SMALL_STATE(339)] = 9046,
  [SMALL_STATE(340)] = 9071,
  [SMALL_STATE(341)] = 9096,
  [SMALL_STATE(342)] = 9116,
  [SMALL_STATE(343)] = 9136,
  [SMALL_STATE(344)] = 9158,
  [SMALL_STATE(345)] = 9178,
  [SMALL_STATE(346)] = 9200,
  [SMALL_STATE(347)] = 9222,
  [SMALL_STATE(348)] = 9242,
  [SMALL_STATE(349)] = 9264,
  [SMALL_STATE(350)] = 9283,
  [SMALL_STATE(351)] = 9302,
  [SMALL_STATE(352)] = 9319,
  [SMALL_STATE(353)] = 9332,
  [SMALL_STATE(354)] = 9349,
  [SMALL_STATE(355)] = 9368,
  [SMALL_STATE(356)] = 9381,
  [SMALL_STATE(357)] = 9400,
  [SMALL_STATE(358)] = 9419,
  [SMALL_STATE(359)] = 9436,
  [SMALL_STATE(360)] = 9453,
  [SMALL_STATE(361)] = 9470,
  [SMALL_STATE(362)] = 9487,
  [SMALL_STATE(363)] = 9504,
  [SMALL_STATE(364)] = 9517,
  [SMALL_STATE(365)] = 9528,
  [SMALL_STATE(366)] = 9545,
  [SMALL_STATE(367)] = 9559,
  [SMALL_STATE(368)] = 9575,
  [SMALL_STATE(369)] = 9591,
  [SMALL_STATE(370)] = 9599,
  [SMALL_STATE(371)] = 9613,
  [SMALL_STATE(372)] = 9629,
  [SMALL_STATE(373)] = 9645,
  [SMALL_STATE(374)] = 9661,
  [SMALL_STATE(375)] = 9677,
  [SMALL_STATE(376)] = 9693,
  [SMALL_STATE(377)] = 9709,
  [SMALL_STATE(378)] = 9717,
  [SMALL_STATE(379)] = 9727,
  [SMALL_STATE(380)] = 9739,
  [SMALL_STATE(381)] = 9751,
  [SMALL_STATE(382)] = 9763,
  [SMALL_STATE(383)] = 9772,
  [SMALL_STATE(384)] = 9781,
  [SMALL_STATE(385)] = 9794,
  [SMALL_STATE(386)] = 9807,
  [SMALL_STATE(387)] = 9814,
  [SMALL_STATE(388)] = 9827,
  [SMALL_STATE(389)] = 9834,
  [SMALL_STATE(390)] = 9844,
  [SMALL_STATE(391)] = 9850,
  [SMALL_STATE(392)] = 9860,
  [SMALL_STATE(393)] = 9870,
  [SMALL_STATE(394)] = 9878,
  [SMALL_STATE(395)] = 9886,
  [SMALL_STATE(396)] = 9896,
  [SMALL_STATE(397)] = 9906,
  [SMALL_STATE(398)] = 9916,
  [SMALL_STATE(399)] = 9926,
  [SMALL_STATE(400)] = 9936,
  [SMALL_STATE(401)] = 9946,
  [SMALL_STATE(402)] = 9956,
  [SMALL_STATE(403)] = 9966,
  [SMALL_STATE(404)] = 9976,
  [SMALL_STATE(405)] = 9986,
  [SMALL_STATE(406)] = 9996,
  [SMALL_STATE(407)] = 10006,
  [SMALL_STATE(408)] = 10016,
  [SMALL_STATE(409)] = 10026,
  [SMALL_STATE(410)] = 10036,
  [SMALL_STATE(411)] = 10046,
  [SMALL_STATE(412)] = 10056,
  [SMALL_STATE(413)] = 10066,
  [SMALL_STATE(414)] = 10076,
  [SMALL_STATE(415)] = 10086,
  [SMALL_STATE(416)] = 10096,
  [SMALL_STATE(417)] = 10104,
  [SMALL_STATE(418)] = 10114,
  [SMALL_STATE(419)] = 10122,
  [SMALL_STATE(420)] = 10132,
  [SMALL_STATE(421)] = 10142,
  [SMALL_STATE(422)] = 10150,
  [SMALL_STATE(423)] = 10160,
  [SMALL_STATE(424)] = 10170,
  [SMALL_STATE(425)] = 10180,
  [SMALL_STATE(426)] = 10190,
  [SMALL_STATE(427)] = 10198,
  [SMALL_STATE(428)] = 10208,
  [SMALL_STATE(429)] = 10216,
  [SMALL_STATE(430)] = 10224,
  [SMALL_STATE(431)] = 10234,
  [SMALL_STATE(432)] = 10244,
  [SMALL_STATE(433)] = 10254,
  [SMALL_STATE(434)] = 10261,
  [SMALL_STATE(435)] = 10266,
  [SMALL_STATE(436)] = 10271,
  [SMALL_STATE(437)] = 10276,
  [SMALL_STATE(438)] = 10281,
  [SMALL_STATE(439)] = 10288,
  [SMALL_STATE(440)] = 10295,
  [SMALL_STATE(441)] = 10302,
  [SMALL_STATE(442)] = 10309,
  [SMALL_STATE(443)] = 10314,
  [SMALL_STATE(444)] = 10319,
  [SMALL_STATE(445)] = 10324,
  [SMALL_STATE(446)] = 10329,
  [SMALL_STATE(447)] = 10336,
  [SMALL_STATE(448)] = 10341,
  [SMALL_STATE(449)] = 10348,
  [SMALL_STATE(450)] = 10352,
  [SMALL_STATE(451)] = 10356,
  [SMALL_STATE(452)] = 10360,
  [SMALL_STATE(453)] = 10364,
  [SMALL_STATE(454)] = 10368,
  [SMALL_STATE(455)] = 10372,
  [SMALL_STATE(456)] = 10376,
  [SMALL_STATE(457)] = 10380,
  [SMALL_STATE(458)] = 10384,
  [SMALL_STATE(459)] = 10388,
  [SMALL_STATE(460)] = 10392,
  [SMALL_STATE(461)] = 10396,
  [SMALL_STATE(462)] = 10400,
  [SMALL_STATE(463)] = 10404,
  [SMALL_STATE(464)] = 10408,
  [SMALL_STATE(465)] = 10412,
  [SMALL_STATE(466)] = 10416,
  [SMALL_STATE(467)] = 10420,
  [SMALL_STATE(468)] = 10424,
  [SMALL_STATE(469)] = 10428,
  [SMALL_STATE(470)] = 10432,
  [SMALL_STATE(471)] = 10436,
  [SMALL_STATE(472)] = 10440,
  [SMALL_STATE(473)] = 10444,
  [SMALL_STATE(474)] = 10448,
  [SMALL_STATE(475)] = 10452,
  [SMALL_STATE(476)] = 10456,
  [SMALL_STATE(477)] = 10460,
  [SMALL_STATE(478)] = 10464,
  [SMALL_STATE(479)] = 10468,
  [SMALL_STATE(480)] = 10472,
  [SMALL_STATE(481)] = 10476,
  [SMALL_STATE(482)] = 10480,
  [SMALL_STATE(483)] = 10484,
  [SMALL_STATE(484)] = 10488,
  [SMALL_STATE(485)] = 10492,
  [SMALL_STATE(486)] = 10496,
  [SMALL_STATE(487)] = 10500,
  [SMALL_STATE(488)] = 10504,
  [SMALL_STATE(489)] = 10508,
  [SMALL_STATE(490)] = 10512,
  [SMALL_STATE(491)] = 10516,
  [SMALL_STATE(492)] = 10520,
  [SMALL_STATE(493)] = 10524,
  [SMALL_STATE(494)] = 10528,
  [SMALL_STATE(495)] = 10532,
  [SMALL_STATE(496)] = 10536,
  [SMALL_STATE(497)] = 10540,
  [SMALL_STATE(498)] = 10544,
  [SMALL_STATE(499)] = 10548,
  [SMALL_STATE(500)] = 10552,
  [SMALL_STATE(501)] = 10556,
  [SMALL_STATE(502)] = 10560,
  [SMALL_STATE(503)] = 10564,
  [SMALL_STATE(504)] = 10568,
  [SMALL_STATE(505)] = 10572,
  [SMALL_STATE(506)] = 10576,
  [SMALL_STATE(507)] = 10580,
  [SMALL_STATE(508)] = 10584,
  [SMALL_STATE(509)] = 10588,
  [SMALL_STATE(510)] = 10592,
  [SMALL_STATE(511)] = 10596,
  [SMALL_STATE(512)] = 10600,
  [SMALL_STATE(513)] = 10604,
  [SMALL_STATE(514)] = 10608,
  [SMALL_STATE(515)] = 10612,
  [SMALL_STATE(516)] = 10616,
  [SMALL_STATE(517)] = 10620,
  [SMALL_STATE(518)] = 10624,
  [SMALL_STATE(519)] = 10628,
  [SMALL_STATE(520)] = 10632,
  [SMALL_STATE(521)] = 10636,
  [SMALL_STATE(522)] = 10640,
  [SMALL_STATE(523)] = 10644,
  [SMALL_STATE(524)] = 10648,
  [SMALL_STATE(525)] = 10652,
  [SMALL_STATE(526)] = 10656,
  [SMALL_STATE(527)] = 10660,
  [SMALL_STATE(528)] = 10664,
  [SMALL_STATE(529)] = 10668,
  [SMALL_STATE(530)] = 10672,
  [SMALL_STATE(531)] = 10676,
  [SMALL_STATE(532)] = 10680,
  [SMALL_STATE(533)] = 10684,
  [SMALL_STATE(534)] = 10688,
  [SMALL_STATE(535)] = 10692,
  [SMALL_STATE(536)] = 10696,
  [SMALL_STATE(537)] = 10700,
  [SMALL_STATE(538)] = 10704,
  [SMALL_STATE(539)] = 10708,
  [SMALL_STATE(540)] = 10712,
  [SMALL_STATE(541)] = 10716,
  [SMALL_STATE(542)] = 10720,
  [SMALL_STATE(543)] = 10724,
  [SMALL_STATE(544)] = 10728,
  [SMALL_STATE(545)] = 10732,
  [SMALL_STATE(546)] = 10736,
  [SMALL_STATE(547)] = 10740,
  [SMALL_STATE(548)] = 10744,
  [SMALL_STATE(549)] = 10748,
  [SMALL_STATE(550)] = 10752,
  [SMALL_STATE(551)] = 10756,
  [SMALL_STATE(552)] = 10760,
  [SMALL_STATE(553)] = 10764,
  [SMALL_STATE(554)] = 10768,
  [SMALL_STATE(555)] = 10772,
  [SMALL_STATE(556)] = 10776,
  [SMALL_STATE(557)] = 10780,
  [SMALL_STATE(558)] = 10784,
  [SMALL_STATE(559)] = 10788,
  [SMALL_STATE(560)] = 10792,
  [SMALL_STATE(561)] = 10796,
  [SMALL_STATE(562)] = 10800,
  [SMALL_STATE(563)] = 10804,
  [SMALL_STATE(564)] = 10808,
  [SMALL_STATE(565)] = 10812,
  [SMALL_STATE(566)] = 10816,
  [SMALL_STATE(567)] = 10820,
  [SMALL_STATE(568)] = 10824,
  [SMALL_STATE(569)] = 10828,
  [SMALL_STATE(570)] = 10832,
  [SMALL_STATE(571)] = 10836,
  [SMALL_STATE(572)] = 10840,
  [SMALL_STATE(573)] = 10844,
  [SMALL_STATE(574)] = 10848,
  [SMALL_STATE(575)] = 10852,
  [SMALL_STATE(576)] = 10856,
  [SMALL_STATE(577)] = 10860,
  [SMALL_STATE(578)] = 10864,
  [SMALL_STATE(579)] = 10868,
  [SMALL_STATE(580)] = 10872,
  [SMALL_STATE(581)] = 10876,
  [SMALL_STATE(582)] = 10880,
  [SMALL_STATE(583)] = 10884,
  [SMALL_STATE(584)] = 10888,
  [SMALL_STATE(585)] = 10892,
  [SMALL_STATE(586)] = 10896,
  [SMALL_STATE(587)] = 10900,
  [SMALL_STATE(588)] = 10904,
  [SMALL_STATE(589)] = 10908,
  [SMALL_STATE(590)] = 10912,
  [SMALL_STATE(591)] = 10916,
  [SMALL_STATE(592)] = 10920,
  [SMALL_STATE(593)] = 10924,
  [SMALL_STATE(594)] = 10928,
  [SMALL_STATE(595)] = 10932,
  [SMALL_STATE(596)] = 10936,
  [SMALL_STATE(597)] = 10940,
  [SMALL_STATE(598)] = 10944,
  [SMALL_STATE(599)] = 10948,
  [SMALL_STATE(600)] = 10952,
  [SMALL_STATE(601)] = 10956,
  [SMALL_STATE(602)] = 10960,
  [SMALL_STATE(603)] = 10964,
  [SMALL_STATE(604)] = 10968,
  [SMALL_STATE(605)] = 10972,
  [SMALL_STATE(606)] = 10976,
  [SMALL_STATE(607)] = 10980,
  [SMALL_STATE(608)] = 10984,
  [SMALL_STATE(609)] = 10988,
  [SMALL_STATE(610)] = 10992,
  [SMALL_STATE(611)] = 10996,
  [SMALL_STATE(612)] = 11000,
  [SMALL_STATE(613)] = 11004,
  [SMALL_STATE(614)] = 11008,
  [SMALL_STATE(615)] = 11012,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(6),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(6),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(494),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(283),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(472),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(464),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(441),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(461),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(460),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(459),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(458),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(457),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(569),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(8),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(8),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(585),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(258),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(587),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(588),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(440),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(607),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(608),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(590),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(591),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(457),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 13),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 13),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 31),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 31),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 30),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 30),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 13),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 13),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 12),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 12),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 12),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 12),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 31),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 31),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 30),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 30),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 39),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 39),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 29),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 29),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 11),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 11),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 29),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 29),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(291),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, .production_id = 39),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 7, .production_id = 39),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 3, .production_id = 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3, .production_id = 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 11),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 11),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(290),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 19),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 19),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4, .production_id = 7),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 4, .production_id = 7),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5, .production_id = 24),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 5, .production_id = 24),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 18),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 18),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 32),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 32),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 17),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 17),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_list, 2),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__key_value_list, 2), SHIFT_REPEAT(399),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 5, .production_id = 28),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 28),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 5, .production_id = 9),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 9),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 5, .production_id = 27),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, .production_id = 27),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 5, .production_id = 26),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, .production_id = 26),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 5, .production_id = 25),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, .production_id = 25),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 5, .production_id = 23),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 5, .production_id = 23),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 5, .production_id = 22),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5, .production_id = 22),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 5, .production_id = 21),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5, .production_id = 21),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 5, .production_id = 20),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 20),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 5, .production_id = 8),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 8),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 5, .production_id = 18),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 18),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 5, .production_id = 7),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 7),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 19),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 19),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 18),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 18),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 17),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 17),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 7),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 7),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 8, .production_id = 40),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 8, .production_id = 40),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 34),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 34),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 6, .production_id = 18),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 6, .production_id = 18),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 6, .production_id = 20),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 6, .production_id = 20),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 4, .production_id = 9),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4, .production_id = 9),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 4, .production_id = 8),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4, .production_id = 8),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 4, .production_id = 7),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4, .production_id = 7),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 6, .production_id = 21),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 21),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 6, .production_id = 35),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 35),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, .production_id = 37),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 7, .production_id = 37),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 7, .production_id = 36),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 7, .production_id = 36),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 7, .production_id = 35),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 7, .production_id = 35),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 34),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 34),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 6, .production_id = 22),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 22),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 40),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 40),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 33),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 33),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 32),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 32),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 6, .production_id = 36),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 36),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 6, .production_id = 23),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6, .production_id = 23),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 6, .production_id = 24),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6, .production_id = 24),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 6, .production_id = 25),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, .production_id = 25),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6, .production_id = 28),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 6, .production_id = 28),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 33),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 33),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 37),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 6, .production_id = 37),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 27),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 6, .production_id = 27),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, .production_id = 26),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 6, .production_id = 26),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__key_value_list, 2), SHIFT_REPEAT(403),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 67),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 67),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 43),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 43),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9, .production_id = 87),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9, .production_id = 87),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 86),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 86),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 85),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 85),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 84),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 84),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 83),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 83),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 82),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 82),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 81),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 81),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 80),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 80),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 79),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 79),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 68),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 68),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 78),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 78),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 77),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 77),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 76),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 76),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 75),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 75),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 74),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 74),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 73),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 73),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 72),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 72),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 70),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 70),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 56),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 56),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 69),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 69),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 68),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 68),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 55),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 55),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 66),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 66),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 65),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 65),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 64),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 64),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 63),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 63),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 52),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 52),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 62),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 62),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 61),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 61),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 58),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 58),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 57),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 57),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 56),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 56),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 55),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 55),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 46),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 46),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 54),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 54),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 44),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 44),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 53),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 53),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 52),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 52),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 38),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 38),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 43),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 43),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value_line, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_line, 3),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 38),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 38),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 48),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 48),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 44),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 44),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 47),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 47),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 45),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 45),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 46),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 46),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4, .production_id = 16),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4, .production_id = 16),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 1),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directive, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 3),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__skipped_lines, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entry, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entry, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 1),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, .production_id = 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 5),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, .production_id = 5),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pushtag, 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_poptag, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pushmeta, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__skipped_lines, 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 2),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, .production_id = 14),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4, .production_id = 14),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 4, .production_id = 15),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 4, .production_id = 15),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 4),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 4),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_popmeta, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 4),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(335),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(320),
  [804] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(312),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(328),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, .production_id = 1),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, .production_id = 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_number_expr, 2),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_number_expr, 2),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number_expr, 3),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number_expr, 3),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_value, 1),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_value, 1),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren__number_expr, 3),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren__number_expr, 3),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 42),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 42),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 2),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 1),
  [1026] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 2, .production_id = 6), SHIFT_REPEAT(569),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 2, .production_id = 6),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2),
  [1047] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2), SHIFT_REPEAT(478),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 2),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 2),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txn_strings, 1, .production_id = 4),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 2), SHIFT_REPEAT(355),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_links_repeat1, 2),
  [1119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_links_repeat1, 2), SHIFT_REPEAT(380),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_links, 1),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 2),
  [1128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 2),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 3, .production_id = 51),
  [1132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 3, .production_id = 51),
  [1134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2), SHIFT_REPEAT(289),
  [1137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp_list, 1),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp_list, 1),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asterisk, 1),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp_list, 2),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp_list, 2),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txn_strings, 2, .production_id = 10),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 60),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 60),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 59),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 59),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 49),
  [1215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 49),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 50),
  [1225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 50),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 41),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 41),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 4, .production_id = 71),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 4, .production_id = 71),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp, 1),
  [1247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp, 1),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 1),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 4),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 2),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_booking, 1),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 1, .production_id = 2),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__org_stars, 2),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1295] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optflag, 1),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__stars = 0,
  ts_external_token__sectionend = 1,
  ts_external_token__eof = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__stars] = sym__stars,
  [ts_external_token__sectionend] = sym__sectionend,
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__stars] = true,
    [ts_external_token__sectionend] = true,
    [ts_external_token__eof] = true,
  },
  [2] = {
    [ts_external_token__stars] = true,
  },
  [3] = {
    [ts_external_token__stars] = true,
    [ts_external_token__sectionend] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_beancount_external_scanner_create(void);
void tree_sitter_beancount_external_scanner_destroy(void *);
bool tree_sitter_beancount_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_beancount_external_scanner_serialize(void *, char *);
void tree_sitter_beancount_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_beancount() {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_beancount_external_scanner_create,
      tree_sitter_beancount_external_scanner_destroy,
      tree_sitter_beancount_external_scanner_scan,
      tree_sitter_beancount_external_scanner_serialize,
      tree_sitter_beancount_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
