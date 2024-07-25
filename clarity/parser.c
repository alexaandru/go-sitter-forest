#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 213
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 156
#define ALIAS_COUNT 0
#define TOKEN_COUNT 94
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_define_DASHtrait = 3,
  anon_sym_RPAREN = 4,
  anon_sym_impl_DASHtrait = 5,
  anon_sym_DOT = 6,
  anon_sym_use_DASHtrait = 7,
  anon_sym_define_DASHfungible_DASHtoken = 8,
  anon_sym_define_DASHnon_DASHfungible_DASHtoken = 9,
  anon_sym_define_DASHconstant = 10,
  anon_sym_define_DASHdata_DASHvar = 11,
  anon_sym_define_DASHmap = 12,
  anon_sym_define_DASHprivate = 13,
  anon_sym_define_DASHread_DASHonly = 14,
  anon_sym_define_DASHpublic = 15,
  anon_sym_let = 16,
  anon_sym_LT = 17,
  anon_sym_GT = 18,
  anon_sym_int = 19,
  anon_sym_uint = 20,
  anon_sym_bool = 21,
  anon_sym_principal = 22,
  anon_sym_buff = 23,
  aux_sym_buffer_type_token1 = 24,
  anon_sym_string_DASHascii = 25,
  anon_sym_string_DASHutf8 = 26,
  anon_sym_list = 27,
  anon_sym_optional = 28,
  anon_sym_tuple = 29,
  anon_sym_LBRACE = 30,
  anon_sym_COMMA = 31,
  anon_sym_RBRACE = 32,
  anon_sym_COLON = 33,
  anon_sym_response = 34,
  anon_sym_DASH = 35,
  sym_uint_lit = 36,
  anon_sym_true = 37,
  anon_sym_false = 38,
  anon_sym_SQUOTE = 39,
  aux_sym_standard_principal_lit_token1 = 40,
  anon_sym_0x = 41,
  aux_sym_buffer_lit_token1 = 42,
  anon_sym_DQUOTE = 43,
  aux_sym_ascii_string_lit_token1 = 44,
  sym_utf8_string_lit = 45,
  anon_sym_some = 46,
  sym_none_lit = 47,
  anon_sym_ok = 48,
  anon_sym_err = 49,
  anon_sym_PLUS = 50,
  anon_sym_STAR = 51,
  anon_sym_SLASH = 52,
  anon_sym_mod = 53,
  anon_sym_pow = 54,
  anon_sym_LT_EQ = 55,
  anon_sym_GT_EQ = 56,
  anon_sym_and = 57,
  anon_sym_or = 58,
  anon_sym_as_DASHcontract = 59,
  anon_sym_asserts_BANG = 60,
  anon_sym_begin = 61,
  anon_sym_concat = 62,
  anon_sym_contract_DASHcall_QMARK = 63,
  anon_sym_contract_DASHof = 64,
  anon_sym_default_DASHto = 65,
  anon_sym_if = 66,
  anon_sym_filter = 67,
  anon_sym_fold = 68,
  anon_sym_get = 69,
  anon_sym_is_DASHeq = 70,
  anon_sym_map = 71,
  anon_sym_map_DASHget_QMARK = 72,
  anon_sym_map_DASHinsert = 73,
  anon_sym_map_DASHset = 74,
  anon_sym_match = 75,
  anon_sym_merge = 76,
  anon_sym_not = 77,
  anon_sym_print = 78,
  anon_sym_try_BANG = 79,
  anon_sym_unwrap_BANG = 80,
  anon_sym_unwrap_DASHpanic = 81,
  anon_sym_var_DASHget = 82,
  anon_sym_var_DASHset = 83,
  anon_sym_block_DASHheight = 84,
  anon_sym_burn_DASHblock_DASHheight = 85,
  anon_sym_chain_id = 86,
  anon_sym_contract_DASHcaller = 87,
  anon_sym_is_DASHin_mainnet = 88,
  anon_sym_is_DASHin_DASHregtest = 89,
  anon_sym_stx_DASHliquid_DASHsupply = 90,
  anon_sym_tx_DASHsender = 91,
  anon_sym_tx_DASHsponsor_QMARK = 92,
  sym_comment = 93,
  sym_source = 94,
  sym__expression = 95,
  sym__function_call = 96,
  sym_trait_definition = 97,
  sym_trait_implementation = 98,
  sym_trait_usage = 99,
  sym_token_definition = 100,
  sym_fungible_token_definition = 101,
  sym_non_fungible_token_definition = 102,
  sym_constant_definition = 103,
  sym_variable_definition = 104,
  sym_mapping_definition = 105,
  sym_function_definition = 106,
  sym_private_function = 107,
  sym_read_only_function = 108,
  sym_public_function = 109,
  sym__native_function_call = 110,
  sym_basic_native_form = 111,
  sym_contract_function_call = 112,
  sym_let_expression = 113,
  sym_local_binding = 114,
  sym_function_signature = 115,
  sym_function_parameter = 116,
  sym_function_signature_for_trait = 117,
  sym_parameter_type = 118,
  sym_trait_type = 119,
  sym_native_type = 120,
  sym_buffer_type = 121,
  sym_ascii_string_type = 122,
  sym_utf8_string_type = 123,
  sym_list_type = 124,
  sym_optional_type = 125,
  sym_tuple_type_for_trait = 126,
  sym_tuple_type = 127,
  sym__tuple_type_pair = 128,
  sym_response_type = 129,
  sym__parameter = 130,
  sym__literal = 131,
  sym_int_lit = 132,
  sym_bool_lit = 133,
  sym_standard_principal_lit = 134,
  sym_contract_principal_lit = 135,
  sym_buffer_lit = 136,
  sym_ascii_string_lit = 137,
  sym_list_lit = 138,
  sym_list_lit_token = 139,
  sym_some_lit = 140,
  sym_tuple_lit = 141,
  sym__tuple_lit_pair = 142,
  sym_response_lit = 143,
  sym_native_identifier = 144,
  sym_global = 145,
  aux_sym_source_repeat1 = 146,
  aux_sym_trait_definition_repeat1 = 147,
  aux_sym_basic_native_form_repeat1 = 148,
  aux_sym_let_expression_repeat1 = 149,
  aux_sym_let_expression_repeat2 = 150,
  aux_sym_function_signature_repeat1 = 151,
  aux_sym_function_signature_for_trait_repeat1 = 152,
  aux_sym_tuple_type_for_trait_repeat1 = 153,
  aux_sym_tuple_type_repeat1 = 154,
  aux_sym_tuple_lit_repeat1 = 155,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_define_DASHtrait] = "define-trait",
  [anon_sym_RPAREN] = ")",
  [anon_sym_impl_DASHtrait] = "impl-trait",
  [anon_sym_DOT] = ".",
  [anon_sym_use_DASHtrait] = "use-trait",
  [anon_sym_define_DASHfungible_DASHtoken] = "define-fungible-token",
  [anon_sym_define_DASHnon_DASHfungible_DASHtoken] = "define-non-fungible-token",
  [anon_sym_define_DASHconstant] = "define-constant",
  [anon_sym_define_DASHdata_DASHvar] = "define-data-var",
  [anon_sym_define_DASHmap] = "define-map",
  [anon_sym_define_DASHprivate] = "define-private",
  [anon_sym_define_DASHread_DASHonly] = "define-read-only",
  [anon_sym_define_DASHpublic] = "define-public",
  [anon_sym_let] = "let",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_int] = "int",
  [anon_sym_uint] = "uint",
  [anon_sym_bool] = "bool",
  [anon_sym_principal] = "principal",
  [anon_sym_buff] = "buff",
  [aux_sym_buffer_type_token1] = "buffer_type_token1",
  [anon_sym_string_DASHascii] = "string-ascii",
  [anon_sym_string_DASHutf8] = "string-utf8",
  [anon_sym_list] = "list",
  [anon_sym_optional] = "optional",
  [anon_sym_tuple] = "tuple",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_response] = "response",
  [anon_sym_DASH] = "-",
  [sym_uint_lit] = "uint_lit",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_standard_principal_lit_token1] = "standard_principal_lit_token1",
  [anon_sym_0x] = "0x",
  [aux_sym_buffer_lit_token1] = "buffer_lit_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_ascii_string_lit_token1] = "ascii_string_lit_token1",
  [sym_utf8_string_lit] = "utf8_string_lit",
  [anon_sym_some] = "some",
  [sym_none_lit] = "none_lit",
  [anon_sym_ok] = "ok",
  [anon_sym_err] = "err",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_mod] = "mod",
  [anon_sym_pow] = "pow",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_as_DASHcontract] = "as-contract",
  [anon_sym_asserts_BANG] = "asserts!",
  [anon_sym_begin] = "begin",
  [anon_sym_concat] = "concat",
  [anon_sym_contract_DASHcall_QMARK] = "contract-call\?",
  [anon_sym_contract_DASHof] = "contract-of",
  [anon_sym_default_DASHto] = "default-to",
  [anon_sym_if] = "if",
  [anon_sym_filter] = "filter",
  [anon_sym_fold] = "fold",
  [anon_sym_get] = "get",
  [anon_sym_is_DASHeq] = "is-eq",
  [anon_sym_map] = "map",
  [anon_sym_map_DASHget_QMARK] = "map-get\?",
  [anon_sym_map_DASHinsert] = "map-insert",
  [anon_sym_map_DASHset] = "map-set",
  [anon_sym_match] = "match",
  [anon_sym_merge] = "merge",
  [anon_sym_not] = "not",
  [anon_sym_print] = "print",
  [anon_sym_try_BANG] = "try!",
  [anon_sym_unwrap_BANG] = "unwrap!",
  [anon_sym_unwrap_DASHpanic] = "unwrap-panic",
  [anon_sym_var_DASHget] = "var-get",
  [anon_sym_var_DASHset] = "var-set",
  [anon_sym_block_DASHheight] = "block-height",
  [anon_sym_burn_DASHblock_DASHheight] = "burn-block-height",
  [anon_sym_chain_id] = "chain_id",
  [anon_sym_contract_DASHcaller] = "contract-caller",
  [anon_sym_is_DASHin_mainnet] = "is-in_mainnet",
  [anon_sym_is_DASHin_DASHregtest] = "is-in-regtest",
  [anon_sym_stx_DASHliquid_DASHsupply] = "stx-liquid-supply",
  [anon_sym_tx_DASHsender] = "tx-sender",
  [anon_sym_tx_DASHsponsor_QMARK] = "tx-sponsor\?",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym__expression] = "_expression",
  [sym__function_call] = "_function_call",
  [sym_trait_definition] = "trait_definition",
  [sym_trait_implementation] = "trait_implementation",
  [sym_trait_usage] = "trait_usage",
  [sym_token_definition] = "token_definition",
  [sym_fungible_token_definition] = "fungible_token_definition",
  [sym_non_fungible_token_definition] = "non_fungible_token_definition",
  [sym_constant_definition] = "constant_definition",
  [sym_variable_definition] = "variable_definition",
  [sym_mapping_definition] = "mapping_definition",
  [sym_function_definition] = "function_definition",
  [sym_private_function] = "private_function",
  [sym_read_only_function] = "read_only_function",
  [sym_public_function] = "public_function",
  [sym__native_function_call] = "_native_function_call",
  [sym_basic_native_form] = "basic_native_form",
  [sym_contract_function_call] = "contract_function_call",
  [sym_let_expression] = "let_expression",
  [sym_local_binding] = "local_binding",
  [sym_function_signature] = "function_signature",
  [sym_function_parameter] = "function_parameter",
  [sym_function_signature_for_trait] = "function_signature_for_trait",
  [sym_parameter_type] = "parameter_type",
  [sym_trait_type] = "trait_type",
  [sym_native_type] = "native_type",
  [sym_buffer_type] = "buffer_type",
  [sym_ascii_string_type] = "ascii_string_type",
  [sym_utf8_string_type] = "utf8_string_type",
  [sym_list_type] = "list_type",
  [sym_optional_type] = "optional_type",
  [sym_tuple_type_for_trait] = "tuple_type_for_trait",
  [sym_tuple_type] = "tuple_type",
  [sym__tuple_type_pair] = "_tuple_type_pair",
  [sym_response_type] = "response_type",
  [sym__parameter] = "_parameter",
  [sym__literal] = "_literal",
  [sym_int_lit] = "int_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_standard_principal_lit] = "standard_principal_lit",
  [sym_contract_principal_lit] = "contract_principal_lit",
  [sym_buffer_lit] = "buffer_lit",
  [sym_ascii_string_lit] = "ascii_string_lit",
  [sym_list_lit] = "list_lit",
  [sym_list_lit_token] = "list_lit_token",
  [sym_some_lit] = "some_lit",
  [sym_tuple_lit] = "tuple_lit",
  [sym__tuple_lit_pair] = "_tuple_lit_pair",
  [sym_response_lit] = "response_lit",
  [sym_native_identifier] = "native_identifier",
  [sym_global] = "global",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_trait_definition_repeat1] = "trait_definition_repeat1",
  [aux_sym_basic_native_form_repeat1] = "basic_native_form_repeat1",
  [aux_sym_let_expression_repeat1] = "let_expression_repeat1",
  [aux_sym_let_expression_repeat2] = "let_expression_repeat2",
  [aux_sym_function_signature_repeat1] = "function_signature_repeat1",
  [aux_sym_function_signature_for_trait_repeat1] = "function_signature_for_trait_repeat1",
  [aux_sym_tuple_type_for_trait_repeat1] = "tuple_type_for_trait_repeat1",
  [aux_sym_tuple_type_repeat1] = "tuple_type_repeat1",
  [aux_sym_tuple_lit_repeat1] = "tuple_lit_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_define_DASHtrait] = anon_sym_define_DASHtrait,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_impl_DASHtrait] = anon_sym_impl_DASHtrait,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_use_DASHtrait] = anon_sym_use_DASHtrait,
  [anon_sym_define_DASHfungible_DASHtoken] = anon_sym_define_DASHfungible_DASHtoken,
  [anon_sym_define_DASHnon_DASHfungible_DASHtoken] = anon_sym_define_DASHnon_DASHfungible_DASHtoken,
  [anon_sym_define_DASHconstant] = anon_sym_define_DASHconstant,
  [anon_sym_define_DASHdata_DASHvar] = anon_sym_define_DASHdata_DASHvar,
  [anon_sym_define_DASHmap] = anon_sym_define_DASHmap,
  [anon_sym_define_DASHprivate] = anon_sym_define_DASHprivate,
  [anon_sym_define_DASHread_DASHonly] = anon_sym_define_DASHread_DASHonly,
  [anon_sym_define_DASHpublic] = anon_sym_define_DASHpublic,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_principal] = anon_sym_principal,
  [anon_sym_buff] = anon_sym_buff,
  [aux_sym_buffer_type_token1] = aux_sym_buffer_type_token1,
  [anon_sym_string_DASHascii] = anon_sym_string_DASHascii,
  [anon_sym_string_DASHutf8] = anon_sym_string_DASHutf8,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_response] = anon_sym_response,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_uint_lit] = sym_uint_lit,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_standard_principal_lit_token1] = aux_sym_standard_principal_lit_token1,
  [anon_sym_0x] = anon_sym_0x,
  [aux_sym_buffer_lit_token1] = aux_sym_buffer_lit_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_ascii_string_lit_token1] = aux_sym_ascii_string_lit_token1,
  [sym_utf8_string_lit] = sym_utf8_string_lit,
  [anon_sym_some] = anon_sym_some,
  [sym_none_lit] = sym_none_lit,
  [anon_sym_ok] = anon_sym_ok,
  [anon_sym_err] = anon_sym_err,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_pow] = anon_sym_pow,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_as_DASHcontract] = anon_sym_as_DASHcontract,
  [anon_sym_asserts_BANG] = anon_sym_asserts_BANG,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_concat] = anon_sym_concat,
  [anon_sym_contract_DASHcall_QMARK] = anon_sym_contract_DASHcall_QMARK,
  [anon_sym_contract_DASHof] = anon_sym_contract_DASHof,
  [anon_sym_default_DASHto] = anon_sym_default_DASHto,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_fold] = anon_sym_fold,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_is_DASHeq] = anon_sym_is_DASHeq,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_map_DASHget_QMARK] = anon_sym_map_DASHget_QMARK,
  [anon_sym_map_DASHinsert] = anon_sym_map_DASHinsert,
  [anon_sym_map_DASHset] = anon_sym_map_DASHset,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_merge] = anon_sym_merge,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_try_BANG] = anon_sym_try_BANG,
  [anon_sym_unwrap_BANG] = anon_sym_unwrap_BANG,
  [anon_sym_unwrap_DASHpanic] = anon_sym_unwrap_DASHpanic,
  [anon_sym_var_DASHget] = anon_sym_var_DASHget,
  [anon_sym_var_DASHset] = anon_sym_var_DASHset,
  [anon_sym_block_DASHheight] = anon_sym_block_DASHheight,
  [anon_sym_burn_DASHblock_DASHheight] = anon_sym_burn_DASHblock_DASHheight,
  [anon_sym_chain_id] = anon_sym_chain_id,
  [anon_sym_contract_DASHcaller] = anon_sym_contract_DASHcaller,
  [anon_sym_is_DASHin_mainnet] = anon_sym_is_DASHin_mainnet,
  [anon_sym_is_DASHin_DASHregtest] = anon_sym_is_DASHin_DASHregtest,
  [anon_sym_stx_DASHliquid_DASHsupply] = anon_sym_stx_DASHliquid_DASHsupply,
  [anon_sym_tx_DASHsender] = anon_sym_tx_DASHsender,
  [anon_sym_tx_DASHsponsor_QMARK] = anon_sym_tx_DASHsponsor_QMARK,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym__expression] = sym__expression,
  [sym__function_call] = sym__function_call,
  [sym_trait_definition] = sym_trait_definition,
  [sym_trait_implementation] = sym_trait_implementation,
  [sym_trait_usage] = sym_trait_usage,
  [sym_token_definition] = sym_token_definition,
  [sym_fungible_token_definition] = sym_fungible_token_definition,
  [sym_non_fungible_token_definition] = sym_non_fungible_token_definition,
  [sym_constant_definition] = sym_constant_definition,
  [sym_variable_definition] = sym_variable_definition,
  [sym_mapping_definition] = sym_mapping_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_private_function] = sym_private_function,
  [sym_read_only_function] = sym_read_only_function,
  [sym_public_function] = sym_public_function,
  [sym__native_function_call] = sym__native_function_call,
  [sym_basic_native_form] = sym_basic_native_form,
  [sym_contract_function_call] = sym_contract_function_call,
  [sym_let_expression] = sym_let_expression,
  [sym_local_binding] = sym_local_binding,
  [sym_function_signature] = sym_function_signature,
  [sym_function_parameter] = sym_function_parameter,
  [sym_function_signature_for_trait] = sym_function_signature_for_trait,
  [sym_parameter_type] = sym_parameter_type,
  [sym_trait_type] = sym_trait_type,
  [sym_native_type] = sym_native_type,
  [sym_buffer_type] = sym_buffer_type,
  [sym_ascii_string_type] = sym_ascii_string_type,
  [sym_utf8_string_type] = sym_utf8_string_type,
  [sym_list_type] = sym_list_type,
  [sym_optional_type] = sym_optional_type,
  [sym_tuple_type_for_trait] = sym_tuple_type_for_trait,
  [sym_tuple_type] = sym_tuple_type,
  [sym__tuple_type_pair] = sym__tuple_type_pair,
  [sym_response_type] = sym_response_type,
  [sym__parameter] = sym__parameter,
  [sym__literal] = sym__literal,
  [sym_int_lit] = sym_int_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_standard_principal_lit] = sym_standard_principal_lit,
  [sym_contract_principal_lit] = sym_contract_principal_lit,
  [sym_buffer_lit] = sym_buffer_lit,
  [sym_ascii_string_lit] = sym_ascii_string_lit,
  [sym_list_lit] = sym_list_lit,
  [sym_list_lit_token] = sym_list_lit_token,
  [sym_some_lit] = sym_some_lit,
  [sym_tuple_lit] = sym_tuple_lit,
  [sym__tuple_lit_pair] = sym__tuple_lit_pair,
  [sym_response_lit] = sym_response_lit,
  [sym_native_identifier] = sym_native_identifier,
  [sym_global] = sym_global,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_trait_definition_repeat1] = aux_sym_trait_definition_repeat1,
  [aux_sym_basic_native_form_repeat1] = aux_sym_basic_native_form_repeat1,
  [aux_sym_let_expression_repeat1] = aux_sym_let_expression_repeat1,
  [aux_sym_let_expression_repeat2] = aux_sym_let_expression_repeat2,
  [aux_sym_function_signature_repeat1] = aux_sym_function_signature_repeat1,
  [aux_sym_function_signature_for_trait_repeat1] = aux_sym_function_signature_for_trait_repeat1,
  [aux_sym_tuple_type_for_trait_repeat1] = aux_sym_tuple_type_for_trait_repeat1,
  [aux_sym_tuple_type_repeat1] = aux_sym_tuple_type_repeat1,
  [aux_sym_tuple_lit_repeat1] = aux_sym_tuple_lit_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHtrait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_impl_DASHtrait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use_DASHtrait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHfungible_DASHtoken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHnon_DASHfungible_DASHtoken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHconstant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHdata_DASHvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHmap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHprivate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHread_DASHonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHpublic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_principal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buff] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_buffer_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_string_DASHascii] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string_DASHutf8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_response] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_uint_lit] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_standard_principal_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_buffer_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ascii_string_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_utf8_string_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [sym_none_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ok] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_err] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as_DASHcontract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asserts_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_concat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contract_DASHcall_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contract_DASHof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHeq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map_DASHget_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map_DASHinsert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map_DASHset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unwrap_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unwrap_DASHpanic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var_DASHget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var_DASHset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block_DASHheight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_burn_DASHblock_DASHheight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chain_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contract_DASHcaller] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHin_mainnet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHin_DASHregtest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stx_DASHliquid_DASHsupply] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tx_DASHsender] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tx_DASHsponsor_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__function_call] = {
    .visible = false,
    .named = true,
  },
  [sym_trait_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_implementation] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_usage] = {
    .visible = true,
    .named = true,
  },
  [sym_token_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_fungible_token_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_non_fungible_token_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_private_function] = {
    .visible = true,
    .named = true,
  },
  [sym_read_only_function] = {
    .visible = true,
    .named = true,
  },
  [sym_public_function] = {
    .visible = true,
    .named = true,
  },
  [sym__native_function_call] = {
    .visible = false,
    .named = true,
  },
  [sym_basic_native_form] = {
    .visible = true,
    .named = true,
  },
  [sym_contract_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_local_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_function_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_function_signature_for_trait] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_type] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_type] = {
    .visible = true,
    .named = true,
  },
  [sym_native_type] = {
    .visible = true,
    .named = true,
  },
  [sym_buffer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_ascii_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_utf8_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_list_type] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type_for_trait] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple_type_pair] = {
    .visible = false,
    .named = true,
  },
  [sym_response_type] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_standard_principal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_contract_principal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_buffer_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_ascii_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_list_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_list_lit_token] = {
    .visible = true,
    .named = true,
  },
  [sym_some_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_lit] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple_lit_pair] = {
    .visible = false,
    .named = true,
  },
  [sym_response_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_native_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trait_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_basic_native_form_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_expression_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_signature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_signature_for_trait_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_type_for_trait_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_key_type = 2,
  field_operator = 3,
  field_trait_alias = 4,
  field_trait_name = 5,
  field_value = 6,
  field_value_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_key_type] = "key_type",
  [field_operator] = "operator",
  [field_trait_alias] = "trait_alias",
  [field_trait_name] = "trait_name",
  [field_value] = "value",
  [field_value_type] = "value_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 4},
  [5] = {.index = 9, .length = 2},
  [6] = {.index = 11, .length = 2},
  [7] = {.index = 13, .length = 4},
  [8] = {.index = 17, .length = 2},
  [9] = {.index = 19, .length = 2},
  [10] = {.index = 21, .length = 4},
  [11] = {.index = 25, .length = 2},
  [12] = {.index = 27, .length = 2},
  [13] = {.index = 29, .length = 2},
  [14] = {.index = 31, .length = 4},
  [15] = {.index = 35, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 1},
  [1] =
    {field_key, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [3] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [5] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [9] =
    {field_key, 0, .inherited = true},
    {field_value_type, 0, .inherited = true},
  [11] =
    {field_key, 1, .inherited = true},
    {field_value_type, 1, .inherited = true},
  [13] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value_type, 0, .inherited = true},
    {field_value_type, 1, .inherited = true},
  [17] =
    {field_key_type, 3},
    {field_value_type, 4},
  [19] =
    {field_key, 0},
    {field_value, 2},
  [21] =
    {field_key, 1, .inherited = true},
    {field_key, 2, .inherited = true},
    {field_value, 1, .inherited = true},
    {field_value, 2, .inherited = true},
  [25] =
    {field_trait_alias, 2},
    {field_trait_name, 5},
  [27] =
    {field_key, 2, .inherited = true},
    {field_value_type, 2, .inherited = true},
  [29] =
    {field_key, 0},
    {field_value_type, 2},
  [31] =
    {field_key, 1, .inherited = true},
    {field_key, 2, .inherited = true},
    {field_value_type, 1, .inherited = true},
    {field_value_type, 2, .inherited = true},
  [35] =
    {field_key, 1},
    {field_value_type, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(64);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(74);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 10:
      if (lookahead == ';') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(85);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(13);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(14);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(19);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(86);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_buffer_type_token1);
      if (lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_buffer_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_standard_principal_lit_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_buffer_lit_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_utf8_string_lit);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(53);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'k') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 's') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_ok);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 46:
      if (lookahead == 'w') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 55:
      if (lookahead == 'w') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_uint_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(109);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_err);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_map);
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_pow);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(129);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 94:
      if (lookahead == '!') ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(136);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(137);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'k') ADVANCE(141);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_buff);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 117:
      if (lookahead == 'q') ADVANCE(151);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(156);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_none_lit);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_try_BANG);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 141:
      if (lookahead == '-') ADVANCE(173);
      END_STATE();
    case 142:
      if (lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(175);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_is_DASHeq);
      END_STATE();
    case 152:
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '_') ADVANCE(183);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 173:
      if (lookahead == 'h') ADVANCE(200);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_concat);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 179:
      if (lookahead == '-') ADVANCE(205);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(208);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 190:
      if (lookahead == '-') ADVANCE(215);
      END_STATE();
    case 191:
      if (lookahead == 'q') ADVANCE(216);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 194:
      if (lookahead == '!') ADVANCE(219);
      if (lookahead == '-') ADVANCE(220);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 199:
      if (lookahead == '!') ADVANCE(225);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 204:
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 209:
      if (lookahead == '?') ADVANCE(242);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_map_DASHset);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_unwrap_BANG);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_var_DASHget);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_var_DASHset);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_asserts_BANG);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_chain_id);
      END_STATE();
    case 229:
      if (lookahead == '-') ADVANCE(257);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 240:
      if (lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_map_DASHget_QMARK);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 254:
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 255:
      if (lookahead == 'g') ADVANCE(281);
      END_STATE();
    case 256:
      if (lookahead == 'k') ADVANCE(282);
      END_STATE();
    case 257:
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 262:
      if (lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 265:
      if (lookahead == 'b') ADVANCE(292);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_principal);
      END_STATE();
    case 273:
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 274:
      if (lookahead == 'f') ADVANCE(300);
      END_STATE();
    case 275:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_tx_DASHsender);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_use_DASHtrait);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 281:
      if (lookahead == 'h') ADVANCE(305);
      END_STATE();
    case 282:
      if (lookahead == '-') ADVANCE(306);
      END_STATE();
    case 283:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 284:
      if (lookahead == 'f') ADVANCE(308);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_default_DASHto);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 287:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 288:
      if (lookahead == 'g') ADVANCE(311);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_define_DASHmap);
      END_STATE();
    case 290:
      if (lookahead == '-') ADVANCE(312);
      END_STATE();
    case 291:
      if (lookahead == 'v') ADVANCE(313);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 293:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_impl_DASHtrait);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_map_DASHinsert);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 300:
      if (lookahead == '8') ADVANCE(320);
      END_STATE();
    case 301:
      if (lookahead == '-') ADVANCE(321);
      END_STATE();
    case 302:
      if (lookahead == '?') ADVANCE(322);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_as_DASHcontract);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 306:
      if (lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_contract_DASHof);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 310:
      if (lookahead == '-') ADVANCE(328);
      END_STATE();
    case 311:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 312:
      if (lookahead == 'f') ADVANCE(330);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 314:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 315:
      if (lookahead == '-') ADVANCE(333);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 317:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 319:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_string_DASHutf8);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(338);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_tx_DASHsponsor_QMARK);
      END_STATE();
    case 323:
      if (lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_block_DASHheight);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 328:
      if (lookahead == 'v') ADVANCE(343);
      END_STATE();
    case 329:
      if (lookahead == 'b') ADVANCE(344);
      END_STATE();
    case 330:
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 332:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_define_DASHtrait);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_string_DASHascii);
      END_STATE();
    case 338:
      if (lookahead == 'u') ADVANCE(351);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_unwrap_DASHpanic);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 341:
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 343:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_define_DASHpublic);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_is_DASHin_DASHregtest);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_is_DASHin_mainnet);
      END_STATE();
    case 351:
      if (lookahead == 'p') ADVANCE(361);
      END_STATE();
    case 352:
      if (lookahead == 'g') ADVANCE(362);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_contract_DASHcall_QMARK);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 358:
      if (lookahead == 'g') ADVANCE(367);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_define_DASHprivate);
      END_STATE();
    case 360:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 361:
      if (lookahead == 'p') ADVANCE(369);
      END_STATE();
    case 362:
      if (lookahead == 'h') ADVANCE(370);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_contract_DASHcaller);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_define_DASHconstant);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_define_DASHdata_DASHvar);
      END_STATE();
    case 366:
      if (lookahead == '-') ADVANCE(371);
      END_STATE();
    case 367:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 368:
      if (lookahead == 'y') ADVANCE(373);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 370:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 372:
      if (lookahead == 'b') ADVANCE(377);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_define_DASHread_DASHonly);
      END_STATE();
    case 374:
      if (lookahead == 'y') ADVANCE(378);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_burn_DASHblock_DASHheight);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_stx_DASHliquid_DASHsupply);
      END_STATE();
    case 379:
      if (lookahead == 'k') ADVANCE(381);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 382:
      if (lookahead == '-') ADVANCE(384);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_define_DASHfungible_DASHtoken);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'k') ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_define_DASHnon_DASHfungible_DASHtoken);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
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
  [21] = {.lex_state = 9},
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
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 11},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_define_DASHtrait] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_impl_DASHtrait] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_use_DASHtrait] = ACTIONS(1),
    [anon_sym_define_DASHfungible_DASHtoken] = ACTIONS(1),
    [anon_sym_define_DASHnon_DASHfungible_DASHtoken] = ACTIONS(1),
    [anon_sym_define_DASHconstant] = ACTIONS(1),
    [anon_sym_define_DASHdata_DASHvar] = ACTIONS(1),
    [anon_sym_define_DASHmap] = ACTIONS(1),
    [anon_sym_define_DASHprivate] = ACTIONS(1),
    [anon_sym_define_DASHread_DASHonly] = ACTIONS(1),
    [anon_sym_define_DASHpublic] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_principal] = ACTIONS(1),
    [anon_sym_buff] = ACTIONS(1),
    [aux_sym_buffer_type_token1] = ACTIONS(1),
    [anon_sym_string_DASHascii] = ACTIONS(1),
    [anon_sym_string_DASHutf8] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_response] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_uint_lit] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_utf8_string_lit] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [sym_none_lit] = ACTIONS(1),
    [anon_sym_ok] = ACTIONS(1),
    [anon_sym_err] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_pow] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_as_DASHcontract] = ACTIONS(1),
    [anon_sym_asserts_BANG] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_concat] = ACTIONS(1),
    [anon_sym_contract_DASHcall_QMARK] = ACTIONS(1),
    [anon_sym_contract_DASHof] = ACTIONS(1),
    [anon_sym_default_DASHto] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_fold] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_is_DASHeq] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_map_DASHget_QMARK] = ACTIONS(1),
    [anon_sym_map_DASHinsert] = ACTIONS(1),
    [anon_sym_map_DASHset] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_merge] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_try_BANG] = ACTIONS(1),
    [anon_sym_unwrap_BANG] = ACTIONS(1),
    [anon_sym_unwrap_DASHpanic] = ACTIONS(1),
    [anon_sym_var_DASHget] = ACTIONS(1),
    [anon_sym_var_DASHset] = ACTIONS(1),
    [anon_sym_block_DASHheight] = ACTIONS(1),
    [anon_sym_burn_DASHblock_DASHheight] = ACTIONS(1),
    [anon_sym_chain_id] = ACTIONS(1),
    [anon_sym_contract_DASHcaller] = ACTIONS(1),
    [anon_sym_is_DASHin_mainnet] = ACTIONS(1),
    [anon_sym_is_DASHin_DASHregtest] = ACTIONS(1),
    [anon_sym_stx_DASHliquid_DASHsupply] = ACTIONS(1),
    [anon_sym_tx_DASHsender] = ACTIONS(1),
    [anon_sym_tx_DASHsponsor_QMARK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(203),
    [sym__expression] = STATE(65),
    [sym__function_call] = STATE(65),
    [sym_trait_definition] = STATE(65),
    [sym_trait_implementation] = STATE(65),
    [sym_trait_usage] = STATE(65),
    [sym_token_definition] = STATE(65),
    [sym_fungible_token_definition] = STATE(114),
    [sym_non_fungible_token_definition] = STATE(114),
    [sym_constant_definition] = STATE(65),
    [sym_variable_definition] = STATE(65),
    [sym_mapping_definition] = STATE(65),
    [sym_function_definition] = STATE(65),
    [sym_private_function] = STATE(119),
    [sym_read_only_function] = STATE(119),
    [sym_public_function] = STATE(119),
    [sym__native_function_call] = STATE(65),
    [sym_basic_native_form] = STATE(65),
    [sym_contract_function_call] = STATE(65),
    [sym_let_expression] = STATE(65),
    [aux_sym_source_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_define_DASHtrait,
    ACTIONS(13), 1,
      anon_sym_impl_DASHtrait,
    ACTIONS(15), 1,
      anon_sym_use_DASHtrait,
    ACTIONS(17), 1,
      anon_sym_define_DASHfungible_DASHtoken,
    ACTIONS(19), 1,
      anon_sym_define_DASHnon_DASHfungible_DASHtoken,
    ACTIONS(21), 1,
      anon_sym_define_DASHconstant,
    ACTIONS(23), 1,
      anon_sym_define_DASHdata_DASHvar,
    ACTIONS(25), 1,
      anon_sym_define_DASHmap,
    ACTIONS(27), 1,
      anon_sym_define_DASHprivate,
    ACTIONS(29), 1,
      anon_sym_define_DASHread_DASHonly,
    ACTIONS(31), 1,
      anon_sym_define_DASHpublic,
    ACTIONS(33), 1,
      anon_sym_let,
    STATE(10), 1,
      sym_native_identifier,
    ACTIONS(37), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_mod,
      anon_sym_pow,
      anon_sym_and,
      anon_sym_or,
      anon_sym_as_DASHcontract,
      anon_sym_asserts_BANG,
      anon_sym_begin,
      anon_sym_concat,
      anon_sym_contract_DASHcall_QMARK,
      anon_sym_contract_DASHof,
      anon_sym_default_DASHto,
      anon_sym_if,
      anon_sym_filter,
      anon_sym_fold,
      anon_sym_get,
      anon_sym_is_DASHeq,
      anon_sym_map,
      anon_sym_map_DASHget_QMARK,
      anon_sym_map_DASHinsert,
      anon_sym_map_DASHset,
      anon_sym_match,
      anon_sym_merge,
      anon_sym_not,
      anon_sym_print,
      anon_sym_try_BANG,
      anon_sym_unwrap_BANG,
      anon_sym_unwrap_DASHpanic,
      anon_sym_var_DASHget,
      anon_sym_var_DASHset,
  [87] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_list,
    ACTIONS(41), 1,
      anon_sym_some,
    STATE(6), 1,
      sym_list_lit_token,
    STATE(10), 1,
      sym_native_identifier,
    ACTIONS(43), 2,
      anon_sym_ok,
      anon_sym_err,
    ACTIONS(37), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_mod,
      anon_sym_pow,
      anon_sym_and,
      anon_sym_or,
      anon_sym_as_DASHcontract,
      anon_sym_asserts_BANG,
      anon_sym_begin,
      anon_sym_concat,
      anon_sym_contract_DASHcall_QMARK,
      anon_sym_contract_DASHof,
      anon_sym_default_DASHto,
      anon_sym_if,
      anon_sym_filter,
      anon_sym_fold,
      anon_sym_get,
      anon_sym_is_DASHeq,
      anon_sym_map,
      anon_sym_map_DASHget_QMARK,
      anon_sym_map_DASHinsert,
      anon_sym_map_DASHset,
      anon_sym_match,
      anon_sym_merge,
      anon_sym_not,
      anon_sym_print,
      anon_sym_try_BANG,
      anon_sym_unwrap_BANG,
      anon_sym_unwrap_DASHpanic,
      anon_sym_var_DASHget,
      anon_sym_var_DASHset,
  [154] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_utf8_string_lit,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(7), 18,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_basic_native_form_repeat1,
  [231] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_utf8_string_lit,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(7), 18,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_basic_native_form_repeat1,
  [308] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      sym_utf8_string_lit,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(8), 18,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_basic_native_form_repeat1,
  [385] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_DASH,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_0x,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_utf8_string_lit,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(99), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(114), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(7), 18,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_basic_native_form_repeat1,
  [462] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_utf8_string_lit,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(7), 18,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_basic_native_form_repeat1,
  [539] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      sym_utf8_string_lit,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(5), 18,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_basic_native_form_repeat1,
  [616] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(129), 1,
      sym_utf8_string_lit,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(125), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(4), 18,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_basic_native_form_repeat1,
  [693] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_utf8_string_lit,
    STATE(35), 1,
      aux_sym_let_expression_repeat2,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(64), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(192), 12,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [771] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_utf8_string_lit,
    STATE(13), 1,
      aux_sym_let_expression_repeat2,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(135), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(64), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(200), 12,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [849] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      sym_utf8_string_lit,
    STATE(35), 1,
      aux_sym_let_expression_repeat2,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(139), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(64), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(161), 12,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [927] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      sym_utf8_string_lit,
    STATE(11), 1,
      aux_sym_let_expression_repeat2,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(139), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(64), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(161), 12,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [1005] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym_utf8_string_lit,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(184), 17,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [1078] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_utf8_string_lit,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(147), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(190), 17,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [1151] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_utf8_string_lit,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(151), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(163), 17,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [1224] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_utf8_string_lit,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(155), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(180), 17,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [1297] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_utf8_string_lit,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(159), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(159), 17,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [1370] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_0x,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_utf8_string_lit,
    STATE(57), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(69), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(132), 17,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [1443] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_let,
    STATE(10), 1,
      sym_native_identifier,
    ACTIONS(37), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_mod,
      anon_sym_pow,
      anon_sym_and,
      anon_sym_or,
      anon_sym_as_DASHcontract,
      anon_sym_asserts_BANG,
      anon_sym_begin,
      anon_sym_concat,
      anon_sym_contract_DASHcall_QMARK,
      anon_sym_contract_DASHof,
      anon_sym_default_DASHto,
      anon_sym_if,
      anon_sym_filter,
      anon_sym_fold,
      anon_sym_get,
      anon_sym_is_DASHeq,
      anon_sym_map,
      anon_sym_map_DASHget_QMARK,
      anon_sym_map_DASHinsert,
      anon_sym_map_DASHset,
      anon_sym_match,
      anon_sym_merge,
      anon_sym_not,
      anon_sym_print,
      anon_sym_try_BANG,
      anon_sym_unwrap_BANG,
      anon_sym_unwrap_DASHpanic,
      anon_sym_var_DASHget,
      anon_sym_var_DASHset,
  [1497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(167), 19,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(171), 19,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(175), 19,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(179), 19,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(183), 19,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(187), 19,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(191), 19,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(195), 19,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(199), 19,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(203), 19,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(207), 19,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(211), 19,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(215), 19,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2004] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(35), 6,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      aux_sym_let_expression_repeat2,
    ACTIONS(224), 7,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(219), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(228), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(232), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(236), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(240), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(244), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(248), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(252), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(254), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(258), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(262), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(266), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(270), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(274), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(278), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(282), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(286), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(290), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(294), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(298), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(302), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(306), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(312), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(310), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(316), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(320), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(324), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(328), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(332), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(336), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [3002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(342), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(340), 15,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [3036] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(119), 3,
      sym_private_function,
      sym_read_only_function,
      sym_public_function,
    STATE(66), 15,
      sym__expression,
      sym__function_call,
      sym_trait_definition,
      sym_trait_implementation,
      sym_trait_usage,
      sym_token_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_mapping_definition,
      sym_function_definition,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      aux_sym_source_repeat1,
  [3072] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(114), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(119), 3,
      sym_private_function,
      sym_read_only_function,
      sym_public_function,
    STATE(66), 15,
      sym__expression,
      sym__function_call,
      sym_trait_definition,
      sym_trait_implementation,
      sym_trait_usage,
      sym_token_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_mapping_definition,
      sym_function_definition,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      aux_sym_source_repeat1,
  [3108] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    ACTIONS(357), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(68), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(84), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3148] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(69), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(84), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3188] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(370), 1,
      anon_sym_LT,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    STATE(69), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(84), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(373), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3228] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      sym_parameter_type,
    STATE(84), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3264] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3293] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(198), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3322] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_tuple_type,
    STATE(212), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [3353] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_tuple_type,
    STATE(212), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [3384] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3413] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(205), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3442] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_native_type,
    STATE(74), 1,
      sym_tuple_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [3473] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3502] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3531] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(211), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3560] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3589] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(29), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      anon_sym_LBRACE,
  [3632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      anon_sym_LBRACE,
  [3646] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_buff,
    ACTIONS(385), 1,
      anon_sym_string_DASHascii,
    ACTIONS(387), 1,
      anon_sym_string_DASHutf8,
    ACTIONS(389), 1,
      anon_sym_list,
    ACTIONS(391), 1,
      anon_sym_optional,
    ACTIONS(393), 1,
      anon_sym_tuple,
    ACTIONS(395), 1,
      anon_sym_response,
  [3671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(178), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
  [3685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(168), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
  [3699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(170), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
  [3713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(89), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(93), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(95), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [3755] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    STATE(172), 1,
      sym_contract_principal_lit,
    STATE(199), 1,
      sym_standard_principal_lit,
  [3771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(93), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(94), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [3799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(94), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [3813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(90), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3827] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    STATE(193), 1,
      sym_contract_principal_lit,
    STATE(199), 1,
      sym_standard_principal_lit,
  [3843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(89), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(100), 1,
      aux_sym_tuple_type_repeat1,
    STATE(186), 1,
      sym__tuple_type_pair,
  [3884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(107), 1,
      aux_sym_tuple_type_repeat1,
    STATE(131), 1,
      sym__tuple_type_pair,
  [3897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_identifier,
    STATE(106), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(129), 1,
      sym__tuple_lit_pair,
  [3910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(135), 1,
      sym__tuple_lit_pair,
  [3936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_identifier,
    STATE(106), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(169), 1,
      sym__tuple_lit_pair,
  [3962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(100), 1,
      aux_sym_tuple_type_repeat1,
    STATE(138), 1,
      sym__tuple_type_pair,
  [3975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
  [3998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
  [4008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4080] = 3,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      aux_sym_ascii_string_lit_token1,
    ACTIONS(483), 1,
      sym_comment,
  [4090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
  [4116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_function_signature,
  [4134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
  [4160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
  [4170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
  [4188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
  [4222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_function_signature,
  [4240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
  [4250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_function_signature,
  [4260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
  [4283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym_identifier,
  [4290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
  [4297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [4304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
  [4311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      aux_sym_buffer_type_token1,
  [4318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
  [4325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym_identifier,
  [4332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      aux_sym_buffer_type_token1,
  [4339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      aux_sym_buffer_type_token1,
  [4346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_uint,
  [4353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      aux_sym_buffer_type_token1,
  [4360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym_identifier,
  [4367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
  [4374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [4381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
  [4388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
  [4395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [4402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
  [4409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
  [4416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_DQUOTE,
  [4423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
  [4430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_COLON,
  [4437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_COLON,
  [4444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
  [4451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_LPAREN,
  [4458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
  [4465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_COMMA,
  [4472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
  [4479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
  [4486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_DOT,
  [4493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LPAREN,
  [4500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_identifier,
  [4507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym_identifier,
  [4514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
  [4521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
  [4528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
  [4535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym_identifier,
  [4542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
  [4549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
  [4556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_identifier,
  [4563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_identifier,
  [4570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
  [4577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym_identifier,
  [4584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_COMMA,
  [4591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym_identifier,
  [4598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
  [4605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
  [4612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
  [4619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      aux_sym_standard_principal_lit_token1,
  [4626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
  [4633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_DOT,
  [4640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
  [4647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_identifier,
  [4654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      sym_identifier,
  [4661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_identifier,
  [4668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [4675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
  [4682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
  [4689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
  [4696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_GT,
  [4703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      ts_builtin_sym_end,
  [4710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_LPAREN,
  [4717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
  [4724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      aux_sym_buffer_lit_token1,
  [4731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      aux_sym_buffer_type_token1,
  [4738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym_identifier,
  [4745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym_identifier,
  [4752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
  [4759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
  [4766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 308,
  [SMALL_STATE(7)] = 385,
  [SMALL_STATE(8)] = 462,
  [SMALL_STATE(9)] = 539,
  [SMALL_STATE(10)] = 616,
  [SMALL_STATE(11)] = 693,
  [SMALL_STATE(12)] = 771,
  [SMALL_STATE(13)] = 849,
  [SMALL_STATE(14)] = 927,
  [SMALL_STATE(15)] = 1005,
  [SMALL_STATE(16)] = 1078,
  [SMALL_STATE(17)] = 1151,
  [SMALL_STATE(18)] = 1224,
  [SMALL_STATE(19)] = 1297,
  [SMALL_STATE(20)] = 1370,
  [SMALL_STATE(21)] = 1443,
  [SMALL_STATE(22)] = 1497,
  [SMALL_STATE(23)] = 1536,
  [SMALL_STATE(24)] = 1575,
  [SMALL_STATE(25)] = 1614,
  [SMALL_STATE(26)] = 1653,
  [SMALL_STATE(27)] = 1692,
  [SMALL_STATE(28)] = 1731,
  [SMALL_STATE(29)] = 1770,
  [SMALL_STATE(30)] = 1809,
  [SMALL_STATE(31)] = 1848,
  [SMALL_STATE(32)] = 1887,
  [SMALL_STATE(33)] = 1926,
  [SMALL_STATE(34)] = 1965,
  [SMALL_STATE(35)] = 2004,
  [SMALL_STATE(36)] = 2045,
  [SMALL_STATE(37)] = 2080,
  [SMALL_STATE(38)] = 2115,
  [SMALL_STATE(39)] = 2150,
  [SMALL_STATE(40)] = 2185,
  [SMALL_STATE(41)] = 2220,
  [SMALL_STATE(42)] = 2255,
  [SMALL_STATE(43)] = 2290,
  [SMALL_STATE(44)] = 2324,
  [SMALL_STATE(45)] = 2358,
  [SMALL_STATE(46)] = 2392,
  [SMALL_STATE(47)] = 2426,
  [SMALL_STATE(48)] = 2460,
  [SMALL_STATE(49)] = 2494,
  [SMALL_STATE(50)] = 2528,
  [SMALL_STATE(51)] = 2562,
  [SMALL_STATE(52)] = 2596,
  [SMALL_STATE(53)] = 2630,
  [SMALL_STATE(54)] = 2664,
  [SMALL_STATE(55)] = 2698,
  [SMALL_STATE(56)] = 2732,
  [SMALL_STATE(57)] = 2766,
  [SMALL_STATE(58)] = 2802,
  [SMALL_STATE(59)] = 2836,
  [SMALL_STATE(60)] = 2870,
  [SMALL_STATE(61)] = 2904,
  [SMALL_STATE(62)] = 2938,
  [SMALL_STATE(63)] = 2970,
  [SMALL_STATE(64)] = 3002,
  [SMALL_STATE(65)] = 3036,
  [SMALL_STATE(66)] = 3072,
  [SMALL_STATE(67)] = 3108,
  [SMALL_STATE(68)] = 3148,
  [SMALL_STATE(69)] = 3188,
  [SMALL_STATE(70)] = 3228,
  [SMALL_STATE(71)] = 3264,
  [SMALL_STATE(72)] = 3293,
  [SMALL_STATE(73)] = 3322,
  [SMALL_STATE(74)] = 3353,
  [SMALL_STATE(75)] = 3384,
  [SMALL_STATE(76)] = 3413,
  [SMALL_STATE(77)] = 3442,
  [SMALL_STATE(78)] = 3473,
  [SMALL_STATE(79)] = 3502,
  [SMALL_STATE(80)] = 3531,
  [SMALL_STATE(81)] = 3560,
  [SMALL_STATE(82)] = 3589,
  [SMALL_STATE(83)] = 3618,
  [SMALL_STATE(84)] = 3632,
  [SMALL_STATE(85)] = 3646,
  [SMALL_STATE(86)] = 3671,
  [SMALL_STATE(87)] = 3685,
  [SMALL_STATE(88)] = 3699,
  [SMALL_STATE(89)] = 3713,
  [SMALL_STATE(90)] = 3727,
  [SMALL_STATE(91)] = 3741,
  [SMALL_STATE(92)] = 3755,
  [SMALL_STATE(93)] = 3771,
  [SMALL_STATE(94)] = 3785,
  [SMALL_STATE(95)] = 3799,
  [SMALL_STATE(96)] = 3813,
  [SMALL_STATE(97)] = 3827,
  [SMALL_STATE(98)] = 3843,
  [SMALL_STATE(99)] = 3857,
  [SMALL_STATE(100)] = 3871,
  [SMALL_STATE(101)] = 3884,
  [SMALL_STATE(102)] = 3897,
  [SMALL_STATE(103)] = 3910,
  [SMALL_STATE(104)] = 3923,
  [SMALL_STATE(105)] = 3936,
  [SMALL_STATE(106)] = 3949,
  [SMALL_STATE(107)] = 3962,
  [SMALL_STATE(108)] = 3975,
  [SMALL_STATE(109)] = 3988,
  [SMALL_STATE(110)] = 3998,
  [SMALL_STATE(111)] = 4008,
  [SMALL_STATE(112)] = 4016,
  [SMALL_STATE(113)] = 4024,
  [SMALL_STATE(114)] = 4032,
  [SMALL_STATE(115)] = 4040,
  [SMALL_STATE(116)] = 4048,
  [SMALL_STATE(117)] = 4056,
  [SMALL_STATE(118)] = 4064,
  [SMALL_STATE(119)] = 4072,
  [SMALL_STATE(120)] = 4080,
  [SMALL_STATE(121)] = 4090,
  [SMALL_STATE(122)] = 4098,
  [SMALL_STATE(123)] = 4106,
  [SMALL_STATE(124)] = 4116,
  [SMALL_STATE(125)] = 4124,
  [SMALL_STATE(126)] = 4134,
  [SMALL_STATE(127)] = 4142,
  [SMALL_STATE(128)] = 4150,
  [SMALL_STATE(129)] = 4160,
  [SMALL_STATE(130)] = 4170,
  [SMALL_STATE(131)] = 4178,
  [SMALL_STATE(132)] = 4188,
  [SMALL_STATE(133)] = 4196,
  [SMALL_STATE(134)] = 4204,
  [SMALL_STATE(135)] = 4212,
  [SMALL_STATE(136)] = 4222,
  [SMALL_STATE(137)] = 4230,
  [SMALL_STATE(138)] = 4240,
  [SMALL_STATE(139)] = 4250,
  [SMALL_STATE(140)] = 4260,
  [SMALL_STATE(141)] = 4268,
  [SMALL_STATE(142)] = 4276,
  [SMALL_STATE(143)] = 4283,
  [SMALL_STATE(144)] = 4290,
  [SMALL_STATE(145)] = 4297,
  [SMALL_STATE(146)] = 4304,
  [SMALL_STATE(147)] = 4311,
  [SMALL_STATE(148)] = 4318,
  [SMALL_STATE(149)] = 4325,
  [SMALL_STATE(150)] = 4332,
  [SMALL_STATE(151)] = 4339,
  [SMALL_STATE(152)] = 4346,
  [SMALL_STATE(153)] = 4353,
  [SMALL_STATE(154)] = 4360,
  [SMALL_STATE(155)] = 4367,
  [SMALL_STATE(156)] = 4374,
  [SMALL_STATE(157)] = 4381,
  [SMALL_STATE(158)] = 4388,
  [SMALL_STATE(159)] = 4395,
  [SMALL_STATE(160)] = 4402,
  [SMALL_STATE(161)] = 4409,
  [SMALL_STATE(162)] = 4416,
  [SMALL_STATE(163)] = 4423,
  [SMALL_STATE(164)] = 4430,
  [SMALL_STATE(165)] = 4437,
  [SMALL_STATE(166)] = 4444,
  [SMALL_STATE(167)] = 4451,
  [SMALL_STATE(168)] = 4458,
  [SMALL_STATE(169)] = 4465,
  [SMALL_STATE(170)] = 4472,
  [SMALL_STATE(171)] = 4479,
  [SMALL_STATE(172)] = 4486,
  [SMALL_STATE(173)] = 4493,
  [SMALL_STATE(174)] = 4500,
  [SMALL_STATE(175)] = 4507,
  [SMALL_STATE(176)] = 4514,
  [SMALL_STATE(177)] = 4521,
  [SMALL_STATE(178)] = 4528,
  [SMALL_STATE(179)] = 4535,
  [SMALL_STATE(180)] = 4542,
  [SMALL_STATE(181)] = 4549,
  [SMALL_STATE(182)] = 4556,
  [SMALL_STATE(183)] = 4563,
  [SMALL_STATE(184)] = 4570,
  [SMALL_STATE(185)] = 4577,
  [SMALL_STATE(186)] = 4584,
  [SMALL_STATE(187)] = 4591,
  [SMALL_STATE(188)] = 4598,
  [SMALL_STATE(189)] = 4605,
  [SMALL_STATE(190)] = 4612,
  [SMALL_STATE(191)] = 4619,
  [SMALL_STATE(192)] = 4626,
  [SMALL_STATE(193)] = 4633,
  [SMALL_STATE(194)] = 4640,
  [SMALL_STATE(195)] = 4647,
  [SMALL_STATE(196)] = 4654,
  [SMALL_STATE(197)] = 4661,
  [SMALL_STATE(198)] = 4668,
  [SMALL_STATE(199)] = 4675,
  [SMALL_STATE(200)] = 4682,
  [SMALL_STATE(201)] = 4689,
  [SMALL_STATE(202)] = 4696,
  [SMALL_STATE(203)] = 4703,
  [SMALL_STATE(204)] = 4710,
  [SMALL_STATE(205)] = 4717,
  [SMALL_STATE(206)] = 4724,
  [SMALL_STATE(207)] = 4731,
  [SMALL_STATE(208)] = 4738,
  [SMALL_STATE(209)] = 4745,
  [SMALL_STATE(210)] = 4752,
  [SMALL_STATE(211)] = 4759,
  [SMALL_STATE(212)] = 4766,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2), SHIFT_REPEAT(7),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2), SHIFT_REPEAT(3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2), SHIFT_REPEAT(182),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2), SHIFT_REPEAT(55),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2), SHIFT_REPEAT(104),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2), SHIFT_REPEAT(207),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2), SHIFT_REPEAT(58),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2), SHIFT_REPEAT(191),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2), SHIFT_REPEAT(206),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2), SHIFT_REPEAT(120),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2), SHIFT_REPEAT(7),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2), SHIFT_REPEAT(61),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_type, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_type, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3, .production_id = 6),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3, .production_id = 6),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5, .production_id = 14),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5, .production_id = 14),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_type, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_type, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_type, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_type, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_native_type, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_type, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 4, .production_id = 12),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 4, .production_id = 12),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, .production_id = 6),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, .production_id = 6),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, .production_id = 14),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, .production_id = 14),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_type, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_type, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_type, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 5),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_expression_repeat2, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 2), SHIFT_REPEAT(21),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 6, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 6, .production_id = 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_native_form, 3, .production_id = 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_native_form, 3, .production_id = 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 7, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 7, .production_id = 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_native_form, 4, .production_id = 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_native_form, 4, .production_id = 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_function_call, 3, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_function_call, 3, .production_id = 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 8, .production_id = 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 8, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_function_call, 4, .production_id = 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_function_call, 4, .production_id = 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_principal_lit, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_principal_lit, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 3, .production_id = 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 3, .production_id = 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, .production_id = 10),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, .production_id = 10),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_lit, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_lit, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_some_lit, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_some_lit, 4),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_lit, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_lit, 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 5, .production_id = 10),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 5, .production_id = 10),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, .production_id = 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, .production_id = 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit_token, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit_token, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_native_identifier, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_identifier, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_expression_repeat2, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(85),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(187),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(29),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2), SHIFT_REPEAT(101),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_type, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2), SHIFT_REPEAT(208),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2), SHIFT_REPEAT(158),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 2), SHIFT_REPEAT(166),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, .production_id = 7), SHIFT_REPEAT(165),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, .production_id = 4), SHIFT_REPEAT(164),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, .production_id = 7), SHIFT_REPEAT(149),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, .production_id = 7),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, .production_id = 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, .production_id = 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 7),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 4, .production_id = 15),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_definition, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_private_function, 5),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_read_only_function, 5),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_public_function, 5),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fungible_token_definition, 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_binding, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_type_pair, 3, .production_id = 13),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_usage, 7, .production_id = 11),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 7),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_fungible_token_definition, 5),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_lit_pair, 3, .production_id = 9),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 6),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_implementation, 6),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_definition, 6, .production_id = 8),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 4),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [647] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
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

TS_PUBLIC const TSLanguage *tree_sitter_clarity() {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
