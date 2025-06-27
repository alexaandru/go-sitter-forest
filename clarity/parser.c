#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 214
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 234
#define ALIAS_COUNT 0
#define TOKEN_COUNT 172
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 17

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
  aux_sym_standard_principal_lit_token2 = 41,
  anon_sym_0x = 42,
  aux_sym_buffer_lit_token1 = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_ascii_string_lit_token1 = 45,
  sym_utf8_string_lit = 46,
  anon_sym_some = 47,
  sym_none_lit = 48,
  anon_sym_ok = 49,
  anon_sym_err = 50,
  anon_sym_PLUS = 51,
  anon_sym_STAR = 52,
  anon_sym_SLASH = 53,
  anon_sym_mod = 54,
  anon_sym_pow = 55,
  anon_sym_LT_EQ = 56,
  anon_sym_GT_EQ = 57,
  anon_sym_and = 58,
  anon_sym_or = 59,
  anon_sym_xor = 60,
  anon_sym_append = 61,
  anon_sym_as_DASHcontract = 62,
  anon_sym_as_DASHmax_DASHlen_QMARK = 63,
  anon_sym_asserts_BANG = 64,
  anon_sym_at_DASHblock = 65,
  anon_sym_begin = 66,
  anon_sym_bit_DASHand = 67,
  anon_sym_bit_DASHnot = 68,
  anon_sym_bit_DASHor = 69,
  anon_sym_bit_DASHshift_DASHleft = 70,
  anon_sym_bit_DASHshift_DASHright = 71,
  anon_sym_bit_DASHxor = 72,
  anon_sym_buff_DASHto_DASHint_DASHbe = 73,
  anon_sym_buff_DASHto_DASHint_DASHle = 74,
  anon_sym_buff_DASHto_DASHuint_DASHbe = 75,
  anon_sym_buff_DASHto_DASHuint_DASHle = 76,
  anon_sym_concat = 77,
  anon_sym_contract_DASHcall_QMARK = 78,
  anon_sym_contract_DASHof = 79,
  anon_sym_default_DASHto = 80,
  anon_sym_element_DASHat = 81,
  anon_sym_element_DASHat_QMARK = 82,
  anon_sym_filter = 83,
  anon_sym_fold = 84,
  anon_sym_from_DASHconsensus_DASHbuff_QMARK = 85,
  anon_sym_ft_DASHburn_QMARK = 86,
  anon_sym_ft_DASHmint_QMARK = 87,
  anon_sym_ft_DASHtransfer_QMARK = 88,
  anon_sym_ft_DASHget_DASHsupply = 89,
  anon_sym_ft_DASHget_DASHbalance = 90,
  anon_sym_get = 91,
  anon_sym_get_DASHblock_DASHinfo_QMARK = 92,
  anon_sym_get_DASHburn_DASHblock_DASHinfo_QMARK = 93,
  anon_sym_hash160 = 94,
  anon_sym_if = 95,
  anon_sym_index_DASHof = 96,
  anon_sym_index_DASHof_QMARK = 97,
  anon_sym_int_DASHto_DASHascii = 98,
  anon_sym_int_DASHto_DASHutf8 = 99,
  anon_sym_is_DASHeq = 100,
  anon_sym_is_DASHerr = 101,
  anon_sym_is_DASHnone = 102,
  anon_sym_is_DASHok = 103,
  anon_sym_is_DASHsome = 104,
  anon_sym_is_DASHstandard = 105,
  anon_sym_keccak256 = 106,
  anon_sym_len = 107,
  anon_sym_log2 = 108,
  anon_sym_map = 109,
  anon_sym_map_DASHdelete = 110,
  anon_sym_map_DASHget_QMARK = 111,
  anon_sym_map_DASHinsert = 112,
  anon_sym_map_DASHset = 113,
  anon_sym_match = 114,
  anon_sym_merge = 115,
  anon_sym_nft_DASHburn_QMARK = 116,
  anon_sym_nft_DASHmint_QMARK = 117,
  anon_sym_nft_DASHget_DASHowner_QMARK = 118,
  anon_sym_nft_DASHtransfer_QMARK = 119,
  anon_sym_not = 120,
  anon_sym_principal_DASHconstruct_QMARK = 121,
  anon_sym_principal_DASHdestruct_QMARK = 122,
  anon_sym_principal_DASHof_QMARK = 123,
  anon_sym_print = 124,
  anon_sym_replace_DASHat_QMARK = 125,
  anon_sym_secp256k1_DASHrecover_QMARK = 126,
  anon_sym_secp256k1_DASHverify = 127,
  anon_sym_sha256 = 128,
  anon_sym_sha512 = 129,
  anon_sym_sha512_SLASH256 = 130,
  anon_sym_slice_QMARK = 131,
  anon_sym_sqrti = 132,
  anon_sym_string_DASHto_DASHint_QMARK = 133,
  anon_sym_string_DASHto_DASHuint_QMARK = 134,
  anon_sym_stx_DASHaccount = 135,
  anon_sym_stx_DASHburn_QMARK = 136,
  anon_sym_stx_DASHget_DASHbalance = 137,
  anon_sym_stx_DASHtransfer_DASHmemo_QMARK = 138,
  anon_sym_stx_DASHtransfer_QMARK = 139,
  anon_sym_to_DASHconsensus_DASHbuff_QMARK = 140,
  anon_sym_to_DASHint = 141,
  anon_sym_to_DASHuint = 142,
  anon_sym_try_BANG = 143,
  anon_sym_unwrap_BANG = 144,
  anon_sym_unwrap_DASHerr_BANG = 145,
  anon_sym_unwrap_DASHerr_DASHpanic = 146,
  anon_sym_unwrap_DASHpanic = 147,
  anon_sym_var_DASHget = 148,
  anon_sym_var_DASHset = 149,
  anon_sym_block_DASHheight = 150,
  anon_sym_burn_DASHblock_DASHheight = 151,
  anon_sym_chain_DASHid = 152,
  anon_sym_contract_DASHcaller = 153,
  anon_sym_is_DASHin_mainnet = 154,
  anon_sym_is_DASHin_DASHregtest = 155,
  anon_sym_stacks_DASHblock_DASHheight = 156,
  anon_sym_stx_DASHliquid_DASHsupply = 157,
  anon_sym_tenure_DASHheight = 158,
  anon_sym_tx_DASHsender = 159,
  anon_sym_tx_DASHsponsor_QMARK = 160,
  anon_sym_block_DASHreward = 161,
  anon_sym_burnchain_DASHheader_DASHhash = 162,
  anon_sym_id_DASHheader_DASHhash = 163,
  anon_sym_header_DASHhash = 164,
  anon_sym_miner_DASHaddress = 165,
  anon_sym_miner_DASHspend_DASHtotal = 166,
  anon_sym_miner_DASHspend_DASHwinner = 167,
  anon_sym_time = 168,
  anon_sym_vrf_DASHseed = 169,
  anon_sym_pox_DASHaddrs = 170,
  sym_comment = 171,
  sym_source = 172,
  sym__expression = 173,
  sym__function_call = 174,
  sym_trait_definition = 175,
  sym_trait_implementation = 176,
  sym_trait_usage = 177,
  sym_token_definition = 178,
  sym_fungible_token_definition = 179,
  sym_non_fungible_token_definition = 180,
  sym_constant_definition = 181,
  sym_variable_definition = 182,
  sym_mapping_definition = 183,
  sym_function_definition = 184,
  sym_private_function = 185,
  sym_read_only_function = 186,
  sym_public_function = 187,
  sym__native_function_call = 188,
  sym_basic_native_form = 189,
  sym_contract_function_call = 190,
  sym_let_expression = 191,
  sym_local_binding = 192,
  sym_function_signature = 193,
  sym_function_parameter = 194,
  sym_function_signature_for_trait = 195,
  sym_parameter_type = 196,
  sym_trait_type = 197,
  sym_native_type = 198,
  sym_buffer_type = 199,
  sym_ascii_string_type = 200,
  sym_utf8_string_type = 201,
  sym_list_type = 202,
  sym_optional_type = 203,
  sym_tuple_type_for_trait = 204,
  sym_tuple_type = 205,
  sym__tuple_type_pair = 206,
  sym_response_type = 207,
  sym__parameter = 208,
  sym__literal = 209,
  sym_int_lit = 210,
  sym_bool_lit = 211,
  sym_standard_principal_lit = 212,
  sym_contract_principal_lit = 213,
  sym_buffer_lit = 214,
  sym_ascii_string_lit = 215,
  sym_list_lit = 216,
  sym_list_lit_token = 217,
  sym_some_lit = 218,
  sym_tuple_lit = 219,
  sym__tuple_lit_pair = 220,
  sym_response_lit = 221,
  sym_native_identifier = 222,
  sym_global = 223,
  aux_sym_source_repeat1 = 224,
  aux_sym_trait_definition_repeat1 = 225,
  aux_sym_basic_native_form_repeat1 = 226,
  aux_sym_let_expression_repeat1 = 227,
  aux_sym_let_expression_repeat2 = 228,
  aux_sym_function_signature_repeat1 = 229,
  aux_sym_function_signature_for_trait_repeat1 = 230,
  aux_sym_tuple_type_for_trait_repeat1 = 231,
  aux_sym_tuple_type_repeat1 = 232,
  aux_sym_tuple_lit_repeat1 = 233,
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
  [aux_sym_standard_principal_lit_token2] = "standard_principal_lit_token2",
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
  [anon_sym_xor] = "xor",
  [anon_sym_append] = "append",
  [anon_sym_as_DASHcontract] = "as-contract",
  [anon_sym_as_DASHmax_DASHlen_QMARK] = "as-max-len\?",
  [anon_sym_asserts_BANG] = "asserts!",
  [anon_sym_at_DASHblock] = "at-block",
  [anon_sym_begin] = "begin",
  [anon_sym_bit_DASHand] = "bit-and",
  [anon_sym_bit_DASHnot] = "bit-not",
  [anon_sym_bit_DASHor] = "bit-or",
  [anon_sym_bit_DASHshift_DASHleft] = "bit-shift-left",
  [anon_sym_bit_DASHshift_DASHright] = "bit-shift-right",
  [anon_sym_bit_DASHxor] = "bit-xor",
  [anon_sym_buff_DASHto_DASHint_DASHbe] = "buff-to-int-be",
  [anon_sym_buff_DASHto_DASHint_DASHle] = "buff-to-int-le",
  [anon_sym_buff_DASHto_DASHuint_DASHbe] = "buff-to-uint-be",
  [anon_sym_buff_DASHto_DASHuint_DASHle] = "buff-to-uint-le",
  [anon_sym_concat] = "concat",
  [anon_sym_contract_DASHcall_QMARK] = "contract-call\?",
  [anon_sym_contract_DASHof] = "contract-of",
  [anon_sym_default_DASHto] = "default-to",
  [anon_sym_element_DASHat] = "element-at",
  [anon_sym_element_DASHat_QMARK] = "element-at\?",
  [anon_sym_filter] = "filter",
  [anon_sym_fold] = "fold",
  [anon_sym_from_DASHconsensus_DASHbuff_QMARK] = "from-consensus-buff\?",
  [anon_sym_ft_DASHburn_QMARK] = "ft-burn\?",
  [anon_sym_ft_DASHmint_QMARK] = "ft-mint\?",
  [anon_sym_ft_DASHtransfer_QMARK] = "ft-transfer\?",
  [anon_sym_ft_DASHget_DASHsupply] = "ft-get-supply",
  [anon_sym_ft_DASHget_DASHbalance] = "ft-get-balance",
  [anon_sym_get] = "get",
  [anon_sym_get_DASHblock_DASHinfo_QMARK] = "get-block-info\?",
  [anon_sym_get_DASHburn_DASHblock_DASHinfo_QMARK] = "get-burn-block-info\?",
  [anon_sym_hash160] = "hash160",
  [anon_sym_if] = "if",
  [anon_sym_index_DASHof] = "index-of",
  [anon_sym_index_DASHof_QMARK] = "index-of\?",
  [anon_sym_int_DASHto_DASHascii] = "int-to-ascii",
  [anon_sym_int_DASHto_DASHutf8] = "int-to-utf8",
  [anon_sym_is_DASHeq] = "is-eq",
  [anon_sym_is_DASHerr] = "is-err",
  [anon_sym_is_DASHnone] = "is-none",
  [anon_sym_is_DASHok] = "is-ok",
  [anon_sym_is_DASHsome] = "is-some",
  [anon_sym_is_DASHstandard] = "is-standard",
  [anon_sym_keccak256] = "keccak256",
  [anon_sym_len] = "len",
  [anon_sym_log2] = "log2",
  [anon_sym_map] = "map",
  [anon_sym_map_DASHdelete] = "map-delete",
  [anon_sym_map_DASHget_QMARK] = "map-get\?",
  [anon_sym_map_DASHinsert] = "map-insert",
  [anon_sym_map_DASHset] = "map-set",
  [anon_sym_match] = "match",
  [anon_sym_merge] = "merge",
  [anon_sym_nft_DASHburn_QMARK] = "nft-burn\?",
  [anon_sym_nft_DASHmint_QMARK] = "nft-mint\?",
  [anon_sym_nft_DASHget_DASHowner_QMARK] = "nft-get-owner\?",
  [anon_sym_nft_DASHtransfer_QMARK] = "nft-transfer\?",
  [anon_sym_not] = "not",
  [anon_sym_principal_DASHconstruct_QMARK] = "principal-construct\?",
  [anon_sym_principal_DASHdestruct_QMARK] = "principal-destruct\?",
  [anon_sym_principal_DASHof_QMARK] = "principal-of\?",
  [anon_sym_print] = "print",
  [anon_sym_replace_DASHat_QMARK] = "replace-at\?",
  [anon_sym_secp256k1_DASHrecover_QMARK] = "secp256k1-recover\?",
  [anon_sym_secp256k1_DASHverify] = "secp256k1-verify",
  [anon_sym_sha256] = "sha256",
  [anon_sym_sha512] = "sha512",
  [anon_sym_sha512_SLASH256] = "sha512/256",
  [anon_sym_slice_QMARK] = "slice\?",
  [anon_sym_sqrti] = "sqrti",
  [anon_sym_string_DASHto_DASHint_QMARK] = "string-to-int\?",
  [anon_sym_string_DASHto_DASHuint_QMARK] = "string-to-uint\?",
  [anon_sym_stx_DASHaccount] = "stx-account",
  [anon_sym_stx_DASHburn_QMARK] = "stx-burn\?",
  [anon_sym_stx_DASHget_DASHbalance] = "stx-get-balance",
  [anon_sym_stx_DASHtransfer_DASHmemo_QMARK] = "stx-transfer-memo\?",
  [anon_sym_stx_DASHtransfer_QMARK] = "stx-transfer\?",
  [anon_sym_to_DASHconsensus_DASHbuff_QMARK] = "to-consensus-buff\?",
  [anon_sym_to_DASHint] = "to-int",
  [anon_sym_to_DASHuint] = "to-uint",
  [anon_sym_try_BANG] = "try!",
  [anon_sym_unwrap_BANG] = "unwrap!",
  [anon_sym_unwrap_DASHerr_BANG] = "unwrap-err!",
  [anon_sym_unwrap_DASHerr_DASHpanic] = "unwrap-err-panic",
  [anon_sym_unwrap_DASHpanic] = "unwrap-panic",
  [anon_sym_var_DASHget] = "var-get",
  [anon_sym_var_DASHset] = "var-set",
  [anon_sym_block_DASHheight] = "block-height",
  [anon_sym_burn_DASHblock_DASHheight] = "burn-block-height",
  [anon_sym_chain_DASHid] = "chain-id",
  [anon_sym_contract_DASHcaller] = "contract-caller",
  [anon_sym_is_DASHin_mainnet] = "is-in_mainnet",
  [anon_sym_is_DASHin_DASHregtest] = "is-in-regtest",
  [anon_sym_stacks_DASHblock_DASHheight] = "stacks-block-height",
  [anon_sym_stx_DASHliquid_DASHsupply] = "stx-liquid-supply",
  [anon_sym_tenure_DASHheight] = "tenure-height",
  [anon_sym_tx_DASHsender] = "tx-sender",
  [anon_sym_tx_DASHsponsor_QMARK] = "tx-sponsor\?",
  [anon_sym_block_DASHreward] = "block-reward",
  [anon_sym_burnchain_DASHheader_DASHhash] = "burnchain-header-hash",
  [anon_sym_id_DASHheader_DASHhash] = "id-header-hash",
  [anon_sym_header_DASHhash] = "header-hash",
  [anon_sym_miner_DASHaddress] = "miner-address",
  [anon_sym_miner_DASHspend_DASHtotal] = "miner-spend-total",
  [anon_sym_miner_DASHspend_DASHwinner] = "miner-spend-winner",
  [anon_sym_time] = "time",
  [anon_sym_vrf_DASHseed] = "vrf-seed",
  [anon_sym_pox_DASHaddrs] = "pox-addrs",
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
  [aux_sym_standard_principal_lit_token2] = aux_sym_standard_principal_lit_token2,
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
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_append] = anon_sym_append,
  [anon_sym_as_DASHcontract] = anon_sym_as_DASHcontract,
  [anon_sym_as_DASHmax_DASHlen_QMARK] = anon_sym_as_DASHmax_DASHlen_QMARK,
  [anon_sym_asserts_BANG] = anon_sym_asserts_BANG,
  [anon_sym_at_DASHblock] = anon_sym_at_DASHblock,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_bit_DASHand] = anon_sym_bit_DASHand,
  [anon_sym_bit_DASHnot] = anon_sym_bit_DASHnot,
  [anon_sym_bit_DASHor] = anon_sym_bit_DASHor,
  [anon_sym_bit_DASHshift_DASHleft] = anon_sym_bit_DASHshift_DASHleft,
  [anon_sym_bit_DASHshift_DASHright] = anon_sym_bit_DASHshift_DASHright,
  [anon_sym_bit_DASHxor] = anon_sym_bit_DASHxor,
  [anon_sym_buff_DASHto_DASHint_DASHbe] = anon_sym_buff_DASHto_DASHint_DASHbe,
  [anon_sym_buff_DASHto_DASHint_DASHle] = anon_sym_buff_DASHto_DASHint_DASHle,
  [anon_sym_buff_DASHto_DASHuint_DASHbe] = anon_sym_buff_DASHto_DASHuint_DASHbe,
  [anon_sym_buff_DASHto_DASHuint_DASHle] = anon_sym_buff_DASHto_DASHuint_DASHle,
  [anon_sym_concat] = anon_sym_concat,
  [anon_sym_contract_DASHcall_QMARK] = anon_sym_contract_DASHcall_QMARK,
  [anon_sym_contract_DASHof] = anon_sym_contract_DASHof,
  [anon_sym_default_DASHto] = anon_sym_default_DASHto,
  [anon_sym_element_DASHat] = anon_sym_element_DASHat,
  [anon_sym_element_DASHat_QMARK] = anon_sym_element_DASHat_QMARK,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_fold] = anon_sym_fold,
  [anon_sym_from_DASHconsensus_DASHbuff_QMARK] = anon_sym_from_DASHconsensus_DASHbuff_QMARK,
  [anon_sym_ft_DASHburn_QMARK] = anon_sym_ft_DASHburn_QMARK,
  [anon_sym_ft_DASHmint_QMARK] = anon_sym_ft_DASHmint_QMARK,
  [anon_sym_ft_DASHtransfer_QMARK] = anon_sym_ft_DASHtransfer_QMARK,
  [anon_sym_ft_DASHget_DASHsupply] = anon_sym_ft_DASHget_DASHsupply,
  [anon_sym_ft_DASHget_DASHbalance] = anon_sym_ft_DASHget_DASHbalance,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_get_DASHblock_DASHinfo_QMARK] = anon_sym_get_DASHblock_DASHinfo_QMARK,
  [anon_sym_get_DASHburn_DASHblock_DASHinfo_QMARK] = anon_sym_get_DASHburn_DASHblock_DASHinfo_QMARK,
  [anon_sym_hash160] = anon_sym_hash160,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_index_DASHof] = anon_sym_index_DASHof,
  [anon_sym_index_DASHof_QMARK] = anon_sym_index_DASHof_QMARK,
  [anon_sym_int_DASHto_DASHascii] = anon_sym_int_DASHto_DASHascii,
  [anon_sym_int_DASHto_DASHutf8] = anon_sym_int_DASHto_DASHutf8,
  [anon_sym_is_DASHeq] = anon_sym_is_DASHeq,
  [anon_sym_is_DASHerr] = anon_sym_is_DASHerr,
  [anon_sym_is_DASHnone] = anon_sym_is_DASHnone,
  [anon_sym_is_DASHok] = anon_sym_is_DASHok,
  [anon_sym_is_DASHsome] = anon_sym_is_DASHsome,
  [anon_sym_is_DASHstandard] = anon_sym_is_DASHstandard,
  [anon_sym_keccak256] = anon_sym_keccak256,
  [anon_sym_len] = anon_sym_len,
  [anon_sym_log2] = anon_sym_log2,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_map_DASHdelete] = anon_sym_map_DASHdelete,
  [anon_sym_map_DASHget_QMARK] = anon_sym_map_DASHget_QMARK,
  [anon_sym_map_DASHinsert] = anon_sym_map_DASHinsert,
  [anon_sym_map_DASHset] = anon_sym_map_DASHset,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_merge] = anon_sym_merge,
  [anon_sym_nft_DASHburn_QMARK] = anon_sym_nft_DASHburn_QMARK,
  [anon_sym_nft_DASHmint_QMARK] = anon_sym_nft_DASHmint_QMARK,
  [anon_sym_nft_DASHget_DASHowner_QMARK] = anon_sym_nft_DASHget_DASHowner_QMARK,
  [anon_sym_nft_DASHtransfer_QMARK] = anon_sym_nft_DASHtransfer_QMARK,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_principal_DASHconstruct_QMARK] = anon_sym_principal_DASHconstruct_QMARK,
  [anon_sym_principal_DASHdestruct_QMARK] = anon_sym_principal_DASHdestruct_QMARK,
  [anon_sym_principal_DASHof_QMARK] = anon_sym_principal_DASHof_QMARK,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_replace_DASHat_QMARK] = anon_sym_replace_DASHat_QMARK,
  [anon_sym_secp256k1_DASHrecover_QMARK] = anon_sym_secp256k1_DASHrecover_QMARK,
  [anon_sym_secp256k1_DASHverify] = anon_sym_secp256k1_DASHverify,
  [anon_sym_sha256] = anon_sym_sha256,
  [anon_sym_sha512] = anon_sym_sha512,
  [anon_sym_sha512_SLASH256] = anon_sym_sha512_SLASH256,
  [anon_sym_slice_QMARK] = anon_sym_slice_QMARK,
  [anon_sym_sqrti] = anon_sym_sqrti,
  [anon_sym_string_DASHto_DASHint_QMARK] = anon_sym_string_DASHto_DASHint_QMARK,
  [anon_sym_string_DASHto_DASHuint_QMARK] = anon_sym_string_DASHto_DASHuint_QMARK,
  [anon_sym_stx_DASHaccount] = anon_sym_stx_DASHaccount,
  [anon_sym_stx_DASHburn_QMARK] = anon_sym_stx_DASHburn_QMARK,
  [anon_sym_stx_DASHget_DASHbalance] = anon_sym_stx_DASHget_DASHbalance,
  [anon_sym_stx_DASHtransfer_DASHmemo_QMARK] = anon_sym_stx_DASHtransfer_DASHmemo_QMARK,
  [anon_sym_stx_DASHtransfer_QMARK] = anon_sym_stx_DASHtransfer_QMARK,
  [anon_sym_to_DASHconsensus_DASHbuff_QMARK] = anon_sym_to_DASHconsensus_DASHbuff_QMARK,
  [anon_sym_to_DASHint] = anon_sym_to_DASHint,
  [anon_sym_to_DASHuint] = anon_sym_to_DASHuint,
  [anon_sym_try_BANG] = anon_sym_try_BANG,
  [anon_sym_unwrap_BANG] = anon_sym_unwrap_BANG,
  [anon_sym_unwrap_DASHerr_BANG] = anon_sym_unwrap_DASHerr_BANG,
  [anon_sym_unwrap_DASHerr_DASHpanic] = anon_sym_unwrap_DASHerr_DASHpanic,
  [anon_sym_unwrap_DASHpanic] = anon_sym_unwrap_DASHpanic,
  [anon_sym_var_DASHget] = anon_sym_var_DASHget,
  [anon_sym_var_DASHset] = anon_sym_var_DASHset,
  [anon_sym_block_DASHheight] = anon_sym_block_DASHheight,
  [anon_sym_burn_DASHblock_DASHheight] = anon_sym_burn_DASHblock_DASHheight,
  [anon_sym_chain_DASHid] = anon_sym_chain_DASHid,
  [anon_sym_contract_DASHcaller] = anon_sym_contract_DASHcaller,
  [anon_sym_is_DASHin_mainnet] = anon_sym_is_DASHin_mainnet,
  [anon_sym_is_DASHin_DASHregtest] = anon_sym_is_DASHin_DASHregtest,
  [anon_sym_stacks_DASHblock_DASHheight] = anon_sym_stacks_DASHblock_DASHheight,
  [anon_sym_stx_DASHliquid_DASHsupply] = anon_sym_stx_DASHliquid_DASHsupply,
  [anon_sym_tenure_DASHheight] = anon_sym_tenure_DASHheight,
  [anon_sym_tx_DASHsender] = anon_sym_tx_DASHsender,
  [anon_sym_tx_DASHsponsor_QMARK] = anon_sym_tx_DASHsponsor_QMARK,
  [anon_sym_block_DASHreward] = anon_sym_block_DASHreward,
  [anon_sym_burnchain_DASHheader_DASHhash] = anon_sym_burnchain_DASHheader_DASHhash,
  [anon_sym_id_DASHheader_DASHhash] = anon_sym_id_DASHheader_DASHhash,
  [anon_sym_header_DASHhash] = anon_sym_header_DASHhash,
  [anon_sym_miner_DASHaddress] = anon_sym_miner_DASHaddress,
  [anon_sym_miner_DASHspend_DASHtotal] = anon_sym_miner_DASHspend_DASHtotal,
  [anon_sym_miner_DASHspend_DASHwinner] = anon_sym_miner_DASHspend_DASHwinner,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_vrf_DASHseed] = anon_sym_vrf_DASHseed,
  [anon_sym_pox_DASHaddrs] = anon_sym_pox_DASHaddrs,
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
  [aux_sym_standard_principal_lit_token2] = {
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
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_append] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as_DASHcontract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as_DASHmax_DASHlen_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asserts_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_at_DASHblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit_DASHand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit_DASHnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit_DASHor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit_DASHshift_DASHleft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit_DASHshift_DASHright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit_DASHxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buff_DASHto_DASHint_DASHbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buff_DASHto_DASHint_DASHle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buff_DASHto_DASHuint_DASHbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buff_DASHto_DASHuint_DASHle] = {
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
  [anon_sym_element_DASHat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_element_DASHat_QMARK] = {
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
  [anon_sym_from_DASHconsensus_DASHbuff_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ft_DASHburn_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ft_DASHmint_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ft_DASHtransfer_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ft_DASHget_DASHsupply] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ft_DASHget_DASHbalance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHblock_DASHinfo_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHburn_DASHblock_DASHinfo_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hash160] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_DASHof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_DASHof_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int_DASHto_DASHascii] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int_DASHto_DASHutf8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHeq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHerr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHnone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHok] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHsome] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHstandard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keccak256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_len] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map_DASHdelete] = {
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
  [anon_sym_nft_DASHburn_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nft_DASHmint_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nft_DASHget_DASHowner_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nft_DASHtransfer_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_principal_DASHconstruct_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_principal_DASHdestruct_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_principal_DASHof_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace_DASHat_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_secp256k1_DASHrecover_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_secp256k1_DASHverify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha512] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha512_SLASH256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slice_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sqrti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string_DASHto_DASHint_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string_DASHto_DASHuint_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stx_DASHaccount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stx_DASHburn_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stx_DASHget_DASHbalance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stx_DASHtransfer_DASHmemo_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stx_DASHtransfer_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_DASHconsensus_DASHbuff_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_DASHint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_DASHuint] = {
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
  [anon_sym_unwrap_DASHerr_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unwrap_DASHerr_DASHpanic] = {
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
  [anon_sym_chain_DASHid] = {
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
  [anon_sym_stacks_DASHblock_DASHheight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stx_DASHliquid_DASHsupply] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tenure_DASHheight] = {
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
  [anon_sym_block_DASHreward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_burnchain_DASHheader_DASHhash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id_DASHheader_DASHhash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header_DASHhash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_miner_DASHaddress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_miner_DASHspend_DASHtotal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_miner_DASHspend_DASHwinner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vrf_DASHseed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pox_DASHaddrs] = {
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
  [5] = {.index = 9, .length = 1},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 4},
  [9] = {.index = 18, .length = 2},
  [10] = {.index = 20, .length = 2},
  [11] = {.index = 22, .length = 4},
  [12] = {.index = 26, .length = 2},
  [13] = {.index = 28, .length = 2},
  [14] = {.index = 30, .length = 2},
  [15] = {.index = 32, .length = 4},
  [16] = {.index = 36, .length = 2},
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
    {field_trait_name, 4},
  [10] =
    {field_key, 0, .inherited = true},
    {field_value_type, 0, .inherited = true},
  [12] =
    {field_key, 1, .inherited = true},
    {field_value_type, 1, .inherited = true},
  [14] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value_type, 0, .inherited = true},
    {field_value_type, 1, .inherited = true},
  [18] =
    {field_key_type, 3},
    {field_value_type, 4},
  [20] =
    {field_key, 0},
    {field_value, 2},
  [22] =
    {field_key, 1, .inherited = true},
    {field_key, 2, .inherited = true},
    {field_value, 1, .inherited = true},
    {field_value, 2, .inherited = true},
  [26] =
    {field_trait_alias, 2},
    {field_trait_name, 5},
  [28] =
    {field_key, 2, .inherited = true},
    {field_value_type, 2, .inherited = true},
  [30] =
    {field_key, 0},
    {field_value_type, 2},
  [32] =
    {field_key, 1, .inherited = true},
    {field_key, 2, .inherited = true},
    {field_value_type, 1, .inherited = true},
    {field_value_type, 2, .inherited = true},
  [36] =
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
  [213] = 213,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '"', 74,
        '\'', 69,
        '(', 57,
        ')', 58,
        '*', 82,
        '+', 81,
        ',', 65,
        '-', 68,
        '.', 59,
        '/', 83,
        '0', 62,
        ':', 67,
        ';', 16,
        '<', 60,
        '>', 61,
        's', 93,
        'u', 87,
        '{', 64,
        '}', 66,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(77);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(75);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '\r') ADVANCE(96);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(80);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '(', 57,
        ')', 58,
        '*', 82,
        '+', 81,
        ',', 65,
        '-', 68,
        '/', 83,
        ';', 16,
        '<', 60,
        '>', 61,
        's', 93,
        '{', 64,
        '}', 66,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '5') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(86);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == ';') ADVANCE(95);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_buffer_type_token1);
      if (lookahead == 'x') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_buffer_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_standard_principal_lit_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_standard_principal_lit_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_buffer_lit_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_utf8_string_lit);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_sha512_SLASH256);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(89);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(95);
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
      ADVANCE_MAP(
        'a', 1,
        'b', 2,
        'c', 3,
        'd', 4,
        'e', 5,
        'f', 6,
        'g', 7,
        'h', 8,
        'i', 9,
        'k', 10,
        'l', 11,
        'm', 12,
        'n', 13,
        'o', 14,
        'p', 15,
        'r', 16,
        's', 17,
        't', 18,
        'u', 19,
        'v', 20,
        'x', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 14:
      if (lookahead == 'k') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 'q') ADVANCE(69);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 's') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(108);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(112);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(118);
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_ok);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 62:
      if (lookahead == 'w') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(128);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(146);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 78:
      if (lookahead == 'w') ADVANCE(148);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_uint_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 88:
      if (lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(159);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(162);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_err);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 104:
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(179);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(181);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '-') ADVANCE(184);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_len);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 117:
      if (lookahead == '2') ADVANCE(192);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_map);
      if (lookahead == '-') ADVANCE(193);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(197);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_pow);
      END_STATE();
    case 128:
      if (lookahead == '-') ADVANCE(200);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 133:
      if (lookahead == '2') ADVANCE(205);
      if (lookahead == '5') ADVANCE(206);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 139:
      if (lookahead == '-') ADVANCE(212);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 144:
      if (lookahead == '!') ADVANCE(219);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 149:
      if (lookahead == '-') ADVANCE(224);
      END_STATE();
    case 150:
      if (lookahead == '-') ADVANCE(225);
      END_STATE();
    case 151:
      if (lookahead == '-') ADVANCE(226);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == 'x') ADVANCE(237);
      END_STATE();
    case 160:
      if (lookahead == 'k') ADVANCE(238);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_buff);
      if (lookahead == '-') ADVANCE(239);
      END_STATE();
    case 163:
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 173:
      if (lookahead == '-') ADVANCE(250);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(255);
      END_STATE();
    case 179:
      if (lookahead == '1') ADVANCE(256);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 182:
      if (lookahead == '-') ADVANCE(259);
      END_STATE();
    case 183:
      if (lookahead == 'x') ADVANCE(260);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 185:
      if (lookahead == 'q') ADVANCE(262);
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 188:
      if (lookahead == 'k') ADVANCE(266);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_log2);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(270);
      if (lookahead == 'g') ADVANCE(271);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 194:
      if (lookahead == 'h') ADVANCE(274);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(277);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(279);
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_none_lit);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 204:
      if (lookahead == '2') ADVANCE(287);
      END_STATE();
    case 205:
      if (lookahead == '5') ADVANCE(288);
      END_STATE();
    case 206:
      if (lookahead == '1') ADVANCE(289);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 210:
      if (lookahead == 'k') ADVANCE(292);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'b') ADVANCE(295);
      if (lookahead == 'g') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_try_BANG);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(305);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(310);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 229:
      if (lookahead == 'x') ADVANCE(313);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(319);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 238:
      if (lookahead == '-') ADVANCE(321);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 240:
      if (lookahead == 'b') ADVANCE(323);
      END_STATE();
    case 241:
      if (lookahead == 'h') ADVANCE(324);
      END_STATE();
    case 242:
      if (lookahead == '-') ADVANCE(325);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 250:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 254:
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 256:
      if (lookahead == '6') ADVANCE(339);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 258:
      if (lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 260:
      if (lookahead == '-') ADVANCE(343);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_is_DASHeq);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 264:
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '_') ADVANCE(347);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_is_DASHok);
      END_STATE();
    case 267:
      if (lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 269:
      if (lookahead == 'k') ADVANCE(351);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 276:
      if (lookahead == '-') ADVANCE(356);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 282:
      if (lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 285:
      if (lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 287:
      if (lookahead == '5') ADVANCE(366);
      END_STATE();
    case 288:
      if (lookahead == '6') ADVANCE(367);
      END_STATE();
    case 289:
      if (lookahead == '2') ADVANCE(368);
      END_STATE();
    case 290:
      if (lookahead == '?') ADVANCE(369);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_sqrti);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 293:
      if (lookahead == 'g') ADVANCE(371);
      END_STATE();
    case 294:
      if (lookahead == 'c') ADVANCE(372);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 306:
      if (lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 313:
      if (lookahead == '-') ADVANCE(389);
      END_STATE();
    case 314:
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 315:
      if (lookahead == 'c') ADVANCE(391);
      END_STATE();
    case 316:
      if (lookahead == 'd') ADVANCE(392);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_bit_DASHor);
      END_STATE();
    case 319:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 321:
      if (lookahead == 'h') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_concat);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 329:
      if (lookahead == '-') ADVANCE(404);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 334:
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(411);
      END_STATE();
    case 338:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 339:
      if (lookahead == '0') ADVANCE(413);
      END_STATE();
    case 340:
      if (lookahead == '-') ADVANCE(414);
      END_STATE();
    case 341:
      if (lookahead == 'd') ADVANCE(415);
      END_STATE();
    case 342:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 344:
      if (lookahead == '-') ADVANCE(418);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_is_DASHerr);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 347:
      if (lookahead == 'm') ADVANCE(420);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 351:
      if (lookahead == '2') ADVANCE(424);
      END_STATE();
    case 352:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 354:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 356:
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 360:
      if (lookahead == 'a') ADVANCE(434);
      END_STATE();
    case 361:
      if (lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 362:
      if (lookahead == 'd') ADVANCE(436);
      END_STATE();
    case 363:
      if (lookahead == 'p') ADVANCE(437);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 365:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 366:
      if (lookahead == '6') ADVANCE(440);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_sha512);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_slice_QMARK);
      END_STATE();
    case 370:
      if (lookahead == '-') ADVANCE(441);
      END_STATE();
    case 371:
      if (lookahead == '-') ADVANCE(442);
      END_STATE();
    case 372:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 374:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 375:
      if (lookahead == 'q') ADVANCE(446);
      END_STATE();
    case 376:
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 377:
      if (lookahead == '-') ADVANCE(448);
      END_STATE();
    case 378:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_to_DASHint);
      END_STATE();
    case 380:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 383:
      if (lookahead == '!') ADVANCE(453);
      if (lookahead == '-') ADVANCE(454);
      END_STATE();
    case 384:
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(460);
      END_STATE();
    case 390:
      if (lookahead == '!') ADVANCE(461);
      END_STATE();
    case 391:
      if (lookahead == 'k') ADVANCE(462);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_bit_DASHand);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_bit_DASHnot);
      END_STATE();
    case 394:
      if (lookahead == 'f') ADVANCE(463);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_bit_DASHxor);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 398:
      if (lookahead == '-') ADVANCE(466);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 401:
      if (lookahead == 'd') ADVANCE(469);
      END_STATE();
    case 402:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 403:
      if (lookahead == '-') ADVANCE(471);
      END_STATE();
    case 404:
      ADVANCE_MAP(
        'c', 472,
        'd', 473,
        'f', 474,
        'm', 475,
        'n', 476,
        'p', 477,
        'r', 478,
        't', 479,
      );
      END_STATE();
    case 405:
      if (lookahead == '-') ADVANCE(480);
      END_STATE();
    case 406:
      if (lookahead == 'n') ADVANCE(481);
      END_STATE();
    case 407:
      if (lookahead == '?') ADVANCE(482);
      END_STATE();
    case 408:
      if (lookahead == 'b') ADVANCE(483);
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 409:
      if (lookahead == '?') ADVANCE(485);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 411:
      if (lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 412:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_hash160);
      END_STATE();
    case 414:
      if (lookahead == 'h') ADVANCE(489);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 416:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 417:
      if (lookahead == 'f') ADVANCE(492);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(494);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(496);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_is_DASHnone);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_is_DASHsome);
      END_STATE();
    case 423:
      if (lookahead == 'd') ADVANCE(497);
      END_STATE();
    case 424:
      if (lookahead == '5') ADVANCE(498);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 426:
      if (lookahead == '?') ADVANCE(500);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_map_DASHset);
      END_STATE();
    case 429:
      if (lookahead == 'd') ADVANCE(502);
      END_STATE();
    case 430:
      if (lookahead == 'p') ADVANCE(503);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 432:
      if (lookahead == '-') ADVANCE(505);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(506);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 435:
      if (lookahead == 'l') ADVANCE(508);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(510);
      END_STATE();
    case 438:
      if (lookahead == '-') ADVANCE(511);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 440:
      if (lookahead == 'k') ADVANCE(513);
      END_STATE();
    case 441:
      if (lookahead == 'b') ADVANCE(514);
      END_STATE();
    case 442:
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead == 'u') ADVANCE(517);
      END_STATE();
    case 443:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 444:
      if (lookahead == 'n') ADVANCE(519);
      END_STATE();
    case 445:
      if (lookahead == '-') ADVANCE(520);
      END_STATE();
    case 446:
      if (lookahead == 'u') ADVANCE(521);
      END_STATE();
    case 447:
      if (lookahead == 'n') ADVANCE(522);
      END_STATE();
    case 448:
      if (lookahead == 'h') ADVANCE(523);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_to_DASHuint);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 452:
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_unwrap_BANG);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == 'p') ADVANCE(528);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(529);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_var_DASHget);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_var_DASHset);
      END_STATE();
    case 458:
      if (lookahead == 'd') ADVANCE(530);
      END_STATE();
    case 459:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_asserts_BANG);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_at_DASHblock);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 464:
      if (lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 465:
      if (lookahead == 'w') ADVANCE(535);
      END_STATE();
    case 466:
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(537);
      END_STATE();
    case 467:
      if (lookahead == 'c') ADVANCE(538);
      END_STATE();
    case 468:
      if (lookahead == 'n') ADVANCE(539);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_chain_DASHid);
      END_STATE();
    case 470:
      if (lookahead == '-') ADVANCE(540);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 473:
      if (lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 474:
      if (lookahead == 'u') ADVANCE(544);
      END_STATE();
    case 475:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 477:
      if (lookahead == 'r') ADVANCE(547);
      if (lookahead == 'u') ADVANCE(548);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 479:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 480:
      if (lookahead == 'a') ADVANCE(551);
      END_STATE();
    case 481:
      if (lookahead == 's') ADVANCE(552);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_ft_DASHburn_QMARK);
      END_STATE();
    case 483:
      if (lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 484:
      if (lookahead == 'u') ADVANCE(554);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_ft_DASHmint_QMARK);
      END_STATE();
    case 486:
      if (lookahead == 'f') ADVANCE(555);
      END_STATE();
    case 487:
      if (lookahead == 'k') ADVANCE(556);
      END_STATE();
    case 488:
      if (lookahead == '-') ADVANCE(557);
      END_STATE();
    case 489:
      if (lookahead == 'a') ADVANCE(558);
      END_STATE();
    case 490:
      if (lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_index_DASHof);
      if (lookahead == '?') ADVANCE(561);
      END_STATE();
    case 493:
      if (lookahead == 's') ADVANCE(562);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 495:
      if (lookahead == 'g') ADVANCE(564);
      END_STATE();
    case 496:
      if (lookahead == 'i') ADVANCE(565);
      END_STATE();
    case 497:
      if (lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 498:
      if (lookahead == '6') ADVANCE(567);
      END_STATE();
    case 499:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_map_DASHget_QMARK);
      END_STATE();
    case 501:
      if (lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 502:
      if (lookahead == 'd') ADVANCE(570);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 504:
      if (lookahead == '?') ADVANCE(572);
      END_STATE();
    case 505:
      if (lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 506:
      if (lookahead == '?') ADVANCE(574);
      END_STATE();
    case 507:
      if (lookahead == 's') ADVANCE(575);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 509:
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(577);
      END_STATE();
    case 511:
      if (lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 513:
      if (lookahead == '1') ADVANCE(579);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 515:
      if (lookahead == 's') ADVANCE(581);
      END_STATE();
    case 516:
      if (lookahead == 'o') ADVANCE(582);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 518:
      if (lookahead == 'u') ADVANCE(584);
      END_STATE();
    case 519:
      if (lookahead == '?') ADVANCE(585);
      END_STATE();
    case 520:
      if (lookahead == 'b') ADVANCE(586);
      END_STATE();
    case 521:
      if (lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 522:
      if (lookahead == 's') ADVANCE(588);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 525:
      if (lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 527:
      if (lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 528:
      if (lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_vrf_DASHseed);
      END_STATE();
    case 531:
      if (lookahead == 'c') ADVANCE(596);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(597);
      END_STATE();
    case 533:
      if (lookahead == '-') ADVANCE(598);
      END_STATE();
    case 534:
      if (lookahead == 'g') ADVANCE(599);
      END_STATE();
    case 535:
      if (lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(601);
      END_STATE();
    case 537:
      if (lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 538:
      if (lookahead == 'k') ADVANCE(603);
      END_STATE();
    case 539:
      if (lookahead == '-') ADVANCE(604);
      END_STATE();
    case 540:
      if (lookahead == 'c') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(606);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(607);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 543:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 545:
      if (lookahead == 'p') ADVANCE(611);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(612);
      END_STATE();
    case 547:
      if (lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 548:
      if (lookahead == 'b') ADVANCE(614);
      END_STATE();
    case 549:
      if (lookahead == 'a') ADVANCE(615);
      END_STATE();
    case 550:
      if (lookahead == 'a') ADVANCE(616);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 552:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 553:
      if (lookahead == 'l') ADVANCE(619);
      END_STATE();
    case 554:
      if (lookahead == 'p') ADVANCE(620);
      END_STATE();
    case 555:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 556:
      if (lookahead == '-') ADVANCE(622);
      END_STATE();
    case 557:
      if (lookahead == 'b') ADVANCE(623);
      END_STATE();
    case 558:
      if (lookahead == 's') ADVANCE(624);
      END_STATE();
    case 559:
      if (lookahead == '-') ADVANCE(625);
      END_STATE();
    case 560:
      if (lookahead == 't') ADVANCE(626);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_index_DASHof_QMARK);
      END_STATE();
    case 562:
      if (lookahead == 'c') ADVANCE(627);
      END_STATE();
    case 563:
      if (lookahead == 'f') ADVANCE(628);
      END_STATE();
    case 564:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(630);
      END_STATE();
    case 566:
      if (lookahead == 'r') ADVANCE(631);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_keccak256);
      END_STATE();
    case 568:
      if (lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(633);
      END_STATE();
    case 570:
      if (lookahead == 'r') ADVANCE(634);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(635);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_nft_DASHburn_QMARK);
      END_STATE();
    case 573:
      if (lookahead == 'w') ADVANCE(636);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_nft_DASHmint_QMARK);
      END_STATE();
    case 575:
      if (lookahead == 'f') ADVANCE(637);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_pox_DASHaddrs);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_principal);
      if (lookahead == '-') ADVANCE(638);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(639);
      END_STATE();
    case 579:
      if (lookahead == '-') ADVANCE(640);
      END_STATE();
    case 580:
      if (lookahead == 'o') ADVANCE(641);
      END_STATE();
    case 581:
      if (lookahead == 'c') ADVANCE(642);
      END_STATE();
    case 582:
      if (lookahead == '-') ADVANCE(643);
      END_STATE();
    case 583:
      if (lookahead == 'f') ADVANCE(644);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(645);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_stx_DASHburn_QMARK);
      END_STATE();
    case 586:
      if (lookahead == 'a') ADVANCE(646);
      END_STATE();
    case 587:
      if (lookahead == 'd') ADVANCE(647);
      END_STATE();
    case 588:
      if (lookahead == 'f') ADVANCE(648);
      END_STATE();
    case 589:
      if (lookahead == 'i') ADVANCE(649);
      END_STATE();
    case 590:
      if (lookahead == 's') ADVANCE(650);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_tx_DASHsender);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(651);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(652);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(653);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_use_DASHtrait);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 597:
      if (lookahead == '?') ADVANCE(655);
      END_STATE();
    case 598:
      if (lookahead == 'l') ADVANCE(656);
      if (lookahead == 'r') ADVANCE(657);
      END_STATE();
    case 599:
      if (lookahead == 'h') ADVANCE(658);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 601:
      if (lookahead == 't') ADVANCE(660);
      END_STATE();
    case 602:
      if (lookahead == 'n') ADVANCE(661);
      END_STATE();
    case 603:
      if (lookahead == '-') ADVANCE(662);
      END_STATE();
    case 604:
      if (lookahead == 'h') ADVANCE(663);
      END_STATE();
    case 605:
      if (lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 606:
      if (lookahead == 'f') ADVANCE(665);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_default_DASHto);
      END_STATE();
    case 608:
      if (lookahead == 's') ADVANCE(666);
      END_STATE();
    case 609:
      if (lookahead == 'a') ADVANCE(667);
      END_STATE();
    case 610:
      if (lookahead == 'g') ADVANCE(668);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_define_DASHmap);
      END_STATE();
    case 612:
      if (lookahead == '-') ADVANCE(669);
      END_STATE();
    case 613:
      if (lookahead == 'v') ADVANCE(670);
      END_STATE();
    case 614:
      if (lookahead == 'l') ADVANCE(671);
      END_STATE();
    case 615:
      if (lookahead == 'd') ADVANCE(672);
      END_STATE();
    case 616:
      if (lookahead == 'i') ADVANCE(673);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_element_DASHat);
      if (lookahead == '?') ADVANCE(674);
      END_STATE();
    case 618:
      if (lookahead == 'n') ADVANCE(675);
      END_STATE();
    case 619:
      if (lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 620:
      if (lookahead == 'p') ADVANCE(677);
      END_STATE();
    case 621:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 622:
      if (lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 623:
      if (lookahead == 'l') ADVANCE(680);
      END_STATE();
    case 624:
      if (lookahead == 'h') ADVANCE(681);
      END_STATE();
    case 625:
      if (lookahead == 'h') ADVANCE(682);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_impl_DASHtrait);
      END_STATE();
    case 627:
      if (lookahead == 'i') ADVANCE(683);
      END_STATE();
    case 628:
      if (lookahead == '8') ADVANCE(684);
      END_STATE();
    case 629:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 630:
      if (lookahead == 'n') ADVANCE(686);
      END_STATE();
    case 631:
      if (lookahead == 'd') ADVANCE(687);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_map_DASHdelete);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_map_DASHinsert);
      END_STATE();
    case 634:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 635:
      if (lookahead == 'd') ADVANCE(689);
      END_STATE();
    case 636:
      if (lookahead == 'n') ADVANCE(690);
      END_STATE();
    case 637:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 638:
      if (lookahead == 'c') ADVANCE(692);
      if (lookahead == 'd') ADVANCE(693);
      if (lookahead == 'o') ADVANCE(694);
      END_STATE();
    case 639:
      if (lookahead == '?') ADVANCE(695);
      END_STATE();
    case 640:
      if (lookahead == 'r') ADVANCE(696);
      if (lookahead == 'v') ADVANCE(697);
      END_STATE();
    case 641:
      if (lookahead == 'c') ADVANCE(698);
      END_STATE();
    case 642:
      if (lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 643:
      if (lookahead == 'i') ADVANCE(700);
      if (lookahead == 'u') ADVANCE(701);
      END_STATE();
    case 644:
      if (lookahead == '8') ADVANCE(702);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(703);
      END_STATE();
    case 646:
      if (lookahead == 'l') ADVANCE(704);
      END_STATE();
    case 647:
      if (lookahead == '-') ADVANCE(705);
      END_STATE();
    case 648:
      if (lookahead == 'e') ADVANCE(706);
      END_STATE();
    case 649:
      if (lookahead == 'g') ADVANCE(707);
      END_STATE();
    case 650:
      if (lookahead == 'u') ADVANCE(708);
      END_STATE();
    case 651:
      if (lookahead == '?') ADVANCE(709);
      END_STATE();
    case 652:
      if (lookahead == '!') ADVANCE(710);
      if (lookahead == '-') ADVANCE(711);
      END_STATE();
    case 653:
      if (lookahead == 'i') ADVANCE(712);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_as_DASHcontract);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_as_DASHmax_DASHlen_QMARK);
      END_STATE();
    case 656:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 657:
      if (lookahead == 'i') ADVANCE(714);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(715);
      END_STATE();
    case 659:
      if (lookahead == 'd') ADVANCE(716);
      END_STATE();
    case 660:
      if (lookahead == '-') ADVANCE(717);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(718);
      END_STATE();
    case 662:
      if (lookahead == 'h') ADVANCE(719);
      END_STATE();
    case 663:
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 664:
      if (lookahead == 'l') ADVANCE(721);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_contract_DASHof);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(722);
      END_STATE();
    case 667:
      if (lookahead == '-') ADVANCE(723);
      END_STATE();
    case 668:
      if (lookahead == 'i') ADVANCE(724);
      END_STATE();
    case 669:
      if (lookahead == 'f') ADVANCE(725);
      END_STATE();
    case 670:
      if (lookahead == 'a') ADVANCE(726);
      END_STATE();
    case 671:
      if (lookahead == 'i') ADVANCE(727);
      END_STATE();
    case 672:
      if (lookahead == '-') ADVANCE(728);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(729);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_element_DASHat_QMARK);
      END_STATE();
    case 675:
      if (lookahead == 's') ADVANCE(730);
      END_STATE();
    case 676:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 677:
      if (lookahead == 'l') ADVANCE(732);
      END_STATE();
    case 678:
      if (lookahead == '?') ADVANCE(733);
      END_STATE();
    case 679:
      if (lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 680:
      if (lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_header_DASHhash);
      END_STATE();
    case 682:
      if (lookahead == 'a') ADVANCE(736);
      END_STATE();
    case 683:
      if (lookahead == 'i') ADVANCE(737);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHutf8);
      END_STATE();
    case 685:
      if (lookahead == 's') ADVANCE(738);
      END_STATE();
    case 686:
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_is_DASHstandard);
      END_STATE();
    case 688:
      if (lookahead == 's') ADVANCE(740);
      END_STATE();
    case 689:
      if (lookahead == '-') ADVANCE(741);
      END_STATE();
    case 690:
      if (lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(743);
      END_STATE();
    case 692:
      if (lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 693:
      if (lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 694:
      if (lookahead == 'f') ADVANCE(746);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_replace_DASHat_QMARK);
      END_STATE();
    case 696:
      if (lookahead == 'e') ADVANCE(747);
      END_STATE();
    case 697:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 698:
      if (lookahead == 'k') ADVANCE(749);
      END_STATE();
    case 699:
      if (lookahead == 'i') ADVANCE(750);
      END_STATE();
    case 700:
      if (lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 701:
      if (lookahead == 'i') ADVANCE(752);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_string_DASHutf8);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_stx_DASHaccount);
      END_STATE();
    case 704:
      if (lookahead == 'a') ADVANCE(753);
      END_STATE();
    case 705:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(755);
      END_STATE();
    case 707:
      if (lookahead == 'h') ADVANCE(756);
      END_STATE();
    case 708:
      if (lookahead == 's') ADVANCE(757);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_tx_DASHsponsor_QMARK);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_unwrap_DASHerr_BANG);
      END_STATE();
    case 711:
      if (lookahead == 'p') ADVANCE(758);
      END_STATE();
    case 712:
      if (lookahead == 'c') ADVANCE(759);
      END_STATE();
    case 713:
      if (lookahead == 'f') ADVANCE(760);
      END_STATE();
    case 714:
      if (lookahead == 'g') ADVANCE(761);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_block_DASHheight);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_block_DASHreward);
      END_STATE();
    case 717:
      if (lookahead == 'b') ADVANCE(762);
      if (lookahead == 'l') ADVANCE(763);
      END_STATE();
    case 718:
      if (lookahead == '-') ADVANCE(764);
      END_STATE();
    case 719:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 720:
      if (lookahead == 'a') ADVANCE(766);
      END_STATE();
    case 721:
      if (lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 722:
      if (lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 723:
      if (lookahead == 'v') ADVANCE(769);
      END_STATE();
    case 724:
      if (lookahead == 'b') ADVANCE(770);
      END_STATE();
    case 725:
      if (lookahead == 'u') ADVANCE(771);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(772);
      END_STATE();
    case 727:
      if (lookahead == 'c') ADVANCE(773);
      END_STATE();
    case 728:
      if (lookahead == 'o') ADVANCE(774);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_define_DASHtrait);
      END_STATE();
    case 730:
      if (lookahead == 'u') ADVANCE(775);
      END_STATE();
    case 731:
      if (lookahead == 'c') ADVANCE(776);
      END_STATE();
    case 732:
      if (lookahead == 'y') ADVANCE(777);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_ft_DASHtransfer_QMARK);
      END_STATE();
    case 734:
      if (lookahead == 'f') ADVANCE(778);
      END_STATE();
    case 735:
      if (lookahead == 'c') ADVANCE(779);
      END_STATE();
    case 736:
      if (lookahead == 's') ADVANCE(780);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHascii);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(781);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(782);
      END_STATE();
    case 740:
      if (lookahead == 's') ADVANCE(783);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(784);
      if (lookahead == 'w') ADVANCE(785);
      END_STATE();
    case 742:
      if (lookahead == 'r') ADVANCE(786);
      END_STATE();
    case 743:
      if (lookahead == '?') ADVANCE(787);
      END_STATE();
    case 744:
      if (lookahead == 'n') ADVANCE(788);
      END_STATE();
    case 745:
      if (lookahead == 's') ADVANCE(789);
      END_STATE();
    case 746:
      if (lookahead == '?') ADVANCE(790);
      END_STATE();
    case 747:
      if (lookahead == 'c') ADVANCE(791);
      END_STATE();
    case 748:
      if (lookahead == 'r') ADVANCE(792);
      END_STATE();
    case 749:
      if (lookahead == '-') ADVANCE(793);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_string_DASHascii);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(794);
      END_STATE();
    case 752:
      if (lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 753:
      if (lookahead == 'n') ADVANCE(796);
      END_STATE();
    case 754:
      if (lookahead == 'u') ADVANCE(797);
      END_STATE();
    case 755:
      if (lookahead == '-') ADVANCE(798);
      if (lookahead == '?') ADVANCE(799);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(800);
      END_STATE();
    case 757:
      if (lookahead == '-') ADVANCE(801);
      END_STATE();
    case 758:
      if (lookahead == 'a') ADVANCE(802);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_unwrap_DASHpanic);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(803);
      END_STATE();
    case 761:
      if (lookahead == 'h') ADVANCE(804);
      END_STATE();
    case 762:
      if (lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 763:
      if (lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 764:
      if (lookahead == 'b') ADVANCE(807);
      if (lookahead == 'l') ADVANCE(808);
      END_STATE();
    case 765:
      if (lookahead == 'i') ADVANCE(809);
      END_STATE();
    case 766:
      if (lookahead == 'd') ADVANCE(810);
      END_STATE();
    case 767:
      if (lookahead == '?') ADVANCE(811);
      if (lookahead == 'e') ADVANCE(812);
      END_STATE();
    case 768:
      if (lookahead == 'n') ADVANCE(813);
      END_STATE();
    case 769:
      if (lookahead == 'a') ADVANCE(814);
      END_STATE();
    case 770:
      if (lookahead == 'l') ADVANCE(815);
      END_STATE();
    case 771:
      if (lookahead == 'n') ADVANCE(816);
      END_STATE();
    case 772:
      if (lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_define_DASHpublic);
      END_STATE();
    case 774:
      if (lookahead == 'n') ADVANCE(818);
      END_STATE();
    case 775:
      if (lookahead == 's') ADVANCE(819);
      END_STATE();
    case 776:
      if (lookahead == 'e') ADVANCE(820);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_ft_DASHget_DASHsupply);
      END_STATE();
    case 778:
      if (lookahead == 'o') ADVANCE(821);
      END_STATE();
    case 779:
      if (lookahead == 'k') ADVANCE(822);
      END_STATE();
    case 780:
      if (lookahead == 'h') ADVANCE(823);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_is_DASHin_DASHregtest);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_is_DASHin_mainnet);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_miner_DASHaddress);
      END_STATE();
    case 784:
      if (lookahead == 'o') ADVANCE(824);
      END_STATE();
    case 785:
      if (lookahead == 'i') ADVANCE(825);
      END_STATE();
    case 786:
      if (lookahead == '?') ADVANCE(826);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_nft_DASHtransfer_QMARK);
      END_STATE();
    case 788:
      if (lookahead == 's') ADVANCE(827);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(828);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_principal_DASHof_QMARK);
      END_STATE();
    case 791:
      if (lookahead == 'o') ADVANCE(829);
      END_STATE();
    case 792:
      if (lookahead == 'i') ADVANCE(830);
      END_STATE();
    case 793:
      if (lookahead == 'h') ADVANCE(831);
      END_STATE();
    case 794:
      if (lookahead == '?') ADVANCE(832);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(833);
      END_STATE();
    case 796:
      if (lookahead == 'c') ADVANCE(834);
      END_STATE();
    case 797:
      if (lookahead == 'p') ADVANCE(835);
      END_STATE();
    case 798:
      if (lookahead == 'm') ADVANCE(836);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_stx_DASHtransfer_QMARK);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_tenure_DASHheight);
      END_STATE();
    case 801:
      if (lookahead == 'b') ADVANCE(837);
      END_STATE();
    case 802:
      if (lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_bit_DASHshift_DASHleft);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(839);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_buff_DASHto_DASHint_DASHbe);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_buff_DASHto_DASHint_DASHle);
      END_STATE();
    case 807:
      if (lookahead == 'e') ADVANCE(840);
      END_STATE();
    case 808:
      if (lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 809:
      if (lookahead == 'g') ADVANCE(842);
      END_STATE();
    case 810:
      if (lookahead == 'e') ADVANCE(843);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_contract_DASHcall_QMARK);
      END_STATE();
    case 812:
      if (lookahead == 'r') ADVANCE(844);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(845);
      END_STATE();
    case 814:
      if (lookahead == 'r') ADVANCE(846);
      END_STATE();
    case 815:
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 816:
      if (lookahead == 'g') ADVANCE(848);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_define_DASHprivate);
      END_STATE();
    case 818:
      if (lookahead == 'l') ADVANCE(849);
      END_STATE();
    case 819:
      if (lookahead == '-') ADVANCE(850);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_ft_DASHget_DASHbalance);
      END_STATE();
    case 821:
      if (lookahead == '?') ADVANCE(851);
      END_STATE();
    case 822:
      if (lookahead == '-') ADVANCE(852);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_id_DASHheader_DASHhash);
      END_STATE();
    case 824:
      if (lookahead == 't') ADVANCE(853);
      END_STATE();
    case 825:
      if (lookahead == 'n') ADVANCE(854);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_nft_DASHget_DASHowner_QMARK);
      END_STATE();
    case 827:
      if (lookahead == 't') ADVANCE(855);
      END_STATE();
    case 828:
      if (lookahead == 'r') ADVANCE(856);
      END_STATE();
    case 829:
      if (lookahead == 'v') ADVANCE(857);
      END_STATE();
    case 830:
      if (lookahead == 'f') ADVANCE(858);
      END_STATE();
    case 831:
      if (lookahead == 'e') ADVANCE(859);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_string_DASHto_DASHint_QMARK);
      END_STATE();
    case 833:
      if (lookahead == '?') ADVANCE(860);
      END_STATE();
    case 834:
      if (lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 835:
      if (lookahead == 'p') ADVANCE(862);
      END_STATE();
    case 836:
      if (lookahead == 'e') ADVANCE(863);
      END_STATE();
    case 837:
      if (lookahead == 'u') ADVANCE(864);
      END_STATE();
    case 838:
      if (lookahead == 'i') ADVANCE(865);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_bit_DASHshift_DASHright);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_buff_DASHto_DASHuint_DASHbe);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_buff_DASHto_DASHuint_DASHle);
      END_STATE();
    case 842:
      if (lookahead == 'h') ADVANCE(866);
      END_STATE();
    case 843:
      if (lookahead == 'r') ADVANCE(867);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_contract_DASHcaller);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_define_DASHconstant);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_define_DASHdata_DASHvar);
      END_STATE();
    case 847:
      if (lookahead == '-') ADVANCE(868);
      END_STATE();
    case 848:
      if (lookahead == 'i') ADVANCE(869);
      END_STATE();
    case 849:
      if (lookahead == 'y') ADVANCE(870);
      END_STATE();
    case 850:
      if (lookahead == 'b') ADVANCE(871);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_get_DASHblock_DASHinfo_QMARK);
      END_STATE();
    case 852:
      if (lookahead == 'i') ADVANCE(872);
      END_STATE();
    case 853:
      if (lookahead == 'a') ADVANCE(873);
      END_STATE();
    case 854:
      if (lookahead == 'n') ADVANCE(874);
      END_STATE();
    case 855:
      if (lookahead == 'r') ADVANCE(875);
      END_STATE();
    case 856:
      if (lookahead == 'u') ADVANCE(876);
      END_STATE();
    case 857:
      if (lookahead == 'e') ADVANCE(877);
      END_STATE();
    case 858:
      if (lookahead == 'y') ADVANCE(878);
      END_STATE();
    case 859:
      if (lookahead == 'i') ADVANCE(879);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_string_DASHto_DASHuint_QMARK);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_stx_DASHget_DASHbalance);
      END_STATE();
    case 862:
      if (lookahead == 'l') ADVANCE(880);
      END_STATE();
    case 863:
      if (lookahead == 'm') ADVANCE(881);
      END_STATE();
    case 864:
      if (lookahead == 'f') ADVANCE(882);
      END_STATE();
    case 865:
      if (lookahead == 'c') ADVANCE(883);
      END_STATE();
    case 866:
      if (lookahead == 't') ADVANCE(884);
      END_STATE();
    case 867:
      if (lookahead == '-') ADVANCE(885);
      END_STATE();
    case 868:
      if (lookahead == 't') ADVANCE(886);
      END_STATE();
    case 869:
      if (lookahead == 'b') ADVANCE(887);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_define_DASHread_DASHonly);
      END_STATE();
    case 871:
      if (lookahead == 'u') ADVANCE(888);
      END_STATE();
    case 872:
      if (lookahead == 'n') ADVANCE(889);
      END_STATE();
    case 873:
      if (lookahead == 'l') ADVANCE(890);
      END_STATE();
    case 874:
      if (lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 875:
      if (lookahead == 'u') ADVANCE(892);
      END_STATE();
    case 876:
      if (lookahead == 'c') ADVANCE(893);
      END_STATE();
    case 877:
      if (lookahead == 'r') ADVANCE(894);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_secp256k1_DASHverify);
      END_STATE();
    case 879:
      if (lookahead == 'g') ADVANCE(895);
      END_STATE();
    case 880:
      if (lookahead == 'y') ADVANCE(896);
      END_STATE();
    case 881:
      if (lookahead == 'o') ADVANCE(897);
      END_STATE();
    case 882:
      if (lookahead == 'f') ADVANCE(898);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_unwrap_DASHerr_DASHpanic);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_burn_DASHblock_DASHheight);
      END_STATE();
    case 885:
      if (lookahead == 'h') ADVANCE(899);
      END_STATE();
    case 886:
      if (lookahead == 'o') ADVANCE(900);
      END_STATE();
    case 887:
      if (lookahead == 'l') ADVANCE(901);
      END_STATE();
    case 888:
      if (lookahead == 'f') ADVANCE(902);
      END_STATE();
    case 889:
      if (lookahead == 'f') ADVANCE(903);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_miner_DASHspend_DASHtotal);
      END_STATE();
    case 891:
      if (lookahead == 'r') ADVANCE(904);
      END_STATE();
    case 892:
      if (lookahead == 'c') ADVANCE(905);
      END_STATE();
    case 893:
      if (lookahead == 't') ADVANCE(906);
      END_STATE();
    case 894:
      if (lookahead == '?') ADVANCE(907);
      END_STATE();
    case 895:
      if (lookahead == 'h') ADVANCE(908);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_stx_DASHliquid_DASHsupply);
      END_STATE();
    case 897:
      if (lookahead == '?') ADVANCE(909);
      END_STATE();
    case 898:
      if (lookahead == '?') ADVANCE(910);
      END_STATE();
    case 899:
      if (lookahead == 'a') ADVANCE(911);
      END_STATE();
    case 900:
      if (lookahead == 'k') ADVANCE(912);
      END_STATE();
    case 901:
      if (lookahead == 'e') ADVANCE(913);
      END_STATE();
    case 902:
      if (lookahead == 'f') ADVANCE(914);
      END_STATE();
    case 903:
      if (lookahead == 'o') ADVANCE(915);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_miner_DASHspend_DASHwinner);
      END_STATE();
    case 905:
      if (lookahead == 't') ADVANCE(916);
      END_STATE();
    case 906:
      if (lookahead == '?') ADVANCE(917);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_secp256k1_DASHrecover_QMARK);
      END_STATE();
    case 908:
      if (lookahead == 't') ADVANCE(918);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_stx_DASHtransfer_DASHmemo_QMARK);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_to_DASHconsensus_DASHbuff_QMARK);
      END_STATE();
    case 911:
      if (lookahead == 's') ADVANCE(919);
      END_STATE();
    case 912:
      if (lookahead == 'e') ADVANCE(920);
      END_STATE();
    case 913:
      if (lookahead == '-') ADVANCE(921);
      END_STATE();
    case 914:
      if (lookahead == '?') ADVANCE(922);
      END_STATE();
    case 915:
      if (lookahead == '?') ADVANCE(923);
      END_STATE();
    case 916:
      if (lookahead == '?') ADVANCE(924);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_principal_DASHdestruct_QMARK);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_stacks_DASHblock_DASHheight);
      END_STATE();
    case 919:
      if (lookahead == 'h') ADVANCE(925);
      END_STATE();
    case 920:
      if (lookahead == 'n') ADVANCE(926);
      END_STATE();
    case 921:
      if (lookahead == 't') ADVANCE(927);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_from_DASHconsensus_DASHbuff_QMARK);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_get_DASHburn_DASHblock_DASHinfo_QMARK);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_principal_DASHconstruct_QMARK);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_burnchain_DASHheader_DASHhash);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_define_DASHfungible_DASHtoken);
      END_STATE();
    case 927:
      if (lookahead == 'o') ADVANCE(928);
      END_STATE();
    case 928:
      if (lookahead == 'k') ADVANCE(929);
      END_STATE();
    case 929:
      if (lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 930:
      if (lookahead == 'n') ADVANCE(931);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_define_DASHnon_DASHfungible_DASHtoken);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
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
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
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
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
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
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_append] = ACTIONS(1),
    [anon_sym_as_DASHcontract] = ACTIONS(1),
    [anon_sym_as_DASHmax_DASHlen_QMARK] = ACTIONS(1),
    [anon_sym_asserts_BANG] = ACTIONS(1),
    [anon_sym_at_DASHblock] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_bit_DASHand] = ACTIONS(1),
    [anon_sym_bit_DASHnot] = ACTIONS(1),
    [anon_sym_bit_DASHor] = ACTIONS(1),
    [anon_sym_bit_DASHshift_DASHleft] = ACTIONS(1),
    [anon_sym_bit_DASHshift_DASHright] = ACTIONS(1),
    [anon_sym_bit_DASHxor] = ACTIONS(1),
    [anon_sym_buff_DASHto_DASHint_DASHbe] = ACTIONS(1),
    [anon_sym_buff_DASHto_DASHint_DASHle] = ACTIONS(1),
    [anon_sym_buff_DASHto_DASHuint_DASHbe] = ACTIONS(1),
    [anon_sym_buff_DASHto_DASHuint_DASHle] = ACTIONS(1),
    [anon_sym_concat] = ACTIONS(1),
    [anon_sym_contract_DASHcall_QMARK] = ACTIONS(1),
    [anon_sym_contract_DASHof] = ACTIONS(1),
    [anon_sym_default_DASHto] = ACTIONS(1),
    [anon_sym_element_DASHat] = ACTIONS(1),
    [anon_sym_element_DASHat_QMARK] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_fold] = ACTIONS(1),
    [anon_sym_from_DASHconsensus_DASHbuff_QMARK] = ACTIONS(1),
    [anon_sym_ft_DASHburn_QMARK] = ACTIONS(1),
    [anon_sym_ft_DASHmint_QMARK] = ACTIONS(1),
    [anon_sym_ft_DASHtransfer_QMARK] = ACTIONS(1),
    [anon_sym_ft_DASHget_DASHsupply] = ACTIONS(1),
    [anon_sym_ft_DASHget_DASHbalance] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_get_DASHblock_DASHinfo_QMARK] = ACTIONS(1),
    [anon_sym_get_DASHburn_DASHblock_DASHinfo_QMARK] = ACTIONS(1),
    [anon_sym_hash160] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_index_DASHof] = ACTIONS(1),
    [anon_sym_index_DASHof_QMARK] = ACTIONS(1),
    [anon_sym_int_DASHto_DASHascii] = ACTIONS(1),
    [anon_sym_int_DASHto_DASHutf8] = ACTIONS(1),
    [anon_sym_is_DASHeq] = ACTIONS(1),
    [anon_sym_is_DASHerr] = ACTIONS(1),
    [anon_sym_is_DASHnone] = ACTIONS(1),
    [anon_sym_is_DASHok] = ACTIONS(1),
    [anon_sym_is_DASHsome] = ACTIONS(1),
    [anon_sym_is_DASHstandard] = ACTIONS(1),
    [anon_sym_keccak256] = ACTIONS(1),
    [anon_sym_len] = ACTIONS(1),
    [anon_sym_log2] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_map_DASHdelete] = ACTIONS(1),
    [anon_sym_map_DASHget_QMARK] = ACTIONS(1),
    [anon_sym_map_DASHinsert] = ACTIONS(1),
    [anon_sym_map_DASHset] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_merge] = ACTIONS(1),
    [anon_sym_nft_DASHburn_QMARK] = ACTIONS(1),
    [anon_sym_nft_DASHmint_QMARK] = ACTIONS(1),
    [anon_sym_nft_DASHget_DASHowner_QMARK] = ACTIONS(1),
    [anon_sym_nft_DASHtransfer_QMARK] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_principal_DASHconstruct_QMARK] = ACTIONS(1),
    [anon_sym_principal_DASHdestruct_QMARK] = ACTIONS(1),
    [anon_sym_principal_DASHof_QMARK] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_replace_DASHat_QMARK] = ACTIONS(1),
    [anon_sym_secp256k1_DASHrecover_QMARK] = ACTIONS(1),
    [anon_sym_secp256k1_DASHverify] = ACTIONS(1),
    [anon_sym_sha256] = ACTIONS(1),
    [anon_sym_sha512] = ACTIONS(1),
    [anon_sym_sha512_SLASH256] = ACTIONS(1),
    [anon_sym_slice_QMARK] = ACTIONS(1),
    [anon_sym_sqrti] = ACTIONS(1),
    [anon_sym_string_DASHto_DASHint_QMARK] = ACTIONS(1),
    [anon_sym_string_DASHto_DASHuint_QMARK] = ACTIONS(1),
    [anon_sym_stx_DASHaccount] = ACTIONS(1),
    [anon_sym_stx_DASHburn_QMARK] = ACTIONS(1),
    [anon_sym_stx_DASHget_DASHbalance] = ACTIONS(1),
    [anon_sym_stx_DASHtransfer_DASHmemo_QMARK] = ACTIONS(1),
    [anon_sym_stx_DASHtransfer_QMARK] = ACTIONS(1),
    [anon_sym_to_DASHconsensus_DASHbuff_QMARK] = ACTIONS(1),
    [anon_sym_to_DASHint] = ACTIONS(1),
    [anon_sym_to_DASHuint] = ACTIONS(1),
    [anon_sym_try_BANG] = ACTIONS(1),
    [anon_sym_unwrap_BANG] = ACTIONS(1),
    [anon_sym_unwrap_DASHerr_BANG] = ACTIONS(1),
    [anon_sym_unwrap_DASHerr_DASHpanic] = ACTIONS(1),
    [anon_sym_unwrap_DASHpanic] = ACTIONS(1),
    [anon_sym_var_DASHget] = ACTIONS(1),
    [anon_sym_var_DASHset] = ACTIONS(1),
    [anon_sym_block_DASHheight] = ACTIONS(1),
    [anon_sym_burn_DASHblock_DASHheight] = ACTIONS(1),
    [anon_sym_chain_DASHid] = ACTIONS(1),
    [anon_sym_contract_DASHcaller] = ACTIONS(1),
    [anon_sym_is_DASHin_mainnet] = ACTIONS(1),
    [anon_sym_is_DASHin_DASHregtest] = ACTIONS(1),
    [anon_sym_stacks_DASHblock_DASHheight] = ACTIONS(1),
    [anon_sym_stx_DASHliquid_DASHsupply] = ACTIONS(1),
    [anon_sym_tenure_DASHheight] = ACTIONS(1),
    [anon_sym_tx_DASHsender] = ACTIONS(1),
    [anon_sym_tx_DASHsponsor_QMARK] = ACTIONS(1),
    [anon_sym_block_DASHreward] = ACTIONS(1),
    [anon_sym_burnchain_DASHheader_DASHhash] = ACTIONS(1),
    [anon_sym_id_DASHheader_DASHhash] = ACTIONS(1),
    [anon_sym_header_DASHhash] = ACTIONS(1),
    [anon_sym_miner_DASHaddress] = ACTIONS(1),
    [anon_sym_miner_DASHspend_DASHtotal] = ACTIONS(1),
    [anon_sym_miner_DASHspend_DASHwinner] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_vrf_DASHseed] = ACTIONS(1),
    [anon_sym_pox_DASHaddrs] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(153),
    [sym__expression] = STATE(69),
    [sym__function_call] = STATE(69),
    [sym_trait_definition] = STATE(69),
    [sym_trait_implementation] = STATE(69),
    [sym_trait_usage] = STATE(69),
    [sym_token_definition] = STATE(69),
    [sym_fungible_token_definition] = STATE(119),
    [sym_non_fungible_token_definition] = STATE(119),
    [sym_constant_definition] = STATE(69),
    [sym_variable_definition] = STATE(69),
    [sym_mapping_definition] = STATE(69),
    [sym_function_definition] = STATE(69),
    [sym_private_function] = STATE(123),
    [sym_read_only_function] = STATE(123),
    [sym_public_function] = STATE(123),
    [sym__native_function_call] = STATE(69),
    [sym_basic_native_form] = STATE(69),
    [sym_contract_function_call] = STATE(69),
    [sym_let_expression] = STATE(69),
    [aux_sym_source_repeat1] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_native_identifier] = STATE(8),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_define_DASHtrait] = ACTIONS(11),
    [anon_sym_impl_DASHtrait] = ACTIONS(13),
    [anon_sym_use_DASHtrait] = ACTIONS(15),
    [anon_sym_define_DASHfungible_DASHtoken] = ACTIONS(17),
    [anon_sym_define_DASHnon_DASHfungible_DASHtoken] = ACTIONS(19),
    [anon_sym_define_DASHconstant] = ACTIONS(21),
    [anon_sym_define_DASHdata_DASHvar] = ACTIONS(23),
    [anon_sym_define_DASHmap] = ACTIONS(25),
    [anon_sym_define_DASHprivate] = ACTIONS(27),
    [anon_sym_define_DASHread_DASHonly] = ACTIONS(29),
    [anon_sym_define_DASHpublic] = ACTIONS(31),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_mod] = ACTIONS(35),
    [anon_sym_pow] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(35),
    [anon_sym_or] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(35),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_as_DASHcontract] = ACTIONS(35),
    [anon_sym_as_DASHmax_DASHlen_QMARK] = ACTIONS(35),
    [anon_sym_asserts_BANG] = ACTIONS(35),
    [anon_sym_at_DASHblock] = ACTIONS(35),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_bit_DASHand] = ACTIONS(35),
    [anon_sym_bit_DASHnot] = ACTIONS(35),
    [anon_sym_bit_DASHor] = ACTIONS(35),
    [anon_sym_bit_DASHshift_DASHleft] = ACTIONS(35),
    [anon_sym_bit_DASHshift_DASHright] = ACTIONS(35),
    [anon_sym_bit_DASHxor] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHint_DASHbe] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHint_DASHle] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHuint_DASHbe] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHuint_DASHle] = ACTIONS(35),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contract_DASHcall_QMARK] = ACTIONS(35),
    [anon_sym_contract_DASHof] = ACTIONS(35),
    [anon_sym_default_DASHto] = ACTIONS(35),
    [anon_sym_element_DASHat] = ACTIONS(35),
    [anon_sym_element_DASHat_QMARK] = ACTIONS(35),
    [anon_sym_filter] = ACTIONS(35),
    [anon_sym_fold] = ACTIONS(35),
    [anon_sym_from_DASHconsensus_DASHbuff_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHburn_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHmint_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHtransfer_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHget_DASHsupply] = ACTIONS(35),
    [anon_sym_ft_DASHget_DASHbalance] = ACTIONS(35),
    [anon_sym_get] = ACTIONS(35),
    [anon_sym_get_DASHblock_DASHinfo_QMARK] = ACTIONS(35),
    [anon_sym_get_DASHburn_DASHblock_DASHinfo_QMARK] = ACTIONS(35),
    [anon_sym_hash160] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_index_DASHof] = ACTIONS(35),
    [anon_sym_index_DASHof_QMARK] = ACTIONS(35),
    [anon_sym_int_DASHto_DASHascii] = ACTIONS(35),
    [anon_sym_int_DASHto_DASHutf8] = ACTIONS(35),
    [anon_sym_is_DASHeq] = ACTIONS(35),
    [anon_sym_is_DASHerr] = ACTIONS(35),
    [anon_sym_is_DASHnone] = ACTIONS(35),
    [anon_sym_is_DASHok] = ACTIONS(35),
    [anon_sym_is_DASHsome] = ACTIONS(35),
    [anon_sym_is_DASHstandard] = ACTIONS(35),
    [anon_sym_keccak256] = ACTIONS(35),
    [anon_sym_len] = ACTIONS(35),
    [anon_sym_log2] = ACTIONS(35),
    [anon_sym_map] = ACTIONS(35),
    [anon_sym_map_DASHdelete] = ACTIONS(35),
    [anon_sym_map_DASHget_QMARK] = ACTIONS(35),
    [anon_sym_map_DASHinsert] = ACTIONS(35),
    [anon_sym_map_DASHset] = ACTIONS(35),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_merge] = ACTIONS(35),
    [anon_sym_nft_DASHburn_QMARK] = ACTIONS(35),
    [anon_sym_nft_DASHmint_QMARK] = ACTIONS(35),
    [anon_sym_nft_DASHget_DASHowner_QMARK] = ACTIONS(35),
    [anon_sym_nft_DASHtransfer_QMARK] = ACTIONS(35),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_principal_DASHconstruct_QMARK] = ACTIONS(35),
    [anon_sym_principal_DASHdestruct_QMARK] = ACTIONS(35),
    [anon_sym_principal_DASHof_QMARK] = ACTIONS(35),
    [anon_sym_print] = ACTIONS(35),
    [anon_sym_replace_DASHat_QMARK] = ACTIONS(35),
    [anon_sym_secp256k1_DASHrecover_QMARK] = ACTIONS(35),
    [anon_sym_secp256k1_DASHverify] = ACTIONS(35),
    [anon_sym_sha256] = ACTIONS(35),
    [anon_sym_sha512] = ACTIONS(35),
    [anon_sym_sha512_SLASH256] = ACTIONS(37),
    [anon_sym_slice_QMARK] = ACTIONS(35),
    [anon_sym_sqrti] = ACTIONS(35),
    [anon_sym_string_DASHto_DASHint_QMARK] = ACTIONS(35),
    [anon_sym_string_DASHto_DASHuint_QMARK] = ACTIONS(35),
    [anon_sym_stx_DASHaccount] = ACTIONS(35),
    [anon_sym_stx_DASHburn_QMARK] = ACTIONS(35),
    [anon_sym_stx_DASHget_DASHbalance] = ACTIONS(35),
    [anon_sym_stx_DASHtransfer_DASHmemo_QMARK] = ACTIONS(35),
    [anon_sym_stx_DASHtransfer_QMARK] = ACTIONS(35),
    [anon_sym_to_DASHconsensus_DASHbuff_QMARK] = ACTIONS(35),
    [anon_sym_to_DASHint] = ACTIONS(35),
    [anon_sym_to_DASHuint] = ACTIONS(35),
    [anon_sym_try_BANG] = ACTIONS(35),
    [anon_sym_unwrap_BANG] = ACTIONS(35),
    [anon_sym_unwrap_DASHerr_BANG] = ACTIONS(35),
    [anon_sym_unwrap_DASHerr_DASHpanic] = ACTIONS(35),
    [anon_sym_unwrap_DASHpanic] = ACTIONS(35),
    [anon_sym_var_DASHget] = ACTIONS(35),
    [anon_sym_var_DASHset] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_list_lit_token] = STATE(10),
    [sym_native_identifier] = STATE(8),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_list] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_some] = ACTIONS(41),
    [anon_sym_ok] = ACTIONS(43),
    [anon_sym_err] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_mod] = ACTIONS(35),
    [anon_sym_pow] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(35),
    [anon_sym_or] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(35),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_as_DASHcontract] = ACTIONS(35),
    [anon_sym_as_DASHmax_DASHlen_QMARK] = ACTIONS(35),
    [anon_sym_asserts_BANG] = ACTIONS(35),
    [anon_sym_at_DASHblock] = ACTIONS(35),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_bit_DASHand] = ACTIONS(35),
    [anon_sym_bit_DASHnot] = ACTIONS(35),
    [anon_sym_bit_DASHor] = ACTIONS(35),
    [anon_sym_bit_DASHshift_DASHleft] = ACTIONS(35),
    [anon_sym_bit_DASHshift_DASHright] = ACTIONS(35),
    [anon_sym_bit_DASHxor] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHint_DASHbe] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHint_DASHle] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHuint_DASHbe] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHuint_DASHle] = ACTIONS(35),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contract_DASHcall_QMARK] = ACTIONS(35),
    [anon_sym_contract_DASHof] = ACTIONS(35),
    [anon_sym_default_DASHto] = ACTIONS(35),
    [anon_sym_element_DASHat] = ACTIONS(35),
    [anon_sym_element_DASHat_QMARK] = ACTIONS(35),
    [anon_sym_filter] = ACTIONS(35),
    [anon_sym_fold] = ACTIONS(35),
    [anon_sym_from_DASHconsensus_DASHbuff_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHburn_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHmint_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHtransfer_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHget_DASHsupply] = ACTIONS(35),
    [anon_sym_ft_DASHget_DASHbalance] = ACTIONS(35),
    [anon_sym_get] = ACTIONS(35),
    [anon_sym_get_DASHblock_DASHinfo_QMARK] = ACTIONS(35),
    [anon_sym_get_DASHburn_DASHblock_DASHinfo_QMARK] = ACTIONS(35),
    [anon_sym_hash160] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_index_DASHof] = ACTIONS(35),
    [anon_sym_index_DASHof_QMARK] = ACTIONS(35),
    [anon_sym_int_DASHto_DASHascii] = ACTIONS(35),
    [anon_sym_int_DASHto_DASHutf8] = ACTIONS(35),
    [anon_sym_is_DASHeq] = ACTIONS(35),
    [anon_sym_is_DASHerr] = ACTIONS(35),
    [anon_sym_is_DASHnone] = ACTIONS(35),
    [anon_sym_is_DASHok] = ACTIONS(35),
    [anon_sym_is_DASHsome] = ACTIONS(35),
    [anon_sym_is_DASHstandard] = ACTIONS(35),
    [anon_sym_keccak256] = ACTIONS(35),
    [anon_sym_len] = ACTIONS(35),
    [anon_sym_log2] = ACTIONS(35),
    [anon_sym_map] = ACTIONS(35),
    [anon_sym_map_DASHdelete] = ACTIONS(35),
    [anon_sym_map_DASHget_QMARK] = ACTIONS(35),
    [anon_sym_map_DASHinsert] = ACTIONS(35),
    [anon_sym_map_DASHset] = ACTIONS(35),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_merge] = ACTIONS(35),
    [anon_sym_nft_DASHburn_QMARK] = ACTIONS(35),
    [anon_sym_nft_DASHmint_QMARK] = ACTIONS(35),
    [anon_sym_nft_DASHget_DASHowner_QMARK] = ACTIONS(35),
    [anon_sym_nft_DASHtransfer_QMARK] = ACTIONS(35),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_principal_DASHconstruct_QMARK] = ACTIONS(35),
    [anon_sym_principal_DASHdestruct_QMARK] = ACTIONS(35),
    [anon_sym_principal_DASHof_QMARK] = ACTIONS(35),
    [anon_sym_print] = ACTIONS(35),
    [anon_sym_replace_DASHat_QMARK] = ACTIONS(35),
    [anon_sym_secp256k1_DASHrecover_QMARK] = ACTIONS(35),
    [anon_sym_secp256k1_DASHverify] = ACTIONS(35),
    [anon_sym_sha256] = ACTIONS(35),
    [anon_sym_sha512] = ACTIONS(35),
    [anon_sym_sha512_SLASH256] = ACTIONS(37),
    [anon_sym_slice_QMARK] = ACTIONS(35),
    [anon_sym_sqrti] = ACTIONS(35),
    [anon_sym_string_DASHto_DASHint_QMARK] = ACTIONS(35),
    [anon_sym_string_DASHto_DASHuint_QMARK] = ACTIONS(35),
    [anon_sym_stx_DASHaccount] = ACTIONS(35),
    [anon_sym_stx_DASHburn_QMARK] = ACTIONS(35),
    [anon_sym_stx_DASHget_DASHbalance] = ACTIONS(35),
    [anon_sym_stx_DASHtransfer_DASHmemo_QMARK] = ACTIONS(35),
    [anon_sym_stx_DASHtransfer_QMARK] = ACTIONS(35),
    [anon_sym_to_DASHconsensus_DASHbuff_QMARK] = ACTIONS(35),
    [anon_sym_to_DASHint] = ACTIONS(35),
    [anon_sym_to_DASHuint] = ACTIONS(35),
    [anon_sym_try_BANG] = ACTIONS(35),
    [anon_sym_unwrap_BANG] = ACTIONS(35),
    [anon_sym_unwrap_DASHerr_BANG] = ACTIONS(35),
    [anon_sym_unwrap_DASHerr_DASHpanic] = ACTIONS(35),
    [anon_sym_unwrap_DASHpanic] = ACTIONS(35),
    [anon_sym_var_DASHget] = ACTIONS(35),
    [anon_sym_var_DASHset] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_native_identifier] = STATE(8),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_ok] = ACTIONS(43),
    [anon_sym_err] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_mod] = ACTIONS(35),
    [anon_sym_pow] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(35),
    [anon_sym_or] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(35),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_as_DASHcontract] = ACTIONS(35),
    [anon_sym_as_DASHmax_DASHlen_QMARK] = ACTIONS(35),
    [anon_sym_asserts_BANG] = ACTIONS(35),
    [anon_sym_at_DASHblock] = ACTIONS(35),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_bit_DASHand] = ACTIONS(35),
    [anon_sym_bit_DASHnot] = ACTIONS(35),
    [anon_sym_bit_DASHor] = ACTIONS(35),
    [anon_sym_bit_DASHshift_DASHleft] = ACTIONS(35),
    [anon_sym_bit_DASHshift_DASHright] = ACTIONS(35),
    [anon_sym_bit_DASHxor] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHint_DASHbe] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHint_DASHle] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHuint_DASHbe] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHuint_DASHle] = ACTIONS(35),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contract_DASHcall_QMARK] = ACTIONS(35),
    [anon_sym_contract_DASHof] = ACTIONS(35),
    [anon_sym_default_DASHto] = ACTIONS(35),
    [anon_sym_element_DASHat] = ACTIONS(35),
    [anon_sym_element_DASHat_QMARK] = ACTIONS(35),
    [anon_sym_filter] = ACTIONS(35),
    [anon_sym_fold] = ACTIONS(35),
    [anon_sym_from_DASHconsensus_DASHbuff_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHburn_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHmint_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHtransfer_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHget_DASHsupply] = ACTIONS(35),
    [anon_sym_ft_DASHget_DASHbalance] = ACTIONS(35),
    [anon_sym_get] = ACTIONS(35),
    [anon_sym_get_DASHblock_DASHinfo_QMARK] = ACTIONS(35),
    [anon_sym_get_DASHburn_DASHblock_DASHinfo_QMARK] = ACTIONS(35),
    [anon_sym_hash160] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_index_DASHof] = ACTIONS(35),
    [anon_sym_index_DASHof_QMARK] = ACTIONS(35),
    [anon_sym_int_DASHto_DASHascii] = ACTIONS(35),
    [anon_sym_int_DASHto_DASHutf8] = ACTIONS(35),
    [anon_sym_is_DASHeq] = ACTIONS(35),
    [anon_sym_is_DASHerr] = ACTIONS(35),
    [anon_sym_is_DASHnone] = ACTIONS(35),
    [anon_sym_is_DASHok] = ACTIONS(35),
    [anon_sym_is_DASHsome] = ACTIONS(35),
    [anon_sym_is_DASHstandard] = ACTIONS(35),
    [anon_sym_keccak256] = ACTIONS(35),
    [anon_sym_len] = ACTIONS(35),
    [anon_sym_log2] = ACTIONS(35),
    [anon_sym_map] = ACTIONS(35),
    [anon_sym_map_DASHdelete] = ACTIONS(35),
    [anon_sym_map_DASHget_QMARK] = ACTIONS(35),
    [anon_sym_map_DASHinsert] = ACTIONS(35),
    [anon_sym_map_DASHset] = ACTIONS(35),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_merge] = ACTIONS(35),
    [anon_sym_nft_DASHburn_QMARK] = ACTIONS(35),
    [anon_sym_nft_DASHmint_QMARK] = ACTIONS(35),
    [anon_sym_nft_DASHget_DASHowner_QMARK] = ACTIONS(35),
    [anon_sym_nft_DASHtransfer_QMARK] = ACTIONS(35),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_principal_DASHconstruct_QMARK] = ACTIONS(35),
    [anon_sym_principal_DASHdestruct_QMARK] = ACTIONS(35),
    [anon_sym_principal_DASHof_QMARK] = ACTIONS(35),
    [anon_sym_print] = ACTIONS(35),
    [anon_sym_replace_DASHat_QMARK] = ACTIONS(35),
    [anon_sym_secp256k1_DASHrecover_QMARK] = ACTIONS(35),
    [anon_sym_secp256k1_DASHverify] = ACTIONS(35),
    [anon_sym_sha256] = ACTIONS(35),
    [anon_sym_sha512] = ACTIONS(35),
    [anon_sym_sha512_SLASH256] = ACTIONS(37),
    [anon_sym_slice_QMARK] = ACTIONS(35),
    [anon_sym_sqrti] = ACTIONS(35),
    [anon_sym_string_DASHto_DASHint_QMARK] = ACTIONS(35),
    [anon_sym_string_DASHto_DASHuint_QMARK] = ACTIONS(35),
    [anon_sym_stx_DASHaccount] = ACTIONS(35),
    [anon_sym_stx_DASHburn_QMARK] = ACTIONS(35),
    [anon_sym_stx_DASHget_DASHbalance] = ACTIONS(35),
    [anon_sym_stx_DASHtransfer_DASHmemo_QMARK] = ACTIONS(35),
    [anon_sym_stx_DASHtransfer_QMARK] = ACTIONS(35),
    [anon_sym_to_DASHconsensus_DASHbuff_QMARK] = ACTIONS(35),
    [anon_sym_to_DASHint] = ACTIONS(35),
    [anon_sym_to_DASHuint] = ACTIONS(35),
    [anon_sym_try_BANG] = ACTIONS(35),
    [anon_sym_unwrap_BANG] = ACTIONS(35),
    [anon_sym_unwrap_DASHerr_BANG] = ACTIONS(35),
    [anon_sym_unwrap_DASHerr_DASHpanic] = ACTIONS(35),
    [anon_sym_unwrap_DASHpanic] = ACTIONS(35),
    [anon_sym_var_DASHget] = ACTIONS(35),
    [anon_sym_var_DASHset] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_native_identifier] = STATE(8),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_mod] = ACTIONS(35),
    [anon_sym_pow] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(35),
    [anon_sym_or] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(35),
    [anon_sym_append] = ACTIONS(35),
    [anon_sym_as_DASHcontract] = ACTIONS(35),
    [anon_sym_as_DASHmax_DASHlen_QMARK] = ACTIONS(35),
    [anon_sym_asserts_BANG] = ACTIONS(35),
    [anon_sym_at_DASHblock] = ACTIONS(35),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_bit_DASHand] = ACTIONS(35),
    [anon_sym_bit_DASHnot] = ACTIONS(35),
    [anon_sym_bit_DASHor] = ACTIONS(35),
    [anon_sym_bit_DASHshift_DASHleft] = ACTIONS(35),
    [anon_sym_bit_DASHshift_DASHright] = ACTIONS(35),
    [anon_sym_bit_DASHxor] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHint_DASHbe] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHint_DASHle] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHuint_DASHbe] = ACTIONS(35),
    [anon_sym_buff_DASHto_DASHuint_DASHle] = ACTIONS(35),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contract_DASHcall_QMARK] = ACTIONS(35),
    [anon_sym_contract_DASHof] = ACTIONS(35),
    [anon_sym_default_DASHto] = ACTIONS(35),
    [anon_sym_element_DASHat] = ACTIONS(35),
    [anon_sym_element_DASHat_QMARK] = ACTIONS(35),
    [anon_sym_filter] = ACTIONS(35),
    [anon_sym_fold] = ACTIONS(35),
    [anon_sym_from_DASHconsensus_DASHbuff_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHburn_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHmint_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHtransfer_QMARK] = ACTIONS(35),
    [anon_sym_ft_DASHget_DASHsupply] = ACTIONS(35),
    [anon_sym_ft_DASHget_DASHbalance] = ACTIONS(35),
    [anon_sym_get] = ACTIONS(35),
    [anon_sym_get_DASHblock_DASHinfo_QMARK] = ACTIONS(35),
    [anon_sym_get_DASHburn_DASHblock_DASHinfo_QMARK] = ACTIONS(35),
    [anon_sym_hash160] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_index_DASHof] = ACTIONS(35),
    [anon_sym_index_DASHof_QMARK] = ACTIONS(35),
    [anon_sym_int_DASHto_DASHascii] = ACTIONS(35),
    [anon_sym_int_DASHto_DASHutf8] = ACTIONS(35),
    [anon_sym_is_DASHeq] = ACTIONS(35),
    [anon_sym_is_DASHerr] = ACTIONS(35),
    [anon_sym_is_DASHnone] = ACTIONS(35),
    [anon_sym_is_DASHok] = ACTIONS(35),
    [anon_sym_is_DASHsome] = ACTIONS(35),
    [anon_sym_is_DASHstandard] = ACTIONS(35),
    [anon_sym_keccak256] = ACTIONS(35),
    [anon_sym_len] = ACTIONS(35),
    [anon_sym_log2] = ACTIONS(35),
    [anon_sym_map] = ACTIONS(35),
    [anon_sym_map_DASHdelete] = ACTIONS(35),
    [anon_sym_map_DASHget_QMARK] = ACTIONS(35),
    [anon_sym_map_DASHinsert] = ACTIONS(35),
    [anon_sym_map_DASHset] = ACTIONS(35),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_merge] = ACTIONS(35),
    [anon_sym_nft_DASHburn_QMARK] = ACTIONS(35),
    [anon_sym_nft_DASHmint_QMARK] = ACTIONS(35),
    [anon_sym_nft_DASHget_DASHowner_QMARK] = ACTIONS(35),
    [anon_sym_nft_DASHtransfer_QMARK] = ACTIONS(35),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_principal_DASHconstruct_QMARK] = ACTIONS(35),
    [anon_sym_principal_DASHdestruct_QMARK] = ACTIONS(35),
    [anon_sym_principal_DASHof_QMARK] = ACTIONS(35),
    [anon_sym_print] = ACTIONS(35),
    [anon_sym_replace_DASHat_QMARK] = ACTIONS(35),
    [anon_sym_secp256k1_DASHrecover_QMARK] = ACTIONS(35),
    [anon_sym_secp256k1_DASHverify] = ACTIONS(35),
    [anon_sym_sha256] = ACTIONS(35),
    [anon_sym_sha512] = ACTIONS(35),
    [anon_sym_sha512_SLASH256] = ACTIONS(37),
    [anon_sym_slice_QMARK] = ACTIONS(35),
    [anon_sym_sqrti] = ACTIONS(35),
    [anon_sym_string_DASHto_DASHint_QMARK] = ACTIONS(35),
    [anon_sym_string_DASHto_DASHuint_QMARK] = ACTIONS(35),
    [anon_sym_stx_DASHaccount] = ACTIONS(35),
    [anon_sym_stx_DASHburn_QMARK] = ACTIONS(35),
    [anon_sym_stx_DASHget_DASHbalance] = ACTIONS(35),
    [anon_sym_stx_DASHtransfer_DASHmemo_QMARK] = ACTIONS(35),
    [anon_sym_stx_DASHtransfer_QMARK] = ACTIONS(35),
    [anon_sym_to_DASHconsensus_DASHbuff_QMARK] = ACTIONS(35),
    [anon_sym_to_DASHint] = ACTIONS(35),
    [anon_sym_to_DASHuint] = ACTIONS(35),
    [anon_sym_try_BANG] = ACTIONS(35),
    [anon_sym_unwrap_BANG] = ACTIONS(35),
    [anon_sym_unwrap_DASHerr_BANG] = ACTIONS(35),
    [anon_sym_unwrap_DASHerr_DASHpanic] = ACTIONS(35),
    [anon_sym_unwrap_DASHpanic] = ACTIONS(35),
    [anon_sym_var_DASHget] = ACTIONS(35),
    [anon_sym_var_DASHset] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
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
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(11), 18,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [89] = 16,
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
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      sym_utf8_string_lit,
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(71), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(9), 18,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [178] = 16,
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
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      sym_utf8_string_lit,
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [267] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_0x,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_utf8_string_lit,
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(9), 18,
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
    ACTIONS(118), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [356] = 16,
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
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 1,
      sym_utf8_string_lit,
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(121), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(12), 18,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [445] = 16,
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
      sym_utf8_string_lit,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(71), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(9), 18,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [534] = 16,
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
      sym_utf8_string_lit,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(71), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(9), 18,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [623] = 17,
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
    STATE(14), 1,
      aux_sym_let_expression_repeat2,
    STATE(46), 1,
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
    STATE(162), 12,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [713] = 17,
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
    STATE(36), 1,
      aux_sym_let_expression_repeat2,
    STATE(46), 1,
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
    STATE(158), 12,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [803] = 17,
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
    STATE(16), 1,
      aux_sym_let_expression_repeat2,
    STATE(46), 1,
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
    STATE(158), 12,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [893] = 17,
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
    STATE(36), 1,
      aux_sym_let_expression_repeat2,
    STATE(46), 1,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [983] = 15,
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
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(156), 17,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [1068] = 15,
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
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(147), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [1153] = 15,
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
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(151), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(183), 17,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [1238] = 15,
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
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(155), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(198), 17,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [1323] = 15,
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
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(159), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(128), 17,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [1408] = 15,
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
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(148), 17,
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
    ACTIONS(69), 21,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
  [1493] = 3,
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
    ACTIONS(167), 31,
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
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [1544] = 3,
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
    ACTIONS(171), 31,
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
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [1595] = 3,
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
    ACTIONS(175), 31,
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
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [1646] = 3,
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
    ACTIONS(179), 31,
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
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [1697] = 3,
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
    ACTIONS(183), 31,
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
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [1748] = 3,
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
    ACTIONS(187), 31,
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
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [1799] = 3,
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
    ACTIONS(191), 31,
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
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [1850] = 3,
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
    ACTIONS(195), 31,
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
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [1901] = 3,
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
    ACTIONS(199), 31,
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
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [1952] = 3,
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
    ACTIONS(203), 31,
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
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2003] = 3,
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
    ACTIONS(207), 31,
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
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2054] = 3,
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
    ACTIONS(211), 31,
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
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2105] = 3,
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
    ACTIONS(215), 31,
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
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(36), 6,
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
    ACTIONS(219), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2209] = 3,
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
    ACTIONS(228), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2256] = 3,
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
    ACTIONS(232), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2303] = 3,
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
    ACTIONS(236), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2350] = 3,
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
    ACTIONS(240), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2397] = 3,
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
    ACTIONS(244), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2444] = 3,
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
    ACTIONS(248), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2491] = 3,
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
    ACTIONS(252), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2538] = 3,
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
    ACTIONS(254), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2584] = 3,
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
    ACTIONS(258), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(264), 10,
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
    ACTIONS(262), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 11,
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
    ACTIONS(268), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 11,
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
    ACTIONS(272), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 11,
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
    ACTIONS(276), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 11,
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
    ACTIONS(280), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 11,
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
    ACTIONS(284), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 11,
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
    ACTIONS(288), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [2954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 11,
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
    ACTIONS(292), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [3000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 11,
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
    ACTIONS(296), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [3046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 11,
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
    ACTIONS(300), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [3092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 11,
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
    ACTIONS(304), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [3138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 11,
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
    ACTIONS(308), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [3184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 11,
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
    ACTIONS(312), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [3230] = 3,
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
    ACTIONS(316), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [3276] = 3,
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
    ACTIONS(320), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [3322] = 3,
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
    ACTIONS(324), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [3368] = 3,
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
    ACTIONS(328), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [3414] = 3,
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
    ACTIONS(332), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [3458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(338), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(336), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [3504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(342), 27,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_DASHid,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stacks_DASHblock_DASHheight,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tenure_DASHheight,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      anon_sym_block_DASHreward,
      anon_sym_burnchain_DASHheader_DASHhash,
      anon_sym_id_DASHheader_DASHhash,
      anon_sym_header_DASHhash,
      anon_sym_miner_DASHaddress,
      anon_sym_miner_DASHspend_DASHtotal,
      anon_sym_miner_DASHspend_DASHwinner,
      anon_sym_time,
      anon_sym_vrf_DASHseed,
      anon_sym_pox_DASHaddrs,
      sym_identifier,
  [3548] = 13,
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
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(348), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(346), 3,
      sym_uint_lit,
      sym_utf8_string_lit,
      sym_none_lit,
    STATE(149), 15,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
  [3605] = 13,
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
    STATE(46), 1,
      sym_standard_principal_lit,
    ACTIONS(348), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(350), 3,
      sym_uint_lit,
      sym_utf8_string_lit,
      sym_none_lit,
    STATE(196), 15,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
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
  [3662] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    STATE(119), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(123), 3,
      sym_private_function,
      sym_read_only_function,
      sym_public_function,
    STATE(68), 15,
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
  [3698] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    STATE(119), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(123), 3,
      sym_private_function,
      sym_read_only_function,
      sym_public_function,
    STATE(68), 15,
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
  [3734] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 1,
      anon_sym_LT,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(71), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(89), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3774] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_LT,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(72), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(89), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3814] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    STATE(72), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(89), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(379), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3854] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_LT,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_parameter_type,
    STATE(89), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3890] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_LT,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_parameter_type,
    STATE(89), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3926] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_LT,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      sym_parameter_type,
    STATE(89), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3962] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_LT,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(199), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3995] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym_native_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [4024] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(200), 1,
      sym_native_type,
    STATE(201), 1,
      sym_tuple_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [4055] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_native_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [4084] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_native_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [4113] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(200), 1,
      sym_native_type,
    STATE(201), 1,
      sym_tuple_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [4144] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_native_type,
    STATE(81), 1,
      sym_tuple_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [4175] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym_native_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [4204] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(205), 1,
      sym_native_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [4233] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_native_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [4262] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    STATE(211), 1,
      sym_native_type,
    ACTIONS(365), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(23), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [4291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(385), 12,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
      sym_none_lit,
  [4312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(389), 12,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
      sym_none_lit,
  [4333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4365] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_buff,
    ACTIONS(399), 1,
      anon_sym_string_DASHascii,
    ACTIONS(401), 1,
      anon_sym_string_DASHutf8,
    ACTIONS(403), 1,
      anon_sym_list,
    ACTIONS(405), 1,
      anon_sym_optional,
    ACTIONS(407), 1,
      anon_sym_tuple,
    ACTIONS(409), 1,
      anon_sym_response,
  [4390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    STATE(160), 6,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
      sym_response_lit,
  [4405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(97), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [4419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(101), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [4433] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    STATE(151), 1,
      sym_standard_principal_lit,
    STATE(159), 1,
      sym_contract_principal_lit,
  [4449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(93), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [4463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(97), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [4477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [4491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(103), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [4505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    STATE(151), 1,
      sym_standard_principal_lit,
    STATE(213), 1,
      sym_contract_principal_lit,
  [4521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(102), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [4535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    STATE(102), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [4549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(103), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [4563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [4576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [4589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
    STATE(109), 1,
      aux_sym_tuple_type_repeat1,
    STATE(135), 1,
      sym__tuple_type_pair,
  [4602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [4615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_identifier,
    STATE(111), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(121), 1,
      sym__tuple_lit_pair,
  [4628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
    STATE(112), 1,
      aux_sym_tuple_type_repeat1,
    STATE(122), 1,
      sym__tuple_type_pair,
  [4641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym_identifier,
    STATE(110), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(168), 1,
      sym__tuple_lit_pair,
  [4654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_identifier,
    STATE(110), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(116), 1,
      sym__tuple_lit_pair,
  [4667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_identifier,
    STATE(112), 1,
      aux_sym_tuple_type_repeat1,
    STATE(187), 1,
      sym__tuple_type_pair,
  [4680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_identifier,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
  [4690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_function_signature,
  [4700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
  [4710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
  [4720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_identifier,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
  [4754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
  [4764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
  [4774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_function_signature,
  [4808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
  [4842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
  [4884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_function_signature,
  [4894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      aux_sym_standard_principal_lit_token1,
    ACTIONS(525), 1,
      aux_sym_standard_principal_lit_token2,
  [4904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4928] = 3,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      aux_sym_ascii_string_lit_token1,
    ACTIONS(537), 1,
      sym_comment,
  [4938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [4985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
  [4992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
  [4999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym_identifier,
  [5006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_DOT,
  [5013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym_identifier,
  [5020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
  [5027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym_identifier,
  [5034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
  [5041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [5048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_DQUOTE,
  [5055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
  [5062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_DOT,
  [5069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
  [5076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym_identifier,
  [5083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
  [5090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
  [5097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
  [5104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym_identifier,
  [5111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
  [5118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
  [5125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
  [5132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_identifier,
  [5139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_identifier,
  [5146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
  [5153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
  [5160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_identifier,
  [5167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      aux_sym_buffer_type_token1,
  [5174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_identifier,
  [5181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
  [5188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      aux_sym_buffer_type_token1,
  [5195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      aux_sym_buffer_type_token1,
  [5202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      aux_sym_buffer_type_token1,
  [5209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      aux_sym_buffer_type_token1,
  [5216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
  [5223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
  [5230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
  [5237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
  [5244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
  [5251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COLON,
  [5258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COMMA,
  [5265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
  [5272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_identifier,
  [5279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
  [5286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
  [5293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
  [5300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
  [5307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
  [5314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [5321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
  [5328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_GT,
  [5335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
  [5342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
  [5349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
  [5356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
  [5363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_identifier,
  [5370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
  [5377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym_identifier,
  [5384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
  [5391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_buffer_lit_token1,
  [5398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_identifier,
  [5405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym_identifier,
  [5412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
  [5419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym_identifier,
  [5426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
  [5433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_COLON,
  [5440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 178,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 356,
  [SMALL_STATE(11)] = 445,
  [SMALL_STATE(12)] = 534,
  [SMALL_STATE(13)] = 623,
  [SMALL_STATE(14)] = 713,
  [SMALL_STATE(15)] = 803,
  [SMALL_STATE(16)] = 893,
  [SMALL_STATE(17)] = 983,
  [SMALL_STATE(18)] = 1068,
  [SMALL_STATE(19)] = 1153,
  [SMALL_STATE(20)] = 1238,
  [SMALL_STATE(21)] = 1323,
  [SMALL_STATE(22)] = 1408,
  [SMALL_STATE(23)] = 1493,
  [SMALL_STATE(24)] = 1544,
  [SMALL_STATE(25)] = 1595,
  [SMALL_STATE(26)] = 1646,
  [SMALL_STATE(27)] = 1697,
  [SMALL_STATE(28)] = 1748,
  [SMALL_STATE(29)] = 1799,
  [SMALL_STATE(30)] = 1850,
  [SMALL_STATE(31)] = 1901,
  [SMALL_STATE(32)] = 1952,
  [SMALL_STATE(33)] = 2003,
  [SMALL_STATE(34)] = 2054,
  [SMALL_STATE(35)] = 2105,
  [SMALL_STATE(36)] = 2156,
  [SMALL_STATE(37)] = 2209,
  [SMALL_STATE(38)] = 2256,
  [SMALL_STATE(39)] = 2303,
  [SMALL_STATE(40)] = 2350,
  [SMALL_STATE(41)] = 2397,
  [SMALL_STATE(42)] = 2444,
  [SMALL_STATE(43)] = 2491,
  [SMALL_STATE(44)] = 2538,
  [SMALL_STATE(45)] = 2584,
  [SMALL_STATE(46)] = 2630,
  [SMALL_STATE(47)] = 2678,
  [SMALL_STATE(48)] = 2724,
  [SMALL_STATE(49)] = 2770,
  [SMALL_STATE(50)] = 2816,
  [SMALL_STATE(51)] = 2862,
  [SMALL_STATE(52)] = 2908,
  [SMALL_STATE(53)] = 2954,
  [SMALL_STATE(54)] = 3000,
  [SMALL_STATE(55)] = 3046,
  [SMALL_STATE(56)] = 3092,
  [SMALL_STATE(57)] = 3138,
  [SMALL_STATE(58)] = 3184,
  [SMALL_STATE(59)] = 3230,
  [SMALL_STATE(60)] = 3276,
  [SMALL_STATE(61)] = 3322,
  [SMALL_STATE(62)] = 3368,
  [SMALL_STATE(63)] = 3414,
  [SMALL_STATE(64)] = 3458,
  [SMALL_STATE(65)] = 3504,
  [SMALL_STATE(66)] = 3548,
  [SMALL_STATE(67)] = 3605,
  [SMALL_STATE(68)] = 3662,
  [SMALL_STATE(69)] = 3698,
  [SMALL_STATE(70)] = 3734,
  [SMALL_STATE(71)] = 3774,
  [SMALL_STATE(72)] = 3814,
  [SMALL_STATE(73)] = 3854,
  [SMALL_STATE(74)] = 3890,
  [SMALL_STATE(75)] = 3926,
  [SMALL_STATE(76)] = 3962,
  [SMALL_STATE(77)] = 3995,
  [SMALL_STATE(78)] = 4024,
  [SMALL_STATE(79)] = 4055,
  [SMALL_STATE(80)] = 4084,
  [SMALL_STATE(81)] = 4113,
  [SMALL_STATE(82)] = 4144,
  [SMALL_STATE(83)] = 4175,
  [SMALL_STATE(84)] = 4204,
  [SMALL_STATE(85)] = 4233,
  [SMALL_STATE(86)] = 4262,
  [SMALL_STATE(87)] = 4291,
  [SMALL_STATE(88)] = 4312,
  [SMALL_STATE(89)] = 4333,
  [SMALL_STATE(90)] = 4349,
  [SMALL_STATE(91)] = 4365,
  [SMALL_STATE(92)] = 4390,
  [SMALL_STATE(93)] = 4405,
  [SMALL_STATE(94)] = 4419,
  [SMALL_STATE(95)] = 4433,
  [SMALL_STATE(96)] = 4449,
  [SMALL_STATE(97)] = 4463,
  [SMALL_STATE(98)] = 4477,
  [SMALL_STATE(99)] = 4491,
  [SMALL_STATE(100)] = 4505,
  [SMALL_STATE(101)] = 4521,
  [SMALL_STATE(102)] = 4535,
  [SMALL_STATE(103)] = 4549,
  [SMALL_STATE(104)] = 4563,
  [SMALL_STATE(105)] = 4576,
  [SMALL_STATE(106)] = 4589,
  [SMALL_STATE(107)] = 4602,
  [SMALL_STATE(108)] = 4615,
  [SMALL_STATE(109)] = 4628,
  [SMALL_STATE(110)] = 4641,
  [SMALL_STATE(111)] = 4654,
  [SMALL_STATE(112)] = 4667,
  [SMALL_STATE(113)] = 4680,
  [SMALL_STATE(114)] = 4690,
  [SMALL_STATE(115)] = 4700,
  [SMALL_STATE(116)] = 4710,
  [SMALL_STATE(117)] = 4720,
  [SMALL_STATE(118)] = 4728,
  [SMALL_STATE(119)] = 4736,
  [SMALL_STATE(120)] = 4744,
  [SMALL_STATE(121)] = 4754,
  [SMALL_STATE(122)] = 4764,
  [SMALL_STATE(123)] = 4774,
  [SMALL_STATE(124)] = 4782,
  [SMALL_STATE(125)] = 4790,
  [SMALL_STATE(126)] = 4798,
  [SMALL_STATE(127)] = 4808,
  [SMALL_STATE(128)] = 4816,
  [SMALL_STATE(129)] = 4824,
  [SMALL_STATE(130)] = 4832,
  [SMALL_STATE(131)] = 4842,
  [SMALL_STATE(132)] = 4850,
  [SMALL_STATE(133)] = 4858,
  [SMALL_STATE(134)] = 4866,
  [SMALL_STATE(135)] = 4874,
  [SMALL_STATE(136)] = 4884,
  [SMALL_STATE(137)] = 4894,
  [SMALL_STATE(138)] = 4904,
  [SMALL_STATE(139)] = 4912,
  [SMALL_STATE(140)] = 4920,
  [SMALL_STATE(141)] = 4928,
  [SMALL_STATE(142)] = 4938,
  [SMALL_STATE(143)] = 4946,
  [SMALL_STATE(144)] = 4954,
  [SMALL_STATE(145)] = 4962,
  [SMALL_STATE(146)] = 4970,
  [SMALL_STATE(147)] = 4978,
  [SMALL_STATE(148)] = 4985,
  [SMALL_STATE(149)] = 4992,
  [SMALL_STATE(150)] = 4999,
  [SMALL_STATE(151)] = 5006,
  [SMALL_STATE(152)] = 5013,
  [SMALL_STATE(153)] = 5020,
  [SMALL_STATE(154)] = 5027,
  [SMALL_STATE(155)] = 5034,
  [SMALL_STATE(156)] = 5041,
  [SMALL_STATE(157)] = 5048,
  [SMALL_STATE(158)] = 5055,
  [SMALL_STATE(159)] = 5062,
  [SMALL_STATE(160)] = 5069,
  [SMALL_STATE(161)] = 5076,
  [SMALL_STATE(162)] = 5083,
  [SMALL_STATE(163)] = 5090,
  [SMALL_STATE(164)] = 5097,
  [SMALL_STATE(165)] = 5104,
  [SMALL_STATE(166)] = 5111,
  [SMALL_STATE(167)] = 5118,
  [SMALL_STATE(168)] = 5125,
  [SMALL_STATE(169)] = 5132,
  [SMALL_STATE(170)] = 5139,
  [SMALL_STATE(171)] = 5146,
  [SMALL_STATE(172)] = 5153,
  [SMALL_STATE(173)] = 5160,
  [SMALL_STATE(174)] = 5167,
  [SMALL_STATE(175)] = 5174,
  [SMALL_STATE(176)] = 5181,
  [SMALL_STATE(177)] = 5188,
  [SMALL_STATE(178)] = 5195,
  [SMALL_STATE(179)] = 5202,
  [SMALL_STATE(180)] = 5209,
  [SMALL_STATE(181)] = 5216,
  [SMALL_STATE(182)] = 5223,
  [SMALL_STATE(183)] = 5230,
  [SMALL_STATE(184)] = 5237,
  [SMALL_STATE(185)] = 5244,
  [SMALL_STATE(186)] = 5251,
  [SMALL_STATE(187)] = 5258,
  [SMALL_STATE(188)] = 5265,
  [SMALL_STATE(189)] = 5272,
  [SMALL_STATE(190)] = 5279,
  [SMALL_STATE(191)] = 5286,
  [SMALL_STATE(192)] = 5293,
  [SMALL_STATE(193)] = 5300,
  [SMALL_STATE(194)] = 5307,
  [SMALL_STATE(195)] = 5314,
  [SMALL_STATE(196)] = 5321,
  [SMALL_STATE(197)] = 5328,
  [SMALL_STATE(198)] = 5335,
  [SMALL_STATE(199)] = 5342,
  [SMALL_STATE(200)] = 5349,
  [SMALL_STATE(201)] = 5356,
  [SMALL_STATE(202)] = 5363,
  [SMALL_STATE(203)] = 5370,
  [SMALL_STATE(204)] = 5377,
  [SMALL_STATE(205)] = 5384,
  [SMALL_STATE(206)] = 5391,
  [SMALL_STATE(207)] = 5398,
  [SMALL_STATE(208)] = 5405,
  [SMALL_STATE(209)] = 5412,
  [SMALL_STATE(210)] = 5419,
  [SMALL_STATE(211)] = 5426,
  [SMALL_STATE(212)] = 5433,
  [SMALL_STATE(213)] = 5440,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_native_type, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_type, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3, 0, 7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3, 0, 7),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_type, 4, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_type, 4, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_type, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_type, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_type, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_type, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 4, 0, 13),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 4, 0, 13),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, 0, 7),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, 0, 7),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, 0, 15),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, 0, 15),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_type, 5, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 5, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_type, 5, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_type, 5, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5, 0, 15),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5, 0, 15),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0), SHIFT_REPEAT(5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 8, 0, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 8, 0, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_native_form, 3, 0, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_native_form, 3, 0, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 6, 0, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 6, 0, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_native_form, 4, 0, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_native_form, 4, 0, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_function_call, 3, 0, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_function_call, 3, 0, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_function_call, 4, 0, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_function_call, 4, 0, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 7, 0, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 7, 0, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 3, 0, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 3, 0, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_principal_lit, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_principal_lit, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_some_lit, 4, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_some_lit, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_lit, 4, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_lit, 4, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 4, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 4, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, 0, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, 0, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, 0, 11),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, 0, 11),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 5, 0, 11),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 5, 0, 11),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_lit, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_lit, 2, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 3, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_native_identifier, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_identifier, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_expression_repeat2, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit_token, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit_token, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 4, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature, 4, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_type, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 2, 0, 0),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2, 0, 0),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, 0, 8), SHIFT_REPEAT(207),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, 0, 8),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, 0, 4), SHIFT_REPEAT(212),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, 0, 8), SHIFT_REPEAT(186),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, 0, 6),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, 0, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 6, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_implementation, 6, 0, 5),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_definition, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 1, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_definition, 6, 0, 9),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fungible_token_definition, 4, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_lit_pair, 3, 0, 10),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_public_function, 5, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 7, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_usage, 7, 0, 12),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_type_pair, 3, 0, 14),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_binding, 4, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_fungible_token_definition, 5, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_private_function, 5, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 4, 0, 16),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 6, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 7, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_read_only_function, 5, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [559] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
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

TS_PUBLIC const TSLanguage *tree_sitter_clarity(void) {
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
