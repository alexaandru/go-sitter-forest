#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 213
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 231
#define ALIAS_COUNT 0
#define TOKEN_COUNT 169
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
  anon_sym_xor = 59,
  anon_sym_append = 60,
  anon_sym_as_DASHcontract = 61,
  anon_sym_as_DASHmax_DASHlen_QMARK = 62,
  anon_sym_asserts_BANG = 63,
  anon_sym_at_DASHblock = 64,
  anon_sym_begin = 65,
  anon_sym_bit_DASHand = 66,
  anon_sym_bit_DASHnot = 67,
  anon_sym_bit_DASHor = 68,
  anon_sym_bit_DASHshift_DASHleft = 69,
  anon_sym_bit_DASHshift_DASHright = 70,
  anon_sym_bit_DASHxor = 71,
  anon_sym_buff_DASHto_DASHint_DASHbe = 72,
  anon_sym_buff_DASHto_DASHint_DASHle = 73,
  anon_sym_buff_DASHto_DASHuint_DASHbe = 74,
  anon_sym_buff_DASHto_DASHuint_DASHle = 75,
  anon_sym_concat = 76,
  anon_sym_contract_DASHcall_QMARK = 77,
  anon_sym_contract_DASHof = 78,
  anon_sym_default_DASHto = 79,
  anon_sym_element_DASHat = 80,
  anon_sym_element_DASHat_QMARK = 81,
  anon_sym_filter = 82,
  anon_sym_fold = 83,
  anon_sym_from_DASHconsensus_DASHbuff_QMARK = 84,
  anon_sym_ft_DASHburn_QMARK = 85,
  anon_sym_ft_DASHmint_QMARK = 86,
  anon_sym_ft_DASHtransfer_QMARK = 87,
  anon_sym_ft_DASHget_DASHsupply = 88,
  anon_sym_ft_DASHget_DASHbalance = 89,
  anon_sym_get = 90,
  anon_sym_get_DASHblock_DASHinfo_QMARK = 91,
  anon_sym_get_DASHburn_DASHblock_DASHinfo_QMARK = 92,
  anon_sym_hash160 = 93,
  anon_sym_if = 94,
  anon_sym_index_DASHof = 95,
  anon_sym_index_DASHof_QMARK = 96,
  anon_sym_int_DASHto_DASHascii = 97,
  anon_sym_int_DASHto_DASHutf8 = 98,
  anon_sym_is_DASHeq = 99,
  anon_sym_is_DASHerr = 100,
  anon_sym_is_DASHnone = 101,
  anon_sym_is_DASHok = 102,
  anon_sym_is_DASHsome = 103,
  anon_sym_is_DASHstandard = 104,
  anon_sym_keccak256 = 105,
  anon_sym_len = 106,
  anon_sym_log2 = 107,
  anon_sym_map = 108,
  anon_sym_map_DASHdelete = 109,
  anon_sym_map_DASHget_QMARK = 110,
  anon_sym_map_DASHinsert = 111,
  anon_sym_map_DASHset = 112,
  anon_sym_match = 113,
  anon_sym_merge = 114,
  anon_sym_nft_DASHburn_QMARK = 115,
  anon_sym_nft_DASHmint_QMARK = 116,
  anon_sym_nft_DASHget_DASHowner_QMARK = 117,
  anon_sym_nft_DASHtransfer_QMARK = 118,
  anon_sym_not = 119,
  anon_sym_principal_DASHconstruct_QMARK = 120,
  anon_sym_principal_DASHdestruct_QMARK = 121,
  anon_sym_principal_DASHof_QMARK = 122,
  anon_sym_print = 123,
  anon_sym_replace_DASHat_QMARK = 124,
  anon_sym_secp256k1_DASHrecover_QMARK = 125,
  anon_sym_secp256k1_DASHverify = 126,
  anon_sym_sha256 = 127,
  anon_sym_sha512 = 128,
  anon_sym_sha512_SLASH256 = 129,
  anon_sym_slice_QMARK = 130,
  anon_sym_sqrti = 131,
  anon_sym_string_DASHto_DASHint_QMARK = 132,
  anon_sym_string_DASHto_DASHuint_QMARK = 133,
  anon_sym_stx_DASHaccount = 134,
  anon_sym_stx_DASHburn_QMARK = 135,
  anon_sym_stx_DASHget_DASHbalance = 136,
  anon_sym_stx_DASHtransfer_DASHmemo_QMARK = 137,
  anon_sym_stx_DASHtransfer_QMARK = 138,
  anon_sym_to_DASHconsensus_DASHbuff_QMARK = 139,
  anon_sym_to_DASHint = 140,
  anon_sym_to_DASHuint = 141,
  anon_sym_try_BANG = 142,
  anon_sym_unwrap_BANG = 143,
  anon_sym_unwrap_DASHerr_BANG = 144,
  anon_sym_unwrap_DASHerr_DASHpanic = 145,
  anon_sym_unwrap_DASHpanic = 146,
  anon_sym_var_DASHget = 147,
  anon_sym_var_DASHset = 148,
  anon_sym_block_DASHheight = 149,
  anon_sym_burn_DASHblock_DASHheight = 150,
  anon_sym_chain_id = 151,
  anon_sym_contract_DASHcaller = 152,
  anon_sym_is_DASHin_mainnet = 153,
  anon_sym_is_DASHin_DASHregtest = 154,
  anon_sym_stx_DASHliquid_DASHsupply = 155,
  anon_sym_tx_DASHsender = 156,
  anon_sym_tx_DASHsponsor_QMARK = 157,
  anon_sym_block_DASHreward = 158,
  anon_sym_burnchain_DASHheader_DASHhash = 159,
  anon_sym_id_DASHheader_DASHhash = 160,
  anon_sym_header_DASHhash = 161,
  anon_sym_miner_DASHaddress = 162,
  anon_sym_miner_DASHspend_DASHtotal = 163,
  anon_sym_miner_DASHspend_DASHwinner = 164,
  anon_sym_time = 165,
  anon_sym_vrf_DASHseed = 166,
  anon_sym_pox_DASHaddrs = 167,
  sym_comment = 168,
  sym_source = 169,
  sym__expression = 170,
  sym__function_call = 171,
  sym_trait_definition = 172,
  sym_trait_implementation = 173,
  sym_trait_usage = 174,
  sym_token_definition = 175,
  sym_fungible_token_definition = 176,
  sym_non_fungible_token_definition = 177,
  sym_constant_definition = 178,
  sym_variable_definition = 179,
  sym_mapping_definition = 180,
  sym_function_definition = 181,
  sym_private_function = 182,
  sym_read_only_function = 183,
  sym_public_function = 184,
  sym__native_function_call = 185,
  sym_basic_native_form = 186,
  sym_contract_function_call = 187,
  sym_let_expression = 188,
  sym_local_binding = 189,
  sym_function_signature = 190,
  sym_function_parameter = 191,
  sym_function_signature_for_trait = 192,
  sym_parameter_type = 193,
  sym_trait_type = 194,
  sym_native_type = 195,
  sym_buffer_type = 196,
  sym_ascii_string_type = 197,
  sym_utf8_string_type = 198,
  sym_list_type = 199,
  sym_optional_type = 200,
  sym_tuple_type_for_trait = 201,
  sym_tuple_type = 202,
  sym__tuple_type_pair = 203,
  sym_response_type = 204,
  sym__parameter = 205,
  sym__literal = 206,
  sym_int_lit = 207,
  sym_bool_lit = 208,
  sym_standard_principal_lit = 209,
  sym_contract_principal_lit = 210,
  sym_buffer_lit = 211,
  sym_ascii_string_lit = 212,
  sym_list_lit = 213,
  sym_list_lit_token = 214,
  sym_some_lit = 215,
  sym_tuple_lit = 216,
  sym__tuple_lit_pair = 217,
  sym_response_lit = 218,
  sym_native_identifier = 219,
  sym_global = 220,
  aux_sym_source_repeat1 = 221,
  aux_sym_trait_definition_repeat1 = 222,
  aux_sym_basic_native_form_repeat1 = 223,
  aux_sym_let_expression_repeat1 = 224,
  aux_sym_let_expression_repeat2 = 225,
  aux_sym_function_signature_repeat1 = 226,
  aux_sym_function_signature_for_trait_repeat1 = 227,
  aux_sym_tuple_type_for_trait_repeat1 = 228,
  aux_sym_tuple_type_repeat1 = 229,
  aux_sym_tuple_lit_repeat1 = 230,
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
  [anon_sym_chain_id] = "chain_id",
  [anon_sym_contract_DASHcaller] = "contract-caller",
  [anon_sym_is_DASHin_mainnet] = "is-in_mainnet",
  [anon_sym_is_DASHin_DASHregtest] = "is-in-regtest",
  [anon_sym_stx_DASHliquid_DASHsupply] = "stx-liquid-supply",
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
  [anon_sym_chain_id] = anon_sym_chain_id,
  [anon_sym_contract_DASHcaller] = anon_sym_contract_DASHcaller,
  [anon_sym_is_DASHin_mainnet] = anon_sym_is_DASHin_mainnet,
  [anon_sym_is_DASHin_DASHregtest] = anon_sym_is_DASHin_DASHregtest,
  [anon_sym_stx_DASHliquid_DASHsupply] = anon_sym_stx_DASHliquid_DASHsupply,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '"', 74,
        '\'', 70,
        '(', 58,
        ')', 59,
        '*', 82,
        '+', 81,
        ',', 66,
        '-', 69,
        '.', 60,
        '/', 83,
        '0', 63,
        ':', 68,
        ';', 16,
        '<', 61,
        '>', 62,
        's', 93,
        'u', 87,
        '{', 65,
        '}', 67,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
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
        '(', 58,
        ')', 59,
        '*', 82,
        '+', 81,
        '-', 69,
        '/', 83,
        ';', 16,
        '<', 61,
        '>', 62,
        's', 93,
        '{', 65,
        '}', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
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
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_buffer_type_token1);
      if (lookahead == 'x') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_buffer_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_standard_principal_lit_token1);
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
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 's') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(103);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(111);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_ok);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 62:
      if (lookahead == 'w') ADVANCE(126);
      if (lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == 'x') ADVANCE(137);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(143);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 77:
      if (lookahead == 'w') ADVANCE(145);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_uint_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(159);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_err);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 103:
      if (lookahead == 'b') ADVANCE(171);
      if (lookahead == 'g') ADVANCE(172);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(176);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(178);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '-') ADVANCE(181);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_len);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 116:
      if (lookahead == '2') ADVANCE(189);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_map);
      if (lookahead == '-') ADVANCE(190);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_pow);
      END_STATE();
    case 127:
      if (lookahead == '-') ADVANCE(197);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 132:
      if (lookahead == '2') ADVANCE(202);
      if (lookahead == '5') ADVANCE(203);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 137:
      if (lookahead == '-') ADVANCE(208);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 141:
      if (lookahead == '!') ADVANCE(214);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 146:
      if (lookahead == '-') ADVANCE(219);
      END_STATE();
    case 147:
      if (lookahead == '-') ADVANCE(220);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(221);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == 'x') ADVANCE(232);
      END_STATE();
    case 157:
      if (lookahead == 'k') ADVANCE(233);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_buff);
      if (lookahead == '-') ADVANCE(234);
      END_STATE();
    case 160:
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 170:
      if (lookahead == '-') ADVANCE(245);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 175:
      if (lookahead == 'b') ADVANCE(250);
      END_STATE();
    case 176:
      if (lookahead == '1') ADVANCE(251);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 179:
      if (lookahead == '-') ADVANCE(254);
      END_STATE();
    case 180:
      if (lookahead == 'x') ADVANCE(255);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 182:
      if (lookahead == 'q') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 185:
      if (lookahead == 'k') ADVANCE(261);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_log2);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(265);
      if (lookahead == 'g') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 191:
      if (lookahead == 'h') ADVANCE(269);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 194:
      if (lookahead == 'b') ADVANCE(272);
      if (lookahead == 'g') ADVANCE(273);
      if (lookahead == 'm') ADVANCE(274);
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_none_lit);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(278);
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 201:
      if (lookahead == '2') ADVANCE(282);
      END_STATE();
    case 202:
      if (lookahead == '5') ADVANCE(283);
      END_STATE();
    case 203:
      if (lookahead == '1') ADVANCE(284);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'b') ADVANCE(289);
      if (lookahead == 'g') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_try_BANG);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(301);
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 224:
      if (lookahead == 'x') ADVANCE(306);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 231:
      if (lookahead == 'h') ADVANCE(312);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 233:
      if (lookahead == '-') ADVANCE(314);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 235:
      if (lookahead == 'b') ADVANCE(316);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(317);
      END_STATE();
    case 237:
      if (lookahead == '_') ADVANCE(318);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(325);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 249:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 251:
      if (lookahead == '6') ADVANCE(332);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 253:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 255:
      if (lookahead == '-') ADVANCE(336);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_is_DASHeq);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 259:
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == '_') ADVANCE(340);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_is_DASHok);
      END_STATE();
    case 262:
      if (lookahead == 'm') ADVANCE(342);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 264:
      if (lookahead == 'k') ADVANCE(344);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 271:
      if (lookahead == '-') ADVANCE(349);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 277:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 280:
      if (lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 282:
      if (lookahead == '5') ADVANCE(359);
      END_STATE();
    case 283:
      if (lookahead == '6') ADVANCE(360);
      END_STATE();
    case 284:
      if (lookahead == '2') ADVANCE(361);
      END_STATE();
    case 285:
      if (lookahead == '?') ADVANCE(362);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_sqrti);
      END_STATE();
    case 287:
      if (lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 288:
      if (lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 289:
      if (lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 299:
      if (lookahead == 'p') ADVANCE(374);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 306:
      if (lookahead == '-') ADVANCE(380);
      END_STATE();
    case 307:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 308:
      if (lookahead == 'c') ADVANCE(382);
      END_STATE();
    case 309:
      if (lookahead == 'd') ADVANCE(383);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_bit_DASHor);
      END_STATE();
    case 312:
      if (lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 314:
      if (lookahead == 'h') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 318:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_concat);
      END_STATE();
    case 320:
      if (lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 322:
      if (lookahead == '-') ADVANCE(395);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 327:
      if (lookahead == '-') ADVANCE(399);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 332:
      if (lookahead == '0') ADVANCE(404);
      END_STATE();
    case 333:
      if (lookahead == '-') ADVANCE(405);
      END_STATE();
    case 334:
      if (lookahead == 'd') ADVANCE(406);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 337:
      if (lookahead == '-') ADVANCE(409);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_is_DASHerr);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 340:
      if (lookahead == 'm') ADVANCE(411);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 344:
      if (lookahead == '2') ADVANCE(415);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 349:
      if (lookahead == 'a') ADVANCE(420);
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 353:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 354:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 355:
      if (lookahead == 'd') ADVANCE(427);
      END_STATE();
    case 356:
      if (lookahead == 'p') ADVANCE(428);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 358:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 359:
      if (lookahead == '6') ADVANCE(431);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_sha512);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_slice_QMARK);
      END_STATE();
    case 363:
      if (lookahead == '-') ADVANCE(432);
      END_STATE();
    case 364:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 367:
      if (lookahead == 'q') ADVANCE(436);
      END_STATE();
    case 368:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 369:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_to_DASHint);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 374:
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == '-') ADVANCE(443);
      END_STATE();
    case 375:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 376:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 377:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 381:
      if (lookahead == '!') ADVANCE(450);
      END_STATE();
    case 382:
      if (lookahead == 'k') ADVANCE(451);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_bit_DASHand);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_bit_DASHnot);
      END_STATE();
    case 385:
      if (lookahead == 'f') ADVANCE(452);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_bit_DASHxor);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 389:
      if (lookahead == '-') ADVANCE(455);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 391:
      if (lookahead == 'i') ADVANCE(457);
      END_STATE();
    case 392:
      if (lookahead == 'd') ADVANCE(458);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(459);
      END_STATE();
    case 394:
      if (lookahead == '-') ADVANCE(460);
      END_STATE();
    case 395:
      ADVANCE_MAP(
        'c', 461,
        'd', 462,
        'f', 463,
        'm', 464,
        'n', 465,
        'p', 466,
        'r', 467,
        't', 468,
      );
      END_STATE();
    case 396:
      if (lookahead == '-') ADVANCE(469);
      END_STATE();
    case 397:
      if (lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 398:
      if (lookahead == '?') ADVANCE(471);
      END_STATE();
    case 399:
      if (lookahead == 'b') ADVANCE(472);
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 400:
      if (lookahead == '?') ADVANCE(474);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 402:
      if (lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_hash160);
      END_STATE();
    case 405:
      if (lookahead == 'h') ADVANCE(478);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(480);
      END_STATE();
    case 408:
      if (lookahead == 'f') ADVANCE(481);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead == 'u') ADVANCE(483);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_is_DASHnone);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_is_DASHsome);
      END_STATE();
    case 414:
      if (lookahead == 'd') ADVANCE(486);
      END_STATE();
    case 415:
      if (lookahead == '5') ADVANCE(487);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 417:
      if (lookahead == '?') ADVANCE(489);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_map_DASHset);
      END_STATE();
    case 420:
      if (lookahead == 'd') ADVANCE(491);
      END_STATE();
    case 421:
      if (lookahead == 'p') ADVANCE(492);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 423:
      if (lookahead == '-') ADVANCE(494);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 426:
      if (lookahead == 'l') ADVANCE(497);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 429:
      if (lookahead == '-') ADVANCE(500);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 431:
      if (lookahead == 'k') ADVANCE(502);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(505);
      END_STATE();
    case 433:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 435:
      if (lookahead == '-') ADVANCE(508);
      END_STATE();
    case 436:
      if (lookahead == 'u') ADVANCE(509);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_to_DASHuint);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_unwrap_BANG);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == 'p') ADVANCE(515);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_var_DASHget);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_var_DASHset);
      END_STATE();
    case 447:
      if (lookahead == 'd') ADVANCE(517);
      END_STATE();
    case 448:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_asserts_BANG);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_at_DASHblock);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 454:
      if (lookahead == 'w') ADVANCE(522);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(523);
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 456:
      if (lookahead == 'c') ADVANCE(525);
      END_STATE();
    case 457:
      if (lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_chain_id);
      END_STATE();
    case 459:
      if (lookahead == '-') ADVANCE(527);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 462:
      if (lookahead == 'a') ADVANCE(530);
      END_STATE();
    case 463:
      if (lookahead == 'u') ADVANCE(531);
      END_STATE();
    case 464:
      if (lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead == 'u') ADVANCE(535);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 469:
      if (lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 470:
      if (lookahead == 's') ADVANCE(539);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_ft_DASHburn_QMARK);
      END_STATE();
    case 472:
      if (lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 473:
      if (lookahead == 'u') ADVANCE(541);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_ft_DASHmint_QMARK);
      END_STATE();
    case 475:
      if (lookahead == 'f') ADVANCE(542);
      END_STATE();
    case 476:
      if (lookahead == 'k') ADVANCE(543);
      END_STATE();
    case 477:
      if (lookahead == '-') ADVANCE(544);
      END_STATE();
    case 478:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 479:
      if (lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_index_DASHof);
      if (lookahead == '?') ADVANCE(548);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(549);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(550);
      END_STATE();
    case 484:
      if (lookahead == 'g') ADVANCE(551);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 486:
      if (lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 487:
      if (lookahead == '6') ADVANCE(554);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_map_DASHget_QMARK);
      END_STATE();
    case 490:
      if (lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 491:
      if (lookahead == 'd') ADVANCE(557);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 493:
      if (lookahead == '?') ADVANCE(559);
      END_STATE();
    case 494:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 495:
      if (lookahead == '?') ADVANCE(561);
      END_STATE();
    case 496:
      if (lookahead == 's') ADVANCE(562);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 498:
      if (lookahead == 's') ADVANCE(563);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(564);
      END_STATE();
    case 500:
      if (lookahead == 'a') ADVANCE(565);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 502:
      if (lookahead == '1') ADVANCE(566);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(567);
      END_STATE();
    case 504:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(569);
      END_STATE();
    case 506:
      if (lookahead == 'u') ADVANCE(570);
      END_STATE();
    case 507:
      if (lookahead == '?') ADVANCE(571);
      END_STATE();
    case 508:
      if (lookahead == 'b') ADVANCE(572);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 510:
      if (lookahead == 's') ADVANCE(574);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(575);
      END_STATE();
    case 512:
      if (lookahead == 'r') ADVANCE(576);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(578);
      END_STATE();
    case 515:
      if (lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_vrf_DASHseed);
      END_STATE();
    case 518:
      if (lookahead == 'c') ADVANCE(581);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(582);
      END_STATE();
    case 520:
      if (lookahead == '-') ADVANCE(583);
      END_STATE();
    case 521:
      if (lookahead == 'g') ADVANCE(584);
      END_STATE();
    case 522:
      if (lookahead == 'a') ADVANCE(585);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 524:
      if (lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 525:
      if (lookahead == 'k') ADVANCE(588);
      END_STATE();
    case 526:
      if (lookahead == '-') ADVANCE(589);
      END_STATE();
    case 527:
      if (lookahead == 'c') ADVANCE(590);
      if (lookahead == 'o') ADVANCE(591);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(593);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(595);
      END_STATE();
    case 532:
      if (lookahead == 'p') ADVANCE(596);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(597);
      END_STATE();
    case 534:
      if (lookahead == 'i') ADVANCE(598);
      END_STATE();
    case 535:
      if (lookahead == 'b') ADVANCE(599);
      END_STATE();
    case 536:
      if (lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 537:
      if (lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 538:
      if (lookahead == 't') ADVANCE(602);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 540:
      if (lookahead == 'l') ADVANCE(604);
      END_STATE();
    case 541:
      if (lookahead == 'p') ADVANCE(605);
      END_STATE();
    case 542:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 543:
      if (lookahead == '-') ADVANCE(607);
      END_STATE();
    case 544:
      if (lookahead == 'b') ADVANCE(608);
      END_STATE();
    case 545:
      if (lookahead == 's') ADVANCE(609);
      END_STATE();
    case 546:
      if (lookahead == '-') ADVANCE(610);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(611);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_index_DASHof_QMARK);
      END_STATE();
    case 549:
      if (lookahead == 'c') ADVANCE(612);
      END_STATE();
    case 550:
      if (lookahead == 'f') ADVANCE(613);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(615);
      END_STATE();
    case 553:
      if (lookahead == 'r') ADVANCE(616);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_keccak256);
      END_STATE();
    case 555:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 556:
      if (lookahead == 't') ADVANCE(618);
      END_STATE();
    case 557:
      if (lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(620);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_nft_DASHburn_QMARK);
      END_STATE();
    case 560:
      if (lookahead == 'w') ADVANCE(621);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_nft_DASHmint_QMARK);
      END_STATE();
    case 562:
      if (lookahead == 'f') ADVANCE(622);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_pox_DASHaddrs);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_principal);
      if (lookahead == '-') ADVANCE(623);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(624);
      END_STATE();
    case 566:
      if (lookahead == '-') ADVANCE(625);
      END_STATE();
    case 567:
      if (lookahead == 'c') ADVANCE(626);
      END_STATE();
    case 568:
      if (lookahead == '-') ADVANCE(627);
      END_STATE();
    case 569:
      if (lookahead == 'f') ADVANCE(628);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(629);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_stx_DASHburn_QMARK);
      END_STATE();
    case 572:
      if (lookahead == 'a') ADVANCE(630);
      END_STATE();
    case 573:
      if (lookahead == 'd') ADVANCE(631);
      END_STATE();
    case 574:
      if (lookahead == 'f') ADVANCE(632);
      END_STATE();
    case 575:
      if (lookahead == 's') ADVANCE(633);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_tx_DASHsender);
      END_STATE();
    case 577:
      if (lookahead == 'r') ADVANCE(634);
      END_STATE();
    case 578:
      if (lookahead == 'r') ADVANCE(635);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(636);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_use_DASHtrait);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(637);
      END_STATE();
    case 582:
      if (lookahead == '?') ADVANCE(638);
      END_STATE();
    case 583:
      if (lookahead == 'l') ADVANCE(639);
      if (lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 584:
      if (lookahead == 'h') ADVANCE(641);
      END_STATE();
    case 585:
      if (lookahead == 'r') ADVANCE(642);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(643);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(644);
      END_STATE();
    case 588:
      if (lookahead == '-') ADVANCE(645);
      END_STATE();
    case 589:
      if (lookahead == 'h') ADVANCE(646);
      END_STATE();
    case 590:
      if (lookahead == 'a') ADVANCE(647);
      END_STATE();
    case 591:
      if (lookahead == 'f') ADVANCE(648);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_default_DASHto);
      END_STATE();
    case 593:
      if (lookahead == 's') ADVANCE(649);
      END_STATE();
    case 594:
      if (lookahead == 'a') ADVANCE(650);
      END_STATE();
    case 595:
      if (lookahead == 'g') ADVANCE(651);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_define_DASHmap);
      END_STATE();
    case 597:
      if (lookahead == '-') ADVANCE(652);
      END_STATE();
    case 598:
      if (lookahead == 'v') ADVANCE(653);
      END_STATE();
    case 599:
      if (lookahead == 'l') ADVANCE(654);
      END_STATE();
    case 600:
      if (lookahead == 'd') ADVANCE(655);
      END_STATE();
    case 601:
      if (lookahead == 'i') ADVANCE(656);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_element_DASHat);
      if (lookahead == '?') ADVANCE(657);
      END_STATE();
    case 603:
      if (lookahead == 'n') ADVANCE(658);
      END_STATE();
    case 604:
      if (lookahead == 'a') ADVANCE(659);
      END_STATE();
    case 605:
      if (lookahead == 'p') ADVANCE(660);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(661);
      END_STATE();
    case 607:
      if (lookahead == 'i') ADVANCE(662);
      END_STATE();
    case 608:
      if (lookahead == 'l') ADVANCE(663);
      END_STATE();
    case 609:
      if (lookahead == 'h') ADVANCE(664);
      END_STATE();
    case 610:
      if (lookahead == 'h') ADVANCE(665);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_impl_DASHtrait);
      END_STATE();
    case 612:
      if (lookahead == 'i') ADVANCE(666);
      END_STATE();
    case 613:
      if (lookahead == '8') ADVANCE(667);
      END_STATE();
    case 614:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 615:
      if (lookahead == 'n') ADVANCE(669);
      END_STATE();
    case 616:
      if (lookahead == 'd') ADVANCE(670);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_map_DASHdelete);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_map_DASHinsert);
      END_STATE();
    case 619:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 620:
      if (lookahead == 'd') ADVANCE(672);
      END_STATE();
    case 621:
      if (lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 622:
      if (lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 623:
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead == 'o') ADVANCE(677);
      END_STATE();
    case 624:
      if (lookahead == '?') ADVANCE(678);
      END_STATE();
    case 625:
      if (lookahead == 'r') ADVANCE(679);
      if (lookahead == 'v') ADVANCE(680);
      END_STATE();
    case 626:
      if (lookahead == 'i') ADVANCE(681);
      END_STATE();
    case 627:
      if (lookahead == 'i') ADVANCE(682);
      if (lookahead == 'u') ADVANCE(683);
      END_STATE();
    case 628:
      if (lookahead == '8') ADVANCE(684);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 630:
      if (lookahead == 'l') ADVANCE(686);
      END_STATE();
    case 631:
      if (lookahead == '-') ADVANCE(687);
      END_STATE();
    case 632:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 633:
      if (lookahead == 'u') ADVANCE(689);
      END_STATE();
    case 634:
      if (lookahead == '?') ADVANCE(690);
      END_STATE();
    case 635:
      if (lookahead == '!') ADVANCE(691);
      if (lookahead == '-') ADVANCE(692);
      END_STATE();
    case 636:
      if (lookahead == 'i') ADVANCE(693);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_as_DASHcontract);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_as_DASHmax_DASHlen_QMARK);
      END_STATE();
    case 639:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 640:
      if (lookahead == 'i') ADVANCE(695);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(696);
      END_STATE();
    case 642:
      if (lookahead == 'd') ADVANCE(697);
      END_STATE();
    case 643:
      if (lookahead == '-') ADVANCE(698);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(699);
      END_STATE();
    case 645:
      if (lookahead == 'h') ADVANCE(700);
      END_STATE();
    case 646:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 647:
      if (lookahead == 'l') ADVANCE(702);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_contract_DASHof);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(703);
      END_STATE();
    case 650:
      if (lookahead == '-') ADVANCE(704);
      END_STATE();
    case 651:
      if (lookahead == 'i') ADVANCE(705);
      END_STATE();
    case 652:
      if (lookahead == 'f') ADVANCE(706);
      END_STATE();
    case 653:
      if (lookahead == 'a') ADVANCE(707);
      END_STATE();
    case 654:
      if (lookahead == 'i') ADVANCE(708);
      END_STATE();
    case 655:
      if (lookahead == '-') ADVANCE(709);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(710);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_element_DASHat_QMARK);
      END_STATE();
    case 658:
      if (lookahead == 's') ADVANCE(711);
      END_STATE();
    case 659:
      if (lookahead == 'n') ADVANCE(712);
      END_STATE();
    case 660:
      if (lookahead == 'l') ADVANCE(713);
      END_STATE();
    case 661:
      if (lookahead == '?') ADVANCE(714);
      END_STATE();
    case 662:
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(716);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_header_DASHhash);
      END_STATE();
    case 665:
      if (lookahead == 'a') ADVANCE(717);
      END_STATE();
    case 666:
      if (lookahead == 'i') ADVANCE(718);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHutf8);
      END_STATE();
    case 668:
      if (lookahead == 's') ADVANCE(719);
      END_STATE();
    case 669:
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_is_DASHstandard);
      END_STATE();
    case 671:
      if (lookahead == 's') ADVANCE(721);
      END_STATE();
    case 672:
      if (lookahead == '-') ADVANCE(722);
      END_STATE();
    case 673:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(724);
      END_STATE();
    case 675:
      if (lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 676:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 677:
      if (lookahead == 'f') ADVANCE(727);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_replace_DASHat_QMARK);
      END_STATE();
    case 679:
      if (lookahead == 'e') ADVANCE(728);
      END_STATE();
    case 680:
      if (lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 681:
      if (lookahead == 'i') ADVANCE(730);
      END_STATE();
    case 682:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 683:
      if (lookahead == 'i') ADVANCE(732);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_string_DASHutf8);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_stx_DASHaccount);
      END_STATE();
    case 686:
      if (lookahead == 'a') ADVANCE(733);
      END_STATE();
    case 687:
      if (lookahead == 's') ADVANCE(734);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(735);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(736);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_tx_DASHsponsor_QMARK);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_unwrap_DASHerr_BANG);
      END_STATE();
    case 692:
      if (lookahead == 'p') ADVANCE(737);
      END_STATE();
    case 693:
      if (lookahead == 'c') ADVANCE(738);
      END_STATE();
    case 694:
      if (lookahead == 'f') ADVANCE(739);
      END_STATE();
    case 695:
      if (lookahead == 'g') ADVANCE(740);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_block_DASHheight);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_block_DASHreward);
      END_STATE();
    case 698:
      if (lookahead == 'b') ADVANCE(741);
      if (lookahead == 'l') ADVANCE(742);
      END_STATE();
    case 699:
      if (lookahead == '-') ADVANCE(743);
      END_STATE();
    case 700:
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 701:
      if (lookahead == 'a') ADVANCE(745);
      END_STATE();
    case 702:
      if (lookahead == 'l') ADVANCE(746);
      END_STATE();
    case 703:
      if (lookahead == 'a') ADVANCE(747);
      END_STATE();
    case 704:
      if (lookahead == 'v') ADVANCE(748);
      END_STATE();
    case 705:
      if (lookahead == 'b') ADVANCE(749);
      END_STATE();
    case 706:
      if (lookahead == 'u') ADVANCE(750);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(751);
      END_STATE();
    case 708:
      if (lookahead == 'c') ADVANCE(752);
      END_STATE();
    case 709:
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_define_DASHtrait);
      END_STATE();
    case 711:
      if (lookahead == 'u') ADVANCE(754);
      END_STATE();
    case 712:
      if (lookahead == 'c') ADVANCE(755);
      END_STATE();
    case 713:
      if (lookahead == 'y') ADVANCE(756);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_ft_DASHtransfer_QMARK);
      END_STATE();
    case 715:
      if (lookahead == 'f') ADVANCE(757);
      END_STATE();
    case 716:
      if (lookahead == 'c') ADVANCE(758);
      END_STATE();
    case 717:
      if (lookahead == 's') ADVANCE(759);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_int_DASHto_DASHascii);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(760);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(761);
      END_STATE();
    case 721:
      if (lookahead == 's') ADVANCE(762);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(763);
      if (lookahead == 'w') ADVANCE(764);
      END_STATE();
    case 723:
      if (lookahead == 'r') ADVANCE(765);
      END_STATE();
    case 724:
      if (lookahead == '?') ADVANCE(766);
      END_STATE();
    case 725:
      if (lookahead == 'n') ADVANCE(767);
      END_STATE();
    case 726:
      if (lookahead == 's') ADVANCE(768);
      END_STATE();
    case 727:
      if (lookahead == '?') ADVANCE(769);
      END_STATE();
    case 728:
      if (lookahead == 'c') ADVANCE(770);
      END_STATE();
    case 729:
      if (lookahead == 'r') ADVANCE(771);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_string_DASHascii);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(772);
      END_STATE();
    case 732:
      if (lookahead == 'n') ADVANCE(773);
      END_STATE();
    case 733:
      if (lookahead == 'n') ADVANCE(774);
      END_STATE();
    case 734:
      if (lookahead == 'u') ADVANCE(775);
      END_STATE();
    case 735:
      if (lookahead == '-') ADVANCE(776);
      if (lookahead == '?') ADVANCE(777);
      END_STATE();
    case 736:
      if (lookahead == '-') ADVANCE(778);
      END_STATE();
    case 737:
      if (lookahead == 'a') ADVANCE(779);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_unwrap_DASHpanic);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(780);
      END_STATE();
    case 740:
      if (lookahead == 'h') ADVANCE(781);
      END_STATE();
    case 741:
      if (lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 742:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 743:
      if (lookahead == 'b') ADVANCE(784);
      if (lookahead == 'l') ADVANCE(785);
      END_STATE();
    case 744:
      if (lookahead == 'i') ADVANCE(786);
      END_STATE();
    case 745:
      if (lookahead == 'd') ADVANCE(787);
      END_STATE();
    case 746:
      if (lookahead == '?') ADVANCE(788);
      if (lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 747:
      if (lookahead == 'n') ADVANCE(790);
      END_STATE();
    case 748:
      if (lookahead == 'a') ADVANCE(791);
      END_STATE();
    case 749:
      if (lookahead == 'l') ADVANCE(792);
      END_STATE();
    case 750:
      if (lookahead == 'n') ADVANCE(793);
      END_STATE();
    case 751:
      if (lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_define_DASHpublic);
      END_STATE();
    case 753:
      if (lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 754:
      if (lookahead == 's') ADVANCE(796);
      END_STATE();
    case 755:
      if (lookahead == 'e') ADVANCE(797);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_ft_DASHget_DASHsupply);
      END_STATE();
    case 757:
      if (lookahead == 'o') ADVANCE(798);
      END_STATE();
    case 758:
      if (lookahead == 'k') ADVANCE(799);
      END_STATE();
    case 759:
      if (lookahead == 'h') ADVANCE(800);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_is_DASHin_DASHregtest);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_is_DASHin_mainnet);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_miner_DASHaddress);
      END_STATE();
    case 763:
      if (lookahead == 'o') ADVANCE(801);
      END_STATE();
    case 764:
      if (lookahead == 'i') ADVANCE(802);
      END_STATE();
    case 765:
      if (lookahead == '?') ADVANCE(803);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_nft_DASHtransfer_QMARK);
      END_STATE();
    case 767:
      if (lookahead == 's') ADVANCE(804);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(805);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_principal_DASHof_QMARK);
      END_STATE();
    case 770:
      if (lookahead == 'o') ADVANCE(806);
      END_STATE();
    case 771:
      if (lookahead == 'i') ADVANCE(807);
      END_STATE();
    case 772:
      if (lookahead == '?') ADVANCE(808);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(809);
      END_STATE();
    case 774:
      if (lookahead == 'c') ADVANCE(810);
      END_STATE();
    case 775:
      if (lookahead == 'p') ADVANCE(811);
      END_STATE();
    case 776:
      if (lookahead == 'm') ADVANCE(812);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_stx_DASHtransfer_QMARK);
      END_STATE();
    case 778:
      if (lookahead == 'b') ADVANCE(813);
      END_STATE();
    case 779:
      if (lookahead == 'n') ADVANCE(814);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_bit_DASHshift_DASHleft);
      END_STATE();
    case 781:
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_buff_DASHto_DASHint_DASHbe);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_buff_DASHto_DASHint_DASHle);
      END_STATE();
    case 784:
      if (lookahead == 'e') ADVANCE(816);
      END_STATE();
    case 785:
      if (lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 786:
      if (lookahead == 'g') ADVANCE(818);
      END_STATE();
    case 787:
      if (lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_contract_DASHcall_QMARK);
      END_STATE();
    case 789:
      if (lookahead == 'r') ADVANCE(820);
      END_STATE();
    case 790:
      if (lookahead == 't') ADVANCE(821);
      END_STATE();
    case 791:
      if (lookahead == 'r') ADVANCE(822);
      END_STATE();
    case 792:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 793:
      if (lookahead == 'g') ADVANCE(824);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_define_DASHprivate);
      END_STATE();
    case 795:
      if (lookahead == 'l') ADVANCE(825);
      END_STATE();
    case 796:
      if (lookahead == '-') ADVANCE(826);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_ft_DASHget_DASHbalance);
      END_STATE();
    case 798:
      if (lookahead == '?') ADVANCE(827);
      END_STATE();
    case 799:
      if (lookahead == '-') ADVANCE(828);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_id_DASHheader_DASHhash);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(829);
      END_STATE();
    case 802:
      if (lookahead == 'n') ADVANCE(830);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_nft_DASHget_DASHowner_QMARK);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(831);
      END_STATE();
    case 805:
      if (lookahead == 'r') ADVANCE(832);
      END_STATE();
    case 806:
      if (lookahead == 'v') ADVANCE(833);
      END_STATE();
    case 807:
      if (lookahead == 'f') ADVANCE(834);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_string_DASHto_DASHint_QMARK);
      END_STATE();
    case 809:
      if (lookahead == '?') ADVANCE(835);
      END_STATE();
    case 810:
      if (lookahead == 'e') ADVANCE(836);
      END_STATE();
    case 811:
      if (lookahead == 'p') ADVANCE(837);
      END_STATE();
    case 812:
      if (lookahead == 'e') ADVANCE(838);
      END_STATE();
    case 813:
      if (lookahead == 'u') ADVANCE(839);
      END_STATE();
    case 814:
      if (lookahead == 'i') ADVANCE(840);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_bit_DASHshift_DASHright);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_buff_DASHto_DASHuint_DASHbe);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_buff_DASHto_DASHuint_DASHle);
      END_STATE();
    case 818:
      if (lookahead == 'h') ADVANCE(841);
      END_STATE();
    case 819:
      if (lookahead == 'r') ADVANCE(842);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_contract_DASHcaller);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_define_DASHconstant);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_define_DASHdata_DASHvar);
      END_STATE();
    case 823:
      if (lookahead == '-') ADVANCE(843);
      END_STATE();
    case 824:
      if (lookahead == 'i') ADVANCE(844);
      END_STATE();
    case 825:
      if (lookahead == 'y') ADVANCE(845);
      END_STATE();
    case 826:
      if (lookahead == 'b') ADVANCE(846);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_get_DASHblock_DASHinfo_QMARK);
      END_STATE();
    case 828:
      if (lookahead == 'i') ADVANCE(847);
      END_STATE();
    case 829:
      if (lookahead == 'a') ADVANCE(848);
      END_STATE();
    case 830:
      if (lookahead == 'n') ADVANCE(849);
      END_STATE();
    case 831:
      if (lookahead == 'r') ADVANCE(850);
      END_STATE();
    case 832:
      if (lookahead == 'u') ADVANCE(851);
      END_STATE();
    case 833:
      if (lookahead == 'e') ADVANCE(852);
      END_STATE();
    case 834:
      if (lookahead == 'y') ADVANCE(853);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_string_DASHto_DASHuint_QMARK);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_stx_DASHget_DASHbalance);
      END_STATE();
    case 837:
      if (lookahead == 'l') ADVANCE(854);
      END_STATE();
    case 838:
      if (lookahead == 'm') ADVANCE(855);
      END_STATE();
    case 839:
      if (lookahead == 'f') ADVANCE(856);
      END_STATE();
    case 840:
      if (lookahead == 'c') ADVANCE(857);
      END_STATE();
    case 841:
      if (lookahead == 't') ADVANCE(858);
      END_STATE();
    case 842:
      if (lookahead == '-') ADVANCE(859);
      END_STATE();
    case 843:
      if (lookahead == 't') ADVANCE(860);
      END_STATE();
    case 844:
      if (lookahead == 'b') ADVANCE(861);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_define_DASHread_DASHonly);
      END_STATE();
    case 846:
      if (lookahead == 'u') ADVANCE(862);
      END_STATE();
    case 847:
      if (lookahead == 'n') ADVANCE(863);
      END_STATE();
    case 848:
      if (lookahead == 'l') ADVANCE(864);
      END_STATE();
    case 849:
      if (lookahead == 'e') ADVANCE(865);
      END_STATE();
    case 850:
      if (lookahead == 'u') ADVANCE(866);
      END_STATE();
    case 851:
      if (lookahead == 'c') ADVANCE(867);
      END_STATE();
    case 852:
      if (lookahead == 'r') ADVANCE(868);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_secp256k1_DASHverify);
      END_STATE();
    case 854:
      if (lookahead == 'y') ADVANCE(869);
      END_STATE();
    case 855:
      if (lookahead == 'o') ADVANCE(870);
      END_STATE();
    case 856:
      if (lookahead == 'f') ADVANCE(871);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_unwrap_DASHerr_DASHpanic);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_burn_DASHblock_DASHheight);
      END_STATE();
    case 859:
      if (lookahead == 'h') ADVANCE(872);
      END_STATE();
    case 860:
      if (lookahead == 'o') ADVANCE(873);
      END_STATE();
    case 861:
      if (lookahead == 'l') ADVANCE(874);
      END_STATE();
    case 862:
      if (lookahead == 'f') ADVANCE(875);
      END_STATE();
    case 863:
      if (lookahead == 'f') ADVANCE(876);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_miner_DASHspend_DASHtotal);
      END_STATE();
    case 865:
      if (lookahead == 'r') ADVANCE(877);
      END_STATE();
    case 866:
      if (lookahead == 'c') ADVANCE(878);
      END_STATE();
    case 867:
      if (lookahead == 't') ADVANCE(879);
      END_STATE();
    case 868:
      if (lookahead == '?') ADVANCE(880);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_stx_DASHliquid_DASHsupply);
      END_STATE();
    case 870:
      if (lookahead == '?') ADVANCE(881);
      END_STATE();
    case 871:
      if (lookahead == '?') ADVANCE(882);
      END_STATE();
    case 872:
      if (lookahead == 'a') ADVANCE(883);
      END_STATE();
    case 873:
      if (lookahead == 'k') ADVANCE(884);
      END_STATE();
    case 874:
      if (lookahead == 'e') ADVANCE(885);
      END_STATE();
    case 875:
      if (lookahead == 'f') ADVANCE(886);
      END_STATE();
    case 876:
      if (lookahead == 'o') ADVANCE(887);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_miner_DASHspend_DASHwinner);
      END_STATE();
    case 878:
      if (lookahead == 't') ADVANCE(888);
      END_STATE();
    case 879:
      if (lookahead == '?') ADVANCE(889);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_secp256k1_DASHrecover_QMARK);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_stx_DASHtransfer_DASHmemo_QMARK);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_to_DASHconsensus_DASHbuff_QMARK);
      END_STATE();
    case 883:
      if (lookahead == 's') ADVANCE(890);
      END_STATE();
    case 884:
      if (lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 885:
      if (lookahead == '-') ADVANCE(892);
      END_STATE();
    case 886:
      if (lookahead == '?') ADVANCE(893);
      END_STATE();
    case 887:
      if (lookahead == '?') ADVANCE(894);
      END_STATE();
    case 888:
      if (lookahead == '?') ADVANCE(895);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_principal_DASHdestruct_QMARK);
      END_STATE();
    case 890:
      if (lookahead == 'h') ADVANCE(896);
      END_STATE();
    case 891:
      if (lookahead == 'n') ADVANCE(897);
      END_STATE();
    case 892:
      if (lookahead == 't') ADVANCE(898);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_from_DASHconsensus_DASHbuff_QMARK);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_get_DASHburn_DASHblock_DASHinfo_QMARK);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_principal_DASHconstruct_QMARK);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_burnchain_DASHheader_DASHhash);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_define_DASHfungible_DASHtoken);
      END_STATE();
    case 898:
      if (lookahead == 'o') ADVANCE(899);
      END_STATE();
    case 899:
      if (lookahead == 'k') ADVANCE(900);
      END_STATE();
    case 900:
      if (lookahead == 'e') ADVANCE(901);
      END_STATE();
    case 901:
      if (lookahead == 'n') ADVANCE(902);
      END_STATE();
    case 902:
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
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
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
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 15},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 10},
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
    [anon_sym_chain_id] = ACTIONS(1),
    [anon_sym_contract_DASHcaller] = ACTIONS(1),
    [anon_sym_is_DASHin_mainnet] = ACTIONS(1),
    [anon_sym_is_DASHin_DASHregtest] = ACTIONS(1),
    [anon_sym_stx_DASHliquid_DASHsupply] = ACTIONS(1),
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
    [sym_source] = STATE(157),
    [sym__expression] = STATE(66),
    [sym__function_call] = STATE(66),
    [sym_trait_definition] = STATE(66),
    [sym_trait_implementation] = STATE(66),
    [sym_trait_usage] = STATE(66),
    [sym_token_definition] = STATE(66),
    [sym_fungible_token_definition] = STATE(120),
    [sym_non_fungible_token_definition] = STATE(120),
    [sym_constant_definition] = STATE(66),
    [sym_variable_definition] = STATE(66),
    [sym_mapping_definition] = STATE(66),
    [sym_function_definition] = STATE(66),
    [sym_private_function] = STATE(126),
    [sym_read_only_function] = STATE(126),
    [sym_public_function] = STATE(126),
    [sym__native_function_call] = STATE(66),
    [sym_basic_native_form] = STATE(66),
    [sym_contract_function_call] = STATE(66),
    [sym_let_expression] = STATE(66),
    [aux_sym_source_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_native_identifier] = STATE(7),
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
    [sym_list_lit_token] = STATE(9),
    [sym_native_identifier] = STATE(7),
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
    [sym_native_identifier] = STATE(7),
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
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(10), 18,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [87] = 16,
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
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(71), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [174] = 16,
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
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(6), 18,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [261] = 16,
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
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
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
    ACTIONS(118), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [348] = 16,
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
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(121), 3,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [435] = 16,
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
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(71), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [522] = 16,
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
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(71), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [609] = 17,
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
    STATE(13), 1,
      aux_sym_let_expression_repeat2,
    STATE(48), 1,
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
    STATE(164), 12,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [697] = 17,
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
    STATE(35), 1,
      aux_sym_let_expression_repeat2,
    STATE(48), 1,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [785] = 17,
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
    STATE(15), 1,
      aux_sym_let_expression_repeat2,
    STATE(48), 1,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [873] = 17,
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
    STATE(48), 1,
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
    STATE(191), 12,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [961] = 15,
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
    STATE(48), 1,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [1044] = 15,
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
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(147), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(203), 17,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [1127] = 15,
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
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(151), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(192), 17,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [1210] = 15,
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
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(155), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(149), 17,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [1293] = 15,
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
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(159), 3,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    STATE(147), 17,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [1376] = 15,
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
    STATE(48), 1,
      sym_standard_principal_lit,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 3,
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
    ACTIONS(69), 19,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
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
  [1459] = 3,
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
    ACTIONS(167), 29,
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
  [1508] = 3,
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
    ACTIONS(171), 29,
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
  [1557] = 3,
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
    ACTIONS(175), 29,
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
  [1606] = 3,
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
    ACTIONS(179), 29,
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
  [1655] = 3,
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
    ACTIONS(183), 29,
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
  [1704] = 3,
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
    ACTIONS(187), 29,
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
  [1753] = 3,
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
    ACTIONS(191), 29,
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
  [1802] = 3,
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
    ACTIONS(195), 29,
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
  [1851] = 3,
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
    ACTIONS(199), 29,
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
  [1900] = 3,
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
    ACTIONS(203), 29,
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
  [1949] = 3,
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
    ACTIONS(207), 29,
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
  [1998] = 3,
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
    ACTIONS(211), 29,
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
  [2047] = 3,
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
    ACTIONS(215), 29,
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
  [2096] = 5,
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
    ACTIONS(219), 25,
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
  [2147] = 3,
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
    ACTIONS(228), 25,
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
  [2192] = 3,
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
    ACTIONS(232), 25,
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
  [2237] = 3,
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
    ACTIONS(236), 25,
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
  [2282] = 3,
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
    ACTIONS(240), 25,
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
  [2327] = 3,
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
    ACTIONS(244), 25,
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
  [2372] = 3,
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
    ACTIONS(248), 25,
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
  [2417] = 3,
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
    ACTIONS(252), 25,
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
  [2462] = 3,
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
    ACTIONS(254), 25,
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
  [2506] = 3,
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
    ACTIONS(258), 25,
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
  [2550] = 3,
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
    ACTIONS(262), 25,
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
  [2594] = 3,
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
    ACTIONS(266), 25,
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
  [2638] = 3,
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
    ACTIONS(270), 25,
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
  [2682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(276), 10,
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
    ACTIONS(274), 25,
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
  [2728] = 3,
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
    ACTIONS(280), 25,
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
  [2772] = 3,
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
    ACTIONS(284), 25,
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
    ACTIONS(288), 25,
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
  [2860] = 3,
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
    ACTIONS(292), 25,
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
  [2904] = 3,
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
    ACTIONS(296), 25,
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
  [2948] = 3,
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
    ACTIONS(300), 25,
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
  [2992] = 3,
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
    ACTIONS(304), 25,
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
  [3036] = 3,
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
    ACTIONS(308), 25,
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
  [3080] = 3,
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
    ACTIONS(312), 25,
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
  [3124] = 3,
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
    ACTIONS(316), 25,
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
  [3168] = 3,
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
    ACTIONS(320), 25,
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
  [3212] = 3,
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
    ACTIONS(324), 25,
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
  [3256] = 3,
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
    ACTIONS(328), 25,
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
  [3300] = 3,
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
    ACTIONS(332), 25,
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
  [3342] = 3,
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
    ACTIONS(336), 25,
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
  [3384] = 4,
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
    ACTIONS(340), 25,
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
  [3428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(120), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(126), 3,
      sym_private_function,
      sym_read_only_function,
      sym_public_function,
    STATE(65), 15,
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
  [3464] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    STATE(120), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(126), 3,
      sym_private_function,
      sym_read_only_function,
      sym_public_function,
    STATE(65), 15,
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
  [3500] = 9,
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
    STATE(83), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3540] = 9,
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
    STATE(83), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3580] = 9,
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
    STATE(83), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(373), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3620] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_parameter_type,
    STATE(83), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3656] = 8,
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
    STATE(83), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3692] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3721] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3750] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3779] = 6,
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
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3808] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_native_type,
    STATE(82), 1,
      sym_tuple_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [3839] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(190), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3868] = 6,
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
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3897] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3926] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym_native_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3955] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(205), 1,
      sym_native_type,
    STATE(206), 1,
      sym_tuple_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [3986] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(205), 1,
      sym_native_type,
    STATE(206), 1,
      sym_tuple_type,
    ACTIONS(359), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [4017] = 2,
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
  [4031] = 2,
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
  [4045] = 8,
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
  [4070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(166), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
  [4084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(153), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
  [4098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(160), 5,
      sym__function_call,
      sym__native_function_call,
      sym_basic_native_form,
      sym_contract_function_call,
      sym_let_expression,
  [4112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [4126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    STATE(151), 1,
      sym_standard_principal_lit,
    STATE(208), 1,
      sym_contract_principal_lit,
  [4142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(93), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [4156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(89), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [4170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(93), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [4184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    STATE(151), 1,
      sym_standard_principal_lit,
    STATE(163), 1,
      sym_contract_principal_lit,
  [4200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(95), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [4214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(98), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [4228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(91), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [4242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(95), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [4256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [4270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(106), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(117), 1,
      sym__tuple_lit_pair,
  [4283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [4296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [4309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_identifier,
    STATE(108), 1,
      aux_sym_tuple_type_repeat1,
    STATE(122), 1,
      sym__tuple_type_pair,
  [4322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [4335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_identifier,
    STATE(103), 1,
      aux_sym_tuple_type_repeat1,
    STATE(136), 1,
      sym__tuple_type_pair,
  [4348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(106), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(168), 1,
      sym__tuple_lit_pair,
  [4361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(100), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(125), 1,
      sym__tuple_lit_pair,
  [4374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(108), 1,
      aux_sym_tuple_type_repeat1,
    STATE(187), 1,
      sym__tuple_type_pair,
  [4387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_function_signature,
  [4413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4429] = 3,
    ACTIONS(463), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      aux_sym_ascii_string_lit_token1,
    ACTIONS(467), 1,
      sym_comment,
  [4439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_function_signature,
  [4449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
  [4459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
  [4469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
  [4503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
  [4513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
  [4539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_function_signature,
  [4557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
  [4575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
  [4617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
  [4635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [4651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      aux_sym_standard_principal_lit_token1,
  [4682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym_identifier,
  [4689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_identifier,
  [4696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_uint,
  [4703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
  [4710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
  [4717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_identifier,
  [4724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
  [4731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_COLON,
  [4738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_DOT,
  [4745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_identifier,
  [4752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
  [4759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
  [4766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      aux_sym_buffer_lit_token1,
  [4773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
  [4780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
  [4787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
  [4794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
  [4801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [4808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym_identifier,
  [4815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_DQUOTE,
  [4822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_DOT,
  [4829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
  [4836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym_identifier,
  [4843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
  [4850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
  [4857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_COMMA,
  [4864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym_identifier,
  [4871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
  [4878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      sym_identifier,
  [4885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
  [4892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
  [4899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_identifier,
  [4906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_identifier,
  [4913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
  [4920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
  [4927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_LPAREN,
  [4934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      aux_sym_buffer_type_token1,
  [4941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      aux_sym_buffer_type_token1,
  [4948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      aux_sym_buffer_type_token1,
  [4955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
  [4962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
  [4969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      aux_sym_buffer_type_token1,
  [4976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym_identifier,
  [4983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      aux_sym_buffer_type_token1,
  [4990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_COMMA,
  [4997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
  [5004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_identifier,
  [5011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
  [5018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
  [5025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
  [5032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
  [5039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_COLON,
  [5046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
  [5053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_GT,
  [5060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
  [5067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
  [5074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [5081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
  [5088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
  [5095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
  [5102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
  [5109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
  [5116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
  [5123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
  [5130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_identifier,
  [5137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_DOT,
  [5144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
  [5151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
  [5158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_identifier,
  [5165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 174,
  [SMALL_STATE(8)] = 261,
  [SMALL_STATE(9)] = 348,
  [SMALL_STATE(10)] = 435,
  [SMALL_STATE(11)] = 522,
  [SMALL_STATE(12)] = 609,
  [SMALL_STATE(13)] = 697,
  [SMALL_STATE(14)] = 785,
  [SMALL_STATE(15)] = 873,
  [SMALL_STATE(16)] = 961,
  [SMALL_STATE(17)] = 1044,
  [SMALL_STATE(18)] = 1127,
  [SMALL_STATE(19)] = 1210,
  [SMALL_STATE(20)] = 1293,
  [SMALL_STATE(21)] = 1376,
  [SMALL_STATE(22)] = 1459,
  [SMALL_STATE(23)] = 1508,
  [SMALL_STATE(24)] = 1557,
  [SMALL_STATE(25)] = 1606,
  [SMALL_STATE(26)] = 1655,
  [SMALL_STATE(27)] = 1704,
  [SMALL_STATE(28)] = 1753,
  [SMALL_STATE(29)] = 1802,
  [SMALL_STATE(30)] = 1851,
  [SMALL_STATE(31)] = 1900,
  [SMALL_STATE(32)] = 1949,
  [SMALL_STATE(33)] = 1998,
  [SMALL_STATE(34)] = 2047,
  [SMALL_STATE(35)] = 2096,
  [SMALL_STATE(36)] = 2147,
  [SMALL_STATE(37)] = 2192,
  [SMALL_STATE(38)] = 2237,
  [SMALL_STATE(39)] = 2282,
  [SMALL_STATE(40)] = 2327,
  [SMALL_STATE(41)] = 2372,
  [SMALL_STATE(42)] = 2417,
  [SMALL_STATE(43)] = 2462,
  [SMALL_STATE(44)] = 2506,
  [SMALL_STATE(45)] = 2550,
  [SMALL_STATE(46)] = 2594,
  [SMALL_STATE(47)] = 2638,
  [SMALL_STATE(48)] = 2682,
  [SMALL_STATE(49)] = 2728,
  [SMALL_STATE(50)] = 2772,
  [SMALL_STATE(51)] = 2816,
  [SMALL_STATE(52)] = 2860,
  [SMALL_STATE(53)] = 2904,
  [SMALL_STATE(54)] = 2948,
  [SMALL_STATE(55)] = 2992,
  [SMALL_STATE(56)] = 3036,
  [SMALL_STATE(57)] = 3080,
  [SMALL_STATE(58)] = 3124,
  [SMALL_STATE(59)] = 3168,
  [SMALL_STATE(60)] = 3212,
  [SMALL_STATE(61)] = 3256,
  [SMALL_STATE(62)] = 3300,
  [SMALL_STATE(63)] = 3342,
  [SMALL_STATE(64)] = 3384,
  [SMALL_STATE(65)] = 3428,
  [SMALL_STATE(66)] = 3464,
  [SMALL_STATE(67)] = 3500,
  [SMALL_STATE(68)] = 3540,
  [SMALL_STATE(69)] = 3580,
  [SMALL_STATE(70)] = 3620,
  [SMALL_STATE(71)] = 3656,
  [SMALL_STATE(72)] = 3692,
  [SMALL_STATE(73)] = 3721,
  [SMALL_STATE(74)] = 3750,
  [SMALL_STATE(75)] = 3779,
  [SMALL_STATE(76)] = 3808,
  [SMALL_STATE(77)] = 3839,
  [SMALL_STATE(78)] = 3868,
  [SMALL_STATE(79)] = 3897,
  [SMALL_STATE(80)] = 3926,
  [SMALL_STATE(81)] = 3955,
  [SMALL_STATE(82)] = 3986,
  [SMALL_STATE(83)] = 4017,
  [SMALL_STATE(84)] = 4031,
  [SMALL_STATE(85)] = 4045,
  [SMALL_STATE(86)] = 4070,
  [SMALL_STATE(87)] = 4084,
  [SMALL_STATE(88)] = 4098,
  [SMALL_STATE(89)] = 4112,
  [SMALL_STATE(90)] = 4126,
  [SMALL_STATE(91)] = 4142,
  [SMALL_STATE(92)] = 4156,
  [SMALL_STATE(93)] = 4170,
  [SMALL_STATE(94)] = 4184,
  [SMALL_STATE(95)] = 4200,
  [SMALL_STATE(96)] = 4214,
  [SMALL_STATE(97)] = 4228,
  [SMALL_STATE(98)] = 4242,
  [SMALL_STATE(99)] = 4256,
  [SMALL_STATE(100)] = 4270,
  [SMALL_STATE(101)] = 4283,
  [SMALL_STATE(102)] = 4296,
  [SMALL_STATE(103)] = 4309,
  [SMALL_STATE(104)] = 4322,
  [SMALL_STATE(105)] = 4335,
  [SMALL_STATE(106)] = 4348,
  [SMALL_STATE(107)] = 4361,
  [SMALL_STATE(108)] = 4374,
  [SMALL_STATE(109)] = 4387,
  [SMALL_STATE(110)] = 4395,
  [SMALL_STATE(111)] = 4403,
  [SMALL_STATE(112)] = 4413,
  [SMALL_STATE(113)] = 4421,
  [SMALL_STATE(114)] = 4429,
  [SMALL_STATE(115)] = 4439,
  [SMALL_STATE(116)] = 4449,
  [SMALL_STATE(117)] = 4459,
  [SMALL_STATE(118)] = 4469,
  [SMALL_STATE(119)] = 4477,
  [SMALL_STATE(120)] = 4485,
  [SMALL_STATE(121)] = 4493,
  [SMALL_STATE(122)] = 4503,
  [SMALL_STATE(123)] = 4513,
  [SMALL_STATE(124)] = 4521,
  [SMALL_STATE(125)] = 4529,
  [SMALL_STATE(126)] = 4539,
  [SMALL_STATE(127)] = 4547,
  [SMALL_STATE(128)] = 4557,
  [SMALL_STATE(129)] = 4565,
  [SMALL_STATE(130)] = 4575,
  [SMALL_STATE(131)] = 4583,
  [SMALL_STATE(132)] = 4591,
  [SMALL_STATE(133)] = 4599,
  [SMALL_STATE(134)] = 4607,
  [SMALL_STATE(135)] = 4617,
  [SMALL_STATE(136)] = 4625,
  [SMALL_STATE(137)] = 4635,
  [SMALL_STATE(138)] = 4643,
  [SMALL_STATE(139)] = 4651,
  [SMALL_STATE(140)] = 4659,
  [SMALL_STATE(141)] = 4667,
  [SMALL_STATE(142)] = 4675,
  [SMALL_STATE(143)] = 4682,
  [SMALL_STATE(144)] = 4689,
  [SMALL_STATE(145)] = 4696,
  [SMALL_STATE(146)] = 4703,
  [SMALL_STATE(147)] = 4710,
  [SMALL_STATE(148)] = 4717,
  [SMALL_STATE(149)] = 4724,
  [SMALL_STATE(150)] = 4731,
  [SMALL_STATE(151)] = 4738,
  [SMALL_STATE(152)] = 4745,
  [SMALL_STATE(153)] = 4752,
  [SMALL_STATE(154)] = 4759,
  [SMALL_STATE(155)] = 4766,
  [SMALL_STATE(156)] = 4773,
  [SMALL_STATE(157)] = 4780,
  [SMALL_STATE(158)] = 4787,
  [SMALL_STATE(159)] = 4794,
  [SMALL_STATE(160)] = 4801,
  [SMALL_STATE(161)] = 4808,
  [SMALL_STATE(162)] = 4815,
  [SMALL_STATE(163)] = 4822,
  [SMALL_STATE(164)] = 4829,
  [SMALL_STATE(165)] = 4836,
  [SMALL_STATE(166)] = 4843,
  [SMALL_STATE(167)] = 4850,
  [SMALL_STATE(168)] = 4857,
  [SMALL_STATE(169)] = 4864,
  [SMALL_STATE(170)] = 4871,
  [SMALL_STATE(171)] = 4878,
  [SMALL_STATE(172)] = 4885,
  [SMALL_STATE(173)] = 4892,
  [SMALL_STATE(174)] = 4899,
  [SMALL_STATE(175)] = 4906,
  [SMALL_STATE(176)] = 4913,
  [SMALL_STATE(177)] = 4920,
  [SMALL_STATE(178)] = 4927,
  [SMALL_STATE(179)] = 4934,
  [SMALL_STATE(180)] = 4941,
  [SMALL_STATE(181)] = 4948,
  [SMALL_STATE(182)] = 4955,
  [SMALL_STATE(183)] = 4962,
  [SMALL_STATE(184)] = 4969,
  [SMALL_STATE(185)] = 4976,
  [SMALL_STATE(186)] = 4983,
  [SMALL_STATE(187)] = 4990,
  [SMALL_STATE(188)] = 4997,
  [SMALL_STATE(189)] = 5004,
  [SMALL_STATE(190)] = 5011,
  [SMALL_STATE(191)] = 5018,
  [SMALL_STATE(192)] = 5025,
  [SMALL_STATE(193)] = 5032,
  [SMALL_STATE(194)] = 5039,
  [SMALL_STATE(195)] = 5046,
  [SMALL_STATE(196)] = 5053,
  [SMALL_STATE(197)] = 5060,
  [SMALL_STATE(198)] = 5067,
  [SMALL_STATE(199)] = 5074,
  [SMALL_STATE(200)] = 5081,
  [SMALL_STATE(201)] = 5088,
  [SMALL_STATE(202)] = 5095,
  [SMALL_STATE(203)] = 5102,
  [SMALL_STATE(204)] = 5109,
  [SMALL_STATE(205)] = 5116,
  [SMALL_STATE(206)] = 5123,
  [SMALL_STATE(207)] = 5130,
  [SMALL_STATE(208)] = 5137,
  [SMALL_STATE(209)] = 5144,
  [SMALL_STATE(210)] = 5151,
  [SMALL_STATE(211)] = 5158,
  [SMALL_STATE(212)] = 5165,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_native_form_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3, 0, 7),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3, 0, 7),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_native_type, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_type, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5, 0, 15),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5, 0, 15),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_type, 5, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 5, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_type, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_type, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_type, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_type, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_type, 4, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_type, 4, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 4, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 4, 0, 13),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 4, 0, 13),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, 0, 7),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, 0, 7),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, 0, 15),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, 0, 15),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_type, 5, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_type, 5, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0), SHIFT_REPEAT(4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_function_call, 3, 0, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_function_call, 3, 0, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_native_form, 4, 0, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_native_form, 4, 0, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_function_call, 4, 0, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_function_call, 4, 0, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_native_form, 3, 0, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_native_form, 3, 0, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 8, 0, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 8, 0, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 7, 0, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 7, 0, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 6, 0, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 6, 0, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, 0, 11),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, 0, 11),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, 0, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, 0, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 4, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_lit, 4, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_lit, 4, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_some_lit, 4, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_some_lit, 4, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_lit, 2, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_lit, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 2, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 2, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 3, 0, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 3, 0, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 5, 0, 11),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 5, 0, 11),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_principal_lit, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_principal_lit, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 3, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit_token, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit_token, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_native_identifier, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_identifier, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_expression_repeat2, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_type, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2, 0, 0),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, 0, 8), SHIFT_REPEAT(211),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, 0, 8),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, 0, 4), SHIFT_REPEAT(150),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, 0, 8), SHIFT_REPEAT(194),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_private_function, 5, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 7, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_read_only_function, 5, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_public_function, 5, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, 0, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 6, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_implementation, 6, 0, 5),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_definition, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, 0, 6),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_definition, 6, 0, 9),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 1, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_lit_pair, 3, 0, 10),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fungible_token_definition, 4, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 7, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_usage, 7, 0, 12),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_type_pair, 3, 0, 14),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_binding, 4, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_fungible_token_definition, 5, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 4, 0, 16),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 6, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 4, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [559] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 3, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
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
