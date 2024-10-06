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
#define STATE_COUNT 593
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 431
#define ALIAS_COUNT 0
#define TOKEN_COUNT 284
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 21

enum ts_symbol_identifiers {
  aux_sym_config_token1 = 1,
  anon_sym_default_DASHrecipient = 2,
  anon_sym_default_DASHrecipient_DASHself = 3,
  anon_sym_no_DASHdefault_DASHrecipient = 4,
  anon_sym_verbose = 5,
  anon_sym_no_DASHtty = 6,
  anon_sym_enable_DASHlarge_DASHrsa = 7,
  anon_sym_disable_DASHlarge_DASHrsa = 8,
  anon_sym_enable_DASHdsa2 = 9,
  anon_sym_disable_DASHdsa2 = 10,
  anon_sym_no_DASHcompress = 11,
  anon_sym_bzip2_DASHdecompress_DASHlowmem = 12,
  anon_sym_mangle_DASHdos_DASHfilenames = 13,
  anon_sym_no_DASHmangle_DASHdos_DASHfilenames = 14,
  anon_sym_ask_DASHcert_DASHlevel = 15,
  anon_sym_no_DASHask_DASHcert_DASHlevel = 16,
  anon_sym_always_DASHtrust = 17,
  anon_sym_no_DASHauto_DASHkey_DASHlocate = 18,
  anon_sym_auto_DASHkey_DASHimport = 19,
  anon_sym_no_DASHauto_DASHkey_DASHimport = 20,
  anon_sym_auto_DASHkey_DASHretrieve = 21,
  anon_sym_no_DASHauto_DASHkey_DASHretrieve = 22,
  anon_sym_no_DASHsig_DASHcache = 23,
  anon_sym_auto_DASHcheck_DASHtrustdb = 24,
  anon_sym_no_DASHauto_DASHcheck_DASHtrustdb = 25,
  anon_sym_disable_DASHdirmngr = 26,
  anon_sym_no_DASHautostart = 27,
  anon_sym_lock_DASHonce = 28,
  anon_sym_lock_DASHmultiple = 29,
  anon_sym_lock_DASHnever = 30,
  anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror = 31,
  anon_sym_no_DASHrandom_DASHseed_DASHfile = 32,
  anon_sym_no_DASHgreeting = 33,
  anon_sym_no_DASHsecmem_DASHwarning = 34,
  anon_sym_no_DASHpermission_DASHwarning = 35,
  anon_sym_require_DASHsecmem = 36,
  anon_sym_no_DASHrequire_DASHsecmem = 37,
  anon_sym_require_DASHcross_DASHverification = 38,
  anon_sym_no_DASHrequire_DASHcross_DASHverification = 39,
  anon_sym_expert = 40,
  anon_sym_no_DASHexpert = 41,
  anon_sym_no_DASHencrypt_DASHto = 42,
  anon_sym_no_DASHgroups = 43,
  anon_sym_try_DASHall_DASHsecrets = 44,
  anon_sym_skip_DASHhidden_DASHrecipients = 45,
  anon_sym_no_DASHskip_DASHhidden_DASHrecipients = 46,
  anon_sym_armor = 47,
  anon_sym_no_DASHarmor = 48,
  anon_sym_with_DASHcolons = 49,
  anon_sym_legacy_DASHlist_DASHmode = 50,
  anon_sym_with_DASHfingerprint = 51,
  anon_sym_with_DASHsubkey_DASHfingerprint = 52,
  anon_sym_with_DASHicao_DASHspelling = 53,
  anon_sym_with_DASHkeygrip = 54,
  anon_sym_with_DASHkey_DASHorigin = 55,
  anon_sym_with_DASHwkd_DASHhash = 56,
  anon_sym_with_DASHsecret = 57,
  anon_sym_textmode = 58,
  anon_sym_no_DASHtextmode = 59,
  anon_sym_force_DASHocb = 60,
  anon_sym_force_DASHaead = 61,
  anon_sym_disable_DASHsigner_DASHuid = 62,
  anon_sym_include_DASHkey_DASHblock = 63,
  anon_sym_no_DASHinclude_DASHkey_DASHblock = 64,
  anon_sym_gnupg = 65,
  anon_sym_openpgp = 66,
  anon_sym_rfc4880 = 67,
  anon_sym_rfc4880bis = 68,
  anon_sym_rfc2440 = 69,
  anon_sym_pgp7 = 70,
  anon_sym_pgp8 = 71,
  anon_sym_list_DASHonly = 72,
  anon_sym_interactive = 73,
  anon_sym_debug_DASHall = 74,
  anon_sym_debug_DASHiolbf = 75,
  anon_sym_debug_DASHallow_DASHlarge_DASHchunks = 76,
  anon_sym_debug_DASHignore_DASHexpiration = 77,
  anon_sym_full_DASHtimestrings = 78,
  anon_sym_enable_DASHprogress_DASHfilter = 79,
  anon_sym_log_DASHtime = 80,
  anon_sym_no_DASHcomments = 81,
  anon_sym_emit_DASHversion = 82,
  anon_sym_no_DASHemit_DASHversion = 83,
  anon_sym_for_DASHyour_DASHeyes_DASHonly = 84,
  anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly = 85,
  anon_sym_use_DASHembedded_DASHfilename = 86,
  anon_sym_no_DASHuse_DASHembedded_DASHfilename = 87,
  anon_sym_throw_DASHkeyids = 88,
  anon_sym_no_DASHthrow_DASHkeyids = 89,
  anon_sym_not_DASHdash_DASHescaped = 90,
  anon_sym_escape_DASHfrom_DASHlines = 91,
  anon_sym_no_DASHescape_DASHfrom_DASHlines = 92,
  anon_sym_no_DASHsymkey_DASHcache = 93,
  anon_sym_allow_DASHnon_DASHselfsigned_DASHuid = 94,
  anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid = 95,
  anon_sym_allow_DASHfreeform_DASHuid = 96,
  anon_sym_ignore_DASHtime_DASHconflict = 97,
  anon_sym_ignore_DASHvalid_DASHfrom = 98,
  anon_sym_ignore_DASHcrc_DASHerror = 99,
  anon_sym_ignore_DASHmdc_DASHerror = 100,
  anon_sym_allow_DASHold_DASHcipher_DASHalgos = 101,
  anon_sym_allow_DASHweak_DASHdigest_DASHalgos = 102,
  anon_sym_allow_DASHweak_DASHkey_DASHsignatures = 103,
  anon_sym_override_DASHcompliance_DASHcheck = 104,
  anon_sym_no_DASHdefault_DASHkeyring = 105,
  anon_sym_no_DASHkeyring = 106,
  anon_sym_skip_DASHverify = 107,
  anon_sym_with_DASHkey_DASHdata = 108,
  anon_sym_list_DASHsignatures = 109,
  anon_sym_list_DASHsigs = 110,
  anon_sym_fast_DASHlist_DASHmode = 111,
  anon_sym_show_DASHsession_DASHkey = 112,
  anon_sym_ask_DASHsig_DASHexpire = 113,
  anon_sym_no_DASHask_DASHsig_DASHexpire = 114,
  anon_sym_ask_DASHcert_DASHexpire = 115,
  anon_sym_no_DASHask_DASHcert_DASHexpire = 116,
  anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey = 117,
  anon_sym_force_DASHsign_DASHkey = 118,
  anon_sym_forbid_DASHgen_DASHkey = 119,
  anon_sym_enable_DASHspecial_DASHfilenames = 120,
  anon_sym_preserve_DASHpermissions = 121,
  anon_sym_default_DASHkey = 122,
  anon_sym_list_DASHfilter = 123,
  anon_sym_EQ = 124,
  sym__list_filter_name = 125,
  anon_sym_DQUOTE = 126,
  anon_sym_SQUOTE = 127,
  anon_sym_list_DASHoptions = 128,
  anon_sym_COMMA = 129,
  sym__list_parameter = 130,
  anon_sym_verify_DASHoptions = 131,
  sym__verify_parameter = 132,
  anon_sym_photo_DASHviewer = 133,
  aux_sym__command_token1 = 134,
  aux_sym__command_token2 = 135,
  anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE = 136,
  aux_sym__command_token3 = 137,
  aux_sym__command_format_token1 = 138,
  anon_sym_exec_DASHpath = 139,
  anon_sym_keyring = 140,
  anon_sym_primary_DASHkeyring = 141,
  anon_sym_trustdb_DASHname = 142,
  anon_sym_display_DASHcharset = 143,
  sym__charset_value = 144,
  anon_sym_utf8_DASHstrings = 145,
  anon_sym_no_DASHutf8_DASHstrings = 146,
  anon_sym_compress_DASHlevel = 147,
  aux_sym__compress_level_token1 = 148,
  anon_sym_bzip2_DASHcompress_DASHlevel = 149,
  anon_sym_default_DASHcert_DASHlevel = 150,
  aux_sym__default_cert_level_token1 = 151,
  anon_sym_min_DASHcert_DASHlevel = 152,
  anon_sym_trusted_DASHkey = 153,
  anon_sym_add_DASHdesig_DASHrevoker = 154,
  aux_sym__add_desig_revoker_token1 = 155,
  aux_sym__add_desig_revoker_token2 = 156,
  anon_sym_trust_DASHmodel = 157,
  sym__model = 158,
  anon_sym_assert_DASHsigner = 159,
  anon_sym_auto_DASHkey_DASHlocate = 160,
  sym__key_locate_value = 161,
  anon_sym_keyid_DASHformat = 162,
  sym__keyid_format_value = 163,
  anon_sym_keyserver = 164,
  anon_sym_keyserver_DASHoptions = 165,
  anon_sym_no_DASH = 166,
  sym__keyserver_parameter = 167,
  anon_sym_completes_DASHneeded = 168,
  anon_sym_marginals_DASHneeded = 169,
  anon_sym_tofu_DASHdefault_DASHpolicy = 170,
  sym__tofu_policy_value = 171,
  anon_sym_max_DASHcert_DASHdepth = 172,
  anon_sym_agent_DASHprogram = 173,
  anon_sym_dirmngr_DASHprogram = 174,
  anon_sym_limit_DASHcard_DASHinsert_DASHtries = 175,
  anon_sym_recipient = 176,
  anon_sym_hidden_DASHrecipient = 177,
  anon_sym_recipient_DASHfile = 178,
  anon_sym_hidden_DASHrecipient_DASHfile = 179,
  anon_sym_encrypt_DASHto = 180,
  anon_sym_hidden_DASHencrypt_DASHto = 181,
  anon_sym_group = 182,
  aux_sym__group_token1 = 183,
  anon_sym_ungroup = 184,
  anon_sym_local_DASHuser = 185,
  anon_sym_sender = 186,
  anon_sym_try_DASHsecret_DASHname = 187,
  anon_sym_output = 188,
  anon_sym_max_DASHoutput = 189,
  anon_sym_chunk_DASHsize = 190,
  anon_sym_input_DASHsize_DASHhint = 191,
  anon_sym_key_DASHorigin = 192,
  sym__key_origin_value = 193,
  anon_sym_import_DASHoptions = 194,
  sym__import_parameter = 195,
  anon_sym_import_DASHfilter = 196,
  sym__import_filter_name = 197,
  anon_sym_export_DASHfilter = 198,
  sym__export_filter_name = 199,
  anon_sym_export_DASHoptions = 200,
  sym__export_parameter = 201,
  anon_sym_personal_DASHcipher_DASHpreferences = 202,
  anon_sym_personal_DASHdigest_DASHpreferences = 203,
  anon_sym_personal_DASHcompress_DASHpreferences = 204,
  anon_sym_s2k_DASHcipher_DASHalgo = 205,
  anon_sym_s2k_DASHdigest_DASHalgo = 206,
  anon_sym_s2k_DASHmode = 207,
  aux_sym__s2k_mode_token1 = 208,
  anon_sym_s2k_DASHcount = 209,
  anon_sym_compliance = 210,
  sym__compliance_value = 211,
  anon_sym_min_DASHrsa_DASHlength = 212,
  anon_sym_require_DASHcompliance = 213,
  anon_sym_debug_DASHlevel = 214,
  sym__debug_level_value = 215,
  anon_sym_debug = 216,
  aux_sym__debug_token1 = 217,
  sym__debug_flag_value = 218,
  anon_sym_debug_DASHset_DASHiobuf_DASHsize = 219,
  anon_sym_faked_DASHsystem_DASHtime = 220,
  anon_sym_BANG = 221,
  anon_sym_status_DASHfd = 222,
  anon_sym_status_DASHfile = 223,
  anon_sym_logger_DASHfd = 224,
  anon_sym_logger_DASHfile = 225,
  anon_sym_log_DASHfile = 226,
  anon_sym_comment = 227,
  anon_sym_sig_DASHnotation = 228,
  anon_sym_cert_DASHnotation = 229,
  anon_sym_set_DASHnotation = 230,
  aux_sym__notation_token1 = 231,
  aux_sym__notation_format_token1 = 232,
  anon_sym_known_DASHnotation = 233,
  anon_sym_sig_DASHpolicy_DASHurl = 234,
  anon_sym_cert_DASHpolicy_DASHurl = 235,
  anon_sym_set_DASHpolicy_DASHurl = 236,
  anon_sym_sig_DASHkeyserver_DASHurl = 237,
  anon_sym_set_DASHfilename = 238,
  anon_sym_cipher_DASHalgo = 239,
  anon_sym_digest_DASHalgo = 240,
  anon_sym_compress_DASHalgo = 241,
  anon_sym_cert_DASHdigest_DASHalgo = 242,
  anon_sym_disable_DASHcipher_DASHalgo = 243,
  anon_sym_disable_DASHpubkey_DASHalgo = 244,
  anon_sym_passphrase_DASHrepeat = 245,
  anon_sym_passphrase_DASHfd = 246,
  anon_sym_passphrase_DASHfile = 247,
  anon_sym_passphrase = 248,
  anon_sym_pinentry_DASHmode = 249,
  sym__pinentry_mode_value = 250,
  anon_sym_request_DASHorigin = 251,
  sym__request_origin_value = 252,
  anon_sym_command_DASHfd = 253,
  anon_sym_command_DASHfile = 254,
  anon_sym_weak_DASHdigest = 255,
  anon_sym_override_DASHsession_DASHkey = 256,
  anon_sym_override_DASHsession_DASHkey_DASHfd = 257,
  anon_sym_default_DASHsig_DASHexpire = 258,
  anon_sym_default_DASHcert_DASHexpire = 259,
  anon_sym_default_DASHnew_DASHkey_DASHalgo = 260,
  sym__new_key_algo = 261,
  anon_sym_default_DASHpreference_DASHlist = 262,
  anon_sym_default_DASHkeyserver_DASHurl = 263,
  anon_sym_chuid = 264,
  sym_key = 265,
  sym_url = 266,
  sym_number = 267,
  sym_iso_time = 268,
  sym_expire_time = 269,
  aux_sym_string_token1 = 270,
  sym_filter_scope = 271,
  sym_filter_property = 272,
  sym_filter_lc = 273,
  sym_filter_op1 = 274,
  sym_filter_op0 = 275,
  sym_filter_flag = 276,
  aux_sym_filter_value_token1 = 277,
  sym_comment = 278,
  sym__pubkey_algo_value = 279,
  sym__cipher_algo_value = 280,
  sym__hash_algo_value = 281,
  sym__compression_algo_value = 282,
  sym__space = 283,
  sym_config = 284,
  sym_option = 285,
  sym__default_key = 286,
  sym__list_filter = 287,
  sym__filter_expression = 288,
  sym__filter_expression_inner = 289,
  sym__list_options = 290,
  sym__verify_options = 291,
  sym__photo_viewer = 292,
  sym__command = 293,
  sym__command_format = 294,
  sym__exec_path = 295,
  sym__keyring = 296,
  sym__primary_keyring = 297,
  sym__trustdb_name = 298,
  sym__display_charset = 299,
  sym__utf8_strings = 300,
  sym__no_utf8_strings = 301,
  sym__compress_level = 302,
  sym__bzip2_compress_level = 303,
  sym__default_cert_level = 304,
  sym__min_cert_level = 305,
  sym__trusted_key = 306,
  sym__add_desig_revoker = 307,
  sym__trust_model = 308,
  sym__assert_signer = 309,
  sym__auto_key_locate = 310,
  sym__keyid_format = 311,
  sym__keyserver = 312,
  sym__keyserver_options = 313,
  sym__keyserver_set_option = 314,
  sym__completes_needed = 315,
  sym__marginals_needed = 316,
  sym__tofu_default_policy = 317,
  sym__max_cert_depth = 318,
  sym__agent_program = 319,
  sym__dirmngr_program = 320,
  sym__limit_card_insert_tries = 321,
  sym__recipient = 322,
  sym__hidden_recipient = 323,
  sym__recipient_file = 324,
  sym__hidden_recipient_file = 325,
  sym__encrypt_to = 326,
  sym__hidden_encrypt_to = 327,
  sym__group = 328,
  sym__ungroup = 329,
  sym__local_user = 330,
  sym__sender = 331,
  sym__try_secret_name = 332,
  sym__output = 333,
  sym__max_output = 334,
  sym__chunk_size = 335,
  sym__input_size_hint = 336,
  sym__key_origin = 337,
  sym__import_options = 338,
  sym__import_filter = 339,
  sym__export_filter = 340,
  sym__export_options = 341,
  sym__personal_cipher_preferences = 342,
  sym__personal_digest_preferences = 343,
  sym__personal_compress_preferences = 344,
  sym__s2k_cipher_algo = 345,
  sym__s2k_digest_algo = 346,
  sym__s2k_mode = 347,
  sym__s2k_count = 348,
  sym__compliance = 349,
  sym__min_rsa_length = 350,
  sym__require_compliance = 351,
  sym__debug_level = 352,
  sym__debug = 353,
  sym__debug_set_iobuf_size = 354,
  sym__faked_system_time = 355,
  sym__status_fd = 356,
  sym__status_file = 357,
  sym__logger_fd = 358,
  sym__logger_file = 359,
  sym__comment = 360,
  sym__sig_notation = 361,
  sym__cert_notation = 362,
  sym__set_notation = 363,
  aux_sym__notation = 364,
  sym__notation_format = 365,
  sym__known_notation = 366,
  sym__sig_policy_url = 367,
  sym__cert_policy_url = 368,
  sym__set_policy_url = 369,
  sym__sig_keyserver_url = 370,
  sym__set_filename = 371,
  sym__cipher_algo = 372,
  sym__digest_algo = 373,
  sym__compress_algo = 374,
  sym__cert_digest_algo = 375,
  sym__disable_cipher_algo = 376,
  sym__disable_pubkey_algo = 377,
  sym__passphrase_repeat = 378,
  sym__passphrase_fd = 379,
  sym__passphrase_file = 380,
  sym__passphrase = 381,
  sym__pinentry_mode = 382,
  sym__request_origin = 383,
  sym__command_fd = 384,
  sym__command_file = 385,
  sym__weak_digest = 386,
  sym__override_session_key = 387,
  sym__override_session_key_fd = 388,
  sym__default_sig_expire = 389,
  sym__default_cert_expire = 390,
  sym__default_new_key_algo = 391,
  sym__default_preference_list = 392,
  sym__default_preference_value = 393,
  sym__default_keyserver_url = 394,
  sym__chuid = 395,
  sym_string = 396,
  sym_filter_value = 397,
  aux_sym_config_repeat1 = 398,
  aux_sym__filter_expression_inner_repeat1 = 399,
  aux_sym__filter_expression_inner_repeat2 = 400,
  aux_sym__list_options_repeat1 = 401,
  aux_sym__list_options_repeat2 = 402,
  aux_sym__verify_options_repeat1 = 403,
  aux_sym__verify_options_repeat2 = 404,
  aux_sym__command_repeat1 = 405,
  aux_sym__command_repeat2 = 406,
  aux_sym__command_repeat3 = 407,
  aux_sym__auto_key_locate_repeat1 = 408,
  aux_sym__auto_key_locate_repeat2 = 409,
  aux_sym__keyserver_options_repeat1 = 410,
  aux_sym__keyserver_options_repeat2 = 411,
  aux_sym__import_options_repeat1 = 412,
  aux_sym__import_options_repeat2 = 413,
  aux_sym__export_options_repeat1 = 414,
  aux_sym__export_options_repeat2 = 415,
  aux_sym__personal_cipher_preferences_repeat1 = 416,
  aux_sym__personal_cipher_preferences_repeat2 = 417,
  aux_sym__personal_digest_preferences_repeat1 = 418,
  aux_sym__personal_digest_preferences_repeat2 = 419,
  aux_sym__personal_compress_preferences_repeat1 = 420,
  aux_sym__personal_compress_preferences_repeat2 = 421,
  aux_sym__debug_repeat1 = 422,
  aux_sym__debug_repeat2 = 423,
  aux_sym__default_new_key_algo_repeat1 = 424,
  aux_sym__default_new_key_algo_repeat2 = 425,
  aux_sym__default_preference_list_repeat1 = 426,
  aux_sym__default_preference_list_repeat2 = 427,
  aux_sym_string_repeat1 = 428,
  aux_sym_string_repeat2 = 429,
  aux_sym_filter_value_repeat1 = 430,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_config_token1] = "config_token1",
  [anon_sym_default_DASHrecipient] = "default-recipient",
  [anon_sym_default_DASHrecipient_DASHself] = "default-recipient-self",
  [anon_sym_no_DASHdefault_DASHrecipient] = "no-default-recipient",
  [anon_sym_verbose] = "verbose",
  [anon_sym_no_DASHtty] = "no-tty",
  [anon_sym_enable_DASHlarge_DASHrsa] = "enable-large-rsa",
  [anon_sym_disable_DASHlarge_DASHrsa] = "disable-large-rsa",
  [anon_sym_enable_DASHdsa2] = "enable-dsa2",
  [anon_sym_disable_DASHdsa2] = "disable-dsa2",
  [anon_sym_no_DASHcompress] = "no-compress",
  [anon_sym_bzip2_DASHdecompress_DASHlowmem] = "bzip2-decompress-lowmem",
  [anon_sym_mangle_DASHdos_DASHfilenames] = "mangle-dos-filenames",
  [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = "no-mangle-dos-filenames",
  [anon_sym_ask_DASHcert_DASHlevel] = "ask-cert-level",
  [anon_sym_no_DASHask_DASHcert_DASHlevel] = "no-ask-cert-level",
  [anon_sym_always_DASHtrust] = "always-trust",
  [anon_sym_no_DASHauto_DASHkey_DASHlocate] = "no-auto-key-locate",
  [anon_sym_auto_DASHkey_DASHimport] = "auto-key-import",
  [anon_sym_no_DASHauto_DASHkey_DASHimport] = "no-auto-key-import",
  [anon_sym_auto_DASHkey_DASHretrieve] = "auto-key-retrieve",
  [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = "no-auto-key-retrieve",
  [anon_sym_no_DASHsig_DASHcache] = "no-sig-cache",
  [anon_sym_auto_DASHcheck_DASHtrustdb] = "auto-check-trustdb",
  [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = "no-auto-check-trustdb",
  [anon_sym_disable_DASHdirmngr] = "disable-dirmngr",
  [anon_sym_no_DASHautostart] = "no-autostart",
  [anon_sym_lock_DASHonce] = "lock-once",
  [anon_sym_lock_DASHmultiple] = "lock-multiple",
  [anon_sym_lock_DASHnever] = "lock-never",
  [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = "exit-on-status-write-error",
  [anon_sym_no_DASHrandom_DASHseed_DASHfile] = "no-random-seed-file",
  [anon_sym_no_DASHgreeting] = "no-greeting",
  [anon_sym_no_DASHsecmem_DASHwarning] = "no-secmem-warning",
  [anon_sym_no_DASHpermission_DASHwarning] = "no-permission-warning",
  [anon_sym_require_DASHsecmem] = "require-secmem",
  [anon_sym_no_DASHrequire_DASHsecmem] = "no-require-secmem",
  [anon_sym_require_DASHcross_DASHverification] = "require-cross-verification",
  [anon_sym_no_DASHrequire_DASHcross_DASHverification] = "no-require-cross-verification",
  [anon_sym_expert] = "expert",
  [anon_sym_no_DASHexpert] = "no-expert",
  [anon_sym_no_DASHencrypt_DASHto] = "no-encrypt-to",
  [anon_sym_no_DASHgroups] = "no-groups",
  [anon_sym_try_DASHall_DASHsecrets] = "try-all-secrets",
  [anon_sym_skip_DASHhidden_DASHrecipients] = "skip-hidden-recipients",
  [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = "no-skip-hidden-recipients",
  [anon_sym_armor] = "armor",
  [anon_sym_no_DASHarmor] = "no-armor",
  [anon_sym_with_DASHcolons] = "with-colons",
  [anon_sym_legacy_DASHlist_DASHmode] = "legacy-list-mode",
  [anon_sym_with_DASHfingerprint] = "with-fingerprint",
  [anon_sym_with_DASHsubkey_DASHfingerprint] = "with-subkey-fingerprint",
  [anon_sym_with_DASHicao_DASHspelling] = "with-icao-spelling",
  [anon_sym_with_DASHkeygrip] = "with-keygrip",
  [anon_sym_with_DASHkey_DASHorigin] = "with-key-origin",
  [anon_sym_with_DASHwkd_DASHhash] = "with-wkd-hash",
  [anon_sym_with_DASHsecret] = "with-secret",
  [anon_sym_textmode] = "textmode",
  [anon_sym_no_DASHtextmode] = "no-textmode",
  [anon_sym_force_DASHocb] = "force-ocb",
  [anon_sym_force_DASHaead] = "force-aead",
  [anon_sym_disable_DASHsigner_DASHuid] = "disable-signer-uid",
  [anon_sym_include_DASHkey_DASHblock] = "include-key-block",
  [anon_sym_no_DASHinclude_DASHkey_DASHblock] = "no-include-key-block",
  [anon_sym_gnupg] = "gnupg",
  [anon_sym_openpgp] = "openpgp",
  [anon_sym_rfc4880] = "rfc4880",
  [anon_sym_rfc4880bis] = "rfc4880bis",
  [anon_sym_rfc2440] = "rfc2440",
  [anon_sym_pgp7] = "pgp7",
  [anon_sym_pgp8] = "pgp8",
  [anon_sym_list_DASHonly] = "list-only",
  [anon_sym_interactive] = "interactive",
  [anon_sym_debug_DASHall] = "debug-all",
  [anon_sym_debug_DASHiolbf] = "debug-iolbf",
  [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = "debug-allow-large-chunks",
  [anon_sym_debug_DASHignore_DASHexpiration] = "debug-ignore-expiration",
  [anon_sym_full_DASHtimestrings] = "full-timestrings",
  [anon_sym_enable_DASHprogress_DASHfilter] = "enable-progress-filter",
  [anon_sym_log_DASHtime] = "log-time",
  [anon_sym_no_DASHcomments] = "no-comments",
  [anon_sym_emit_DASHversion] = "emit-version",
  [anon_sym_no_DASHemit_DASHversion] = "no-emit-version",
  [anon_sym_for_DASHyour_DASHeyes_DASHonly] = "for-your-eyes-only",
  [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = "no-for-your-eyes-only",
  [anon_sym_use_DASHembedded_DASHfilename] = "use-embedded-filename",
  [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = "no-use-embedded-filename",
  [anon_sym_throw_DASHkeyids] = "throw-keyids",
  [anon_sym_no_DASHthrow_DASHkeyids] = "no-throw-keyids",
  [anon_sym_not_DASHdash_DASHescaped] = "not-dash-escaped",
  [anon_sym_escape_DASHfrom_DASHlines] = "escape-from-lines",
  [anon_sym_no_DASHescape_DASHfrom_DASHlines] = "no-escape-from-lines",
  [anon_sym_no_DASHsymkey_DASHcache] = "no-symkey-cache",
  [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = "allow-non-selfsigned-uid",
  [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = "no-allow-non-selfsigned-uid",
  [anon_sym_allow_DASHfreeform_DASHuid] = "allow-freeform-uid",
  [anon_sym_ignore_DASHtime_DASHconflict] = "ignore-time-conflict",
  [anon_sym_ignore_DASHvalid_DASHfrom] = "ignore-valid-from",
  [anon_sym_ignore_DASHcrc_DASHerror] = "ignore-crc-error",
  [anon_sym_ignore_DASHmdc_DASHerror] = "ignore-mdc-error",
  [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = "allow-old-cipher-algos",
  [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = "allow-weak-digest-algos",
  [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = "allow-weak-key-signatures",
  [anon_sym_override_DASHcompliance_DASHcheck] = "override-compliance-check",
  [anon_sym_no_DASHdefault_DASHkeyring] = "no-default-keyring",
  [anon_sym_no_DASHkeyring] = "no-keyring",
  [anon_sym_skip_DASHverify] = "skip-verify",
  [anon_sym_with_DASHkey_DASHdata] = "with-key-data",
  [anon_sym_list_DASHsignatures] = "list-signatures",
  [anon_sym_list_DASHsigs] = "list-sigs",
  [anon_sym_fast_DASHlist_DASHmode] = "fast-list-mode",
  [anon_sym_show_DASHsession_DASHkey] = "show-session-key",
  [anon_sym_ask_DASHsig_DASHexpire] = "ask-sig-expire",
  [anon_sym_no_DASHask_DASHsig_DASHexpire] = "no-ask-sig-expire",
  [anon_sym_ask_DASHcert_DASHexpire] = "ask-cert-expire",
  [anon_sym_no_DASHask_DASHcert_DASHexpire] = "no-ask-cert-expire",
  [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = "no-auto-trust-new-key",
  [anon_sym_force_DASHsign_DASHkey] = "force-sign-key",
  [anon_sym_forbid_DASHgen_DASHkey] = "forbid-gen-key",
  [anon_sym_enable_DASHspecial_DASHfilenames] = "enable-special-filenames",
  [anon_sym_preserve_DASHpermissions] = "preserve-permissions",
  [anon_sym_default_DASHkey] = "default-key",
  [anon_sym_list_DASHfilter] = "list-filter",
  [anon_sym_EQ] = "=",
  [sym__list_filter_name] = "filter_name",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_list_DASHoptions] = "list-options",
  [anon_sym_COMMA] = ",",
  [sym__list_parameter] = "value",
  [anon_sym_verify_DASHoptions] = "verify-options",
  [sym__verify_parameter] = "value",
  [anon_sym_photo_DASHviewer] = "photo-viewer",
  [aux_sym__command_token1] = "_command_token1",
  [aux_sym__command_token2] = "_command_token2",
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = "\\${q}",
  [aux_sym__command_token3] = "_command_token3",
  [aux_sym__command_format_token1] = "format",
  [anon_sym_exec_DASHpath] = "exec-path",
  [anon_sym_keyring] = "keyring",
  [anon_sym_primary_DASHkeyring] = "primary-keyring",
  [anon_sym_trustdb_DASHname] = "trustdb-name",
  [anon_sym_display_DASHcharset] = "display-charset",
  [sym__charset_value] = "value",
  [anon_sym_utf8_DASHstrings] = "utf8-strings",
  [anon_sym_no_DASHutf8_DASHstrings] = "no-utf8-strings",
  [anon_sym_compress_DASHlevel] = "compress-level",
  [aux_sym__compress_level_token1] = "number",
  [anon_sym_bzip2_DASHcompress_DASHlevel] = "bzip2-compress-level",
  [anon_sym_default_DASHcert_DASHlevel] = "default-cert-level",
  [aux_sym__default_cert_level_token1] = "number",
  [anon_sym_min_DASHcert_DASHlevel] = "min-cert-level",
  [anon_sym_trusted_DASHkey] = "trusted-key",
  [anon_sym_add_DASHdesig_DASHrevoker] = "add-desig-revoker",
  [aux_sym__add_desig_revoker_token1] = "sensitive:",
  [aux_sym__add_desig_revoker_token2] = "clear",
  [anon_sym_trust_DASHmodel] = "trust-model",
  [sym__model] = "value",
  [anon_sym_assert_DASHsigner] = "assert-signer",
  [anon_sym_auto_DASHkey_DASHlocate] = "auto-key-locate",
  [sym__key_locate_value] = "value",
  [anon_sym_keyid_DASHformat] = "keyid-format",
  [sym__keyid_format_value] = "value",
  [anon_sym_keyserver] = "keyserver",
  [anon_sym_keyserver_DASHoptions] = "keyserver-options",
  [anon_sym_no_DASH] = "no-",
  [sym__keyserver_parameter] = "name",
  [anon_sym_completes_DASHneeded] = "completes-needed",
  [anon_sym_marginals_DASHneeded] = "marginals-needed",
  [anon_sym_tofu_DASHdefault_DASHpolicy] = "tofu-default-policy",
  [sym__tofu_policy_value] = "value",
  [anon_sym_max_DASHcert_DASHdepth] = "max-cert-depth",
  [anon_sym_agent_DASHprogram] = "agent-program",
  [anon_sym_dirmngr_DASHprogram] = "dirmngr-program",
  [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = "limit-card-insert-tries",
  [anon_sym_recipient] = "recipient",
  [anon_sym_hidden_DASHrecipient] = "hidden-recipient",
  [anon_sym_recipient_DASHfile] = "recipient-file",
  [anon_sym_hidden_DASHrecipient_DASHfile] = "hidden-recipient-file",
  [anon_sym_encrypt_DASHto] = "encrypt-to",
  [anon_sym_hidden_DASHencrypt_DASHto] = "hidden-encrypt-to",
  [anon_sym_group] = "group",
  [aux_sym__group_token1] = "name",
  [anon_sym_ungroup] = "ungroup",
  [anon_sym_local_DASHuser] = "local-user",
  [anon_sym_sender] = "sender",
  [anon_sym_try_DASHsecret_DASHname] = "try-secret-name",
  [anon_sym_output] = "output",
  [anon_sym_max_DASHoutput] = "max-output",
  [anon_sym_chunk_DASHsize] = "chunk-size",
  [anon_sym_input_DASHsize_DASHhint] = "input-size-hint",
  [anon_sym_key_DASHorigin] = "key-origin",
  [sym__key_origin_value] = "value",
  [anon_sym_import_DASHoptions] = "import-options",
  [sym__import_parameter] = "value",
  [anon_sym_import_DASHfilter] = "import-filter",
  [sym__import_filter_name] = "filter_name",
  [anon_sym_export_DASHfilter] = "export-filter",
  [sym__export_filter_name] = "filter_name",
  [anon_sym_export_DASHoptions] = "export-options",
  [sym__export_parameter] = "value",
  [anon_sym_personal_DASHcipher_DASHpreferences] = "personal-cipher-preferences",
  [anon_sym_personal_DASHdigest_DASHpreferences] = "personal-digest-preferences",
  [anon_sym_personal_DASHcompress_DASHpreferences] = "personal-compress-preferences",
  [anon_sym_s2k_DASHcipher_DASHalgo] = "s2k-cipher-algo",
  [anon_sym_s2k_DASHdigest_DASHalgo] = "s2k-digest-algo",
  [anon_sym_s2k_DASHmode] = "s2k-mode",
  [aux_sym__s2k_mode_token1] = "number",
  [anon_sym_s2k_DASHcount] = "s2k-count",
  [anon_sym_compliance] = "compliance",
  [sym__compliance_value] = "value",
  [anon_sym_min_DASHrsa_DASHlength] = "min-rsa-length",
  [anon_sym_require_DASHcompliance] = "require-compliance",
  [anon_sym_debug_DASHlevel] = "debug-level",
  [sym__debug_level_value] = "value",
  [anon_sym_debug] = "debug",
  [aux_sym__debug_token1] = "number",
  [sym__debug_flag_value] = "value",
  [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = "debug-set-iobuf-size",
  [anon_sym_faked_DASHsystem_DASHtime] = "faked-system-time",
  [anon_sym_BANG] = "!",
  [anon_sym_status_DASHfd] = "status-fd",
  [anon_sym_status_DASHfile] = "status-file",
  [anon_sym_logger_DASHfd] = "logger-fd",
  [anon_sym_logger_DASHfile] = "logger-file",
  [anon_sym_log_DASHfile] = "log-file",
  [anon_sym_comment] = "comment",
  [anon_sym_sig_DASHnotation] = "sig-notation",
  [anon_sym_cert_DASHnotation] = "cert-notation",
  [anon_sym_set_DASHnotation] = "set-notation",
  [aux_sym__notation_token1] = "_notation_token1",
  [aux_sym__notation_format_token1] = "format",
  [anon_sym_known_DASHnotation] = "known-notation",
  [anon_sym_sig_DASHpolicy_DASHurl] = "sig-policy-url",
  [anon_sym_cert_DASHpolicy_DASHurl] = "cert-policy-url",
  [anon_sym_set_DASHpolicy_DASHurl] = "set-policy-url",
  [anon_sym_sig_DASHkeyserver_DASHurl] = "sig-keyserver-url",
  [anon_sym_set_DASHfilename] = "set-filename",
  [anon_sym_cipher_DASHalgo] = "cipher-algo",
  [anon_sym_digest_DASHalgo] = "digest-algo",
  [anon_sym_compress_DASHalgo] = "compress-algo",
  [anon_sym_cert_DASHdigest_DASHalgo] = "cert-digest-algo",
  [anon_sym_disable_DASHcipher_DASHalgo] = "disable-cipher-algo",
  [anon_sym_disable_DASHpubkey_DASHalgo] = "disable-pubkey-algo",
  [anon_sym_passphrase_DASHrepeat] = "passphrase-repeat",
  [anon_sym_passphrase_DASHfd] = "passphrase-fd",
  [anon_sym_passphrase_DASHfile] = "passphrase-file",
  [anon_sym_passphrase] = "passphrase",
  [anon_sym_pinentry_DASHmode] = "pinentry-mode",
  [sym__pinentry_mode_value] = "value",
  [anon_sym_request_DASHorigin] = "request-origin",
  [sym__request_origin_value] = "value",
  [anon_sym_command_DASHfd] = "command-fd",
  [anon_sym_command_DASHfile] = "command-file",
  [anon_sym_weak_DASHdigest] = "weak-digest",
  [anon_sym_override_DASHsession_DASHkey] = "override-session-key",
  [anon_sym_override_DASHsession_DASHkey_DASHfd] = "override-session-key-fd",
  [anon_sym_default_DASHsig_DASHexpire] = "default-sig-expire",
  [anon_sym_default_DASHcert_DASHexpire] = "default-cert-expire",
  [anon_sym_default_DASHnew_DASHkey_DASHalgo] = "default-new-key-algo",
  [sym__new_key_algo] = "value",
  [anon_sym_default_DASHpreference_DASHlist] = "default-preference-list",
  [anon_sym_default_DASHkeyserver_DASHurl] = "default-keyserver-url",
  [anon_sym_chuid] = "chuid",
  [sym_key] = "key",
  [sym_url] = "url",
  [sym_number] = "number",
  [sym_iso_time] = "iso_time",
  [sym_expire_time] = "expire_time",
  [aux_sym_string_token1] = "content",
  [sym_filter_scope] = "filter_scope",
  [sym_filter_property] = "filter_property",
  [sym_filter_lc] = "filter_lc",
  [sym_filter_op1] = "filter_op1",
  [sym_filter_op0] = "filter_op0",
  [sym_filter_flag] = "filter_flag",
  [aux_sym_filter_value_token1] = "filter_value_token1",
  [sym_comment] = "comment",
  [sym__pubkey_algo_value] = "_pubkey_algo_value",
  [sym__cipher_algo_value] = "_cipher_algo_value",
  [sym__hash_algo_value] = "_hash_algo_value",
  [sym__compression_algo_value] = "_compression_algo_value",
  [sym__space] = "_space",
  [sym_config] = "config",
  [sym_option] = "option",
  [sym__default_key] = "_default_key",
  [sym__list_filter] = "_list_filter",
  [sym__filter_expression] = "_filter_expression",
  [sym__filter_expression_inner] = "_filter_expression_inner",
  [sym__list_options] = "_list_options",
  [sym__verify_options] = "_verify_options",
  [sym__photo_viewer] = "_photo_viewer",
  [sym__command] = "string",
  [sym__command_format] = "_command_format",
  [sym__exec_path] = "_exec_path",
  [sym__keyring] = "_keyring",
  [sym__primary_keyring] = "_primary_keyring",
  [sym__trustdb_name] = "_trustdb_name",
  [sym__display_charset] = "_display_charset",
  [sym__utf8_strings] = "_utf8_strings",
  [sym__no_utf8_strings] = "_no_utf8_strings",
  [sym__compress_level] = "_compress_level",
  [sym__bzip2_compress_level] = "_bzip2_compress_level",
  [sym__default_cert_level] = "_default_cert_level",
  [sym__min_cert_level] = "_min_cert_level",
  [sym__trusted_key] = "_trusted_key",
  [sym__add_desig_revoker] = "_add_desig_revoker",
  [sym__trust_model] = "_trust_model",
  [sym__assert_signer] = "_assert_signer",
  [sym__auto_key_locate] = "_auto_key_locate",
  [sym__keyid_format] = "_keyid_format",
  [sym__keyserver] = "_keyserver",
  [sym__keyserver_options] = "_keyserver_options",
  [sym__keyserver_set_option] = "_keyserver_set_option",
  [sym__completes_needed] = "_completes_needed",
  [sym__marginals_needed] = "_marginals_needed",
  [sym__tofu_default_policy] = "_tofu_default_policy",
  [sym__max_cert_depth] = "_max_cert_depth",
  [sym__agent_program] = "_agent_program",
  [sym__dirmngr_program] = "_dirmngr_program",
  [sym__limit_card_insert_tries] = "_limit_card_insert_tries",
  [sym__recipient] = "_recipient",
  [sym__hidden_recipient] = "_hidden_recipient",
  [sym__recipient_file] = "_recipient_file",
  [sym__hidden_recipient_file] = "_hidden_recipient_file",
  [sym__encrypt_to] = "_encrypt_to",
  [sym__hidden_encrypt_to] = "_hidden_encrypt_to",
  [sym__group] = "_group",
  [sym__ungroup] = "_ungroup",
  [sym__local_user] = "_local_user",
  [sym__sender] = "_sender",
  [sym__try_secret_name] = "_try_secret_name",
  [sym__output] = "_output",
  [sym__max_output] = "_max_output",
  [sym__chunk_size] = "_chunk_size",
  [sym__input_size_hint] = "_input_size_hint",
  [sym__key_origin] = "_key_origin",
  [sym__import_options] = "_import_options",
  [sym__import_filter] = "_import_filter",
  [sym__export_filter] = "_export_filter",
  [sym__export_options] = "_export_options",
  [sym__personal_cipher_preferences] = "_personal_cipher_preferences",
  [sym__personal_digest_preferences] = "_personal_digest_preferences",
  [sym__personal_compress_preferences] = "_personal_compress_preferences",
  [sym__s2k_cipher_algo] = "_s2k_cipher_algo",
  [sym__s2k_digest_algo] = "_s2k_digest_algo",
  [sym__s2k_mode] = "_s2k_mode",
  [sym__s2k_count] = "_s2k_count",
  [sym__compliance] = "_compliance",
  [sym__min_rsa_length] = "_min_rsa_length",
  [sym__require_compliance] = "_require_compliance",
  [sym__debug_level] = "_debug_level",
  [sym__debug] = "_debug",
  [sym__debug_set_iobuf_size] = "_debug_set_iobuf_size",
  [sym__faked_system_time] = "_faked_system_time",
  [sym__status_fd] = "_status_fd",
  [sym__status_file] = "_status_file",
  [sym__logger_fd] = "_logger_fd",
  [sym__logger_file] = "_logger_file",
  [sym__comment] = "_comment",
  [sym__sig_notation] = "_sig_notation",
  [sym__cert_notation] = "_cert_notation",
  [sym__set_notation] = "_set_notation",
  [aux_sym__notation] = "_notation",
  [sym__notation_format] = "_notation_format",
  [sym__known_notation] = "_known_notation",
  [sym__sig_policy_url] = "_sig_policy_url",
  [sym__cert_policy_url] = "_cert_policy_url",
  [sym__set_policy_url] = "_set_policy_url",
  [sym__sig_keyserver_url] = "_sig_keyserver_url",
  [sym__set_filename] = "_set_filename",
  [sym__cipher_algo] = "_cipher_algo",
  [sym__digest_algo] = "_digest_algo",
  [sym__compress_algo] = "_compress_algo",
  [sym__cert_digest_algo] = "_cert_digest_algo",
  [sym__disable_cipher_algo] = "_disable_cipher_algo",
  [sym__disable_pubkey_algo] = "_disable_pubkey_algo",
  [sym__passphrase_repeat] = "_passphrase_repeat",
  [sym__passphrase_fd] = "_passphrase_fd",
  [sym__passphrase_file] = "_passphrase_file",
  [sym__passphrase] = "_passphrase",
  [sym__pinentry_mode] = "_pinentry_mode",
  [sym__request_origin] = "_request_origin",
  [sym__command_fd] = "_command_fd",
  [sym__command_file] = "_command_file",
  [sym__weak_digest] = "_weak_digest",
  [sym__override_session_key] = "_override_session_key",
  [sym__override_session_key_fd] = "_override_session_key_fd",
  [sym__default_sig_expire] = "_default_sig_expire",
  [sym__default_cert_expire] = "_default_cert_expire",
  [sym__default_new_key_algo] = "_default_new_key_algo",
  [sym__default_preference_list] = "_default_preference_list",
  [sym__default_preference_value] = "value",
  [sym__default_keyserver_url] = "_default_keyserver_url",
  [sym__chuid] = "_chuid",
  [sym_string] = "string",
  [sym_filter_value] = "filter_value",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym__filter_expression_inner_repeat1] = "_filter_expression_inner_repeat1",
  [aux_sym__filter_expression_inner_repeat2] = "_filter_expression_inner_repeat2",
  [aux_sym__list_options_repeat1] = "_list_options_repeat1",
  [aux_sym__list_options_repeat2] = "_list_options_repeat2",
  [aux_sym__verify_options_repeat1] = "_verify_options_repeat1",
  [aux_sym__verify_options_repeat2] = "_verify_options_repeat2",
  [aux_sym__command_repeat1] = "_command_repeat1",
  [aux_sym__command_repeat2] = "_command_repeat2",
  [aux_sym__command_repeat3] = "_command_repeat3",
  [aux_sym__auto_key_locate_repeat1] = "_auto_key_locate_repeat1",
  [aux_sym__auto_key_locate_repeat2] = "_auto_key_locate_repeat2",
  [aux_sym__keyserver_options_repeat1] = "_keyserver_options_repeat1",
  [aux_sym__keyserver_options_repeat2] = "_keyserver_options_repeat2",
  [aux_sym__import_options_repeat1] = "_import_options_repeat1",
  [aux_sym__import_options_repeat2] = "_import_options_repeat2",
  [aux_sym__export_options_repeat1] = "_export_options_repeat1",
  [aux_sym__export_options_repeat2] = "_export_options_repeat2",
  [aux_sym__personal_cipher_preferences_repeat1] = "_personal_cipher_preferences_repeat1",
  [aux_sym__personal_cipher_preferences_repeat2] = "_personal_cipher_preferences_repeat2",
  [aux_sym__personal_digest_preferences_repeat1] = "_personal_digest_preferences_repeat1",
  [aux_sym__personal_digest_preferences_repeat2] = "_personal_digest_preferences_repeat2",
  [aux_sym__personal_compress_preferences_repeat1] = "_personal_compress_preferences_repeat1",
  [aux_sym__personal_compress_preferences_repeat2] = "_personal_compress_preferences_repeat2",
  [aux_sym__debug_repeat1] = "_debug_repeat1",
  [aux_sym__debug_repeat2] = "_debug_repeat2",
  [aux_sym__default_new_key_algo_repeat1] = "_default_new_key_algo_repeat1",
  [aux_sym__default_new_key_algo_repeat2] = "_default_new_key_algo_repeat2",
  [aux_sym__default_preference_list_repeat1] = "_default_preference_list_repeat1",
  [aux_sym__default_preference_list_repeat2] = "_default_preference_list_repeat2",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_filter_value_repeat1] = "filter_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_config_token1] = aux_sym_config_token1,
  [anon_sym_default_DASHrecipient] = anon_sym_default_DASHrecipient,
  [anon_sym_default_DASHrecipient_DASHself] = anon_sym_default_DASHrecipient_DASHself,
  [anon_sym_no_DASHdefault_DASHrecipient] = anon_sym_no_DASHdefault_DASHrecipient,
  [anon_sym_verbose] = anon_sym_verbose,
  [anon_sym_no_DASHtty] = anon_sym_no_DASHtty,
  [anon_sym_enable_DASHlarge_DASHrsa] = anon_sym_enable_DASHlarge_DASHrsa,
  [anon_sym_disable_DASHlarge_DASHrsa] = anon_sym_disable_DASHlarge_DASHrsa,
  [anon_sym_enable_DASHdsa2] = anon_sym_enable_DASHdsa2,
  [anon_sym_disable_DASHdsa2] = anon_sym_disable_DASHdsa2,
  [anon_sym_no_DASHcompress] = anon_sym_no_DASHcompress,
  [anon_sym_bzip2_DASHdecompress_DASHlowmem] = anon_sym_bzip2_DASHdecompress_DASHlowmem,
  [anon_sym_mangle_DASHdos_DASHfilenames] = anon_sym_mangle_DASHdos_DASHfilenames,
  [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = anon_sym_no_DASHmangle_DASHdos_DASHfilenames,
  [anon_sym_ask_DASHcert_DASHlevel] = anon_sym_ask_DASHcert_DASHlevel,
  [anon_sym_no_DASHask_DASHcert_DASHlevel] = anon_sym_no_DASHask_DASHcert_DASHlevel,
  [anon_sym_always_DASHtrust] = anon_sym_always_DASHtrust,
  [anon_sym_no_DASHauto_DASHkey_DASHlocate] = anon_sym_no_DASHauto_DASHkey_DASHlocate,
  [anon_sym_auto_DASHkey_DASHimport] = anon_sym_auto_DASHkey_DASHimport,
  [anon_sym_no_DASHauto_DASHkey_DASHimport] = anon_sym_no_DASHauto_DASHkey_DASHimport,
  [anon_sym_auto_DASHkey_DASHretrieve] = anon_sym_auto_DASHkey_DASHretrieve,
  [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = anon_sym_no_DASHauto_DASHkey_DASHretrieve,
  [anon_sym_no_DASHsig_DASHcache] = anon_sym_no_DASHsig_DASHcache,
  [anon_sym_auto_DASHcheck_DASHtrustdb] = anon_sym_auto_DASHcheck_DASHtrustdb,
  [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = anon_sym_no_DASHauto_DASHcheck_DASHtrustdb,
  [anon_sym_disable_DASHdirmngr] = anon_sym_disable_DASHdirmngr,
  [anon_sym_no_DASHautostart] = anon_sym_no_DASHautostart,
  [anon_sym_lock_DASHonce] = anon_sym_lock_DASHonce,
  [anon_sym_lock_DASHmultiple] = anon_sym_lock_DASHmultiple,
  [anon_sym_lock_DASHnever] = anon_sym_lock_DASHnever,
  [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror,
  [anon_sym_no_DASHrandom_DASHseed_DASHfile] = anon_sym_no_DASHrandom_DASHseed_DASHfile,
  [anon_sym_no_DASHgreeting] = anon_sym_no_DASHgreeting,
  [anon_sym_no_DASHsecmem_DASHwarning] = anon_sym_no_DASHsecmem_DASHwarning,
  [anon_sym_no_DASHpermission_DASHwarning] = anon_sym_no_DASHpermission_DASHwarning,
  [anon_sym_require_DASHsecmem] = anon_sym_require_DASHsecmem,
  [anon_sym_no_DASHrequire_DASHsecmem] = anon_sym_no_DASHrequire_DASHsecmem,
  [anon_sym_require_DASHcross_DASHverification] = anon_sym_require_DASHcross_DASHverification,
  [anon_sym_no_DASHrequire_DASHcross_DASHverification] = anon_sym_no_DASHrequire_DASHcross_DASHverification,
  [anon_sym_expert] = anon_sym_expert,
  [anon_sym_no_DASHexpert] = anon_sym_no_DASHexpert,
  [anon_sym_no_DASHencrypt_DASHto] = anon_sym_no_DASHencrypt_DASHto,
  [anon_sym_no_DASHgroups] = anon_sym_no_DASHgroups,
  [anon_sym_try_DASHall_DASHsecrets] = anon_sym_try_DASHall_DASHsecrets,
  [anon_sym_skip_DASHhidden_DASHrecipients] = anon_sym_skip_DASHhidden_DASHrecipients,
  [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = anon_sym_no_DASHskip_DASHhidden_DASHrecipients,
  [anon_sym_armor] = anon_sym_armor,
  [anon_sym_no_DASHarmor] = anon_sym_no_DASHarmor,
  [anon_sym_with_DASHcolons] = anon_sym_with_DASHcolons,
  [anon_sym_legacy_DASHlist_DASHmode] = anon_sym_legacy_DASHlist_DASHmode,
  [anon_sym_with_DASHfingerprint] = anon_sym_with_DASHfingerprint,
  [anon_sym_with_DASHsubkey_DASHfingerprint] = anon_sym_with_DASHsubkey_DASHfingerprint,
  [anon_sym_with_DASHicao_DASHspelling] = anon_sym_with_DASHicao_DASHspelling,
  [anon_sym_with_DASHkeygrip] = anon_sym_with_DASHkeygrip,
  [anon_sym_with_DASHkey_DASHorigin] = anon_sym_with_DASHkey_DASHorigin,
  [anon_sym_with_DASHwkd_DASHhash] = anon_sym_with_DASHwkd_DASHhash,
  [anon_sym_with_DASHsecret] = anon_sym_with_DASHsecret,
  [anon_sym_textmode] = anon_sym_textmode,
  [anon_sym_no_DASHtextmode] = anon_sym_no_DASHtextmode,
  [anon_sym_force_DASHocb] = anon_sym_force_DASHocb,
  [anon_sym_force_DASHaead] = anon_sym_force_DASHaead,
  [anon_sym_disable_DASHsigner_DASHuid] = anon_sym_disable_DASHsigner_DASHuid,
  [anon_sym_include_DASHkey_DASHblock] = anon_sym_include_DASHkey_DASHblock,
  [anon_sym_no_DASHinclude_DASHkey_DASHblock] = anon_sym_no_DASHinclude_DASHkey_DASHblock,
  [anon_sym_gnupg] = anon_sym_gnupg,
  [anon_sym_openpgp] = anon_sym_openpgp,
  [anon_sym_rfc4880] = anon_sym_rfc4880,
  [anon_sym_rfc4880bis] = anon_sym_rfc4880bis,
  [anon_sym_rfc2440] = anon_sym_rfc2440,
  [anon_sym_pgp7] = anon_sym_pgp7,
  [anon_sym_pgp8] = anon_sym_pgp8,
  [anon_sym_list_DASHonly] = anon_sym_list_DASHonly,
  [anon_sym_interactive] = anon_sym_interactive,
  [anon_sym_debug_DASHall] = anon_sym_debug_DASHall,
  [anon_sym_debug_DASHiolbf] = anon_sym_debug_DASHiolbf,
  [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = anon_sym_debug_DASHallow_DASHlarge_DASHchunks,
  [anon_sym_debug_DASHignore_DASHexpiration] = anon_sym_debug_DASHignore_DASHexpiration,
  [anon_sym_full_DASHtimestrings] = anon_sym_full_DASHtimestrings,
  [anon_sym_enable_DASHprogress_DASHfilter] = anon_sym_enable_DASHprogress_DASHfilter,
  [anon_sym_log_DASHtime] = anon_sym_log_DASHtime,
  [anon_sym_no_DASHcomments] = anon_sym_no_DASHcomments,
  [anon_sym_emit_DASHversion] = anon_sym_emit_DASHversion,
  [anon_sym_no_DASHemit_DASHversion] = anon_sym_no_DASHemit_DASHversion,
  [anon_sym_for_DASHyour_DASHeyes_DASHonly] = anon_sym_for_DASHyour_DASHeyes_DASHonly,
  [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly,
  [anon_sym_use_DASHembedded_DASHfilename] = anon_sym_use_DASHembedded_DASHfilename,
  [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = anon_sym_no_DASHuse_DASHembedded_DASHfilename,
  [anon_sym_throw_DASHkeyids] = anon_sym_throw_DASHkeyids,
  [anon_sym_no_DASHthrow_DASHkeyids] = anon_sym_no_DASHthrow_DASHkeyids,
  [anon_sym_not_DASHdash_DASHescaped] = anon_sym_not_DASHdash_DASHescaped,
  [anon_sym_escape_DASHfrom_DASHlines] = anon_sym_escape_DASHfrom_DASHlines,
  [anon_sym_no_DASHescape_DASHfrom_DASHlines] = anon_sym_no_DASHescape_DASHfrom_DASHlines,
  [anon_sym_no_DASHsymkey_DASHcache] = anon_sym_no_DASHsymkey_DASHcache,
  [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = anon_sym_allow_DASHnon_DASHselfsigned_DASHuid,
  [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid,
  [anon_sym_allow_DASHfreeform_DASHuid] = anon_sym_allow_DASHfreeform_DASHuid,
  [anon_sym_ignore_DASHtime_DASHconflict] = anon_sym_ignore_DASHtime_DASHconflict,
  [anon_sym_ignore_DASHvalid_DASHfrom] = anon_sym_ignore_DASHvalid_DASHfrom,
  [anon_sym_ignore_DASHcrc_DASHerror] = anon_sym_ignore_DASHcrc_DASHerror,
  [anon_sym_ignore_DASHmdc_DASHerror] = anon_sym_ignore_DASHmdc_DASHerror,
  [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = anon_sym_allow_DASHold_DASHcipher_DASHalgos,
  [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = anon_sym_allow_DASHweak_DASHdigest_DASHalgos,
  [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = anon_sym_allow_DASHweak_DASHkey_DASHsignatures,
  [anon_sym_override_DASHcompliance_DASHcheck] = anon_sym_override_DASHcompliance_DASHcheck,
  [anon_sym_no_DASHdefault_DASHkeyring] = anon_sym_no_DASHdefault_DASHkeyring,
  [anon_sym_no_DASHkeyring] = anon_sym_no_DASHkeyring,
  [anon_sym_skip_DASHverify] = anon_sym_skip_DASHverify,
  [anon_sym_with_DASHkey_DASHdata] = anon_sym_with_DASHkey_DASHdata,
  [anon_sym_list_DASHsignatures] = anon_sym_list_DASHsignatures,
  [anon_sym_list_DASHsigs] = anon_sym_list_DASHsigs,
  [anon_sym_fast_DASHlist_DASHmode] = anon_sym_fast_DASHlist_DASHmode,
  [anon_sym_show_DASHsession_DASHkey] = anon_sym_show_DASHsession_DASHkey,
  [anon_sym_ask_DASHsig_DASHexpire] = anon_sym_ask_DASHsig_DASHexpire,
  [anon_sym_no_DASHask_DASHsig_DASHexpire] = anon_sym_no_DASHask_DASHsig_DASHexpire,
  [anon_sym_ask_DASHcert_DASHexpire] = anon_sym_ask_DASHcert_DASHexpire,
  [anon_sym_no_DASHask_DASHcert_DASHexpire] = anon_sym_no_DASHask_DASHcert_DASHexpire,
  [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey,
  [anon_sym_force_DASHsign_DASHkey] = anon_sym_force_DASHsign_DASHkey,
  [anon_sym_forbid_DASHgen_DASHkey] = anon_sym_forbid_DASHgen_DASHkey,
  [anon_sym_enable_DASHspecial_DASHfilenames] = anon_sym_enable_DASHspecial_DASHfilenames,
  [anon_sym_preserve_DASHpermissions] = anon_sym_preserve_DASHpermissions,
  [anon_sym_default_DASHkey] = anon_sym_default_DASHkey,
  [anon_sym_list_DASHfilter] = anon_sym_list_DASHfilter,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym__list_filter_name] = sym__list_filter_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_list_DASHoptions] = anon_sym_list_DASHoptions,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__list_parameter] = sym__list_parameter,
  [anon_sym_verify_DASHoptions] = anon_sym_verify_DASHoptions,
  [sym__verify_parameter] = sym__list_parameter,
  [anon_sym_photo_DASHviewer] = anon_sym_photo_DASHviewer,
  [aux_sym__command_token1] = aux_sym__command_token1,
  [aux_sym__command_token2] = aux_sym__command_token2,
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
  [aux_sym__command_token3] = aux_sym__command_token3,
  [aux_sym__command_format_token1] = aux_sym__command_format_token1,
  [anon_sym_exec_DASHpath] = anon_sym_exec_DASHpath,
  [anon_sym_keyring] = anon_sym_keyring,
  [anon_sym_primary_DASHkeyring] = anon_sym_primary_DASHkeyring,
  [anon_sym_trustdb_DASHname] = anon_sym_trustdb_DASHname,
  [anon_sym_display_DASHcharset] = anon_sym_display_DASHcharset,
  [sym__charset_value] = sym__list_parameter,
  [anon_sym_utf8_DASHstrings] = anon_sym_utf8_DASHstrings,
  [anon_sym_no_DASHutf8_DASHstrings] = anon_sym_no_DASHutf8_DASHstrings,
  [anon_sym_compress_DASHlevel] = anon_sym_compress_DASHlevel,
  [aux_sym__compress_level_token1] = sym_number,
  [anon_sym_bzip2_DASHcompress_DASHlevel] = anon_sym_bzip2_DASHcompress_DASHlevel,
  [anon_sym_default_DASHcert_DASHlevel] = anon_sym_default_DASHcert_DASHlevel,
  [aux_sym__default_cert_level_token1] = sym_number,
  [anon_sym_min_DASHcert_DASHlevel] = anon_sym_min_DASHcert_DASHlevel,
  [anon_sym_trusted_DASHkey] = anon_sym_trusted_DASHkey,
  [anon_sym_add_DASHdesig_DASHrevoker] = anon_sym_add_DASHdesig_DASHrevoker,
  [aux_sym__add_desig_revoker_token1] = aux_sym__add_desig_revoker_token1,
  [aux_sym__add_desig_revoker_token2] = aux_sym__add_desig_revoker_token2,
  [anon_sym_trust_DASHmodel] = anon_sym_trust_DASHmodel,
  [sym__model] = sym__list_parameter,
  [anon_sym_assert_DASHsigner] = anon_sym_assert_DASHsigner,
  [anon_sym_auto_DASHkey_DASHlocate] = anon_sym_auto_DASHkey_DASHlocate,
  [sym__key_locate_value] = sym__list_parameter,
  [anon_sym_keyid_DASHformat] = anon_sym_keyid_DASHformat,
  [sym__keyid_format_value] = sym__list_parameter,
  [anon_sym_keyserver] = anon_sym_keyserver,
  [anon_sym_keyserver_DASHoptions] = anon_sym_keyserver_DASHoptions,
  [anon_sym_no_DASH] = anon_sym_no_DASH,
  [sym__keyserver_parameter] = sym__keyserver_parameter,
  [anon_sym_completes_DASHneeded] = anon_sym_completes_DASHneeded,
  [anon_sym_marginals_DASHneeded] = anon_sym_marginals_DASHneeded,
  [anon_sym_tofu_DASHdefault_DASHpolicy] = anon_sym_tofu_DASHdefault_DASHpolicy,
  [sym__tofu_policy_value] = sym__list_parameter,
  [anon_sym_max_DASHcert_DASHdepth] = anon_sym_max_DASHcert_DASHdepth,
  [anon_sym_agent_DASHprogram] = anon_sym_agent_DASHprogram,
  [anon_sym_dirmngr_DASHprogram] = anon_sym_dirmngr_DASHprogram,
  [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = anon_sym_limit_DASHcard_DASHinsert_DASHtries,
  [anon_sym_recipient] = anon_sym_recipient,
  [anon_sym_hidden_DASHrecipient] = anon_sym_hidden_DASHrecipient,
  [anon_sym_recipient_DASHfile] = anon_sym_recipient_DASHfile,
  [anon_sym_hidden_DASHrecipient_DASHfile] = anon_sym_hidden_DASHrecipient_DASHfile,
  [anon_sym_encrypt_DASHto] = anon_sym_encrypt_DASHto,
  [anon_sym_hidden_DASHencrypt_DASHto] = anon_sym_hidden_DASHencrypt_DASHto,
  [anon_sym_group] = anon_sym_group,
  [aux_sym__group_token1] = sym__keyserver_parameter,
  [anon_sym_ungroup] = anon_sym_ungroup,
  [anon_sym_local_DASHuser] = anon_sym_local_DASHuser,
  [anon_sym_sender] = anon_sym_sender,
  [anon_sym_try_DASHsecret_DASHname] = anon_sym_try_DASHsecret_DASHname,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_max_DASHoutput] = anon_sym_max_DASHoutput,
  [anon_sym_chunk_DASHsize] = anon_sym_chunk_DASHsize,
  [anon_sym_input_DASHsize_DASHhint] = anon_sym_input_DASHsize_DASHhint,
  [anon_sym_key_DASHorigin] = anon_sym_key_DASHorigin,
  [sym__key_origin_value] = sym__list_parameter,
  [anon_sym_import_DASHoptions] = anon_sym_import_DASHoptions,
  [sym__import_parameter] = sym__list_parameter,
  [anon_sym_import_DASHfilter] = anon_sym_import_DASHfilter,
  [sym__import_filter_name] = sym__list_filter_name,
  [anon_sym_export_DASHfilter] = anon_sym_export_DASHfilter,
  [sym__export_filter_name] = sym__list_filter_name,
  [anon_sym_export_DASHoptions] = anon_sym_export_DASHoptions,
  [sym__export_parameter] = sym__list_parameter,
  [anon_sym_personal_DASHcipher_DASHpreferences] = anon_sym_personal_DASHcipher_DASHpreferences,
  [anon_sym_personal_DASHdigest_DASHpreferences] = anon_sym_personal_DASHdigest_DASHpreferences,
  [anon_sym_personal_DASHcompress_DASHpreferences] = anon_sym_personal_DASHcompress_DASHpreferences,
  [anon_sym_s2k_DASHcipher_DASHalgo] = anon_sym_s2k_DASHcipher_DASHalgo,
  [anon_sym_s2k_DASHdigest_DASHalgo] = anon_sym_s2k_DASHdigest_DASHalgo,
  [anon_sym_s2k_DASHmode] = anon_sym_s2k_DASHmode,
  [aux_sym__s2k_mode_token1] = sym_number,
  [anon_sym_s2k_DASHcount] = anon_sym_s2k_DASHcount,
  [anon_sym_compliance] = anon_sym_compliance,
  [sym__compliance_value] = sym__list_parameter,
  [anon_sym_min_DASHrsa_DASHlength] = anon_sym_min_DASHrsa_DASHlength,
  [anon_sym_require_DASHcompliance] = anon_sym_require_DASHcompliance,
  [anon_sym_debug_DASHlevel] = anon_sym_debug_DASHlevel,
  [sym__debug_level_value] = sym__list_parameter,
  [anon_sym_debug] = anon_sym_debug,
  [aux_sym__debug_token1] = sym_number,
  [sym__debug_flag_value] = sym__list_parameter,
  [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = anon_sym_debug_DASHset_DASHiobuf_DASHsize,
  [anon_sym_faked_DASHsystem_DASHtime] = anon_sym_faked_DASHsystem_DASHtime,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_status_DASHfd] = anon_sym_status_DASHfd,
  [anon_sym_status_DASHfile] = anon_sym_status_DASHfile,
  [anon_sym_logger_DASHfd] = anon_sym_logger_DASHfd,
  [anon_sym_logger_DASHfile] = anon_sym_logger_DASHfile,
  [anon_sym_log_DASHfile] = anon_sym_log_DASHfile,
  [anon_sym_comment] = anon_sym_comment,
  [anon_sym_sig_DASHnotation] = anon_sym_sig_DASHnotation,
  [anon_sym_cert_DASHnotation] = anon_sym_cert_DASHnotation,
  [anon_sym_set_DASHnotation] = anon_sym_set_DASHnotation,
  [aux_sym__notation_token1] = aux_sym__notation_token1,
  [aux_sym__notation_format_token1] = aux_sym__command_format_token1,
  [anon_sym_known_DASHnotation] = anon_sym_known_DASHnotation,
  [anon_sym_sig_DASHpolicy_DASHurl] = anon_sym_sig_DASHpolicy_DASHurl,
  [anon_sym_cert_DASHpolicy_DASHurl] = anon_sym_cert_DASHpolicy_DASHurl,
  [anon_sym_set_DASHpolicy_DASHurl] = anon_sym_set_DASHpolicy_DASHurl,
  [anon_sym_sig_DASHkeyserver_DASHurl] = anon_sym_sig_DASHkeyserver_DASHurl,
  [anon_sym_set_DASHfilename] = anon_sym_set_DASHfilename,
  [anon_sym_cipher_DASHalgo] = anon_sym_cipher_DASHalgo,
  [anon_sym_digest_DASHalgo] = anon_sym_digest_DASHalgo,
  [anon_sym_compress_DASHalgo] = anon_sym_compress_DASHalgo,
  [anon_sym_cert_DASHdigest_DASHalgo] = anon_sym_cert_DASHdigest_DASHalgo,
  [anon_sym_disable_DASHcipher_DASHalgo] = anon_sym_disable_DASHcipher_DASHalgo,
  [anon_sym_disable_DASHpubkey_DASHalgo] = anon_sym_disable_DASHpubkey_DASHalgo,
  [anon_sym_passphrase_DASHrepeat] = anon_sym_passphrase_DASHrepeat,
  [anon_sym_passphrase_DASHfd] = anon_sym_passphrase_DASHfd,
  [anon_sym_passphrase_DASHfile] = anon_sym_passphrase_DASHfile,
  [anon_sym_passphrase] = anon_sym_passphrase,
  [anon_sym_pinentry_DASHmode] = anon_sym_pinentry_DASHmode,
  [sym__pinentry_mode_value] = sym__list_parameter,
  [anon_sym_request_DASHorigin] = anon_sym_request_DASHorigin,
  [sym__request_origin_value] = sym__list_parameter,
  [anon_sym_command_DASHfd] = anon_sym_command_DASHfd,
  [anon_sym_command_DASHfile] = anon_sym_command_DASHfile,
  [anon_sym_weak_DASHdigest] = anon_sym_weak_DASHdigest,
  [anon_sym_override_DASHsession_DASHkey] = anon_sym_override_DASHsession_DASHkey,
  [anon_sym_override_DASHsession_DASHkey_DASHfd] = anon_sym_override_DASHsession_DASHkey_DASHfd,
  [anon_sym_default_DASHsig_DASHexpire] = anon_sym_default_DASHsig_DASHexpire,
  [anon_sym_default_DASHcert_DASHexpire] = anon_sym_default_DASHcert_DASHexpire,
  [anon_sym_default_DASHnew_DASHkey_DASHalgo] = anon_sym_default_DASHnew_DASHkey_DASHalgo,
  [sym__new_key_algo] = sym__list_parameter,
  [anon_sym_default_DASHpreference_DASHlist] = anon_sym_default_DASHpreference_DASHlist,
  [anon_sym_default_DASHkeyserver_DASHurl] = anon_sym_default_DASHkeyserver_DASHurl,
  [anon_sym_chuid] = anon_sym_chuid,
  [sym_key] = sym_key,
  [sym_url] = sym_url,
  [sym_number] = sym_number,
  [sym_iso_time] = sym_iso_time,
  [sym_expire_time] = sym_expire_time,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_filter_scope] = sym_filter_scope,
  [sym_filter_property] = sym_filter_property,
  [sym_filter_lc] = sym_filter_lc,
  [sym_filter_op1] = sym_filter_op1,
  [sym_filter_op0] = sym_filter_op0,
  [sym_filter_flag] = sym_filter_flag,
  [aux_sym_filter_value_token1] = aux_sym_filter_value_token1,
  [sym_comment] = sym_comment,
  [sym__pubkey_algo_value] = sym__pubkey_algo_value,
  [sym__cipher_algo_value] = sym__cipher_algo_value,
  [sym__hash_algo_value] = sym__hash_algo_value,
  [sym__compression_algo_value] = sym__compression_algo_value,
  [sym__space] = sym__space,
  [sym_config] = sym_config,
  [sym_option] = sym_option,
  [sym__default_key] = sym__default_key,
  [sym__list_filter] = sym__list_filter,
  [sym__filter_expression] = sym__filter_expression,
  [sym__filter_expression_inner] = sym__filter_expression_inner,
  [sym__list_options] = sym__list_options,
  [sym__verify_options] = sym__verify_options,
  [sym__photo_viewer] = sym__photo_viewer,
  [sym__command] = sym_string,
  [sym__command_format] = sym__command_format,
  [sym__exec_path] = sym__exec_path,
  [sym__keyring] = sym__keyring,
  [sym__primary_keyring] = sym__primary_keyring,
  [sym__trustdb_name] = sym__trustdb_name,
  [sym__display_charset] = sym__display_charset,
  [sym__utf8_strings] = sym__utf8_strings,
  [sym__no_utf8_strings] = sym__no_utf8_strings,
  [sym__compress_level] = sym__compress_level,
  [sym__bzip2_compress_level] = sym__bzip2_compress_level,
  [sym__default_cert_level] = sym__default_cert_level,
  [sym__min_cert_level] = sym__min_cert_level,
  [sym__trusted_key] = sym__trusted_key,
  [sym__add_desig_revoker] = sym__add_desig_revoker,
  [sym__trust_model] = sym__trust_model,
  [sym__assert_signer] = sym__assert_signer,
  [sym__auto_key_locate] = sym__auto_key_locate,
  [sym__keyid_format] = sym__keyid_format,
  [sym__keyserver] = sym__keyserver,
  [sym__keyserver_options] = sym__keyserver_options,
  [sym__keyserver_set_option] = sym__keyserver_set_option,
  [sym__completes_needed] = sym__completes_needed,
  [sym__marginals_needed] = sym__marginals_needed,
  [sym__tofu_default_policy] = sym__tofu_default_policy,
  [sym__max_cert_depth] = sym__max_cert_depth,
  [sym__agent_program] = sym__agent_program,
  [sym__dirmngr_program] = sym__dirmngr_program,
  [sym__limit_card_insert_tries] = sym__limit_card_insert_tries,
  [sym__recipient] = sym__recipient,
  [sym__hidden_recipient] = sym__hidden_recipient,
  [sym__recipient_file] = sym__recipient_file,
  [sym__hidden_recipient_file] = sym__hidden_recipient_file,
  [sym__encrypt_to] = sym__encrypt_to,
  [sym__hidden_encrypt_to] = sym__hidden_encrypt_to,
  [sym__group] = sym__group,
  [sym__ungroup] = sym__ungroup,
  [sym__local_user] = sym__local_user,
  [sym__sender] = sym__sender,
  [sym__try_secret_name] = sym__try_secret_name,
  [sym__output] = sym__output,
  [sym__max_output] = sym__max_output,
  [sym__chunk_size] = sym__chunk_size,
  [sym__input_size_hint] = sym__input_size_hint,
  [sym__key_origin] = sym__key_origin,
  [sym__import_options] = sym__import_options,
  [sym__import_filter] = sym__import_filter,
  [sym__export_filter] = sym__export_filter,
  [sym__export_options] = sym__export_options,
  [sym__personal_cipher_preferences] = sym__personal_cipher_preferences,
  [sym__personal_digest_preferences] = sym__personal_digest_preferences,
  [sym__personal_compress_preferences] = sym__personal_compress_preferences,
  [sym__s2k_cipher_algo] = sym__s2k_cipher_algo,
  [sym__s2k_digest_algo] = sym__s2k_digest_algo,
  [sym__s2k_mode] = sym__s2k_mode,
  [sym__s2k_count] = sym__s2k_count,
  [sym__compliance] = sym__compliance,
  [sym__min_rsa_length] = sym__min_rsa_length,
  [sym__require_compliance] = sym__require_compliance,
  [sym__debug_level] = sym__debug_level,
  [sym__debug] = sym__debug,
  [sym__debug_set_iobuf_size] = sym__debug_set_iobuf_size,
  [sym__faked_system_time] = sym__faked_system_time,
  [sym__status_fd] = sym__status_fd,
  [sym__status_file] = sym__status_file,
  [sym__logger_fd] = sym__logger_fd,
  [sym__logger_file] = sym__logger_file,
  [sym__comment] = sym__comment,
  [sym__sig_notation] = sym__sig_notation,
  [sym__cert_notation] = sym__cert_notation,
  [sym__set_notation] = sym__set_notation,
  [aux_sym__notation] = aux_sym__notation,
  [sym__notation_format] = sym__notation_format,
  [sym__known_notation] = sym__known_notation,
  [sym__sig_policy_url] = sym__sig_policy_url,
  [sym__cert_policy_url] = sym__cert_policy_url,
  [sym__set_policy_url] = sym__set_policy_url,
  [sym__sig_keyserver_url] = sym__sig_keyserver_url,
  [sym__set_filename] = sym__set_filename,
  [sym__cipher_algo] = sym__cipher_algo,
  [sym__digest_algo] = sym__digest_algo,
  [sym__compress_algo] = sym__compress_algo,
  [sym__cert_digest_algo] = sym__cert_digest_algo,
  [sym__disable_cipher_algo] = sym__disable_cipher_algo,
  [sym__disable_pubkey_algo] = sym__disable_pubkey_algo,
  [sym__passphrase_repeat] = sym__passphrase_repeat,
  [sym__passphrase_fd] = sym__passphrase_fd,
  [sym__passphrase_file] = sym__passphrase_file,
  [sym__passphrase] = sym__passphrase,
  [sym__pinentry_mode] = sym__pinentry_mode,
  [sym__request_origin] = sym__request_origin,
  [sym__command_fd] = sym__command_fd,
  [sym__command_file] = sym__command_file,
  [sym__weak_digest] = sym__weak_digest,
  [sym__override_session_key] = sym__override_session_key,
  [sym__override_session_key_fd] = sym__override_session_key_fd,
  [sym__default_sig_expire] = sym__default_sig_expire,
  [sym__default_cert_expire] = sym__default_cert_expire,
  [sym__default_new_key_algo] = sym__default_new_key_algo,
  [sym__default_preference_list] = sym__default_preference_list,
  [sym__default_preference_value] = sym__list_parameter,
  [sym__default_keyserver_url] = sym__default_keyserver_url,
  [sym__chuid] = sym__chuid,
  [sym_string] = sym_string,
  [sym_filter_value] = sym_filter_value,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym__filter_expression_inner_repeat1] = aux_sym__filter_expression_inner_repeat1,
  [aux_sym__filter_expression_inner_repeat2] = aux_sym__filter_expression_inner_repeat2,
  [aux_sym__list_options_repeat1] = aux_sym__list_options_repeat1,
  [aux_sym__list_options_repeat2] = aux_sym__list_options_repeat2,
  [aux_sym__verify_options_repeat1] = aux_sym__verify_options_repeat1,
  [aux_sym__verify_options_repeat2] = aux_sym__verify_options_repeat2,
  [aux_sym__command_repeat1] = aux_sym__command_repeat1,
  [aux_sym__command_repeat2] = aux_sym__command_repeat2,
  [aux_sym__command_repeat3] = aux_sym__command_repeat3,
  [aux_sym__auto_key_locate_repeat1] = aux_sym__auto_key_locate_repeat1,
  [aux_sym__auto_key_locate_repeat2] = aux_sym__auto_key_locate_repeat2,
  [aux_sym__keyserver_options_repeat1] = aux_sym__keyserver_options_repeat1,
  [aux_sym__keyserver_options_repeat2] = aux_sym__keyserver_options_repeat2,
  [aux_sym__import_options_repeat1] = aux_sym__import_options_repeat1,
  [aux_sym__import_options_repeat2] = aux_sym__import_options_repeat2,
  [aux_sym__export_options_repeat1] = aux_sym__export_options_repeat1,
  [aux_sym__export_options_repeat2] = aux_sym__export_options_repeat2,
  [aux_sym__personal_cipher_preferences_repeat1] = aux_sym__personal_cipher_preferences_repeat1,
  [aux_sym__personal_cipher_preferences_repeat2] = aux_sym__personal_cipher_preferences_repeat2,
  [aux_sym__personal_digest_preferences_repeat1] = aux_sym__personal_digest_preferences_repeat1,
  [aux_sym__personal_digest_preferences_repeat2] = aux_sym__personal_digest_preferences_repeat2,
  [aux_sym__personal_compress_preferences_repeat1] = aux_sym__personal_compress_preferences_repeat1,
  [aux_sym__personal_compress_preferences_repeat2] = aux_sym__personal_compress_preferences_repeat2,
  [aux_sym__debug_repeat1] = aux_sym__debug_repeat1,
  [aux_sym__debug_repeat2] = aux_sym__debug_repeat2,
  [aux_sym__default_new_key_algo_repeat1] = aux_sym__default_new_key_algo_repeat1,
  [aux_sym__default_new_key_algo_repeat2] = aux_sym__default_new_key_algo_repeat2,
  [aux_sym__default_preference_list_repeat1] = aux_sym__default_preference_list_repeat1,
  [aux_sym__default_preference_list_repeat2] = aux_sym__default_preference_list_repeat2,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_filter_value_repeat1] = aux_sym_filter_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_config_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_default_DASHrecipient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHrecipient_DASHself] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHdefault_DASHrecipient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verbose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHtty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_DASHlarge_DASHrsa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHlarge_DASHrsa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_DASHdsa2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHdsa2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHcompress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bzip2_DASHdecompress_DASHlowmem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mangle_DASHdos_DASHfilenames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHcert_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHask_DASHcert_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_always_DASHtrust] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHkey_DASHlocate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHkey_DASHimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHkey_DASHimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHkey_DASHretrieve] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHsig_DASHcache] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHcheck_DASHtrustdb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHdirmngr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHautostart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock_DASHonce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock_DASHmultiple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock_DASHnever] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHrandom_DASHseed_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHgreeting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHsecmem_DASHwarning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHpermission_DASHwarning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require_DASHsecmem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHrequire_DASHsecmem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require_DASHcross_DASHverification] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHrequire_DASHcross_DASHverification] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHexpert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHencrypt_DASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHgroups] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try_DASHall_DASHsecrets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skip_DASHhidden_DASHrecipients] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_armor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHarmor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHcolons] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_legacy_DASHlist_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHfingerprint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHsubkey_DASHfingerprint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHicao_DASHspelling] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHkeygrip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHkey_DASHorigin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHwkd_DASHhash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHsecret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHtextmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_DASHocb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_DASHaead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHsigner_DASHuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include_DASHkey_DASHblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHinclude_DASHkey_DASHblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gnupg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_openpgp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rfc4880] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rfc4880bis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rfc2440] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pgp7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pgp8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_DASHonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHiolbf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHignore_DASHexpiration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_full_DASHtimestrings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_DASHprogress_DASHfilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log_DASHtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHcomments] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emit_DASHversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHemit_DASHversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for_DASHyour_DASHeyes_DASHonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use_DASHembedded_DASHfilename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw_DASHkeyids] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHthrow_DASHkeyids] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not_DASHdash_DASHescaped] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_escape_DASHfrom_DASHlines] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHescape_DASHfrom_DASHlines] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHsymkey_DASHcache] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHfreeform_DASHuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHtime_DASHconflict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHvalid_DASHfrom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHcrc_DASHerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHmdc_DASHerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override_DASHcompliance_DASHcheck] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHdefault_DASHkeyring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHkeyring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skip_DASHverify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHkey_DASHdata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_DASHsignatures] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_DASHsigs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fast_DASHlist_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_show_DASHsession_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHsig_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHask_DASHsig_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHcert_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHask_DASHcert_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_DASHsign_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forbid_DASHgen_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_DASHspecial_DASHfilenames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_preserve_DASHpermissions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_DASHfilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__list_filter_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_DASHoptions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__list_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_verify_DASHoptions] = {
    .visible = true,
    .named = false,
  },
  [sym__verify_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_photo_DASHviewer] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__command_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__command_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_format_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_exec_DASHpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keyring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primary_DASHkeyring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trustdb_DASHname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_display_DASHcharset] = {
    .visible = true,
    .named = false,
  },
  [sym__charset_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_utf8_DASHstrings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHutf8_DASHstrings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compress_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__compress_level_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bzip2_DASHcompress_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHcert_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__default_cert_level_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_min_DASHcert_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trusted_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHdesig_DASHrevoker] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__add_desig_revoker_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__add_desig_revoker_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trust_DASHmodel] = {
    .visible = true,
    .named = false,
  },
  [sym__model] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_assert_DASHsigner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHkey_DASHlocate] = {
    .visible = true,
    .named = false,
  },
  [sym__key_locate_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_keyid_DASHformat] = {
    .visible = true,
    .named = false,
  },
  [sym__keyid_format_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_keyserver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keyserver_DASHoptions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym__keyserver_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_completes_DASHneeded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_marginals_DASHneeded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tofu_DASHdefault_DASHpolicy] = {
    .visible = true,
    .named = false,
  },
  [sym__tofu_policy_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_max_DASHcert_DASHdepth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_agent_DASHprogram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dirmngr_DASHprogram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recipient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden_DASHrecipient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recipient_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden_DASHrecipient_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_encrypt_DASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden_DASHencrypt_DASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__group_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ungroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local_DASHuser] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sender] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try_DASHsecret_DASHname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_DASHoutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chunk_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input_DASHsize_DASHhint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key_DASHorigin] = {
    .visible = true,
    .named = false,
  },
  [sym__key_origin_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import_DASHoptions] = {
    .visible = true,
    .named = false,
  },
  [sym__import_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import_DASHfilter] = {
    .visible = true,
    .named = false,
  },
  [sym__import_filter_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_export_DASHfilter] = {
    .visible = true,
    .named = false,
  },
  [sym__export_filter_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_export_DASHoptions] = {
    .visible = true,
    .named = false,
  },
  [sym__export_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_personal_DASHcipher_DASHpreferences] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_personal_DASHdigest_DASHpreferences] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_personal_DASHcompress_DASHpreferences] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s2k_DASHcipher_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s2k_DASHdigest_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s2k_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__s2k_mode_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_s2k_DASHcount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compliance] = {
    .visible = true,
    .named = false,
  },
  [sym__compliance_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_min_DASHrsa_DASHlength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require_DASHcompliance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [sym__debug_level_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__debug_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__debug_flag_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_faked_DASHsystem_DASHtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_logger_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_logger_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sig_DASHnotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cert_DASHnotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHnotation] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__notation_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__notation_format_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_known_DASHnotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sig_DASHpolicy_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cert_DASHpolicy_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHpolicy_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sig_DASHkeyserver_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHfilename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cipher_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_digest_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compress_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cert_DASHdigest_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHcipher_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHpubkey_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_passphrase_DASHrepeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_passphrase_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_passphrase_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_passphrase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinentry_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [sym__pinentry_mode_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_request_DASHorigin] = {
    .visible = true,
    .named = false,
  },
  [sym__request_origin_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_command_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_command_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak_DASHdigest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override_DASHsession_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override_DASHsession_DASHkey_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHsig_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHcert_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHnew_DASHkey_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [sym__new_key_algo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default_DASHpreference_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHkeyserver_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chuid] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_iso_time] = {
    .visible = true,
    .named = true,
  },
  [sym_expire_time] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_property] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_lc] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_op1] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_op0] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_flag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_filter_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__pubkey_algo_value] = {
    .visible = false,
    .named = true,
  },
  [sym__cipher_algo_value] = {
    .visible = false,
    .named = true,
  },
  [sym__hash_algo_value] = {
    .visible = false,
    .named = true,
  },
  [sym__compression_algo_value] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym__default_key] = {
    .visible = false,
    .named = true,
  },
  [sym__list_filter] = {
    .visible = false,
    .named = true,
  },
  [sym__filter_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__filter_expression_inner] = {
    .visible = false,
    .named = true,
  },
  [sym__list_options] = {
    .visible = false,
    .named = true,
  },
  [sym__verify_options] = {
    .visible = false,
    .named = true,
  },
  [sym__photo_viewer] = {
    .visible = false,
    .named = true,
  },
  [sym__command] = {
    .visible = true,
    .named = true,
  },
  [sym__command_format] = {
    .visible = false,
    .named = true,
  },
  [sym__exec_path] = {
    .visible = false,
    .named = true,
  },
  [sym__keyring] = {
    .visible = false,
    .named = true,
  },
  [sym__primary_keyring] = {
    .visible = false,
    .named = true,
  },
  [sym__trustdb_name] = {
    .visible = false,
    .named = true,
  },
  [sym__display_charset] = {
    .visible = false,
    .named = true,
  },
  [sym__utf8_strings] = {
    .visible = false,
    .named = true,
  },
  [sym__no_utf8_strings] = {
    .visible = false,
    .named = true,
  },
  [sym__compress_level] = {
    .visible = false,
    .named = true,
  },
  [sym__bzip2_compress_level] = {
    .visible = false,
    .named = true,
  },
  [sym__default_cert_level] = {
    .visible = false,
    .named = true,
  },
  [sym__min_cert_level] = {
    .visible = false,
    .named = true,
  },
  [sym__trusted_key] = {
    .visible = false,
    .named = true,
  },
  [sym__add_desig_revoker] = {
    .visible = false,
    .named = true,
  },
  [sym__trust_model] = {
    .visible = false,
    .named = true,
  },
  [sym__assert_signer] = {
    .visible = false,
    .named = true,
  },
  [sym__auto_key_locate] = {
    .visible = false,
    .named = true,
  },
  [sym__keyid_format] = {
    .visible = false,
    .named = true,
  },
  [sym__keyserver] = {
    .visible = false,
    .named = true,
  },
  [sym__keyserver_options] = {
    .visible = false,
    .named = true,
  },
  [sym__keyserver_set_option] = {
    .visible = false,
    .named = true,
  },
  [sym__completes_needed] = {
    .visible = false,
    .named = true,
  },
  [sym__marginals_needed] = {
    .visible = false,
    .named = true,
  },
  [sym__tofu_default_policy] = {
    .visible = false,
    .named = true,
  },
  [sym__max_cert_depth] = {
    .visible = false,
    .named = true,
  },
  [sym__agent_program] = {
    .visible = false,
    .named = true,
  },
  [sym__dirmngr_program] = {
    .visible = false,
    .named = true,
  },
  [sym__limit_card_insert_tries] = {
    .visible = false,
    .named = true,
  },
  [sym__recipient] = {
    .visible = false,
    .named = true,
  },
  [sym__hidden_recipient] = {
    .visible = false,
    .named = true,
  },
  [sym__recipient_file] = {
    .visible = false,
    .named = true,
  },
  [sym__hidden_recipient_file] = {
    .visible = false,
    .named = true,
  },
  [sym__encrypt_to] = {
    .visible = false,
    .named = true,
  },
  [sym__hidden_encrypt_to] = {
    .visible = false,
    .named = true,
  },
  [sym__group] = {
    .visible = false,
    .named = true,
  },
  [sym__ungroup] = {
    .visible = false,
    .named = true,
  },
  [sym__local_user] = {
    .visible = false,
    .named = true,
  },
  [sym__sender] = {
    .visible = false,
    .named = true,
  },
  [sym__try_secret_name] = {
    .visible = false,
    .named = true,
  },
  [sym__output] = {
    .visible = false,
    .named = true,
  },
  [sym__max_output] = {
    .visible = false,
    .named = true,
  },
  [sym__chunk_size] = {
    .visible = false,
    .named = true,
  },
  [sym__input_size_hint] = {
    .visible = false,
    .named = true,
  },
  [sym__key_origin] = {
    .visible = false,
    .named = true,
  },
  [sym__import_options] = {
    .visible = false,
    .named = true,
  },
  [sym__import_filter] = {
    .visible = false,
    .named = true,
  },
  [sym__export_filter] = {
    .visible = false,
    .named = true,
  },
  [sym__export_options] = {
    .visible = false,
    .named = true,
  },
  [sym__personal_cipher_preferences] = {
    .visible = false,
    .named = true,
  },
  [sym__personal_digest_preferences] = {
    .visible = false,
    .named = true,
  },
  [sym__personal_compress_preferences] = {
    .visible = false,
    .named = true,
  },
  [sym__s2k_cipher_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__s2k_digest_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__s2k_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__s2k_count] = {
    .visible = false,
    .named = true,
  },
  [sym__compliance] = {
    .visible = false,
    .named = true,
  },
  [sym__min_rsa_length] = {
    .visible = false,
    .named = true,
  },
  [sym__require_compliance] = {
    .visible = false,
    .named = true,
  },
  [sym__debug_level] = {
    .visible = false,
    .named = true,
  },
  [sym__debug] = {
    .visible = false,
    .named = true,
  },
  [sym__debug_set_iobuf_size] = {
    .visible = false,
    .named = true,
  },
  [sym__faked_system_time] = {
    .visible = false,
    .named = true,
  },
  [sym__status_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__status_file] = {
    .visible = false,
    .named = true,
  },
  [sym__logger_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__logger_file] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym__sig_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__cert_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__set_notation] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__notation] = {
    .visible = false,
    .named = false,
  },
  [sym__notation_format] = {
    .visible = false,
    .named = true,
  },
  [sym__known_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__sig_policy_url] = {
    .visible = false,
    .named = true,
  },
  [sym__cert_policy_url] = {
    .visible = false,
    .named = true,
  },
  [sym__set_policy_url] = {
    .visible = false,
    .named = true,
  },
  [sym__sig_keyserver_url] = {
    .visible = false,
    .named = true,
  },
  [sym__set_filename] = {
    .visible = false,
    .named = true,
  },
  [sym__cipher_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__digest_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__compress_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__cert_digest_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__disable_cipher_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__disable_pubkey_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__passphrase_repeat] = {
    .visible = false,
    .named = true,
  },
  [sym__passphrase_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__passphrase_file] = {
    .visible = false,
    .named = true,
  },
  [sym__passphrase] = {
    .visible = false,
    .named = true,
  },
  [sym__pinentry_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__request_origin] = {
    .visible = false,
    .named = true,
  },
  [sym__command_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__command_file] = {
    .visible = false,
    .named = true,
  },
  [sym__weak_digest] = {
    .visible = false,
    .named = true,
  },
  [sym__override_session_key] = {
    .visible = false,
    .named = true,
  },
  [sym__override_session_key_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__default_sig_expire] = {
    .visible = false,
    .named = true,
  },
  [sym__default_cert_expire] = {
    .visible = false,
    .named = true,
  },
  [sym__default_new_key_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__default_preference_list] = {
    .visible = false,
    .named = true,
  },
  [sym__default_preference_value] = {
    .visible = true,
    .named = true,
  },
  [sym__default_keyserver_url] = {
    .visible = false,
    .named = true,
  },
  [sym__chuid] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__filter_expression_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__filter_expression_inner_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_options_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__verify_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__verify_options_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__auto_key_locate_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__auto_key_locate_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__keyserver_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__keyserver_options_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__import_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__import_options_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__export_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__export_options_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_cipher_preferences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_cipher_preferences_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_digest_preferences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_digest_preferences_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_compress_preferences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_compress_preferences_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__debug_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__debug_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__default_new_key_algo_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__default_new_key_algo_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__default_preference_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__default_preference_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filter_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_expression = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_expression] = "expression",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
  [9] = {.index = 3, .length = 2},
  [11] = {.index = 5, .length = 1},
  [13] = {.index = 6, .length = 1},
  [14] = {.index = 7, .length = 1},
  [15] = {.index = 8, .length = 2},
  [16] = {.index = 10, .length = 1},
  [18] = {.index = 10, .length = 1},
  [19] = {.index = 11, .length = 1},
  [20] = {.index = 12, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expression, 0, .inherited = true},
  [1] =
    {field_value, 0, .inherited = true},
  [2] =
    {field_value, 2, .inherited = true},
  [3] =
    {field_value, 2, .inherited = true},
    {field_value, 3, .inherited = true},
  [5] =
    {field_expression, 4},
  [6] =
    {field_value, 2},
  [7] =
    {field_value, 1, .inherited = true},
  [8] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [10] =
    {field_value, 4},
  [11] =
    {field_value, 3},
  [12] =
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = aux_sym_string_token1,
  },
  [4] = {
    [0] = sym__keyserver_parameter,
  },
  [6] = {
    [2] = sym__list_parameter,
  },
  [7] = {
    [2] = sym_url,
  },
  [8] = {
    [1] = sym__keyserver_parameter,
  },
  [10] = {
    [3] = sym_url,
  },
  [12] = {
    [1] = aux_sym_string_token1,
  },
  [13] = {
    [0] = sym__keyserver_parameter,
  },
  [17] = {
    [1] = sym__list_parameter,
  },
  [18] = {
    [2] = sym__keyserver_parameter,
  },
  [19] = {
    [1] = sym__keyserver_parameter,
  },
  [20] = {
    [3] = sym__keyserver_parameter,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__notation, 3,
    aux_sym__notation,
    sym__keyserver_parameter,
    sym_url,
  aux_sym__command_repeat1, 2,
    aux_sym__command_repeat1,
    aux_sym_string_token1,
  aux_sym__command_repeat2, 2,
    aux_sym__command_repeat2,
    aux_sym_string_token1,
  aux_sym__command_repeat3, 2,
    aux_sym__command_repeat3,
    aux_sym_string_token1,
  aux_sym_string_repeat1, 2,
    aux_sym_string_repeat1,
    aux_sym_string_token1,
  aux_sym_string_repeat2, 2,
    aux_sym_string_repeat2,
    aux_sym_string_token1,
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
  [12] = 8,
  [13] = 11,
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
  [33] = 19,
  [34] = 15,
  [35] = 16,
  [36] = 20,
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
  [67] = 46,
  [68] = 68,
  [69] = 69,
  [70] = 47,
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
  [105] = 65,
  [106] = 106,
  [107] = 89,
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
  [185] = 157,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 191,
  [196] = 192,
  [197] = 193,
  [198] = 186,
  [199] = 190,
  [200] = 187,
  [201] = 188,
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
  [239] = 194,
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
  [264] = 258,
  [265] = 203,
  [266] = 261,
  [267] = 267,
  [268] = 262,
  [269] = 263,
  [270] = 259,
  [271] = 260,
  [272] = 253,
  [273] = 255,
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
  [383] = 358,
  [384] = 384,
  [385] = 363,
  [386] = 386,
  [387] = 367,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 351,
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
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
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
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 504,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 519,
  [589] = 484,
  [590] = 590,
  [591] = 591,
  [592] = 592,
};

static TSCharacterRange aux_sym__command_format_token1_character_set_1[] = {
  {'%', '%'}, {'I', 'I'}, {'K', 'K'}, {'T', 'V'}, {'f', 'f'}, {'i', 'i'}, {'k', 'k'}, {'t', 't'},
  {'v', 'v'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3052);
      ADVANCE_MAP(
        '\n', 3190,
        '!', 3349,
        '"', 3178,
        '\'', 3180,
        ',', 3183,
        '2', 3188,
        '=', 3176,
        '\t', 3190,
        ' ', 3190,
        '0', 3188,
        '1', 3188,
        '3', 3188,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(3190);
      if (lookahead != 0) ADVANCE(3188);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(3053);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(3053);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(3189);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3479);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(3188);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3053);
      if (lookahead == '\r') ADVANCE(3360);
      if (lookahead == '%') ADVANCE(3361);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3479);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(3359);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(3349);
      if (lookahead == '%') ADVANCE(3361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '=') ADVANCE(3359);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 2221,
        '-', 963,
        '3', 2348,
        '<', 3453,
        '=', 3452,
        '>', 325,
        'N', 2680,
        'n', 338,
        '\t', 3479,
        ' ', 3479,
        'A', 2410,
        'a', 2410,
        'B', 2234,
        'b', 2234,
        'C', 2226,
        'c', 2226,
        'D', 2263,
        'd', 2263,
        'E', 2310,
        'e', 2310,
        'F', 2529,
        'f', 2529,
        'H', 2246,
        'h', 2246,
        'I', 2355,
        'i', 2355,
        'K', 2390,
        'k', 2390,
        'L', 2354,
        'l', 2354,
        'M', 2375,
        'm', 2375,
        'P', 2273,
        'p', 2273,
        'R', 2376,
        'r', 2376,
        'S', 2415,
        's', 2415,
        'T', 2511,
        't', 2511,
        'U', 2652,
        'u', 2652,
        'V', 2414,
        'v', 2414,
        'W', 2571,
        'w', 2571,
        'Z', 2528,
        'z', 2528,
      );
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(3178);
      if (lookahead == '%') ADVANCE(3189);
      if (lookahead == '\'') ADVANCE(3180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(3188);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(3178);
      if (lookahead == '%') ADVANCE(3192);
      if (lookahead == '\\') ADVANCE(3191);
      if (lookahead != 0) ADVANCE(3190);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 3178,
        '&', 3457,
        '-', 3472,
        '|', 3458,
        '\t', 3459,
        ' ', 3459,
        'A', 3467,
        'a', 3467,
        'D', 3465,
        'd', 3465,
        'E', 3471,
        'e', 3471,
        'F', 3468,
        'f', 3468,
        'K', 3463,
        'k', 3463,
        'L', 3460,
        'l', 3460,
        'M', 3461,
        'm', 3461,
        'O', 3469,
        'o', 3469,
        'P', 3470,
        'p', 3470,
        'R', 3462,
        'r', 3462,
        'S', 3464,
        's', 3464,
        'U', 3466,
        'u', 3466,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(3456);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(3178);
      if (lookahead == '\\') ADVANCE(3191);
      if (lookahead != 0) ADVANCE(3190);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(3179);
      if (lookahead == '\'') ADVANCE(3181);
      if (lookahead == '0') ADVANCE(3441);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3431);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(3445);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(3179);
      if (lookahead == '\'') ADVANCE(3181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(3445);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(3196);
      if (lookahead == '\'') ADVANCE(3180);
      if (lookahead == '\\') ADVANCE(3195);
      if (lookahead != 0) ADVANCE(3194);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(3361);
      if (lookahead == '=') ADVANCE(3176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(3359);
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(3450);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '&', 3457,
        '\'', 3180,
        '-', 3472,
        '|', 3458,
        '\t', 3459,
        ' ', 3459,
        'A', 3467,
        'a', 3467,
        'D', 3465,
        'd', 3465,
        'E', 3471,
        'e', 3471,
        'F', 3468,
        'f', 3468,
        'K', 3463,
        'k', 3463,
        'L', 3460,
        'l', 3460,
        'M', 3461,
        'm', 3461,
        'O', 3469,
        'o', 3469,
        'P', 3470,
        'p', 3470,
        'R', 3462,
        'r', 3462,
        'S', 3464,
        's', 3464,
        'U', 3466,
        'u', 3466,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(3456);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(3180);
      if (lookahead == '\\') ADVANCE(3195);
      if (lookahead != 0) ADVANCE(3194);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(358);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2369);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(514);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(914);
      if (lookahead == 'g') ADVANCE(770);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(522);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(523);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(461);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(922);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(1200);
      if (lookahead == '/') ADVANCE(3446);
      if (lookahead == '_') ADVANCE(2238);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(415);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(2570);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(466);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(605);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(2137);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(924);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(1338);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(343);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(1020);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(474);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(3047);
      if (lookahead == '.') ADVANCE(3018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(918);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(476);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(383);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(2244);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(577);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(940);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(687);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(483);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(942);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(529);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3447);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(533);
      if (lookahead == 's') ADVANCE(2028);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(2456);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(877);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(1056);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(425);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(583);
      if (lookahead == 'g') ADVANCE(1759);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(596);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(1222);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(2837);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(3228);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2400);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2377);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(2692);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(2327);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(2350);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(313);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(462);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(2586);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(2124);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(463);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(280);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(2631);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(2587);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(2930);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(2954);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(2463);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3042);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(310);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '8') ADVANCE(129);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(2191);
      if (lookahead == 'b') ADVANCE(1092);
      if (lookahead == 'c') ADVANCE(716);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(494);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(2863);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(2150);
      END_STATE();
    case 78:
      ADVANCE_MAP(
        '-', 282,
        'A', 2357,
        'a', 2357,
        'B', 2264,
        'b', 2264,
        'E', 2983,
        'e', 2983,
        'G', 2937,
        'g', 2937,
        'N', 2730,
        'n', 2730,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3208);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(497);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(2931);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(2958);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(927);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(2147);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(2651);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(555);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(923);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(1038);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(2776);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(1248);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(907);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(664);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(599);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(910);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(1032);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(2023);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(582);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(911);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(2115);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(1567);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(2812);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(994);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(1871);
      END_STATE();
    case 103:
      ADVANCE_MAP(
        '-', 2318,
        'C', 2497,
        'c', 2497,
        'M', 2391,
        'm', 2391,
        'N', 2319,
        'n', 2319,
        'S', 2891,
        's', 2891,
      );
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(1625);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(1903);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(471);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(949);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(1628);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(2862);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(506);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(1597);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(2105);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(473);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(1901);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(1445);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(1070);
      END_STATE();
    case 117:
      if (lookahead == '-') ADVANCE(1297);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(2544);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(652);
      END_STATE();
    case 120:
      if (lookahead == '-') ADVANCE(674);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(492);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(1493);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(452);
      END_STATE();
    case 124:
      if (lookahead == '-') ADVANCE(2465);
      END_STATE();
    case 125:
      if (lookahead == '-') ADVANCE(1642);
      END_STATE();
    case 126:
      if (lookahead == '-') ADVANCE(1201);
      END_STATE();
    case 127:
      if (lookahead == '-') ADVANCE(2939);
      END_STATE();
    case 128:
      if (lookahead == '-') ADVANCE(1306);
      END_STATE();
    case 129:
      if (lookahead == '-') ADVANCE(1898);
      END_STATE();
    case 130:
      if (lookahead == '-') ADVANCE(1030);
      END_STATE();
    case 131:
      if (lookahead == '-') ADVANCE(2038);
      END_STATE();
    case 132:
      if (lookahead == '-') ADVANCE(558);
      END_STATE();
    case 133:
      if (lookahead == '-') ADVANCE(1909);
      END_STATE();
    case 134:
      if (lookahead == '-') ADVANCE(379);
      END_STATE();
    case 135:
      if (lookahead == '-') ADVANCE(931);
      END_STATE();
    case 136:
      if (lookahead == '-') ADVANCE(1468);
      END_STATE();
    case 137:
      if (lookahead == '-') ADVANCE(2712);
      END_STATE();
    case 138:
      if (lookahead == '-') ADVANCE(1995);
      END_STATE();
    case 139:
      if (lookahead == '-') ADVANCE(1492);
      END_STATE();
    case 140:
      if (lookahead == '-') ADVANCE(455);
      END_STATE();
    case 141:
      if (lookahead == '-') ADVANCE(1220);
      END_STATE();
    case 142:
      if (lookahead == '-') ADVANCE(2940);
      END_STATE();
    case 143:
      if (lookahead == '-') ADVANCE(2291);
      END_STATE();
    case 144:
      if (lookahead == '-') ADVANCE(1900);
      END_STATE();
    case 145:
      if (lookahead == '-') ADVANCE(2096);
      END_STATE();
    case 146:
      if (lookahead == '-') ADVANCE(1311);
      END_STATE();
    case 147:
      if (lookahead == '-') ADVANCE(1925);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(2001);
      END_STATE();
    case 149:
      if (lookahead == '-') ADVANCE(943);
      END_STATE();
    case 150:
      if (lookahead == '-') ADVANCE(1659);
      END_STATE();
    case 151:
      if (lookahead == '-') ADVANCE(1731);
      END_STATE();
    case 152:
      if (lookahead == '-') ADVANCE(1267);
      END_STATE();
    case 153:
      if (lookahead == '-') ADVANCE(2000);
      END_STATE();
    case 154:
      if (lookahead == '-') ADVANCE(479);
      END_STATE();
    case 155:
      if (lookahead == '-') ADVANCE(1749);
      END_STATE();
    case 156:
      if (lookahead == '-') ADVANCE(1204);
      END_STATE();
    case 157:
      if (lookahead == '-') ADVANCE(1524);
      if (lookahead == '_') ADVANCE(2239);
      if (lookahead == 'i') ADVANCE(564);
      if (lookahead == 'r') ADVANCE(1049);
      if (lookahead == 's') ADVANCE(691);
      END_STATE();
    case 158:
      if (lookahead == '-') ADVANCE(2097);
      END_STATE();
    case 159:
      if (lookahead == '-') ADVANCE(1888);
      END_STATE();
    case 160:
      if (lookahead == '-') ADVANCE(567);
      END_STATE();
    case 161:
      if (lookahead == '-') ADVANCE(400);
      END_STATE();
    case 162:
      if (lookahead == '-') ADVANCE(2720);
      END_STATE();
    case 163:
      if (lookahead == '-') ADVANCE(2003);
      END_STATE();
    case 164:
      if (lookahead == '-') ADVANCE(1754);
      END_STATE();
    case 165:
      if (lookahead == '-') ADVANCE(1205);
      END_STATE();
    case 166:
      if (lookahead == '-') ADVANCE(3026);
      END_STATE();
    case 167:
      if (lookahead == '-') ADVANCE(2098);
      END_STATE();
    case 168:
      if (lookahead == '-') ADVANCE(1902);
      END_STATE();
    case 169:
      if (lookahead == '-') ADVANCE(2014);
      END_STATE();
    case 170:
      if (lookahead == '-') ADVANCE(1823);
      END_STATE();
    case 171:
      if (lookahead == '-') ADVANCE(2589);
      END_STATE();
    case 172:
      if (lookahead == '-') ADVANCE(1206);
      END_STATE();
    case 173:
      if (lookahead == '-') ADVANCE(696);
      END_STATE();
    case 174:
      if (lookahead == '-') ADVANCE(1263);
      END_STATE();
    case 175:
      if (lookahead == '-') ADVANCE(2099);
      END_STATE();
    case 176:
      if (lookahead == '-') ADVANCE(1207);
      END_STATE();
    case 177:
      if (lookahead == '-') ADVANCE(2100);
      END_STATE();
    case 178:
      if (lookahead == '-') ADVANCE(1209);
      END_STATE();
    case 179:
      if (lookahead == '-') ADVANCE(1071);
      END_STATE();
    case 180:
      if (lookahead == '-') ADVANCE(1210);
      END_STATE();
    case 181:
      if (lookahead == '-') ADVANCE(1538);
      END_STATE();
    case 182:
      if (lookahead == '-') ADVANCE(1540);
      END_STATE();
    case 183:
      if (lookahead == '-') ADVANCE(746);
      END_STATE();
    case 184:
      if (lookahead == '-') ADVANCE(2866);
      END_STATE();
    case 185:
      if (lookahead == '-') ADVANCE(2941);
      END_STATE();
    case 186:
      if (lookahead == '-') ADVANCE(926);
      END_STATE();
    case 187:
      if (lookahead == '-') ADVANCE(1293);
      END_STATE();
    case 188:
      if (lookahead == '-') ADVANCE(1899);
      END_STATE();
    case 189:
      if (lookahead == '-') ADVANCE(2324);
      END_STATE();
    case 190:
      if (lookahead == '-') ADVANCE(1660);
      END_STATE();
    case 191:
      if (lookahead == '-') ADVANCE(532);
      END_STATE();
    case 192:
      if (lookahead == '-') ADVANCE(2107);
      END_STATE();
    case 193:
      if (lookahead == '-') ADVANCE(1215);
      END_STATE();
    case 194:
      if (lookahead == '-') ADVANCE(2766);
      END_STATE();
    case 195:
      if (lookahead == '-') ADVANCE(418);
      END_STATE();
    case 196:
      if (lookahead == '-') ADVANCE(939);
      END_STATE();
    case 197:
      if (lookahead == '-') ADVANCE(2043);
      END_STATE();
    case 198:
      if (lookahead == '-') ADVANCE(1465);
      END_STATE();
    case 199:
      if (lookahead == '-') ADVANCE(512);
      END_STATE();
    case 200:
      if (lookahead == '-') ADVANCE(423);
      END_STATE();
    case 201:
      if (lookahead == '-') ADVANCE(2867);
      END_STATE();
    case 202:
      if (lookahead == '-') ADVANCE(2945);
      END_STATE();
    case 203:
      if (lookahead == '-') ADVANCE(1906);
      END_STATE();
    case 204:
      if (lookahead == '-') ADVANCE(498);
      END_STATE();
    case 205:
      if (lookahead == '-') ADVANCE(2109);
      END_STATE();
    case 206:
      if (lookahead == '-') ADVANCE(1912);
      END_STATE();
    case 207:
      if (lookahead == '-') ADVANCE(427);
      END_STATE();
    case 208:
      if (lookahead == '-') ADVANCE(2050);
      END_STATE();
    case 209:
      if (lookahead == '-') ADVANCE(1472);
      END_STATE();
    case 210:
      if (lookahead == '-') ADVANCE(2868);
      END_STATE();
    case 211:
      if (lookahead == '-') ADVANCE(2112);
      END_STATE();
    case 212:
      if (lookahead == '-') ADVANCE(2141);
      END_STATE();
    case 213:
      if (lookahead == '-') ADVANCE(2869);
      END_STATE();
    case 214:
      if (lookahead == '-') ADVANCE(890);
      END_STATE();
    case 215:
      if (lookahead == '-') ADVANCE(1216);
      END_STATE();
    case 216:
      if (lookahead == '-') ADVANCE(2154);
      END_STATE();
    case 217:
      if (lookahead == '-') ADVANCE(934);
      END_STATE();
    case 218:
      if (lookahead == '-') ADVANCE(1649);
      END_STATE();
    case 219:
      if (lookahead == '-') ADVANCE(1308);
      END_STATE();
    case 220:
      if (lookahead == '-') ADVANCE(851);
      END_STATE();
    case 221:
      if (lookahead == '-') ADVANCE(854);
      END_STATE();
    case 222:
      if (lookahead == '-') ADVANCE(1371);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 223:
      if (lookahead == '-') ADVANCE(1312);
      END_STATE();
    case 224:
      if (lookahead == '-') ADVANCE(3034);
      END_STATE();
    case 225:
      if (lookahead == '-') ADVANCE(3034);
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3016);
      END_STATE();
    case 226:
      if (lookahead == '-') ADVANCE(1588);
      END_STATE();
    case 227:
      if (lookahead == '-') ADVANCE(860);
      END_STATE();
    case 228:
      if (lookahead == '-') ADVANCE(428);
      END_STATE();
    case 229:
      if (lookahead == '-') ADVANCE(891);
      END_STATE();
    case 230:
      if (lookahead == '-') ADVANCE(871);
      END_STATE();
    case 231:
      if (lookahead == '-') ADVANCE(429);
      END_STATE();
    case 232:
      if (lookahead == '-') ADVANCE(1374);
      END_STATE();
    case 233:
      if (lookahead == '-') ADVANCE(430);
      END_STATE();
    case 234:
      if (lookahead == '-') ADVANCE(1219);
      END_STATE();
    case 235:
      if (lookahead == '-') ADVANCE(1375);
      END_STATE();
    case 236:
      if (lookahead == '-') ADVANCE(431);
      END_STATE();
    case 237:
      if (lookahead == '-') ADVANCE(1376);
      END_STATE();
    case 238:
      if (lookahead == '-') ADVANCE(432);
      END_STATE();
    case 239:
      if (lookahead == '-') ADVANCE(1171);
      END_STATE();
    case 240:
      if (lookahead == '-') ADVANCE(2964);
      END_STATE();
    case 241:
      if (lookahead == '-') ADVANCE(2875);
      END_STATE();
    case 242:
      if (lookahead == '-') ADVANCE(885);
      END_STATE();
    case 243:
      if (lookahead == '-') ADVANCE(1935);
      END_STATE();
    case 244:
      if (lookahead == '-') ADVANCE(1661);
      END_STATE();
    case 245:
      if (lookahead == '-') ADVANCE(1826);
      END_STATE();
    case 246:
      if (lookahead == '-') ADVANCE(941);
      END_STATE();
    case 247:
      if (lookahead == '-') ADVANCE(1224);
      END_STATE();
    case 248:
      if (lookahead == '-') ADVANCE(1662);
      END_STATE();
    case 249:
      if (lookahead == '-') ADVANCE(527);
      END_STATE();
    case 250:
      if (lookahead == '-') ADVANCE(2143);
      END_STATE();
    case 251:
      if (lookahead == '-') ADVANCE(2211);
      END_STATE();
    case 252:
      if (lookahead == '-') ADVANCE(2675);
      END_STATE();
    case 253:
      if (lookahead == '-') ADVANCE(945);
      END_STATE();
    case 254:
      if (lookahead == '-') ADVANCE(1487);
      END_STATE();
    case 255:
      if (lookahead == '-') ADVANCE(946);
      END_STATE();
    case 256:
      if (lookahead == '-') ADVANCE(1946);
      END_STATE();
    case 257:
      if (lookahead == '-') ADVANCE(889);
      END_STATE();
    case 258:
      if (lookahead == '-') ADVANCE(948);
      END_STATE();
    case 259:
      if (lookahead == '-') ADVANCE(1321);
      END_STATE();
    case 260:
      if (lookahead == '-') ADVANCE(604);
      END_STATE();
    case 261:
      if (lookahead == '-') ADVANCE(2144);
      END_STATE();
    case 262:
      if (lookahead == '-') ADVANCE(905);
      END_STATE();
    case 263:
      if (lookahead == '/') ADVANCE(3446);
      END_STATE();
    case 264:
      if (lookahead == '/') ADVANCE(3446);
      if (lookahead == '_') ADVANCE(2238);
      END_STATE();
    case 265:
      if (lookahead == '/') ADVANCE(3047);
      END_STATE();
    case 266:
      if (lookahead == '/') ADVANCE(265);
      END_STATE();
    case 267:
      if (lookahead == '0') ADVANCE(296);
      END_STATE();
    case 268:
      if (lookahead == '0') ADVANCE(3121);
      END_STATE();
    case 269:
      if (lookahead == '0') ADVANCE(3119);
      END_STATE();
    case 270:
      if (lookahead == '0') ADVANCE(3477);
      END_STATE();
    case 271:
      ADVANCE_MAP(
        '0', 3323,
        'H', 3326,
        'I', 3295,
        'L', 3298,
        'M', 3302,
        'P', 3327,
        'T', 3306,
        'h', 2245,
        'i', 2714,
        'l', 2708,
        'm', 2403,
        'p', 2272,
        't', 2783,
        'C', 3292,
        'c', 3292,
        'E', 3322,
        'e', 3322,
        'F', 3285,
        'f', 3285,
      );
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'd')) ADVANCE(3345);
      END_STATE();
    case 272:
      ADVANCE_MAP(
        '0', 3433,
        'B', 2820,
        'b', 2820,
        'D', 2269,
        'd', 2269,
        'F', 2556,
        'f', 2556,
        'G', 2670,
        'g', 2670,
        'K', 2843,
        'k', 2843,
        'L', 2713,
        'l', 2713,
        'N', 2726,
        'n', 2726,
        'O', 2758,
        'o', 2758,
        'P', 2488,
        'p', 2488,
        'R', 2407,
        'r', 2407,
        'S', 2429,
        's', 2429,
        'U', 2650,
        'u', 2650,
        'W', 2573,
        'w', 2573,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3439);
      END_STATE();
    case 273:
      if (lookahead == '0') ADVANCE(3274);
      END_STATE();
    case 274:
      if (lookahead == '0') ADVANCE(3275);
      END_STATE();
    case 275:
      ADVANCE_MAP(
        '0', 3444,
        'A', 2850,
        'a', 2850,
        'B', 2255,
        'b', 2255,
        'G', 2709,
        'g', 2709,
        'N', 2728,
        'n', 2728,
        'U', 2644,
        'u', 2644,
        'Z', 2528,
        'z', 2528,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3015);
      END_STATE();
    case 276:
      if (lookahead == '0') ADVANCE(267);
      END_STATE();
    case 277:
      if (lookahead == '0') ADVANCE(2980);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2721);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2732);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2501);
      END_STATE();
    case 278:
      if (lookahead == '1') ADVANCE(276);
      END_STATE();
    case 279:
      if (lookahead == '1') ADVANCE(293);
      if (lookahead == '2') ADVANCE(303);
      END_STATE();
    case 280:
      if (lookahead == '1') ADVANCE(3204);
      if (lookahead == '2') ADVANCE(3203);
      END_STATE();
    case 281:
      if (lookahead == '1') ADVANCE(3477);
      if (lookahead == '2') ADVANCE(292);
      if (lookahead == '3') ADVANCE(312);
      if (lookahead == '5') ADVANCE(284);
      END_STATE();
    case 282:
      if (lookahead == '1') ADVANCE(3208);
      END_STATE();
    case 283:
      if (lookahead == '1') ADVANCE(307);
      END_STATE();
    case 284:
      if (lookahead == '1') ADVANCE(291);
      END_STATE();
    case 285:
      ADVANCE_MAP(
        '2', 1199,
        'E', 2305,
        'H', 2687,
        'I', 2469,
        'e', 336,
        'h', 339,
        'i', 332,
        'k', 1043,
        't', 366,
        'O', 2782,
        'o', 2782,
        'U', 2280,
        'u', 2280,
      );
      END_STATE();
    case 286:
      if (lookahead == '2') ADVANCE(3475);
      END_STATE();
    case 287:
      if (lookahead == '2') ADVANCE(298);
      if (lookahead == '4') ADVANCE(315);
      END_STATE();
    case 288:
      if (lookahead == '2') ADVANCE(3061);
      END_STATE();
    case 289:
      if (lookahead == '2') ADVANCE(3062);
      END_STATE();
    case 290:
      if (lookahead == '2') ADVANCE(3478);
      END_STATE();
    case 291:
      if (lookahead == '2') ADVANCE(3477);
      END_STATE();
    case 292:
      if (lookahead == '2') ADVANCE(297);
      if (lookahead == '5') ADVANCE(306);
      END_STATE();
    case 293:
      if (lookahead == '2') ADVANCE(309);
      if (lookahead == '9') ADVANCE(286);
      END_STATE();
    case 294:
      if (lookahead == '2') ADVANCE(37);
      END_STATE();
    case 295:
      if (lookahead == '2') ADVANCE(301);
      if (lookahead == '4') ADVANCE(317);
      END_STATE();
    case 296:
      if (lookahead == '3') ADVANCE(3264);
      END_STATE();
    case 297:
      if (lookahead == '4') ADVANCE(3477);
      END_STATE();
    case 298:
      if (lookahead == '4') ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == '4') ADVANCE(268);
      END_STATE();
    case 300:
      if (lookahead == '4') ADVANCE(273);
      END_STATE();
    case 301:
      if (lookahead == '4') ADVANCE(300);
      END_STATE();
    case 302:
      if (lookahead == '5') ADVANCE(3475);
      END_STATE();
    case 303:
      if (lookahead == '5') ADVANCE(305);
      END_STATE();
    case 304:
      if (lookahead == '5') ADVANCE(321);
      END_STATE();
    case 305:
      if (lookahead == '6') ADVANCE(3475);
      END_STATE();
    case 306:
      if (lookahead == '6') ADVANCE(3477);
      END_STATE();
    case 307:
      if (lookahead == '6') ADVANCE(270);
      END_STATE();
    case 308:
      if (lookahead == '7') ADVANCE(3122);
      if (lookahead == '8') ADVANCE(3123);
      END_STATE();
    case 309:
      if (lookahead == '8') ADVANCE(3475);
      END_STATE();
    case 310:
      if (lookahead == '8') ADVANCE(3203);
      END_STATE();
    case 311:
      if (lookahead == '8') ADVANCE(304);
      END_STATE();
    case 312:
      if (lookahead == '8') ADVANCE(297);
      END_STATE();
    case 313:
      if (lookahead == '8') ADVANCE(311);
      END_STATE();
    case 314:
      if (lookahead == '8') ADVANCE(269);
      END_STATE();
    case 315:
      if (lookahead == '8') ADVANCE(314);
      END_STATE();
    case 316:
      if (lookahead == '8') ADVANCE(274);
      END_STATE();
    case 317:
      if (lookahead == '8') ADVANCE(316);
      END_STATE();
    case 318:
      if (lookahead == '8') ADVANCE(88);
      END_STATE();
    case 319:
      if (lookahead == '8') ADVANCE(243);
      END_STATE();
    case 320:
      if (lookahead == '9') ADVANCE(286);
      END_STATE();
    case 321:
      if (lookahead == '9') ADVANCE(65);
      END_STATE();
    case 322:
      if (lookahead == ':') ADVANCE(3215);
      END_STATE();
    case 323:
      if (lookahead == ':') ADVANCE(266);
      END_STATE();
    case 324:
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(323);
      END_STATE();
    case 325:
      if (lookahead == '=') ADVANCE(3451);
      END_STATE();
    case 326:
      if (lookahead == 'A') ADVANCE(2282);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'p') ADVANCE(1246);
      END_STATE();
    case 327:
      if (lookahead == 'B') ADVANCE(2605);
      if (lookahead == 'b') ADVANCE(335);
      END_STATE();
    case 328:
      if (lookahead == 'E') ADVANCE(2437);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'n') ADVANCE(1495);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2503);
      END_STATE();
    case 329:
      if (lookahead == 'E') ADVANCE(2953);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == 'f') ADVANCE(460);
      END_STATE();
    case 330:
      if (lookahead == 'E') ADVANCE(2331);
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 331:
      if (lookahead == 'F') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 332:
      if (lookahead == 'G') ADVANCE(264);
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 333:
      if (lookahead == 'I') ADVANCE(2848);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 334:
      ADVANCE_MAP(
        'L', 2480,
        'd', 537,
        'g', 656,
        'l', 1242,
        'r', 1335,
        's', 1197,
        'u', 1982,
        'E', 2830,
        'e', 2830,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 335:
      if (lookahead == 'L') ADVANCE(2394);
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 336:
      if (lookahead == 'N') ADVANCE(2847);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2784);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2371);
      END_STATE();
    case 337:
      if (lookahead == 'O') ADVANCE(2646);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 338:
      if (lookahead == 'O') ADVANCE(2349);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2346);
      END_STATE();
    case 339:
      if (lookahead == 'O') ADVANCE(2970);
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 340:
      if (lookahead == 'O') ADVANCE(2814);
      if (lookahead == 'e') ADVANCE(1699);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2786);
      END_STATE();
    case 341:
      if (lookahead == 'P') ADVANCE(2541);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(1992);
      if (lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 342:
      if (lookahead == 'R') ADVANCE(2908);
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 343:
      ADVANCE_MAP(
        'S', 2518,
        's', 774,
        'K', 2373,
        'k', 2373,
        'N', 2699,
        'n', 2699,
        'O', 2648,
        'o', 2648,
        'P', 2496,
        'p', 2496,
        'U', 2543,
        'u', 2543,
      );
      END_STATE();
    case 344:
      ADVANCE_MAP(
        'S', 2235,
        'T', 2466,
        'n', 965,
        's', 669,
        't', 331,
        'I', 2332,
        'i', 2332,
        'R', 2590,
        'r', 2590,
      );
      END_STATE();
    case 345:
      if (lookahead == 'S') ADVANCE(2232);
      if (lookahead == 'g') ADVANCE(663);
      if (lookahead == 'r') ADVANCE(1336);
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 346:
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 347:
      if (lookahead == 'T') ADVANCE(3037);
      END_STATE();
    case 348:
      if (lookahead == 'W') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(32);
      END_STATE();
    case 349:
      if (lookahead == 'X') ADVANCE(2737);
      if (lookahead == 'm') ADVANCE(1081);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead == 's') ADVANCE(465);
      if (lookahead == 'x') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 350:
      if (lookahead == 'Y') ADVANCE(351);
      if (lookahead == 'y') ADVANCE(157);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2751);
      END_STATE();
    case 351:
      if (lookahead == '_') ADVANCE(2239);
      END_STATE();
    case 352:
      if (lookahead == '_') ADVANCE(2237);
      END_STATE();
    case 353:
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'o') ADVANCE(1675);
      if (lookahead == 'u') ADVANCE(1240);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 354:
      if (lookahead == 'a') ADVANCE(1396);
      if (lookahead == 'i') ADVANCE(1397);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2679);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2344);
      END_STATE();
    case 355:
      ADVANCE_MAP(
        'a', 1867,
        'e', 1696,
        'g', 1607,
        'h', 1583,
        'i', 1451,
        'r', 657,
        'U', 2280,
        'u', 2280,
      );
      END_STATE();
    case 356:
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'c') ADVANCE(1695);
      END_STATE();
    case 357:
      if (lookahead == 'a') ADVANCE(2181);
      END_STATE();
    case 358:
      ADVANCE_MAP(
        'a', 1245,
        'c', 1511,
        'd', 653,
        'e', 1381,
        'f', 1565,
        'g', 1678,
        'i', 1398,
        'k', 661,
        'm', 370,
        'p', 694,
        'r', 372,
        's', 665,
        't', 892,
        'u', 1908,
      );
      END_STATE();
    case 359:
      if (lookahead == 'a') ADVANCE(3160);
      END_STATE();
    case 360:
      if (lookahead == 'a') ADVANCE(3059);
      END_STATE();
    case 361:
      if (lookahead == 'a') ADVANCE(3060);
      END_STATE();
    case 362:
      if (lookahead == 'a') ADVANCE(2085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(3042);
      END_STATE();
    case 363:
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 364:
      if (lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 365:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 366:
      if (lookahead == 'a') ADVANCE(1983);
      END_STATE();
    case 367:
      if (lookahead == 'a') ADVANCE(1631);
      END_STATE();
    case 368:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 369:
      if (lookahead == 'a') ADVANCE(1454);
      if (lookahead == 'e') ADVANCE(1405);
      END_STATE();
    case 370:
      if (lookahead == 'a') ADVANCE(1494);
      END_STATE();
    case 371:
      if (lookahead == 'a') ADVANCE(542);
      END_STATE();
    case 372:
      if (lookahead == 'a') ADVANCE(1402);
      if (lookahead == 'e') ADVANCE(1674);
      END_STATE();
    case 373:
      if (lookahead == 'a') ADVANCE(1897);
      END_STATE();
    case 374:
      if (lookahead == 'a') ADVANCE(2116);
      END_STATE();
    case 375:
      if (lookahead == 'a') ADVANCE(1319);
      END_STATE();
    case 376:
      if (lookahead == 'a') ADVANCE(1980);
      END_STATE();
    case 377:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 378:
      if (lookahead == 'a') ADVANCE(1326);
      END_STATE();
    case 379:
      if (lookahead == 'a') ADVANCE(1251);
      END_STATE();
    case 380:
      if (lookahead == 'a') ADVANCE(1328);
      END_STATE();
    case 381:
      if (lookahead == 'a') ADVANCE(1301);
      END_STATE();
    case 382:
      if (lookahead == 'a') ADVANCE(1752);
      END_STATE();
    case 383:
      if (lookahead == 'a') ADVANCE(693);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead == 's') ADVANCE(1055);
      END_STATE();
    case 384:
      if (lookahead == 'a') ADVANCE(1870);
      END_STATE();
    case 385:
      if (lookahead == 'a') ADVANCE(1634);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(1965);
      END_STATE();
    case 387:
      if (lookahead == 'a') ADVANCE(1998);
      END_STATE();
    case 388:
      if (lookahead == 'a') ADVANCE(1763);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(1708);
      END_STATE();
    case 390:
      if (lookahead == 'a') ADVANCE(1973);
      END_STATE();
    case 391:
      if (lookahead == 'a') ADVANCE(1721);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(1716);
      END_STATE();
    case 393:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 394:
      if (lookahead == 'a') ADVANCE(1252);
      if (lookahead == 'i') ADVANCE(1004);
      if (lookahead == 'l') ADVANCE(765);
      if (lookahead == 's') ADVANCE(819);
      END_STATE();
    case 395:
      if (lookahead == 'a') ADVANCE(1211);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(1266);
      if (lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 397:
      if (lookahead == 'a') ADVANCE(2024);
      END_STATE();
    case 398:
      if (lookahead == 'a') ADVANCE(1884);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(1449);
      END_STATE();
    case 400:
      if (lookahead == 'a') ADVANCE(1262);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(2016);
      END_STATE();
    case 402:
      if (lookahead == 'a') ADVANCE(1758);
      END_STATE();
    case 403:
      if (lookahead == 'a') ADVANCE(2185);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(1552);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(1344);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(1452);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(2018);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(1274);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(1345);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(1208);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(1322);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(1347);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(1352);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(1354);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(1282);
      if (lookahead == 's') ADVANCE(767);
      END_STATE();
    case 416:
      if (lookahead == 'a') ADVANCE(1361);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(496);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(1281);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(1464);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(1788);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(1791);
      END_STATE();
    case 422:
      if (lookahead == 'a') ADVANCE(2048);
      END_STATE();
    case 423:
      if (lookahead == 'a') ADVANCE(1305);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(1362);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(1284);
      if (lookahead == 'l') ADVANCE(789);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(1363);
      END_STATE();
    case 427:
      if (lookahead == 'a') ADVANCE(1285);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(1287);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(1288);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(1291);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(1292);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(1294);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(2039);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(2118);
      END_STATE();
    case 435:
      if (lookahead == 'a') ADVANCE(1807);
      END_STATE();
    case 436:
      if (lookahead == 'a') ADVANCE(2047);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(2053);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(2055);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(2059);
      END_STATE();
    case 440:
      if (lookahead == 'a') ADVANCE(2061);
      END_STATE();
    case 441:
      if (lookahead == 'a') ADVANCE(2062);
      END_STATE();
    case 442:
      if (lookahead == 'a') ADVANCE(2063);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(1671);
      END_STATE();
    case 444:
      if (lookahead == 'b') ADVANCE(2083);
      if (lookahead == 'f') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(3043);
      END_STATE();
    case 445:
      if (lookahead == 'b') ADVANCE(3112);
      END_STATE();
    case 446:
      if (lookahead == 'b') ADVANCE(3076);
      END_STATE();
    case 447:
      if (lookahead == 'b') ADVANCE(3077);
      END_STATE();
    case 448:
      if (lookahead == 'b') ADVANCE(1278);
      END_STATE();
    case 449:
      if (lookahead == 'b') ADVANCE(1516);
      if (lookahead == 'i') ADVANCE(921);
      END_STATE();
    case 450:
      if (lookahead == 'b') ADVANCE(908);
      END_STATE();
    case 451:
      if (lookahead == 'b') ADVANCE(2090);
      END_STATE();
    case 452:
      if (lookahead == 'b') ADVANCE(1264);
      END_STATE();
    case 453:
      if (lookahead == 'b') ADVANCE(761);
      END_STATE();
    case 454:
      if (lookahead == 'b') ADVANCE(198);
      END_STATE();
    case 455:
      if (lookahead == 'b') ADVANCE(1265);
      END_STATE();
    case 456:
      if (lookahead == 'b') ADVANCE(1217);
      END_STATE();
    case 457:
      if (lookahead == 'b') ADVANCE(1218);
      END_STATE();
    case 458:
      if (lookahead == 'b') ADVANCE(901);
      END_STATE();
    case 459:
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 460:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 461:
      if (lookahead == 'c') ADVANCE(1190);
      if (lookahead == 'd') ADVANCE(1050);
      if (lookahead == 'm') ADVANCE(1519);
      END_STATE();
    case 462:
      if (lookahead == 'c') ADVANCE(1556);
      if (lookahead == 's') ADVANCE(824);
      END_STATE();
    case 463:
      if (lookahead == 'c') ADVANCE(1166);
      if (lookahead == 'd') ADVANCE(1169);
      END_STATE();
    case 464:
      if (lookahead == 'c') ADVANCE(1243);
      if (lookahead == 'p') ADVANCE(2110);
      if (lookahead == 't') ADVANCE(676);
      END_STATE();
    case 465:
      if (lookahead == 'c') ADVANCE(367);
      END_STATE();
    case 466:
      if (lookahead == 'c') ADVANCE(1021);
      if (lookahead == 'k') ADVANCE(790);
      END_STATE();
    case 467:
      if (lookahead == 'c') ADVANCE(2212);
      END_STATE();
    case 468:
      if (lookahead == 'c') ADVANCE(1194);
      END_STATE();
    case 469:
      if (lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 470:
      if (lookahead == 'c') ADVANCE(1195);
      END_STATE();
    case 471:
      if (lookahead == 'c') ADVANCE(1023);
      END_STATE();
    case 472:
      if (lookahead == 'c') ADVANCE(1196);
      END_STATE();
    case 473:
      if (lookahead == 'c') ADVANCE(1022);
      END_STATE();
    case 474:
      if (lookahead == 'c') ADVANCE(1523);
      if (lookahead == 'f') ADVANCE(1058);
      if (lookahead == 'i') ADVANCE(477);
      if (lookahead == 'k') ADVANCE(666);
      if (lookahead == 's') ADVANCE(776);
      if (lookahead == 'w') ADVANCE(1212);
      END_STATE();
    case 475:
      if (lookahead == 'c') ADVANCE(1990);
      END_STATE();
    case 476:
      if (lookahead == 'c') ADVANCE(1517);
      if (lookahead == 'd') ADVANCE(675);
      END_STATE();
    case 477:
      if (lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 478:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 479:
      if (lookahead == 'c') ADVANCE(377);
      END_STATE();
    case 480:
      if (lookahead == 'c') ADVANCE(2176);
      END_STATE();
    case 481:
      if (lookahead == 'c') ADVANCE(1148);
      END_STATE();
    case 482:
      if (lookahead == 'c') ADVANCE(1790);
      END_STATE();
    case 483:
      if (lookahead == 'c') ADVANCE(1742);
      if (lookahead == 'm') ADVANCE(595);
      if (lookahead == 't') ADVANCE(1054);
      if (lookahead == 'v') ADVANCE(381);
      END_STATE();
    case 484:
      if (lookahead == 'c') ADVANCE(614);
      END_STATE();
    case 485:
      if (lookahead == 'c') ADVANCE(1745);
      END_STATE();
    case 486:
      if (lookahead == 'c') ADVANCE(616);
      END_STATE();
    case 487:
      if (lookahead == 'c') ADVANCE(1975);
      END_STATE();
    case 488:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 489:
      if (lookahead == 'c') ADVANCE(643);
      END_STATE();
    case 490:
      if (lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 491:
      if (lookahead == 'c') ADVANCE(1026);
      END_STATE();
    case 492:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 493:
      if (lookahead == 'c') ADVANCE(1343);
      END_STATE();
    case 494:
      if (lookahead == 'c') ADVANCE(1591);
      if (lookahead == 's') ADVANCE(902);
      END_STATE();
    case 495:
      if (lookahead == 'c') ADVANCE(1047);
      if (lookahead == 'q') ADVANCE(2081);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2684);
      END_STATE();
    case 496:
      if (lookahead == 'c') ADVANCE(1028);
      END_STATE();
    case 497:
      if (lookahead == 'c') ADVANCE(1833);
      if (lookahead == 's') ADVANCE(836);
      END_STATE();
    case 498:
      if (lookahead == 'c') ADVANCE(1029);
      END_STATE();
    case 499:
      if (lookahead == 'c') ADVANCE(1191);
      if (lookahead == 'd') ADVANCE(1076);
      if (lookahead == 'l') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(2122);
      if (lookahead == 's') ADVANCE(1172);
      END_STATE();
    case 500:
      if (lookahead == 'c') ADVANCE(1346);
      END_STATE();
    case 501:
      if (lookahead == 'c') ADVANCE(1221);
      END_STATE();
    case 502:
      if (lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 503:
      if (lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 504:
      if (lookahead == 'c') ADVANCE(1348);
      END_STATE();
    case 505:
      if (lookahead == 'c') ADVANCE(2188);
      END_STATE();
    case 506:
      if (lookahead == 'c') ADVANCE(1535);
      END_STATE();
    case 507:
      if (lookahead == 'c') ADVANCE(740);
      END_STATE();
    case 508:
      if (lookahead == 'c') ADVANCE(742);
      END_STATE();
    case 509:
      if (lookahead == 'c') ADVANCE(744);
      END_STATE();
    case 510:
      if (lookahead == 'c') ADVANCE(771);
      END_STATE();
    case 511:
      if (lookahead == 'c') ADVANCE(760);
      END_STATE();
    case 512:
      if (lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 513:
      if (lookahead == 'c') ADVANCE(1750);
      END_STATE();
    case 514:
      if (lookahead == 'c') ADVANCE(837);
      if (lookahead == 's') ADVANCE(1084);
      END_STATE();
    case 515:
      if (lookahead == 'c') ADVANCE(1147);
      END_STATE();
    case 516:
      if (lookahead == 'c') ADVANCE(2196);
      END_STATE();
    case 517:
      if (lookahead == 'c') ADVANCE(1154);
      END_STATE();
    case 518:
      if (lookahead == 'c') ADVANCE(2201);
      END_STATE();
    case 519:
      if (lookahead == 'c') ADVANCE(1160);
      END_STATE();
    case 520:
      if (lookahead == 'c') ADVANCE(1162);
      END_STATE();
    case 521:
      if (lookahead == 'c') ADVANCE(1163);
      END_STATE();
    case 522:
      if (lookahead == 'c') ADVANCE(841);
      if (lookahead == 'o') ADVANCE(2120);
      END_STATE();
    case 523:
      if (lookahead == 'c') ADVANCE(846);
      if (lookahead == 'r') ADVANCE(1872);
      END_STATE();
    case 524:
      if (lookahead == 'c') ADVANCE(1828);
      END_STATE();
    case 525:
      if (lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 526:
      if (lookahead == 'c') ADVANCE(1223);
      END_STATE();
    case 527:
      if (lookahead == 'c') ADVANCE(866);
      if (lookahead == 's') ADVANCE(1179);
      END_STATE();
    case 528:
      if (lookahead == 'c') ADVANCE(1830);
      END_STATE();
    case 529:
      if (lookahead == 'c') ADVANCE(873);
      if (lookahead == 'k') ADVANCE(672);
      if (lookahead == 'n') ADVANCE(788);
      if (lookahead == 'p') ADVANCE(1728);
      if (lookahead == 'r') ADVANCE(856);
      if (lookahead == 's') ADVANCE(1189);
      END_STATE();
    case 530:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 531:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 532:
      if (lookahead == 'c') ADVANCE(1183);
      END_STATE();
    case 533:
      if (lookahead == 'c') ADVANCE(1037);
      if (lookahead == 'k') ADVANCE(883);
      if (lookahead == 't') ADVANCE(1707);
      END_STATE();
    case 534:
      if (lookahead == 'c') ADVANCE(1602);
      END_STATE();
    case 535:
      if (lookahead == 'c') ADVANCE(1320);
      END_STATE();
    case 536:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 537:
      if (lookahead == 'd') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 538:
      if (lookahead == 'd') ADVANCE(3394);
      END_STATE();
    case 539:
      if (lookahead == 'd') ADVANCE(3352);
      if (lookahead == 'i') ADVANCE(1268);
      END_STATE();
    case 540:
      if (lookahead == 'd') ADVANCE(3350);
      if (lookahead == 'i') ADVANCE(1269);
      END_STATE();
    case 541:
      if (lookahead == 'd') ADVANCE(3383);
      if (lookahead == 'i') ADVANCE(1270);
      END_STATE();
    case 542:
      if (lookahead == 'd') ADVANCE(3113);
      END_STATE();
    case 543:
      if (lookahead == 'd') ADVANCE(3376);
      if (lookahead == 'i') ADVANCE(1275);
      END_STATE();
    case 544:
      if (lookahead == 'd') ADVANCE(3230);
      END_STATE();
    case 545:
      if (lookahead == 'd') ADVANCE(3231);
      END_STATE();
    case 546:
      if (lookahead == 'd') ADVANCE(3142);
      END_STATE();
    case 547:
      if (lookahead == 'd') ADVANCE(3148);
      END_STATE();
    case 548:
      if (lookahead == 'd') ADVANCE(3114);
      END_STATE();
    case 549:
      if (lookahead == 'd') ADVANCE(3387);
      END_STATE();
    case 550:
      if (lookahead == 'd') ADVANCE(3146);
      END_STATE();
    case 551:
      if (lookahead == 'd') ADVANCE(3147);
      END_STATE();
    case 552:
      if (lookahead == 'd') ADVANCE(580);
      END_STATE();
    case 553:
      if (lookahead == 'd') ADVANCE(446);
      END_STATE();
    case 554:
      if (lookahead == 'd') ADVANCE(447);
      END_STATE();
    case 555:
      if (lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 556:
      if (lookahead == 'd') ADVANCE(589);
      END_STATE();
    case 557:
      if (lookahead == 'd') ADVANCE(1520);
      END_STATE();
    case 558:
      if (lookahead == 'd') ADVANCE(1574);
      END_STATE();
    case 559:
      if (lookahead == 'd') ADVANCE(1840);
      END_STATE();
    case 560:
      if (lookahead == 'd') ADVANCE(612);
      END_STATE();
    case 561:
      if (lookahead == 'd') ADVANCE(613);
      END_STATE();
    case 562:
      if (lookahead == 'd') ADVANCE(1846);
      END_STATE();
    case 563:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 564:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 565:
      if (lookahead == 'd') ADVANCE(704);
      END_STATE();
    case 566:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 567:
      if (lookahead == 'd') ADVANCE(707);
      END_STATE();
    case 568:
      if (lookahead == 'd') ADVANCE(620);
      END_STATE();
    case 569:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 570:
      if (lookahead == 'd') ADVANCE(627);
      END_STATE();
    case 571:
      if (lookahead == 'd') ADVANCE(629);
      END_STATE();
    case 572:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 573:
      if (lookahead == 'd') ADVANCE(636);
      END_STATE();
    case 574:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 575:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 576:
      if (lookahead == 'd') ADVANCE(671);
      END_STATE();
    case 577:
      if (lookahead == 'd') ADVANCE(1875);
      if (lookahead == 'l') ADVANCE(389);
      if (lookahead == 'p') ADVANCE(1789);
      if (lookahead == 's') ADVANCE(1621);
      END_STATE();
    case 578:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 579:
      if (lookahead == 'd') ADVANCE(686);
      END_STATE();
    case 580:
      if (lookahead == 'd') ADVANCE(775);
      END_STATE();
    case 581:
      if (lookahead == 'd') ADVANCE(692);
      END_STATE();
    case 582:
      if (lookahead == 'd') ADVANCE(1086);
      END_STATE();
    case 583:
      if (lookahead == 'd') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(1818);
      END_STATE();
    case 584:
      if (lookahead == 'd') ADVANCE(772);
      END_STATE();
    case 585:
      if (lookahead == 'd') ADVANCE(753);
      END_STATE();
    case 586:
      if (lookahead == 'd') ADVANCE(703);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2525);
      END_STATE();
    case 587:
      if (lookahead == 'd') ADVANCE(797);
      END_STATE();
    case 588:
      if (lookahead == 'd') ADVANCE(587);
      END_STATE();
    case 589:
      if (lookahead == 'd') ADVANCE(810);
      END_STATE();
    case 590:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 591:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 592:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 593:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 594:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 595:
      if (lookahead == 'd') ADVANCE(525);
      END_STATE();
    case 596:
      if (lookahead == 'd') ADVANCE(1178);
      if (lookahead == 'k') ADVANCE(813);
      END_STATE();
    case 597:
      if (lookahead == 'd') ADVANCE(881);
      END_STATE();
    case 598:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 599:
      if (lookahead == 'd') ADVANCE(893);
      END_STATE();
    case 600:
      if (lookahead == 'd') ADVANCE(898);
      END_STATE();
    case 601:
      if (lookahead == 'd') ADVANCE(600);
      END_STATE();
    case 602:
      if (lookahead == 'd') ADVANCE(899);
      END_STATE();
    case 603:
      if (lookahead == 'd') ADVANCE(602);
      END_STATE();
    case 604:
      if (lookahead == 'd') ADVANCE(1604);
      END_STATE();
    case 605:
      if (lookahead == 'd') ADVANCE(1192);
      if (lookahead == 'n') ADVANCE(1600);
      if (lookahead == 'p') ADVANCE(1593);
      END_STATE();
    case 606:
      ADVANCE_MAP(
        'e', 1698,
        'h', 2080,
        'i', 1606,
        'o', 1324,
        'A', 2630,
        'a', 2630,
        'L', 2393,
        'l', 2393,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 607:
      if (lookahead == 'e') ADVANCE(964);
      if (lookahead == 'i') ADVANCE(1365);
      if (lookahead == 'o') ADVANCE(459);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2845);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2231);
      END_STATE();
    case 608:
      if (lookahead == 'e') ADVANCE(2158);
      if (lookahead == 'h') ADVANCE(1743);
      if (lookahead == 'o') ADVANCE(913);
      if (lookahead == 'r') ADVANCE(2084);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2686);
      END_STATE();
    case 609:
      if (lookahead == 'e') ADVANCE(3057);
      END_STATE();
    case 610:
      if (lookahead == 'e') ADVANCE(3354);
      END_STATE();
    case 611:
      if (lookahead == 'e') ADVANCE(3132);
      END_STATE();
    case 612:
      if (lookahead == 'e') ADVANCE(3270);
      END_STATE();
    case 613:
      if (lookahead == 'e') ADVANCE(3110);
      END_STATE();
    case 614:
      if (lookahead == 'e') ADVANCE(3080);
      END_STATE();
    case 615:
      if (lookahead == 'e') ADVANCE(3252);
      END_STATE();
    case 616:
      if (lookahead == 'e') ADVANCE(3273);
      END_STATE();
    case 617:
      if (lookahead == 'e') ADVANCE(3378);
      END_STATE();
    case 618:
      if (lookahead == 'e') ADVANCE(3125);
      END_STATE();
    case 619:
      if (lookahead == 'e') ADVANCE(3353);
      END_STATE();
    case 620:
      if (lookahead == 'e') ADVANCE(3111);
      END_STATE();
    case 621:
      if (lookahead == 'e') ADVANCE(3351);
      END_STATE();
    case 622:
      if (lookahead == 'e') ADVANCE(3384);
      END_STATE();
    case 623:
      if (lookahead == 'e') ADVANCE(3075);
      END_STATE();
    case 624:
      if (lookahead == 'e') ADVANCE(3368);
      END_STATE();
    case 625:
      if (lookahead == 'e') ADVANCE(3201);
      END_STATE();
    case 626:
      if (lookahead == 'e') ADVANCE(3081);
      END_STATE();
    case 627:
      if (lookahead == 'e') ADVANCE(3379);
      END_STATE();
    case 628:
      if (lookahead == 'e') ADVANCE(3165);
      END_STATE();
    case 629:
      if (lookahead == 'e') ADVANCE(3163);
      END_STATE();
    case 630:
      if (lookahead == 'e') ADVANCE(3240);
      END_STATE();
    case 631:
      if (lookahead == 'e') ADVANCE(3167);
      END_STATE();
    case 632:
      if (lookahead == 'e') ADVANCE(3221);
      END_STATE();
    case 633:
      if (lookahead == 'e') ADVANCE(3145);
      END_STATE();
    case 634:
      if (lookahead == 'e') ADVANCE(3377);
      END_STATE();
    case 635:
      if (lookahead == 'e') ADVANCE(3249);
      END_STATE();
    case 636:
      if (lookahead == 'e') ADVANCE(3102);
      END_STATE();
    case 637:
      if (lookahead == 'e') ADVANCE(3073);
      END_STATE();
    case 638:
      if (lookahead == 'e') ADVANCE(3348);
      END_STATE();
    case 639:
      if (lookahead == 'e') ADVANCE(3166);
      END_STATE();
    case 640:
      if (lookahead == 'e') ADVANCE(3388);
      END_STATE();
    case 641:
      if (lookahead == 'e') ADVANCE(3168);
      END_STATE();
    case 642:
      if (lookahead == 'e') ADVANCE(3070);
      END_STATE();
    case 643:
      if (lookahead == 'e') ADVANCE(3277);
      END_STATE();
    case 644:
      if (lookahead == 'e') ADVANCE(3389);
      END_STATE();
    case 645:
      if (lookahead == 'e') ADVANCE(3084);
      END_STATE();
    case 646:
      if (lookahead == 'e') ADVANCE(3347);
      END_STATE();
    case 647:
      if (lookahead == 'e') ADVANCE(3074);
      END_STATE();
    case 648:
      if (lookahead == 'e') ADVANCE(3241);
      END_STATE();
    case 649:
      if (lookahead == 'e') ADVANCE(3138);
      END_STATE();
    case 650:
      if (lookahead == 'e') ADVANCE(3139);
      END_STATE();
    case 651:
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == 'i') ADVANCE(1979);
      END_STATE();
    case 652:
      if (lookahead == 'e') ADVANCE(2159);
      END_STATE();
    case 653:
      if (lookahead == 'e') ADVANCE(916);
      END_STATE();
    case 654:
      if (lookahead == 'e') ADVANCE(2152);
      END_STATE();
    case 655:
      if (lookahead == 'e') ADVANCE(1676);
      END_STATE();
    case 656:
      if (lookahead == 'e') ADVANCE(1456);
      END_STATE();
    case 657:
      if (lookahead == 'e') ADVANCE(1914);
      if (lookahead == 'i') ADVANCE(1337);
      END_STATE();
    case 658:
      if (lookahead == 'e') ADVANCE(2125);
      END_STATE();
    case 659:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 660:
      if (lookahead == 'e') ADVANCE(1447);
      END_STATE();
    case 661:
      if (lookahead == 'e') ADVANCE(2183);
      END_STATE();
    case 662:
      if (lookahead == 'e') ADVANCE(1704);
      END_STATE();
    case 663:
      if (lookahead == 'e') ADVANCE(1915);
      END_STATE();
    case 664:
      if (lookahead == 'e') ADVANCE(1334);
      END_STATE();
    case 665:
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(1002);
      if (lookahead == 'k') ADVANCE(1083);
      if (lookahead == 'y') ADVANCE(1332);
      END_STATE();
    case 666:
      if (lookahead == 'e') ADVANCE(2180);
      END_STATE();
    case 667:
      if (lookahead == 'e') ADVANCE(1403);
      END_STATE();
    case 668:
      if (lookahead == 'e') ADVANCE(1764);
      END_STATE();
    case 669:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2481);
      END_STATE();
    case 670:
      if (lookahead == 'e') ADVANCE(2192);
      END_STATE();
    case 671:
      if (lookahead == 'e') ADVANCE(1924);
      END_STATE();
    case 672:
      if (lookahead == 'e') ADVANCE(2169);
      END_STATE();
    case 673:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 674:
      if (lookahead == 'e') ADVANCE(2198);
      END_STATE();
    case 675:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 676:
      if (lookahead == 'e') ADVANCE(1701);
      END_STATE();
    case 677:
      if (lookahead == 'e') ADVANCE(929);
      END_STATE();
    case 678:
      if (lookahead == 'e') ADVANCE(2027);
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 679:
      if (lookahead == 'e') ADVANCE(2171);
      END_STATE();
    case 680:
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead == 'o') ADVANCE(2092);
      END_STATE();
    case 681:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 682:
      if (lookahead == 'e') ADVANCE(2172);
      END_STATE();
    case 683:
      if (lookahead == 'e') ADVANCE(1726);
      END_STATE();
    case 684:
      if (lookahead == 'e') ADVANCE(2173);
      END_STATE();
    case 685:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 686:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 687:
      if (lookahead == 'e') ADVANCE(1489);
      if (lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 688:
      if (lookahead == 'e') ADVANCE(2174);
      END_STATE();
    case 689:
      if (lookahead == 'e') ADVANCE(1327);
      END_STATE();
    case 690:
      if (lookahead == 'e') ADVANCE(2031);
      END_STATE();
    case 691:
      if (lookahead == 'e') ADVANCE(1785);
      END_STATE();
    case 692:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 693:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 694:
      if (lookahead == 'e') ADVANCE(1700);
      END_STATE();
    case 695:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 696:
      if (lookahead == 'e') ADVANCE(1923);
      END_STATE();
    case 697:
      if (lookahead == 'e') ADVANCE(1697);
      END_STATE();
    case 698:
      if (lookahead == 'e') ADVANCE(2177);
      END_STATE();
    case 699:
      if (lookahead == 'e') ADVANCE(1330);
      END_STATE();
    case 700:
      if (lookahead == 'e') ADVANCE(1227);
      END_STATE();
    case 701:
      if (lookahead == 'e') ADVANCE(2178);
      END_STATE();
    case 702:
      if (lookahead == 'e') ADVANCE(1331);
      END_STATE();
    case 703:
      if (lookahead == 'e') ADVANCE(1679);
      END_STATE();
    case 704:
      if (lookahead == 'e') ADVANCE(1228);
      END_STATE();
    case 705:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 706:
      if (lookahead == 'e') ADVANCE(1249);
      END_STATE();
    case 707:
      if (lookahead == 'e') ADVANCE(1620);
      END_STATE();
    case 708:
      if (lookahead == 'e') ADVANCE(1229);
      END_STATE();
    case 709:
      if (lookahead == 'e') ADVANCE(1230);
      END_STATE();
    case 710:
      if (lookahead == 'e') ADVANCE(1711);
      END_STATE();
    case 711:
      if (lookahead == 'e') ADVANCE(1231);
      END_STATE();
    case 712:
      if (lookahead == 'e') ADVANCE(1963);
      END_STATE();
    case 713:
      if (lookahead == 'e') ADVANCE(1710);
      END_STATE();
    case 714:
      if (lookahead == 'e') ADVANCE(1845);
      END_STATE();
    case 715:
      if (lookahead == 'e') ADVANCE(1235);
      END_STATE();
    case 716:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 717:
      if (lookahead == 'e') ADVANCE(1681);
      END_STATE();
    case 718:
      if (lookahead == 'e') ADVANCE(1850);
      END_STATE();
    case 719:
      if (lookahead == 'e') ADVANCE(1237);
      END_STATE();
    case 720:
      if (lookahead == 'e') ADVANCE(1411);
      END_STATE();
    case 721:
      if (lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 722:
      if (lookahead == 'e') ADVANCE(2002);
      END_STATE();
    case 723:
      if (lookahead == 'e') ADVANCE(1238);
      END_STATE();
    case 724:
      if (lookahead == 'e') ADVANCE(1852);
      END_STATE();
    case 725:
      if (lookahead == 'e') ADVANCE(1853);
      END_STATE();
    case 726:
      if (lookahead == 'e') ADVANCE(1968);
      END_STATE();
    case 727:
      if (lookahead == 'e') ADVANCE(1682);
      END_STATE();
    case 728:
      if (lookahead == 'e') ADVANCE(1683);
      END_STATE();
    case 729:
      if (lookahead == 'e') ADVANCE(1255);
      END_STATE();
    case 730:
      if (lookahead == 'e') ADVANCE(1421);
      END_STATE();
    case 731:
      if (lookahead == 'e') ADVANCE(1858);
      END_STATE();
    case 732:
      if (lookahead == 'e') ADVANCE(1859);
      END_STATE();
    case 733:
      if (lookahead == 'e') ADVANCE(1684);
      END_STATE();
    case 734:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 735:
      if (lookahead == 'e') ADVANCE(1861);
      END_STATE();
    case 736:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 737:
      if (lookahead == 'e') ADVANCE(1748);
      END_STATE();
    case 738:
      if (lookahead == 'e') ADVANCE(1862);
      END_STATE();
    case 739:
      if (lookahead == 'e') ADVANCE(1685);
      END_STATE();
    case 740:
      if (lookahead == 'e') ADVANCE(1864);
      END_STATE();
    case 741:
      if (lookahead == 'e') ADVANCE(1686);
      END_STATE();
    case 742:
      if (lookahead == 'e') ADVANCE(1865);
      END_STATE();
    case 743:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 744:
      if (lookahead == 'e') ADVANCE(1866);
      END_STATE();
    case 745:
      if (lookahead == 'e') ADVANCE(1687);
      END_STATE();
    case 746:
      if (lookahead == 'e') ADVANCE(1755);
      END_STATE();
    case 747:
      if (lookahead == 'e') ADVANCE(1688);
      END_STATE();
    case 748:
      if (lookahead == 'e') ADVANCE(1770);
      END_STATE();
    case 749:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 750:
      if (lookahead == 'e') ADVANCE(1692);
      END_STATE();
    case 751:
      if (lookahead == 'e') ADVANCE(1714);
      END_STATE();
    case 752:
      if (lookahead == 'e') ADVANCE(1693);
      END_STATE();
    case 753:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 754:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 755:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 756:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 757:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 758:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 759:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 760:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 761:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 762:
      if (lookahead == 'e') ADVANCE(1904);
      END_STATE();
    case 763:
      if (lookahead == 'e') ADVANCE(2199);
      END_STATE();
    case 764:
      if (lookahead == 'e') ADVANCE(1744);
      END_STATE();
    case 765:
      if (lookahead == 'e') ADVANCE(2126);
      END_STATE();
    case 766:
      if (lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 767:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 768:
      if (lookahead == 'e') ADVANCE(1349);
      END_STATE();
    case 769:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 770:
      if (lookahead == 'e') ADVANCE(1729);
      END_STATE();
    case 771:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 772:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 773:
      if (lookahead == 'e') ADVANCE(1303);
      END_STATE();
    case 774:
      if (lookahead == 'e') ADVANCE(1905);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2492);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2351);
      END_STATE();
    case 775:
      if (lookahead == 'e') ADVANCE(1440);
      END_STATE();
    case 776:
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(456);
      END_STATE();
    case 777:
      if (lookahead == 'e') ADVANCE(1418);
      END_STATE();
    case 778:
      if (lookahead == 'e') ADVANCE(1415);
      END_STATE();
    case 779:
      if (lookahead == 'e') ADVANCE(1624);
      END_STATE();
    case 780:
      if (lookahead == 'e') ADVANCE(1874);
      END_STATE();
    case 781:
      if (lookahead == 'e') ADVANCE(2128);
      END_STATE();
    case 782:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 783:
      if (lookahead == 'e') ADVANCE(1890);
      END_STATE();
    case 784:
      if (lookahead == 'e') ADVANCE(2008);
      END_STATE();
    case 785:
      if (lookahead == 'e') ADVANCE(1430);
      END_STATE();
    case 786:
      if (lookahead == 'e') ADVANCE(1356);
      END_STATE();
    case 787:
      if (lookahead == 'e') ADVANCE(1416);
      END_STATE();
    case 788:
      if (lookahead == 'e') ADVANCE(2157);
      END_STATE();
    case 789:
      if (lookahead == 'e') ADVANCE(2129);
      END_STATE();
    case 790:
      if (lookahead == 'e') ADVANCE(2186);
      END_STATE();
    case 791:
      if (lookahead == 'e') ADVANCE(1879);
      END_STATE();
    case 792:
      if (lookahead == 'e') ADVANCE(1426);
      END_STATE();
    case 793:
      if (lookahead == 'e') ADVANCE(1477);
      END_STATE();
    case 794:
      if (lookahead == 'e') ADVANCE(2130);
      END_STATE();
    case 795:
      if (lookahead == 'e') ADVANCE(1893);
      END_STATE();
    case 796:
      if (lookahead == 'e') ADVANCE(1801);
      END_STATE();
    case 797:
      if (lookahead == 'e') ADVANCE(1470);
      END_STATE();
    case 798:
      if (lookahead == 'e') ADVANCE(2131);
      END_STATE();
    case 799:
      if (lookahead == 'e') ADVANCE(2200);
      END_STATE();
    case 800:
      if (lookahead == 'e') ADVANCE(1437);
      END_STATE();
    case 801:
      if (lookahead == 'e') ADVANCE(1793);
      END_STATE();
    case 802:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 803:
      if (lookahead == 'e') ADVANCE(2132);
      END_STATE();
    case 804:
      if (lookahead == 'e') ADVANCE(1739);
      END_STATE();
    case 805:
      if (lookahead == 'e') ADVANCE(2133);
      END_STATE();
    case 806:
      if (lookahead == 'e') ADVANCE(2189);
      END_STATE();
    case 807:
      if (lookahead == 'e') ADVANCE(1439);
      END_STATE();
    case 808:
      if (lookahead == 'e') ADVANCE(2134);
      END_STATE();
    case 809:
      if (lookahead == 'e') ADVANCE(2190);
      END_STATE();
    case 810:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 811:
      if (lookahead == 'e') ADVANCE(1441);
      END_STATE();
    case 812:
      if (lookahead == 'e') ADVANCE(2135);
      END_STATE();
    case 813:
      if (lookahead == 'e') ADVANCE(2206);
      END_STATE();
    case 814:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 815:
      if (lookahead == 'e') ADVANCE(1442);
      END_STATE();
    case 816:
      if (lookahead == 'e') ADVANCE(2208);
      END_STATE();
    case 817:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 818:
      if (lookahead == 'e') ADVANCE(1444);
      END_STATE();
    case 819:
      if (lookahead == 'e') ADVANCE(2017);
      END_STATE();
    case 820:
      if (lookahead == 'e') ADVANCE(2065);
      END_STATE();
    case 821:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 822:
      if (lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 823:
      if (lookahead == 'e') ADVANCE(1918);
      if (lookahead == 'i') ADVANCE(1762);
      END_STATE();
    case 824:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 825:
      if (lookahead == 'e') ADVANCE(2193);
      END_STATE();
    case 826:
      if (lookahead == 'e') ADVANCE(1466);
      END_STATE();
    case 827:
      if (lookahead == 'e') ADVANCE(1780);
      END_STATE();
    case 828:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 829:
      if (lookahead == 'e') ADVANCE(2155);
      END_STATE();
    case 830:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 831:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 832:
      if (lookahead == 'e') ADVANCE(1929);
      END_STATE();
    case 833:
      if (lookahead == 'e') ADVANCE(2197);
      END_STATE();
    case 834:
      if (lookahead == 'e') ADVANCE(2139);
      END_STATE();
    case 835:
      if (lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 836:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 837:
      if (lookahead == 'e') ADVANCE(1776);
      END_STATE();
    case 838:
      if (lookahead == 'e') ADVANCE(1473);
      END_STATE();
    case 839:
      if (lookahead == 'e') ADVANCE(1795);
      END_STATE();
    case 840:
      if (lookahead == 'e') ADVANCE(1913);
      END_STATE();
    case 841:
      if (lookahead == 'e') ADVANCE(1778);
      END_STATE();
    case 842:
      if (lookahead == 'e') ADVANCE(1799);
      END_STATE();
    case 843:
      if (lookahead == 'e') ADVANCE(1930);
      END_STATE();
    case 844:
      if (lookahead == 'e') ADVANCE(1476);
      END_STATE();
    case 845:
      if (lookahead == 'e') ADVANCE(1922);
      END_STATE();
    case 846:
      if (lookahead == 'e') ADVANCE(1779);
      END_STATE();
    case 847:
      if (lookahead == 'e') ADVANCE(1916);
      END_STATE();
    case 848:
      if (lookahead == 'e') ADVANCE(1478);
      END_STATE();
    case 849:
      if (lookahead == 'e') ADVANCE(1783);
      END_STATE();
    case 850:
      if (lookahead == 'e') ADVANCE(1917);
      END_STATE();
    case 851:
      if (lookahead == 'e') ADVANCE(2160);
      END_STATE();
    case 852:
      if (lookahead == 'e') ADVANCE(2203);
      END_STATE();
    case 853:
      if (lookahead == 'e') ADVANCE(1931);
      END_STATE();
    case 854:
      if (lookahead == 'e') ADVANCE(2202);
      END_STATE();
    case 855:
      if (lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 856:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 857:
      if (lookahead == 'e') ADVANCE(1792);
      END_STATE();
    case 858:
      if (lookahead == 'e') ADVANCE(1800);
      END_STATE();
    case 859:
      if (lookahead == 'e') ADVANCE(1805);
      END_STATE();
    case 860:
      if (lookahead == 'e') ADVANCE(1794);
      END_STATE();
    case 861:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 862:
      if (lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 863:
      if (lookahead == 'e') ADVANCE(1482);
      END_STATE();
    case 864:
      if (lookahead == 'e') ADVANCE(1802);
      END_STATE();
    case 865:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 866:
      if (lookahead == 'e') ADVANCE(1815);
      END_STATE();
    case 867:
      if (lookahead == 'e') ADVANCE(2204);
      END_STATE();
    case 868:
      if (lookahead == 'e') ADVANCE(936);
      END_STATE();
    case 869:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 870:
      if (lookahead == 'e') ADVANCE(1816);
      END_STATE();
    case 871:
      if (lookahead == 'e') ADVANCE(1798);
      END_STATE();
    case 872:
      if (lookahead == 'e') ADVANCE(1486);
      END_STATE();
    case 873:
      if (lookahead == 'e') ADVANCE(1821);
      END_STATE();
    case 874:
      if (lookahead == 'e') ADVANCE(938);
      END_STATE();
    case 875:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 876:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 877:
      if (lookahead == 'e') ADVANCE(2161);
      if (lookahead == 'l') ADVANCE(781);
      END_STATE();
    case 878:
      if (lookahead == 'e') ADVANCE(1819);
      END_STATE();
    case 879:
      if (lookahead == 'e') ADVANCE(1814);
      END_STATE();
    case 880:
      if (lookahead == 'e') ADVANCE(1812);
      END_STATE();
    case 881:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 882:
      if (lookahead == 'e') ADVANCE(2072);
      END_STATE();
    case 883:
      if (lookahead == 'e') ADVANCE(2210);
      END_STATE();
    case 884:
      if (lookahead == 'e') ADVANCE(2209);
      END_STATE();
    case 885:
      if (lookahead == 'e') ADVANCE(2162);
      END_STATE();
    case 886:
      if (lookahead == 'e') ADVANCE(1827);
      END_STATE();
    case 887:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 888:
      if (lookahead == 'e') ADVANCE(1938);
      END_STATE();
    case 889:
      if (lookahead == 'e') ADVANCE(2163);
      END_STATE();
    case 890:
      if (lookahead == 'e') ADVANCE(2164);
      if (lookahead == 'l') ADVANCE(798);
      END_STATE();
    case 891:
      if (lookahead == 'e') ADVANCE(2165);
      if (lookahead == 'l') ADVANCE(805);
      END_STATE();
    case 892:
      if (lookahead == 'e') ADVANCE(2166);
      if (lookahead == 'h') ADVANCE(1811);
      if (lookahead == 't') ADVANCE(2167);
      END_STATE();
    case 893:
      if (lookahead == 'e') ADVANCE(944);
      END_STATE();
    case 894:
      if (lookahead == 'e') ADVANCE(1943);
      END_STATE();
    case 895:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 896:
      if (lookahead == 'e') ADVANCE(1318);
      END_STATE();
    case 897:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 898:
      if (lookahead == 'e') ADVANCE(1488);
      END_STATE();
    case 899:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 900:
      if (lookahead == 'e') ADVANCE(1944);
      END_STATE();
    case 901:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 902:
      if (lookahead == 'e') ADVANCE(1948);
      END_STATE();
    case 903:
      if (lookahead == 'e') ADVANCE(1832);
      END_STATE();
    case 904:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 905:
      if (lookahead == 'e') ADVANCE(1382);
      END_STATE();
    case 906:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 907:
      if (lookahead == 'f') ADVANCE(539);
      END_STATE();
    case 908:
      if (lookahead == 'f') ADVANCE(3127);
      END_STATE();
    case 909:
      if (lookahead == 'f') ADVANCE(3055);
      END_STATE();
    case 910:
      if (lookahead == 'f') ADVANCE(540);
      END_STATE();
    case 911:
      if (lookahead == 'f') ADVANCE(541);
      END_STATE();
    case 912:
      if (lookahead == 'f') ADVANCE(543);
      if (lookahead == 'r') ADVANCE(779);
      END_STATE();
    case 913:
      if (lookahead == 'f') ADVANCE(2101);
      END_STATE();
    case 914:
      if (lookahead == 'f') ADVANCE(1045);
      if (lookahead == 't') ADVANCE(1044);
      END_STATE();
    case 915:
      if (lookahead == 'f') ADVANCE(2170);
      END_STATE();
    case 916:
      if (lookahead == 'f') ADVANCE(374);
      END_STATE();
    case 917:
      if (lookahead == 'f') ADVANCE(549);
      END_STATE();
    case 918:
      if (lookahead == 'f') ADVANCE(1718);
      if (lookahead == 'n') ADVANCE(1572);
      if (lookahead == 'o') ADVANCE(1290);
      if (lookahead == 'w') ADVANCE(821);
      END_STATE();
    case 919:
      if (lookahead == 'f') ADVANCE(1104);
      END_STATE();
    case 920:
      if (lookahead == 'f') ADVANCE(319);
      END_STATE();
    case 921:
      if (lookahead == 'f') ADVANCE(2184);
      END_STATE();
    case 922:
      if (lookahead == 'f') ADVANCE(1048);
      if (lookahead == 'n') ADVANCE(1521);
      if (lookahead == 'p') ADVANCE(1555);
      END_STATE();
    case 923:
      if (lookahead == 'f') ADVANCE(1747);
      END_STATE();
    case 924:
      if (lookahead == 'f') ADVANCE(1052);
      if (lookahead == 'o') ADVANCE(1406);
      if (lookahead == 's') ADVANCE(1053);
      END_STATE();
    case 925:
      if (lookahead == 'f') ADVANCE(1261);
      END_STATE();
    case 926:
      if (lookahead == 'f') ADVANCE(1723);
      END_STATE();
    case 927:
      if (lookahead == 'f') ADVANCE(1536);
      END_STATE();
    case 928:
      if (lookahead == 'f') ADVANCE(1546);
      END_STATE();
    case 929:
      if (lookahead == 'f') ADVANCE(748);
      END_STATE();
    case 930:
      if (lookahead == 'f') ADVANCE(1110);
      END_STATE();
    case 931:
      if (lookahead == 'f') ADVANCE(1155);
      END_STATE();
    case 932:
      if (lookahead == 'f') ADVANCE(1910);
      END_STATE();
    case 933:
      if (lookahead == 'f') ADVANCE(827);
      END_STATE();
    case 934:
      if (lookahead == 'f') ADVANCE(1122);
      END_STATE();
    case 935:
      if (lookahead == 'f') ADVANCE(203);
      END_STATE();
    case 936:
      if (lookahead == 'f') ADVANCE(839);
      END_STATE();
    case 937:
      if (lookahead == 'f') ADVANCE(1126);
      END_STATE();
    case 938:
      if (lookahead == 'f') ADVANCE(842);
      END_STATE();
    case 939:
      if (lookahead == 'f') ADVANCE(1168);
      END_STATE();
    case 940:
      ADVANCE_MAP(
        'f', 1170,
        'o', 1663,
        'A', 2896,
        'a', 2896,
        'B', 2233,
        'b', 2233,
        'C', 2621,
        'c', 2621,
        'D', 2260,
        'd', 2260,
        'L', 2690,
        'l', 2690,
        'M', 2513,
        'm', 2513,
        'R', 2434,
        'r', 2434,
        'S', 2399,
        's', 2399,
      );
      END_STATE();
    case 941:
      if (lookahead == 'f') ADVANCE(1174);
      END_STATE();
    case 942:
      if (lookahead == 'f') ADVANCE(1175);
      if (lookahead == 'o') ADVANCE(1664);
      END_STATE();
    case 943:
      if (lookahead == 'f') ADVANCE(1177);
      END_STATE();
    case 944:
      if (lookahead == 'f') ADVANCE(434);
      END_STATE();
    case 945:
      if (lookahead == 'f') ADVANCE(1829);
      END_STATE();
    case 946:
      if (lookahead == 'f') ADVANCE(1173);
      END_STATE();
    case 947:
      if (lookahead == 'f') ADVANCE(1942);
      END_STATE();
    case 948:
      if (lookahead == 'f') ADVANCE(1176);
      END_STATE();
    case 949:
      if (lookahead == 'f') ADVANCE(1184);
      END_STATE();
    case 950:
      if (lookahead == 'f') ADVANCE(1186);
      END_STATE();
    case 951:
      if (lookahead == 'g') ADVANCE(1448);
      if (lookahead == 'm') ADVANCE(1632);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2398);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2678);
      END_STATE();
    case 952:
      if (lookahead == 'g') ADVANCE(3280);
      END_STATE();
    case 953:
      if (lookahead == 'g') ADVANCE(3117);
      END_STATE();
    case 954:
      if (lookahead == 'g') ADVANCE(3199);
      END_STATE();
    case 955:
      if (lookahead == 'g') ADVANCE(1463);
      END_STATE();
    case 956:
      if (lookahead == 'g') ADVANCE(3158);
      END_STATE();
    case 957:
      if (lookahead == 'g') ADVANCE(3085);
      END_STATE();
    case 958:
      if (lookahead == 'g') ADVANCE(3200);
      END_STATE();
    case 959:
      if (lookahead == 'g') ADVANCE(3086);
      END_STATE();
    case 960:
      if (lookahead == 'g') ADVANCE(3157);
      END_STATE();
    case 961:
      if (lookahead == 'g') ADVANCE(3105);
      END_STATE();
    case 962:
      if (lookahead == 'g') ADVANCE(3087);
      END_STATE();
    case 963:
      if (lookahead == 'g') ADVANCE(3009);
      if (lookahead == 'l') ADVANCE(3009);
      if (lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 't' ||
          lookahead == 'z') ADVANCE(3454);
      END_STATE();
    case 964:
      if (lookahead == 'g') ADVANCE(364);
      END_STATE();
    case 965:
      if (lookahead == 'g') ADVANCE(1784);
      END_STATE();
    case 966:
      if (lookahead == 'g') ADVANCE(1610);
      END_STATE();
    case 967:
      if (lookahead == 'g') ADVANCE(1460);
      END_STATE();
    case 968:
      if (lookahead == 'g') ADVANCE(1498);
      END_STATE();
    case 969:
      if (lookahead == 'g') ADVANCE(1841);
      END_STATE();
    case 970:
      if (lookahead == 'g') ADVANCE(1499);
      END_STATE();
    case 971:
      if (lookahead == 'g') ADVANCE(1500);
      END_STATE();
    case 972:
      if (lookahead == 'g') ADVANCE(1847);
      END_STATE();
    case 973:
      if (lookahead == 'g') ADVANCE(1502);
      END_STATE();
    case 974:
      if (lookahead == 'g') ADVANCE(1503);
      END_STATE();
    case 975:
      if (lookahead == 'g') ADVANCE(1849);
      END_STATE();
    case 976:
      if (lookahead == 'g') ADVANCE(1504);
      END_STATE();
    case 977:
      if (lookahead == 'g') ADVANCE(1985);
      END_STATE();
    case 978:
      if (lookahead == 'g') ADVANCE(1474);
      END_STATE();
    case 979:
      if (lookahead == 'g') ADVANCE(1484);
      END_STATE();
    case 980:
      if (lookahead == 'g') ADVANCE(1506);
      END_STATE();
    case 981:
      if (lookahead == 'g') ADVANCE(1507);
      END_STATE();
    case 982:
      if (lookahead == 'g') ADVANCE(1508);
      END_STATE();
    case 983:
      if (lookahead == 'g') ADVANCE(1712);
      END_STATE();
    case 984:
      if (lookahead == 'g') ADVANCE(1713);
      END_STATE();
    case 985:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 986:
      if (lookahead == 'g') ADVANCE(1689);
      END_STATE();
    case 987:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 988:
      if (lookahead == 'g') ADVANCE(1051);
      END_STATE();
    case 989:
      if (lookahead == 'g') ADVANCE(1541);
      END_STATE();
    case 990:
      if (lookahead == 'g') ADVANCE(1543);
      END_STATE();
    case 991:
      if (lookahead == 'g') ADVANCE(1808);
      END_STATE();
    case 992:
      if (lookahead == 'g') ADVANCE(791);
      END_STATE();
    case 993:
      if (lookahead == 'g') ADVANCE(1063);
      END_STATE();
    case 994:
      if (lookahead == 'g') ADVANCE(793);
      END_STATE();
    case 995:
      if (lookahead == 'g') ADVANCE(1072);
      END_STATE();
    case 996:
      if (lookahead == 'g') ADVANCE(758);
      END_STATE();
    case 997:
      if (lookahead == 'g') ADVANCE(1074);
      END_STATE();
    case 998:
      if (lookahead == 'g') ADVANCE(759);
      END_STATE();
    case 999:
      if (lookahead == 'g') ADVANCE(737);
      END_STATE();
    case 1000:
      if (lookahead == 'g') ADVANCE(1286);
      END_STATE();
    case 1001:
      if (lookahead == 'g') ADVANCE(1462);
      END_STATE();
    case 1002:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 1003:
      if (lookahead == 'g') ADVANCE(828);
      END_STATE();
    case 1004:
      if (lookahead == 'g') ADVANCE(1471);
      if (lookahead == 'o') ADVANCE(1244);
      END_STATE();
    case 1005:
      if (lookahead == 'g') ADVANCE(845);
      END_STATE();
    case 1006:
      if (lookahead == 'g') ADVANCE(1479);
      END_STATE();
    case 1007:
      if (lookahead == 'g') ADVANCE(853);
      END_STATE();
    case 1008:
      if (lookahead == 'g') ADVANCE(1485);
      END_STATE();
    case 1009:
      if (lookahead == 'g') ADVANCE(242);
      END_STATE();
    case 1010:
      if (lookahead == 'g') ADVANCE(879);
      END_STATE();
    case 1011:
      if (lookahead == 'g') ADVANCE(1817);
      END_STATE();
    case 1012:
      if (lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 1013:
      if (lookahead == 'g') ADVANCE(894);
      END_STATE();
    case 1014:
      if (lookahead == 'g') ADVANCE(900);
      END_STATE();
    case 1015:
      if (lookahead == 'g') ADVANCE(1323);
      END_STATE();
    case 1016:
      if (lookahead == 'h') ADVANCE(3198);
      END_STATE();
    case 1017:
      if (lookahead == 'h') ADVANCE(3108);
      END_STATE();
    case 1018:
      if (lookahead == 'h') ADVANCE(3234);
      END_STATE();
    case 1019:
      if (lookahead == 'h') ADVANCE(3276);
      END_STATE();
    case 1020:
      if (lookahead == 'h') ADVANCE(1167);
      if (lookahead == 'v') ADVANCE(713);
      END_STATE();
    case 1021:
      if (lookahead == 'h') ADVANCE(673);
      END_STATE();
    case 1022:
      if (lookahead == 'h') ADVANCE(2094);
      END_STATE();
    case 1023:
      if (lookahead == 'h') ADVANCE(402);
      END_STATE();
    case 1024:
      if (lookahead == 'h') ADVANCE(1706);
      END_STATE();
    case 1025:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 1026:
      if (lookahead == 'h') ADVANCE(623);
      END_STATE();
    case 1027:
      if (lookahead == 'h') ADVANCE(173);
      END_STATE();
    case 1028:
      if (lookahead == 'h') ADVANCE(633);
      END_STATE();
    case 1029:
      if (lookahead == 'h') ADVANCE(705);
      END_STATE();
    case 1030:
      if (lookahead == 'h') ADVANCE(384);
      END_STATE();
    case 1031:
      if (lookahead == 'h') ADVANCE(683);
      END_STATE();
    case 1032:
      if (lookahead == 'h') ADVANCE(1106);
      END_STATE();
    case 1033:
      if (lookahead == 'h') ADVANCE(804);
      END_STATE();
    case 1034:
      if (lookahead == 'h') ADVANCE(857);
      END_STATE();
    case 1035:
      if (lookahead == 'h') ADVANCE(878);
      END_STATE();
    case 1036:
      if (lookahead == 'h') ADVANCE(886);
      END_STATE();
    case 1037:
      if (lookahead == 'h') ADVANCE(895);
      END_STATE();
    case 1038:
      if (lookahead == 'h') ADVANCE(1188);
      END_STATE();
    case 1039:
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2738);
      END_STATE();
    case 1040:
      if (lookahead == 'i') ADVANCE(2214);
      END_STATE();
    case 1041:
      if (lookahead == 'i') ADVANCE(1608);
      END_STATE();
    case 1042:
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead == 'n') ADVANCE(1202);
      END_STATE();
    case 1043:
      if (lookahead == 'i') ADVANCE(1619);
      END_STATE();
    case 1044:
      if (lookahead == 'i') ADVANCE(1341);
      END_STATE();
    case 1045:
      if (lookahead == 'i') ADVANCE(1259);
      END_STATE();
    case 1046:
      if (lookahead == 'i') ADVANCE(1358);
      END_STATE();
    case 1047:
      if (lookahead == 'i') ADVANCE(1615);
      END_STATE();
    case 1048:
      if (lookahead == 'i') ADVANCE(1289);
      END_STATE();
    case 1049:
      if (lookahead == 'i') ADVANCE(1400);
      END_STATE();
    case 1050:
      if (lookahead == 'i') ADVANCE(1013);
      END_STATE();
    case 1051:
      if (lookahead == 'i') ADVANCE(1404);
      END_STATE();
    case 1052:
      if (lookahead == 'i') ADVANCE(1254);
      END_STATE();
    case 1053:
      if (lookahead == 'i') ADVANCE(955);
      END_STATE();
    case 1054:
      if (lookahead == 'i') ADVANCE(1364);
      END_STATE();
    case 1055:
      if (lookahead == 'i') ADVANCE(1006);
      END_STATE();
    case 1056:
      if (lookahead == 'i') ADVANCE(1366);
      if (lookahead == 'l') ADVANCE(1571);
      if (lookahead == 'r') ADVANCE(784);
      END_STATE();
    case 1057:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 1058:
      if (lookahead == 'i') ADVANCE(1407);
      END_STATE();
    case 1059:
      if (lookahead == 'i') ADVANCE(967);
      END_STATE();
    case 1060:
      if (lookahead == 'i') ADVANCE(1835);
      END_STATE();
    case 1061:
      if (lookahead == 'i') ADVANCE(1410);
      END_STATE();
    case 1062:
      if (lookahead == 'i') ADVANCE(919);
      END_STATE();
    case 1063:
      if (lookahead == 'i') ADVANCE(1383);
      END_STATE();
    case 1064:
      if (lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 1065:
      if (lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 1066:
      if (lookahead == 'i') ADVANCE(1635);
      END_STATE();
    case 1067:
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 1068:
      if (lookahead == 'i') ADVANCE(1612);
      END_STATE();
    case 1069:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 1070:
      if (lookahead == 'i') ADVANCE(1513);
      END_STATE();
    case 1071:
      if (lookahead == 'i') ADVANCE(1475);
      END_STATE();
    case 1072:
      if (lookahead == 'i') ADVANCE(1389);
      END_STATE();
    case 1073:
      if (lookahead == 'i') ADVANCE(1457);
      END_STATE();
    case 1074:
      if (lookahead == 'i') ADVANCE(1391);
      END_STATE();
    case 1075:
      if (lookahead == 'i') ADVANCE(654);
      END_STATE();
    case 1076:
      if (lookahead == 'i') ADVANCE(1803);
      if (lookahead == 's') ADVANCE(365);
      END_STATE();
    case 1077:
      if (lookahead == 'i') ADVANCE(2033);
      END_STATE();
    case 1078:
      if (lookahead == 'i') ADVANCE(1831);
      END_STATE();
    case 1079:
      if (lookahead == 'i') ADVANCE(2216);
      END_STATE();
    case 1080:
      if (lookahead == 'i') ADVANCE(915);
      END_STATE();
    case 1081:
      if (lookahead == 'i') ADVANCE(1989);
      END_STATE();
    case 1082:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 1083:
      if (lookahead == 'i') ADVANCE(1622);
      END_STATE();
    case 1084:
      if (lookahead == 'i') ADVANCE(985);
      END_STATE();
    case 1085:
      if (lookahead == 'i') ADVANCE(487);
      END_STATE();
    case 1086:
      if (lookahead == 'i') ADVANCE(992);
      END_STATE();
    case 1087:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 1088:
      if (lookahead == 'i') ADVANCE(978);
      END_STATE();
    case 1089:
      if (lookahead == 'i') ADVANCE(1412);
      END_STATE();
    case 1090:
      if (lookahead == 'i') ADVANCE(2215);
      END_STATE();
    case 1091:
      if (lookahead == 'i') ADVANCE(2127);
      END_STATE();
    case 1092:
      if (lookahead == 'i') ADVANCE(566);
      END_STATE();
    case 1093:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 1094:
      if (lookahead == 'i') ADVANCE(987);
      END_STATE();
    case 1095:
      if (lookahead == 'i') ADVANCE(1559);
      END_STATE();
    case 1096:
      if (lookahead == 'i') ADVANCE(979);
      END_STATE();
    case 1097:
      if (lookahead == 'i') ADVANCE(1414);
      END_STATE();
    case 1098:
      if (lookahead == 'i') ADVANCE(1529);
      END_STATE();
    case 1099:
      if (lookahead == 'i') ADVANCE(1732);
      END_STATE();
    case 1100:
      if (lookahead == 'i') ADVANCE(1939);
      END_STATE();
    case 1101:
      if (lookahead == 'i') ADVANCE(777);
      END_STATE();
    case 1102:
      if (lookahead == 'i') ADVANCE(1530);
      END_STATE();
    case 1103:
      if (lookahead == 'i') ADVANCE(1450);
      END_STATE();
    case 1104:
      if (lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 1105:
      if (lookahead == 'i') ADVANCE(1531);
      END_STATE();
    case 1106:
      if (lookahead == 'i') ADVANCE(1436);
      END_STATE();
    case 1107:
      if (lookahead == 'i') ADVANCE(1453);
      END_STATE();
    case 1108:
      if (lookahead == 'i') ADVANCE(1734);
      END_STATE();
    case 1109:
      if (lookahead == 'i') ADVANCE(1533);
      END_STATE();
    case 1110:
      if (lookahead == 'i') ADVANCE(1273);
      END_STATE();
    case 1111:
      if (lookahead == 'i') ADVANCE(1419);
      END_STATE();
    case 1112:
      if (lookahead == 'i') ADVANCE(1735);
      END_STATE();
    case 1113:
      if (lookahead == 'i') ADVANCE(2004);
      END_STATE();
    case 1114:
      if (lookahead == 'i') ADVANCE(1350);
      END_STATE();
    case 1115:
      if (lookahead == 'i') ADVANCE(1566);
      END_STATE();
    case 1116:
      if (lookahead == 'i') ADVANCE(1438);
      END_STATE();
    case 1117:
      if (lookahead == 'i') ADVANCE(1422);
      END_STATE();
    case 1118:
      if (lookahead == 'i') ADVANCE(1736);
      END_STATE();
    case 1119:
      if (lookahead == 'i') ADVANCE(590);
      END_STATE();
    case 1120:
      if (lookahead == 'i') ADVANCE(1886);
      END_STATE();
    case 1121:
      if (lookahead == 'i') ADVANCE(1570);
      END_STATE();
    case 1122:
      if (lookahead == 'i') ADVANCE(1276);
      END_STATE();
    case 1123:
      if (lookahead == 'i') ADVANCE(1423);
      END_STATE();
    case 1124:
      if (lookahead == 'i') ADVANCE(1737);
      END_STATE();
    case 1125:
      if (lookahead == 'i') ADVANCE(1576);
      END_STATE();
    case 1126:
      if (lookahead == 'i') ADVANCE(1277);
      END_STATE();
    case 1127:
      if (lookahead == 'i') ADVANCE(1424);
      END_STATE();
    case 1128:
      if (lookahead == 'i') ADVANCE(1738);
      END_STATE();
    case 1129:
      if (lookahead == 'i') ADVANCE(800);
      END_STATE();
    case 1130:
      if (lookahead == 'i') ADVANCE(731);
      END_STATE();
    case 1131:
      if (lookahead == 'i') ADVANCE(1534);
      END_STATE();
    case 1132:
      if (lookahead == 'i') ADVANCE(1428);
      END_STATE();
    case 1133:
      if (lookahead == 'i') ADVANCE(1443);
      END_STATE();
    case 1134:
      if (lookahead == 'i') ADVANCE(807);
      END_STATE();
    case 1135:
      if (lookahead == 'i') ADVANCE(1537);
      END_STATE();
    case 1136:
      if (lookahead == 'i') ADVANCE(811);
      END_STATE();
    case 1137:
      if (lookahead == 'i') ADVANCE(1578);
      END_STATE();
    case 1138:
      if (lookahead == 'i') ADVANCE(815);
      END_STATE();
    case 1139:
      if (lookahead == 'i') ADVANCE(818);
      END_STATE();
    case 1140:
      if (lookahead == 'i') ADVANCE(1580);
      END_STATE();
    case 1141:
      if (lookahead == 'i') ADVANCE(1542);
      END_STATE();
    case 1142:
      if (lookahead == 'i') ADVANCE(1544);
      END_STATE();
    case 1143:
      if (lookahead == 'i') ADVANCE(1545);
      END_STATE();
    case 1144:
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 1145:
      if (lookahead == 'i') ADVANCE(993);
      END_STATE();
    case 1146:
      if (lookahead == 'i') ADVANCE(585);
      END_STATE();
    case 1147:
      if (lookahead == 'i') ADVANCE(1641);
      END_STATE();
    case 1148:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 1149:
      if (lookahead == 'i') ADVANCE(1458);
      END_STATE();
    case 1150:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 1151:
      if (lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 1152:
      if (lookahead == 'i') ADVANCE(995);
      END_STATE();
    case 1153:
      if (lookahead == 'i') ADVANCE(1920);
      END_STATE();
    case 1154:
      if (lookahead == 'i') ADVANCE(1647);
      END_STATE();
    case 1155:
      if (lookahead == 'i') ADVANCE(1296);
      END_STATE();
    case 1156:
      if (lookahead == 'i') ADVANCE(1594);
      END_STATE();
    case 1157:
      if (lookahead == 'i') ADVANCE(1772);
      END_STATE();
    case 1158:
      if (lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 1159:
      if (lookahead == 'i') ADVANCE(997);
      END_STATE();
    case 1160:
      if (lookahead == 'i') ADVANCE(1651);
      END_STATE();
    case 1161:
      if (lookahead == 'i') ADVANCE(1581);
      END_STATE();
    case 1162:
      if (lookahead == 'i') ADVANCE(1653);
      END_STATE();
    case 1163:
      if (lookahead == 'i') ADVANCE(1655);
      END_STATE();
    case 1164:
      if (lookahead == 'i') ADVANCE(803);
      END_STATE();
    case 1165:
      if (lookahead == 'i') ADVANCE(812);
      END_STATE();
    case 1166:
      if (lookahead == 'i') ADVANCE(1640);
      if (lookahead == 'o') ADVANCE(1380);
      END_STATE();
    case 1167:
      if (lookahead == 'i') ADVANCE(588);
      END_STATE();
    case 1168:
      if (lookahead == 'i') ADVANCE(1307);
      END_STATE();
    case 1169:
      if (lookahead == 'i') ADVANCE(1005);
      END_STATE();
    case 1170:
      if (lookahead == 'i') ADVANCE(1302);
      END_STATE();
    case 1171:
      if (lookahead == 'i') ADVANCE(1370);
      if (lookahead == 'l') ADVANCE(1586);
      if (lookahead == 'r') ADVANCE(882);
      END_STATE();
    case 1172:
      if (lookahead == 'i') ADVANCE(1001);
      END_STATE();
    case 1173:
      if (lookahead == 'i') ADVANCE(1314);
      END_STATE();
    case 1174:
      if (lookahead == 'i') ADVANCE(1315);
      END_STATE();
    case 1175:
      if (lookahead == 'i') ADVANCE(1309);
      END_STATE();
    case 1176:
      if (lookahead == 'i') ADVANCE(1317);
      END_STATE();
    case 1177:
      if (lookahead == 'i') ADVANCE(1310);
      END_STATE();
    case 1178:
      if (lookahead == 'i') ADVANCE(1007);
      END_STATE();
    case 1179:
      if (lookahead == 'i') ADVANCE(1009);
      END_STATE();
    case 1180:
      if (lookahead == 'i') ADVANCE(1008);
      END_STATE();
    case 1181:
      if (lookahead == 'i') ADVANCE(1936);
      END_STATE();
    case 1182:
      if (lookahead == 'i') ADVANCE(1595);
      END_STATE();
    case 1183:
      if (lookahead == 'i') ADVANCE(1667);
      END_STATE();
    case 1184:
      if (lookahead == 'i') ADVANCE(1490);
      END_STATE();
    case 1185:
      if (lookahead == 'i') ADVANCE(2078);
      END_STATE();
    case 1186:
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 1187:
      if (lookahead == 'i') ADVANCE(1949);
      END_STATE();
    case 1188:
      if (lookahead == 'i') ADVANCE(601);
      END_STATE();
    case 1189:
      if (lookahead == 'i') ADVANCE(1012);
      END_STATE();
    case 1190:
      if (lookahead == 'i') ADVANCE(1670);
      if (lookahead == 'o') ADVANCE(2104);
      END_STATE();
    case 1191:
      if (lookahead == 'i') ADVANCE(1672);
      END_STATE();
    case 1192:
      if (lookahead == 'i') ADVANCE(1014);
      END_STATE();
    case 1193:
      if (lookahead == 'i') ADVANCE(950);
      END_STATE();
    case 1194:
      if (lookahead == 'k') ADVANCE(3115);
      END_STATE();
    case 1195:
      if (lookahead == 'k') ADVANCE(3116);
      END_STATE();
    case 1196:
      if (lookahead == 'k') ADVANCE(3156);
      END_STATE();
    case 1197:
      if (lookahead == 'k') ADVANCE(18);
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 1198:
      if (lookahead == 'k') ADVANCE(659);
      if (lookahead == 's') ADVANCE(1994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 1199:
      if (lookahead == 'k') ADVANCE(22);
      END_STATE();
    case 1200:
      if (lookahead == 'k') ADVANCE(763);
      if (lookahead == 'n') ADVANCE(1599);
      if (lookahead == 'p') ADVANCE(1590);
      END_STATE();
    case 1201:
      if (lookahead == 'k') ADVANCE(670);
      END_STATE();
    case 1202:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 1203:
      if (lookahead == 'k') ADVANCE(1860);
      END_STATE();
    case 1204:
      if (lookahead == 'k') ADVANCE(679);
      END_STATE();
    case 1205:
      if (lookahead == 'k') ADVANCE(682);
      END_STATE();
    case 1206:
      if (lookahead == 'k') ADVANCE(684);
      END_STATE();
    case 1207:
      if (lookahead == 'k') ADVANCE(688);
      END_STATE();
    case 1208:
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 1209:
      if (lookahead == 'k') ADVANCE(698);
      END_STATE();
    case 1210:
      if (lookahead == 'k') ADVANCE(701);
      END_STATE();
    case 1211:
      if (lookahead == 'k') ADVANCE(96);
      END_STATE();
    case 1212:
      if (lookahead == 'k') ADVANCE(572);
      END_STATE();
    case 1213:
      if (lookahead == 'k') ADVANCE(750);
      END_STATE();
    case 1214:
      if (lookahead == 'k') ADVANCE(799);
      END_STATE();
    case 1215:
      if (lookahead == 'k') ADVANCE(825);
      END_STATE();
    case 1216:
      if (lookahead == 'k') ADVANCE(806);
      END_STATE();
    case 1217:
      if (lookahead == 'k') ADVANCE(809);
      END_STATE();
    case 1218:
      if (lookahead == 'k') ADVANCE(816);
      END_STATE();
    case 1219:
      if (lookahead == 'k') ADVANCE(833);
      END_STATE();
    case 1220:
      if (lookahead == 'k') ADVANCE(852);
      END_STATE();
    case 1221:
      if (lookahead == 'k') ADVANCE(197);
      END_STATE();
    case 1222:
      if (lookahead == 'k') ADVANCE(867);
      if (lookahead == 'r') ADVANCE(869);
      END_STATE();
    case 1223:
      if (lookahead == 'k') ADVANCE(208);
      END_STATE();
    case 1224:
      if (lookahead == 'k') ADVANCE(884);
      END_STATE();
    case 1225:
      if (lookahead == 'k') ADVANCE(249);
      END_STATE();
    case 1226:
      if (lookahead == 'l') ADVANCE(3126);
      END_STATE();
    case 1227:
      if (lookahead == 'l') ADVANCE(3278);
      END_STATE();
    case 1228:
      if (lookahead == 'l') ADVANCE(3217);
      END_STATE();
    case 1229:
      if (lookahead == 'l') ADVANCE(3067);
      END_STATE();
    case 1230:
      if (lookahead == 'l') ADVANCE(3207);
      END_STATE();
    case 1231:
      if (lookahead == 'l') ADVANCE(3212);
      END_STATE();
    case 1232:
      if (lookahead == 'l') ADVANCE(3366);
      END_STATE();
    case 1233:
      if (lookahead == 'l') ADVANCE(3364);
      END_STATE();
    case 1234:
      if (lookahead == 'l') ADVANCE(3365);
      END_STATE();
    case 1235:
      if (lookahead == 'l') ADVANCE(3068);
      END_STATE();
    case 1236:
      if (lookahead == 'l') ADVANCE(3367);
      END_STATE();
    case 1237:
      if (lookahead == 'l') ADVANCE(3210);
      END_STATE();
    case 1238:
      if (lookahead == 'l') ADVANCE(3209);
      END_STATE();
    case 1239:
      if (lookahead == 'l') ADVANCE(3393);
      END_STATE();
    case 1240:
      if (lookahead == 'l') ADVANCE(1257);
      END_STATE();
    case 1241:
      if (lookahead == 'l') ADVANCE(678);
      if (lookahead == 'r') ADVANCE(762);
      END_STATE();
    case 1242:
      if (lookahead == 'l') ADVANCE(1509);
      if (lookahead == 'w') ADVANCE(357);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2710);
      END_STATE();
    case 1243:
      if (lookahead == 'l') ADVANCE(2086);
      END_STATE();
    case 1244:
      if (lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 1245:
      if (lookahead == 'l') ADVANCE(1283);
      if (lookahead == 'r') ADVANCE(1360);
      if (lookahead == 's') ADVANCE(1225);
      if (lookahead == 'u') ADVANCE(1986);
      END_STATE();
    case 1246:
      if (lookahead == 'l') ADVANCE(403);
      END_STATE();
    case 1247:
      if (lookahead == 'l') ADVANCE(2168);
      END_STATE();
    case 1248:
      if (lookahead == 'l') ADVANCE(1153);
      END_STATE();
    case 1249:
      if (lookahead == 'l') ADVANCE(932);
      END_STATE();
    case 1250:
      if (lookahead == 'l') ADVANCE(1144);
      END_STATE();
    case 1251:
      if (lookahead == 'l') ADVANCE(968);
      END_STATE();
    case 1252:
      if (lookahead == 'l') ADVANCE(1226);
      END_STATE();
    case 1253:
      if (lookahead == 'l') ADVANCE(2175);
      END_STATE();
    case 1254:
      if (lookahead == 'l') ADVANCE(2032);
      END_STATE();
    case 1255:
      if (lookahead == 'l') ADVANCE(909);
      END_STATE();
    case 1256:
      if (lookahead == 'l') ADVANCE(2030);
      END_STATE();
    case 1257:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 1258:
      if (lookahead == 'l') ADVANCE(2179);
      END_STATE();
    case 1259:
      if (lookahead == 'l') ADVANCE(610);
      END_STATE();
    case 1260:
      if (lookahead == 'l') ADVANCE(1150);
      END_STATE();
    case 1261:
      if (lookahead == 'l') ADVANCE(1085);
      END_STATE();
    case 1262:
      if (lookahead == 'l') ADVANCE(989);
      END_STATE();
    case 1263:
      if (lookahead == 'l') ADVANCE(1120);
      END_STATE();
    case 1264:
      if (lookahead == 'l') ADVANCE(1525);
      END_STATE();
    case 1265:
      if (lookahead == 'l') ADVANCE(1528);
      END_STATE();
    case 1266:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 1267:
      if (lookahead == 'l') ADVANCE(1512);
      END_STATE();
    case 1268:
      if (lookahead == 'l') ADVANCE(619);
      END_STATE();
    case 1269:
      if (lookahead == 'l') ADVANCE(621);
      END_STATE();
    case 1270:
      if (lookahead == 'l') ADVANCE(622);
      END_STATE();
    case 1271:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 1272:
      if (lookahead == 'l') ADVANCE(626);
      END_STATE();
    case 1273:
      if (lookahead == 'l') ADVANCE(630);
      END_STATE();
    case 1274:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 1275:
      if (lookahead == 'l') ADVANCE(634);
      END_STATE();
    case 1276:
      if (lookahead == 'l') ADVANCE(645);
      END_STATE();
    case 1277:
      if (lookahead == 'l') ADVANCE(648);
      END_STATE();
    case 1278:
      if (lookahead == 'l') ADVANCE(734);
      END_STATE();
    case 1279:
      if (lookahead == 'l') ADVANCE(1527);
      END_STATE();
    case 1280:
      if (lookahead == 'l') ADVANCE(1082);
      END_STATE();
    case 1281:
      if (lookahead == 'l') ADVANCE(970);
      END_STATE();
    case 1282:
      if (lookahead == 'l') ADVANCE(1271);
      END_STATE();
    case 1283:
      if (lookahead == 'l') ADVANCE(1562);
      END_STATE();
    case 1284:
      if (lookahead == 'l') ADVANCE(971);
      END_STATE();
    case 1285:
      if (lookahead == 'l') ADVANCE(973);
      END_STATE();
    case 1286:
      if (lookahead == 'l') ADVANCE(782);
      END_STATE();
    case 1287:
      if (lookahead == 'l') ADVANCE(974);
      END_STATE();
    case 1288:
      if (lookahead == 'l') ADVANCE(976);
      END_STATE();
    case 1289:
      if (lookahead == 'l') ADVANCE(778);
      END_STATE();
    case 1290:
      if (lookahead == 'l') ADVANCE(574);
      END_STATE();
    case 1291:
      if (lookahead == 'l') ADVANCE(980);
      END_STATE();
    case 1292:
      if (lookahead == 'l') ADVANCE(981);
      END_STATE();
    case 1293:
      if (lookahead == 'l') ADVANCE(787);
      END_STATE();
    case 1294:
      if (lookahead == 'l') ADVANCE(982);
      END_STATE();
    case 1295:
      if (lookahead == 'l') ADVANCE(2010);
      END_STATE();
    case 1296:
      if (lookahead == 'l') ADVANCE(785);
      END_STATE();
    case 1297:
      if (lookahead == 'l') ADVANCE(1073);
      END_STATE();
    case 1298:
      if (lookahead == 'l') ADVANCE(1127);
      END_STATE();
    case 1299:
      if (lookahead == 'l') ADVANCE(2019);
      END_STATE();
    case 1300:
      if (lookahead == 'l') ADVANCE(2020);
      END_STATE();
    case 1301:
      if (lookahead == 'l') ADVANCE(1119);
      END_STATE();
    case 1302:
      if (lookahead == 'l') ADVANCE(2034);
      END_STATE();
    case 1303:
      if (lookahead == 'l') ADVANCE(1298);
      END_STATE();
    case 1304:
      if (lookahead == 'l') ADVANCE(1093);
      END_STATE();
    case 1305:
      if (lookahead == 'l') ADVANCE(990);
      END_STATE();
    case 1306:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 1307:
      if (lookahead == 'l') ADVANCE(844);
      END_STATE();
    case 1308:
      if (lookahead == 'l') ADVANCE(1149);
      END_STATE();
    case 1309:
      if (lookahead == 'l') ADVANCE(2035);
      END_STATE();
    case 1310:
      if (lookahead == 'l') ADVANCE(2036);
      END_STATE();
    case 1311:
      if (lookahead == 'l') ADVANCE(794);
      END_STATE();
    case 1312:
      if (lookahead == 'l') ADVANCE(808);
      END_STATE();
    case 1313:
      if (lookahead == 'l') ADVANCE(1151);
      END_STATE();
    case 1314:
      if (lookahead == 'l') ADVANCE(863);
      END_STATE();
    case 1315:
      if (lookahead == 'l') ADVANCE(848);
      END_STATE();
    case 1316:
      if (lookahead == 'l') ADVANCE(1158);
      END_STATE();
    case 1317:
      if (lookahead == 'l') ADVANCE(872);
      END_STATE();
    case 1318:
      if (lookahead == 'l') ADVANCE(947);
      END_STATE();
    case 1319:
      if (lookahead == 'l') ADVANCE(1947);
      END_STATE();
    case 1320:
      if (lookahead == 'l') ADVANCE(2123);
      END_STATE();
    case 1321:
      if (lookahead == 'l') ADVANCE(1187);
      END_STATE();
    case 1322:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 1323:
      if (lookahead == 'l') ADVANCE(904);
      END_STATE();
    case 1324:
      if (lookahead == 'm') ADVANCE(1325);
      END_STATE();
    case 1325:
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(1241);
      END_STATE();
    case 1326:
      if (lookahead == 'm') ADVANCE(3235);
      END_STATE();
    case 1327:
      if (lookahead == 'm') ADVANCE(3088);
      END_STATE();
    case 1328:
      if (lookahead == 'm') ADVANCE(3236);
      END_STATE();
    case 1329:
      if (lookahead == 'm') ADVANCE(3150);
      END_STATE();
    case 1330:
      if (lookahead == 'm') ADVANCE(3089);
      END_STATE();
    case 1331:
      if (lookahead == 'm') ADVANCE(3064);
      END_STATE();
    case 1332:
      if (lookahead == 'm') ADVANCE(1214);
      END_STATE();
    case 1333:
      if (lookahead == 'm') ADVANCE(1359);
      END_STATE();
    case 1334:
      if (lookahead == 'm') ADVANCE(453);
      END_STATE();
    case 1335:
      if (lookahead == 'm') ADVANCE(1514);
      END_STATE();
    case 1336:
      if (lookahead == 'm') ADVANCE(1446);
      END_STATE();
    case 1337:
      if (lookahead == 'm') ADVANCE(382);
      END_STATE();
    case 1338:
      if (lookahead == 'm') ADVANCE(2103);
      if (lookahead == 'n') ADVANCE(834);
      if (lookahead == 'o') ADVANCE(1401);
      END_STATE();
    case 1339:
      if (lookahead == 'm') ADVANCE(1181);
      END_STATE();
    case 1340:
      if (lookahead == 'm') ADVANCE(1644);
      END_STATE();
    case 1341:
      if (lookahead == 'm') ADVANCE(611);
      END_STATE();
    case 1342:
      if (lookahead == 'm') ADVANCE(1633);
      END_STATE();
    case 1343:
      if (lookahead == 'm') ADVANCE(768);
      END_STATE();
    case 1344:
      if (lookahead == 'm') ADVANCE(624);
      END_STATE();
    case 1345:
      if (lookahead == 'm') ADVANCE(625);
      END_STATE();
    case 1346:
      if (lookahead == 'm') ADVANCE(689);
      END_STATE();
    case 1347:
      if (lookahead == 'm') ADVANCE(635);
      END_STATE();
    case 1348:
      if (lookahead == 'm') ADVANCE(699);
      END_STATE();
    case 1349:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 1350:
      if (lookahead == 'm') ADVANCE(638);
      END_STATE();
    case 1351:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 1352:
      if (lookahead == 'm') ADVANCE(649);
      END_STATE();
    case 1353:
      if (lookahead == 'm') ADVANCE(702);
      END_STATE();
    case 1354:
      if (lookahead == 'm') ADVANCE(650);
      END_STATE();
    case 1355:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 1356:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 1357:
      if (lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 1358:
      if (lookahead == 'm') ADVANCE(888);
      END_STATE();
    case 1359:
      if (lookahead == 'm') ADVANCE(792);
      if (lookahead == 'p') ADVANCE(1786);
      END_STATE();
    case 1360:
      if (lookahead == 'm') ADVANCE(1532);
      END_STATE();
    case 1361:
      if (lookahead == 'm') ADVANCE(724);
      END_STATE();
    case 1362:
      if (lookahead == 'm') ADVANCE(732);
      END_STATE();
    case 1363:
      if (lookahead == 'm') ADVANCE(735);
      END_STATE();
    case 1364:
      if (lookahead == 'm') ADVANCE(757);
      END_STATE();
    case 1365:
      if (lookahead == 'm') ADVANCE(1113);
      if (lookahead == 's') ADVANCE(1996);
      END_STATE();
    case 1366:
      if (lookahead == 'm') ADVANCE(1636);
      END_STATE();
    case 1367:
      if (lookahead == 'm') ADVANCE(1455);
      END_STATE();
    case 1368:
      if (lookahead == 'm') ADVANCE(1557);
      END_STATE();
    case 1369:
      if (lookahead == 'm') ADVANCE(1100);
      END_STATE();
    case 1370:
      if (lookahead == 'm') ADVANCE(1638);
      END_STATE();
    case 1371:
      if (lookahead == 'm') ADVANCE(1563);
      END_STATE();
    case 1372:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 1373:
      if (lookahead == 'm') ADVANCE(1575);
      END_STATE();
    case 1374:
      if (lookahead == 'm') ADVANCE(1577);
      END_STATE();
    case 1375:
      if (lookahead == 'm') ADVANCE(1579);
      END_STATE();
    case 1376:
      if (lookahead == 'm') ADVANCE(1582);
      END_STATE();
    case 1377:
      if (lookahead == 'm') ADVANCE(1645);
      END_STATE();
    case 1378:
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 1379:
      if (lookahead == 'm') ADVANCE(1668);
      END_STATE();
    case 1380:
      if (lookahead == 'm') ADVANCE(1669);
      END_STATE();
    case 1381:
      if (lookahead == 'm') ADVANCE(1185);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 'x') ADVANCE(1637);
      END_STATE();
    case 1382:
      if (lookahead == 'm') ADVANCE(458);
      END_STATE();
    case 1383:
      if (lookahead == 'n') ADVANCE(3254);
      END_STATE();
    case 1384:
      if (lookahead == 'n') ADVANCE(3134);
      END_STATE();
    case 1385:
      if (lookahead == 'n') ADVANCE(3358);
      END_STATE();
    case 1386:
      if (lookahead == 'n') ADVANCE(3356);
      END_STATE();
    case 1387:
      if (lookahead == 'n') ADVANCE(3357);
      END_STATE();
    case 1388:
      if (lookahead == 'n') ADVANCE(3363);
      END_STATE();
    case 1389:
      if (lookahead == 'n') ADVANCE(3381);
      END_STATE();
    case 1390:
      if (lookahead == 'n') ADVANCE(3135);
      END_STATE();
    case 1391:
      if (lookahead == 'n') ADVANCE(3107);
      END_STATE();
    case 1392:
      if (lookahead == 'n') ADVANCE(3129);
      END_STATE();
    case 1393:
      if (lookahead == 'n') ADVANCE(3090);
      END_STATE();
    case 1394:
      if (lookahead == 'n') ADVANCE(3091);
      END_STATE();
    case 1395:
      if (lookahead == 'n') ADVANCE(2082);
      if (lookahead == 'r') ADVANCE(1553);
      END_STATE();
    case 1396:
      if (lookahead == 'n') ADVANCE(1000);
      if (lookahead == 'r') ADVANCE(988);
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 1397:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 1398:
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 1399:
      if (lookahead == 'n') ADVANCE(1203);
      END_STATE();
    case 1400:
      if (lookahead == 'n') ADVANCE(954);
      END_STATE();
    case 1401:
      if (lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 1402:
      if (lookahead == 'n') ADVANCE(557);
      END_STATE();
    case 1403:
      if (lookahead == 'n') ADVANCE(2040);
      END_STATE();
    case 1404:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 1405:
      if (lookahead == 'n') ADVANCE(1957);
      END_STATE();
    case 1406:
      if (lookahead == 'n') ADVANCE(1247);
      if (lookahead == 'p') ADVANCE(1991);
      END_STATE();
    case 1407:
      if (lookahead == 'n') ADVANCE(999);
      END_STATE();
    case 1408:
      if (lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 1409:
      if (lookahead == 'n') ADVANCE(925);
      END_STATE();
    case 1410:
      if (lookahead == 'n') ADVANCE(956);
      END_STATE();
    case 1411:
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 1412:
      if (lookahead == 'n') ADVANCE(957);
      END_STATE();
    case 1413:
      if (lookahead == 'n') ADVANCE(1838);
      END_STATE();
    case 1414:
      if (lookahead == 'n') ADVANCE(969);
      END_STATE();
    case 1415:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 1416:
      if (lookahead == 'n') ADVANCE(977);
      END_STATE();
    case 1417:
      if (lookahead == 'n') ADVANCE(1839);
      END_STATE();
    case 1418:
      if (lookahead == 'n') ADVANCE(1959);
      END_STATE();
    case 1419:
      if (lookahead == 'n') ADVANCE(958);
      END_STATE();
    case 1420:
      if (lookahead == 'n') ADVANCE(1960);
      END_STATE();
    case 1421:
      if (lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 1422:
      if (lookahead == 'n') ADVANCE(959);
      END_STATE();
    case 1423:
      if (lookahead == 'n') ADVANCE(960);
      END_STATE();
    case 1424:
      if (lookahead == 'n') ADVANCE(961);
      END_STATE();
    case 1425:
      if (lookahead == 'n') ADVANCE(1842);
      END_STATE();
    case 1426:
      if (lookahead == 'n') ADVANCE(1988);
      END_STATE();
    case 1427:
      if (lookahead == 'n') ADVANCE(1843);
      END_STATE();
    case 1428:
      if (lookahead == 'n') ADVANCE(962);
      END_STATE();
    case 1429:
      if (lookahead == 'n') ADVANCE(1844);
      END_STATE();
    case 1430:
      if (lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 1431:
      if (lookahead == 'n') ADVANCE(1253);
      END_STATE();
    case 1432:
      if (lookahead == 'n') ADVANCE(1851);
      END_STATE();
    case 1433:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 1434:
      if (lookahead == 'n') ADVANCE(1258);
      END_STATE();
    case 1435:
      if (lookahead == 'n') ADVANCE(1854);
      END_STATE();
    case 1436:
      if (lookahead == 'n') ADVANCE(1969);
      END_STATE();
    case 1437:
      if (lookahead == 'n') ADVANCE(1970);
      END_STATE();
    case 1438:
      if (lookahead == 'n') ADVANCE(1971);
      END_STATE();
    case 1439:
      if (lookahead == 'n') ADVANCE(1972);
      END_STATE();
    case 1440:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 1441:
      if (lookahead == 'n') ADVANCE(1976);
      END_STATE();
    case 1442:
      if (lookahead == 'n') ADVANCE(2005);
      END_STATE();
    case 1443:
      if (lookahead == 'n') ADVANCE(1978);
      END_STATE();
    case 1444:
      if (lookahead == 'n') ADVANCE(2007);
      END_STATE();
    case 1445:
      if (lookahead == 'n') ADVANCE(766);
      END_STATE();
    case 1446:
      if (lookahead == 'n') ADVANCE(991);
      END_STATE();
    case 1447:
      if (lookahead == 'n') ADVANCE(1616);
      END_STATE();
    case 1448:
      if (lookahead == 'n') ADVANCE(1518);
      END_STATE();
    case 1449:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 1450:
      if (lookahead == 'n') ADVANCE(972);
      END_STATE();
    case 1451:
      if (lookahead == 'n') ADVANCE(667);
      END_STATE();
    case 1452:
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 1453:
      if (lookahead == 'n') ADVANCE(975);
      END_STATE();
    case 1454:
      if (lookahead == 'n') ADVANCE(569);
      END_STATE();
    case 1455:
      if (lookahead == 'n') ADVANCE(986);
      END_STATE();
    case 1456:
      if (lookahead == 'n') ADVANCE(1999);
      END_STATE();
    case 1457:
      if (lookahead == 'n') ADVANCE(718);
      END_STATE();
    case 1458:
      if (lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 1459:
      if (lookahead == 'n') ADVANCE(1117);
      END_STATE();
    case 1460:
      if (lookahead == 'n') ADVANCE(741);
      END_STATE();
    case 1461:
      if (lookahead == 'n') ADVANCE(1132);
      END_STATE();
    case 1462:
      if (lookahead == 'n') ADVANCE(801);
      END_STATE();
    case 1463:
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 's') ADVANCE(3162);
      END_STATE();
    case 1464:
      if (lookahead == 'n') ADVANCE(511);
      END_STATE();
    case 1465:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 1466:
      if (lookahead == 'n') ADVANCE(508);
      END_STATE();
    case 1467:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 1468:
      if (lookahead == 'n') ADVANCE(829);
      END_STATE();
    case 1469:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 1470:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 1471:
      if (lookahead == 'n') ADVANCE(1587);
      END_STATE();
    case 1472:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 1473:
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 1474:
      if (lookahead == 'n') ADVANCE(817);
      END_STATE();
    case 1475:
      if (lookahead == 'n') ADVANCE(1940);
      END_STATE();
    case 1476:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 1477:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 1478:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 1479:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 1480:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 1481:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 1482:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 1483:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 1484:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 1485:
      if (lookahead == 'n') ADVANCE(865);
      END_STATE();
    case 1486:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 1487:
      if (lookahead == 'n') ADVANCE(862);
      END_STATE();
    case 1488:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 1489:
      if (lookahead == 'n') ADVANCE(528);
      END_STATE();
    case 1490:
      if (lookahead == 'n') ADVANCE(1010);
      END_STATE();
    case 1491:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 1492:
      if (lookahead == 'n') ADVANCE(1603);
      END_STATE();
    case 1493:
      if (lookahead == 'n') ADVANCE(1601);
      END_STATE();
    case 1494:
      if (lookahead == 'n') ADVANCE(1015);
      END_STATE();
    case 1495:
      if (lookahead == 'o') ADVANCE(2149);
      END_STATE();
    case 1496:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 1497:
      if (lookahead == 'o') ADVANCE(3242);
      END_STATE();
    case 1498:
      if (lookahead == 'o') ADVANCE(3369);
      END_STATE();
    case 1499:
      if (lookahead == 'o') ADVANCE(3370);
      END_STATE();
    case 1500:
      if (lookahead == 'o') ADVANCE(3371);
      END_STATE();
    case 1501:
      if (lookahead == 'o') ADVANCE(3094);
      END_STATE();
    case 1502:
      if (lookahead == 'o') ADVANCE(3268);
      END_STATE();
    case 1503:
      if (lookahead == 'o') ADVANCE(3269);
      END_STATE();
    case 1504:
      if (lookahead == 'o') ADVANCE(3372);
      END_STATE();
    case 1505:
      if (lookahead == 'o') ADVANCE(3243);
      END_STATE();
    case 1506:
      if (lookahead == 'o') ADVANCE(3373);
      END_STATE();
    case 1507:
      if (lookahead == 'o') ADVANCE(3374);
      END_STATE();
    case 1508:
      if (lookahead == 'o') ADVANCE(3390);
      END_STATE();
    case 1509:
      if (lookahead == 'o') ADVANCE(2145);
      END_STATE();
    case 1510:
      if (lookahead == 'o') ADVANCE(1213);
      END_STATE();
    case 1511:
      if (lookahead == 'o') ADVANCE(1333);
      END_STATE();
    case 1512:
      if (lookahead == 'o') ADVANCE(2151);
      END_STATE();
    case 1513:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 1514:
      if (lookahead == 'o') ADVANCE(1677);
      END_STATE();
    case 1515:
      if (lookahead == 'o') ADVANCE(2106);
      END_STATE();
    case 1516:
      if (lookahead == 'o') ADVANCE(1873);
      END_STATE();
    case 1517:
      if (lookahead == 'o') ADVANCE(1340);
      END_STATE();
    case 1518:
      if (lookahead == 'o') ADVANCE(1753);
      END_STATE();
    case 1519:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 1520:
      if (lookahead == 'o') ADVANCE(1372);
      END_STATE();
    case 1521:
      if (lookahead == 'o') ADVANCE(2026);
      END_STATE();
    case 1522:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 1523:
      if (lookahead == 'o') ADVANCE(1279);
      END_STATE();
    case 1524:
      if (lookahead == 'o') ADVANCE(1702);
      END_STATE();
    case 1525:
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 1526:
      if (lookahead == 'o') ADVANCE(1329);
      END_STATE();
    case 1527:
      if (lookahead == 'o') ADVANCE(1413);
      END_STATE();
    case 1528:
      if (lookahead == 'o') ADVANCE(470);
      END_STATE();
    case 1529:
      if (lookahead == 'o') ADVANCE(1384);
      END_STATE();
    case 1530:
      if (lookahead == 'o') ADVANCE(1385);
      END_STATE();
    case 1531:
      if (lookahead == 'o') ADVANCE(1386);
      END_STATE();
    case 1532:
      if (lookahead == 'o') ADVANCE(1680);
      END_STATE();
    case 1533:
      if (lookahead == 'o') ADVANCE(1387);
      END_STATE();
    case 1534:
      if (lookahead == 'o') ADVANCE(1388);
      END_STATE();
    case 1535:
      if (lookahead == 'o') ADVANCE(1409);
      END_STATE();
    case 1536:
      if (lookahead == 'o') ADVANCE(1703);
      END_STATE();
    case 1537:
      if (lookahead == 'o') ADVANCE(1390);
      END_STATE();
    case 1538:
      if (lookahead == 'o') ADVANCE(1431);
      END_STATE();
    case 1539:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 1540:
      if (lookahead == 'o') ADVANCE(1434);
      END_STATE();
    case 1541:
      if (lookahead == 'o') ADVANCE(1855);
      END_STATE();
    case 1542:
      if (lookahead == 'o') ADVANCE(1392);
      END_STATE();
    case 1543:
      if (lookahead == 'o') ADVANCE(1857);
      END_STATE();
    case 1544:
      if (lookahead == 'o') ADVANCE(1393);
      END_STATE();
    case 1545:
      if (lookahead == 'o') ADVANCE(1394);
      END_STATE();
    case 1546:
      if (lookahead == 'o') ADVANCE(1756);
      END_STATE();
    case 1547:
      if (lookahead == 'o') ADVANCE(1724);
      END_STATE();
    case 1548:
      if (lookahead == 'o') ADVANCE(1690);
      END_STATE();
    case 1549:
      if (lookahead == 'o') ADVANCE(1691);
      END_STATE();
    case 1550:
      if (lookahead == 'o') ADVANCE(1727);
      END_STATE();
    case 1551:
      if (lookahead == 'o') ADVANCE(1694);
      END_STATE();
    case 1552:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 1553:
      if (lookahead == 'o') ADVANCE(2087);
      END_STATE();
    case 1554:
      if (lookahead == 'o') ADVANCE(2146);
      END_STATE();
    case 1555:
      if (lookahead == 'o') ADVANCE(1250);
      END_STATE();
    case 1556:
      if (lookahead == 'o') ADVANCE(1342);
      if (lookahead == 'r') ADVANCE(1585);
      END_STATE();
    case 1557:
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 1558:
      if (lookahead == 'o') ADVANCE(1408);
      END_STATE();
    case 1559:
      if (lookahead == 'o') ADVANCE(1417);
      END_STATE();
    case 1560:
      if (lookahead == 'o') ADVANCE(2091);
      END_STATE();
    case 1561:
      if (lookahead == 'o') ADVANCE(983);
      END_STATE();
    case 1562:
      if (lookahead == 'o') ADVANCE(2153);
      END_STATE();
    case 1563:
      if (lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 1564:
      if (lookahead == 'o') ADVANCE(1351);
      END_STATE();
    case 1565:
      if (lookahead == 'o') ADVANCE(1730);
      END_STATE();
    case 1566:
      if (lookahead == 'o') ADVANCE(1425);
      END_STATE();
    case 1567:
      if (lookahead == 'o') ADVANCE(1467);
      END_STATE();
    case 1568:
      if (lookahead == 'o') ADVANCE(1011);
      END_STATE();
    case 1569:
      if (lookahead == 'o') ADVANCE(1280);
      END_STATE();
    case 1570:
      if (lookahead == 'o') ADVANCE(1427);
      END_STATE();
    case 1571:
      if (lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 1572:
      if (lookahead == 'o') ADVANCE(1469);
      END_STATE();
    case 1573:
      if (lookahead == 'o') ADVANCE(984);
      END_STATE();
    case 1574:
      if (lookahead == 'o') ADVANCE(1891);
      END_STATE();
    case 1575:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 1576:
      if (lookahead == 'o') ADVANCE(1429);
      END_STATE();
    case 1577:
      if (lookahead == 'o') ADVANCE(570);
      END_STATE();
    case 1578:
      if (lookahead == 'o') ADVANCE(1432);
      END_STATE();
    case 1579:
      if (lookahead == 'o') ADVANCE(571);
      END_STATE();
    case 1580:
      if (lookahead == 'o') ADVANCE(1435);
      END_STATE();
    case 1581:
      if (lookahead == 'o') ADVANCE(1483);
      END_STATE();
    case 1582:
      if (lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 1583:
      if (lookahead == 'o') ADVANCE(2022);
      END_STATE();
    case 1584:
      if (lookahead == 'o') ADVANCE(1768);
      END_STATE();
    case 1585:
      if (lookahead == 'o') ADVANCE(1911);
      END_STATE();
    case 1586:
      if (lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 1587:
      if (lookahead == 'o') ADVANCE(1775);
      END_STATE();
    case 1588:
      if (lookahead == 'o') ADVANCE(1806);
      END_STATE();
    case 1589:
      if (lookahead == 'o') ADVANCE(2156);
      END_STATE();
    case 1590:
      if (lookahead == 'o') ADVANCE(1313);
      END_STATE();
    case 1591:
      if (lookahead == 'o') ADVANCE(1377);
      END_STATE();
    case 1592:
      if (lookahead == 'o') ADVANCE(1378);
      END_STATE();
    case 1593:
      if (lookahead == 'o') ADVANCE(1316);
      END_STATE();
    case 1594:
      if (lookahead == 'o') ADVANCE(1480);
      END_STATE();
    case 1595:
      if (lookahead == 'o') ADVANCE(1481);
      END_STATE();
    case 1596:
      if (lookahead == 'o') ADVANCE(2121);
      END_STATE();
    case 1597:
      if (lookahead == 'o') ADVANCE(1665);
      END_STATE();
    case 1598:
      if (lookahead == 'o') ADVANCE(1666);
      END_STATE();
    case 1599:
      if (lookahead == 'o') ADVANCE(2074);
      END_STATE();
    case 1600:
      if (lookahead == 'o') ADVANCE(2076);
      END_STATE();
    case 1601:
      if (lookahead == 'o') ADVANCE(2077);
      END_STATE();
    case 1602:
      if (lookahead == 'o') ADVANCE(1379);
      END_STATE();
    case 1603:
      if (lookahead == 'o') ADVANCE(1491);
      END_STATE();
    case 1604:
      if (lookahead == 'o') ADVANCE(1951);
      END_STATE();
    case 1605:
      if (lookahead == 'o') ADVANCE(1953);
      END_STATE();
    case 1606:
      if (lookahead == 'p') ADVANCE(1031);
      END_STATE();
    case 1607:
      if (lookahead == 'p') ADVANCE(308);
      END_STATE();
    case 1608:
      if (lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 1609:
      if (lookahead == 'p') ADVANCE(3244);
      END_STATE();
    case 1610:
      if (lookahead == 'p') ADVANCE(3118);
      END_STATE();
    case 1611:
      if (lookahead == 'p') ADVANCE(3246);
      END_STATE();
    case 1612:
      if (lookahead == 'p') ADVANCE(3106);
      END_STATE();
    case 1613:
      if (lookahead == 'p') ADVANCE(1024);
      END_STATE();
    case 1614:
      if (lookahead == 'p') ADVANCE(953);
      END_STATE();
    case 1615:
      if (lookahead == 'p') ADVANCE(1101);
      END_STATE();
    case 1616:
      if (lookahead == 'p') ADVANCE(966);
      END_STATE();
    case 1617:
      if (lookahead == 'p') ADVANCE(1834);
      END_STATE();
    case 1618:
      if (lookahead == 'p') ADVANCE(1099);
      END_STATE();
    case 1619:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 1620:
      if (lookahead == 'p') ADVANCE(1984);
      END_STATE();
    case 1621:
      if (lookahead == 'p') ADVANCE(685);
      END_STATE();
    case 1622:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 1623:
      if (lookahead == 'p') ADVANCE(773);
      END_STATE();
    case 1624:
      if (lookahead == 'p') ADVANCE(802);
      END_STATE();
    case 1625:
      if (lookahead == 'p') ADVANCE(376);
      END_STATE();
    case 1626:
      if (lookahead == 'p') ADVANCE(660);
      if (lookahead == 'u') ADVANCE(1981);
      if (lookahead == 'v') ADVANCE(662);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2510);
      END_STATE();
    case 1627:
      if (lookahead == 'p') ADVANCE(2088);
      END_STATE();
    case 1628:
      if (lookahead == 'p') ADVANCE(1709);
      END_STATE();
    case 1629:
      if (lookahead == 'p') ADVANCE(1078);
      END_STATE();
    case 1630:
      if (lookahead == 'p') ADVANCE(2093);
      END_STATE();
    case 1631:
      if (lookahead == 'p') ADVANCE(736);
      END_STATE();
    case 1632:
      if (lookahead == 'p') ADVANCE(1584);
      END_STATE();
    case 1633:
      if (lookahead == 'p') ADVANCE(1260);
      END_STATE();
    case 1634:
      if (lookahead == 'p') ADVANCE(695);
      END_STATE();
    case 1635:
      if (lookahead == 'p') ADVANCE(1272);
      END_STATE();
    case 1636:
      if (lookahead == 'p') ADVANCE(1547);
      END_STATE();
    case 1637:
      if (lookahead == 'p') ADVANCE(710);
      END_STATE();
    case 1638:
      if (lookahead == 'p') ADVANCE(1550);
      END_STATE();
    case 1639:
      if (lookahead == 'p') ADVANCE(2011);
      END_STATE();
    case 1640:
      if (lookahead == 'p') ADVANCE(1033);
      END_STATE();
    case 1641:
      if (lookahead == 'p') ADVANCE(1129);
      END_STATE();
    case 1642:
      if (lookahead == 'p') ADVANCE(1569);
      END_STATE();
    case 1643:
      if (lookahead == 'p') ADVANCE(1108);
      END_STATE();
    case 1644:
      if (lookahead == 'p') ADVANCE(1804);
      END_STATE();
    case 1645:
      if (lookahead == 'p') ADVANCE(1304);
      END_STATE();
    case 1646:
      if (lookahead == 'p') ADVANCE(2046);
      END_STATE();
    case 1647:
      if (lookahead == 'p') ADVANCE(1134);
      END_STATE();
    case 1648:
      if (lookahead == 'p') ADVANCE(1112);
      END_STATE();
    case 1649:
      if (lookahead == 'p') ADVANCE(1797);
      END_STATE();
    case 1650:
      if (lookahead == 'p') ADVANCE(2052);
      END_STATE();
    case 1651:
      if (lookahead == 'p') ADVANCE(1136);
      END_STATE();
    case 1652:
      if (lookahead == 'p') ADVANCE(1118);
      END_STATE();
    case 1653:
      if (lookahead == 'p') ADVANCE(1138);
      END_STATE();
    case 1654:
      if (lookahead == 'p') ADVANCE(1124);
      END_STATE();
    case 1655:
      if (lookahead == 'p') ADVANCE(1139);
      END_STATE();
    case 1656:
      if (lookahead == 'p') ADVANCE(1777);
      END_STATE();
    case 1657:
      if (lookahead == 'p') ADVANCE(1128);
      END_STATE();
    case 1658:
      if (lookahead == 'p') ADVANCE(1782);
      END_STATE();
    case 1659:
      if (lookahead == 'p') ADVANCE(1809);
      END_STATE();
    case 1660:
      if (lookahead == 'p') ADVANCE(859);
      END_STATE();
    case 1661:
      if (lookahead == 'p') ADVANCE(1820);
      END_STATE();
    case 1662:
      if (lookahead == 'p') ADVANCE(1824);
      END_STATE();
    case 1663:
      if (lookahead == 'p') ADVANCE(2056);
      END_STATE();
    case 1664:
      if (lookahead == 'p') ADVANCE(2057);
      END_STATE();
    case 1665:
      if (lookahead == 'p') ADVANCE(2058);
      END_STATE();
    case 1666:
      if (lookahead == 'p') ADVANCE(2060);
      END_STATE();
    case 1667:
      if (lookahead == 'p') ADVANCE(1034);
      END_STATE();
    case 1668:
      if (lookahead == 'p') ADVANCE(1822);
      END_STATE();
    case 1669:
      if (lookahead == 'p') ADVANCE(1825);
      END_STATE();
    case 1670:
      if (lookahead == 'p') ADVANCE(1035);
      END_STATE();
    case 1671:
      if (lookahead == 'p') ADVANCE(897);
      END_STATE();
    case 1672:
      if (lookahead == 'p') ADVANCE(1036);
      END_STATE();
    case 1673:
      if (lookahead == 'q') ADVANCE(2219);
      END_STATE();
    case 1674:
      if (lookahead == 'q') ADVANCE(2089);
      END_STATE();
    case 1675:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 1676:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 1677:
      if (lookahead == 'r') ADVANCE(3099);
      END_STATE();
    case 1678:
      if (lookahead == 'r') ADVANCE(680);
      END_STATE();
    case 1679:
      if (lookahead == 'r') ADVANCE(3248);
      END_STATE();
    case 1680:
      if (lookahead == 'r') ADVANCE(3100);
      END_STATE();
    case 1681:
      if (lookahead == 'r') ADVANCE(3226);
      END_STATE();
    case 1682:
      if (lookahead == 'r') ADVANCE(3247);
      END_STATE();
    case 1683:
      if (lookahead == 'r') ADVANCE(3082);
      END_STATE();
    case 1684:
      if (lookahead == 'r') ADVANCE(3175);
      END_STATE();
    case 1685:
      if (lookahead == 'r') ADVANCE(3187);
      END_STATE();
    case 1686:
      if (lookahead == 'r') ADVANCE(3220);
      END_STATE();
    case 1687:
      if (lookahead == 'r') ADVANCE(3261);
      END_STATE();
    case 1688:
      if (lookahead == 'r') ADVANCE(3259);
      END_STATE();
    case 1689:
      if (lookahead == 'r') ADVANCE(3078);
      END_STATE();
    case 1690:
      if (lookahead == 'r') ADVANCE(3151);
      END_STATE();
    case 1691:
      if (lookahead == 'r') ADVANCE(3152);
      END_STATE();
    case 1692:
      if (lookahead == 'r') ADVANCE(3214);
      END_STATE();
    case 1693:
      if (lookahead == 'r') ADVANCE(3131);
      END_STATE();
    case 1694:
      if (lookahead == 'r') ADVANCE(3083);
      END_STATE();
    case 1695:
      if (lookahead == 'r') ADVANCE(2182);
      END_STATE();
    case 1696:
      if (lookahead == 'r') ADVANCE(1869);
      END_STATE();
    case 1697:
      if (lookahead == 'r') ADVANCE(2136);
      END_STATE();
    case 1698:
      if (lookahead == 'r') ADVANCE(1987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 1699:
      if (lookahead == 'r') ADVANCE(1955);
      END_STATE();
    case 1700:
      if (lookahead == 'r') ADVANCE(1339);
      END_STATE();
    case 1701:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 1702:
      if (lookahead == 'r') ADVANCE(1145);
      END_STATE();
    case 1703:
      if (lookahead == 'r') ADVANCE(1357);
      END_STATE();
    case 1704:
      if (lookahead == 'r') ADVANCE(1741);
      END_STATE();
    case 1705:
      if (lookahead == 'r') ADVANCE(2108);
      END_STATE();
    case 1706:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 1707:
      if (lookahead == 'r') ADVANCE(2119);
      END_STATE();
    case 1708:
      if (lookahead == 'r') ADVANCE(996);
      END_STATE();
    case 1709:
      if (lookahead == 'r') ADVANCE(1561);
      END_STATE();
    case 1710:
      if (lookahead == 'r') ADVANCE(1080);
      END_STATE();
    case 1711:
      if (lookahead == 'r') ADVANCE(1958);
      END_STATE();
    case 1712:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 1713:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 1714:
      if (lookahead == 'r') ADVANCE(1062);
      END_STATE();
    case 1715:
      if (lookahead == 'r') ADVANCE(1232);
      END_STATE();
    case 1716:
      if (lookahead == 'r') ADVANCE(1459);
      END_STATE();
    case 1717:
      if (lookahead == 'r') ADVANCE(1233);
      END_STATE();
    case 1718:
      if (lookahead == 'r') ADVANCE(721);
      END_STATE();
    case 1719:
      if (lookahead == 'r') ADVANCE(1130);
      END_STATE();
    case 1720:
      if (lookahead == 'r') ADVANCE(1234);
      END_STATE();
    case 1721:
      if (lookahead == 'r') ADVANCE(1966);
      END_STATE();
    case 1722:
      if (lookahead == 'r') ADVANCE(1236);
      END_STATE();
    case 1723:
      if (lookahead == 'r') ADVANCE(1526);
      END_STATE();
    case 1724:
      if (lookahead == 'r') ADVANCE(1967);
      END_STATE();
    case 1725:
      if (lookahead == 'r') ADVANCE(1239);
      END_STATE();
    case 1726:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 1727:
      if (lookahead == 'r') ADVANCE(1974);
      END_STATE();
    case 1728:
      if (lookahead == 'r') ADVANCE(677);
      END_STATE();
    case 1729:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 1730:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 1731:
      if (lookahead == 'r') ADVANCE(658);
      END_STATE();
    case 1732:
      if (lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 1733:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 1734:
      if (lookahead == 'r') ADVANCE(631);
      END_STATE();
    case 1735:
      if (lookahead == 'r') ADVANCE(639);
      END_STATE();
    case 1736:
      if (lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 1737:
      if (lookahead == 'r') ADVANCE(641);
      END_STATE();
    case 1738:
      if (lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 1739:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 1740:
      if (lookahead == 'r') ADVANCE(1077);
      END_STATE();
    case 1741:
      if (lookahead == 'r') ADVANCE(1146);
      END_STATE();
    case 1742:
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 1743:
      if (lookahead == 'r') ADVANCE(1554);
      END_STATE();
    case 1744:
      if (lookahead == 'r') ADVANCE(1927);
      END_STATE();
    case 1745:
      if (lookahead == 'r') ADVANCE(712);
      END_STATE();
    case 1746:
      if (lookahead == 'r') ADVANCE(1164);
      END_STATE();
    case 1747:
      if (lookahead == 'r') ADVANCE(1564);
      END_STATE();
    case 1748:
      if (lookahead == 'r') ADVANCE(1656);
      END_STATE();
    case 1749:
      if (lookahead == 'r') ADVANCE(1878);
      END_STATE();
    case 1750:
      if (lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 1751:
      if (lookahead == 'r') ADVANCE(1061);
      END_STATE();
    case 1752:
      if (lookahead == 'r') ADVANCE(2195);
      END_STATE();
    case 1753:
      if (lookahead == 'r') ADVANCE(743);
      END_STATE();
    case 1754:
      if (lookahead == 'r') ADVANCE(1880);
      END_STATE();
    case 1755:
      if (lookahead == 'r') ADVANCE(1767);
      END_STATE();
    case 1756:
      if (lookahead == 'r') ADVANCE(1355);
      END_STATE();
    case 1757:
      if (lookahead == 'r') ADVANCE(2187);
      END_STATE();
    case 1758:
      if (lookahead == 'r') ADVANCE(1907);
      END_STATE();
    case 1759:
      if (lookahead == 'r') ADVANCE(1068);
      END_STATE();
    case 1760:
      if (lookahead == 'r') ADVANCE(714);
      END_STATE();
    case 1761:
      if (lookahead == 'r') ADVANCE(1097);
      END_STATE();
    case 1762:
      if (lookahead == 'r') ADVANCE(749);
      END_STATE();
    case 1763:
      if (lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 1764:
      if (lookahead == 'r') ADVANCE(2006);
      END_STATE();
    case 1765:
      if (lookahead == 'r') ADVANCE(1103);
      END_STATE();
    case 1766:
      if (lookahead == 'r') ADVANCE(1107);
      END_STATE();
    case 1767:
      if (lookahead == 'r') ADVANCE(1548);
      END_STATE();
    case 1768:
      if (lookahead == 'r') ADVANCE(2009);
      END_STATE();
    case 1769:
      if (lookahead == 'r') ADVANCE(1549);
      END_STATE();
    case 1770:
      if (lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 1771:
      if (lookahead == 'r') ADVANCE(1111);
      END_STATE();
    case 1772:
      if (lookahead == 'r') ADVANCE(756);
      END_STATE();
    case 1773:
      if (lookahead == 'r') ADVANCE(1551);
      END_STATE();
    case 1774:
      if (lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 1775:
      if (lookahead == 'r') ADVANCE(861);
      END_STATE();
    case 1776:
      if (lookahead == 'r') ADVANCE(2013);
      END_STATE();
    case 1777:
      if (lookahead == 'r') ADVANCE(1116);
      END_STATE();
    case 1778:
      if (lookahead == 'r') ADVANCE(2029);
      END_STATE();
    case 1779:
      if (lookahead == 'r') ADVANCE(2015);
      END_STATE();
    case 1780:
      if (lookahead == 'r') ADVANCE(730);
      END_STATE();
    case 1781:
      if (lookahead == 'r') ADVANCE(1123);
      END_STATE();
    case 1782:
      if (lookahead == 'r') ADVANCE(1133);
      END_STATE();
    case 1783:
      if (lookahead == 'r') ADVANCE(2045);
      END_STATE();
    case 1784:
      if (lookahead == 'r') ADVANCE(1560);
      END_STATE();
    case 1785:
      if (lookahead == 'r') ADVANCE(2138);
      END_STATE();
    case 1786:
      if (lookahead == 'r') ADVANCE(780);
      END_STATE();
    case 1787:
      if (lookahead == 'r') ADVANCE(2111);
      END_STATE();
    case 1788:
      if (lookahead == 'r') ADVANCE(998);
      END_STATE();
    case 1789:
      if (lookahead == 'r') ADVANCE(1568);
      END_STATE();
    case 1790:
      if (lookahead == 'r') ADVANCE(820);
      END_STATE();
    case 1791:
      if (lookahead == 'r') ADVANCE(1461);
      END_STATE();
    case 1792:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 1793:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 1794:
      if (lookahead == 'r') ADVANCE(1769);
      END_STATE();
    case 1795:
      if (lookahead == 'r') ADVANCE(826);
      END_STATE();
    case 1796:
      if (lookahead == 'r') ADVANCE(2113);
      END_STATE();
    case 1797:
      if (lookahead == 'r') ADVANCE(1573);
      END_STATE();
    case 1798:
      if (lookahead == 'r') ADVANCE(1773);
      END_STATE();
    case 1799:
      if (lookahead == 'r') ADVANCE(838);
      END_STATE();
    case 1800:
      if (lookahead == 'r') ADVANCE(2140);
      END_STATE();
    case 1801:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 1802:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 1803:
      if (lookahead == 'r') ADVANCE(1367);
      END_STATE();
    case 1804:
      if (lookahead == 'r') ADVANCE(840);
      END_STATE();
    case 1805:
      if (lookahead == 'r') ADVANCE(1369);
      END_STATE();
    case 1806:
      if (lookahead == 'r') ADVANCE(1152);
      END_STATE();
    case 1807:
      if (lookahead == 'r') ADVANCE(1003);
      END_STATE();
    case 1808:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 1809:
      if (lookahead == 'r') ADVANCE(855);
      END_STATE();
    case 1810:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 1811:
      if (lookahead == 'r') ADVANCE(1589);
      END_STATE();
    case 1812:
      if (lookahead == 'r') ADVANCE(1932);
      END_STATE();
    case 1813:
      if (lookahead == 'r') ADVANCE(1165);
      END_STATE();
    case 1814:
      if (lookahead == 'r') ADVANCE(1658);
      END_STATE();
    case 1815:
      if (lookahead == 'r') ADVANCE(2066);
      END_STATE();
    case 1816:
      if (lookahead == 'r') ADVANCE(2142);
      END_STATE();
    case 1817:
      if (lookahead == 'r') ADVANCE(843);
      END_STATE();
    case 1818:
      if (lookahead == 'r') ADVANCE(1159);
      END_STATE();
    case 1819:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 1820:
      if (lookahead == 'r') ADVANCE(868);
      END_STATE();
    case 1821:
      if (lookahead == 'r') ADVANCE(2067);
      END_STATE();
    case 1822:
      if (lookahead == 'r') ADVANCE(847);
      END_STATE();
    case 1823:
      if (lookahead == 'r') ADVANCE(875);
      END_STATE();
    case 1824:
      if (lookahead == 'r') ADVANCE(874);
      END_STATE();
    case 1825:
      if (lookahead == 'r') ADVANCE(850);
      END_STATE();
    case 1826:
      if (lookahead == 'r') ADVANCE(876);
      END_STATE();
    case 1827:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 1828:
      if (lookahead == 'r') ADVANCE(2205);
      END_STATE();
    case 1829:
      if (lookahead == 'r') ADVANCE(1592);
      END_STATE();
    case 1830:
      if (lookahead == 'r') ADVANCE(2207);
      END_STATE();
    case 1831:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 1832:
      if (lookahead == 'r') ADVANCE(1193);
      END_STATE();
    case 1833:
      if (lookahead == 'r') ADVANCE(1605);
      END_STATE();
    case 1834:
      if (lookahead == 's') ADVANCE(3095);
      END_STATE();
    case 1835:
      if (lookahead == 's') ADVANCE(3120);
      END_STATE();
    case 1836:
      if (lookahead == 's') ADVANCE(3133);
      END_STATE();
    case 1837:
      if (lookahead == 's') ADVANCE(3063);
      END_STATE();
    case 1838:
      if (lookahead == 's') ADVANCE(3101);
      END_STATE();
    case 1839:
      if (lookahead == 's') ADVANCE(3182);
      END_STATE();
    case 1840:
      if (lookahead == 's') ADVANCE(3140);
      END_STATE();
    case 1841:
      if (lookahead == 's') ADVANCE(3205);
      END_STATE();
    case 1842:
      if (lookahead == 's') ADVANCE(3263);
      END_STATE();
    case 1843:
      if (lookahead == 's') ADVANCE(3257);
      END_STATE();
    case 1844:
      if (lookahead == 's') ADVANCE(3185);
      END_STATE();
    case 1845:
      if (lookahead == 's') ADVANCE(3161);
      END_STATE();
    case 1846:
      if (lookahead == 's') ADVANCE(3141);
      END_STATE();
    case 1847:
      if (lookahead == 's') ADVANCE(3206);
      END_STATE();
    case 1848:
      if (lookahead == 's') ADVANCE(3096);
      END_STATE();
    case 1849:
      if (lookahead == 's') ADVANCE(3130);
      END_STATE();
    case 1850:
      if (lookahead == 's') ADVANCE(3143);
      END_STATE();
    case 1851:
      if (lookahead == 's') ADVANCE(3227);
      END_STATE();
    case 1852:
      if (lookahead == 's') ADVANCE(3065);
      END_STATE();
    case 1853:
      if (lookahead == 's') ADVANCE(3144);
      END_STATE();
    case 1854:
      if (lookahead == 's') ADVANCE(3173);
      END_STATE();
    case 1855:
      if (lookahead == 's') ADVANCE(3153);
      END_STATE();
    case 1856:
      if (lookahead == 's') ADVANCE(3097);
      END_STATE();
    case 1857:
      if (lookahead == 's') ADVANCE(3154);
      END_STATE();
    case 1858:
      if (lookahead == 's') ADVANCE(3237);
      END_STATE();
    case 1859:
      if (lookahead == 's') ADVANCE(3066);
      END_STATE();
    case 1860:
      if (lookahead == 's') ADVANCE(3128);
      END_STATE();
    case 1861:
      if (lookahead == 's') ADVANCE(3172);
      END_STATE();
    case 1862:
      if (lookahead == 's') ADVANCE(3155);
      END_STATE();
    case 1863:
      if (lookahead == 's') ADVANCE(3098);
      END_STATE();
    case 1864:
      if (lookahead == 's') ADVANCE(3265);
      END_STATE();
    case 1865:
      if (lookahead == 's') ADVANCE(3266);
      END_STATE();
    case 1866:
      if (lookahead == 's') ADVANCE(3267);
      END_STATE();
    case 1867:
      if (lookahead == 's') ADVANCE(1896);
      END_STATE();
    case 1868:
      if (lookahead == 's') ADVANCE(1954);
      END_STATE();
    case 1869:
      if (lookahead == 's') ADVANCE(1558);
      END_STATE();
    case 1870:
      if (lookahead == 's') ADVANCE(1017);
      END_STATE();
    case 1871:
      if (lookahead == 's') ADVANCE(1040);
      END_STATE();
    case 1872:
      if (lookahead == 's') ADVANCE(393);
      END_STATE();
    case 1873:
      if (lookahead == 's') ADVANCE(609);
      END_STATE();
    case 1874:
      if (lookahead == 's') ADVANCE(1837);
      END_STATE();
    case 1875:
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 1876:
      if (lookahead == 's') ADVANCE(1156);
      END_STATE();
    case 1877:
      if (lookahead == 's') ADVANCE(2042);
      END_STATE();
    case 1878:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 1879:
      if (lookahead == 's') ADVANCE(1962);
      END_STATE();
    case 1880:
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 1881:
      if (lookahead == 's') ADVANCE(1964);
      END_STATE();
    case 1882:
      if (lookahead == 's') ADVANCE(1993);
      END_STATE();
    case 1883:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 1884:
      if (lookahead == 's') ADVANCE(617);
      END_STATE();
    case 1885:
      if (lookahead == 's') ADVANCE(1997);
      END_STATE();
    case 1886:
      if (lookahead == 's') ADVANCE(1977);
      END_STATE();
    case 1887:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 1888:
      if (lookahead == 's') ADVANCE(706);
      END_STATE();
    case 1889:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 1890:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 1891:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 1892:
      if (lookahead == 's') ADVANCE(729);
      END_STATE();
    case 1893:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 1894:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 1895:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 1896:
      if (lookahead == 's') ADVANCE(1613);
      END_STATE();
    case 1897:
      if (lookahead == 's') ADVANCE(1027);
      END_STATE();
    case 1898:
      if (lookahead == 's') ADVANCE(2041);
      END_STATE();
    case 1899:
      if (lookahead == 's') ADVANCE(1079);
      END_STATE();
    case 1900:
      if (lookahead == 's') ADVANCE(2071);
      END_STATE();
    case 1901:
      if (lookahead == 's') ADVANCE(1623);
      END_STATE();
    case 1902:
      if (lookahead == 's') ADVANCE(835);
      END_STATE();
    case 1903:
      if (lookahead == 's') ADVANCE(2194);
      END_STATE();
    case 1904:
      if (lookahead == 's') ADVANCE(1889);
      END_STATE();
    case 1905:
      if (lookahead == 's') ADVANCE(1876);
      END_STATE();
    case 1906:
      if (lookahead == 's') ADVANCE(1090);
      END_STATE();
    case 1907:
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 1908:
      if (lookahead == 's') ADVANCE(906);
      if (lookahead == 't') ADVANCE(920);
      END_STATE();
    case 1909:
      if (lookahead == 's') ADVANCE(1059);
      END_STATE();
    case 1910:
      if (lookahead == 's') ADVANCE(1088);
      END_STATE();
    case 1911:
      if (lookahead == 's') ADVANCE(1926);
      END_STATE();
    case 1912:
      if (lookahead == 's') ADVANCE(1096);
      END_STATE();
    case 1913:
      if (lookahead == 's') ADVANCE(1941);
      END_STATE();
    case 1914:
      if (lookahead == 's') ADVANCE(697);
      END_STATE();
    case 1915:
      if (lookahead == 's') ADVANCE(2064);
      END_STATE();
    case 1916:
      if (lookahead == 's') ADVANCE(1895);
      END_STATE();
    case 1917:
      if (lookahead == 's') ADVANCE(1950);
      END_STATE();
    case 1918:
      if (lookahead == 's') ADVANCE(2012);
      END_STATE();
    case 1919:
      if (lookahead == 's') ADVANCE(727);
      END_STATE();
    case 1920:
      if (lookahead == 's') ADVANCE(2073);
      END_STATE();
    case 1921:
      if (lookahead == 's') ADVANCE(2025);
      END_STATE();
    case 1922:
      if (lookahead == 's') ADVANCE(2079);
      END_STATE();
    case 1923:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 1924:
      if (lookahead == 's') ADVANCE(1094);
      END_STATE();
    case 1925:
      if (lookahead == 's') ADVANCE(831);
      END_STATE();
    case 1926:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 1927:
      if (lookahead == 's') ADVANCE(1098);
      END_STATE();
    case 1928:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 1929:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 1930:
      if (lookahead == 's') ADVANCE(1928);
      END_STATE();
    case 1931:
      if (lookahead == 's') ADVANCE(2051);
      END_STATE();
    case 1932:
      if (lookahead == 's') ADVANCE(1135);
      END_STATE();
    case 1933:
      if (lookahead == 's') ADVANCE(1140);
      END_STATE();
    case 1934:
      if (lookahead == 's') ADVANCE(1161);
      END_STATE();
    case 1935:
      if (lookahead == 's') ADVANCE(2049);
      END_STATE();
    case 1936:
      if (lookahead == 's') ADVANCE(1934);
      END_STATE();
    case 1937:
      if (lookahead == 's') ADVANCE(858);
      END_STATE();
    case 1938:
      if (lookahead == 's') ADVANCE(2054);
      END_STATE();
    case 1939:
      if (lookahead == 's') ADVANCE(1933);
      END_STATE();
    case 1940:
      if (lookahead == 's') ADVANCE(849);
      END_STATE();
    case 1941:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 1942:
      if (lookahead == 's') ADVANCE(1180);
      END_STATE();
    case 1943:
      if (lookahead == 's') ADVANCE(2069);
      END_STATE();
    case 1944:
      if (lookahead == 's') ADVANCE(2070);
      END_STATE();
    case 1945:
      if (lookahead == 's') ADVANCE(1182);
      END_STATE();
    case 1946:
      if (lookahead == 's') ADVANCE(896);
      END_STATE();
    case 1947:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 1948:
      if (lookahead == 's') ADVANCE(1945);
      END_STATE();
    case 1949:
      if (lookahead == 's') ADVANCE(2075);
      END_STATE();
    case 1950:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 1951:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 1952:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 1953:
      if (lookahead == 's') ADVANCE(1952);
      END_STATE();
    case 1954:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 1955:
      if (lookahead == 't') ADVANCE(3092);
      END_STATE();
    case 1956:
      if (lookahead == 't') ADVANCE(3250);
      END_STATE();
    case 1957:
      if (lookahead == 't') ADVANCE(3355);
      END_STATE();
    case 1958:
      if (lookahead == 't') ADVANCE(3093);
      END_STATE();
    case 1959:
      if (lookahead == 't') ADVANCE(3238);
      END_STATE();
    case 1960:
      if (lookahead == 't') ADVANCE(3272);
      END_STATE();
    case 1961:
      if (lookahead == 't') ADVANCE(3251);
      END_STATE();
    case 1962:
      if (lookahead == 't') ADVANCE(3385);
      END_STATE();
    case 1963:
      if (lookahead == 't') ADVANCE(3109);
      END_STATE();
    case 1964:
      if (lookahead == 't') ADVANCE(3069);
      END_STATE();
    case 1965:
      if (lookahead == 't') ADVANCE(3224);
      END_STATE();
    case 1966:
      if (lookahead == 't') ADVANCE(3079);
      END_STATE();
    case 1967:
      if (lookahead == 't') ADVANCE(3071);
      END_STATE();
    case 1968:
      if (lookahead == 't') ADVANCE(3202);
      END_STATE();
    case 1969:
      if (lookahead == 't') ADVANCE(3253);
      END_STATE();
    case 1970:
      if (lookahead == 't') ADVANCE(3239);
      END_STATE();
    case 1971:
      if (lookahead == 't') ADVANCE(3103);
      END_STATE();
    case 1972:
      if (lookahead == 't') ADVANCE(3054);
      END_STATE();
    case 1973:
      if (lookahead == 't') ADVANCE(3375);
      END_STATE();
    case 1974:
      if (lookahead == 't') ADVANCE(3072);
      END_STATE();
    case 1975:
      if (lookahead == 't') ADVANCE(3149);
      END_STATE();
    case 1976:
      if (lookahead == 't') ADVANCE(3056);
      END_STATE();
    case 1977:
      if (lookahead == 't') ADVANCE(3392);
      END_STATE();
    case 1978:
      if (lookahead == 't') ADVANCE(3104);
      END_STATE();
    case 1979:
      if (lookahead == 't') ADVANCE(1025);
      END_STATE();
    case 1980:
      if (lookahead == 't') ADVANCE(1016);
      END_STATE();
    case 1981:
      if (lookahead == 't') ADVANCE(1627);
      END_STATE();
    case 1982:
      if (lookahead == 't') ADVANCE(1522);
      END_STATE();
    case 1983:
      if (lookahead == 't') ADVANCE(2102);
      END_STATE();
    case 1984:
      if (lookahead == 't') ADVANCE(1018);
      END_STATE();
    case 1985:
      if (lookahead == 't') ADVANCE(1019);
      END_STATE();
    case 1986:
      if (lookahead == 't') ADVANCE(1496);
      END_STATE();
    case 1987:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 1988:
      if (lookahead == 't') ADVANCE(1836);
      END_STATE();
    case 1989:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 1990:
      if (lookahead == 't') ADVANCE(1091);
      END_STATE();
    case 1991:
      if (lookahead == 't') ADVANCE(1095);
      END_STATE();
    case 1992:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 1993:
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 1994:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 1995:
      if (lookahead == 't') ADVANCE(1497);
      END_STATE();
    case 1996:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 1997:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 1998:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 1999:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 2000:
      if (lookahead == 't') ADVANCE(1501);
      END_STATE();
    case 2001:
      if (lookahead == 't') ADVANCE(1705);
      END_STATE();
    case 2002:
      if (lookahead == 't') ADVANCE(1848);
      END_STATE();
    case 2003:
      if (lookahead == 't') ADVANCE(1505);
      END_STATE();
    case 2004:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 2005:
      if (lookahead == 't') ADVANCE(1856);
      END_STATE();
    case 2006:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 2007:
      if (lookahead == 't') ADVANCE(1863);
      END_STATE();
    case 2008:
      if (lookahead == 't') ADVANCE(1746);
      END_STATE();
    case 2009:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 2010:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 2011:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 2012:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 2013:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 2014:
      if (lookahead == 't') ADVANCE(1719);
      END_STATE();
    case 2015:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 2016:
      if (lookahead == 't') ADVANCE(632);
      END_STATE();
    case 2017:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 2018:
      if (lookahead == 't') ADVANCE(642);
      END_STATE();
    case 2019:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 2020:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 2021:
      if (lookahead == 't') ADVANCE(1368);
      END_STATE();
    case 2022:
      if (lookahead == 't') ADVANCE(1539);
      END_STATE();
    case 2023:
      if (lookahead == 't') ADVANCE(1046);
      END_STATE();
    case 2024:
      if (lookahead == 't') ADVANCE(2095);
      END_STATE();
    case 2025:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 2026:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 2027:
      if (lookahead == 't') ADVANCE(783);
      END_STATE();
    case 2028:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 2029:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 2030:
      if (lookahead == 't') ADVANCE(1066);
      END_STATE();
    case 2031:
      if (lookahead == 't') ADVANCE(1089);
      END_STATE();
    case 2032:
      if (lookahead == 't') ADVANCE(733);
      END_STATE();
    case 2033:
      if (lookahead == 't') ADVANCE(887);
      END_STATE();
    case 2034:
      if (lookahead == 't') ADVANCE(745);
      END_STATE();
    case 2035:
      if (lookahead == 't') ADVANCE(747);
      END_STATE();
    case 2036:
      if (lookahead == 't') ADVANCE(752);
      END_STATE();
    case 2037:
      if (lookahead == 't') ADVANCE(1630);
      END_STATE();
    case 2038:
      if (lookahead == 't') ADVANCE(1114);
      END_STATE();
    case 2039:
      if (lookahead == 't') ADVANCE(2114);
      END_STATE();
    case 2040:
      if (lookahead == 't') ADVANCE(1757);
      END_STATE();
    case 2041:
      if (lookahead == 't') ADVANCE(1761);
      END_STATE();
    case 2042:
      if (lookahead == 't') ADVANCE(786);
      END_STATE();
    case 2043:
      if (lookahead == 't') ADVANCE(1787);
      END_STATE();
    case 2044:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 2045:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 2046:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 2047:
      if (lookahead == 't') ADVANCE(2117);
      END_STATE();
    case 2048:
      if (lookahead == 't') ADVANCE(1102);
      END_STATE();
    case 2049:
      if (lookahead == 't') ADVANCE(1765);
      END_STATE();
    case 2050:
      if (lookahead == 't') ADVANCE(1796);
      END_STATE();
    case 2051:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 2052:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 2053:
      if (lookahead == 't') ADVANCE(1105);
      END_STATE();
    case 2054:
      if (lookahead == 't') ADVANCE(1766);
      END_STATE();
    case 2055:
      if (lookahead == 't') ADVANCE(1109);
      END_STATE();
    case 2056:
      if (lookahead == 't') ADVANCE(1115);
      END_STATE();
    case 2057:
      if (lookahead == 't') ADVANCE(1121);
      END_STATE();
    case 2058:
      if (lookahead == 't') ADVANCE(1125);
      END_STATE();
    case 2059:
      if (lookahead == 't') ADVANCE(1131);
      END_STATE();
    case 2060:
      if (lookahead == 't') ADVANCE(1137);
      END_STATE();
    case 2061:
      if (lookahead == 't') ADVANCE(1141);
      END_STATE();
    case 2062:
      if (lookahead == 't') ADVANCE(1142);
      END_STATE();
    case 2063:
      if (lookahead == 't') ADVANCE(1143);
      END_STATE();
    case 2064:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 2065:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 2066:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 2067:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 2068:
      if (lookahead == 't') ADVANCE(1373);
      END_STATE();
    case 2069:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 2070:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 2071:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 2072:
      if (lookahead == 't') ADVANCE(1813);
      END_STATE();
    case 2073:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 2074:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 2075:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 2076:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 2077:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 2078:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 2079:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 2080:
      if (lookahead == 'u') ADVANCE(1042);
      END_STATE();
    case 2081:
      if (lookahead == 'u') ADVANCE(823);
      END_STATE();
    case 2082:
      if (lookahead == 'u') ADVANCE(1614);
      END_STATE();
    case 2083:
      if (lookahead == 'u') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3042);
      END_STATE();
    case 2084:
      if (lookahead == 'u') ADVANCE(1868);
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 2085:
      if (lookahead == 'u') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3041);
      END_STATE();
    case 2086:
      if (lookahead == 'u') ADVANCE(584);
      END_STATE();
    case 2087:
      if (lookahead == 'u') ADVANCE(1609);
      END_STATE();
    case 2088:
      if (lookahead == 'u') ADVANCE(1956);
      END_STATE();
    case 2089:
      if (lookahead == 'u') ADVANCE(1157);
      END_STATE();
    case 2090:
      if (lookahead == 'u') ADVANCE(935);
      END_STATE();
    case 2091:
      if (lookahead == 'u') ADVANCE(1611);
      END_STATE();
    case 2092:
      if (lookahead == 'u') ADVANCE(1617);
      END_STATE();
    case 2093:
      if (lookahead == 'u') ADVANCE(1961);
      END_STATE();
    case 2094:
      if (lookahead == 'u') ADVANCE(1399);
      END_STATE();
    case 2095:
      if (lookahead == 'u') ADVANCE(1760);
      END_STATE();
    case 2096:
      if (lookahead == 'u') ADVANCE(1715);
      END_STATE();
    case 2097:
      if (lookahead == 'u') ADVANCE(1717);
      END_STATE();
    case 2098:
      if (lookahead == 'u') ADVANCE(1720);
      END_STATE();
    case 2099:
      if (lookahead == 'u') ADVANCE(1722);
      END_STATE();
    case 2100:
      if (lookahead == 'u') ADVANCE(1725);
      END_STATE();
    case 2101:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 2102:
      if (lookahead == 'u') ADVANCE(1887);
      END_STATE();
    case 2103:
      if (lookahead == 'u') ADVANCE(1256);
      END_STATE();
    case 2104:
      if (lookahead == 'u') ADVANCE(1420);
      END_STATE();
    case 2105:
      if (lookahead == 'u') ADVANCE(1064);
      END_STATE();
    case 2106:
      if (lookahead == 'u') ADVANCE(1733);
      END_STATE();
    case 2107:
      if (lookahead == 'u') ADVANCE(1065);
      END_STATE();
    case 2108:
      if (lookahead == 'u') ADVANCE(1881);
      END_STATE();
    case 2109:
      if (lookahead == 'u') ADVANCE(1067);
      END_STATE();
    case 2110:
      if (lookahead == 'u') ADVANCE(2044);
      END_STATE();
    case 2111:
      if (lookahead == 'u') ADVANCE(1882);
      END_STATE();
    case 2112:
      if (lookahead == 'u') ADVANCE(1069);
      END_STATE();
    case 2113:
      if (lookahead == 'u') ADVANCE(1885);
      END_STATE();
    case 2114:
      if (lookahead == 'u') ADVANCE(1894);
      END_STATE();
    case 2115:
      if (lookahead == 'u') ADVANCE(1919);
      END_STATE();
    case 2116:
      if (lookahead == 'u') ADVANCE(1299);
      END_STATE();
    case 2117:
      if (lookahead == 'u') ADVANCE(1774);
      END_STATE();
    case 2118:
      if (lookahead == 'u') ADVANCE(1300);
      END_STATE();
    case 2119:
      if (lookahead == 'u') ADVANCE(1921);
      END_STATE();
    case 2120:
      if (lookahead == 'u') ADVANCE(2037);
      END_STATE();
    case 2121:
      if (lookahead == 'u') ADVANCE(1810);
      END_STATE();
    case 2122:
      if (lookahead == 'u') ADVANCE(457);
      END_STATE();
    case 2123:
      if (lookahead == 'u') ADVANCE(597);
      END_STATE();
    case 2124:
      if (lookahead == 'v') ADVANCE(1075);
      END_STATE();
    case 2125:
      if (lookahead == 'v') ADVANCE(1510);
      END_STATE();
    case 2126:
      if (lookahead == 'v') ADVANCE(700);
      END_STATE();
    case 2127:
      if (lookahead == 'v') ADVANCE(618);
      END_STATE();
    case 2128:
      if (lookahead == 'v') ADVANCE(708);
      END_STATE();
    case 2129:
      if (lookahead == 'v') ADVANCE(709);
      END_STATE();
    case 2130:
      if (lookahead == 'v') ADVANCE(711);
      END_STATE();
    case 2131:
      if (lookahead == 'v') ADVANCE(715);
      END_STATE();
    case 2132:
      if (lookahead == 'v') ADVANCE(637);
      END_STATE();
    case 2133:
      if (lookahead == 'v') ADVANCE(719);
      END_STATE();
    case 2134:
      if (lookahead == 'v') ADVANCE(723);
      END_STATE();
    case 2135:
      if (lookahead == 'v') ADVANCE(647);
      END_STATE();
    case 2136:
      if (lookahead == 'v') ADVANCE(754);
      END_STATE();
    case 2137:
      if (lookahead == 'v') ADVANCE(764);
      END_STATE();
    case 2138:
      if (lookahead == 'v') ADVANCE(717);
      END_STATE();
    case 2139:
      if (lookahead == 'v') ADVANCE(728);
      END_STATE();
    case 2140:
      if (lookahead == 'v') ADVANCE(796);
      END_STATE();
    case 2141:
      if (lookahead == 'v') ADVANCE(751);
      END_STATE();
    case 2142:
      if (lookahead == 'v') ADVANCE(864);
      END_STATE();
    case 2143:
      if (lookahead == 'v') ADVANCE(880);
      END_STATE();
    case 2144:
      if (lookahead == 'v') ADVANCE(903);
      END_STATE();
    case 2145:
      if (lookahead == 'w') ADVANCE(36);
      END_STATE();
    case 2146:
      if (lookahead == 'w') ADVANCE(126);
      END_STATE();
    case 2147:
      if (lookahead == 'w') ADVANCE(1740);
      END_STATE();
    case 2148:
      if (lookahead == 'w') ADVANCE(128);
      END_STATE();
    case 2149:
      if (lookahead == 'w') ADVANCE(1433);
      END_STATE();
    case 2150:
      if (lookahead == 'w') ADVANCE(392);
      END_STATE();
    case 2151:
      if (lookahead == 'w') ADVANCE(1353);
      END_STATE();
    case 2152:
      if (lookahead == 'w') ADVANCE(739);
      END_STATE();
    case 2153:
      if (lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 2154:
      if (lookahead == 'w') ADVANCE(421);
      END_STATE();
    case 2155:
      if (lookahead == 'w') ADVANCE(180);
      END_STATE();
    case 2156:
      if (lookahead == 'w') ADVANCE(193);
      END_STATE();
    case 2157:
      if (lookahead == 'w') ADVANCE(247);
      END_STATE();
    case 2158:
      if (lookahead == 'x') ADVANCE(2021);
      END_STATE();
    case 2159:
      if (lookahead == 'x') ADVANCE(1618);
      END_STATE();
    case 2160:
      if (lookahead == 'x') ADVANCE(1629);
      END_STATE();
    case 2161:
      if (lookahead == 'x') ADVANCE(1643);
      END_STATE();
    case 2162:
      if (lookahead == 'x') ADVANCE(1648);
      END_STATE();
    case 2163:
      if (lookahead == 'x') ADVANCE(1652);
      END_STATE();
    case 2164:
      if (lookahead == 'x') ADVANCE(1654);
      END_STATE();
    case 2165:
      if (lookahead == 'x') ADVANCE(1657);
      END_STATE();
    case 2166:
      if (lookahead == 'x') ADVANCE(2068);
      END_STATE();
    case 2167:
      if (lookahead == 'y') ADVANCE(3058);
      END_STATE();
    case 2168:
      if (lookahead == 'y') ADVANCE(3124);
      END_STATE();
    case 2169:
      if (lookahead == 'y') ADVANCE(3174);
      END_STATE();
    case 2170:
      if (lookahead == 'y') ADVANCE(3159);
      END_STATE();
    case 2171:
      if (lookahead == 'y') ADVANCE(3213);
      END_STATE();
    case 2172:
      if (lookahead == 'y') ADVANCE(3171);
      END_STATE();
    case 2173:
      if (lookahead == 'y') ADVANCE(3170);
      END_STATE();
    case 2174:
      if (lookahead == 'y') ADVANCE(3164);
      END_STATE();
    case 2175:
      if (lookahead == 'y') ADVANCE(3136);
      END_STATE();
    case 2176:
      if (lookahead == 'y') ADVANCE(3232);
      END_STATE();
    case 2177:
      if (lookahead == 'y') ADVANCE(3386);
      END_STATE();
    case 2178:
      if (lookahead == 'y') ADVANCE(3169);
      END_STATE();
    case 2179:
      if (lookahead == 'y') ADVANCE(3137);
      END_STATE();
    case 2180:
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 2181:
      if (lookahead == 'y') ADVANCE(1883);
      END_STATE();
    case 2182:
      if (lookahead == 'y') ADVANCE(1639);
      END_STATE();
    case 2183:
      if (lookahead == 'y') ADVANCE(1751);
      END_STATE();
    case 2184:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 2185:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 2186:
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 2187:
      if (lookahead == 'y') ADVANCE(232);
      END_STATE();
    case 2188:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 2189:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 2190:
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 2191:
      if (lookahead == 'y') ADVANCE(1515);
      END_STATE();
    case 2192:
      if (lookahead == 'y') ADVANCE(1057);
      END_STATE();
    case 2193:
      if (lookahead == 'y') ADVANCE(1087);
      END_STATE();
    case 2194:
      if (lookahead == 'y') ADVANCE(1877);
      END_STATE();
    case 2195:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 2196:
      if (lookahead == 'y') ADVANCE(158);
      END_STATE();
    case 2197:
      if (lookahead == 'y') ADVANCE(140);
      END_STATE();
    case 2198:
      if (lookahead == 'y') ADVANCE(795);
      END_STATE();
    case 2199:
      if (lookahead == 'y') ADVANCE(1937);
      END_STATE();
    case 2200:
      if (lookahead == 'y') ADVANCE(199);
      END_STATE();
    case 2201:
      if (lookahead == 'y') ADVANCE(167);
      END_STATE();
    case 2202:
      if (lookahead == 'y') ADVANCE(832);
      END_STATE();
    case 2203:
      if (lookahead == 'y') ADVANCE(1771);
      END_STATE();
    case 2204:
      if (lookahead == 'y') ADVANCE(1781);
      END_STATE();
    case 2205:
      if (lookahead == 'y') ADVANCE(1646);
      END_STATE();
    case 2206:
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 2207:
      if (lookahead == 'y') ADVANCE(1650);
      END_STATE();
    case 2208:
      if (lookahead == 'y') ADVANCE(236);
      END_STATE();
    case 2209:
      if (lookahead == 'y') ADVANCE(238);
      END_STATE();
    case 2210:
      if (lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 2211:
      if (lookahead == 'y') ADVANCE(1596);
      END_STATE();
    case 2212:
      if (lookahead == 'y') ADVANCE(259);
      END_STATE();
    case 2213:
      if (lookahead == 'z') ADVANCE(1041);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2299);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 2214:
      if (lookahead == 'z') ADVANCE(615);
      END_STATE();
    case 2215:
      if (lookahead == 'z') ADVANCE(646);
      END_STATE();
    case 2216:
      if (lookahead == 'z') ADVANCE(755);
      END_STATE();
    case 2217:
      if (lookahead == '{') ADVANCE(1673);
      END_STATE();
    case 2218:
      if (lookahead == '|') ADVANCE(3450);
      END_STATE();
    case 2219:
      if (lookahead == '}') ADVANCE(3193);
      END_STATE();
    case 2220:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(3456);
      END_STATE();
    case 2221:
      if (lookahead == '=' ||
          lookahead == '~') ADVANCE(3451);
      END_STATE();
    case 2222:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2299);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 2223:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2630);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 2224:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(3475);
      END_STATE();
    case 2225:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 2226:
      ADVANCE_MAP(
        'A', 103,
        'a', 103,
        'E', 2794,
        'e', 2794,
        'H', 2436,
        'h', 2436,
        'L', 2250,
        'l', 2250,
        'R', 2997,
        'r', 2997,
      );
      END_STATE();
    case 2227:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(3474);
      END_STATE();
    case 2228:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 2229:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2974);
      END_STATE();
    case 2230:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2845);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2231);
      END_STATE();
    case 2231:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2738);
      END_STATE();
    case 2232:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2282);
      END_STATE();
    case 2233:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2303);
      END_STATE();
    case 2234:
      ADVANCE_MAP(
        'A', 2303,
        'a', 2303,
        'L', 2685,
        'l', 2685,
        'U', 2600,
        'u', 2600,
        'Z', 2531,
        'z', 2531,
      );
      END_STATE();
    case 2235:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2481);
      END_STATE();
    case 2236:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2775);
      END_STATE();
    case 2237:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2618);
      END_STATE();
    case 2238:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2618);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2817);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2542);
      END_STATE();
    case 2239:
      ADVANCE_MAP(
        'A', 2618,
        'a', 2618,
        'C', 2817,
        'c', 2817,
        'E', 2981,
        'e', 2981,
        'S', 2504,
        's', 2504,
      );
      END_STATE();
    case 2240:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2321);
      END_STATE();
    case 2241:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2641);
      END_STATE();
    case 2242:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2625);
      END_STATE();
    case 2243:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2591);
      END_STATE();
    case 2244:
      ADVANCE_MAP(
        'A', 2896,
        'a', 2896,
        'B', 2233,
        'b', 2233,
        'C', 2621,
        'c', 2621,
        'D', 2260,
        'd', 2260,
        'L', 2690,
        'l', 2690,
        'M', 2513,
        'm', 2513,
        'R', 2434,
        'r', 2434,
        'S', 2399,
        's', 2399,
      );
      END_STATE();
    case 2245:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2846);
      END_STATE();
    case 2246:
      ADVANCE_MAP(
        'A', 2846,
        'a', 2846,
        'K', 2738,
        'k', 2738,
        'O', 2658,
        'o', 2658,
        'T', 2918,
        't', 2918,
      );
      END_STATE();
    case 2247:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2898);
      END_STATE();
    case 2248:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2935);
      END_STATE();
    case 2249:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2642);
      END_STATE();
    case 2250:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2861);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2251);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2308);
      END_STATE();
    case 2251:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2779);
      END_STATE();
    case 2252:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2743);
      END_STATE();
    case 2253:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2593);
      END_STATE();
    case 2254:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2818);
      END_STATE();
    case 2255:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2341);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(2531);
      END_STATE();
    case 2256:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2882);
      END_STATE();
    case 2257:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2595);
      END_STATE();
    case 2258:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2555);
      END_STATE();
    case 2259:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2597);
      END_STATE();
    case 2260:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2655);
      END_STATE();
    case 2261:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2899);
      END_STATE();
    case 2262:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2668);
      END_STATE();
    case 2263:
      ADVANCE_MAP(
        'A', 2662,
        'a', 2662,
        'E', 2285,
        'e', 2285,
        'I', 2816,
        'i', 2816,
        'R', 2719,
        'r', 2719,
        'S', 2227,
        's', 2227,
      );
      END_STATE();
    case 2264:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2856);
      END_STATE();
    case 2265:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2609);
      END_STATE();
    case 2266:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2807);
      END_STATE();
    case 2267:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2998);
      END_STATE();
    case 2268:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2306);
      END_STATE();
    case 2269:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2663);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 2270:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2491);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2828);
      END_STATE();
    case 2271:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2290);
      END_STATE();
    case 2272:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2325);
      END_STATE();
    case 2273:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2325);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2741);
      END_STATE();
    case 2274:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2943);
      END_STATE();
    case 2275:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2920);
      END_STATE();
    case 2276:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2624);
      END_STATE();
    case 2277:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2294);
      END_STATE();
    case 2278:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2295);
      END_STATE();
    case 2279:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2626);
      END_STATE();
    case 2280:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(263);
      END_STATE();
    case 2281:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(3478);
      END_STATE();
    case 2282:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2605);
      END_STATE();
    case 2283:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2679);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2344);
      END_STATE();
    case 2284:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2942);
      END_STATE();
    case 2285:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2932);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2248);
      END_STATE();
    case 2286:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2753);
      END_STATE();
    case 2287:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2929);
      END_STATE();
    case 2288:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2689);
      END_STATE();
    case 2289:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2717);
      END_STATE();
    case 2290:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2611);
      END_STATE();
    case 2291:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2933);
      END_STATE();
    case 2292:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2268);
      END_STATE();
    case 2293:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2575);
      END_STATE();
    case 2294:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2615);
      END_STATE();
    case 2295:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2616);
      END_STATE();
    case 2296:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2577);
      END_STATE();
    case 2297:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2579);
      END_STATE();
    case 2298:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2588);
      END_STATE();
    case 2299:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 2300:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(3346);
      END_STATE();
    case 2301:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(3218);
      END_STATE();
    case 2302:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(3279);
      END_STATE();
    case 2303:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2566);
      END_STATE();
    case 2304:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2784);
      END_STATE();
    case 2305:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2784);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2371);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2847);
      END_STATE();
    case 2306:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2563);
      END_STATE();
    case 2307:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2880);
      END_STATE();
    case 2308:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2564);
      END_STATE();
    case 2309:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2833);
      END_STATE();
    case 2310:
      ADVANCE_MAP(
        'C', 2335,
        'c', 2335,
        'D', 2353,
        'd', 2353,
        'L', 2472,
        'l', 2472,
        'R', 2792,
        'r', 2792,
        'X', 2755,
        'x', 2755,
      );
      END_STATE();
    case 2311:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2242);
      END_STATE();
    case 2312:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2607);
      END_STATE();
    case 2313:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2253);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2585);
      END_STATE();
    case 2314:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2883);
      END_STATE();
    case 2315:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2694);
      END_STATE();
    case 2316:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2694);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2672);
      END_STATE();
    case 2317:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2259);
      END_STATE();
    case 2318:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2455);
      END_STATE();
    case 2319:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2421);
      END_STATE();
    case 2320:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2425);
      END_STATE();
    case 2321:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2574);
      END_STATE();
    case 2322:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(3002);
      END_STATE();
    case 2323:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2581);
      END_STATE();
    case 2324:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2440);
      END_STATE();
    case 2325:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2576);
      END_STATE();
    case 2326:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 2327:
      ADVANCE_MAP(
        'C', 2622,
        'c', 2622,
        'E', 2984,
        'e', 2984,
        'L', 2735,
        'l', 2735,
        'M', 2557,
        'm', 2557,
        'R', 2445,
        'r', 2445,
        'S', 2499,
        's', 2499,
      );
      END_STATE();
    case 2328:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(3005);
      END_STATE();
    case 2329:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2279);
      END_STATE();
    case 2330:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 2331:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3447);
      END_STATE();
    case 2332:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3448);
      END_STATE();
    case 2333:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3260);
      END_STATE();
    case 2334:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3449);
      END_STATE();
    case 2335:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2495);
      END_STATE();
    case 2336:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3222);
      END_STATE();
    case 2337:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3478);
      END_STATE();
    case 2338:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3229);
      END_STATE();
    case 2339:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3262);
      END_STATE();
    case 2340:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3255);
      END_STATE();
    case 2341:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3233);
      END_STATE();
    case 2342:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3279);
      END_STATE();
    case 2343:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 2344:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2370);
      END_STATE();
    case 2345:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2835);
      END_STATE();
    case 2346:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2839);
      END_STATE();
    case 2347:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2842);
      END_STATE();
    case 2348:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2413);
      END_STATE();
    case 2349:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2400);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2377);
      END_STATE();
    case 2350:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2561);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2451);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2949);
      END_STATE();
    case 2351:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 2352:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 2353:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2852);
      END_STATE();
    case 2354:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2252);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2313);
      END_STATE();
    case 2355:
      ADVANCE_MAP(
        'D', 2398,
        'd', 2398,
        'M', 2773,
        'm', 2773,
        'N', 2312,
        'n', 2312,
        'O', 2287,
        'o', 2287,
        'P', 2300,
        'p', 2300,
      );
      END_STATE();
    case 2356:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2398);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2678);
      END_STATE();
    case 2357:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2959);
      END_STATE();
    case 2358:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2534);
      END_STATE();
    case 2359:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2537);
      END_STATE();
    case 2360:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2433);
      END_STATE();
    case 2361:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 2362:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 2363:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 2364:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2830);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 2365:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2437);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2503);
      END_STATE();
    case 2366:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2953);
      END_STATE();
    case 2367:
      ADVANCE_MAP(
        'E', 2305,
        'e', 2305,
        'H', 2687,
        'h', 2687,
        'I', 2469,
        'i', 2469,
        'O', 2782,
        'o', 2782,
        'U', 2280,
        'u', 2280,
      );
      END_STATE();
    case 2368:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3447);
      END_STATE();
    case 2369:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3475);
      END_STATE();
    case 2370:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 2371:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2307);
      END_STATE();
    case 2372:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3264);
      END_STATE();
    case 2373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2988);
      END_STATE();
    case 2374:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3184);
      END_STATE();
    case 2375:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2629);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2344);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2506);
      END_STATE();
    case 2376:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2756);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2757);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2227);
      END_STATE();
    case 2377:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3474);
      END_STATE();
    case 2378:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3346);
      END_STATE();
    case 2379:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3222);
      END_STATE();
    case 2380:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3478);
      END_STATE();
    case 2381:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3477);
      END_STATE();
    case 2382:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3229);
      END_STATE();
    case 2383:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3258);
      END_STATE();
    case 2384:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3186);
      END_STATE();
    case 2385:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3255);
      END_STATE();
    case 2386:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3382);
      END_STATE();
    case 2387:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3279);
      END_STATE();
    case 2388:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3225);
      END_STATE();
    case 2389:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 2390:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2447);
      END_STATE();
    case 2391:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2599);
      END_STATE();
    case 2392:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 2393:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2236);
      END_STATE();
    case 2394:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2331);
      END_STATE();
    case 2395:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2963);
      END_STATE();
    case 2396:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2995);
      END_STATE();
    case 2397:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2632);
      END_STATE();
    case 2398:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2224);
      END_STATE();
    case 2399:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2674);
      END_STATE();
    case 2400:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2467);
      END_STATE();
    case 2401:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2879);
      END_STATE();
    case 2402:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2334);
      END_STATE();
    case 2403:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2628);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2506);
      END_STATE();
    case 2404:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2836);
      END_STATE();
    case 2405:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2247);
      END_STATE();
    case 2406:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2461);
      END_STATE();
    case 2407:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2636);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2326);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2757);
      END_STATE();
    case 2408:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2833);
      END_STATE();
    case 2409:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2813);
      END_STATE();
    case 2410:
      ADVANCE_MAP(
        'E', 2829,
        'e', 2829,
        'L', 2972,
        'l', 2972,
        'S', 2563,
        's', 2563,
        'U', 2900,
        'u', 2900,
      );
      END_STATE();
    case 2411:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2241);
      END_STATE();
    case 2412:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2993);
      END_STATE();
    case 2413:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2831);
      END_STATE();
    case 2414:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2815);
      END_STATE();
    case 2415:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2619);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2229);
      END_STATE();
    case 2416:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2779);
      END_STATE();
    case 2417:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2660);
      END_STATE();
    case 2418:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2337);
      END_STATE();
    case 2419:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2893);
      END_STATE();
    case 2420:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2338);
      END_STATE();
    case 2421:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2592);
      END_STATE();
    case 2422:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2778);
      END_STATE();
    case 2423:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2865);
      END_STATE();
    case 2424:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2882);
      END_STATE();
    case 2425:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2342);
      END_STATE();
    case 2426:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2780);
      END_STATE();
    case 2427:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2249);
      END_STATE();
    case 2428:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2715);
      END_STATE();
    case 2429:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2603);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2228);
      END_STATE();
    case 2430:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 2431:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 2432:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 2433:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 2434:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2956);
      END_STATE();
    case 2435:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2314);
      END_STATE();
    case 2436:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2323);
      END_STATE();
    case 2437:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2751);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 2438:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2996);
      END_STATE();
    case 2439:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2851);
      END_STATE();
    case 2440:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2797);
      END_STATE();
    case 2441:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2808);
      END_STATE();
    case 2442:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 2443:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3003);
      END_STATE();
    case 2444:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3006);
      END_STATE();
    case 2445:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2864);
      END_STATE();
    case 2446:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2799);
      END_STATE();
    case 2447:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2761);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2871);
      END_STATE();
    case 2448:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2999);
      END_STATE();
    case 2449:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2802);
      END_STATE();
    case 2450:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3000);
      END_STATE();
    case 2451:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2961);
      END_STATE();
    case 2452:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2821);
      END_STATE();
    case 2453:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2824);
      END_STATE();
    case 2454:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2825);
      END_STATE();
    case 2455:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2822);
      END_STATE();
    case 2456:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2985);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2926);
      END_STATE();
    case 2457:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2826);
      END_STATE();
    case 2458:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2827);
      END_STATE();
    case 2459:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3007);
      END_STATE();
    case 2460:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(3346);
      END_STATE();
    case 2461:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(3255);
      END_STATE();
    case 2462:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2517);
      END_STATE();
    case 2463:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2762);
      END_STATE();
    case 2464:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2924);
      END_STATE();
    case 2465:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2551);
      END_STATE();
    case 2466:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 2467:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2274);
      END_STATE();
    case 2468:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(210);
      END_STATE();
    case 2469:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(264);
      END_STATE();
    case 2470:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(3260);
      END_STATE();
    case 2471:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(3184);
      END_STATE();
    case 2472:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(3474);
      END_STATE();
    case 2473:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(3346);
      END_STATE();
    case 2474:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(3229);
      END_STATE();
    case 2475:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(3258);
      END_STATE();
    case 2476:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(3274);
      END_STATE();
    case 2477:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(3225);
      END_STATE();
    case 2478:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2508);
      END_STATE();
    case 2479:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2835);
      END_STATE();
    case 2480:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2710);
      END_STATE();
    case 2481:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2368);
      END_STATE();
    case 2482:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2833);
      END_STATE();
    case 2483:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2677);
      END_STATE();
    case 2484:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2741);
      END_STATE();
    case 2485:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2439);
      END_STATE();
    case 2486:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2374);
      END_STATE();
    case 2487:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2860);
      END_STATE();
    case 2488:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2744);
      END_STATE();
    case 2489:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2841);
      END_STATE();
    case 2490:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2745);
      END_STATE();
    case 2491:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2384);
      END_STATE();
    case 2492:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 2493:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2432);
      END_STATE();
    case 2494:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(3475);
      END_STATE();
    case 2495:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(3474);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2227);
      END_STATE();
    case 2496:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2701);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2608);
      END_STATE();
    case 2497:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2378);
      END_STATE();
    case 2498:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2545);
      END_STATE();
    case 2499:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2695);
      END_STATE();
    case 2500:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2725);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2627);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2539);
      END_STATE();
    case 2501:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2729);
      END_STATE();
    case 2502:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2848);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 2503:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 2504:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(3008);
      END_STATE();
    case 2505:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2633);
      END_STATE();
    case 2506:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(3346);
      END_STATE();
    case 2507:
      ADVANCE_MAP(
        'I', 2332,
        'i', 2332,
        'R', 2590,
        'r', 2590,
        'S', 2235,
        's', 2235,
        'T', 2466,
        't', 2466,
      );
      END_STATE();
    case 2508:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2640);
      END_STATE();
    case 2509:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2955);
      END_STATE();
    case 2510:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2478);
      END_STATE();
    case 2511:
      ADVANCE_MAP(
        'I', 2637,
        'i', 2637,
        'O', 2464,
        'o', 2464,
        'R', 2946,
        'r', 2946,
        'W', 2686,
        'w', 2686,
      );
      END_STATE();
    case 2512:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2333);
      END_STATE();
    case 2513:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2654);
      END_STATE();
    case 2514:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2284);
      END_STATE();
    case 2515:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2322);
      END_STATE();
    case 2516:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2470);
      END_STATE();
    case 2517:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2834);
      END_STATE();
    case 2518:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2492);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2351);
      END_STATE();
    case 2519:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2225);
      END_STATE();
    case 2520:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2479);
      END_STATE();
    case 2521:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2479);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2293);
      END_STATE();
    case 2522:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2358);
      END_STATE();
    case 2523:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2649);
      END_STATE();
    case 2524:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2281);
      END_STATE();
    case 2525:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2894);
      END_STATE();
    case 2526:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2345);
      END_STATE();
    case 2527:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2482);
      END_STATE();
    case 2528:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2742);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2524);
      END_STATE();
    case 2529:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2620);
      END_STATE();
    case 2530:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2301);
      END_STATE();
    case 2531:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2748);
      END_STATE();
    case 2532:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2487);
      END_STATE();
    case 2533:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2339);
      END_STATE();
    case 2534:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2892);
      END_STATE();
    case 2535:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2302);
      END_STATE();
    case 2536:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2844);
      END_STATE();
    case 2537:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2895);
      END_STATE();
    case 2538:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2700);
      END_STATE();
    case 2539:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2638);
      END_STATE();
    case 2540:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2786);
      END_STATE();
    case 2541:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2786);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2814);
      END_STATE();
    case 2542:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2485);
      END_STATE();
    case 2543:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2352);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2951);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2266);
      END_STATE();
    case 2544:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2639);
      END_STATE();
    case 2545:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2653);
      END_STATE();
    case 2546:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2347);
      END_STATE();
    case 2547:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2489);
      END_STATE();
    case 2548:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2635);
      END_STATE();
    case 2549:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2962);
      END_STATE();
    case 2550:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2790);
      END_STATE();
    case 2551:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2614);
      END_STATE();
    case 2552:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2361);
      END_STATE();
    case 2553:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2702);
      END_STATE();
    case 2554:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2793);
      END_STATE();
    case 2555:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2811);
      END_STATE();
    case 2556:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2617);
      END_STATE();
    case 2557:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2669);
      END_STATE();
    case 2558:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2359);
      END_STATE();
    case 2559:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2916);
      END_STATE();
    case 2560:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2328);
      END_STATE();
    case 2561:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2873);
      END_STATE();
    case 2562:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2362);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2952);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2270);
      END_STATE();
    case 2563:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(3380);
      END_STATE();
    case 2564:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(3346);
      END_STATE();
    case 2565:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(3233);
      END_STATE();
    case 2566:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2927);
      END_STATE();
    case 2567:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3042);
      END_STATE();
    case 2568:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2738);
      END_STATE();
    case 2569:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2394);
      END_STATE();
    case 2570:
      ADVANCE_MAP(
        'K', 2373,
        'k', 2373,
        'N', 2699,
        'n', 2699,
        'O', 2648,
        'o', 2648,
        'P', 2496,
        'p', 2496,
        'S', 2518,
        's', 2518,
        'U', 2543,
        'u', 2543,
      );
      END_STATE();
    case 2571:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2336);
      END_STATE();
    case 2572:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2671);
      END_STATE();
    case 2573:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2340);
      END_STATE();
    case 2574:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2419);
      END_STATE();
    case 2575:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2396);
      END_STATE();
    case 2576:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2424);
      END_STATE();
    case 2577:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2412);
      END_STATE();
    case 2578:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2420);
      END_STATE();
    case 2579:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2443);
      END_STATE();
    case 2580:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(118);
      END_STATE();
    case 2581:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(189);
      END_STATE();
    case 2582:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2877);
      END_STATE();
    case 2583:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2438);
      END_STATE();
    case 2584:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2934);
      END_STATE();
    case 2585:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2934);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2292);
      END_STATE();
    case 2586:
      ADVANCE_MAP(
        'K', 2444,
        'k', 2444,
        'N', 2736,
        'n', 2736,
        'O', 2657,
        'o', 2657,
        'P', 2500,
        'p', 2500,
        'S', 2922,
        's', 2922,
        'U', 2562,
        'u', 2562,
      );
      END_STATE();
    case 2587:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2448);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2582);
      END_STATE();
    case 2588:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2450);
      END_STATE();
    case 2589:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2459);
      END_STATE();
    case 2590:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(3447);
      END_STATE();
    case 2591:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(3264);
      END_STATE();
    case 2592:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(3380);
      END_STATE();
    case 2593:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(3222);
      END_STATE();
    case 2594:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(3229);
      END_STATE();
    case 2595:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(3258);
      END_STATE();
    case 2596:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(3255);
      END_STATE();
    case 2597:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(3382);
      END_STATE();
    case 2598:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(3001);
      END_STATE();
    case 2599:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2602);
      END_STATE();
    case 2600:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2580);
      END_STATE();
    case 2601:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2835);
      END_STATE();
    case 2602:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2519);
      END_STATE();
    case 2603:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2461);
      END_STATE();
    case 2604:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2992);
      END_STATE();
    case 2605:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2394);
      END_STATE();
    case 2606:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2994);
      END_STATE();
    case 2607:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2944);
      END_STATE();
    case 2608:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2515);
      END_STATE();
    case 2609:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2522);
      END_STATE();
    case 2610:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2884);
      END_STATE();
    case 2611:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2430);
      END_STATE();
    case 2612:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2842);
      END_STATE();
    case 2613:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2881);
      END_STATE();
    case 2614:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2382);
      END_STATE();
    case 2615:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2442);
      END_STATE();
    case 2616:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2420);
      END_STATE();
    case 2617:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2385);
      END_STATE();
    case 2618:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2483);
      END_STATE();
    case 2619:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2468);
      END_STATE();
    case 2620:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2907);
      END_STATE();
    case 2621:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2411);
      END_STATE();
    case 2622:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2427);
      END_STATE();
    case 2623:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2721);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2501);
      END_STATE();
    case 2624:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2558);
      END_STATE();
    case 2625:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 2626:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 2627:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2560);
      END_STATE();
    case 2628:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2705);
      END_STATE();
    case 2629:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2705);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2493);
      END_STATE();
    case 2630:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2391);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 2631:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2288);
      END_STATE();
    case 2632:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2343);
      END_STATE();
    case 2633:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2243);
      END_STATE();
    case 2634:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2768);
      END_STATE();
    case 2635:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2257);
      END_STATE();
    case 2636:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2724);
      END_STATE();
    case 2637:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2428);
      END_STATE();
    case 2638:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2254);
      END_STATE();
    case 2639:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2765);
      END_STATE();
    case 2640:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(3447);
      END_STATE();
    case 2641:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(3264);
      END_STATE();
    case 2642:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(3258);
      END_STATE();
    case 2643:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(3255);
      END_STATE();
    case 2644:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2316);
      END_STATE();
    case 2645:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(3233);
      END_STATE();
    case 2646:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2369);
      END_STATE();
    case 2647:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2835);
      END_STATE();
    case 2648:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2598);
      END_STATE();
    case 2649:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2471);
      END_STATE();
    case 2650:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2572);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2596);
      END_STATE();
    case 2651:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2699);
      END_STATE();
    case 2652:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2315);
      END_STATE();
    case 2653:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2473);
      END_STATE();
    case 2654:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2505);
      END_STATE();
    case 2655:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2372);
      END_STATE();
    case 2656:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2477);
      END_STATE();
    case 2657:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2604);
      END_STATE();
    case 2658:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2723);
      END_STATE();
    case 2659:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2842);
      END_STATE();
    case 2660:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2764);
      END_STATE();
    case 2661:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2606);
      END_STATE();
    case 2662:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2379);
      END_STATE();
    case 2663:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2385);
      END_STATE();
    case 2664:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2381);
      END_STATE();
    case 2665:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2380);
      END_STATE();
    case 2666:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2387);
      END_STATE();
    case 2667:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2388);
      END_STATE();
    case 2668:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2320);
      END_STATE();
    case 2669:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2548);
      END_STATE();
    case 2670:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2936);
      END_STATE();
    case 2671:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2698);
      END_STATE();
    case 2672:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2716);
      END_STATE();
    case 2673:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2446);
      END_STATE();
    case 2674:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2874);
      END_STATE();
    case 2675:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2736);
      END_STATE();
    case 2676:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2646);
      END_STATE();
    case 2677:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(3447);
      END_STATE();
    case 2678:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 2679:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2978);
      END_STATE();
    case 2680:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2349);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2346);
      END_STATE();
    case 2681:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(3346);
      END_STATE();
    case 2682:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(3218);
      END_STATE();
    case 2683:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(3233);
      END_STATE();
    case 2684:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2569);
      END_STATE();
    case 2685:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2968);
      END_STATE();
    case 2686:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2462);
      END_STATE();
    case 2687:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2970);
      END_STATE();
    case 2688:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2750);
      END_STATE();
    case 2689:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2979);
      END_STATE();
    case 2690:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2311);
      END_STATE();
    case 2691:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2982);
      END_STATE();
    case 2692:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2975);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2533);
      END_STATE();
    case 2693:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2309);
      END_STATE();
    case 2694:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2634);
      END_STATE();
    case 2695:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2967);
      END_STATE();
    case 2696:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2835);
      END_STATE();
    case 2697:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2976);
      END_STATE();
    case 2698:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2971);
      END_STATE();
    case 2699:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2915);
      END_STATE();
    case 2700:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2647);
      END_STATE();
    case 2701:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2897);
      END_STATE();
    case 2702:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2659);
      END_STATE();
    case 2703:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2473);
      END_STATE();
    case 2704:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2777);
      END_STATE();
    case 2705:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2785);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2917);
      END_STATE();
    case 2706:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2341);
      END_STATE();
    case 2707:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2842);
      END_STATE();
    case 2708:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2711);
      END_STATE();
    case 2709:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2706);
      END_STATE();
    case 2710:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2849);
      END_STATE();
    case 2711:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2584);
      END_STATE();
    case 2712:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2657);
      END_STATE();
    case 2713:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2317);
      END_STATE();
    case 2714:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2287);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2300);
      END_STATE();
    case 2715:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2938);
      END_STATE();
    case 2716:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2973);
      END_STATE();
    case 2717:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2857);
      END_STATE();
    case 2718:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2308);
      END_STATE();
    case 2719:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2759);
      END_STATE();
    case 2720:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2661);
      END_STATE();
    case 2721:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2656);
      END_STATE();
    case 2722:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2798);
      END_STATE();
    case 2723:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2810);
      END_STATE();
    case 2724:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2909);
      END_STATE();
    case 2725:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2905);
      END_STATE();
    case 2726:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2664);
      END_STATE();
    case 2727:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2804);
      END_STATE();
    case 2728:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2665);
      END_STATE();
    case 2729:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2803);
      END_STATE();
    case 2730:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2666);
      END_STATE();
    case 2731:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2578);
      END_STATE();
    case 2732:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2667);
      END_STATE();
    case 2733:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2814);
      END_STATE();
    case 2734:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2819);
      END_STATE();
    case 2735:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2329);
      END_STATE();
    case 2736:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2921);
      END_STATE();
    case 2737:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2541);
      END_STATE();
    case 2738:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 2739:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(3264);
      END_STATE();
    case 2740:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(3346);
      END_STATE();
    case 2741:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(3218);
      END_STATE();
    case 2742:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(3478);
      END_STATE();
    case 2743:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(3223);
      END_STATE();
    case 2744:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(3012);
      END_STATE();
    case 2745:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(3274);
      END_STATE();
    case 2746:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 2747:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2331);
      END_STATE();
    case 2748:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(290);
      END_STATE();
    case 2749:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2550);
      END_STATE();
    case 2750:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 2751:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 2752:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2484);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2752);
      END_STATE();
    case 2753:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2240);
      END_STATE();
    case 2754:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2476);
      END_STATE();
    case 2755:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2733);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2763);
      END_STATE();
    case 2756:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2258);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2902);
      END_STATE();
    case 2757:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2397);
      END_STATE();
    case 2758:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2417);
      END_STATE();
    case 2759:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 2760:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 2761:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 2762:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2809);
      END_STATE();
    case 2763:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2800);
      END_STATE();
    case 2764:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2490);
      END_STATE();
    case 2765:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2722);
      END_STATE();
    case 2766:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2801);
      END_STATE();
    case 2767:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2904);
      END_STATE();
    case 2768:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2805);
      END_STATE();
    case 2769:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2806);
      END_STATE();
    case 2770:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2554);
      END_STATE();
    case 2771:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2540);
      END_STATE();
    case 2772:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2449);
      END_STATE();
    case 2773:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2734);
      END_STATE();
    case 2774:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(3447);
      END_STATE();
    case 2775:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(3216);
      END_STATE();
    case 2776:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(3203);
      END_STATE();
    case 2777:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(3380);
      END_STATE();
    case 2778:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(3346);
      END_STATE();
    case 2779:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(3222);
      END_STATE();
    case 2780:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(3382);
      END_STATE();
    case 2781:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2510);
      END_STATE();
    case 2782:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2919);
      END_STATE();
    case 2783:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2946);
      END_STATE();
    case 2784:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2401);
      END_STATE();
    case 2785:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2990);
      END_STATE();
    case 2786:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2394);
      END_STATE();
    case 2787:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2601);
      END_STATE();
    case 2788:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2925);
      END_STATE();
    case 2789:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2523);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2409);
      END_STATE();
    case 2790:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2404);
      END_STATE();
    case 2791:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2514);
      END_STATE();
    case 2792:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2704);
      END_STATE();
    case 2793:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2374);
      END_STATE();
    case 2794:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2884);
      END_STATE();
    case 2795:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2612);
      END_STATE();
    case 2796:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2594);
      END_STATE();
    case 2797:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2885);
      END_STATE();
    case 2798:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2886);
      END_STATE();
    case 2799:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2901);
      END_STATE();
    case 2800:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2703);
      END_STATE();
    case 2801:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2691);
      END_STATE();
    case 2802:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2887);
      END_STATE();
    case 2803:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2888);
      END_STATE();
    case 2804:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2383);
      END_STATE();
    case 2805:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2423);
      END_STATE();
    case 2806:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2406);
      END_STATE();
    case 2807:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 2808:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 2809:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 2810:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 2811:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 2812:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2395);
      END_STATE();
    case 2813:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2957);
      END_STATE();
    case 2814:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2908);
      END_STATE();
    case 2815:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2289);
      END_STATE();
    case 2816:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2435);
      END_STATE();
    case 2817:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2405);
      END_STATE();
    case 2818:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(3004);
      END_STATE();
    case 2819:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2910);
      END_STATE();
    case 2820:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2697);
      END_STATE();
    case 2821:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2960);
      END_STATE();
    case 2822:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2911);
      END_STATE();
    case 2823:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2947);
      END_STATE();
    case 2824:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 2825:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 2826:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2965);
      END_STATE();
    case 2827:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2966);
      END_STATE();
    case 2828:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 2829:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3476);
      END_STATE();
    case 2830:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 2831:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3475);
      END_STATE();
    case 2832:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3042);
      END_STATE();
    case 2833:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3264);
      END_STATE();
    case 2834:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2494);
      END_STATE();
    case 2835:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3184);
      END_STATE();
    case 2836:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3449);
      END_STATE();
    case 2837:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2521);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2526);
      END_STATE();
    case 2838:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3218);
      END_STATE();
    case 2839:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3222);
      END_STATE();
    case 2840:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3229);
      END_STATE();
    case 2841:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3258);
      END_STATE();
    case 2842:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3186);
      END_STATE();
    case 2843:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3256);
      END_STATE();
    case 2844:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3274);
      END_STATE();
    case 2845:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2913);
      END_STATE();
    case 2846:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2498);
      END_STATE();
    case 2847:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2525);
      END_STATE();
    case 2848:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2232);
      END_STATE();
    case 2849:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2889);
      END_STATE();
    case 2850:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2565);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2906);
      END_STATE();
    case 2851:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2890);
      END_STATE();
    case 2852:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2227);
      END_STATE();
    case 2853:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2882);
      END_STATE();
    case 2854:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2886);
      END_STATE();
    case 2855:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2530);
      END_STATE();
    case 2856:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2535);
      END_STATE();
    case 2857:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2382);
      END_STATE();
    case 2858:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2418);
      END_STATE();
    case 2859:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2426);
      END_STATE();
    case 2860:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      END_STATE();
    case 2861:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2855);
      END_STATE();
    case 2862:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2948);
      END_STATE();
    case 2863:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2516);
      END_STATE();
    case 2864:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2902);
      END_STATE();
    case 2865:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2858);
      END_STATE();
    case 2866:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2520);
      END_STATE();
    case 2867:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2527);
      END_STATE();
    case 2868:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2532);
      END_STATE();
    case 2869:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2547);
      END_STATE();
    case 2870:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2271);
      END_STATE();
    case 2871:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2452);
      END_STATE();
    case 2872:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2277);
      END_STATE();
    case 2873:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2278);
      END_STATE();
    case 2874:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2559);
      END_STATE();
    case 2875:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2950);
      END_STATE();
    case 2876:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2457);
      END_STATE();
    case 2877:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      END_STATE();
    case 2878:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2458);
      END_STATE();
    case 2879:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(3447);
      END_STATE();
    case 2880:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(3177);
      END_STATE();
    case 2881:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(3380);
      END_STATE();
    case 2882:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(3346);
      END_STATE();
    case 2883:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(3218);
      END_STATE();
    case 2884:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(3222);
      END_STATE();
    case 2885:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(3229);
      END_STATE();
    case 2886:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(3258);
      END_STATE();
    case 2887:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(3279);
      END_STATE();
    case 2888:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(3225);
      END_STATE();
    case 2889:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2774);
      END_STATE();
    case 2890:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      END_STATE();
    case 2891:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      END_STATE();
    case 2892:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2989);
      END_STATE();
    case 2893:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2835);
      END_STATE();
    case 2894:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2509);
      END_STATE();
    case 2895:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2994);
      END_STATE();
    case 2896:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2912);
      END_STATE();
    case 2897:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2696);
      END_STATE();
    case 2898:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2402);
      END_STATE();
    case 2899:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2538);
      END_STATE();
    case 2900:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2682);
      END_STATE();
    case 2901:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2823);
      END_STATE();
    case 2902:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2727);
      END_STATE();
    case 2903:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2408);
      END_STATE();
    case 2904:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2681);
      END_STATE();
    case 2905:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2707);
      END_STATE();
    case 2906:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2683);
      END_STATE();
    case 2907:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2422);
      END_STATE();
    case 2908:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 2909:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2386);
      END_STATE();
    case 2910:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 2911:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 2912:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2791);
      END_STATE();
    case 2913:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2928);
      END_STATE();
    case 2914:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2763);
      END_STATE();
    case 2915:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2261);
      END_STATE();
    case 2916:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2549);
      END_STATE();
    case 2917:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2256);
      END_STATE();
    case 2918:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2760);
      END_STATE();
    case 2919:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 2920:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2553);
      END_STATE();
    case 2921:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2275);
      END_STATE();
    case 2922:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2363);
      END_STATE();
    case 2923:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2280);
      END_STATE();
    case 2924:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(3219);
      END_STATE();
    case 2925:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(3279);
      END_STATE();
    case 2926:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2286);
      END_STATE();
    case 2927:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2739);
      END_STATE();
    case 2928:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2747);
      END_STATE();
    case 2929:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2460);
      END_STATE();
    case 2930:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2512);
      END_STATE();
    case 2931:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2787);
      END_STATE();
    case 2932:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2474);
      END_STATE();
    case 2933:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2475);
      END_STATE();
    case 2934:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2740);
      END_STATE();
    case 2935:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2613);
      END_STATE();
    case 2936:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2754);
      END_STATE();
    case 2937:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2788);
      END_STATE();
    case 2938:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2885);
      END_STATE();
    case 2939:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2552);
      END_STATE();
    case 2940:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2546);
      END_STATE();
    case 2941:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2795);
      END_STATE();
    case 2942:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2903);
      END_STATE();
    case 2943:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2610);
      END_STATE();
    case 2944:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2360);
      END_STATE();
    case 2945:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2796);
      END_STATE();
    case 2946:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2853);
      END_STATE();
    case 2947:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2854);
      END_STATE();
    case 2948:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2296);
      END_STATE();
    case 2949:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2298);
      END_STATE();
    case 2950:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2297);
      END_STATE();
    case 2951:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2870);
      END_STATE();
    case 2952:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2872);
      END_STATE();
    case 2953:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2684);
      END_STATE();
    case 2954:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2265);
      END_STATE();
    case 2955:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2392);
      END_STATE();
    case 2956:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2693);
      END_STATE();
    case 2957:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2441);
      END_STATE();
    case 2958:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2844);
      END_STATE();
    case 2959:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2262);
      END_STATE();
    case 2960:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2416);
      END_STATE();
    case 2961:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2731);
      END_STATE();
    case 2962:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2431);
      END_STATE();
    case 2963:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2583);
      END_STATE();
    case 2964:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2276);
      END_STATE();
    case 2965:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2453);
      END_STATE();
    case 2966:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2454);
      END_STATE();
    case 2967:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(3258);
      END_STATE();
    case 2968:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2462);
      END_STATE();
    case 2969:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2686);
      END_STATE();
    case 2970:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(26);
      END_STATE();
    case 2971:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2643);
      END_STATE();
    case 2972:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2267);
      END_STATE();
    case 2973:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2645);
      END_STATE();
    case 2974:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(62);
      END_STATE();
    case 2975:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2673);
      END_STATE();
    case 2976:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2859);
      END_STATE();
    case 2977:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 2978:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(3447);
      END_STATE();
    case 2979:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(3184);
      END_STATE();
    case 2980:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2623);
      END_STATE();
    case 2981:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2749);
      END_STATE();
    case 2982:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2991);
      END_STATE();
    case 2983:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2772);
      END_STATE();
    case 2984:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2765);
      END_STATE();
    case 2985:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2770);
      END_STATE();
    case 2986:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(3038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 2987:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 2988:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2789);
      END_STATE();
    case 2989:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(3184);
      END_STATE();
    case 2990:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(3346);
      END_STATE();
    case 2991:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(3229);
      END_STATE();
    case 2992:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(3258);
      END_STATE();
    case 2993:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(3262);
      END_STATE();
    case 2994:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(3186);
      END_STATE();
    case 2995:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2835);
      END_STATE();
    case 2996:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2833);
      END_STATE();
    case 2997:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2767);
      END_STATE();
    case 2998:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2838);
      END_STATE();
    case 2999:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2841);
      END_STATE();
    case 3000:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2840);
      END_STATE();
    case 3001:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 3002:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 3003:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 3004:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 3005:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(185);
      END_STATE();
    case 3006:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2876);
      END_STATE();
    case 3007:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2878);
      END_STATE();
    case 3008:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(2368);
      END_STATE();
    case 3009:
      if (lookahead == 'e' ||
          lookahead == 't') ADVANCE(3451);
      END_STATE();
    case 3010:
      if (lookahead == '-' ||
          lookahead == 'c' ||
          lookahead == 't') ADVANCE(3455);
      END_STATE();
    case 3011:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '3') ADVANCE(3271);
      END_STATE();
    case 3012:
      if (('6' <= lookahead && lookahead <= '8')) ADVANCE(3274);
      END_STATE();
    case 3013:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 3014:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3013);
      END_STATE();
    case 3015:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3014);
      END_STATE();
    case 3016:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3016);
      END_STATE();
    case 3017:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(3211);
      END_STATE();
    case 3018:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3428);
      END_STATE();
    case 3019:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3429);
      END_STATE();
    case 3020:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 3021:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3442);
      END_STATE();
    case 3022:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3443);
      END_STATE();
    case 3023:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3020);
      END_STATE();
    case 3024:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3021);
      END_STATE();
    case 3025:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3027);
      END_STATE();
    case 3026:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3022);
      END_STATE();
    case 3027:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 3028:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3023);
      END_STATE();
    case 3029:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3024);
      END_STATE();
    case 3030:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3028);
      END_STATE();
    case 3031:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 3032:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3029);
      END_STATE();
    case 3033:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3030);
      END_STATE();
    case 3034:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3031);
      END_STATE();
    case 3035:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3032);
      END_STATE();
    case 3036:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3033);
      END_STATE();
    case 3037:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3035);
      END_STATE();
    case 3038:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3045);
      END_STATE();
    case 3039:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3427);
      END_STATE();
    case 3040:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3039);
      END_STATE();
    case 3041:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3040);
      END_STATE();
    case 3042:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3041);
      END_STATE();
    case 3043:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3042);
      END_STATE();
    case 3044:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 3045:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 3046:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3345);
      END_STATE();
    case 3047:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 3048:
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3391);
      END_STATE();
    case 3049:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(3245);
      END_STATE();
    case 3050:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3456);
      END_STATE();
    case 3051:
      if (eof) ADVANCE(3052);
      ADVANCE_MAP(
        '\n', 3053,
        '\r', 1,
        '!', 3349,
        '"', 3178,
        '#', 3473,
        '&', 14,
        '\'', 3180,
        ',', 3183,
        '-', 3010,
        '0', 2986,
        '3', 2330,
        '=', 3176,
        'A', 2364,
        'B', 2222,
        'C', 2223,
        'D', 2502,
        'E', 2977,
        'F', 2746,
        'H', 2568,
        'I', 2356,
        'K', 2365,
        'L', 2230,
        'M', 2283,
        'N', 2676,
        'O', 2781,
        'P', 2923,
        'R', 2366,
        'S', 2367,
        'T', 2969,
        'U', 2507,
        'a', 334,
        'b', 2213,
        'c', 606,
        'd', 333,
        'e', 349,
        'f', 353,
        'g', 1395,
        'h', 1039,
        'i', 951,
        'k', 328,
        'l', 607,
        'm', 354,
        'n', 337,
        'o', 1626,
        'p', 355,
        'r', 329,
        's', 285,
        't', 608,
        'u', 344,
        'v', 655,
        'w', 651,
        '|', 2218,
        '\t', 3479,
        ' ', 3479,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3045);
      END_STATE();
    case 3052:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3053:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 3054:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient);
      if (lookahead == '-') ADVANCE(1892);
      END_STATE();
    case 3055:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient_DASHself);
      END_STATE();
    case 3056:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHrecipient);
      END_STATE();
    case 3057:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 3058:
      ACCEPT_TOKEN(anon_sym_no_DASHtty);
      END_STATE();
    case 3059:
      ACCEPT_TOKEN(anon_sym_enable_DASHlarge_DASHrsa);
      END_STATE();
    case 3060:
      ACCEPT_TOKEN(anon_sym_disable_DASHlarge_DASHrsa);
      END_STATE();
    case 3061:
      ACCEPT_TOKEN(anon_sym_enable_DASHdsa2);
      END_STATE();
    case 3062:
      ACCEPT_TOKEN(anon_sym_disable_DASHdsa2);
      END_STATE();
    case 3063:
      ACCEPT_TOKEN(anon_sym_no_DASHcompress);
      END_STATE();
    case 3064:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHdecompress_DASHlowmem);
      END_STATE();
    case 3065:
      ACCEPT_TOKEN(anon_sym_mangle_DASHdos_DASHfilenames);
      END_STATE();
    case 3066:
      ACCEPT_TOKEN(anon_sym_no_DASHmangle_DASHdos_DASHfilenames);
      END_STATE();
    case 3067:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHlevel);
      END_STATE();
    case 3068:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHlevel);
      END_STATE();
    case 3069:
      ACCEPT_TOKEN(anon_sym_always_DASHtrust);
      END_STATE();
    case 3070:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHlocate);
      END_STATE();
    case 3071:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHimport);
      END_STATE();
    case 3072:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHimport);
      END_STATE();
    case 3073:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHretrieve);
      END_STATE();
    case 3074:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHretrieve);
      END_STATE();
    case 3075:
      ACCEPT_TOKEN(anon_sym_no_DASHsig_DASHcache);
      END_STATE();
    case 3076:
      ACCEPT_TOKEN(anon_sym_auto_DASHcheck_DASHtrustdb);
      END_STATE();
    case 3077:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHcheck_DASHtrustdb);
      END_STATE();
    case 3078:
      ACCEPT_TOKEN(anon_sym_disable_DASHdirmngr);
      END_STATE();
    case 3079:
      ACCEPT_TOKEN(anon_sym_no_DASHautostart);
      END_STATE();
    case 3080:
      ACCEPT_TOKEN(anon_sym_lock_DASHonce);
      END_STATE();
    case 3081:
      ACCEPT_TOKEN(anon_sym_lock_DASHmultiple);
      END_STATE();
    case 3082:
      ACCEPT_TOKEN(anon_sym_lock_DASHnever);
      END_STATE();
    case 3083:
      ACCEPT_TOKEN(anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror);
      END_STATE();
    case 3084:
      ACCEPT_TOKEN(anon_sym_no_DASHrandom_DASHseed_DASHfile);
      END_STATE();
    case 3085:
      ACCEPT_TOKEN(anon_sym_no_DASHgreeting);
      END_STATE();
    case 3086:
      ACCEPT_TOKEN(anon_sym_no_DASHsecmem_DASHwarning);
      END_STATE();
    case 3087:
      ACCEPT_TOKEN(anon_sym_no_DASHpermission_DASHwarning);
      END_STATE();
    case 3088:
      ACCEPT_TOKEN(anon_sym_require_DASHsecmem);
      END_STATE();
    case 3089:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHsecmem);
      END_STATE();
    case 3090:
      ACCEPT_TOKEN(anon_sym_require_DASHcross_DASHverification);
      END_STATE();
    case 3091:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHcross_DASHverification);
      END_STATE();
    case 3092:
      ACCEPT_TOKEN(anon_sym_expert);
      END_STATE();
    case 3093:
      ACCEPT_TOKEN(anon_sym_no_DASHexpert);
      END_STATE();
    case 3094:
      ACCEPT_TOKEN(anon_sym_no_DASHencrypt_DASHto);
      END_STATE();
    case 3095:
      ACCEPT_TOKEN(anon_sym_no_DASHgroups);
      END_STATE();
    case 3096:
      ACCEPT_TOKEN(anon_sym_try_DASHall_DASHsecrets);
      END_STATE();
    case 3097:
      ACCEPT_TOKEN(anon_sym_skip_DASHhidden_DASHrecipients);
      END_STATE();
    case 3098:
      ACCEPT_TOKEN(anon_sym_no_DASHskip_DASHhidden_DASHrecipients);
      END_STATE();
    case 3099:
      ACCEPT_TOKEN(anon_sym_armor);
      END_STATE();
    case 3100:
      ACCEPT_TOKEN(anon_sym_no_DASHarmor);
      END_STATE();
    case 3101:
      ACCEPT_TOKEN(anon_sym_with_DASHcolons);
      END_STATE();
    case 3102:
      ACCEPT_TOKEN(anon_sym_legacy_DASHlist_DASHmode);
      END_STATE();
    case 3103:
      ACCEPT_TOKEN(anon_sym_with_DASHfingerprint);
      END_STATE();
    case 3104:
      ACCEPT_TOKEN(anon_sym_with_DASHsubkey_DASHfingerprint);
      END_STATE();
    case 3105:
      ACCEPT_TOKEN(anon_sym_with_DASHicao_DASHspelling);
      END_STATE();
    case 3106:
      ACCEPT_TOKEN(anon_sym_with_DASHkeygrip);
      END_STATE();
    case 3107:
      ACCEPT_TOKEN(anon_sym_with_DASHkey_DASHorigin);
      END_STATE();
    case 3108:
      ACCEPT_TOKEN(anon_sym_with_DASHwkd_DASHhash);
      END_STATE();
    case 3109:
      ACCEPT_TOKEN(anon_sym_with_DASHsecret);
      END_STATE();
    case 3110:
      ACCEPT_TOKEN(anon_sym_textmode);
      END_STATE();
    case 3111:
      ACCEPT_TOKEN(anon_sym_no_DASHtextmode);
      END_STATE();
    case 3112:
      ACCEPT_TOKEN(anon_sym_force_DASHocb);
      END_STATE();
    case 3113:
      ACCEPT_TOKEN(anon_sym_force_DASHaead);
      END_STATE();
    case 3114:
      ACCEPT_TOKEN(anon_sym_disable_DASHsigner_DASHuid);
      END_STATE();
    case 3115:
      ACCEPT_TOKEN(anon_sym_include_DASHkey_DASHblock);
      END_STATE();
    case 3116:
      ACCEPT_TOKEN(anon_sym_no_DASHinclude_DASHkey_DASHblock);
      END_STATE();
    case 3117:
      ACCEPT_TOKEN(anon_sym_gnupg);
      END_STATE();
    case 3118:
      ACCEPT_TOKEN(anon_sym_openpgp);
      END_STATE();
    case 3119:
      ACCEPT_TOKEN(anon_sym_rfc4880);
      if (lookahead == 'b') ADVANCE(1060);
      END_STATE();
    case 3120:
      ACCEPT_TOKEN(anon_sym_rfc4880bis);
      END_STATE();
    case 3121:
      ACCEPT_TOKEN(anon_sym_rfc2440);
      END_STATE();
    case 3122:
      ACCEPT_TOKEN(anon_sym_pgp7);
      END_STATE();
    case 3123:
      ACCEPT_TOKEN(anon_sym_pgp8);
      END_STATE();
    case 3124:
      ACCEPT_TOKEN(anon_sym_list_DASHonly);
      END_STATE();
    case 3125:
      ACCEPT_TOKEN(anon_sym_interactive);
      END_STATE();
    case 3126:
      ACCEPT_TOKEN(anon_sym_debug_DASHall);
      if (lookahead == 'o') ADVANCE(2148);
      END_STATE();
    case 3127:
      ACCEPT_TOKEN(anon_sym_debug_DASHiolbf);
      END_STATE();
    case 3128:
      ACCEPT_TOKEN(anon_sym_debug_DASHallow_DASHlarge_DASHchunks);
      END_STATE();
    case 3129:
      ACCEPT_TOKEN(anon_sym_debug_DASHignore_DASHexpiration);
      END_STATE();
    case 3130:
      ACCEPT_TOKEN(anon_sym_full_DASHtimestrings);
      END_STATE();
    case 3131:
      ACCEPT_TOKEN(anon_sym_enable_DASHprogress_DASHfilter);
      END_STATE();
    case 3132:
      ACCEPT_TOKEN(anon_sym_log_DASHtime);
      END_STATE();
    case 3133:
      ACCEPT_TOKEN(anon_sym_no_DASHcomments);
      END_STATE();
    case 3134:
      ACCEPT_TOKEN(anon_sym_emit_DASHversion);
      END_STATE();
    case 3135:
      ACCEPT_TOKEN(anon_sym_no_DASHemit_DASHversion);
      END_STATE();
    case 3136:
      ACCEPT_TOKEN(anon_sym_for_DASHyour_DASHeyes_DASHonly);
      END_STATE();
    case 3137:
      ACCEPT_TOKEN(anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly);
      END_STATE();
    case 3138:
      ACCEPT_TOKEN(anon_sym_use_DASHembedded_DASHfilename);
      END_STATE();
    case 3139:
      ACCEPT_TOKEN(anon_sym_no_DASHuse_DASHembedded_DASHfilename);
      END_STATE();
    case 3140:
      ACCEPT_TOKEN(anon_sym_throw_DASHkeyids);
      END_STATE();
    case 3141:
      ACCEPT_TOKEN(anon_sym_no_DASHthrow_DASHkeyids);
      END_STATE();
    case 3142:
      ACCEPT_TOKEN(anon_sym_not_DASHdash_DASHescaped);
      END_STATE();
    case 3143:
      ACCEPT_TOKEN(anon_sym_escape_DASHfrom_DASHlines);
      END_STATE();
    case 3144:
      ACCEPT_TOKEN(anon_sym_no_DASHescape_DASHfrom_DASHlines);
      END_STATE();
    case 3145:
      ACCEPT_TOKEN(anon_sym_no_DASHsymkey_DASHcache);
      END_STATE();
    case 3146:
      ACCEPT_TOKEN(anon_sym_allow_DASHnon_DASHselfsigned_DASHuid);
      END_STATE();
    case 3147:
      ACCEPT_TOKEN(anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid);
      END_STATE();
    case 3148:
      ACCEPT_TOKEN(anon_sym_allow_DASHfreeform_DASHuid);
      END_STATE();
    case 3149:
      ACCEPT_TOKEN(anon_sym_ignore_DASHtime_DASHconflict);
      END_STATE();
    case 3150:
      ACCEPT_TOKEN(anon_sym_ignore_DASHvalid_DASHfrom);
      END_STATE();
    case 3151:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcrc_DASHerror);
      END_STATE();
    case 3152:
      ACCEPT_TOKEN(anon_sym_ignore_DASHmdc_DASHerror);
      END_STATE();
    case 3153:
      ACCEPT_TOKEN(anon_sym_allow_DASHold_DASHcipher_DASHalgos);
      END_STATE();
    case 3154:
      ACCEPT_TOKEN(anon_sym_allow_DASHweak_DASHdigest_DASHalgos);
      END_STATE();
    case 3155:
      ACCEPT_TOKEN(anon_sym_allow_DASHweak_DASHkey_DASHsignatures);
      END_STATE();
    case 3156:
      ACCEPT_TOKEN(anon_sym_override_DASHcompliance_DASHcheck);
      END_STATE();
    case 3157:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHkeyring);
      END_STATE();
    case 3158:
      ACCEPT_TOKEN(anon_sym_no_DASHkeyring);
      END_STATE();
    case 3159:
      ACCEPT_TOKEN(anon_sym_skip_DASHverify);
      END_STATE();
    case 3160:
      ACCEPT_TOKEN(anon_sym_with_DASHkey_DASHdata);
      END_STATE();
    case 3161:
      ACCEPT_TOKEN(anon_sym_list_DASHsignatures);
      END_STATE();
    case 3162:
      ACCEPT_TOKEN(anon_sym_list_DASHsigs);
      END_STATE();
    case 3163:
      ACCEPT_TOKEN(anon_sym_fast_DASHlist_DASHmode);
      END_STATE();
    case 3164:
      ACCEPT_TOKEN(anon_sym_show_DASHsession_DASHkey);
      END_STATE();
    case 3165:
      ACCEPT_TOKEN(anon_sym_ask_DASHsig_DASHexpire);
      END_STATE();
    case 3166:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHsig_DASHexpire);
      END_STATE();
    case 3167:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHexpire);
      END_STATE();
    case 3168:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHexpire);
      END_STATE();
    case 3169:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey);
      END_STATE();
    case 3170:
      ACCEPT_TOKEN(anon_sym_force_DASHsign_DASHkey);
      END_STATE();
    case 3171:
      ACCEPT_TOKEN(anon_sym_forbid_DASHgen_DASHkey);
      END_STATE();
    case 3172:
      ACCEPT_TOKEN(anon_sym_enable_DASHspecial_DASHfilenames);
      END_STATE();
    case 3173:
      ACCEPT_TOKEN(anon_sym_preserve_DASHpermissions);
      END_STATE();
    case 3174:
      ACCEPT_TOKEN(anon_sym_default_DASHkey);
      if (lookahead == 's') ADVANCE(870);
      END_STATE();
    case 3175:
      ACCEPT_TOKEN(anon_sym_list_DASHfilter);
      END_STATE();
    case 3176:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 3177:
      ACCEPT_TOKEN(sym__list_filter_name);
      END_STATE();
    case 3178:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3179:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(3445);
      END_STATE();
    case 3180:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 3181:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(3445);
      END_STATE();
    case 3182:
      ACCEPT_TOKEN(anon_sym_list_DASHoptions);
      END_STATE();
    case 3183:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 3184:
      ACCEPT_TOKEN(sym__list_parameter);
      END_STATE();
    case 3185:
      ACCEPT_TOKEN(anon_sym_verify_DASHoptions);
      END_STATE();
    case 3186:
      ACCEPT_TOKEN(sym__verify_parameter);
      END_STATE();
    case 3187:
      ACCEPT_TOKEN(anon_sym_photo_DASHviewer);
      END_STATE();
    case 3188:
      ACCEPT_TOKEN(aux_sym__command_token1);
      END_STATE();
    case 3189:
      ACCEPT_TOKEN(aux_sym__command_token1);
      if (set_contains(aux_sym__command_format_token1_character_set_1, 9, lookahead)) ADVANCE(3197);
      END_STATE();
    case 3190:
      ACCEPT_TOKEN(aux_sym__command_token2);
      END_STATE();
    case 3191:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (lookahead == '$') ADVANCE(2217);
      END_STATE();
    case 3192:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (set_contains(aux_sym__command_format_token1_character_set_1, 9, lookahead)) ADVANCE(3197);
      END_STATE();
    case 3193:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE);
      END_STATE();
    case 3194:
      ACCEPT_TOKEN(aux_sym__command_token3);
      END_STATE();
    case 3195:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (lookahead == '$') ADVANCE(2217);
      END_STATE();
    case 3196:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (set_contains(aux_sym__command_format_token1_character_set_1, 9, lookahead)) ADVANCE(3197);
      END_STATE();
    case 3197:
      ACCEPT_TOKEN(aux_sym__command_format_token1);
      END_STATE();
    case 3198:
      ACCEPT_TOKEN(anon_sym_exec_DASHpath);
      END_STATE();
    case 3199:
      ACCEPT_TOKEN(anon_sym_keyring);
      END_STATE();
    case 3200:
      ACCEPT_TOKEN(anon_sym_primary_DASHkeyring);
      END_STATE();
    case 3201:
      ACCEPT_TOKEN(anon_sym_trustdb_DASHname);
      END_STATE();
    case 3202:
      ACCEPT_TOKEN(anon_sym_display_DASHcharset);
      END_STATE();
    case 3203:
      ACCEPT_TOKEN(sym__charset_value);
      END_STATE();
    case 3204:
      ACCEPT_TOKEN(sym__charset_value);
      if (lookahead == '5') ADVANCE(3203);
      END_STATE();
    case 3205:
      ACCEPT_TOKEN(anon_sym_utf8_DASHstrings);
      END_STATE();
    case 3206:
      ACCEPT_TOKEN(anon_sym_no_DASHutf8_DASHstrings);
      END_STATE();
    case 3207:
      ACCEPT_TOKEN(anon_sym_compress_DASHlevel);
      END_STATE();
    case 3208:
      ACCEPT_TOKEN(aux_sym__compress_level_token1);
      END_STATE();
    case 3209:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHcompress_DASHlevel);
      END_STATE();
    case 3210:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHlevel);
      END_STATE();
    case 3211:
      ACCEPT_TOKEN(aux_sym__default_cert_level_token1);
      END_STATE();
    case 3212:
      ACCEPT_TOKEN(anon_sym_min_DASHcert_DASHlevel);
      END_STATE();
    case 3213:
      ACCEPT_TOKEN(anon_sym_trusted_DASHkey);
      END_STATE();
    case 3214:
      ACCEPT_TOKEN(anon_sym_add_DASHdesig_DASHrevoker);
      END_STATE();
    case 3215:
      ACCEPT_TOKEN(aux_sym__add_desig_revoker_token1);
      END_STATE();
    case 3216:
      ACCEPT_TOKEN(aux_sym__add_desig_revoker_token2);
      END_STATE();
    case 3217:
      ACCEPT_TOKEN(anon_sym_trust_DASHmodel);
      END_STATE();
    case 3218:
      ACCEPT_TOKEN(sym__model);
      END_STATE();
    case 3219:
      ACCEPT_TOKEN(sym__model);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2484);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2752);
      END_STATE();
    case 3220:
      ACCEPT_TOKEN(anon_sym_assert_DASHsigner);
      END_STATE();
    case 3221:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHlocate);
      END_STATE();
    case 3222:
      ACCEPT_TOKEN(sym__key_locate_value);
      END_STATE();
    case 3223:
      ACCEPT_TOKEN(sym__key_locate_value);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(323);
      END_STATE();
    case 3224:
      ACCEPT_TOKEN(anon_sym_keyid_DASHformat);
      END_STATE();
    case 3225:
      ACCEPT_TOKEN(sym__keyid_format_value);
      END_STATE();
    case 3226:
      ACCEPT_TOKEN(anon_sym_keyserver);
      if (lookahead == '-') ADVANCE(1598);
      END_STATE();
    case 3227:
      ACCEPT_TOKEN(anon_sym_keyserver_DASHoptions);
      END_STATE();
    case 3228:
      ACCEPT_TOKEN(anon_sym_no_DASH);
      END_STATE();
    case 3229:
      ACCEPT_TOKEN(sym__keyserver_parameter);
      END_STATE();
    case 3230:
      ACCEPT_TOKEN(anon_sym_completes_DASHneeded);
      END_STATE();
    case 3231:
      ACCEPT_TOKEN(anon_sym_marginals_DASHneeded);
      END_STATE();
    case 3232:
      ACCEPT_TOKEN(anon_sym_tofu_DASHdefault_DASHpolicy);
      END_STATE();
    case 3233:
      ACCEPT_TOKEN(sym__tofu_policy_value);
      END_STATE();
    case 3234:
      ACCEPT_TOKEN(anon_sym_max_DASHcert_DASHdepth);
      END_STATE();
    case 3235:
      ACCEPT_TOKEN(anon_sym_agent_DASHprogram);
      END_STATE();
    case 3236:
      ACCEPT_TOKEN(anon_sym_dirmngr_DASHprogram);
      END_STATE();
    case 3237:
      ACCEPT_TOKEN(anon_sym_limit_DASHcard_DASHinsert_DASHtries);
      END_STATE();
    case 3238:
      ACCEPT_TOKEN(anon_sym_recipient);
      if (lookahead == '-') ADVANCE(930);
      END_STATE();
    case 3239:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient);
      if (lookahead == '-') ADVANCE(937);
      END_STATE();
    case 3240:
      ACCEPT_TOKEN(anon_sym_recipient_DASHfile);
      END_STATE();
    case 3241:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient_DASHfile);
      END_STATE();
    case 3242:
      ACCEPT_TOKEN(anon_sym_encrypt_DASHto);
      END_STATE();
    case 3243:
      ACCEPT_TOKEN(anon_sym_hidden_DASHencrypt_DASHto);
      END_STATE();
    case 3244:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 3245:
      ACCEPT_TOKEN(aux_sym__group_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(3245);
      END_STATE();
    case 3246:
      ACCEPT_TOKEN(anon_sym_ungroup);
      END_STATE();
    case 3247:
      ACCEPT_TOKEN(anon_sym_local_DASHuser);
      END_STATE();
    case 3248:
      ACCEPT_TOKEN(anon_sym_sender);
      END_STATE();
    case 3249:
      ACCEPT_TOKEN(anon_sym_try_DASHsecret_DASHname);
      END_STATE();
    case 3250:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 3251:
      ACCEPT_TOKEN(anon_sym_max_DASHoutput);
      END_STATE();
    case 3252:
      ACCEPT_TOKEN(anon_sym_chunk_DASHsize);
      END_STATE();
    case 3253:
      ACCEPT_TOKEN(anon_sym_input_DASHsize_DASHhint);
      END_STATE();
    case 3254:
      ACCEPT_TOKEN(anon_sym_key_DASHorigin);
      END_STATE();
    case 3255:
      ACCEPT_TOKEN(sym__key_origin_value);
      END_STATE();
    case 3256:
      ACCEPT_TOKEN(sym__key_origin_value);
      if (lookahead == '-') ADVANCE(2769);
      END_STATE();
    case 3257:
      ACCEPT_TOKEN(anon_sym_import_DASHoptions);
      END_STATE();
    case 3258:
      ACCEPT_TOKEN(sym__import_parameter);
      END_STATE();
    case 3259:
      ACCEPT_TOKEN(anon_sym_import_DASHfilter);
      END_STATE();
    case 3260:
      ACCEPT_TOKEN(sym__import_filter_name);
      END_STATE();
    case 3261:
      ACCEPT_TOKEN(anon_sym_export_DASHfilter);
      END_STATE();
    case 3262:
      ACCEPT_TOKEN(sym__export_filter_name);
      END_STATE();
    case 3263:
      ACCEPT_TOKEN(anon_sym_export_DASHoptions);
      END_STATE();
    case 3264:
      ACCEPT_TOKEN(sym__export_parameter);
      END_STATE();
    case 3265:
      ACCEPT_TOKEN(anon_sym_personal_DASHcipher_DASHpreferences);
      END_STATE();
    case 3266:
      ACCEPT_TOKEN(anon_sym_personal_DASHdigest_DASHpreferences);
      END_STATE();
    case 3267:
      ACCEPT_TOKEN(anon_sym_personal_DASHcompress_DASHpreferences);
      END_STATE();
    case 3268:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcipher_DASHalgo);
      END_STATE();
    case 3269:
      ACCEPT_TOKEN(anon_sym_s2k_DASHdigest_DASHalgo);
      END_STATE();
    case 3270:
      ACCEPT_TOKEN(anon_sym_s2k_DASHmode);
      END_STATE();
    case 3271:
      ACCEPT_TOKEN(aux_sym__s2k_mode_token1);
      END_STATE();
    case 3272:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcount);
      END_STATE();
    case 3273:
      ACCEPT_TOKEN(anon_sym_compliance);
      END_STATE();
    case 3274:
      ACCEPT_TOKEN(sym__compliance_value);
      END_STATE();
    case 3275:
      ACCEPT_TOKEN(sym__compliance_value);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2536);
      END_STATE();
    case 3276:
      ACCEPT_TOKEN(anon_sym_min_DASHrsa_DASHlength);
      END_STATE();
    case 3277:
      ACCEPT_TOKEN(anon_sym_require_DASHcompliance);
      END_STATE();
    case 3278:
      ACCEPT_TOKEN(anon_sym_debug_DASHlevel);
      END_STATE();
    case 3279:
      ACCEPT_TOKEN(sym__debug_level_value);
      END_STATE();
    case 3280:
      ACCEPT_TOKEN(anon_sym_debug);
      if (lookahead == '-') ADVANCE(394);
      END_STATE();
    case 3281:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      END_STATE();
    case 3282:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'G') ADVANCE(3339);
      if (lookahead == 'g') ADVANCE(3346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3339);
      END_STATE();
    case 3283:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'H') ADVANCE(3336);
      if (lookahead == 'h') ADVANCE(2378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3342);
      END_STATE();
    case 3284:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'H') ADVANCE(3286);
      if (lookahead == 'h') ADVANCE(2545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3342);
      END_STATE();
    case 3285:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'I') ADVANCE(3291);
      if (lookahead == 'i') ADVANCE(2620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3344);
      END_STATE();
    case 3286:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'I') ADVANCE(3294);
      if (lookahead == 'i') ADVANCE(2653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3341);
      END_STATE();
    case 3287:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'I') ADVANCE(3343);
      if (lookahead == 'i') ADVANCE(3346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3343);
      END_STATE();
    case 3288:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'K') ADVANCE(3335);
      if (lookahead == 'k') ADVANCE(2424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3342);
      END_STATE();
    case 3289:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'K') ADVANCE(3321);
      if (lookahead == 'k') ADVANCE(2934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3342);
      END_STATE();
    case 3290:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'K') ADVANCE(3341);
      if (lookahead == 'k') ADVANCE(3346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3341);
      END_STATE();
    case 3291:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'L') ADVANCE(3315);
      if (lookahead == 'l') ADVANCE(2907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3343);
      END_STATE();
    case 3292:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'L') ADVANCE(3301);
      if (lookahead == 'R') ADVANCE(3324);
      if (lookahead == 'l') ADVANCE(2718);
      if (lookahead == 'r') ADVANCE(2997);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(3330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'f')) ADVANCE(3344);
      END_STATE();
    case 3293:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'M') ADVANCE(3299);
      if (lookahead == 'm') ADVANCE(2705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3343);
      END_STATE();
    case 3294:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'N') ADVANCE(3282);
      if (lookahead == 'n') ADVANCE(2473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3340);
      END_STATE();
    case 3295:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'O') ADVANCE(3329);
      if (lookahead == 'P') ADVANCE(3333);
      if (lookahead == 'o') ADVANCE(2287);
      if (lookahead == 'p') ADVANCE(2300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3344);
      END_STATE();
    case 3296:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'O') ADVANCE(3289);
      if (lookahead == 'o') ADVANCE(2584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3343);
      END_STATE();
    case 3297:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'O') ADVANCE(3282);
      if (lookahead == 'o') ADVANCE(2473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3340);
      END_STATE();
    case 3298:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'O') ADVANCE(3296);
      if (lookahead == 'o') ADVANCE(2711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3344);
      END_STATE();
    case 3299:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'O') ADVANCE(3307);
      if (lookahead == 'S') ADVANCE(3314);
      if (lookahead == 'o') ADVANCE(2785);
      if (lookahead == 's') ADVANCE(2917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3342);
      END_STATE();
    case 3300:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'O') ADVANCE(3340);
      if (lookahead == 'o') ADVANCE(3346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3340);
      END_STATE();
    case 3301:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'O') ADVANCE(3332);
      if (lookahead == 'o') ADVANCE(2308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3343);
      END_STATE();
    case 3302:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'P') ADVANCE(3287);
      if (lookahead == 'p') ADVANCE(2506);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3344);
      END_STATE();
    case 3303:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'P') ADVANCE(3308);
      if (lookahead == 'p') ADVANCE(2800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3342);
      END_STATE();
    case 3304:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'P') ADVANCE(3316);
      if (lookahead == 'p') ADVANCE(2904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3342);
      END_STATE();
    case 3305:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'P') ADVANCE(3340);
      if (lookahead == 'p') ADVANCE(3346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3340);
      END_STATE();
    case 3306:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'R') ADVANCE(3320);
      if (lookahead == 'r') ADVANCE(2946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3344);
      END_STATE();
    case 3307:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'R') ADVANCE(3325);
      if (lookahead == 'r') ADVANCE(2990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3341);
      END_STATE();
    case 3308:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'R') ADVANCE(3297);
      if (lookahead == 'r') ADVANCE(2703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3341);
      END_STATE();
    case 3309:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'R') ADVANCE(3340);
      if (lookahead == 'r') ADVANCE(3346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3340);
      END_STATE();
    case 3310:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'S') ADVANCE(3284);
      if (lookahead == 's') ADVANCE(2498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3343);
      END_STATE();
    case 3311:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'S') ADVANCE(3318);
      if (lookahead == 's') ADVANCE(2882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3342);
      END_STATE();
    case 3312:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'T') ADVANCE(3339);
      if (lookahead == 't') ADVANCE(3346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3339);
      END_STATE();
    case 3313:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'T') ADVANCE(3303);
      if (lookahead == 't') ADVANCE(2763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3343);
      END_STATE();
    case 3314:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'T') ADVANCE(3328);
      if (lookahead == 't') ADVANCE(2256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3341);
      END_STATE();
    case 3315:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'T') ADVANCE(3334);
      if (lookahead == 't') ADVANCE(2422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3342);
      END_STATE();
    case 3316:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'T') ADVANCE(3300);
      if (lookahead == 't') ADVANCE(2681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3341);
      END_STATE();
    case 3317:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'T') ADVANCE(3340);
      if (lookahead == 't') ADVANCE(3346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3340);
      END_STATE();
    case 3318:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'T') ADVANCE(3341);
      if (lookahead == 't') ADVANCE(3346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3341);
      END_STATE();
    case 3319:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'U') ADVANCE(3337);
      if (lookahead == 'u') ADVANCE(2460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3342);
      END_STATE();
    case 3320:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'U') ADVANCE(3311);
      if (lookahead == 'u') ADVANCE(2853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3343);
      END_STATE();
    case 3321:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'U') ADVANCE(3305);
      if (lookahead == 'u') ADVANCE(2740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3341);
      END_STATE();
    case 3322:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'X') ADVANCE(3313);
      if (lookahead == 'x') ADVANCE(2914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3344);
      END_STATE();
    case 3323:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'X') ADVANCE(3338);
      if (lookahead == 'x') ADVANCE(3046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3344);
      END_STATE();
    case 3324:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'Y') ADVANCE(3304);
      if (lookahead == 'y') ADVANCE(2767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3343);
      END_STATE();
    case 3325:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'Y') ADVANCE(3340);
      if (lookahead == 'y') ADVANCE(3346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3340);
      END_STATE();
    case 3326:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(3310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'f')) ADVANCE(3344);
      END_STATE();
    case 3327:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(3331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'f')) ADVANCE(3344);
      END_STATE();
    case 3328:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(3312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'f')) ADVANCE(3340);
      END_STATE();
    case 3329:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(3319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3343);
      END_STATE();
    case 3330:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(3283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3343);
      END_STATE();
    case 3331:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(3288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3343);
      END_STATE();
    case 3332:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(3290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3342);
      END_STATE();
    case 3333:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(3343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3343);
      END_STATE();
    case 3334:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3341);
      END_STATE();
    case 3335:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3341);
      END_STATE();
    case 3336:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3341);
      END_STATE();
    case 3337:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(3341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'e')) ADVANCE(3341);
      END_STATE();
    case 3338:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3345);
      END_STATE();
    case 3339:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3281);
      END_STATE();
    case 3340:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3339);
      END_STATE();
    case 3341:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3340);
      END_STATE();
    case 3342:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3341);
      END_STATE();
    case 3343:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3342);
      END_STATE();
    case 3344:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3343);
      END_STATE();
    case 3345:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3344);
      END_STATE();
    case 3346:
      ACCEPT_TOKEN(sym__debug_flag_value);
      END_STATE();
    case 3347:
      ACCEPT_TOKEN(anon_sym_debug_DASHset_DASHiobuf_DASHsize);
      END_STATE();
    case 3348:
      ACCEPT_TOKEN(anon_sym_faked_DASHsystem_DASHtime);
      END_STATE();
    case 3349:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3350:
      ACCEPT_TOKEN(anon_sym_status_DASHfd);
      END_STATE();
    case 3351:
      ACCEPT_TOKEN(anon_sym_status_DASHfile);
      END_STATE();
    case 3352:
      ACCEPT_TOKEN(anon_sym_logger_DASHfd);
      END_STATE();
    case 3353:
      ACCEPT_TOKEN(anon_sym_logger_DASHfile);
      END_STATE();
    case 3354:
      ACCEPT_TOKEN(anon_sym_log_DASHfile);
      END_STATE();
    case 3355:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 3356:
      ACCEPT_TOKEN(anon_sym_sig_DASHnotation);
      END_STATE();
    case 3357:
      ACCEPT_TOKEN(anon_sym_cert_DASHnotation);
      END_STATE();
    case 3358:
      ACCEPT_TOKEN(anon_sym_set_DASHnotation);
      END_STATE();
    case 3359:
      ACCEPT_TOKEN(aux_sym__notation_token1);
      END_STATE();
    case 3360:
      ACCEPT_TOKEN(aux_sym__notation_token1);
      if (lookahead == '\n') ADVANCE(3053);
      END_STATE();
    case 3361:
      ACCEPT_TOKEN(aux_sym__notation_token1);
      ADVANCE_MAP(
        '%', 3362,
        'K', 3362,
        'S', 3362,
        'c', 3362,
        'f', 3362,
        'g', 3362,
        'k', 3362,
        'p', 3362,
        's', 3362,
      );
      END_STATE();
    case 3362:
      ACCEPT_TOKEN(aux_sym__notation_format_token1);
      END_STATE();
    case 3363:
      ACCEPT_TOKEN(anon_sym_known_DASHnotation);
      END_STATE();
    case 3364:
      ACCEPT_TOKEN(anon_sym_sig_DASHpolicy_DASHurl);
      END_STATE();
    case 3365:
      ACCEPT_TOKEN(anon_sym_cert_DASHpolicy_DASHurl);
      END_STATE();
    case 3366:
      ACCEPT_TOKEN(anon_sym_set_DASHpolicy_DASHurl);
      END_STATE();
    case 3367:
      ACCEPT_TOKEN(anon_sym_sig_DASHkeyserver_DASHurl);
      END_STATE();
    case 3368:
      ACCEPT_TOKEN(anon_sym_set_DASHfilename);
      END_STATE();
    case 3369:
      ACCEPT_TOKEN(anon_sym_cipher_DASHalgo);
      END_STATE();
    case 3370:
      ACCEPT_TOKEN(anon_sym_digest_DASHalgo);
      END_STATE();
    case 3371:
      ACCEPT_TOKEN(anon_sym_compress_DASHalgo);
      END_STATE();
    case 3372:
      ACCEPT_TOKEN(anon_sym_cert_DASHdigest_DASHalgo);
      END_STATE();
    case 3373:
      ACCEPT_TOKEN(anon_sym_disable_DASHcipher_DASHalgo);
      END_STATE();
    case 3374:
      ACCEPT_TOKEN(anon_sym_disable_DASHpubkey_DASHalgo);
      END_STATE();
    case 3375:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHrepeat);
      END_STATE();
    case 3376:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHfd);
      END_STATE();
    case 3377:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHfile);
      END_STATE();
    case 3378:
      ACCEPT_TOKEN(anon_sym_passphrase);
      if (lookahead == '-') ADVANCE(912);
      END_STATE();
    case 3379:
      ACCEPT_TOKEN(anon_sym_pinentry_DASHmode);
      END_STATE();
    case 3380:
      ACCEPT_TOKEN(sym__pinentry_mode_value);
      END_STATE();
    case 3381:
      ACCEPT_TOKEN(anon_sym_request_DASHorigin);
      END_STATE();
    case 3382:
      ACCEPT_TOKEN(sym__request_origin_value);
      END_STATE();
    case 3383:
      ACCEPT_TOKEN(anon_sym_command_DASHfd);
      END_STATE();
    case 3384:
      ACCEPT_TOKEN(anon_sym_command_DASHfile);
      END_STATE();
    case 3385:
      ACCEPT_TOKEN(anon_sym_weak_DASHdigest);
      END_STATE();
    case 3386:
      ACCEPT_TOKEN(anon_sym_override_DASHsession_DASHkey);
      if (lookahead == '-') ADVANCE(917);
      END_STATE();
    case 3387:
      ACCEPT_TOKEN(anon_sym_override_DASHsession_DASHkey_DASHfd);
      END_STATE();
    case 3388:
      ACCEPT_TOKEN(anon_sym_default_DASHsig_DASHexpire);
      END_STATE();
    case 3389:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHexpire);
      END_STATE();
    case 3390:
      ACCEPT_TOKEN(anon_sym_default_DASHnew_DASHkey_DASHalgo);
      END_STATE();
    case 3391:
      ACCEPT_TOKEN(sym__new_key_algo);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3391);
      END_STATE();
    case 3392:
      ACCEPT_TOKEN(anon_sym_default_DASHpreference_DASHlist);
      END_STATE();
    case 3393:
      ACCEPT_TOKEN(anon_sym_default_DASHkeyserver_DASHurl);
      END_STATE();
    case 3394:
      ACCEPT_TOKEN(anon_sym_chuid);
      END_STATE();
    case 3395:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 3396:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3395);
      END_STATE();
    case 3397:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3396);
      END_STATE();
    case 3398:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3397);
      END_STATE();
    case 3399:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3398);
      END_STATE();
    case 3400:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3399);
      END_STATE();
    case 3401:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3400);
      END_STATE();
    case 3402:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3401);
      END_STATE();
    case 3403:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3402);
      END_STATE();
    case 3404:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3403);
      END_STATE();
    case 3405:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3404);
      END_STATE();
    case 3406:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3405);
      END_STATE();
    case 3407:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3406);
      END_STATE();
    case 3408:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3407);
      END_STATE();
    case 3409:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3408);
      END_STATE();
    case 3410:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3409);
      END_STATE();
    case 3411:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3410);
      END_STATE();
    case 3412:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3411);
      END_STATE();
    case 3413:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3412);
      END_STATE();
    case 3414:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3413);
      END_STATE();
    case 3415:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3414);
      END_STATE();
    case 3416:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3415);
      END_STATE();
    case 3417:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3416);
      END_STATE();
    case 3418:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3417);
      END_STATE();
    case 3419:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3418);
      END_STATE();
    case 3420:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3419);
      END_STATE();
    case 3421:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3420);
      END_STATE();
    case 3422:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3421);
      END_STATE();
    case 3423:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3422);
      END_STATE();
    case 3424:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3423);
      END_STATE();
    case 3425:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3424);
      END_STATE();
    case 3426:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3425);
      END_STATE();
    case 3427:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3426);
      END_STATE();
    case 3428:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '-') ADVANCE(3047);
      if (lookahead == '.') ADVANCE(3018);
      if (lookahead == ':') ADVANCE(3019);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3428);
      END_STATE();
    case 3429:
      ACCEPT_TOKEN(sym_url);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3429);
      END_STATE();
    case 3430:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'T') ADVANCE(3037);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3440);
      END_STATE();
    case 3431:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3431);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(3445);
      END_STATE();
    case 3432:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3430);
      END_STATE();
    case 3433:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3036);
      END_STATE();
    case 3434:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3432);
      END_STATE();
    case 3435:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3434);
      END_STATE();
    case 3436:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3435);
      END_STATE();
    case 3437:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3436);
      END_STATE();
    case 3438:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3437);
      END_STATE();
    case 3439:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3438);
      END_STATE();
    case 3440:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3440);
      END_STATE();
    case 3441:
      ACCEPT_TOKEN(sym_number);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(3445);
      END_STATE();
    case 3442:
      ACCEPT_TOKEN(sym_iso_time);
      END_STATE();
    case 3443:
      ACCEPT_TOKEN(sym_expire_time);
      END_STATE();
    case 3444:
      ACCEPT_TOKEN(sym_expire_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3025);
      END_STATE();
    case 3445:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(3445);
      END_STATE();
    case 3446:
      ACCEPT_TOKEN(sym_filter_scope);
      END_STATE();
    case 3447:
      ACCEPT_TOKEN(sym_filter_property);
      END_STATE();
    case 3448:
      ACCEPT_TOKEN(sym_filter_property);
      if (lookahead == '/') ADVANCE(3446);
      END_STATE();
    case 3449:
      ACCEPT_TOKEN(sym_filter_property);
      if (lookahead == '_') ADVANCE(2331);
      END_STATE();
    case 3450:
      ACCEPT_TOKEN(sym_filter_lc);
      END_STATE();
    case 3451:
      ACCEPT_TOKEN(sym_filter_op1);
      END_STATE();
    case 3452:
      ACCEPT_TOKEN(sym_filter_op1);
      if (lookahead == '=' ||
          lookahead == '~') ADVANCE(3451);
      END_STATE();
    case 3453:
      ACCEPT_TOKEN(sym_filter_op1);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(3451);
      END_STATE();
    case 3454:
      ACCEPT_TOKEN(sym_filter_op0);
      END_STATE();
    case 3455:
      ACCEPT_TOKEN(sym_filter_flag);
      END_STATE();
    case 3456:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      END_STATE();
    case 3457:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == '&') ADVANCE(3450);
      END_STATE();
    case 3458:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == '|') ADVANCE(3450);
      END_STATE();
    case 3459:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3479);
      END_STATE();
    case 3460:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2845);
      END_STATE();
    case 3461:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2679);
      END_STATE();
    case 3462:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2953);
      END_STATE();
    case 3463:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2987);
      END_STATE();
    case 3464:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2304);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2469);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2280);
      END_STATE();
    case 3465:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2848);
      END_STATE();
    case 3466:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2332);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2590);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2235);
      END_STATE();
    case 3467:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2480);
      END_STATE();
    case 3468:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2774);
      END_STATE();
    case 3469:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2510);
      END_STATE();
    case 3470:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2280);
      END_STATE();
    case 3471:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2771);
      END_STATE();
    case 3472:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == '-' ||
          lookahead == 'c' ||
          lookahead == 't') ADVANCE(3455);
      END_STATE();
    case 3473:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3473);
      END_STATE();
    case 3474:
      ACCEPT_TOKEN(sym__pubkey_algo_value);
      END_STATE();
    case 3475:
      ACCEPT_TOKEN(sym__cipher_algo_value);
      END_STATE();
    case 3476:
      ACCEPT_TOKEN(sym__cipher_algo_value);
      if (lookahead == '1') ADVANCE(320);
      if (lookahead == '2') ADVANCE(303);
      END_STATE();
    case 3477:
      ACCEPT_TOKEN(sym__hash_algo_value);
      END_STATE();
    case 3478:
      ACCEPT_TOKEN(sym__compression_algo_value);
      END_STATE();
    case 3479:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3479);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3051},
  [2] = {.lex_state = 3051},
  [3] = {.lex_state = 3051},
  [4] = {.lex_state = 3051},
  [5] = {.lex_state = 3051},
  [6] = {.lex_state = 3051},
  [7] = {.lex_state = 3051},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 3051},
  [10] = {.lex_state = 3051},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 3051},
  [16] = {.lex_state = 3051},
  [17] = {.lex_state = 3051},
  [18] = {.lex_state = 3051},
  [19] = {.lex_state = 3051},
  [20] = {.lex_state = 3051},
  [21] = {.lex_state = 3051},
  [22] = {.lex_state = 3051},
  [23] = {.lex_state = 3051},
  [24] = {.lex_state = 3051},
  [25] = {.lex_state = 3051},
  [26] = {.lex_state = 3051},
  [27] = {.lex_state = 3051},
  [28] = {.lex_state = 3051},
  [29] = {.lex_state = 3051},
  [30] = {.lex_state = 3051},
  [31] = {.lex_state = 3051},
  [32] = {.lex_state = 3051},
  [33] = {.lex_state = 3051},
  [34] = {.lex_state = 3051},
  [35] = {.lex_state = 3051},
  [36] = {.lex_state = 3051},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 3051},
  [47] = {.lex_state = 3051},
  [48] = {.lex_state = 3051},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 3051},
  [51] = {.lex_state = 3051},
  [52] = {.lex_state = 3051},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3051},
  [55] = {.lex_state = 3051},
  [56] = {.lex_state = 3051},
  [57] = {.lex_state = 3051},
  [58] = {.lex_state = 3051},
  [59] = {.lex_state = 3051},
  [60] = {.lex_state = 3051},
  [61] = {.lex_state = 3051},
  [62] = {.lex_state = 3051},
  [63] = {.lex_state = 3051},
  [64] = {.lex_state = 3051},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3051},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3051},
  [71] = {.lex_state = 3051},
  [72] = {.lex_state = 3051},
  [73] = {.lex_state = 3051},
  [74] = {.lex_state = 3051},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 3051},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 3051},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 3051},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 3051},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 3051},
  [87] = {.lex_state = 3051},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 3051},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 3051},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 3051},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 3051},
  [107] = {.lex_state = 3051},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 3051},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 3051},
  [146] = {.lex_state = 3051},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 16},
  [151] = {.lex_state = 3051},
  [152] = {.lex_state = 3051},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 3051},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 3051},
  [157] = {.lex_state = 3051},
  [158] = {.lex_state = 3051},
  [159] = {.lex_state = 3051},
  [160] = {.lex_state = 3051},
  [161] = {.lex_state = 3051},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 3051},
  [166] = {.lex_state = 3051},
  [167] = {.lex_state = 3051},
  [168] = {.lex_state = 3051},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 16},
  [171] = {.lex_state = 3051},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 3051},
  [174] = {.lex_state = 3051},
  [175] = {.lex_state = 3051},
  [176] = {.lex_state = 3051},
  [177] = {.lex_state = 3051},
  [178] = {.lex_state = 3051},
  [179] = {.lex_state = 3051},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 3051},
  [184] = {.lex_state = 3051},
  [185] = {.lex_state = 3051},
  [186] = {.lex_state = 2220},
  [187] = {.lex_state = 3051},
  [188] = {.lex_state = 3051},
  [189] = {.lex_state = 3051},
  [190] = {.lex_state = 2220},
  [191] = {.lex_state = 2220},
  [192] = {.lex_state = 2220},
  [193] = {.lex_state = 2220},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 2220},
  [196] = {.lex_state = 2220},
  [197] = {.lex_state = 2220},
  [198] = {.lex_state = 2220},
  [199] = {.lex_state = 2220},
  [200] = {.lex_state = 3051},
  [201] = {.lex_state = 3051},
  [202] = {.lex_state = 3051},
  [203] = {.lex_state = 3050},
  [204] = {.lex_state = 3051},
  [205] = {.lex_state = 3051},
  [206] = {.lex_state = 3051},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 3051},
  [209] = {.lex_state = 16},
  [210] = {.lex_state = 3051},
  [211] = {.lex_state = 3051},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 16},
  [214] = {.lex_state = 3051},
  [215] = {.lex_state = 3051},
  [216] = {.lex_state = 3051},
  [217] = {.lex_state = 3051},
  [218] = {.lex_state = 3051},
  [219] = {.lex_state = 3051},
  [220] = {.lex_state = 3051},
  [221] = {.lex_state = 3051},
  [222] = {.lex_state = 3051},
  [223] = {.lex_state = 3051},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 3051},
  [226] = {.lex_state = 3051},
  [227] = {.lex_state = 3051},
  [228] = {.lex_state = 3051},
  [229] = {.lex_state = 3051},
  [230] = {.lex_state = 3051},
  [231] = {.lex_state = 3051},
  [232] = {.lex_state = 3051},
  [233] = {.lex_state = 3051},
  [234] = {.lex_state = 3051},
  [235] = {.lex_state = 3051},
  [236] = {.lex_state = 3051},
  [237] = {.lex_state = 3051},
  [238] = {.lex_state = 3051},
  [239] = {.lex_state = 13},
  [240] = {.lex_state = 3051},
  [241] = {.lex_state = 3051},
  [242] = {.lex_state = 3051},
  [243] = {.lex_state = 3051},
  [244] = {.lex_state = 3051},
  [245] = {.lex_state = 3051},
  [246] = {.lex_state = 3051},
  [247] = {.lex_state = 3051},
  [248] = {.lex_state = 3051},
  [249] = {.lex_state = 3051},
  [250] = {.lex_state = 3051},
  [251] = {.lex_state = 3051},
  [252] = {.lex_state = 3051},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 3051},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 3051},
  [257] = {.lex_state = 3051},
  [258] = {.lex_state = 3050},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 3050},
  [262] = {.lex_state = 3050},
  [263] = {.lex_state = 3050},
  [264] = {.lex_state = 3050},
  [265] = {.lex_state = 3050},
  [266] = {.lex_state = 3050},
  [267] = {.lex_state = 3051},
  [268] = {.lex_state = 3050},
  [269] = {.lex_state = 3050},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 3051},
  [275] = {.lex_state = 3051},
  [276] = {.lex_state = 3051},
  [277] = {.lex_state = 3051},
  [278] = {.lex_state = 3051},
  [279] = {.lex_state = 3051},
  [280] = {.lex_state = 3051},
  [281] = {.lex_state = 3051},
  [282] = {.lex_state = 3051},
  [283] = {.lex_state = 3051},
  [284] = {.lex_state = 3051},
  [285] = {.lex_state = 3051},
  [286] = {.lex_state = 3051},
  [287] = {.lex_state = 3051},
  [288] = {.lex_state = 3051},
  [289] = {.lex_state = 3051},
  [290] = {.lex_state = 3051},
  [291] = {.lex_state = 3051},
  [292] = {.lex_state = 3051},
  [293] = {.lex_state = 3051},
  [294] = {.lex_state = 3051},
  [295] = {.lex_state = 3051},
  [296] = {.lex_state = 3051},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 3051},
  [299] = {.lex_state = 3051},
  [300] = {.lex_state = 3051},
  [301] = {.lex_state = 3051},
  [302] = {.lex_state = 3051},
  [303] = {.lex_state = 3051},
  [304] = {.lex_state = 3051},
  [305] = {.lex_state = 3051},
  [306] = {.lex_state = 3051},
  [307] = {.lex_state = 3051},
  [308] = {.lex_state = 3051},
  [309] = {.lex_state = 3051},
  [310] = {.lex_state = 3051},
  [311] = {.lex_state = 3051},
  [312] = {.lex_state = 3051},
  [313] = {.lex_state = 3051},
  [314] = {.lex_state = 3051},
  [315] = {.lex_state = 3051},
  [316] = {.lex_state = 3051},
  [317] = {.lex_state = 3051},
  [318] = {.lex_state = 3051},
  [319] = {.lex_state = 3051},
  [320] = {.lex_state = 3051},
  [321] = {.lex_state = 5},
  [322] = {.lex_state = 3051},
  [323] = {.lex_state = 3051},
  [324] = {.lex_state = 5},
  [325] = {.lex_state = 3051},
  [326] = {.lex_state = 3051},
  [327] = {.lex_state = 3051},
  [328] = {.lex_state = 3051},
  [329] = {.lex_state = 3051},
  [330] = {.lex_state = 3051},
  [331] = {.lex_state = 3051},
  [332] = {.lex_state = 3051},
  [333] = {.lex_state = 3051},
  [334] = {.lex_state = 3051},
  [335] = {.lex_state = 3051},
  [336] = {.lex_state = 3051},
  [337] = {.lex_state = 3051},
  [338] = {.lex_state = 3051},
  [339] = {.lex_state = 3051},
  [340] = {.lex_state = 3051},
  [341] = {.lex_state = 3051},
  [342] = {.lex_state = 3051},
  [343] = {.lex_state = 3051},
  [344] = {.lex_state = 3051},
  [345] = {.lex_state = 3051},
  [346] = {.lex_state = 3051},
  [347] = {.lex_state = 3051},
  [348] = {.lex_state = 3051},
  [349] = {.lex_state = 3051},
  [350] = {.lex_state = 3051},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 3051},
  [353] = {.lex_state = 3051},
  [354] = {.lex_state = 3051},
  [355] = {.lex_state = 3051},
  [356] = {.lex_state = 3051},
  [357] = {.lex_state = 3051},
  [358] = {.lex_state = 5},
  [359] = {.lex_state = 3051},
  [360] = {.lex_state = 3051},
  [361] = {.lex_state = 3051},
  [362] = {.lex_state = 3051},
  [363] = {.lex_state = 5},
  [364] = {.lex_state = 3051},
  [365] = {.lex_state = 3051},
  [366] = {.lex_state = 3051},
  [367] = {.lex_state = 5},
  [368] = {.lex_state = 3051},
  [369] = {.lex_state = 3051},
  [370] = {.lex_state = 3051},
  [371] = {.lex_state = 3051},
  [372] = {.lex_state = 3051},
  [373] = {.lex_state = 3051},
  [374] = {.lex_state = 3051},
  [375] = {.lex_state = 3051},
  [376] = {.lex_state = 3051},
  [377] = {.lex_state = 3051},
  [378] = {.lex_state = 3051},
  [379] = {.lex_state = 3051},
  [380] = {.lex_state = 3051},
  [381] = {.lex_state = 3051},
  [382] = {.lex_state = 3051},
  [383] = {.lex_state = 5},
  [384] = {.lex_state = 3051},
  [385] = {.lex_state = 5},
  [386] = {.lex_state = 3051},
  [387] = {.lex_state = 5},
  [388] = {.lex_state = 271},
  [389] = {.lex_state = 3051},
  [390] = {.lex_state = 3051},
  [391] = {.lex_state = 5},
  [392] = {.lex_state = 3051},
  [393] = {.lex_state = 3051},
  [394] = {.lex_state = 3051},
  [395] = {.lex_state = 3051},
  [396] = {.lex_state = 3051},
  [397] = {.lex_state = 3051},
  [398] = {.lex_state = 3051},
  [399] = {.lex_state = 272},
  [400] = {.lex_state = 3051},
  [401] = {.lex_state = 3051},
  [402] = {.lex_state = 3051},
  [403] = {.lex_state = 3051},
  [404] = {.lex_state = 3051},
  [405] = {.lex_state = 3051},
  [406] = {.lex_state = 3048},
  [407] = {.lex_state = 3048},
  [408] = {.lex_state = 3051},
  [409] = {.lex_state = 3051},
  [410] = {.lex_state = 3051},
  [411] = {.lex_state = 3051},
  [412] = {.lex_state = 3051},
  [413] = {.lex_state = 3051},
  [414] = {.lex_state = 3051},
  [415] = {.lex_state = 3051},
  [416] = {.lex_state = 3051},
  [417] = {.lex_state = 272},
  [418] = {.lex_state = 275},
  [419] = {.lex_state = 272},
  [420] = {.lex_state = 3051},
  [421] = {.lex_state = 5},
  [422] = {.lex_state = 272},
  [423] = {.lex_state = 272},
  [424] = {.lex_state = 3051},
  [425] = {.lex_state = 3051},
  [426] = {.lex_state = 3051},
  [427] = {.lex_state = 3051},
  [428] = {.lex_state = 3051},
  [429] = {.lex_state = 5},
  [430] = {.lex_state = 272},
  [431] = {.lex_state = 272},
  [432] = {.lex_state = 272},
  [433] = {.lex_state = 272},
  [434] = {.lex_state = 3051},
  [435] = {.lex_state = 272},
  [436] = {.lex_state = 3051},
  [437] = {.lex_state = 275},
  [438] = {.lex_state = 3051},
  [439] = {.lex_state = 3051},
  [440] = {.lex_state = 3051},
  [441] = {.lex_state = 275},
  [442] = {.lex_state = 3048},
  [443] = {.lex_state = 3051},
  [444] = {.lex_state = 3051},
  [445] = {.lex_state = 3051},
  [446] = {.lex_state = 3051},
  [447] = {.lex_state = 3051},
  [448] = {.lex_state = 3051},
  [449] = {.lex_state = 3051},
  [450] = {.lex_state = 3051},
  [451] = {.lex_state = 3051},
  [452] = {.lex_state = 3051},
  [453] = {.lex_state = 3051},
  [454] = {.lex_state = 78},
  [455] = {.lex_state = 3051},
  [456] = {.lex_state = 3051},
  [457] = {.lex_state = 3051},
  [458] = {.lex_state = 3051},
  [459] = {.lex_state = 3051},
  [460] = {.lex_state = 78},
  [461] = {.lex_state = 3017},
  [462] = {.lex_state = 3051},
  [463] = {.lex_state = 3017},
  [464] = {.lex_state = 3049},
  [465] = {.lex_state = 3051},
  [466] = {.lex_state = 5},
  [467] = {.lex_state = 5},
  [468] = {.lex_state = 3051},
  [469] = {.lex_state = 3051},
  [470] = {.lex_state = 3051},
  [471] = {.lex_state = 272},
  [472] = {.lex_state = 3051},
  [473] = {.lex_state = 272},
  [474] = {.lex_state = 272},
  [475] = {.lex_state = 3051},
  [476] = {.lex_state = 3051},
  [477] = {.lex_state = 272},
  [478] = {.lex_state = 3051},
  [479] = {.lex_state = 3051},
  [480] = {.lex_state = 5},
  [481] = {.lex_state = 3051},
  [482] = {.lex_state = 5},
  [483] = {.lex_state = 5},
  [484] = {.lex_state = 3051},
  [485] = {.lex_state = 3051},
  [486] = {.lex_state = 3051},
  [487] = {.lex_state = 3051},
  [488] = {.lex_state = 3051},
  [489] = {.lex_state = 3051},
  [490] = {.lex_state = 5},
  [491] = {.lex_state = 3051},
  [492] = {.lex_state = 3051},
  [493] = {.lex_state = 3051},
  [494] = {.lex_state = 3051},
  [495] = {.lex_state = 3051},
  [496] = {.lex_state = 3051},
  [497] = {.lex_state = 3051},
  [498] = {.lex_state = 3051},
  [499] = {.lex_state = 3051},
  [500] = {.lex_state = 272},
  [501] = {.lex_state = 3051},
  [502] = {.lex_state = 3051},
  [503] = {.lex_state = 3051},
  [504] = {.lex_state = 3051},
  [505] = {.lex_state = 3051},
  [506] = {.lex_state = 272},
  [507] = {.lex_state = 3051},
  [508] = {.lex_state = 3011},
  [509] = {.lex_state = 3051},
  [510] = {.lex_state = 272},
  [511] = {.lex_state = 3051},
  [512] = {.lex_state = 272},
  [513] = {.lex_state = 272},
  [514] = {.lex_state = 3051},
  [515] = {.lex_state = 3051},
  [516] = {.lex_state = 3051},
  [517] = {.lex_state = 78},
  [518] = {.lex_state = 3051},
  [519] = {.lex_state = 3051},
  [520] = {.lex_state = 3051},
  [521] = {.lex_state = 3051},
  [522] = {.lex_state = 3051},
  [523] = {.lex_state = 3051},
  [524] = {.lex_state = 3051},
  [525] = {.lex_state = 3051},
  [526] = {.lex_state = 3051},
  [527] = {.lex_state = 277},
  [528] = {.lex_state = 272},
  [529] = {.lex_state = 3051},
  [530] = {.lex_state = 3051},
  [531] = {.lex_state = 3051},
  [532] = {.lex_state = 3051},
  [533] = {.lex_state = 3051},
  [534] = {.lex_state = 3051},
  [535] = {.lex_state = 5},
  [536] = {.lex_state = 3051},
  [537] = {.lex_state = 3051},
  [538] = {.lex_state = 3051},
  [539] = {.lex_state = 3051},
  [540] = {.lex_state = 5},
  [541] = {.lex_state = 272},
  [542] = {.lex_state = 3051},
  [543] = {.lex_state = 3051},
  [544] = {.lex_state = 3051},
  [545] = {.lex_state = 3051},
  [546] = {.lex_state = 3051},
  [547] = {.lex_state = 3051},
  [548] = {.lex_state = 3051},
  [549] = {.lex_state = 3051},
  [550] = {.lex_state = 3051},
  [551] = {.lex_state = 3051},
  [552] = {.lex_state = 3051},
  [553] = {.lex_state = 3051},
  [554] = {.lex_state = 3051},
  [555] = {.lex_state = 3051},
  [556] = {.lex_state = 3051},
  [557] = {.lex_state = 272},
  [558] = {.lex_state = 3051},
  [559] = {.lex_state = 272},
  [560] = {.lex_state = 3051},
  [561] = {.lex_state = 3051},
  [562] = {.lex_state = 3051},
  [563] = {.lex_state = 272},
  [564] = {.lex_state = 3051},
  [565] = {.lex_state = 3051},
  [566] = {.lex_state = 3051},
  [567] = {.lex_state = 3051},
  [568] = {.lex_state = 3051},
  [569] = {.lex_state = 272},
  [570] = {.lex_state = 272},
  [571] = {.lex_state = 3051},
  [572] = {.lex_state = 275},
  [573] = {.lex_state = 275},
  [574] = {.lex_state = 275},
  [575] = {.lex_state = 3051},
  [576] = {.lex_state = 3051},
  [577] = {.lex_state = 5},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 5},
  [580] = {.lex_state = 3051},
  [581] = {.lex_state = 3051},
  [582] = {.lex_state = 272},
  [583] = {.lex_state = 3051},
  [584] = {.lex_state = 3051},
  [585] = {.lex_state = 3051},
  [586] = {.lex_state = 3051},
  [587] = {.lex_state = 3051},
  [588] = {.lex_state = 3051},
  [589] = {.lex_state = 3051},
  [590] = {.lex_state = 3051},
  [591] = {.lex_state = 3051},
  [592] = {.lex_state = 275},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__command_token1] = ACTIONS(1),
    [aux_sym__command_token2] = ACTIONS(1),
    [aux_sym__command_token3] = ACTIONS(1),
    [aux_sym__default_cert_level_token1] = ACTIONS(1),
    [aux_sym__s2k_mode_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym__notation_token1] = ACTIONS(1),
    [aux_sym_filter_value_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(578),
    [sym_option] = STATE(375),
    [sym__default_key] = STATE(389),
    [sym__list_filter] = STATE(393),
    [sym__list_options] = STATE(389),
    [sym__verify_options] = STATE(389),
    [sym__photo_viewer] = STATE(389),
    [sym__exec_path] = STATE(389),
    [sym__keyring] = STATE(389),
    [sym__primary_keyring] = STATE(389),
    [sym__trustdb_name] = STATE(389),
    [sym__display_charset] = STATE(389),
    [sym__utf8_strings] = STATE(389),
    [sym__no_utf8_strings] = STATE(389),
    [sym__compress_level] = STATE(389),
    [sym__bzip2_compress_level] = STATE(389),
    [sym__default_cert_level] = STATE(389),
    [sym__min_cert_level] = STATE(389),
    [sym__trusted_key] = STATE(389),
    [sym__add_desig_revoker] = STATE(389),
    [sym__trust_model] = STATE(389),
    [sym__assert_signer] = STATE(389),
    [sym__auto_key_locate] = STATE(389),
    [sym__keyid_format] = STATE(389),
    [sym__keyserver] = STATE(389),
    [sym__keyserver_options] = STATE(394),
    [sym__completes_needed] = STATE(389),
    [sym__marginals_needed] = STATE(389),
    [sym__tofu_default_policy] = STATE(389),
    [sym__max_cert_depth] = STATE(389),
    [sym__agent_program] = STATE(389),
    [sym__dirmngr_program] = STATE(389),
    [sym__limit_card_insert_tries] = STATE(389),
    [sym__recipient] = STATE(389),
    [sym__hidden_recipient] = STATE(389),
    [sym__recipient_file] = STATE(389),
    [sym__hidden_recipient_file] = STATE(389),
    [sym__encrypt_to] = STATE(389),
    [sym__hidden_encrypt_to] = STATE(389),
    [sym__group] = STATE(396),
    [sym__ungroup] = STATE(389),
    [sym__local_user] = STATE(389),
    [sym__sender] = STATE(389),
    [sym__try_secret_name] = STATE(389),
    [sym__output] = STATE(389),
    [sym__max_output] = STATE(389),
    [sym__chunk_size] = STATE(389),
    [sym__input_size_hint] = STATE(389),
    [sym__key_origin] = STATE(389),
    [sym__import_options] = STATE(389),
    [sym__import_filter] = STATE(397),
    [sym__export_filter] = STATE(398),
    [sym__export_options] = STATE(389),
    [sym__personal_cipher_preferences] = STATE(389),
    [sym__personal_digest_preferences] = STATE(389),
    [sym__personal_compress_preferences] = STATE(389),
    [sym__s2k_cipher_algo] = STATE(389),
    [sym__s2k_digest_algo] = STATE(389),
    [sym__s2k_mode] = STATE(389),
    [sym__s2k_count] = STATE(389),
    [sym__compliance] = STATE(389),
    [sym__min_rsa_length] = STATE(389),
    [sym__require_compliance] = STATE(389),
    [sym__debug_level] = STATE(389),
    [sym__debug] = STATE(389),
    [sym__debug_set_iobuf_size] = STATE(389),
    [sym__faked_system_time] = STATE(389),
    [sym__status_fd] = STATE(389),
    [sym__status_file] = STATE(389),
    [sym__logger_fd] = STATE(389),
    [sym__logger_file] = STATE(389),
    [sym__comment] = STATE(389),
    [sym__sig_notation] = STATE(384),
    [sym__cert_notation] = STATE(361),
    [sym__set_notation] = STATE(311),
    [sym__known_notation] = STATE(389),
    [sym__sig_policy_url] = STATE(389),
    [sym__cert_policy_url] = STATE(389),
    [sym__set_policy_url] = STATE(389),
    [sym__sig_keyserver_url] = STATE(389),
    [sym__set_filename] = STATE(389),
    [sym__cipher_algo] = STATE(389),
    [sym__digest_algo] = STATE(389),
    [sym__compress_algo] = STATE(389),
    [sym__cert_digest_algo] = STATE(389),
    [sym__disable_cipher_algo] = STATE(389),
    [sym__disable_pubkey_algo] = STATE(389),
    [sym__passphrase_repeat] = STATE(389),
    [sym__passphrase_fd] = STATE(389),
    [sym__passphrase_file] = STATE(389),
    [sym__passphrase] = STATE(389),
    [sym__pinentry_mode] = STATE(389),
    [sym__request_origin] = STATE(389),
    [sym__command_fd] = STATE(389),
    [sym__command_file] = STATE(389),
    [sym__weak_digest] = STATE(389),
    [sym__override_session_key] = STATE(389),
    [sym__override_session_key_fd] = STATE(389),
    [sym__default_sig_expire] = STATE(389),
    [sym__default_cert_expire] = STATE(389),
    [sym__default_new_key_algo] = STATE(389),
    [sym__default_preference_list] = STATE(389),
    [sym__default_keyserver_url] = STATE(389),
    [sym__chuid] = STATE(389),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_config_token1] = ACTIONS(5),
    [anon_sym_default_DASHrecipient] = ACTIONS(7),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(9),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(9),
    [anon_sym_verbose] = ACTIONS(9),
    [anon_sym_no_DASHtty] = ACTIONS(9),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(9),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(9),
    [anon_sym_enable_DASHdsa2] = ACTIONS(9),
    [anon_sym_disable_DASHdsa2] = ACTIONS(9),
    [anon_sym_no_DASHcompress] = ACTIONS(9),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(9),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(9),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(9),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(9),
    [anon_sym_always_DASHtrust] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(9),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(9),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(9),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(9),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(9),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(9),
    [anon_sym_no_DASHautostart] = ACTIONS(9),
    [anon_sym_lock_DASHonce] = ACTIONS(9),
    [anon_sym_lock_DASHmultiple] = ACTIONS(9),
    [anon_sym_lock_DASHnever] = ACTIONS(9),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(9),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(9),
    [anon_sym_no_DASHgreeting] = ACTIONS(9),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(9),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(9),
    [anon_sym_require_DASHsecmem] = ACTIONS(9),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(9),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(9),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(9),
    [anon_sym_expert] = ACTIONS(9),
    [anon_sym_no_DASHexpert] = ACTIONS(9),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(9),
    [anon_sym_no_DASHgroups] = ACTIONS(9),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(9),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(9),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(9),
    [anon_sym_armor] = ACTIONS(9),
    [anon_sym_no_DASHarmor] = ACTIONS(9),
    [anon_sym_with_DASHcolons] = ACTIONS(9),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(9),
    [anon_sym_with_DASHfingerprint] = ACTIONS(9),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(9),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(9),
    [anon_sym_with_DASHkeygrip] = ACTIONS(9),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(9),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(9),
    [anon_sym_with_DASHsecret] = ACTIONS(9),
    [anon_sym_textmode] = ACTIONS(9),
    [anon_sym_no_DASHtextmode] = ACTIONS(9),
    [anon_sym_force_DASHocb] = ACTIONS(9),
    [anon_sym_force_DASHaead] = ACTIONS(9),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(9),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(9),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(9),
    [anon_sym_gnupg] = ACTIONS(9),
    [anon_sym_openpgp] = ACTIONS(9),
    [anon_sym_rfc4880] = ACTIONS(7),
    [anon_sym_rfc4880bis] = ACTIONS(9),
    [anon_sym_rfc2440] = ACTIONS(9),
    [anon_sym_pgp7] = ACTIONS(9),
    [anon_sym_pgp8] = ACTIONS(9),
    [anon_sym_list_DASHonly] = ACTIONS(9),
    [anon_sym_interactive] = ACTIONS(9),
    [anon_sym_debug_DASHall] = ACTIONS(7),
    [anon_sym_debug_DASHiolbf] = ACTIONS(9),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(9),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(9),
    [anon_sym_full_DASHtimestrings] = ACTIONS(9),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(9),
    [anon_sym_log_DASHtime] = ACTIONS(9),
    [anon_sym_no_DASHcomments] = ACTIONS(9),
    [anon_sym_emit_DASHversion] = ACTIONS(9),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(9),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(9),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(9),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(9),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(9),
    [anon_sym_throw_DASHkeyids] = ACTIONS(9),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(9),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(9),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(9),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(9),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(9),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(9),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(9),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(9),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(9),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(9),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(9),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(9),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(9),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(9),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(9),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(9),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(9),
    [anon_sym_no_DASHkeyring] = ACTIONS(9),
    [anon_sym_skip_DASHverify] = ACTIONS(9),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(9),
    [anon_sym_list_DASHsignatures] = ACTIONS(9),
    [anon_sym_list_DASHsigs] = ACTIONS(9),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(9),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(9),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(9),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(9),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(9),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(9),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(9),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(9),
    [anon_sym_default_DASHkey] = ACTIONS(11),
    [anon_sym_list_DASHfilter] = ACTIONS(13),
    [anon_sym_list_DASHoptions] = ACTIONS(15),
    [anon_sym_verify_DASHoptions] = ACTIONS(17),
    [anon_sym_photo_DASHviewer] = ACTIONS(19),
    [anon_sym_exec_DASHpath] = ACTIONS(21),
    [anon_sym_keyring] = ACTIONS(23),
    [anon_sym_primary_DASHkeyring] = ACTIONS(25),
    [anon_sym_trustdb_DASHname] = ACTIONS(27),
    [anon_sym_display_DASHcharset] = ACTIONS(29),
    [anon_sym_utf8_DASHstrings] = ACTIONS(9),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(9),
    [anon_sym_compress_DASHlevel] = ACTIONS(31),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(33),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(35),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(37),
    [anon_sym_trusted_DASHkey] = ACTIONS(39),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(41),
    [anon_sym_trust_DASHmodel] = ACTIONS(43),
    [anon_sym_assert_DASHsigner] = ACTIONS(45),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(47),
    [anon_sym_keyid_DASHformat] = ACTIONS(49),
    [anon_sym_keyserver] = ACTIONS(51),
    [anon_sym_keyserver_DASHoptions] = ACTIONS(53),
    [anon_sym_completes_DASHneeded] = ACTIONS(55),
    [anon_sym_marginals_DASHneeded] = ACTIONS(57),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(59),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(61),
    [anon_sym_agent_DASHprogram] = ACTIONS(63),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(65),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(67),
    [anon_sym_recipient] = ACTIONS(69),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(71),
    [anon_sym_recipient_DASHfile] = ACTIONS(73),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(75),
    [anon_sym_encrypt_DASHto] = ACTIONS(77),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(79),
    [anon_sym_group] = ACTIONS(81),
    [anon_sym_ungroup] = ACTIONS(83),
    [anon_sym_local_DASHuser] = ACTIONS(85),
    [anon_sym_sender] = ACTIONS(87),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(89),
    [anon_sym_output] = ACTIONS(91),
    [anon_sym_max_DASHoutput] = ACTIONS(93),
    [anon_sym_chunk_DASHsize] = ACTIONS(95),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(97),
    [anon_sym_key_DASHorigin] = ACTIONS(99),
    [anon_sym_import_DASHoptions] = ACTIONS(101),
    [anon_sym_import_DASHfilter] = ACTIONS(103),
    [anon_sym_export_DASHfilter] = ACTIONS(105),
    [anon_sym_export_DASHoptions] = ACTIONS(107),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(109),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(111),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(113),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(115),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(117),
    [anon_sym_s2k_DASHmode] = ACTIONS(119),
    [anon_sym_s2k_DASHcount] = ACTIONS(121),
    [anon_sym_compliance] = ACTIONS(123),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(125),
    [anon_sym_require_DASHcompliance] = ACTIONS(9),
    [anon_sym_debug_DASHlevel] = ACTIONS(127),
    [anon_sym_debug] = ACTIONS(129),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(131),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(133),
    [anon_sym_status_DASHfd] = ACTIONS(135),
    [anon_sym_status_DASHfile] = ACTIONS(137),
    [anon_sym_logger_DASHfd] = ACTIONS(139),
    [anon_sym_logger_DASHfile] = ACTIONS(141),
    [anon_sym_log_DASHfile] = ACTIONS(141),
    [anon_sym_comment] = ACTIONS(143),
    [anon_sym_sig_DASHnotation] = ACTIONS(145),
    [anon_sym_cert_DASHnotation] = ACTIONS(147),
    [anon_sym_set_DASHnotation] = ACTIONS(149),
    [anon_sym_known_DASHnotation] = ACTIONS(151),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(153),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(155),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(157),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(159),
    [anon_sym_set_DASHfilename] = ACTIONS(161),
    [anon_sym_cipher_DASHalgo] = ACTIONS(163),
    [anon_sym_digest_DASHalgo] = ACTIONS(165),
    [anon_sym_compress_DASHalgo] = ACTIONS(167),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(169),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(171),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(173),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(175),
    [anon_sym_passphrase_DASHfd] = ACTIONS(177),
    [anon_sym_passphrase_DASHfile] = ACTIONS(179),
    [anon_sym_passphrase] = ACTIONS(181),
    [anon_sym_pinentry_DASHmode] = ACTIONS(183),
    [anon_sym_request_DASHorigin] = ACTIONS(185),
    [anon_sym_command_DASHfd] = ACTIONS(187),
    [anon_sym_command_DASHfile] = ACTIONS(189),
    [anon_sym_weak_DASHdigest] = ACTIONS(191),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(193),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(195),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(197),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(199),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(201),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(203),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(205),
    [anon_sym_chuid] = ACTIONS(207),
    [sym_comment] = ACTIONS(209),
    [sym__space] = ACTIONS(211),
  },
  [2] = {
    [sym_option] = STATE(375),
    [sym__default_key] = STATE(389),
    [sym__list_filter] = STATE(393),
    [sym__list_options] = STATE(389),
    [sym__verify_options] = STATE(389),
    [sym__photo_viewer] = STATE(389),
    [sym__exec_path] = STATE(389),
    [sym__keyring] = STATE(389),
    [sym__primary_keyring] = STATE(389),
    [sym__trustdb_name] = STATE(389),
    [sym__display_charset] = STATE(389),
    [sym__utf8_strings] = STATE(389),
    [sym__no_utf8_strings] = STATE(389),
    [sym__compress_level] = STATE(389),
    [sym__bzip2_compress_level] = STATE(389),
    [sym__default_cert_level] = STATE(389),
    [sym__min_cert_level] = STATE(389),
    [sym__trusted_key] = STATE(389),
    [sym__add_desig_revoker] = STATE(389),
    [sym__trust_model] = STATE(389),
    [sym__assert_signer] = STATE(389),
    [sym__auto_key_locate] = STATE(389),
    [sym__keyid_format] = STATE(389),
    [sym__keyserver] = STATE(389),
    [sym__keyserver_options] = STATE(394),
    [sym__completes_needed] = STATE(389),
    [sym__marginals_needed] = STATE(389),
    [sym__tofu_default_policy] = STATE(389),
    [sym__max_cert_depth] = STATE(389),
    [sym__agent_program] = STATE(389),
    [sym__dirmngr_program] = STATE(389),
    [sym__limit_card_insert_tries] = STATE(389),
    [sym__recipient] = STATE(389),
    [sym__hidden_recipient] = STATE(389),
    [sym__recipient_file] = STATE(389),
    [sym__hidden_recipient_file] = STATE(389),
    [sym__encrypt_to] = STATE(389),
    [sym__hidden_encrypt_to] = STATE(389),
    [sym__group] = STATE(396),
    [sym__ungroup] = STATE(389),
    [sym__local_user] = STATE(389),
    [sym__sender] = STATE(389),
    [sym__try_secret_name] = STATE(389),
    [sym__output] = STATE(389),
    [sym__max_output] = STATE(389),
    [sym__chunk_size] = STATE(389),
    [sym__input_size_hint] = STATE(389),
    [sym__key_origin] = STATE(389),
    [sym__import_options] = STATE(389),
    [sym__import_filter] = STATE(397),
    [sym__export_filter] = STATE(398),
    [sym__export_options] = STATE(389),
    [sym__personal_cipher_preferences] = STATE(389),
    [sym__personal_digest_preferences] = STATE(389),
    [sym__personal_compress_preferences] = STATE(389),
    [sym__s2k_cipher_algo] = STATE(389),
    [sym__s2k_digest_algo] = STATE(389),
    [sym__s2k_mode] = STATE(389),
    [sym__s2k_count] = STATE(389),
    [sym__compliance] = STATE(389),
    [sym__min_rsa_length] = STATE(389),
    [sym__require_compliance] = STATE(389),
    [sym__debug_level] = STATE(389),
    [sym__debug] = STATE(389),
    [sym__debug_set_iobuf_size] = STATE(389),
    [sym__faked_system_time] = STATE(389),
    [sym__status_fd] = STATE(389),
    [sym__status_file] = STATE(389),
    [sym__logger_fd] = STATE(389),
    [sym__logger_file] = STATE(389),
    [sym__comment] = STATE(389),
    [sym__sig_notation] = STATE(384),
    [sym__cert_notation] = STATE(361),
    [sym__set_notation] = STATE(311),
    [sym__known_notation] = STATE(389),
    [sym__sig_policy_url] = STATE(389),
    [sym__cert_policy_url] = STATE(389),
    [sym__set_policy_url] = STATE(389),
    [sym__sig_keyserver_url] = STATE(389),
    [sym__set_filename] = STATE(389),
    [sym__cipher_algo] = STATE(389),
    [sym__digest_algo] = STATE(389),
    [sym__compress_algo] = STATE(389),
    [sym__cert_digest_algo] = STATE(389),
    [sym__disable_cipher_algo] = STATE(389),
    [sym__disable_pubkey_algo] = STATE(389),
    [sym__passphrase_repeat] = STATE(389),
    [sym__passphrase_fd] = STATE(389),
    [sym__passphrase_file] = STATE(389),
    [sym__passphrase] = STATE(389),
    [sym__pinentry_mode] = STATE(389),
    [sym__request_origin] = STATE(389),
    [sym__command_fd] = STATE(389),
    [sym__command_file] = STATE(389),
    [sym__weak_digest] = STATE(389),
    [sym__override_session_key] = STATE(389),
    [sym__override_session_key_fd] = STATE(389),
    [sym__default_sig_expire] = STATE(389),
    [sym__default_cert_expire] = STATE(389),
    [sym__default_new_key_algo] = STATE(389),
    [sym__default_preference_list] = STATE(389),
    [sym__default_keyserver_url] = STATE(389),
    [sym__chuid] = STATE(389),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(213),
    [aux_sym_config_token1] = ACTIONS(215),
    [anon_sym_default_DASHrecipient] = ACTIONS(7),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(9),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(9),
    [anon_sym_verbose] = ACTIONS(9),
    [anon_sym_no_DASHtty] = ACTIONS(9),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(9),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(9),
    [anon_sym_enable_DASHdsa2] = ACTIONS(9),
    [anon_sym_disable_DASHdsa2] = ACTIONS(9),
    [anon_sym_no_DASHcompress] = ACTIONS(9),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(9),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(9),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(9),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(9),
    [anon_sym_always_DASHtrust] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(9),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(9),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(9),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(9),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(9),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(9),
    [anon_sym_no_DASHautostart] = ACTIONS(9),
    [anon_sym_lock_DASHonce] = ACTIONS(9),
    [anon_sym_lock_DASHmultiple] = ACTIONS(9),
    [anon_sym_lock_DASHnever] = ACTIONS(9),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(9),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(9),
    [anon_sym_no_DASHgreeting] = ACTIONS(9),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(9),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(9),
    [anon_sym_require_DASHsecmem] = ACTIONS(9),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(9),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(9),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(9),
    [anon_sym_expert] = ACTIONS(9),
    [anon_sym_no_DASHexpert] = ACTIONS(9),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(9),
    [anon_sym_no_DASHgroups] = ACTIONS(9),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(9),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(9),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(9),
    [anon_sym_armor] = ACTIONS(9),
    [anon_sym_no_DASHarmor] = ACTIONS(9),
    [anon_sym_with_DASHcolons] = ACTIONS(9),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(9),
    [anon_sym_with_DASHfingerprint] = ACTIONS(9),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(9),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(9),
    [anon_sym_with_DASHkeygrip] = ACTIONS(9),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(9),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(9),
    [anon_sym_with_DASHsecret] = ACTIONS(9),
    [anon_sym_textmode] = ACTIONS(9),
    [anon_sym_no_DASHtextmode] = ACTIONS(9),
    [anon_sym_force_DASHocb] = ACTIONS(9),
    [anon_sym_force_DASHaead] = ACTIONS(9),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(9),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(9),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(9),
    [anon_sym_gnupg] = ACTIONS(9),
    [anon_sym_openpgp] = ACTIONS(9),
    [anon_sym_rfc4880] = ACTIONS(7),
    [anon_sym_rfc4880bis] = ACTIONS(9),
    [anon_sym_rfc2440] = ACTIONS(9),
    [anon_sym_pgp7] = ACTIONS(9),
    [anon_sym_pgp8] = ACTIONS(9),
    [anon_sym_list_DASHonly] = ACTIONS(9),
    [anon_sym_interactive] = ACTIONS(9),
    [anon_sym_debug_DASHall] = ACTIONS(7),
    [anon_sym_debug_DASHiolbf] = ACTIONS(9),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(9),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(9),
    [anon_sym_full_DASHtimestrings] = ACTIONS(9),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(9),
    [anon_sym_log_DASHtime] = ACTIONS(9),
    [anon_sym_no_DASHcomments] = ACTIONS(9),
    [anon_sym_emit_DASHversion] = ACTIONS(9),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(9),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(9),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(9),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(9),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(9),
    [anon_sym_throw_DASHkeyids] = ACTIONS(9),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(9),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(9),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(9),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(9),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(9),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(9),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(9),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(9),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(9),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(9),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(9),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(9),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(9),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(9),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(9),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(9),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(9),
    [anon_sym_no_DASHkeyring] = ACTIONS(9),
    [anon_sym_skip_DASHverify] = ACTIONS(9),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(9),
    [anon_sym_list_DASHsignatures] = ACTIONS(9),
    [anon_sym_list_DASHsigs] = ACTIONS(9),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(9),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(9),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(9),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(9),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(9),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(9),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(9),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(9),
    [anon_sym_default_DASHkey] = ACTIONS(11),
    [anon_sym_list_DASHfilter] = ACTIONS(13),
    [anon_sym_list_DASHoptions] = ACTIONS(15),
    [anon_sym_verify_DASHoptions] = ACTIONS(17),
    [anon_sym_photo_DASHviewer] = ACTIONS(19),
    [anon_sym_exec_DASHpath] = ACTIONS(21),
    [anon_sym_keyring] = ACTIONS(23),
    [anon_sym_primary_DASHkeyring] = ACTIONS(25),
    [anon_sym_trustdb_DASHname] = ACTIONS(27),
    [anon_sym_display_DASHcharset] = ACTIONS(29),
    [anon_sym_utf8_DASHstrings] = ACTIONS(9),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(9),
    [anon_sym_compress_DASHlevel] = ACTIONS(31),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(33),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(35),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(37),
    [anon_sym_trusted_DASHkey] = ACTIONS(39),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(41),
    [anon_sym_trust_DASHmodel] = ACTIONS(43),
    [anon_sym_assert_DASHsigner] = ACTIONS(45),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(47),
    [anon_sym_keyid_DASHformat] = ACTIONS(49),
    [anon_sym_keyserver] = ACTIONS(51),
    [anon_sym_keyserver_DASHoptions] = ACTIONS(53),
    [anon_sym_completes_DASHneeded] = ACTIONS(55),
    [anon_sym_marginals_DASHneeded] = ACTIONS(57),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(59),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(61),
    [anon_sym_agent_DASHprogram] = ACTIONS(63),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(65),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(67),
    [anon_sym_recipient] = ACTIONS(69),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(71),
    [anon_sym_recipient_DASHfile] = ACTIONS(73),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(75),
    [anon_sym_encrypt_DASHto] = ACTIONS(77),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(79),
    [anon_sym_group] = ACTIONS(81),
    [anon_sym_ungroup] = ACTIONS(83),
    [anon_sym_local_DASHuser] = ACTIONS(85),
    [anon_sym_sender] = ACTIONS(87),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(89),
    [anon_sym_output] = ACTIONS(91),
    [anon_sym_max_DASHoutput] = ACTIONS(93),
    [anon_sym_chunk_DASHsize] = ACTIONS(95),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(97),
    [anon_sym_key_DASHorigin] = ACTIONS(99),
    [anon_sym_import_DASHoptions] = ACTIONS(101),
    [anon_sym_import_DASHfilter] = ACTIONS(103),
    [anon_sym_export_DASHfilter] = ACTIONS(105),
    [anon_sym_export_DASHoptions] = ACTIONS(107),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(109),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(111),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(113),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(115),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(117),
    [anon_sym_s2k_DASHmode] = ACTIONS(119),
    [anon_sym_s2k_DASHcount] = ACTIONS(121),
    [anon_sym_compliance] = ACTIONS(123),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(125),
    [anon_sym_require_DASHcompliance] = ACTIONS(9),
    [anon_sym_debug_DASHlevel] = ACTIONS(127),
    [anon_sym_debug] = ACTIONS(129),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(131),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(133),
    [anon_sym_status_DASHfd] = ACTIONS(135),
    [anon_sym_status_DASHfile] = ACTIONS(137),
    [anon_sym_logger_DASHfd] = ACTIONS(139),
    [anon_sym_logger_DASHfile] = ACTIONS(141),
    [anon_sym_log_DASHfile] = ACTIONS(141),
    [anon_sym_comment] = ACTIONS(143),
    [anon_sym_sig_DASHnotation] = ACTIONS(145),
    [anon_sym_cert_DASHnotation] = ACTIONS(147),
    [anon_sym_set_DASHnotation] = ACTIONS(149),
    [anon_sym_known_DASHnotation] = ACTIONS(151),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(153),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(155),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(157),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(159),
    [anon_sym_set_DASHfilename] = ACTIONS(161),
    [anon_sym_cipher_DASHalgo] = ACTIONS(163),
    [anon_sym_digest_DASHalgo] = ACTIONS(165),
    [anon_sym_compress_DASHalgo] = ACTIONS(167),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(169),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(171),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(173),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(175),
    [anon_sym_passphrase_DASHfd] = ACTIONS(177),
    [anon_sym_passphrase_DASHfile] = ACTIONS(179),
    [anon_sym_passphrase] = ACTIONS(181),
    [anon_sym_pinentry_DASHmode] = ACTIONS(183),
    [anon_sym_request_DASHorigin] = ACTIONS(185),
    [anon_sym_command_DASHfd] = ACTIONS(187),
    [anon_sym_command_DASHfile] = ACTIONS(189),
    [anon_sym_weak_DASHdigest] = ACTIONS(191),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(193),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(195),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(197),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(199),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(201),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(203),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(205),
    [anon_sym_chuid] = ACTIONS(207),
    [sym_comment] = ACTIONS(209),
    [sym__space] = ACTIONS(211),
  },
  [3] = {
    [sym_option] = STATE(375),
    [sym__default_key] = STATE(389),
    [sym__list_filter] = STATE(393),
    [sym__list_options] = STATE(389),
    [sym__verify_options] = STATE(389),
    [sym__photo_viewer] = STATE(389),
    [sym__exec_path] = STATE(389),
    [sym__keyring] = STATE(389),
    [sym__primary_keyring] = STATE(389),
    [sym__trustdb_name] = STATE(389),
    [sym__display_charset] = STATE(389),
    [sym__utf8_strings] = STATE(389),
    [sym__no_utf8_strings] = STATE(389),
    [sym__compress_level] = STATE(389),
    [sym__bzip2_compress_level] = STATE(389),
    [sym__default_cert_level] = STATE(389),
    [sym__min_cert_level] = STATE(389),
    [sym__trusted_key] = STATE(389),
    [sym__add_desig_revoker] = STATE(389),
    [sym__trust_model] = STATE(389),
    [sym__assert_signer] = STATE(389),
    [sym__auto_key_locate] = STATE(389),
    [sym__keyid_format] = STATE(389),
    [sym__keyserver] = STATE(389),
    [sym__keyserver_options] = STATE(394),
    [sym__completes_needed] = STATE(389),
    [sym__marginals_needed] = STATE(389),
    [sym__tofu_default_policy] = STATE(389),
    [sym__max_cert_depth] = STATE(389),
    [sym__agent_program] = STATE(389),
    [sym__dirmngr_program] = STATE(389),
    [sym__limit_card_insert_tries] = STATE(389),
    [sym__recipient] = STATE(389),
    [sym__hidden_recipient] = STATE(389),
    [sym__recipient_file] = STATE(389),
    [sym__hidden_recipient_file] = STATE(389),
    [sym__encrypt_to] = STATE(389),
    [sym__hidden_encrypt_to] = STATE(389),
    [sym__group] = STATE(396),
    [sym__ungroup] = STATE(389),
    [sym__local_user] = STATE(389),
    [sym__sender] = STATE(389),
    [sym__try_secret_name] = STATE(389),
    [sym__output] = STATE(389),
    [sym__max_output] = STATE(389),
    [sym__chunk_size] = STATE(389),
    [sym__input_size_hint] = STATE(389),
    [sym__key_origin] = STATE(389),
    [sym__import_options] = STATE(389),
    [sym__import_filter] = STATE(397),
    [sym__export_filter] = STATE(398),
    [sym__export_options] = STATE(389),
    [sym__personal_cipher_preferences] = STATE(389),
    [sym__personal_digest_preferences] = STATE(389),
    [sym__personal_compress_preferences] = STATE(389),
    [sym__s2k_cipher_algo] = STATE(389),
    [sym__s2k_digest_algo] = STATE(389),
    [sym__s2k_mode] = STATE(389),
    [sym__s2k_count] = STATE(389),
    [sym__compliance] = STATE(389),
    [sym__min_rsa_length] = STATE(389),
    [sym__require_compliance] = STATE(389),
    [sym__debug_level] = STATE(389),
    [sym__debug] = STATE(389),
    [sym__debug_set_iobuf_size] = STATE(389),
    [sym__faked_system_time] = STATE(389),
    [sym__status_fd] = STATE(389),
    [sym__status_file] = STATE(389),
    [sym__logger_fd] = STATE(389),
    [sym__logger_file] = STATE(389),
    [sym__comment] = STATE(389),
    [sym__sig_notation] = STATE(384),
    [sym__cert_notation] = STATE(361),
    [sym__set_notation] = STATE(311),
    [sym__known_notation] = STATE(389),
    [sym__sig_policy_url] = STATE(389),
    [sym__cert_policy_url] = STATE(389),
    [sym__set_policy_url] = STATE(389),
    [sym__sig_keyserver_url] = STATE(389),
    [sym__set_filename] = STATE(389),
    [sym__cipher_algo] = STATE(389),
    [sym__digest_algo] = STATE(389),
    [sym__compress_algo] = STATE(389),
    [sym__cert_digest_algo] = STATE(389),
    [sym__disable_cipher_algo] = STATE(389),
    [sym__disable_pubkey_algo] = STATE(389),
    [sym__passphrase_repeat] = STATE(389),
    [sym__passphrase_fd] = STATE(389),
    [sym__passphrase_file] = STATE(389),
    [sym__passphrase] = STATE(389),
    [sym__pinentry_mode] = STATE(389),
    [sym__request_origin] = STATE(389),
    [sym__command_fd] = STATE(389),
    [sym__command_file] = STATE(389),
    [sym__weak_digest] = STATE(389),
    [sym__override_session_key] = STATE(389),
    [sym__override_session_key_fd] = STATE(389),
    [sym__default_sig_expire] = STATE(389),
    [sym__default_cert_expire] = STATE(389),
    [sym__default_new_key_algo] = STATE(389),
    [sym__default_preference_list] = STATE(389),
    [sym__default_keyserver_url] = STATE(389),
    [sym__chuid] = STATE(389),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(217),
    [aux_sym_config_token1] = ACTIONS(219),
    [anon_sym_default_DASHrecipient] = ACTIONS(222),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(225),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(225),
    [anon_sym_verbose] = ACTIONS(225),
    [anon_sym_no_DASHtty] = ACTIONS(225),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(225),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(225),
    [anon_sym_enable_DASHdsa2] = ACTIONS(225),
    [anon_sym_disable_DASHdsa2] = ACTIONS(225),
    [anon_sym_no_DASHcompress] = ACTIONS(225),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(225),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(225),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(225),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(225),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(225),
    [anon_sym_always_DASHtrust] = ACTIONS(225),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(225),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(225),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(225),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(225),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(225),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(225),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(225),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(225),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(225),
    [anon_sym_no_DASHautostart] = ACTIONS(225),
    [anon_sym_lock_DASHonce] = ACTIONS(225),
    [anon_sym_lock_DASHmultiple] = ACTIONS(225),
    [anon_sym_lock_DASHnever] = ACTIONS(225),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(225),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(225),
    [anon_sym_no_DASHgreeting] = ACTIONS(225),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(225),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(225),
    [anon_sym_require_DASHsecmem] = ACTIONS(225),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(225),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(225),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(225),
    [anon_sym_expert] = ACTIONS(225),
    [anon_sym_no_DASHexpert] = ACTIONS(225),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(225),
    [anon_sym_no_DASHgroups] = ACTIONS(225),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(225),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(225),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(225),
    [anon_sym_armor] = ACTIONS(225),
    [anon_sym_no_DASHarmor] = ACTIONS(225),
    [anon_sym_with_DASHcolons] = ACTIONS(225),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(225),
    [anon_sym_with_DASHfingerprint] = ACTIONS(225),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(225),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(225),
    [anon_sym_with_DASHkeygrip] = ACTIONS(225),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(225),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(225),
    [anon_sym_with_DASHsecret] = ACTIONS(225),
    [anon_sym_textmode] = ACTIONS(225),
    [anon_sym_no_DASHtextmode] = ACTIONS(225),
    [anon_sym_force_DASHocb] = ACTIONS(225),
    [anon_sym_force_DASHaead] = ACTIONS(225),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(225),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(225),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(225),
    [anon_sym_gnupg] = ACTIONS(225),
    [anon_sym_openpgp] = ACTIONS(225),
    [anon_sym_rfc4880] = ACTIONS(222),
    [anon_sym_rfc4880bis] = ACTIONS(225),
    [anon_sym_rfc2440] = ACTIONS(225),
    [anon_sym_pgp7] = ACTIONS(225),
    [anon_sym_pgp8] = ACTIONS(225),
    [anon_sym_list_DASHonly] = ACTIONS(225),
    [anon_sym_interactive] = ACTIONS(225),
    [anon_sym_debug_DASHall] = ACTIONS(222),
    [anon_sym_debug_DASHiolbf] = ACTIONS(225),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(225),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(225),
    [anon_sym_full_DASHtimestrings] = ACTIONS(225),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(225),
    [anon_sym_log_DASHtime] = ACTIONS(225),
    [anon_sym_no_DASHcomments] = ACTIONS(225),
    [anon_sym_emit_DASHversion] = ACTIONS(225),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(225),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(225),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(225),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(225),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(225),
    [anon_sym_throw_DASHkeyids] = ACTIONS(225),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(225),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(225),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(225),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(225),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(225),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(225),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(225),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(225),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(225),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(225),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(225),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(225),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(225),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(225),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(225),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(225),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(225),
    [anon_sym_no_DASHkeyring] = ACTIONS(225),
    [anon_sym_skip_DASHverify] = ACTIONS(225),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(225),
    [anon_sym_list_DASHsignatures] = ACTIONS(225),
    [anon_sym_list_DASHsigs] = ACTIONS(225),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(225),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(225),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(225),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(225),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(225),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(225),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(225),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(225),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(225),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(225),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(225),
    [anon_sym_default_DASHkey] = ACTIONS(228),
    [anon_sym_list_DASHfilter] = ACTIONS(231),
    [anon_sym_list_DASHoptions] = ACTIONS(234),
    [anon_sym_verify_DASHoptions] = ACTIONS(237),
    [anon_sym_photo_DASHviewer] = ACTIONS(240),
    [anon_sym_exec_DASHpath] = ACTIONS(243),
    [anon_sym_keyring] = ACTIONS(246),
    [anon_sym_primary_DASHkeyring] = ACTIONS(249),
    [anon_sym_trustdb_DASHname] = ACTIONS(252),
    [anon_sym_display_DASHcharset] = ACTIONS(255),
    [anon_sym_utf8_DASHstrings] = ACTIONS(225),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(225),
    [anon_sym_compress_DASHlevel] = ACTIONS(258),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(261),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(264),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(267),
    [anon_sym_trusted_DASHkey] = ACTIONS(270),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(273),
    [anon_sym_trust_DASHmodel] = ACTIONS(276),
    [anon_sym_assert_DASHsigner] = ACTIONS(279),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(282),
    [anon_sym_keyid_DASHformat] = ACTIONS(285),
    [anon_sym_keyserver] = ACTIONS(288),
    [anon_sym_keyserver_DASHoptions] = ACTIONS(291),
    [anon_sym_completes_DASHneeded] = ACTIONS(294),
    [anon_sym_marginals_DASHneeded] = ACTIONS(297),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(300),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(303),
    [anon_sym_agent_DASHprogram] = ACTIONS(306),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(309),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(312),
    [anon_sym_recipient] = ACTIONS(315),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(318),
    [anon_sym_recipient_DASHfile] = ACTIONS(321),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(324),
    [anon_sym_encrypt_DASHto] = ACTIONS(327),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(330),
    [anon_sym_group] = ACTIONS(333),
    [anon_sym_ungroup] = ACTIONS(336),
    [anon_sym_local_DASHuser] = ACTIONS(339),
    [anon_sym_sender] = ACTIONS(342),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(345),
    [anon_sym_output] = ACTIONS(348),
    [anon_sym_max_DASHoutput] = ACTIONS(351),
    [anon_sym_chunk_DASHsize] = ACTIONS(354),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(357),
    [anon_sym_key_DASHorigin] = ACTIONS(360),
    [anon_sym_import_DASHoptions] = ACTIONS(363),
    [anon_sym_import_DASHfilter] = ACTIONS(366),
    [anon_sym_export_DASHfilter] = ACTIONS(369),
    [anon_sym_export_DASHoptions] = ACTIONS(372),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(375),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(378),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(381),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(384),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(387),
    [anon_sym_s2k_DASHmode] = ACTIONS(390),
    [anon_sym_s2k_DASHcount] = ACTIONS(393),
    [anon_sym_compliance] = ACTIONS(396),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(399),
    [anon_sym_require_DASHcompliance] = ACTIONS(225),
    [anon_sym_debug_DASHlevel] = ACTIONS(402),
    [anon_sym_debug] = ACTIONS(405),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(408),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(411),
    [anon_sym_status_DASHfd] = ACTIONS(414),
    [anon_sym_status_DASHfile] = ACTIONS(417),
    [anon_sym_logger_DASHfd] = ACTIONS(420),
    [anon_sym_logger_DASHfile] = ACTIONS(423),
    [anon_sym_log_DASHfile] = ACTIONS(423),
    [anon_sym_comment] = ACTIONS(426),
    [anon_sym_sig_DASHnotation] = ACTIONS(429),
    [anon_sym_cert_DASHnotation] = ACTIONS(432),
    [anon_sym_set_DASHnotation] = ACTIONS(435),
    [anon_sym_known_DASHnotation] = ACTIONS(438),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(441),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(444),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(447),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(450),
    [anon_sym_set_DASHfilename] = ACTIONS(453),
    [anon_sym_cipher_DASHalgo] = ACTIONS(456),
    [anon_sym_digest_DASHalgo] = ACTIONS(459),
    [anon_sym_compress_DASHalgo] = ACTIONS(462),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(465),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(468),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(471),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(474),
    [anon_sym_passphrase_DASHfd] = ACTIONS(477),
    [anon_sym_passphrase_DASHfile] = ACTIONS(480),
    [anon_sym_passphrase] = ACTIONS(483),
    [anon_sym_pinentry_DASHmode] = ACTIONS(486),
    [anon_sym_request_DASHorigin] = ACTIONS(489),
    [anon_sym_command_DASHfd] = ACTIONS(492),
    [anon_sym_command_DASHfile] = ACTIONS(495),
    [anon_sym_weak_DASHdigest] = ACTIONS(498),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(501),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(504),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(507),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(510),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(513),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(516),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(519),
    [anon_sym_chuid] = ACTIONS(522),
    [sym_comment] = ACTIONS(525),
    [sym__space] = ACTIONS(528),
  },
  [4] = {
    [sym_option] = STATE(294),
    [sym__default_key] = STATE(389),
    [sym__list_filter] = STATE(393),
    [sym__list_options] = STATE(389),
    [sym__verify_options] = STATE(389),
    [sym__photo_viewer] = STATE(389),
    [sym__exec_path] = STATE(389),
    [sym__keyring] = STATE(389),
    [sym__primary_keyring] = STATE(389),
    [sym__trustdb_name] = STATE(389),
    [sym__display_charset] = STATE(389),
    [sym__utf8_strings] = STATE(389),
    [sym__no_utf8_strings] = STATE(389),
    [sym__compress_level] = STATE(389),
    [sym__bzip2_compress_level] = STATE(389),
    [sym__default_cert_level] = STATE(389),
    [sym__min_cert_level] = STATE(389),
    [sym__trusted_key] = STATE(389),
    [sym__add_desig_revoker] = STATE(389),
    [sym__trust_model] = STATE(389),
    [sym__assert_signer] = STATE(389),
    [sym__auto_key_locate] = STATE(389),
    [sym__keyid_format] = STATE(389),
    [sym__keyserver] = STATE(389),
    [sym__keyserver_options] = STATE(394),
    [sym__completes_needed] = STATE(389),
    [sym__marginals_needed] = STATE(389),
    [sym__tofu_default_policy] = STATE(389),
    [sym__max_cert_depth] = STATE(389),
    [sym__agent_program] = STATE(389),
    [sym__dirmngr_program] = STATE(389),
    [sym__limit_card_insert_tries] = STATE(389),
    [sym__recipient] = STATE(389),
    [sym__hidden_recipient] = STATE(389),
    [sym__recipient_file] = STATE(389),
    [sym__hidden_recipient_file] = STATE(389),
    [sym__encrypt_to] = STATE(389),
    [sym__hidden_encrypt_to] = STATE(389),
    [sym__group] = STATE(396),
    [sym__ungroup] = STATE(389),
    [sym__local_user] = STATE(389),
    [sym__sender] = STATE(389),
    [sym__try_secret_name] = STATE(389),
    [sym__output] = STATE(389),
    [sym__max_output] = STATE(389),
    [sym__chunk_size] = STATE(389),
    [sym__input_size_hint] = STATE(389),
    [sym__key_origin] = STATE(389),
    [sym__import_options] = STATE(389),
    [sym__import_filter] = STATE(397),
    [sym__export_filter] = STATE(398),
    [sym__export_options] = STATE(389),
    [sym__personal_cipher_preferences] = STATE(389),
    [sym__personal_digest_preferences] = STATE(389),
    [sym__personal_compress_preferences] = STATE(389),
    [sym__s2k_cipher_algo] = STATE(389),
    [sym__s2k_digest_algo] = STATE(389),
    [sym__s2k_mode] = STATE(389),
    [sym__s2k_count] = STATE(389),
    [sym__compliance] = STATE(389),
    [sym__min_rsa_length] = STATE(389),
    [sym__require_compliance] = STATE(389),
    [sym__debug_level] = STATE(389),
    [sym__debug] = STATE(389),
    [sym__debug_set_iobuf_size] = STATE(389),
    [sym__faked_system_time] = STATE(389),
    [sym__status_fd] = STATE(389),
    [sym__status_file] = STATE(389),
    [sym__logger_fd] = STATE(389),
    [sym__logger_file] = STATE(389),
    [sym__comment] = STATE(389),
    [sym__sig_notation] = STATE(384),
    [sym__cert_notation] = STATE(361),
    [sym__set_notation] = STATE(311),
    [sym__known_notation] = STATE(389),
    [sym__sig_policy_url] = STATE(389),
    [sym__cert_policy_url] = STATE(389),
    [sym__set_policy_url] = STATE(389),
    [sym__sig_keyserver_url] = STATE(389),
    [sym__set_filename] = STATE(389),
    [sym__cipher_algo] = STATE(389),
    [sym__digest_algo] = STATE(389),
    [sym__compress_algo] = STATE(389),
    [sym__cert_digest_algo] = STATE(389),
    [sym__disable_cipher_algo] = STATE(389),
    [sym__disable_pubkey_algo] = STATE(389),
    [sym__passphrase_repeat] = STATE(389),
    [sym__passphrase_fd] = STATE(389),
    [sym__passphrase_file] = STATE(389),
    [sym__passphrase] = STATE(389),
    [sym__pinentry_mode] = STATE(389),
    [sym__request_origin] = STATE(389),
    [sym__command_fd] = STATE(389),
    [sym__command_file] = STATE(389),
    [sym__weak_digest] = STATE(389),
    [sym__override_session_key] = STATE(389),
    [sym__override_session_key_fd] = STATE(389),
    [sym__default_sig_expire] = STATE(389),
    [sym__default_cert_expire] = STATE(389),
    [sym__default_new_key_algo] = STATE(389),
    [sym__default_preference_list] = STATE(389),
    [sym__default_keyserver_url] = STATE(389),
    [sym__chuid] = STATE(389),
    [aux_sym_config_token1] = ACTIONS(531),
    [anon_sym_default_DASHrecipient] = ACTIONS(7),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(9),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(9),
    [anon_sym_verbose] = ACTIONS(9),
    [anon_sym_no_DASHtty] = ACTIONS(9),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(9),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(9),
    [anon_sym_enable_DASHdsa2] = ACTIONS(9),
    [anon_sym_disable_DASHdsa2] = ACTIONS(9),
    [anon_sym_no_DASHcompress] = ACTIONS(9),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(9),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(9),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(9),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(9),
    [anon_sym_always_DASHtrust] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(9),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(9),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(9),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(9),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(9),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(9),
    [anon_sym_no_DASHautostart] = ACTIONS(9),
    [anon_sym_lock_DASHonce] = ACTIONS(9),
    [anon_sym_lock_DASHmultiple] = ACTIONS(9),
    [anon_sym_lock_DASHnever] = ACTIONS(9),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(9),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(9),
    [anon_sym_no_DASHgreeting] = ACTIONS(9),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(9),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(9),
    [anon_sym_require_DASHsecmem] = ACTIONS(9),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(9),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(9),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(9),
    [anon_sym_expert] = ACTIONS(9),
    [anon_sym_no_DASHexpert] = ACTIONS(9),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(9),
    [anon_sym_no_DASHgroups] = ACTIONS(9),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(9),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(9),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(9),
    [anon_sym_armor] = ACTIONS(9),
    [anon_sym_no_DASHarmor] = ACTIONS(9),
    [anon_sym_with_DASHcolons] = ACTIONS(9),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(9),
    [anon_sym_with_DASHfingerprint] = ACTIONS(9),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(9),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(9),
    [anon_sym_with_DASHkeygrip] = ACTIONS(9),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(9),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(9),
    [anon_sym_with_DASHsecret] = ACTIONS(9),
    [anon_sym_textmode] = ACTIONS(9),
    [anon_sym_no_DASHtextmode] = ACTIONS(9),
    [anon_sym_force_DASHocb] = ACTIONS(9),
    [anon_sym_force_DASHaead] = ACTIONS(9),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(9),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(9),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(9),
    [anon_sym_gnupg] = ACTIONS(9),
    [anon_sym_openpgp] = ACTIONS(9),
    [anon_sym_rfc4880] = ACTIONS(7),
    [anon_sym_rfc4880bis] = ACTIONS(9),
    [anon_sym_rfc2440] = ACTIONS(9),
    [anon_sym_pgp7] = ACTIONS(9),
    [anon_sym_pgp8] = ACTIONS(9),
    [anon_sym_list_DASHonly] = ACTIONS(9),
    [anon_sym_interactive] = ACTIONS(9),
    [anon_sym_debug_DASHall] = ACTIONS(7),
    [anon_sym_debug_DASHiolbf] = ACTIONS(9),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(9),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(9),
    [anon_sym_full_DASHtimestrings] = ACTIONS(9),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(9),
    [anon_sym_log_DASHtime] = ACTIONS(9),
    [anon_sym_no_DASHcomments] = ACTIONS(9),
    [anon_sym_emit_DASHversion] = ACTIONS(9),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(9),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(9),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(9),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(9),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(9),
    [anon_sym_throw_DASHkeyids] = ACTIONS(9),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(9),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(9),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(9),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(9),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(9),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(9),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(9),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(9),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(9),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(9),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(9),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(9),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(9),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(9),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(9),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(9),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(9),
    [anon_sym_no_DASHkeyring] = ACTIONS(9),
    [anon_sym_skip_DASHverify] = ACTIONS(9),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(9),
    [anon_sym_list_DASHsignatures] = ACTIONS(9),
    [anon_sym_list_DASHsigs] = ACTIONS(9),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(9),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(9),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(9),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(9),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(9),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(9),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(9),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(9),
    [anon_sym_default_DASHkey] = ACTIONS(11),
    [anon_sym_list_DASHfilter] = ACTIONS(13),
    [anon_sym_list_DASHoptions] = ACTIONS(15),
    [anon_sym_verify_DASHoptions] = ACTIONS(17),
    [anon_sym_photo_DASHviewer] = ACTIONS(19),
    [anon_sym_exec_DASHpath] = ACTIONS(21),
    [anon_sym_keyring] = ACTIONS(23),
    [anon_sym_primary_DASHkeyring] = ACTIONS(25),
    [anon_sym_trustdb_DASHname] = ACTIONS(27),
    [anon_sym_display_DASHcharset] = ACTIONS(29),
    [anon_sym_utf8_DASHstrings] = ACTIONS(9),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(9),
    [anon_sym_compress_DASHlevel] = ACTIONS(31),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(33),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(35),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(37),
    [anon_sym_trusted_DASHkey] = ACTIONS(39),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(41),
    [anon_sym_trust_DASHmodel] = ACTIONS(43),
    [anon_sym_assert_DASHsigner] = ACTIONS(45),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(47),
    [anon_sym_keyid_DASHformat] = ACTIONS(49),
    [anon_sym_keyserver] = ACTIONS(51),
    [anon_sym_keyserver_DASHoptions] = ACTIONS(53),
    [anon_sym_completes_DASHneeded] = ACTIONS(55),
    [anon_sym_marginals_DASHneeded] = ACTIONS(57),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(59),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(61),
    [anon_sym_agent_DASHprogram] = ACTIONS(63),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(65),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(67),
    [anon_sym_recipient] = ACTIONS(69),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(71),
    [anon_sym_recipient_DASHfile] = ACTIONS(73),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(75),
    [anon_sym_encrypt_DASHto] = ACTIONS(77),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(79),
    [anon_sym_group] = ACTIONS(81),
    [anon_sym_ungroup] = ACTIONS(83),
    [anon_sym_local_DASHuser] = ACTIONS(85),
    [anon_sym_sender] = ACTIONS(87),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(89),
    [anon_sym_output] = ACTIONS(91),
    [anon_sym_max_DASHoutput] = ACTIONS(93),
    [anon_sym_chunk_DASHsize] = ACTIONS(95),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(97),
    [anon_sym_key_DASHorigin] = ACTIONS(99),
    [anon_sym_import_DASHoptions] = ACTIONS(101),
    [anon_sym_import_DASHfilter] = ACTIONS(103),
    [anon_sym_export_DASHfilter] = ACTIONS(105),
    [anon_sym_export_DASHoptions] = ACTIONS(107),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(109),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(111),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(113),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(115),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(117),
    [anon_sym_s2k_DASHmode] = ACTIONS(119),
    [anon_sym_s2k_DASHcount] = ACTIONS(121),
    [anon_sym_compliance] = ACTIONS(123),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(125),
    [anon_sym_require_DASHcompliance] = ACTIONS(9),
    [anon_sym_debug_DASHlevel] = ACTIONS(127),
    [anon_sym_debug] = ACTIONS(129),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(131),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(133),
    [anon_sym_status_DASHfd] = ACTIONS(135),
    [anon_sym_status_DASHfile] = ACTIONS(137),
    [anon_sym_logger_DASHfd] = ACTIONS(139),
    [anon_sym_logger_DASHfile] = ACTIONS(141),
    [anon_sym_log_DASHfile] = ACTIONS(141),
    [anon_sym_comment] = ACTIONS(143),
    [anon_sym_sig_DASHnotation] = ACTIONS(145),
    [anon_sym_cert_DASHnotation] = ACTIONS(147),
    [anon_sym_set_DASHnotation] = ACTIONS(149),
    [anon_sym_known_DASHnotation] = ACTIONS(151),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(153),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(155),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(157),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(159),
    [anon_sym_set_DASHfilename] = ACTIONS(161),
    [anon_sym_cipher_DASHalgo] = ACTIONS(163),
    [anon_sym_digest_DASHalgo] = ACTIONS(165),
    [anon_sym_compress_DASHalgo] = ACTIONS(167),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(169),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(171),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(173),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(175),
    [anon_sym_passphrase_DASHfd] = ACTIONS(177),
    [anon_sym_passphrase_DASHfile] = ACTIONS(179),
    [anon_sym_passphrase] = ACTIONS(181),
    [anon_sym_pinentry_DASHmode] = ACTIONS(183),
    [anon_sym_request_DASHorigin] = ACTIONS(185),
    [anon_sym_command_DASHfd] = ACTIONS(187),
    [anon_sym_command_DASHfile] = ACTIONS(189),
    [anon_sym_weak_DASHdigest] = ACTIONS(191),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(193),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(195),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(197),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(199),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(201),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(203),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(205),
    [anon_sym_chuid] = ACTIONS(207),
    [sym_comment] = ACTIONS(533),
    [sym__space] = ACTIONS(535),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [aux_sym_config_token1] = ACTIONS(217),
    [anon_sym_default_DASHrecipient] = ACTIONS(537),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(217),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(217),
    [anon_sym_verbose] = ACTIONS(217),
    [anon_sym_no_DASHtty] = ACTIONS(217),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(217),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(217),
    [anon_sym_enable_DASHdsa2] = ACTIONS(217),
    [anon_sym_disable_DASHdsa2] = ACTIONS(217),
    [anon_sym_no_DASHcompress] = ACTIONS(217),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(217),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(217),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(217),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(217),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(217),
    [anon_sym_always_DASHtrust] = ACTIONS(217),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(217),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(217),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(217),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(217),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(217),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(217),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(217),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(217),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(217),
    [anon_sym_no_DASHautostart] = ACTIONS(217),
    [anon_sym_lock_DASHonce] = ACTIONS(217),
    [anon_sym_lock_DASHmultiple] = ACTIONS(217),
    [anon_sym_lock_DASHnever] = ACTIONS(217),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(217),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(217),
    [anon_sym_no_DASHgreeting] = ACTIONS(217),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(217),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(217),
    [anon_sym_require_DASHsecmem] = ACTIONS(217),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(217),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(217),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(217),
    [anon_sym_expert] = ACTIONS(217),
    [anon_sym_no_DASHexpert] = ACTIONS(217),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(217),
    [anon_sym_no_DASHgroups] = ACTIONS(217),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(217),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(217),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(217),
    [anon_sym_armor] = ACTIONS(217),
    [anon_sym_no_DASHarmor] = ACTIONS(217),
    [anon_sym_with_DASHcolons] = ACTIONS(217),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(217),
    [anon_sym_with_DASHfingerprint] = ACTIONS(217),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(217),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(217),
    [anon_sym_with_DASHkeygrip] = ACTIONS(217),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(217),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(217),
    [anon_sym_with_DASHsecret] = ACTIONS(217),
    [anon_sym_textmode] = ACTIONS(217),
    [anon_sym_no_DASHtextmode] = ACTIONS(217),
    [anon_sym_force_DASHocb] = ACTIONS(217),
    [anon_sym_force_DASHaead] = ACTIONS(217),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(217),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(217),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(217),
    [anon_sym_gnupg] = ACTIONS(217),
    [anon_sym_openpgp] = ACTIONS(217),
    [anon_sym_rfc4880] = ACTIONS(537),
    [anon_sym_rfc4880bis] = ACTIONS(217),
    [anon_sym_rfc2440] = ACTIONS(217),
    [anon_sym_pgp7] = ACTIONS(217),
    [anon_sym_pgp8] = ACTIONS(217),
    [anon_sym_list_DASHonly] = ACTIONS(217),
    [anon_sym_interactive] = ACTIONS(217),
    [anon_sym_debug_DASHall] = ACTIONS(537),
    [anon_sym_debug_DASHiolbf] = ACTIONS(217),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(217),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(217),
    [anon_sym_full_DASHtimestrings] = ACTIONS(217),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(217),
    [anon_sym_log_DASHtime] = ACTIONS(217),
    [anon_sym_no_DASHcomments] = ACTIONS(217),
    [anon_sym_emit_DASHversion] = ACTIONS(217),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(217),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(217),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(217),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(217),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(217),
    [anon_sym_throw_DASHkeyids] = ACTIONS(217),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(217),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(217),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(217),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(217),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(217),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(217),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(217),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(217),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(217),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(217),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(217),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(217),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(217),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(217),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(217),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(217),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(217),
    [anon_sym_no_DASHkeyring] = ACTIONS(217),
    [anon_sym_skip_DASHverify] = ACTIONS(217),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(217),
    [anon_sym_list_DASHsignatures] = ACTIONS(217),
    [anon_sym_list_DASHsigs] = ACTIONS(217),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(217),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(217),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(217),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(217),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(217),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(217),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(217),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(217),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(217),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(217),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(217),
    [anon_sym_default_DASHkey] = ACTIONS(537),
    [anon_sym_list_DASHfilter] = ACTIONS(217),
    [anon_sym_list_DASHoptions] = ACTIONS(217),
    [anon_sym_verify_DASHoptions] = ACTIONS(217),
    [anon_sym_photo_DASHviewer] = ACTIONS(217),
    [anon_sym_exec_DASHpath] = ACTIONS(217),
    [anon_sym_keyring] = ACTIONS(217),
    [anon_sym_primary_DASHkeyring] = ACTIONS(217),
    [anon_sym_trustdb_DASHname] = ACTIONS(217),
    [anon_sym_display_DASHcharset] = ACTIONS(217),
    [anon_sym_utf8_DASHstrings] = ACTIONS(217),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(217),
    [anon_sym_compress_DASHlevel] = ACTIONS(217),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(217),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(217),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(217),
    [anon_sym_trusted_DASHkey] = ACTIONS(217),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(217),
    [anon_sym_trust_DASHmodel] = ACTIONS(217),
    [anon_sym_assert_DASHsigner] = ACTIONS(217),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(217),
    [anon_sym_keyid_DASHformat] = ACTIONS(217),
    [anon_sym_keyserver] = ACTIONS(537),
    [anon_sym_keyserver_DASHoptions] = ACTIONS(217),
    [anon_sym_completes_DASHneeded] = ACTIONS(217),
    [anon_sym_marginals_DASHneeded] = ACTIONS(217),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(217),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(217),
    [anon_sym_agent_DASHprogram] = ACTIONS(217),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(217),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(217),
    [anon_sym_recipient] = ACTIONS(537),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(537),
    [anon_sym_recipient_DASHfile] = ACTIONS(217),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(217),
    [anon_sym_encrypt_DASHto] = ACTIONS(217),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(217),
    [anon_sym_group] = ACTIONS(217),
    [anon_sym_ungroup] = ACTIONS(217),
    [anon_sym_local_DASHuser] = ACTIONS(217),
    [anon_sym_sender] = ACTIONS(217),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(217),
    [anon_sym_output] = ACTIONS(217),
    [anon_sym_max_DASHoutput] = ACTIONS(217),
    [anon_sym_chunk_DASHsize] = ACTIONS(217),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(217),
    [anon_sym_key_DASHorigin] = ACTIONS(217),
    [anon_sym_import_DASHoptions] = ACTIONS(217),
    [anon_sym_import_DASHfilter] = ACTIONS(217),
    [anon_sym_export_DASHfilter] = ACTIONS(217),
    [anon_sym_export_DASHoptions] = ACTIONS(217),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(217),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(217),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(217),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(217),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(217),
    [anon_sym_s2k_DASHmode] = ACTIONS(217),
    [anon_sym_s2k_DASHcount] = ACTIONS(217),
    [anon_sym_compliance] = ACTIONS(217),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(217),
    [anon_sym_require_DASHcompliance] = ACTIONS(217),
    [anon_sym_debug_DASHlevel] = ACTIONS(217),
    [anon_sym_debug] = ACTIONS(537),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(217),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(217),
    [anon_sym_status_DASHfd] = ACTIONS(217),
    [anon_sym_status_DASHfile] = ACTIONS(217),
    [anon_sym_logger_DASHfd] = ACTIONS(217),
    [anon_sym_logger_DASHfile] = ACTIONS(217),
    [anon_sym_log_DASHfile] = ACTIONS(217),
    [anon_sym_comment] = ACTIONS(217),
    [anon_sym_sig_DASHnotation] = ACTIONS(217),
    [anon_sym_cert_DASHnotation] = ACTIONS(217),
    [anon_sym_set_DASHnotation] = ACTIONS(217),
    [anon_sym_known_DASHnotation] = ACTIONS(217),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(217),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(217),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(217),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(217),
    [anon_sym_set_DASHfilename] = ACTIONS(217),
    [anon_sym_cipher_DASHalgo] = ACTIONS(217),
    [anon_sym_digest_DASHalgo] = ACTIONS(217),
    [anon_sym_compress_DASHalgo] = ACTIONS(217),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(217),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(217),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(217),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(217),
    [anon_sym_passphrase_DASHfd] = ACTIONS(217),
    [anon_sym_passphrase_DASHfile] = ACTIONS(217),
    [anon_sym_passphrase] = ACTIONS(537),
    [anon_sym_pinentry_DASHmode] = ACTIONS(217),
    [anon_sym_request_DASHorigin] = ACTIONS(217),
    [anon_sym_command_DASHfd] = ACTIONS(217),
    [anon_sym_command_DASHfile] = ACTIONS(217),
    [anon_sym_weak_DASHdigest] = ACTIONS(217),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(537),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(217),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(217),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(217),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(217),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(217),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(217),
    [anon_sym_chuid] = ACTIONS(217),
    [sym_comment] = ACTIONS(217),
    [sym__space] = ACTIONS(217),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [aux_sym_config_token1] = ACTIONS(539),
    [anon_sym_default_DASHrecipient] = ACTIONS(541),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(539),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(539),
    [anon_sym_verbose] = ACTIONS(539),
    [anon_sym_no_DASHtty] = ACTIONS(539),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(539),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(539),
    [anon_sym_enable_DASHdsa2] = ACTIONS(539),
    [anon_sym_disable_DASHdsa2] = ACTIONS(539),
    [anon_sym_no_DASHcompress] = ACTIONS(539),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(539),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(539),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(539),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(539),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(539),
    [anon_sym_always_DASHtrust] = ACTIONS(539),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(539),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(539),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(539),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(539),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(539),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(539),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(539),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(539),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(539),
    [anon_sym_no_DASHautostart] = ACTIONS(539),
    [anon_sym_lock_DASHonce] = ACTIONS(539),
    [anon_sym_lock_DASHmultiple] = ACTIONS(539),
    [anon_sym_lock_DASHnever] = ACTIONS(539),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(539),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(539),
    [anon_sym_no_DASHgreeting] = ACTIONS(539),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(539),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(539),
    [anon_sym_require_DASHsecmem] = ACTIONS(539),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(539),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(539),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(539),
    [anon_sym_expert] = ACTIONS(539),
    [anon_sym_no_DASHexpert] = ACTIONS(539),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(539),
    [anon_sym_no_DASHgroups] = ACTIONS(539),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(539),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(539),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(539),
    [anon_sym_armor] = ACTIONS(539),
    [anon_sym_no_DASHarmor] = ACTIONS(539),
    [anon_sym_with_DASHcolons] = ACTIONS(539),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(539),
    [anon_sym_with_DASHfingerprint] = ACTIONS(539),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(539),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(539),
    [anon_sym_with_DASHkeygrip] = ACTIONS(539),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(539),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(539),
    [anon_sym_with_DASHsecret] = ACTIONS(539),
    [anon_sym_textmode] = ACTIONS(539),
    [anon_sym_no_DASHtextmode] = ACTIONS(539),
    [anon_sym_force_DASHocb] = ACTIONS(539),
    [anon_sym_force_DASHaead] = ACTIONS(539),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(539),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(539),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(539),
    [anon_sym_gnupg] = ACTIONS(539),
    [anon_sym_openpgp] = ACTIONS(539),
    [anon_sym_rfc4880] = ACTIONS(541),
    [anon_sym_rfc4880bis] = ACTIONS(539),
    [anon_sym_rfc2440] = ACTIONS(539),
    [anon_sym_pgp7] = ACTIONS(539),
    [anon_sym_pgp8] = ACTIONS(539),
    [anon_sym_list_DASHonly] = ACTIONS(539),
    [anon_sym_interactive] = ACTIONS(539),
    [anon_sym_debug_DASHall] = ACTIONS(541),
    [anon_sym_debug_DASHiolbf] = ACTIONS(539),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(539),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(539),
    [anon_sym_full_DASHtimestrings] = ACTIONS(539),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(539),
    [anon_sym_log_DASHtime] = ACTIONS(539),
    [anon_sym_no_DASHcomments] = ACTIONS(539),
    [anon_sym_emit_DASHversion] = ACTIONS(539),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(539),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(539),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(539),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(539),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(539),
    [anon_sym_throw_DASHkeyids] = ACTIONS(539),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(539),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(539),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(539),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(539),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(539),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(539),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(539),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(539),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(539),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(539),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(539),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(539),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(539),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(539),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(539),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(539),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(539),
    [anon_sym_no_DASHkeyring] = ACTIONS(539),
    [anon_sym_skip_DASHverify] = ACTIONS(539),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(539),
    [anon_sym_list_DASHsignatures] = ACTIONS(539),
    [anon_sym_list_DASHsigs] = ACTIONS(539),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(539),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(539),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(539),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(539),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(539),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(539),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(539),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(539),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(539),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(539),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(539),
    [anon_sym_default_DASHkey] = ACTIONS(541),
    [anon_sym_list_DASHfilter] = ACTIONS(539),
    [anon_sym_list_DASHoptions] = ACTIONS(539),
    [anon_sym_verify_DASHoptions] = ACTIONS(539),
    [anon_sym_photo_DASHviewer] = ACTIONS(539),
    [anon_sym_exec_DASHpath] = ACTIONS(539),
    [anon_sym_keyring] = ACTIONS(539),
    [anon_sym_primary_DASHkeyring] = ACTIONS(539),
    [anon_sym_trustdb_DASHname] = ACTIONS(539),
    [anon_sym_display_DASHcharset] = ACTIONS(539),
    [anon_sym_utf8_DASHstrings] = ACTIONS(539),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(539),
    [anon_sym_compress_DASHlevel] = ACTIONS(539),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(539),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(539),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(539),
    [anon_sym_trusted_DASHkey] = ACTIONS(539),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(539),
    [anon_sym_trust_DASHmodel] = ACTIONS(539),
    [anon_sym_assert_DASHsigner] = ACTIONS(539),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(539),
    [anon_sym_keyid_DASHformat] = ACTIONS(539),
    [anon_sym_keyserver] = ACTIONS(541),
    [anon_sym_keyserver_DASHoptions] = ACTIONS(539),
    [anon_sym_completes_DASHneeded] = ACTIONS(539),
    [anon_sym_marginals_DASHneeded] = ACTIONS(539),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(539),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(539),
    [anon_sym_agent_DASHprogram] = ACTIONS(539),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(539),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(539),
    [anon_sym_recipient] = ACTIONS(541),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(541),
    [anon_sym_recipient_DASHfile] = ACTIONS(539),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(539),
    [anon_sym_encrypt_DASHto] = ACTIONS(539),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(539),
    [anon_sym_group] = ACTIONS(539),
    [anon_sym_ungroup] = ACTIONS(539),
    [anon_sym_local_DASHuser] = ACTIONS(539),
    [anon_sym_sender] = ACTIONS(539),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(539),
    [anon_sym_output] = ACTIONS(539),
    [anon_sym_max_DASHoutput] = ACTIONS(539),
    [anon_sym_chunk_DASHsize] = ACTIONS(539),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(539),
    [anon_sym_key_DASHorigin] = ACTIONS(539),
    [anon_sym_import_DASHoptions] = ACTIONS(539),
    [anon_sym_import_DASHfilter] = ACTIONS(539),
    [anon_sym_export_DASHfilter] = ACTIONS(539),
    [anon_sym_export_DASHoptions] = ACTIONS(539),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(539),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(539),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(539),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(539),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(539),
    [anon_sym_s2k_DASHmode] = ACTIONS(539),
    [anon_sym_s2k_DASHcount] = ACTIONS(539),
    [anon_sym_compliance] = ACTIONS(539),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(539),
    [anon_sym_require_DASHcompliance] = ACTIONS(539),
    [anon_sym_debug_DASHlevel] = ACTIONS(539),
    [anon_sym_debug] = ACTIONS(541),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(539),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(539),
    [anon_sym_status_DASHfd] = ACTIONS(539),
    [anon_sym_status_DASHfile] = ACTIONS(539),
    [anon_sym_logger_DASHfd] = ACTIONS(539),
    [anon_sym_logger_DASHfile] = ACTIONS(539),
    [anon_sym_log_DASHfile] = ACTIONS(539),
    [anon_sym_comment] = ACTIONS(539),
    [anon_sym_sig_DASHnotation] = ACTIONS(539),
    [anon_sym_cert_DASHnotation] = ACTIONS(539),
    [anon_sym_set_DASHnotation] = ACTIONS(539),
    [anon_sym_known_DASHnotation] = ACTIONS(539),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(539),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(539),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(539),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(539),
    [anon_sym_set_DASHfilename] = ACTIONS(539),
    [anon_sym_cipher_DASHalgo] = ACTIONS(539),
    [anon_sym_digest_DASHalgo] = ACTIONS(539),
    [anon_sym_compress_DASHalgo] = ACTIONS(539),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(539),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(539),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(539),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(539),
    [anon_sym_passphrase_DASHfd] = ACTIONS(539),
    [anon_sym_passphrase_DASHfile] = ACTIONS(539),
    [anon_sym_passphrase] = ACTIONS(541),
    [anon_sym_pinentry_DASHmode] = ACTIONS(539),
    [anon_sym_request_DASHorigin] = ACTIONS(539),
    [anon_sym_command_DASHfd] = ACTIONS(539),
    [anon_sym_command_DASHfile] = ACTIONS(539),
    [anon_sym_weak_DASHdigest] = ACTIONS(539),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(541),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(539),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(539),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(539),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(539),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(539),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(539),
    [anon_sym_chuid] = ACTIONS(539),
    [sym_comment] = ACTIONS(539),
    [sym__space] = ACTIONS(539),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(543),
    [aux_sym_config_token1] = ACTIONS(543),
    [anon_sym_default_DASHrecipient] = ACTIONS(545),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(543),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(543),
    [anon_sym_verbose] = ACTIONS(543),
    [anon_sym_no_DASHtty] = ACTIONS(543),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(543),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(543),
    [anon_sym_enable_DASHdsa2] = ACTIONS(543),
    [anon_sym_disable_DASHdsa2] = ACTIONS(543),
    [anon_sym_no_DASHcompress] = ACTIONS(543),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(543),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(543),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(543),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(543),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(543),
    [anon_sym_always_DASHtrust] = ACTIONS(543),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(543),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(543),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(543),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(543),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(543),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(543),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(543),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(543),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(543),
    [anon_sym_no_DASHautostart] = ACTIONS(543),
    [anon_sym_lock_DASHonce] = ACTIONS(543),
    [anon_sym_lock_DASHmultiple] = ACTIONS(543),
    [anon_sym_lock_DASHnever] = ACTIONS(543),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(543),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(543),
    [anon_sym_no_DASHgreeting] = ACTIONS(543),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(543),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(543),
    [anon_sym_require_DASHsecmem] = ACTIONS(543),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(543),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(543),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(543),
    [anon_sym_expert] = ACTIONS(543),
    [anon_sym_no_DASHexpert] = ACTIONS(543),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(543),
    [anon_sym_no_DASHgroups] = ACTIONS(543),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(543),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(543),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(543),
    [anon_sym_armor] = ACTIONS(543),
    [anon_sym_no_DASHarmor] = ACTIONS(543),
    [anon_sym_with_DASHcolons] = ACTIONS(543),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(543),
    [anon_sym_with_DASHfingerprint] = ACTIONS(543),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(543),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(543),
    [anon_sym_with_DASHkeygrip] = ACTIONS(543),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(543),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(543),
    [anon_sym_with_DASHsecret] = ACTIONS(543),
    [anon_sym_textmode] = ACTIONS(543),
    [anon_sym_no_DASHtextmode] = ACTIONS(543),
    [anon_sym_force_DASHocb] = ACTIONS(543),
    [anon_sym_force_DASHaead] = ACTIONS(543),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(543),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(543),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(543),
    [anon_sym_gnupg] = ACTIONS(543),
    [anon_sym_openpgp] = ACTIONS(543),
    [anon_sym_rfc4880] = ACTIONS(545),
    [anon_sym_rfc4880bis] = ACTIONS(543),
    [anon_sym_rfc2440] = ACTIONS(543),
    [anon_sym_pgp7] = ACTIONS(543),
    [anon_sym_pgp8] = ACTIONS(543),
    [anon_sym_list_DASHonly] = ACTIONS(543),
    [anon_sym_interactive] = ACTIONS(543),
    [anon_sym_debug_DASHall] = ACTIONS(545),
    [anon_sym_debug_DASHiolbf] = ACTIONS(543),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(543),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(543),
    [anon_sym_full_DASHtimestrings] = ACTIONS(543),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(543),
    [anon_sym_log_DASHtime] = ACTIONS(543),
    [anon_sym_no_DASHcomments] = ACTIONS(543),
    [anon_sym_emit_DASHversion] = ACTIONS(543),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(543),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(543),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(543),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(543),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(543),
    [anon_sym_throw_DASHkeyids] = ACTIONS(543),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(543),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(543),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(543),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(543),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(543),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(543),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(543),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(543),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(543),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(543),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(543),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(543),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(543),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(543),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(543),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(543),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(543),
    [anon_sym_no_DASHkeyring] = ACTIONS(543),
    [anon_sym_skip_DASHverify] = ACTIONS(543),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(543),
    [anon_sym_list_DASHsignatures] = ACTIONS(543),
    [anon_sym_list_DASHsigs] = ACTIONS(543),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(543),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(543),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(543),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(543),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(543),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(543),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(543),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(543),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(543),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(543),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(543),
    [anon_sym_default_DASHkey] = ACTIONS(545),
    [anon_sym_list_DASHfilter] = ACTIONS(543),
    [anon_sym_list_DASHoptions] = ACTIONS(543),
    [anon_sym_verify_DASHoptions] = ACTIONS(543),
    [anon_sym_photo_DASHviewer] = ACTIONS(543),
    [anon_sym_exec_DASHpath] = ACTIONS(543),
    [anon_sym_keyring] = ACTIONS(543),
    [anon_sym_primary_DASHkeyring] = ACTIONS(543),
    [anon_sym_trustdb_DASHname] = ACTIONS(543),
    [anon_sym_display_DASHcharset] = ACTIONS(543),
    [anon_sym_utf8_DASHstrings] = ACTIONS(543),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(543),
    [anon_sym_compress_DASHlevel] = ACTIONS(543),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(543),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(543),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(543),
    [anon_sym_trusted_DASHkey] = ACTIONS(543),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(543),
    [anon_sym_trust_DASHmodel] = ACTIONS(543),
    [anon_sym_assert_DASHsigner] = ACTIONS(543),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(543),
    [anon_sym_keyid_DASHformat] = ACTIONS(543),
    [anon_sym_keyserver] = ACTIONS(545),
    [anon_sym_keyserver_DASHoptions] = ACTIONS(543),
    [anon_sym_completes_DASHneeded] = ACTIONS(543),
    [anon_sym_marginals_DASHneeded] = ACTIONS(543),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(543),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(543),
    [anon_sym_agent_DASHprogram] = ACTIONS(543),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(543),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(543),
    [anon_sym_recipient] = ACTIONS(545),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(545),
    [anon_sym_recipient_DASHfile] = ACTIONS(543),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(543),
    [anon_sym_encrypt_DASHto] = ACTIONS(543),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(543),
    [anon_sym_group] = ACTIONS(543),
    [anon_sym_ungroup] = ACTIONS(543),
    [anon_sym_local_DASHuser] = ACTIONS(543),
    [anon_sym_sender] = ACTIONS(543),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(543),
    [anon_sym_output] = ACTIONS(543),
    [anon_sym_max_DASHoutput] = ACTIONS(543),
    [anon_sym_chunk_DASHsize] = ACTIONS(543),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(543),
    [anon_sym_key_DASHorigin] = ACTIONS(543),
    [anon_sym_import_DASHoptions] = ACTIONS(543),
    [anon_sym_import_DASHfilter] = ACTIONS(543),
    [anon_sym_export_DASHfilter] = ACTIONS(543),
    [anon_sym_export_DASHoptions] = ACTIONS(543),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(543),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(543),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(543),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(543),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(543),
    [anon_sym_s2k_DASHmode] = ACTIONS(543),
    [anon_sym_s2k_DASHcount] = ACTIONS(543),
    [anon_sym_compliance] = ACTIONS(543),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(543),
    [anon_sym_require_DASHcompliance] = ACTIONS(543),
    [anon_sym_debug_DASHlevel] = ACTIONS(543),
    [anon_sym_debug] = ACTIONS(545),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(543),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(543),
    [anon_sym_status_DASHfd] = ACTIONS(543),
    [anon_sym_status_DASHfile] = ACTIONS(543),
    [anon_sym_logger_DASHfd] = ACTIONS(543),
    [anon_sym_logger_DASHfile] = ACTIONS(543),
    [anon_sym_log_DASHfile] = ACTIONS(543),
    [anon_sym_comment] = ACTIONS(543),
    [anon_sym_sig_DASHnotation] = ACTIONS(543),
    [anon_sym_cert_DASHnotation] = ACTIONS(543),
    [anon_sym_set_DASHnotation] = ACTIONS(543),
    [anon_sym_known_DASHnotation] = ACTIONS(543),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(543),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(543),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(543),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(543),
    [anon_sym_set_DASHfilename] = ACTIONS(543),
    [anon_sym_cipher_DASHalgo] = ACTIONS(543),
    [anon_sym_digest_DASHalgo] = ACTIONS(543),
    [anon_sym_compress_DASHalgo] = ACTIONS(543),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(543),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(543),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(543),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(543),
    [anon_sym_passphrase_DASHfd] = ACTIONS(543),
    [anon_sym_passphrase_DASHfile] = ACTIONS(543),
    [anon_sym_passphrase] = ACTIONS(545),
    [anon_sym_pinentry_DASHmode] = ACTIONS(543),
    [anon_sym_request_DASHorigin] = ACTIONS(543),
    [anon_sym_command_DASHfd] = ACTIONS(543),
    [anon_sym_command_DASHfile] = ACTIONS(543),
    [anon_sym_weak_DASHdigest] = ACTIONS(543),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(545),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(543),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(543),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(543),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(543),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(543),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(543),
    [anon_sym_chuid] = ACTIONS(543),
    [sym_comment] = ACTIONS(543),
    [sym__space] = ACTIONS(543),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(551), 1,
      aux_sym_filter_value_token1,
    STATE(11), 1,
      aux_sym_filter_value_repeat1,
    ACTIONS(549), 2,
      sym_filter_property,
      sym__space,
    ACTIONS(547), 4,
      anon_sym_DQUOTE,
      sym_filter_scope,
      sym_filter_lc,
      sym_filter_flag,
  [17] = 8,
    ACTIONS(553), 1,
      sym_filter_scope,
    ACTIONS(555), 1,
      sym_filter_property,
    ACTIONS(557), 1,
      sym_filter_lc,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(561), 1,
      sym__space,
    STATE(33), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(157), 1,
      aux_sym__filter_expression_inner_repeat1,
    STATE(492), 1,
      sym__filter_expression_inner,
  [42] = 8,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(563), 1,
      sym_filter_scope,
    ACTIONS(565), 1,
      sym_filter_property,
    ACTIONS(567), 1,
      sym_filter_lc,
    ACTIONS(569), 1,
      sym__space,
    STATE(19), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(185), 1,
      aux_sym__filter_expression_inner_repeat1,
    STATE(489), 1,
      sym__filter_expression_inner,
  [67] = 4,
    ACTIONS(575), 1,
      aux_sym_filter_value_token1,
    STATE(11), 1,
      aux_sym_filter_value_repeat1,
    ACTIONS(573), 2,
      sym_filter_property,
      sym__space,
    ACTIONS(571), 4,
      anon_sym_DQUOTE,
      sym_filter_scope,
      sym_filter_lc,
      sym_filter_flag,
  [84] = 4,
    ACTIONS(578), 1,
      aux_sym_filter_value_token1,
    STATE(13), 1,
      aux_sym_filter_value_repeat1,
    ACTIONS(549), 2,
      sym_filter_property,
      sym__space,
    ACTIONS(547), 4,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_lc,
      sym_filter_flag,
  [101] = 4,
    ACTIONS(580), 1,
      aux_sym_filter_value_token1,
    STATE(13), 1,
      aux_sym_filter_value_repeat1,
    ACTIONS(573), 2,
      sym_filter_property,
      sym__space,
    ACTIONS(571), 4,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_lc,
      sym_filter_flag,
  [118] = 7,
    ACTIONS(583), 1,
      anon_sym_DQUOTE,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      aux_sym__command_token1,
    ACTIONS(589), 1,
      aux_sym__command_format_token1,
    STATE(49), 1,
      aux_sym__command_repeat1,
    STATE(137), 1,
      sym__command_format,
    STATE(300), 1,
      sym__command,
  [140] = 7,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(563), 1,
      sym_filter_scope,
    ACTIONS(565), 1,
      sym_filter_property,
    ACTIONS(591), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      sym__space,
    STATE(16), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(185), 1,
      aux_sym__filter_expression_inner_repeat1,
  [162] = 7,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      sym_filter_scope,
    ACTIONS(600), 1,
      sym_filter_property,
    ACTIONS(603), 1,
      sym_filter_flag,
    ACTIONS(606), 1,
      sym__space,
    STATE(16), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(185), 1,
      aux_sym__filter_expression_inner_repeat1,
  [184] = 4,
    ACTIONS(611), 1,
      sym_filter_property,
    ACTIONS(613), 1,
      sym_filter_lc,
    ACTIONS(615), 1,
      sym__space,
    ACTIONS(609), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [200] = 4,
    ACTIONS(618), 1,
      sym_filter_property,
    ACTIONS(620), 1,
      sym_filter_lc,
    ACTIONS(622), 1,
      sym__space,
    ACTIONS(595), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [216] = 7,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(563), 1,
      sym_filter_scope,
    ACTIONS(565), 1,
      sym_filter_property,
    ACTIONS(593), 1,
      sym__space,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(185), 1,
      aux_sym__filter_expression_inner_repeat1,
  [238] = 7,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(563), 1,
      sym_filter_scope,
    ACTIONS(565), 1,
      sym_filter_property,
    ACTIONS(593), 1,
      sym__space,
    ACTIONS(627), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(185), 1,
      aux_sym__filter_expression_inner_repeat1,
  [260] = 4,
    ACTIONS(631), 1,
      sym_filter_property,
    ACTIONS(633), 1,
      sym_filter_lc,
    ACTIONS(635), 1,
      sym__space,
    ACTIONS(629), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [276] = 3,
    ACTIONS(611), 1,
      sym_filter_property,
    ACTIONS(613), 1,
      sym_filter_lc,
    ACTIONS(609), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [290] = 3,
    ACTIONS(631), 1,
      sym_filter_property,
    ACTIONS(633), 1,
      sym_filter_lc,
    ACTIONS(629), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [304] = 4,
    ACTIONS(640), 1,
      sym_filter_property,
    ACTIONS(642), 1,
      sym_filter_lc,
    ACTIONS(644), 1,
      sym__space,
    ACTIONS(638), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [320] = 3,
    ACTIONS(640), 1,
      sym_filter_property,
    ACTIONS(642), 1,
      sym_filter_lc,
    ACTIONS(638), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [334] = 3,
    ACTIONS(649), 1,
      sym_filter_property,
    ACTIONS(651), 1,
      sym_filter_lc,
    ACTIONS(647), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [348] = 4,
    ACTIONS(649), 1,
      sym_filter_property,
    ACTIONS(651), 1,
      sym_filter_lc,
    ACTIONS(653), 1,
      sym__space,
    ACTIONS(647), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [364] = 3,
    ACTIONS(658), 1,
      sym_filter_property,
    ACTIONS(660), 1,
      sym_filter_lc,
    ACTIONS(656), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [378] = 3,
    ACTIONS(664), 1,
      sym_filter_property,
    ACTIONS(666), 1,
      sym_filter_lc,
    ACTIONS(662), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [392] = 3,
    ACTIONS(670), 1,
      sym_filter_property,
    ACTIONS(672), 1,
      sym_filter_lc,
    ACTIONS(668), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [406] = 4,
    ACTIONS(658), 1,
      sym_filter_property,
    ACTIONS(660), 1,
      sym_filter_lc,
    ACTIONS(674), 1,
      sym__space,
    ACTIONS(656), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [422] = 4,
    ACTIONS(664), 1,
      sym_filter_property,
    ACTIONS(666), 1,
      sym_filter_lc,
    ACTIONS(677), 1,
      sym__space,
    ACTIONS(662), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [438] = 7,
    ACTIONS(553), 1,
      sym_filter_scope,
    ACTIONS(555), 1,
      sym_filter_property,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(625), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      sym__space,
    STATE(35), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(157), 1,
      aux_sym__filter_expression_inner_repeat1,
  [460] = 7,
    ACTIONS(553), 1,
      sym_filter_scope,
    ACTIONS(555), 1,
      sym_filter_property,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(591), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      sym__space,
    STATE(35), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(157), 1,
      aux_sym__filter_expression_inner_repeat1,
  [482] = 7,
    ACTIONS(595), 1,
      anon_sym_SQUOTE,
    ACTIONS(603), 1,
      sym_filter_flag,
    ACTIONS(682), 1,
      sym_filter_scope,
    ACTIONS(685), 1,
      sym_filter_property,
    ACTIONS(688), 1,
      sym__space,
    STATE(35), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(157), 1,
      aux_sym__filter_expression_inner_repeat1,
  [504] = 7,
    ACTIONS(553), 1,
      sym_filter_scope,
    ACTIONS(555), 1,
      sym_filter_property,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(627), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      sym__space,
    STATE(35), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(157), 1,
      aux_sym__filter_expression_inner_repeat1,
  [526] = 5,
    ACTIONS(691), 1,
      anon_sym_SQUOTE,
    ACTIONS(696), 1,
      aux_sym__command_token3,
    STATE(37), 1,
      aux_sym__command_repeat3,
    STATE(148), 1,
      sym__command_format,
    ACTIONS(693), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [543] = 5,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(701), 1,
      aux_sym__command_token2,
    STATE(45), 1,
      aux_sym__command_repeat2,
    STATE(147), 1,
      sym__command_format,
    ACTIONS(703), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [560] = 5,
    ACTIONS(699), 1,
      anon_sym_SQUOTE,
    ACTIONS(707), 1,
      aux_sym__command_token3,
    STATE(37), 1,
      aux_sym__command_repeat3,
    STATE(148), 1,
      sym__command_format,
    ACTIONS(705), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [577] = 5,
    ACTIONS(711), 1,
      aux_sym__command_token1,
    ACTIONS(714), 1,
      aux_sym__command_format_token1,
    STATE(40), 1,
      aux_sym__command_repeat1,
    STATE(137), 1,
      sym__command_format,
    ACTIONS(709), 2,
      aux_sym_config_token1,
      sym__space,
  [594] = 5,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    STATE(65), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
    ACTIONS(717), 2,
      aux_sym_config_token1,
      sym__space,
  [611] = 5,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    STATE(65), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
    ACTIONS(723), 2,
      aux_sym_config_token1,
      sym__space,
  [628] = 5,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    STATE(65), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
    ACTIONS(725), 2,
      aux_sym_config_token1,
      sym__space,
  [645] = 5,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    STATE(65), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
    ACTIONS(727), 2,
      aux_sym_config_token1,
      sym__space,
  [662] = 5,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
    ACTIONS(731), 1,
      aux_sym__command_token2,
    STATE(45), 1,
      aux_sym__command_repeat2,
    STATE(147), 1,
      sym__command_format,
    ACTIONS(734), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [679] = 6,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(563), 1,
      sym_filter_scope,
    ACTIONS(565), 1,
      sym_filter_property,
    ACTIONS(593), 1,
      sym__space,
    STATE(15), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(185), 1,
      aux_sym__filter_expression_inner_repeat1,
  [698] = 6,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(563), 1,
      sym_filter_scope,
    ACTIONS(565), 1,
      sym_filter_property,
    ACTIONS(593), 1,
      sym__space,
    STATE(20), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(185), 1,
      aux_sym__filter_expression_inner_repeat1,
  [717] = 3,
    ACTIONS(611), 1,
      sym_filter_property,
    ACTIONS(737), 1,
      sym__space,
    ACTIONS(609), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [730] = 5,
    ACTIONS(587), 1,
      aux_sym__command_token1,
    ACTIONS(589), 1,
      aux_sym__command_format_token1,
    STATE(40), 1,
      aux_sym__command_repeat1,
    STATE(137), 1,
      sym__command_format,
    ACTIONS(740), 2,
      aux_sym_config_token1,
      sym__space,
  [747] = 3,
    ACTIONS(631), 1,
      sym_filter_property,
    ACTIONS(742), 1,
      sym__space,
    ACTIONS(629), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [760] = 2,
    ACTIONS(631), 1,
      sym_filter_property,
    ACTIONS(629), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [771] = 3,
    ACTIONS(640), 1,
      sym_filter_property,
    ACTIONS(745), 1,
      sym__space,
    ACTIONS(638), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [784] = 5,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    STATE(65), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
    ACTIONS(748), 2,
      aux_sym_config_token1,
      sym__space,
  [801] = 3,
    ACTIONS(664), 1,
      sym_filter_property,
    ACTIONS(750), 1,
      sym__space,
    ACTIONS(662), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [814] = 2,
    ACTIONS(664), 1,
      sym_filter_property,
    ACTIONS(662), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [825] = 2,
    ACTIONS(649), 1,
      sym_filter_property,
    ACTIONS(647), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [836] = 3,
    ACTIONS(649), 1,
      sym_filter_property,
    ACTIONS(753), 1,
      sym__space,
    ACTIONS(647), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [849] = 2,
    ACTIONS(658), 1,
      sym_filter_property,
    ACTIONS(656), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [860] = 3,
    ACTIONS(658), 1,
      sym_filter_property,
    ACTIONS(756), 1,
      sym__space,
    ACTIONS(656), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [873] = 2,
    ACTIONS(670), 1,
      sym_filter_property,
    ACTIONS(668), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [884] = 3,
    ACTIONS(670), 1,
      sym_filter_property,
    ACTIONS(759), 1,
      sym__space,
    ACTIONS(668), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [897] = 2,
    ACTIONS(764), 1,
      sym_filter_property,
    ACTIONS(762), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [908] = 3,
    ACTIONS(764), 1,
      sym_filter_property,
    ACTIONS(766), 1,
      sym__space,
    ACTIONS(762), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [921] = 2,
    ACTIONS(771), 1,
      sym_filter_property,
    ACTIONS(769), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [932] = 5,
    ACTIONS(775), 1,
      aux_sym__notation_token1,
    ACTIONS(778), 1,
      aux_sym__notation_format_token1,
    STATE(65), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
    ACTIONS(773), 2,
      aux_sym_config_token1,
      sym__space,
  [949] = 5,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    STATE(65), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
    ACTIONS(781), 2,
      aux_sym_config_token1,
      sym__space,
  [966] = 6,
    ACTIONS(553), 1,
      sym_filter_scope,
    ACTIONS(555), 1,
      sym_filter_property,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(680), 1,
      sym__space,
    STATE(34), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(157), 1,
      aux_sym__filter_expression_inner_repeat1,
  [985] = 5,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    STATE(65), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
    ACTIONS(783), 2,
      aux_sym_config_token1,
      sym__space,
  [1002] = 5,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    STATE(65), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
    ACTIONS(785), 2,
      aux_sym_config_token1,
      sym__space,
  [1019] = 6,
    ACTIONS(553), 1,
      sym_filter_scope,
    ACTIONS(555), 1,
      sym_filter_property,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(680), 1,
      sym__space,
    STATE(36), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(157), 1,
      aux_sym__filter_expression_inner_repeat1,
  [1038] = 2,
    ACTIONS(640), 1,
      sym_filter_property,
    ACTIONS(638), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [1049] = 5,
    ACTIONS(787), 1,
      aux_sym_config_token1,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      sym__space,
    STATE(151), 1,
      aux_sym__auto_key_locate_repeat1,
    STATE(214), 1,
      aux_sym__auto_key_locate_repeat2,
  [1065] = 5,
    ACTIONS(793), 1,
      aux_sym_config_token1,
    ACTIONS(795), 1,
      anon_sym_COMMA,
    ACTIONS(797), 1,
      sym__space,
    STATE(166), 1,
      aux_sym__default_preference_list_repeat1,
    STATE(226), 1,
      aux_sym__default_preference_list_repeat2,
  [1081] = 5,
    ACTIONS(799), 1,
      aux_sym_config_token1,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      sym__space,
    STATE(154), 1,
      aux_sym__keyserver_options_repeat1,
    STATE(215), 1,
      aux_sym__keyserver_options_repeat2,
  [1097] = 3,
    ACTIONS(805), 1,
      sym__pubkey_algo_value,
    STATE(251), 1,
      sym__default_preference_value,
    ACTIONS(807), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [1109] = 5,
    ACTIONS(809), 1,
      aux_sym_config_token1,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    ACTIONS(813), 1,
      sym__space,
    STATE(156), 1,
      aux_sym__import_options_repeat1,
    STATE(216), 1,
      aux_sym__import_options_repeat2,
  [1125] = 3,
    ACTIONS(805), 1,
      sym__pubkey_algo_value,
    STATE(340), 1,
      sym__default_preference_value,
    ACTIONS(807), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [1137] = 5,
    ACTIONS(815), 1,
      aux_sym_config_token1,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      sym__space,
    STATE(202), 1,
      aux_sym__export_options_repeat1,
    STATE(219), 1,
      aux_sym__export_options_repeat2,
  [1153] = 5,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    ACTIONS(821), 1,
      anon_sym_BANG,
    STATE(66), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [1169] = 5,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    ACTIONS(823), 1,
      anon_sym_BANG,
    STATE(68), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [1185] = 5,
    ACTIONS(825), 1,
      aux_sym_config_token1,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    ACTIONS(829), 1,
      sym__space,
    STATE(158), 1,
      aux_sym__personal_cipher_preferences_repeat1,
    STATE(220), 1,
      aux_sym__personal_cipher_preferences_repeat2,
  [1201] = 5,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    ACTIONS(831), 1,
      anon_sym_BANG,
    STATE(69), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [1217] = 5,
    ACTIONS(833), 1,
      aux_sym_config_token1,
    ACTIONS(835), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      sym__space,
    STATE(159), 1,
      aux_sym__personal_digest_preferences_repeat1,
    STATE(221), 1,
      aux_sym__personal_digest_preferences_repeat2,
  [1233] = 5,
    ACTIONS(839), 1,
      anon_sym_EQ,
    ACTIONS(841), 1,
      aux_sym__notation_token1,
    ACTIONS(843), 1,
      aux_sym__notation_format_token1,
    STATE(105), 1,
      aux_sym__notation,
    STATE(239), 1,
      sym__notation_format,
  [1249] = 5,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    ACTIONS(845), 1,
      anon_sym_BANG,
    STATE(53), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [1265] = 5,
    ACTIONS(847), 1,
      aux_sym_config_token1,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    ACTIONS(851), 1,
      sym__space,
    STATE(160), 1,
      aux_sym__personal_compress_preferences_repeat1,
    STATE(222), 1,
      aux_sym__personal_compress_preferences_repeat2,
  [1281] = 5,
    ACTIONS(853), 1,
      aux_sym_config_token1,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    ACTIONS(857), 1,
      sym__space,
    STATE(161), 1,
      aux_sym__debug_repeat1,
    STATE(223), 1,
      aux_sym__debug_repeat2,
  [1297] = 5,
    ACTIONS(841), 1,
      aux_sym__notation_token1,
    ACTIONS(843), 1,
      aux_sym__notation_format_token1,
    ACTIONS(859), 1,
      anon_sym_BANG,
    STATE(99), 1,
      aux_sym__notation,
    STATE(239), 1,
      sym__notation_format,
  [1313] = 5,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(861), 1,
      sym_filter_scope,
    ACTIONS(863), 1,
      sym_filter_property,
    ACTIONS(865), 1,
      sym_filter_lc,
    STATE(188), 1,
      aux_sym__filter_expression_inner_repeat1,
  [1329] = 5,
    ACTIONS(841), 1,
      aux_sym__notation_token1,
    ACTIONS(843), 1,
      aux_sym__notation_format_token1,
    ACTIONS(867), 1,
      anon_sym_EQ,
    STATE(105), 1,
      aux_sym__notation,
    STATE(239), 1,
      sym__notation_format,
  [1345] = 5,
    ACTIONS(841), 1,
      aux_sym__notation_token1,
    ACTIONS(843), 1,
      aux_sym__notation_format_token1,
    ACTIONS(869), 1,
      anon_sym_EQ,
    STATE(105), 1,
      aux_sym__notation,
    STATE(239), 1,
      sym__notation_format,
  [1361] = 3,
    ACTIONS(805), 1,
      sym__pubkey_algo_value,
    STATE(73), 1,
      sym__default_preference_value,
    ACTIONS(807), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [1373] = 5,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(875), 1,
      sym_number,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(291), 1,
      sym_string,
  [1389] = 5,
    ACTIONS(841), 1,
      aux_sym__notation_token1,
    ACTIONS(843), 1,
      aux_sym__notation_format_token1,
    ACTIONS(879), 1,
      anon_sym_BANG,
    STATE(91), 1,
      aux_sym__notation,
    STATE(239), 1,
      sym__notation_format,
  [1405] = 3,
    ACTIONS(881), 1,
      anon_sym_no_DASH,
    STATE(74), 1,
      sym__keyserver_set_option,
    ACTIONS(883), 3,
      sym__keyserver_parameter,
      sym__import_parameter,
      sym__export_parameter,
  [1417] = 3,
    ACTIONS(881), 1,
      anon_sym_no_DASH,
    STATE(235), 1,
      sym__keyserver_set_option,
    ACTIONS(883), 3,
      sym__keyserver_parameter,
      sym__import_parameter,
      sym__export_parameter,
  [1429] = 5,
    ACTIONS(841), 1,
      aux_sym__notation_token1,
    ACTIONS(843), 1,
      aux_sym__notation_format_token1,
    ACTIONS(885), 1,
      anon_sym_BANG,
    STATE(90), 1,
      aux_sym__notation,
    STATE(239), 1,
      sym__notation_format,
  [1445] = 5,
    ACTIONS(887), 1,
      aux_sym_config_token1,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    ACTIONS(891), 1,
      sym__space,
    STATE(145), 1,
      aux_sym__list_options_repeat1,
    STATE(208), 1,
      aux_sym__list_options_repeat2,
  [1461] = 5,
    ACTIONS(841), 1,
      aux_sym__notation_token1,
    ACTIONS(843), 1,
      aux_sym__notation_format_token1,
    ACTIONS(893), 1,
      anon_sym_EQ,
    STATE(105), 1,
      aux_sym__notation,
    STATE(239), 1,
      sym__notation_format,
  [1477] = 5,
    ACTIONS(895), 1,
      aux_sym_config_token1,
    ACTIONS(897), 1,
      anon_sym_COMMA,
    ACTIONS(899), 1,
      sym__space,
    STATE(146), 1,
      aux_sym__verify_options_repeat1,
    STATE(210), 1,
      aux_sym__verify_options_repeat2,
  [1493] = 3,
    ACTIONS(881), 1,
      anon_sym_no_DASH,
    STATE(298), 1,
      sym__keyserver_set_option,
    ACTIONS(883), 3,
      sym__keyserver_parameter,
      sym__import_parameter,
      sym__export_parameter,
  [1505] = 4,
    ACTIONS(701), 1,
      aux_sym__command_token2,
    STATE(38), 1,
      aux_sym__command_repeat2,
    STATE(147), 1,
      sym__command_format,
    ACTIONS(703), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [1519] = 4,
    ACTIONS(707), 1,
      aux_sym__command_token3,
    STATE(39), 1,
      aux_sym__command_repeat3,
    STATE(148), 1,
      sym__command_format,
    ACTIONS(705), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [1533] = 5,
    ACTIONS(841), 1,
      aux_sym__notation_token1,
    ACTIONS(843), 1,
      aux_sym__notation_format_token1,
    ACTIONS(901), 1,
      anon_sym_EQ,
    STATE(105), 1,
      aux_sym__notation,
    STATE(239), 1,
      sym__notation_format,
  [1549] = 5,
    ACTIONS(773), 1,
      anon_sym_EQ,
    ACTIONS(903), 1,
      aux_sym__notation_token1,
    ACTIONS(906), 1,
      aux_sym__notation_format_token1,
    STATE(105), 1,
      aux_sym__notation,
    STATE(239), 1,
      sym__notation_format,
  [1565] = 5,
    ACTIONS(909), 1,
      aux_sym_config_token1,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    ACTIONS(913), 1,
      sym__space,
    STATE(165), 1,
      aux_sym__default_new_key_algo_repeat1,
    STATE(225), 1,
      aux_sym__default_new_key_algo_repeat2,
  [1581] = 5,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(915), 1,
      sym_filter_scope,
    ACTIONS(917), 1,
      sym_filter_property,
    ACTIONS(919), 1,
      sym_filter_lc,
    STATE(201), 1,
      aux_sym__filter_expression_inner_repeat1,
  [1597] = 5,
    ACTIONS(841), 1,
      aux_sym__notation_token1,
    ACTIONS(843), 1,
      aux_sym__notation_format_token1,
    ACTIONS(921), 1,
      anon_sym_EQ,
    STATE(105), 1,
      aux_sym__notation,
    STATE(239), 1,
      sym__notation_format,
  [1613] = 4,
    ACTIONS(841), 1,
      aux_sym__notation_token1,
    ACTIONS(843), 1,
      aux_sym__notation_format_token1,
    STATE(108), 1,
      aux_sym__notation,
    STATE(239), 1,
      sym__notation_format,
  [1626] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(309), 1,
      sym_string,
  [1639] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(313), 1,
      sym_string,
  [1652] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(317), 1,
      sym_string,
  [1665] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(325), 1,
      sym_string,
  [1678] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(372), 1,
      sym_string,
  [1691] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(289), 1,
      sym_string,
  [1704] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(290), 1,
      sym_string,
  [1717] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(295), 1,
      sym_string,
  [1730] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(299), 1,
      sym_string,
  [1743] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(305), 1,
      sym_string,
  [1756] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(275), 1,
      sym_string,
  [1769] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(315), 1,
      sym_string,
  [1782] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(319), 1,
      sym_string,
  [1795] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(323), 1,
      sym_string,
  [1808] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(327), 1,
      sym_string,
  [1821] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(329), 1,
      sym_string,
  [1834] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(331), 1,
      sym_string,
  [1847] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(333), 1,
      sym_string,
  [1860] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(381), 1,
      sym_string,
  [1873] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(392), 1,
      sym_string,
  [1886] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(395), 1,
      sym_string,
  [1899] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(286), 1,
      sym_string,
  [1912] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(303), 1,
      sym_string,
  [1925] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(360), 1,
      sym_string,
  [1938] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(365), 1,
      sym_string,
  [1951] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(386), 1,
      sym_string,
  [1964] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(277), 1,
      sym_string,
  [1977] = 2,
    ACTIONS(925), 1,
      aux_sym__command_token1,
    ACTIONS(923), 3,
      aux_sym_config_token1,
      aux_sym__command_format_token1,
      sym__space,
  [1986] = 2,
    ACTIONS(929), 1,
      anon_sym_EQ,
    ACTIONS(927), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [1995] = 4,
    ACTIONS(841), 1,
      aux_sym__notation_token1,
    ACTIONS(843), 1,
      aux_sym__notation_format_token1,
    STATE(104), 1,
      aux_sym__notation,
    STATE(239), 1,
      sym__notation_format,
  [2008] = 4,
    ACTIONS(841), 1,
      aux_sym__notation_token1,
    ACTIONS(843), 1,
      aux_sym__notation_format_token1,
    STATE(84), 1,
      aux_sym__notation,
    STATE(239), 1,
      sym__notation_format,
  [2021] = 4,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    STATE(41), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [2034] = 4,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    STATE(42), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [2047] = 4,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    STATE(43), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [2060] = 4,
    ACTIONS(719), 1,
      aux_sym__notation_token1,
    ACTIONS(721), 1,
      aux_sym__notation_format_token1,
    STATE(44), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [2073] = 3,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym__list_options_repeat1,
    ACTIONS(931), 2,
      aux_sym_config_token1,
      sym__space,
  [2084] = 3,
    ACTIONS(897), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym__verify_options_repeat1,
    ACTIONS(933), 2,
      aux_sym_config_token1,
      sym__space,
  [2095] = 2,
    ACTIONS(937), 1,
      aux_sym__command_token2,
    ACTIONS(935), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [2104] = 2,
    ACTIONS(941), 1,
      aux_sym__command_token3,
    ACTIONS(939), 3,
      anon_sym_SQUOTE,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [2113] = 4,
    ACTIONS(943), 1,
      anon_sym_DQUOTE,
    ACTIONS(945), 1,
      aux_sym__command_token2,
    ACTIONS(947), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(169), 1,
      aux_sym_string_repeat1,
  [2126] = 4,
    ACTIONS(943), 1,
      anon_sym_SQUOTE,
    ACTIONS(949), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(951), 1,
      aux_sym__command_token3,
    STATE(170), 1,
      aux_sym_string_repeat2,
  [2139] = 3,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym__auto_key_locate_repeat1,
    ACTIONS(953), 2,
      aux_sym_config_token1,
      sym__space,
  [2150] = 2,
    ACTIONS(957), 1,
      anon_sym_EQ,
    ACTIONS(955), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [2159] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(234), 1,
      sym_string,
  [2172] = 3,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym__keyserver_options_repeat1,
    ACTIONS(959), 2,
      aux_sym_config_token1,
      sym__space,
  [2183] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(301), 1,
      sym_string,
  [2196] = 3,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__import_options_repeat1,
    ACTIONS(961), 2,
      aux_sym_config_token1,
      sym__space,
  [2207] = 4,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(915), 1,
      sym_filter_scope,
    ACTIONS(917), 1,
      sym_filter_property,
    STATE(189), 1,
      aux_sym__filter_expression_inner_repeat1,
  [2220] = 3,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym__personal_cipher_preferences_repeat1,
    ACTIONS(963), 2,
      aux_sym_config_token1,
      sym__space,
  [2231] = 3,
    ACTIONS(835), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym__personal_digest_preferences_repeat1,
    ACTIONS(965), 2,
      aux_sym_config_token1,
      sym__space,
  [2242] = 3,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__personal_compress_preferences_repeat1,
    ACTIONS(967), 2,
      aux_sym_config_token1,
      sym__space,
  [2253] = 3,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym__debug_repeat1,
    ACTIONS(969), 2,
      aux_sym_config_token1,
      sym__space,
  [2264] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(330), 1,
      sym_string,
  [2277] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(332), 1,
      sym_string,
  [2290] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(334), 1,
      sym_string,
  [2303] = 3,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym__default_new_key_algo_repeat1,
    ACTIONS(971), 2,
      aux_sym_config_token1,
      sym__space,
  [2314] = 3,
    ACTIONS(795), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym__default_preference_list_repeat1,
    ACTIONS(973), 2,
      aux_sym_config_token1,
      sym__space,
  [2325] = 3,
    ACTIONS(977), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym__list_options_repeat1,
    ACTIONS(975), 2,
      aux_sym_config_token1,
      sym__space,
  [2336] = 3,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym__verify_options_repeat1,
    ACTIONS(980), 2,
      aux_sym_config_token1,
      sym__space,
  [2347] = 4,
    ACTIONS(985), 1,
      anon_sym_DQUOTE,
    ACTIONS(987), 1,
      aux_sym__command_token2,
    ACTIONS(990), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(169), 1,
      aux_sym_string_repeat1,
  [2360] = 4,
    ACTIONS(993), 1,
      anon_sym_SQUOTE,
    ACTIONS(995), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(998), 1,
      aux_sym__command_token3,
    STATE(170), 1,
      aux_sym_string_repeat2,
  [2373] = 3,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym__auto_key_locate_repeat1,
    ACTIONS(1001), 2,
      aux_sym_config_token1,
      sym__space,
  [2384] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(254), 1,
      sym_string,
  [2397] = 3,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym__keyserver_options_repeat1,
    ACTIONS(1006), 2,
      aux_sym_config_token1,
      sym__space,
  [2408] = 3,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__import_options_repeat1,
    ACTIONS(1011), 2,
      aux_sym_config_token1,
      sym__space,
  [2419] = 3,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym__export_options_repeat1,
    ACTIONS(1016), 2,
      aux_sym_config_token1,
      sym__space,
  [2430] = 3,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym__personal_cipher_preferences_repeat1,
    ACTIONS(1021), 2,
      aux_sym_config_token1,
      sym__space,
  [2441] = 3,
    ACTIONS(1028), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym__personal_digest_preferences_repeat1,
    ACTIONS(1026), 2,
      aux_sym_config_token1,
      sym__space,
  [2452] = 3,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__personal_compress_preferences_repeat1,
    ACTIONS(1031), 2,
      aux_sym_config_token1,
      sym__space,
  [2463] = 3,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym__debug_repeat1,
    ACTIONS(1036), 2,
      aux_sym_config_token1,
      sym__space,
  [2474] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(346), 1,
      sym_string,
  [2487] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(347), 1,
      sym_string,
  [2500] = 4,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      aux_sym_string_token1,
    STATE(348), 1,
      sym_string,
  [2513] = 3,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym__default_new_key_algo_repeat1,
    ACTIONS(1041), 2,
      aux_sym_config_token1,
      sym__space,
  [2524] = 3,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym__default_preference_list_repeat1,
    ACTIONS(1046), 2,
      aux_sym_config_token1,
      sym__space,
  [2535] = 4,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(861), 1,
      sym_filter_scope,
    ACTIONS(863), 1,
      sym_filter_property,
    STATE(189), 1,
      aux_sym__filter_expression_inner_repeat1,
  [2548] = 4,
    ACTIONS(1051), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1053), 1,
      sym__space,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(17), 1,
      sym_filter_value,
  [2561] = 4,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(861), 1,
      sym_filter_scope,
    ACTIONS(863), 1,
      sym_filter_property,
    STATE(188), 1,
      aux_sym__filter_expression_inner_repeat1,
  [2574] = 4,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(1055), 1,
      sym_filter_scope,
    ACTIONS(1057), 1,
      sym_filter_property,
    STATE(189), 1,
      aux_sym__filter_expression_inner_repeat1,
  [2587] = 4,
    ACTIONS(1059), 1,
      sym_filter_scope,
    ACTIONS(1061), 1,
      sym_filter_property,
    ACTIONS(1063), 1,
      sym_filter_flag,
    STATE(189), 1,
      aux_sym__filter_expression_inner_repeat1,
  [2600] = 4,
    ACTIONS(1051), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1066), 1,
      sym__space,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(21), 1,
      sym_filter_value,
  [2613] = 4,
    ACTIONS(1051), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1068), 1,
      sym__space,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(24), 1,
      sym_filter_value,
  [2626] = 4,
    ACTIONS(1051), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1070), 1,
      sym__space,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(32), 1,
      sym_filter_value,
  [2639] = 4,
    ACTIONS(1051), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1072), 1,
      sym__space,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(27), 1,
      sym_filter_value,
  [2652] = 2,
    ACTIONS(1076), 1,
      aux_sym__notation_token1,
    ACTIONS(1074), 3,
      aux_sym_config_token1,
      aux_sym__notation_format_token1,
      sym__space,
  [2661] = 4,
    ACTIONS(1078), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1080), 1,
      sym__space,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(24), 1,
      sym_filter_value,
  [2674] = 4,
    ACTIONS(1078), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1082), 1,
      sym__space,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(32), 1,
      sym_filter_value,
  [2687] = 4,
    ACTIONS(1078), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1084), 1,
      sym__space,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(27), 1,
      sym_filter_value,
  [2700] = 4,
    ACTIONS(1078), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1086), 1,
      sym__space,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(17), 1,
      sym_filter_value,
  [2713] = 4,
    ACTIONS(1078), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1088), 1,
      sym__space,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(21), 1,
      sym_filter_value,
  [2726] = 4,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(915), 1,
      sym_filter_scope,
    ACTIONS(917), 1,
      sym_filter_property,
    STATE(201), 1,
      aux_sym__filter_expression_inner_repeat1,
  [2739] = 4,
    ACTIONS(559), 1,
      sym_filter_flag,
    ACTIONS(1090), 1,
      sym_filter_scope,
    ACTIONS(1092), 1,
      sym_filter_property,
    STATE(189), 1,
      aux_sym__filter_expression_inner_repeat1,
  [2752] = 3,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym__export_options_repeat1,
    ACTIONS(1094), 2,
      aux_sym_config_token1,
      sym__space,
  [2763] = 3,
    ACTIONS(1096), 1,
      aux_sym_filter_value_token1,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(24), 1,
      sym_filter_value,
  [2773] = 2,
    ACTIONS(1098), 1,
      aux_sym__add_desig_revoker_token1,
    ACTIONS(1100), 2,
      aux_sym__add_desig_revoker_token2,
      sym_key,
  [2781] = 1,
    ACTIONS(1102), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [2787] = 3,
    ACTIONS(1104), 1,
      anon_sym_DQUOTE,
    ACTIONS(1106), 1,
      anon_sym_SQUOTE,
    STATE(278), 1,
      sym__filter_expression,
  [2797] = 3,
    ACTIONS(945), 1,
      aux_sym__command_token2,
    ACTIONS(947), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(149), 1,
      aux_sym_string_repeat1,
  [2807] = 3,
    ACTIONS(891), 1,
      sym__space,
    ACTIONS(931), 1,
      aux_sym_config_token1,
    STATE(228), 1,
      aux_sym__list_options_repeat2,
  [2817] = 3,
    ACTIONS(949), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(951), 1,
      aux_sym__command_token3,
    STATE(150), 1,
      aux_sym_string_repeat2,
  [2827] = 3,
    ACTIONS(899), 1,
      sym__space,
    ACTIONS(933), 1,
      aux_sym_config_token1,
    STATE(230), 1,
      aux_sym__verify_options_repeat2,
  [2837] = 1,
    ACTIONS(1108), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [2843] = 2,
    ACTIONS(1112), 1,
      aux_sym__command_token2,
    ACTIONS(1110), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
  [2851] = 2,
    ACTIONS(1116), 1,
      aux_sym__command_token3,
    ACTIONS(1114), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
  [2859] = 3,
    ACTIONS(791), 1,
      sym__space,
    ACTIONS(953), 1,
      aux_sym_config_token1,
    STATE(233), 1,
      aux_sym__auto_key_locate_repeat2,
  [2869] = 3,
    ACTIONS(803), 1,
      sym__space,
    ACTIONS(959), 1,
      aux_sym_config_token1,
    STATE(236), 1,
      aux_sym__keyserver_options_repeat2,
  [2879] = 3,
    ACTIONS(813), 1,
      sym__space,
    ACTIONS(961), 1,
      aux_sym_config_token1,
    STATE(238), 1,
      aux_sym__import_options_repeat2,
  [2889] = 3,
    ACTIONS(1104), 1,
      anon_sym_DQUOTE,
    ACTIONS(1106), 1,
      anon_sym_SQUOTE,
    STATE(307), 1,
      sym__filter_expression,
  [2899] = 3,
    ACTIONS(1104), 1,
      anon_sym_DQUOTE,
    ACTIONS(1106), 1,
      anon_sym_SQUOTE,
    STATE(308), 1,
      sym__filter_expression,
  [2909] = 3,
    ACTIONS(819), 1,
      sym__space,
    ACTIONS(1094), 1,
      aux_sym_config_token1,
    STATE(240), 1,
      aux_sym__export_options_repeat2,
  [2919] = 3,
    ACTIONS(829), 1,
      sym__space,
    ACTIONS(963), 1,
      aux_sym_config_token1,
    STATE(242), 1,
      aux_sym__personal_cipher_preferences_repeat2,
  [2929] = 3,
    ACTIONS(837), 1,
      sym__space,
    ACTIONS(965), 1,
      aux_sym_config_token1,
    STATE(244), 1,
      aux_sym__personal_digest_preferences_repeat2,
  [2939] = 3,
    ACTIONS(851), 1,
      sym__space,
    ACTIONS(967), 1,
      aux_sym_config_token1,
    STATE(246), 1,
      aux_sym__personal_compress_preferences_repeat2,
  [2949] = 3,
    ACTIONS(857), 1,
      sym__space,
    ACTIONS(969), 1,
      aux_sym_config_token1,
    STATE(248), 1,
      aux_sym__debug_repeat2,
  [2959] = 1,
    ACTIONS(1118), 3,
      sym__keyserver_parameter,
      sym__import_parameter,
      sym__export_parameter,
  [2965] = 3,
    ACTIONS(913), 1,
      sym__space,
    ACTIONS(971), 1,
      aux_sym_config_token1,
    STATE(250), 1,
      aux_sym__default_new_key_algo_repeat2,
  [2975] = 3,
    ACTIONS(797), 1,
      sym__space,
    ACTIONS(973), 1,
      aux_sym_config_token1,
    STATE(252), 1,
      aux_sym__default_preference_list_repeat2,
  [2985] = 1,
    ACTIONS(975), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [2991] = 3,
    ACTIONS(1120), 1,
      aux_sym_config_token1,
    ACTIONS(1122), 1,
      sym__space,
    STATE(228), 1,
      aux_sym__list_options_repeat2,
  [3001] = 1,
    ACTIONS(980), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3007] = 3,
    ACTIONS(1125), 1,
      aux_sym_config_token1,
    ACTIONS(1127), 1,
      sym__space,
    STATE(230), 1,
      aux_sym__verify_options_repeat2,
  [3017] = 1,
    ACTIONS(1130), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3023] = 1,
    ACTIONS(1001), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3029] = 3,
    ACTIONS(1132), 1,
      aux_sym_config_token1,
    ACTIONS(1134), 1,
      sym__space,
    STATE(233), 1,
      aux_sym__auto_key_locate_repeat2,
  [3039] = 1,
    ACTIONS(1137), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3045] = 1,
    ACTIONS(1139), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3051] = 3,
    ACTIONS(1141), 1,
      aux_sym_config_token1,
    ACTIONS(1143), 1,
      sym__space,
    STATE(236), 1,
      aux_sym__keyserver_options_repeat2,
  [3061] = 1,
    ACTIONS(1011), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3067] = 3,
    ACTIONS(1146), 1,
      aux_sym_config_token1,
    ACTIONS(1148), 1,
      sym__space,
    STATE(238), 1,
      aux_sym__import_options_repeat2,
  [3077] = 2,
    ACTIONS(1076), 1,
      aux_sym__notation_token1,
    ACTIONS(1074), 2,
      anon_sym_EQ,
      aux_sym__notation_format_token1,
  [3085] = 3,
    ACTIONS(1151), 1,
      aux_sym_config_token1,
    ACTIONS(1153), 1,
      sym__space,
    STATE(240), 1,
      aux_sym__export_options_repeat2,
  [3095] = 1,
    ACTIONS(1156), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3101] = 3,
    ACTIONS(1158), 1,
      aux_sym_config_token1,
    ACTIONS(1160), 1,
      sym__space,
    STATE(242), 1,
      aux_sym__personal_cipher_preferences_repeat2,
  [3111] = 1,
    ACTIONS(1163), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3117] = 3,
    ACTIONS(1165), 1,
      aux_sym_config_token1,
    ACTIONS(1167), 1,
      sym__space,
    STATE(244), 1,
      aux_sym__personal_digest_preferences_repeat2,
  [3127] = 1,
    ACTIONS(1170), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3133] = 3,
    ACTIONS(1172), 1,
      aux_sym_config_token1,
    ACTIONS(1174), 1,
      sym__space,
    STATE(246), 1,
      aux_sym__personal_compress_preferences_repeat2,
  [3143] = 1,
    ACTIONS(1036), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3149] = 3,
    ACTIONS(1177), 1,
      aux_sym_config_token1,
    ACTIONS(1179), 1,
      sym__space,
    STATE(248), 1,
      aux_sym__debug_repeat2,
  [3159] = 1,
    ACTIONS(1041), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3165] = 3,
    ACTIONS(1182), 1,
      aux_sym_config_token1,
    ACTIONS(1184), 1,
      sym__space,
    STATE(250), 1,
      aux_sym__default_new_key_algo_repeat2,
  [3175] = 1,
    ACTIONS(1046), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3181] = 3,
    ACTIONS(1187), 1,
      aux_sym_config_token1,
    ACTIONS(1189), 1,
      sym__space,
    STATE(252), 1,
      aux_sym__default_preference_list_repeat2,
  [3191] = 3,
    ACTIONS(1192), 1,
      sym_filter_op1,
    ACTIONS(1194), 1,
      sym_filter_op0,
    ACTIONS(1196), 1,
      sym__space,
  [3201] = 1,
    ACTIONS(1198), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3207] = 3,
    ACTIONS(1200), 1,
      sym_filter_op1,
    ACTIONS(1202), 1,
      sym_filter_op0,
    ACTIONS(1204), 1,
      sym__space,
  [3217] = 2,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1206), 2,
      aux_sym_config_token1,
      sym__space,
  [3225] = 2,
    ACTIONS(1061), 1,
      sym_filter_property,
    ACTIONS(1059), 2,
      sym_filter_scope,
      sym_filter_flag,
  [3233] = 3,
    ACTIONS(1096), 1,
      aux_sym_filter_value_token1,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(21), 1,
      sym_filter_value,
  [3243] = 3,
    ACTIONS(1210), 1,
      sym_filter_op1,
    ACTIONS(1212), 1,
      sym_filter_op0,
    ACTIONS(1214), 1,
      sym__space,
  [3253] = 3,
    ACTIONS(1216), 1,
      sym_filter_op1,
    ACTIONS(1218), 1,
      sym_filter_op0,
    ACTIONS(1220), 1,
      sym__space,
  [3263] = 3,
    ACTIONS(1096), 1,
      aux_sym_filter_value_token1,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(32), 1,
      sym_filter_value,
  [3273] = 3,
    ACTIONS(1096), 1,
      aux_sym_filter_value_token1,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(27), 1,
      sym_filter_value,
  [3283] = 3,
    ACTIONS(1096), 1,
      aux_sym_filter_value_token1,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(31), 1,
      sym_filter_value,
  [3293] = 3,
    ACTIONS(1222), 1,
      aux_sym_filter_value_token1,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(21), 1,
      sym_filter_value,
  [3303] = 3,
    ACTIONS(1222), 1,
      aux_sym_filter_value_token1,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(24), 1,
      sym_filter_value,
  [3313] = 3,
    ACTIONS(1222), 1,
      aux_sym_filter_value_token1,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(32), 1,
      sym_filter_value,
  [3323] = 2,
    ACTIONS(1226), 1,
      anon_sym_BANG,
    ACTIONS(1224), 2,
      aux_sym_config_token1,
      sym__space,
  [3331] = 3,
    ACTIONS(1222), 1,
      aux_sym_filter_value_token1,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(27), 1,
      sym_filter_value,
  [3341] = 3,
    ACTIONS(1222), 1,
      aux_sym_filter_value_token1,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(31), 1,
      sym_filter_value,
  [3351] = 3,
    ACTIONS(1212), 1,
      sym_filter_op0,
    ACTIONS(1228), 1,
      sym_filter_op1,
    ACTIONS(1230), 1,
      sym__space,
  [3361] = 3,
    ACTIONS(1218), 1,
      sym_filter_op0,
    ACTIONS(1232), 1,
      sym_filter_op1,
    ACTIONS(1234), 1,
      sym__space,
  [3371] = 3,
    ACTIONS(1194), 1,
      sym_filter_op0,
    ACTIONS(1236), 1,
      sym_filter_op1,
    ACTIONS(1238), 1,
      sym__space,
  [3381] = 3,
    ACTIONS(1202), 1,
      sym_filter_op0,
    ACTIONS(1240), 1,
      sym_filter_op1,
    ACTIONS(1242), 1,
      sym__space,
  [3391] = 1,
    ACTIONS(1016), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3397] = 1,
    ACTIONS(1244), 2,
      aux_sym_config_token1,
      sym__space,
  [3402] = 1,
    ACTIONS(1246), 2,
      aux_sym_config_token1,
      sym__space,
  [3407] = 1,
    ACTIONS(1248), 2,
      aux_sym_config_token1,
      sym__space,
  [3412] = 1,
    ACTIONS(1250), 2,
      aux_sym_config_token1,
      sym__space,
  [3417] = 1,
    ACTIONS(1252), 2,
      aux_sym_config_token1,
      sym__space,
  [3422] = 1,
    ACTIONS(1120), 2,
      aux_sym_config_token1,
      sym__space,
  [3427] = 1,
    ACTIONS(1254), 2,
      aux_sym_config_token1,
      sym__space,
  [3432] = 1,
    ACTIONS(1256), 2,
      aux_sym_config_token1,
      sym__space,
  [3437] = 1,
    ACTIONS(1258), 2,
      aux_sym_config_token1,
      sym__space,
  [3442] = 1,
    ACTIONS(1125), 2,
      aux_sym_config_token1,
      sym__space,
  [3447] = 1,
    ACTIONS(1260), 2,
      aux_sym_config_token1,
      sym__space,
  [3452] = 1,
    ACTIONS(1262), 2,
      aux_sym_config_token1,
      sym__space,
  [3457] = 1,
    ACTIONS(1264), 2,
      aux_sym_config_token1,
      sym__space,
  [3462] = 1,
    ACTIONS(1266), 2,
      aux_sym_config_token1,
      sym__space,
  [3467] = 1,
    ACTIONS(1268), 2,
      aux_sym_config_token1,
      sym__space,
  [3472] = 1,
    ACTIONS(1270), 2,
      aux_sym_config_token1,
      sym__space,
  [3477] = 1,
    ACTIONS(1272), 2,
      aux_sym_config_token1,
      sym__space,
  [3482] = 1,
    ACTIONS(1132), 2,
      aux_sym_config_token1,
      sym__space,
  [3487] = 1,
    ACTIONS(1274), 2,
      aux_sym_config_token1,
      sym__space,
  [3492] = 2,
    ACTIONS(1276), 1,
      aux_sym_config_token1,
    ACTIONS(1278), 1,
      sym__space,
  [3499] = 1,
    ACTIONS(1280), 2,
      aux_sym_config_token1,
      sym__space,
  [3504] = 1,
    ACTIONS(1282), 2,
      aux_sym_config_token1,
      sym__space,
  [3509] = 2,
    ACTIONS(1284), 1,
      sym__key_locate_value,
    ACTIONS(1286), 1,
      sym_url,
  [3516] = 1,
    ACTIONS(1288), 2,
      aux_sym_config_token1,
      sym__space,
  [3521] = 1,
    ACTIONS(1290), 2,
      aux_sym_config_token1,
      sym__space,
  [3526] = 1,
    ACTIONS(1292), 2,
      aux_sym_config_token1,
      sym__space,
  [3531] = 1,
    ACTIONS(1294), 2,
      aux_sym_config_token1,
      sym__space,
  [3536] = 1,
    ACTIONS(1296), 2,
      aux_sym_config_token1,
      sym__space,
  [3541] = 1,
    ACTIONS(1298), 2,
      aux_sym_config_token1,
      sym__space,
  [3546] = 1,
    ACTIONS(1146), 2,
      aux_sym_config_token1,
      sym__space,
  [3551] = 1,
    ACTIONS(1300), 2,
      aux_sym_config_token1,
      sym__space,
  [3556] = 1,
    ACTIONS(1302), 2,
      aux_sym_config_token1,
      sym__space,
  [3561] = 1,
    ACTIONS(1304), 2,
      aux_sym_config_token1,
      sym__space,
  [3566] = 1,
    ACTIONS(1306), 2,
      aux_sym_config_token1,
      sym__space,
  [3571] = 1,
    ACTIONS(1308), 2,
      aux_sym_config_token1,
      sym__space,
  [3576] = 1,
    ACTIONS(1151), 2,
      aux_sym_config_token1,
      sym__space,
  [3581] = 1,
    ACTIONS(1310), 2,
      aux_sym_config_token1,
      sym__space,
  [3586] = 1,
    ACTIONS(1312), 2,
      aux_sym_config_token1,
      sym__space,
  [3591] = 1,
    ACTIONS(1314), 2,
      aux_sym_config_token1,
      sym__space,
  [3596] = 1,
    ACTIONS(1316), 2,
      aux_sym_config_token1,
      sym__space,
  [3601] = 1,
    ACTIONS(1318), 2,
      aux_sym_config_token1,
      sym__space,
  [3606] = 1,
    ACTIONS(1320), 2,
      aux_sym_config_token1,
      sym__space,
  [3611] = 1,
    ACTIONS(1322), 2,
      aux_sym_config_token1,
      sym__space,
  [3616] = 1,
    ACTIONS(1324), 2,
      aux_sym_config_token1,
      sym__space,
  [3621] = 1,
    ACTIONS(1326), 2,
      aux_sym_config_token1,
      sym__space,
  [3626] = 1,
    ACTIONS(1328), 2,
      aux_sym_config_token1,
      sym__space,
  [3631] = 2,
    ACTIONS(1330), 1,
      sym__key_locate_value,
    ACTIONS(1332), 1,
      sym_url,
  [3638] = 1,
    ACTIONS(1334), 2,
      aux_sym_config_token1,
      sym__space,
  [3643] = 1,
    ACTIONS(1336), 2,
      aux_sym_config_token1,
      sym__space,
  [3648] = 2,
    ACTIONS(1338), 1,
      sym__key_locate_value,
    ACTIONS(1340), 1,
      sym_url,
  [3655] = 1,
    ACTIONS(1342), 2,
      aux_sym_config_token1,
      sym__space,
  [3660] = 1,
    ACTIONS(1177), 2,
      aux_sym_config_token1,
      sym__space,
  [3665] = 1,
    ACTIONS(1344), 2,
      aux_sym_config_token1,
      sym__space,
  [3670] = 1,
    ACTIONS(1346), 2,
      aux_sym_config_token1,
      sym__space,
  [3675] = 1,
    ACTIONS(1348), 2,
      aux_sym_config_token1,
      sym__space,
  [3680] = 1,
    ACTIONS(1350), 2,
      aux_sym_config_token1,
      sym__space,
  [3685] = 1,
    ACTIONS(1352), 2,
      aux_sym_config_token1,
      sym__space,
  [3690] = 1,
    ACTIONS(1354), 2,
      aux_sym_config_token1,
      sym__space,
  [3695] = 1,
    ACTIONS(1356), 2,
      aux_sym_config_token1,
      sym__space,
  [3700] = 1,
    ACTIONS(1358), 2,
      aux_sym_config_token1,
      sym__space,
  [3705] = 1,
    ACTIONS(1360), 2,
      aux_sym_config_token1,
      sym__space,
  [3710] = 1,
    ACTIONS(1182), 2,
      aux_sym_config_token1,
      sym__space,
  [3715] = 1,
    ACTIONS(1362), 2,
      aux_sym_config_token1,
      sym__space,
  [3720] = 1,
    ACTIONS(1364), 2,
      aux_sym_config_token1,
      sym__space,
  [3725] = 1,
    ACTIONS(1366), 2,
      aux_sym_config_token1,
      sym__space,
  [3730] = 1,
    ACTIONS(1187), 2,
      aux_sym_config_token1,
      sym__space,
  [3735] = 1,
    ACTIONS(1368), 2,
      aux_sym_config_token1,
      sym__space,
  [3740] = 1,
    ACTIONS(1370), 2,
      aux_sym_config_token1,
      sym__space,
  [3745] = 1,
    ACTIONS(1372), 2,
      aux_sym_config_token1,
      sym__space,
  [3750] = 1,
    ACTIONS(1374), 2,
      aux_sym_config_token1,
      sym__space,
  [3755] = 1,
    ACTIONS(1376), 2,
      aux_sym_config_token1,
      sym__space,
  [3760] = 1,
    ACTIONS(1378), 2,
      aux_sym_config_token1,
      sym__space,
  [3765] = 1,
    ACTIONS(1380), 2,
      aux_sym_config_token1,
      sym__space,
  [3770] = 1,
    ACTIONS(1382), 2,
      aux_sym_config_token1,
      sym__space,
  [3775] = 1,
    ACTIONS(1384), 2,
      aux_sym_config_token1,
      sym__space,
  [3780] = 1,
    ACTIONS(1386), 2,
      aux_sym_config_token1,
      sym__space,
  [3785] = 2,
    ACTIONS(1200), 1,
      sym_filter_op1,
    ACTIONS(1202), 1,
      sym_filter_op0,
  [3792] = 1,
    ACTIONS(1388), 2,
      aux_sym_config_token1,
      sym__space,
  [3797] = 1,
    ACTIONS(1390), 2,
      aux_sym_config_token1,
      sym__space,
  [3802] = 1,
    ACTIONS(1392), 2,
      aux_sym_config_token1,
      sym__space,
  [3807] = 1,
    ACTIONS(1394), 2,
      aux_sym_config_token1,
      sym__space,
  [3812] = 1,
    ACTIONS(1396), 2,
      aux_sym_config_token1,
      sym__space,
  [3817] = 1,
    ACTIONS(1398), 2,
      aux_sym_config_token1,
      sym__space,
  [3822] = 2,
    ACTIONS(1210), 1,
      sym_filter_op1,
    ACTIONS(1212), 1,
      sym_filter_op0,
  [3829] = 1,
    ACTIONS(1400), 2,
      aux_sym_config_token1,
      sym__space,
  [3834] = 1,
    ACTIONS(1402), 2,
      aux_sym_config_token1,
      sym__space,
  [3839] = 1,
    ACTIONS(1310), 2,
      aux_sym_config_token1,
      sym__space,
  [3844] = 1,
    ACTIONS(1404), 2,
      aux_sym_config_token1,
      sym__space,
  [3849] = 2,
    ACTIONS(1216), 1,
      sym_filter_op1,
    ACTIONS(1218), 1,
      sym_filter_op0,
  [3856] = 1,
    ACTIONS(1406), 2,
      aux_sym_config_token1,
      sym__space,
  [3861] = 1,
    ACTIONS(1408), 2,
      aux_sym_config_token1,
      sym__space,
  [3866] = 1,
    ACTIONS(1410), 2,
      aux_sym_config_token1,
      sym__space,
  [3871] = 2,
    ACTIONS(1412), 1,
      sym_filter_op1,
    ACTIONS(1414), 1,
      sym_filter_op0,
  [3878] = 1,
    ACTIONS(1416), 2,
      aux_sym_config_token1,
      sym__space,
  [3883] = 1,
    ACTIONS(1418), 2,
      aux_sym_config_token1,
      sym__space,
  [3888] = 1,
    ACTIONS(1420), 2,
      aux_sym_config_token1,
      sym__space,
  [3893] = 1,
    ACTIONS(853), 2,
      aux_sym_config_token1,
      sym__space,
  [3898] = 1,
    ACTIONS(1422), 2,
      aux_sym_config_token1,
      sym__space,
  [3903] = 1,
    ACTIONS(1424), 2,
      aux_sym_config_token1,
      sym__space,
  [3908] = 1,
    ACTIONS(1426), 2,
      aux_sym_config_token1,
      sym__space,
  [3913] = 2,
    ACTIONS(531), 1,
      aux_sym_config_token1,
    ACTIONS(535), 1,
      sym__space,
  [3920] = 1,
    ACTIONS(1428), 2,
      aux_sym_config_token1,
      sym__space,
  [3925] = 1,
    ACTIONS(1430), 2,
      aux_sym_config_token1,
      sym__space,
  [3930] = 1,
    ACTIONS(1432), 2,
      aux_sym_config_token1,
      sym__space,
  [3935] = 1,
    ACTIONS(1434), 2,
      aux_sym_config_token1,
      sym__space,
  [3940] = 1,
    ACTIONS(1436), 2,
      aux_sym_config_token1,
      sym__space,
  [3945] = 1,
    ACTIONS(1438), 2,
      aux_sym_config_token1,
      sym__space,
  [3950] = 1,
    ACTIONS(1440), 2,
      aux_sym_config_token1,
      sym__space,
  [3955] = 2,
    ACTIONS(1212), 1,
      sym_filter_op0,
    ACTIONS(1228), 1,
      sym_filter_op1,
  [3962] = 1,
    ACTIONS(1310), 2,
      aux_sym_config_token1,
      sym__space,
  [3967] = 2,
    ACTIONS(1218), 1,
      sym_filter_op0,
    ACTIONS(1232), 1,
      sym_filter_op1,
  [3974] = 1,
    ACTIONS(1442), 2,
      aux_sym_config_token1,
      sym__space,
  [3979] = 2,
    ACTIONS(1414), 1,
      sym_filter_op0,
    ACTIONS(1444), 1,
      sym_filter_op1,
  [3986] = 2,
    ACTIONS(1446), 1,
      aux_sym__debug_token1,
    ACTIONS(1448), 1,
      sym__debug_flag_value,
  [3993] = 1,
    ACTIONS(1450), 2,
      aux_sym_config_token1,
      sym__space,
  [3998] = 1,
    ACTIONS(1452), 2,
      aux_sym_config_token1,
      sym__space,
  [4003] = 2,
    ACTIONS(1202), 1,
      sym_filter_op0,
    ACTIONS(1240), 1,
      sym_filter_op1,
  [4010] = 1,
    ACTIONS(1454), 2,
      aux_sym_config_token1,
      sym__space,
  [4015] = 1,
    ACTIONS(1456), 2,
      aux_sym_config_token1,
      sym__space,
  [4020] = 1,
    ACTIONS(1310), 2,
      aux_sym_config_token1,
      sym__space,
  [4025] = 1,
    ACTIONS(1458), 2,
      aux_sym_config_token1,
      sym__space,
  [4030] = 1,
    ACTIONS(1310), 2,
      aux_sym_config_token1,
      sym__space,
  [4035] = 1,
    ACTIONS(1456), 2,
      aux_sym_config_token1,
      sym__space,
  [4040] = 1,
    ACTIONS(1456), 2,
      aux_sym_config_token1,
      sym__space,
  [4045] = 2,
    ACTIONS(1460), 1,
      sym_number,
    ACTIONS(1462), 1,
      sym_iso_time,
  [4052] = 1,
    ACTIONS(1464), 2,
      aux_sym_config_token1,
      sym__space,
  [4057] = 1,
    ACTIONS(1466), 1,
      sym__space,
  [4061] = 1,
    ACTIONS(1468), 1,
      sym__space,
  [4065] = 1,
    ACTIONS(1470), 1,
      sym__space,
  [4069] = 1,
    ACTIONS(1472), 1,
      sym__space,
  [4073] = 1,
    ACTIONS(1474), 1,
      sym__space,
  [4077] = 1,
    ACTIONS(1476), 1,
      sym__new_key_algo,
  [4081] = 1,
    ACTIONS(1478), 1,
      sym__new_key_algo,
  [4085] = 1,
    ACTIONS(1480), 1,
      sym__space,
  [4089] = 1,
    ACTIONS(1482), 1,
      sym__space,
  [4093] = 1,
    ACTIONS(1484), 1,
      sym__space,
  [4097] = 1,
    ACTIONS(1486), 1,
      sym__space,
  [4101] = 1,
    ACTIONS(1488), 1,
      sym__space,
  [4105] = 1,
    ACTIONS(1490), 1,
      sym__cipher_algo_value,
  [4109] = 1,
    ACTIONS(1492), 1,
      sym__space,
  [4113] = 1,
    ACTIONS(1494), 1,
      sym__space,
  [4117] = 1,
    ACTIONS(1496), 1,
      sym__space,
  [4121] = 1,
    ACTIONS(1498), 1,
      sym__hash_algo_value,
  [4125] = 1,
    ACTIONS(1500), 1,
      sym__compression_algo_value,
  [4129] = 1,
    ACTIONS(1502), 1,
      sym__hash_algo_value,
  [4133] = 1,
    ACTIONS(1504), 1,
      sym__cipher_algo_value,
  [4137] = 1,
    ACTIONS(1506), 1,
      sym__pubkey_algo_value,
  [4141] = 1,
    ACTIONS(1508), 1,
      sym_number,
  [4145] = 1,
    ACTIONS(1510), 1,
      sym_number,
  [4149] = 1,
    ACTIONS(1512), 1,
      sym__space,
  [4153] = 1,
    ACTIONS(1514), 1,
      sym_key,
  [4157] = 1,
    ACTIONS(1516), 1,
      sym__list_filter_name,
  [4161] = 1,
    ACTIONS(1518), 1,
      sym__space,
  [4165] = 1,
    ACTIONS(1520), 1,
      sym__space,
  [4169] = 1,
    ACTIONS(1522), 1,
      sym__pinentry_mode_value,
  [4173] = 1,
    ACTIONS(1524), 1,
      sym__request_origin_value,
  [4177] = 1,
    ACTIONS(1526), 1,
      sym_number,
  [4181] = 1,
    ACTIONS(1528), 1,
      sym_number,
  [4185] = 1,
    ACTIONS(1530), 1,
      sym__hash_algo_value,
  [4189] = 1,
    ACTIONS(1532), 1,
      sym__list_parameter,
  [4193] = 1,
    ACTIONS(1534), 1,
      sym_number,
  [4197] = 1,
    ACTIONS(1536), 1,
      sym__space,
  [4201] = 1,
    ACTIONS(1538), 1,
      sym_expire_time,
  [4205] = 1,
    ACTIONS(1540), 1,
      sym__space,
  [4209] = 1,
    ACTIONS(1542), 1,
      sym__space,
  [4213] = 1,
    ACTIONS(1544), 1,
      sym__space,
  [4217] = 1,
    ACTIONS(1546), 1,
      sym_expire_time,
  [4221] = 1,
    ACTIONS(1548), 1,
      sym__new_key_algo,
  [4225] = 1,
    ACTIONS(1550), 1,
      sym__space,
  [4229] = 1,
    ACTIONS(1552), 1,
      sym__space,
  [4233] = 1,
    ACTIONS(1554), 1,
      sym__space,
  [4237] = 1,
    ACTIONS(1556), 1,
      sym_url,
  [4241] = 1,
    ACTIONS(1558), 1,
      sym__space,
  [4245] = 1,
    ACTIONS(1560), 1,
      sym__space,
  [4249] = 1,
    ACTIONS(1562), 1,
      sym__space,
  [4253] = 1,
    ACTIONS(1564), 1,
      sym__space,
  [4257] = 1,
    ACTIONS(1276), 1,
      aux_sym_config_token1,
  [4261] = 1,
    ACTIONS(1566), 1,
      sym__charset_value,
  [4265] = 1,
    ACTIONS(1568), 1,
      sym__space,
  [4269] = 1,
    ACTIONS(1570), 1,
      aux_sym__compress_level_token1,
  [4273] = 1,
    ACTIONS(1572), 1,
      anon_sym_EQ,
  [4277] = 1,
    ACTIONS(1574), 1,
      sym__space,
  [4281] = 1,
    ACTIONS(1576), 1,
      sym__space,
  [4285] = 1,
    ACTIONS(1578), 1,
      sym__space,
  [4289] = 1,
    ACTIONS(1580), 1,
      sym__space,
  [4293] = 1,
    ACTIONS(1582), 1,
      aux_sym__compress_level_token1,
  [4297] = 1,
    ACTIONS(1584), 1,
      aux_sym__default_cert_level_token1,
  [4301] = 1,
    ACTIONS(1586), 1,
      sym__space,
  [4305] = 1,
    ACTIONS(1588), 1,
      aux_sym__default_cert_level_token1,
  [4309] = 1,
    ACTIONS(1590), 1,
      aux_sym__group_token1,
  [4313] = 1,
    ACTIONS(1592), 1,
      sym_key,
  [4317] = 1,
    ACTIONS(1594), 1,
      sym__verify_parameter,
  [4321] = 1,
    ACTIONS(1596), 1,
      sym__model,
  [4325] = 1,
    ACTIONS(1598), 1,
      sym__space,
  [4329] = 1,
    ACTIONS(1600), 1,
      sym__space,
  [4333] = 1,
    ACTIONS(1602), 1,
      sym__space,
  [4337] = 1,
    ACTIONS(1604), 1,
      sym_number,
  [4341] = 1,
    ACTIONS(1606), 1,
      sym__space,
  [4345] = 1,
    ACTIONS(1608), 1,
      sym_number,
  [4349] = 1,
    ACTIONS(1610), 1,
      sym_number,
  [4353] = 1,
    ACTIONS(1612), 1,
      sym__space,
  [4357] = 1,
    ACTIONS(1614), 1,
      aux_sym_config_token1,
  [4361] = 1,
    ACTIONS(1616), 1,
      sym__key_origin_value,
  [4365] = 1,
    ACTIONS(1618), 1,
      sym__list_parameter,
  [4369] = 1,
    ACTIONS(1620), 1,
      sym__list_parameter,
  [4373] = 1,
    ACTIONS(1622), 1,
      sym__import_parameter,
  [4377] = 1,
    ACTIONS(1624), 1,
      sym__import_filter_name,
  [4381] = 1,
    ACTIONS(1626), 1,
      sym__verify_parameter,
  [4385] = 1,
    ACTIONS(1628), 1,
      sym__verify_parameter,
  [4389] = 1,
    ACTIONS(1630), 1,
      sym_filter_property,
  [4393] = 1,
    ACTIONS(1632), 1,
      sym_key,
  [4397] = 1,
    ACTIONS(1634), 1,
      sym__space,
  [4401] = 1,
    ACTIONS(1636), 1,
      sym__space,
  [4405] = 1,
    ACTIONS(1638), 1,
      sym__space,
  [4409] = 1,
    ACTIONS(1640), 1,
      anon_sym_DQUOTE,
  [4413] = 1,
    ACTIONS(1642), 1,
      sym__export_filter_name,
  [4417] = 1,
    ACTIONS(1644), 1,
      sym__space,
  [4421] = 1,
    ACTIONS(1640), 1,
      anon_sym_SQUOTE,
  [4425] = 1,
    ACTIONS(1646), 1,
      sym__export_parameter,
  [4429] = 1,
    ACTIONS(1648), 1,
      sym__space,
  [4433] = 1,
    ACTIONS(1650), 1,
      sym__cipher_algo_value,
  [4437] = 1,
    ACTIONS(1652), 1,
      sym__space,
  [4441] = 1,
    ACTIONS(1654), 1,
      sym__space,
  [4445] = 1,
    ACTIONS(1656), 1,
      sym__space,
  [4449] = 1,
    ACTIONS(1658), 1,
      sym__space,
  [4453] = 1,
    ACTIONS(1660), 1,
      sym__hash_algo_value,
  [4457] = 1,
    ACTIONS(1662), 1,
      sym__space,
  [4461] = 1,
    ACTIONS(1664), 1,
      sym__space,
  [4465] = 1,
    ACTIONS(1666), 1,
      sym__cipher_algo_value,
  [4469] = 1,
    ACTIONS(1668), 1,
      sym_filter_property,
  [4473] = 1,
    ACTIONS(1670), 1,
      sym__space,
  [4477] = 1,
    ACTIONS(1672), 1,
      sym__hash_algo_value,
  [4481] = 1,
    ACTIONS(1674), 1,
      sym__space,
  [4485] = 1,
    ACTIONS(1676), 1,
      aux_sym__s2k_mode_token1,
  [4489] = 1,
    ACTIONS(1678), 1,
      sym__space,
  [4493] = 1,
    ACTIONS(1680), 1,
      sym_number,
  [4497] = 1,
    ACTIONS(1682), 1,
      sym__space,
  [4501] = 1,
    ACTIONS(1684), 1,
      sym__compliance_value,
  [4505] = 1,
    ACTIONS(1686), 1,
      sym_number,
  [4509] = 1,
    ACTIONS(1688), 1,
      sym__space,
  [4513] = 1,
    ACTIONS(1690), 1,
      sym__space,
  [4517] = 1,
    ACTIONS(1692), 1,
      sym__space,
  [4521] = 1,
    ACTIONS(1694), 1,
      sym__debug_level_value,
  [4525] = 1,
    ACTIONS(1696), 1,
      sym__space,
  [4529] = 1,
    ACTIONS(1698), 1,
      sym_filter_property,
  [4533] = 1,
    ACTIONS(1700), 1,
      sym__space,
  [4537] = 1,
    ACTIONS(1702), 1,
      sym__space,
  [4541] = 1,
    ACTIONS(1704), 1,
      sym__space,
  [4545] = 1,
    ACTIONS(1706), 1,
      sym__space,
  [4549] = 1,
    ACTIONS(1708), 1,
      sym__space,
  [4553] = 1,
    ACTIONS(1710), 1,
      sym__space,
  [4557] = 1,
    ACTIONS(1712), 1,
      sym__space,
  [4561] = 1,
    ACTIONS(1714), 1,
      sym__keyid_format_value,
  [4565] = 1,
    ACTIONS(1716), 1,
      sym_number,
  [4569] = 1,
    ACTIONS(1718), 1,
      sym__space,
  [4573] = 1,
    ACTIONS(1720), 1,
      sym__space,
  [4577] = 1,
    ACTIONS(1722), 1,
      sym__space,
  [4581] = 1,
    ACTIONS(1724), 1,
      sym__space,
  [4585] = 1,
    ACTIONS(1726), 1,
      sym_url,
  [4589] = 1,
    ACTIONS(1728), 1,
      sym_url,
  [4593] = 1,
    ACTIONS(1730), 1,
      sym__import_parameter,
  [4597] = 1,
    ACTIONS(1732), 1,
      sym__space,
  [4601] = 1,
    ACTIONS(1734), 1,
      sym__space,
  [4605] = 1,
    ACTIONS(1736), 1,
      sym__space,
  [4609] = 1,
    ACTIONS(1738), 1,
      sym__space,
  [4613] = 1,
    ACTIONS(1740), 1,
      sym__import_parameter,
  [4617] = 1,
    ACTIONS(1742), 1,
      sym_number,
  [4621] = 1,
    ACTIONS(1744), 1,
      sym__space,
  [4625] = 1,
    ACTIONS(1746), 1,
      sym__space,
  [4629] = 1,
    ACTIONS(1748), 1,
      sym__space,
  [4633] = 1,
    ACTIONS(1750), 1,
      sym__space,
  [4637] = 1,
    ACTIONS(1752), 1,
      sym__space,
  [4641] = 1,
    ACTIONS(1754), 1,
      sym__space,
  [4645] = 1,
    ACTIONS(1756), 1,
      sym__space,
  [4649] = 1,
    ACTIONS(1758), 1,
      sym__space,
  [4653] = 1,
    ACTIONS(1760), 1,
      sym__space,
  [4657] = 1,
    ACTIONS(1762), 1,
      sym__space,
  [4661] = 1,
    ACTIONS(1764), 1,
      sym__space,
  [4665] = 1,
    ACTIONS(1766), 1,
      sym__space,
  [4669] = 1,
    ACTIONS(1768), 1,
      sym__space,
  [4673] = 1,
    ACTIONS(1770), 1,
      sym__space,
  [4677] = 1,
    ACTIONS(1772), 1,
      sym__space,
  [4681] = 1,
    ACTIONS(1774), 1,
      sym_number,
  [4685] = 1,
    ACTIONS(1776), 1,
      sym__space,
  [4689] = 1,
    ACTIONS(1778), 1,
      sym_number,
  [4693] = 1,
    ACTIONS(1780), 1,
      sym__space,
  [4697] = 1,
    ACTIONS(1782), 1,
      sym__export_parameter,
  [4701] = 1,
    ACTIONS(1784), 1,
      sym__export_parameter,
  [4705] = 1,
    ACTIONS(1786), 1,
      sym_number,
  [4709] = 1,
    ACTIONS(1788), 1,
      anon_sym_EQ,
  [4713] = 1,
    ACTIONS(1790), 1,
      sym__cipher_algo_value,
  [4717] = 1,
    ACTIONS(1792), 1,
      sym__cipher_algo_value,
  [4721] = 1,
    ACTIONS(1794), 1,
      sym__space,
  [4725] = 1,
    ACTIONS(1796), 1,
      sym__space,
  [4729] = 1,
    ACTIONS(1798), 1,
      sym__hash_algo_value,
  [4733] = 1,
    ACTIONS(1800), 1,
      sym__hash_algo_value,
  [4737] = 1,
    ACTIONS(1802), 1,
      sym__space,
  [4741] = 1,
    ACTIONS(1804), 1,
      sym__tofu_policy_value,
  [4745] = 1,
    ACTIONS(1806), 1,
      sym__compression_algo_value,
  [4749] = 1,
    ACTIONS(1808), 1,
      sym__compression_algo_value,
  [4753] = 1,
    ACTIONS(1810), 1,
      sym__space,
  [4757] = 1,
    ACTIONS(1812), 1,
      sym__space,
  [4761] = 1,
    ACTIONS(1814), 1,
      sym__debug_flag_value,
  [4765] = 1,
    ACTIONS(1816), 1,
      ts_builtin_sym_end,
  [4769] = 1,
    ACTIONS(1818), 1,
      sym__debug_flag_value,
  [4773] = 1,
    ACTIONS(1820), 1,
      sym__space,
  [4777] = 1,
    ACTIONS(1822), 1,
      sym__space,
  [4781] = 1,
    ACTIONS(1824), 1,
      sym_number,
  [4785] = 1,
    ACTIONS(1826), 1,
      sym_filter_property,
  [4789] = 1,
    ACTIONS(1828), 1,
      sym__space,
  [4793] = 1,
    ACTIONS(1830), 1,
      sym__space,
  [4797] = 1,
    ACTIONS(1832), 1,
      sym__space,
  [4801] = 1,
    ACTIONS(1834), 1,
      anon_sym_EQ,
  [4805] = 1,
    ACTIONS(1836), 1,
      sym_filter_property,
  [4809] = 1,
    ACTIONS(1838), 1,
      sym_filter_property,
  [4813] = 1,
    ACTIONS(1840), 1,
      anon_sym_EQ,
  [4817] = 1,
    ACTIONS(1842), 1,
      sym__space,
  [4821] = 1,
    ACTIONS(1844), 1,
      sym__compression_algo_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 17,
  [SMALL_STATE(10)] = 42,
  [SMALL_STATE(11)] = 67,
  [SMALL_STATE(12)] = 84,
  [SMALL_STATE(13)] = 101,
  [SMALL_STATE(14)] = 118,
  [SMALL_STATE(15)] = 140,
  [SMALL_STATE(16)] = 162,
  [SMALL_STATE(17)] = 184,
  [SMALL_STATE(18)] = 200,
  [SMALL_STATE(19)] = 216,
  [SMALL_STATE(20)] = 238,
  [SMALL_STATE(21)] = 260,
  [SMALL_STATE(22)] = 276,
  [SMALL_STATE(23)] = 290,
  [SMALL_STATE(24)] = 304,
  [SMALL_STATE(25)] = 320,
  [SMALL_STATE(26)] = 334,
  [SMALL_STATE(27)] = 348,
  [SMALL_STATE(28)] = 364,
  [SMALL_STATE(29)] = 378,
  [SMALL_STATE(30)] = 392,
  [SMALL_STATE(31)] = 406,
  [SMALL_STATE(32)] = 422,
  [SMALL_STATE(33)] = 438,
  [SMALL_STATE(34)] = 460,
  [SMALL_STATE(35)] = 482,
  [SMALL_STATE(36)] = 504,
  [SMALL_STATE(37)] = 526,
  [SMALL_STATE(38)] = 543,
  [SMALL_STATE(39)] = 560,
  [SMALL_STATE(40)] = 577,
  [SMALL_STATE(41)] = 594,
  [SMALL_STATE(42)] = 611,
  [SMALL_STATE(43)] = 628,
  [SMALL_STATE(44)] = 645,
  [SMALL_STATE(45)] = 662,
  [SMALL_STATE(46)] = 679,
  [SMALL_STATE(47)] = 698,
  [SMALL_STATE(48)] = 717,
  [SMALL_STATE(49)] = 730,
  [SMALL_STATE(50)] = 747,
  [SMALL_STATE(51)] = 760,
  [SMALL_STATE(52)] = 771,
  [SMALL_STATE(53)] = 784,
  [SMALL_STATE(54)] = 801,
  [SMALL_STATE(55)] = 814,
  [SMALL_STATE(56)] = 825,
  [SMALL_STATE(57)] = 836,
  [SMALL_STATE(58)] = 849,
  [SMALL_STATE(59)] = 860,
  [SMALL_STATE(60)] = 873,
  [SMALL_STATE(61)] = 884,
  [SMALL_STATE(62)] = 897,
  [SMALL_STATE(63)] = 908,
  [SMALL_STATE(64)] = 921,
  [SMALL_STATE(65)] = 932,
  [SMALL_STATE(66)] = 949,
  [SMALL_STATE(67)] = 966,
  [SMALL_STATE(68)] = 985,
  [SMALL_STATE(69)] = 1002,
  [SMALL_STATE(70)] = 1019,
  [SMALL_STATE(71)] = 1038,
  [SMALL_STATE(72)] = 1049,
  [SMALL_STATE(73)] = 1065,
  [SMALL_STATE(74)] = 1081,
  [SMALL_STATE(75)] = 1097,
  [SMALL_STATE(76)] = 1109,
  [SMALL_STATE(77)] = 1125,
  [SMALL_STATE(78)] = 1137,
  [SMALL_STATE(79)] = 1153,
  [SMALL_STATE(80)] = 1169,
  [SMALL_STATE(81)] = 1185,
  [SMALL_STATE(82)] = 1201,
  [SMALL_STATE(83)] = 1217,
  [SMALL_STATE(84)] = 1233,
  [SMALL_STATE(85)] = 1249,
  [SMALL_STATE(86)] = 1265,
  [SMALL_STATE(87)] = 1281,
  [SMALL_STATE(88)] = 1297,
  [SMALL_STATE(89)] = 1313,
  [SMALL_STATE(90)] = 1329,
  [SMALL_STATE(91)] = 1345,
  [SMALL_STATE(92)] = 1361,
  [SMALL_STATE(93)] = 1373,
  [SMALL_STATE(94)] = 1389,
  [SMALL_STATE(95)] = 1405,
  [SMALL_STATE(96)] = 1417,
  [SMALL_STATE(97)] = 1429,
  [SMALL_STATE(98)] = 1445,
  [SMALL_STATE(99)] = 1461,
  [SMALL_STATE(100)] = 1477,
  [SMALL_STATE(101)] = 1493,
  [SMALL_STATE(102)] = 1505,
  [SMALL_STATE(103)] = 1519,
  [SMALL_STATE(104)] = 1533,
  [SMALL_STATE(105)] = 1549,
  [SMALL_STATE(106)] = 1565,
  [SMALL_STATE(107)] = 1581,
  [SMALL_STATE(108)] = 1597,
  [SMALL_STATE(109)] = 1613,
  [SMALL_STATE(110)] = 1626,
  [SMALL_STATE(111)] = 1639,
  [SMALL_STATE(112)] = 1652,
  [SMALL_STATE(113)] = 1665,
  [SMALL_STATE(114)] = 1678,
  [SMALL_STATE(115)] = 1691,
  [SMALL_STATE(116)] = 1704,
  [SMALL_STATE(117)] = 1717,
  [SMALL_STATE(118)] = 1730,
  [SMALL_STATE(119)] = 1743,
  [SMALL_STATE(120)] = 1756,
  [SMALL_STATE(121)] = 1769,
  [SMALL_STATE(122)] = 1782,
  [SMALL_STATE(123)] = 1795,
  [SMALL_STATE(124)] = 1808,
  [SMALL_STATE(125)] = 1821,
  [SMALL_STATE(126)] = 1834,
  [SMALL_STATE(127)] = 1847,
  [SMALL_STATE(128)] = 1860,
  [SMALL_STATE(129)] = 1873,
  [SMALL_STATE(130)] = 1886,
  [SMALL_STATE(131)] = 1899,
  [SMALL_STATE(132)] = 1912,
  [SMALL_STATE(133)] = 1925,
  [SMALL_STATE(134)] = 1938,
  [SMALL_STATE(135)] = 1951,
  [SMALL_STATE(136)] = 1964,
  [SMALL_STATE(137)] = 1977,
  [SMALL_STATE(138)] = 1986,
  [SMALL_STATE(139)] = 1995,
  [SMALL_STATE(140)] = 2008,
  [SMALL_STATE(141)] = 2021,
  [SMALL_STATE(142)] = 2034,
  [SMALL_STATE(143)] = 2047,
  [SMALL_STATE(144)] = 2060,
  [SMALL_STATE(145)] = 2073,
  [SMALL_STATE(146)] = 2084,
  [SMALL_STATE(147)] = 2095,
  [SMALL_STATE(148)] = 2104,
  [SMALL_STATE(149)] = 2113,
  [SMALL_STATE(150)] = 2126,
  [SMALL_STATE(151)] = 2139,
  [SMALL_STATE(152)] = 2150,
  [SMALL_STATE(153)] = 2159,
  [SMALL_STATE(154)] = 2172,
  [SMALL_STATE(155)] = 2183,
  [SMALL_STATE(156)] = 2196,
  [SMALL_STATE(157)] = 2207,
  [SMALL_STATE(158)] = 2220,
  [SMALL_STATE(159)] = 2231,
  [SMALL_STATE(160)] = 2242,
  [SMALL_STATE(161)] = 2253,
  [SMALL_STATE(162)] = 2264,
  [SMALL_STATE(163)] = 2277,
  [SMALL_STATE(164)] = 2290,
  [SMALL_STATE(165)] = 2303,
  [SMALL_STATE(166)] = 2314,
  [SMALL_STATE(167)] = 2325,
  [SMALL_STATE(168)] = 2336,
  [SMALL_STATE(169)] = 2347,
  [SMALL_STATE(170)] = 2360,
  [SMALL_STATE(171)] = 2373,
  [SMALL_STATE(172)] = 2384,
  [SMALL_STATE(173)] = 2397,
  [SMALL_STATE(174)] = 2408,
  [SMALL_STATE(175)] = 2419,
  [SMALL_STATE(176)] = 2430,
  [SMALL_STATE(177)] = 2441,
  [SMALL_STATE(178)] = 2452,
  [SMALL_STATE(179)] = 2463,
  [SMALL_STATE(180)] = 2474,
  [SMALL_STATE(181)] = 2487,
  [SMALL_STATE(182)] = 2500,
  [SMALL_STATE(183)] = 2513,
  [SMALL_STATE(184)] = 2524,
  [SMALL_STATE(185)] = 2535,
  [SMALL_STATE(186)] = 2548,
  [SMALL_STATE(187)] = 2561,
  [SMALL_STATE(188)] = 2574,
  [SMALL_STATE(189)] = 2587,
  [SMALL_STATE(190)] = 2600,
  [SMALL_STATE(191)] = 2613,
  [SMALL_STATE(192)] = 2626,
  [SMALL_STATE(193)] = 2639,
  [SMALL_STATE(194)] = 2652,
  [SMALL_STATE(195)] = 2661,
  [SMALL_STATE(196)] = 2674,
  [SMALL_STATE(197)] = 2687,
  [SMALL_STATE(198)] = 2700,
  [SMALL_STATE(199)] = 2713,
  [SMALL_STATE(200)] = 2726,
  [SMALL_STATE(201)] = 2739,
  [SMALL_STATE(202)] = 2752,
  [SMALL_STATE(203)] = 2763,
  [SMALL_STATE(204)] = 2773,
  [SMALL_STATE(205)] = 2781,
  [SMALL_STATE(206)] = 2787,
  [SMALL_STATE(207)] = 2797,
  [SMALL_STATE(208)] = 2807,
  [SMALL_STATE(209)] = 2817,
  [SMALL_STATE(210)] = 2827,
  [SMALL_STATE(211)] = 2837,
  [SMALL_STATE(212)] = 2843,
  [SMALL_STATE(213)] = 2851,
  [SMALL_STATE(214)] = 2859,
  [SMALL_STATE(215)] = 2869,
  [SMALL_STATE(216)] = 2879,
  [SMALL_STATE(217)] = 2889,
  [SMALL_STATE(218)] = 2899,
  [SMALL_STATE(219)] = 2909,
  [SMALL_STATE(220)] = 2919,
  [SMALL_STATE(221)] = 2929,
  [SMALL_STATE(222)] = 2939,
  [SMALL_STATE(223)] = 2949,
  [SMALL_STATE(224)] = 2959,
  [SMALL_STATE(225)] = 2965,
  [SMALL_STATE(226)] = 2975,
  [SMALL_STATE(227)] = 2985,
  [SMALL_STATE(228)] = 2991,
  [SMALL_STATE(229)] = 3001,
  [SMALL_STATE(230)] = 3007,
  [SMALL_STATE(231)] = 3017,
  [SMALL_STATE(232)] = 3023,
  [SMALL_STATE(233)] = 3029,
  [SMALL_STATE(234)] = 3039,
  [SMALL_STATE(235)] = 3045,
  [SMALL_STATE(236)] = 3051,
  [SMALL_STATE(237)] = 3061,
  [SMALL_STATE(238)] = 3067,
  [SMALL_STATE(239)] = 3077,
  [SMALL_STATE(240)] = 3085,
  [SMALL_STATE(241)] = 3095,
  [SMALL_STATE(242)] = 3101,
  [SMALL_STATE(243)] = 3111,
  [SMALL_STATE(244)] = 3117,
  [SMALL_STATE(245)] = 3127,
  [SMALL_STATE(246)] = 3133,
  [SMALL_STATE(247)] = 3143,
  [SMALL_STATE(248)] = 3149,
  [SMALL_STATE(249)] = 3159,
  [SMALL_STATE(250)] = 3165,
  [SMALL_STATE(251)] = 3175,
  [SMALL_STATE(252)] = 3181,
  [SMALL_STATE(253)] = 3191,
  [SMALL_STATE(254)] = 3201,
  [SMALL_STATE(255)] = 3207,
  [SMALL_STATE(256)] = 3217,
  [SMALL_STATE(257)] = 3225,
  [SMALL_STATE(258)] = 3233,
  [SMALL_STATE(259)] = 3243,
  [SMALL_STATE(260)] = 3253,
  [SMALL_STATE(261)] = 3263,
  [SMALL_STATE(262)] = 3273,
  [SMALL_STATE(263)] = 3283,
  [SMALL_STATE(264)] = 3293,
  [SMALL_STATE(265)] = 3303,
  [SMALL_STATE(266)] = 3313,
  [SMALL_STATE(267)] = 3323,
  [SMALL_STATE(268)] = 3331,
  [SMALL_STATE(269)] = 3341,
  [SMALL_STATE(270)] = 3351,
  [SMALL_STATE(271)] = 3361,
  [SMALL_STATE(272)] = 3371,
  [SMALL_STATE(273)] = 3381,
  [SMALL_STATE(274)] = 3391,
  [SMALL_STATE(275)] = 3397,
  [SMALL_STATE(276)] = 3402,
  [SMALL_STATE(277)] = 3407,
  [SMALL_STATE(278)] = 3412,
  [SMALL_STATE(279)] = 3417,
  [SMALL_STATE(280)] = 3422,
  [SMALL_STATE(281)] = 3427,
  [SMALL_STATE(282)] = 3432,
  [SMALL_STATE(283)] = 3437,
  [SMALL_STATE(284)] = 3442,
  [SMALL_STATE(285)] = 3447,
  [SMALL_STATE(286)] = 3452,
  [SMALL_STATE(287)] = 3457,
  [SMALL_STATE(288)] = 3462,
  [SMALL_STATE(289)] = 3467,
  [SMALL_STATE(290)] = 3472,
  [SMALL_STATE(291)] = 3477,
  [SMALL_STATE(292)] = 3482,
  [SMALL_STATE(293)] = 3487,
  [SMALL_STATE(294)] = 3492,
  [SMALL_STATE(295)] = 3499,
  [SMALL_STATE(296)] = 3504,
  [SMALL_STATE(297)] = 3509,
  [SMALL_STATE(298)] = 3516,
  [SMALL_STATE(299)] = 3521,
  [SMALL_STATE(300)] = 3526,
  [SMALL_STATE(301)] = 3531,
  [SMALL_STATE(302)] = 3536,
  [SMALL_STATE(303)] = 3541,
  [SMALL_STATE(304)] = 3546,
  [SMALL_STATE(305)] = 3551,
  [SMALL_STATE(306)] = 3556,
  [SMALL_STATE(307)] = 3561,
  [SMALL_STATE(308)] = 3566,
  [SMALL_STATE(309)] = 3571,
  [SMALL_STATE(310)] = 3576,
  [SMALL_STATE(311)] = 3581,
  [SMALL_STATE(312)] = 3586,
  [SMALL_STATE(313)] = 3591,
  [SMALL_STATE(314)] = 3596,
  [SMALL_STATE(315)] = 3601,
  [SMALL_STATE(316)] = 3606,
  [SMALL_STATE(317)] = 3611,
  [SMALL_STATE(318)] = 3616,
  [SMALL_STATE(319)] = 3621,
  [SMALL_STATE(320)] = 3626,
  [SMALL_STATE(321)] = 3631,
  [SMALL_STATE(322)] = 3638,
  [SMALL_STATE(323)] = 3643,
  [SMALL_STATE(324)] = 3648,
  [SMALL_STATE(325)] = 3655,
  [SMALL_STATE(326)] = 3660,
  [SMALL_STATE(327)] = 3665,
  [SMALL_STATE(328)] = 3670,
  [SMALL_STATE(329)] = 3675,
  [SMALL_STATE(330)] = 3680,
  [SMALL_STATE(331)] = 3685,
  [SMALL_STATE(332)] = 3690,
  [SMALL_STATE(333)] = 3695,
  [SMALL_STATE(334)] = 3700,
  [SMALL_STATE(335)] = 3705,
  [SMALL_STATE(336)] = 3710,
  [SMALL_STATE(337)] = 3715,
  [SMALL_STATE(338)] = 3720,
  [SMALL_STATE(339)] = 3725,
  [SMALL_STATE(340)] = 3730,
  [SMALL_STATE(341)] = 3735,
  [SMALL_STATE(342)] = 3740,
  [SMALL_STATE(343)] = 3745,
  [SMALL_STATE(344)] = 3750,
  [SMALL_STATE(345)] = 3755,
  [SMALL_STATE(346)] = 3760,
  [SMALL_STATE(347)] = 3765,
  [SMALL_STATE(348)] = 3770,
  [SMALL_STATE(349)] = 3775,
  [SMALL_STATE(350)] = 3780,
  [SMALL_STATE(351)] = 3785,
  [SMALL_STATE(352)] = 3792,
  [SMALL_STATE(353)] = 3797,
  [SMALL_STATE(354)] = 3802,
  [SMALL_STATE(355)] = 3807,
  [SMALL_STATE(356)] = 3812,
  [SMALL_STATE(357)] = 3817,
  [SMALL_STATE(358)] = 3822,
  [SMALL_STATE(359)] = 3829,
  [SMALL_STATE(360)] = 3834,
  [SMALL_STATE(361)] = 3839,
  [SMALL_STATE(362)] = 3844,
  [SMALL_STATE(363)] = 3849,
  [SMALL_STATE(364)] = 3856,
  [SMALL_STATE(365)] = 3861,
  [SMALL_STATE(366)] = 3866,
  [SMALL_STATE(367)] = 3871,
  [SMALL_STATE(368)] = 3878,
  [SMALL_STATE(369)] = 3883,
  [SMALL_STATE(370)] = 3888,
  [SMALL_STATE(371)] = 3893,
  [SMALL_STATE(372)] = 3898,
  [SMALL_STATE(373)] = 3903,
  [SMALL_STATE(374)] = 3908,
  [SMALL_STATE(375)] = 3913,
  [SMALL_STATE(376)] = 3920,
  [SMALL_STATE(377)] = 3925,
  [SMALL_STATE(378)] = 3930,
  [SMALL_STATE(379)] = 3935,
  [SMALL_STATE(380)] = 3940,
  [SMALL_STATE(381)] = 3945,
  [SMALL_STATE(382)] = 3950,
  [SMALL_STATE(383)] = 3955,
  [SMALL_STATE(384)] = 3962,
  [SMALL_STATE(385)] = 3967,
  [SMALL_STATE(386)] = 3974,
  [SMALL_STATE(387)] = 3979,
  [SMALL_STATE(388)] = 3986,
  [SMALL_STATE(389)] = 3993,
  [SMALL_STATE(390)] = 3998,
  [SMALL_STATE(391)] = 4003,
  [SMALL_STATE(392)] = 4010,
  [SMALL_STATE(393)] = 4015,
  [SMALL_STATE(394)] = 4020,
  [SMALL_STATE(395)] = 4025,
  [SMALL_STATE(396)] = 4030,
  [SMALL_STATE(397)] = 4035,
  [SMALL_STATE(398)] = 4040,
  [SMALL_STATE(399)] = 4045,
  [SMALL_STATE(400)] = 4052,
  [SMALL_STATE(401)] = 4057,
  [SMALL_STATE(402)] = 4061,
  [SMALL_STATE(403)] = 4065,
  [SMALL_STATE(404)] = 4069,
  [SMALL_STATE(405)] = 4073,
  [SMALL_STATE(406)] = 4077,
  [SMALL_STATE(407)] = 4081,
  [SMALL_STATE(408)] = 4085,
  [SMALL_STATE(409)] = 4089,
  [SMALL_STATE(410)] = 4093,
  [SMALL_STATE(411)] = 4097,
  [SMALL_STATE(412)] = 4101,
  [SMALL_STATE(413)] = 4105,
  [SMALL_STATE(414)] = 4109,
  [SMALL_STATE(415)] = 4113,
  [SMALL_STATE(416)] = 4117,
  [SMALL_STATE(417)] = 4121,
  [SMALL_STATE(418)] = 4125,
  [SMALL_STATE(419)] = 4129,
  [SMALL_STATE(420)] = 4133,
  [SMALL_STATE(421)] = 4137,
  [SMALL_STATE(422)] = 4141,
  [SMALL_STATE(423)] = 4145,
  [SMALL_STATE(424)] = 4149,
  [SMALL_STATE(425)] = 4153,
  [SMALL_STATE(426)] = 4157,
  [SMALL_STATE(427)] = 4161,
  [SMALL_STATE(428)] = 4165,
  [SMALL_STATE(429)] = 4169,
  [SMALL_STATE(430)] = 4173,
  [SMALL_STATE(431)] = 4177,
  [SMALL_STATE(432)] = 4181,
  [SMALL_STATE(433)] = 4185,
  [SMALL_STATE(434)] = 4189,
  [SMALL_STATE(435)] = 4193,
  [SMALL_STATE(436)] = 4197,
  [SMALL_STATE(437)] = 4201,
  [SMALL_STATE(438)] = 4205,
  [SMALL_STATE(439)] = 4209,
  [SMALL_STATE(440)] = 4213,
  [SMALL_STATE(441)] = 4217,
  [SMALL_STATE(442)] = 4221,
  [SMALL_STATE(443)] = 4225,
  [SMALL_STATE(444)] = 4229,
  [SMALL_STATE(445)] = 4233,
  [SMALL_STATE(446)] = 4237,
  [SMALL_STATE(447)] = 4241,
  [SMALL_STATE(448)] = 4245,
  [SMALL_STATE(449)] = 4249,
  [SMALL_STATE(450)] = 4253,
  [SMALL_STATE(451)] = 4257,
  [SMALL_STATE(452)] = 4261,
  [SMALL_STATE(453)] = 4265,
  [SMALL_STATE(454)] = 4269,
  [SMALL_STATE(455)] = 4273,
  [SMALL_STATE(456)] = 4277,
  [SMALL_STATE(457)] = 4281,
  [SMALL_STATE(458)] = 4285,
  [SMALL_STATE(459)] = 4289,
  [SMALL_STATE(460)] = 4293,
  [SMALL_STATE(461)] = 4297,
  [SMALL_STATE(462)] = 4301,
  [SMALL_STATE(463)] = 4305,
  [SMALL_STATE(464)] = 4309,
  [SMALL_STATE(465)] = 4313,
  [SMALL_STATE(466)] = 4317,
  [SMALL_STATE(467)] = 4321,
  [SMALL_STATE(468)] = 4325,
  [SMALL_STATE(469)] = 4329,
  [SMALL_STATE(470)] = 4333,
  [SMALL_STATE(471)] = 4337,
  [SMALL_STATE(472)] = 4341,
  [SMALL_STATE(473)] = 4345,
  [SMALL_STATE(474)] = 4349,
  [SMALL_STATE(475)] = 4353,
  [SMALL_STATE(476)] = 4357,
  [SMALL_STATE(477)] = 4361,
  [SMALL_STATE(478)] = 4365,
  [SMALL_STATE(479)] = 4369,
  [SMALL_STATE(480)] = 4373,
  [SMALL_STATE(481)] = 4377,
  [SMALL_STATE(482)] = 4381,
  [SMALL_STATE(483)] = 4385,
  [SMALL_STATE(484)] = 4389,
  [SMALL_STATE(485)] = 4393,
  [SMALL_STATE(486)] = 4397,
  [SMALL_STATE(487)] = 4401,
  [SMALL_STATE(488)] = 4405,
  [SMALL_STATE(489)] = 4409,
  [SMALL_STATE(490)] = 4413,
  [SMALL_STATE(491)] = 4417,
  [SMALL_STATE(492)] = 4421,
  [SMALL_STATE(493)] = 4425,
  [SMALL_STATE(494)] = 4429,
  [SMALL_STATE(495)] = 4433,
  [SMALL_STATE(496)] = 4437,
  [SMALL_STATE(497)] = 4441,
  [SMALL_STATE(498)] = 4445,
  [SMALL_STATE(499)] = 4449,
  [SMALL_STATE(500)] = 4453,
  [SMALL_STATE(501)] = 4457,
  [SMALL_STATE(502)] = 4461,
  [SMALL_STATE(503)] = 4465,
  [SMALL_STATE(504)] = 4469,
  [SMALL_STATE(505)] = 4473,
  [SMALL_STATE(506)] = 4477,
  [SMALL_STATE(507)] = 4481,
  [SMALL_STATE(508)] = 4485,
  [SMALL_STATE(509)] = 4489,
  [SMALL_STATE(510)] = 4493,
  [SMALL_STATE(511)] = 4497,
  [SMALL_STATE(512)] = 4501,
  [SMALL_STATE(513)] = 4505,
  [SMALL_STATE(514)] = 4509,
  [SMALL_STATE(515)] = 4513,
  [SMALL_STATE(516)] = 4517,
  [SMALL_STATE(517)] = 4521,
  [SMALL_STATE(518)] = 4525,
  [SMALL_STATE(519)] = 4529,
  [SMALL_STATE(520)] = 4533,
  [SMALL_STATE(521)] = 4537,
  [SMALL_STATE(522)] = 4541,
  [SMALL_STATE(523)] = 4545,
  [SMALL_STATE(524)] = 4549,
  [SMALL_STATE(525)] = 4553,
  [SMALL_STATE(526)] = 4557,
  [SMALL_STATE(527)] = 4561,
  [SMALL_STATE(528)] = 4565,
  [SMALL_STATE(529)] = 4569,
  [SMALL_STATE(530)] = 4573,
  [SMALL_STATE(531)] = 4577,
  [SMALL_STATE(532)] = 4581,
  [SMALL_STATE(533)] = 4585,
  [SMALL_STATE(534)] = 4589,
  [SMALL_STATE(535)] = 4593,
  [SMALL_STATE(536)] = 4597,
  [SMALL_STATE(537)] = 4601,
  [SMALL_STATE(538)] = 4605,
  [SMALL_STATE(539)] = 4609,
  [SMALL_STATE(540)] = 4613,
  [SMALL_STATE(541)] = 4617,
  [SMALL_STATE(542)] = 4621,
  [SMALL_STATE(543)] = 4625,
  [SMALL_STATE(544)] = 4629,
  [SMALL_STATE(545)] = 4633,
  [SMALL_STATE(546)] = 4637,
  [SMALL_STATE(547)] = 4641,
  [SMALL_STATE(548)] = 4645,
  [SMALL_STATE(549)] = 4649,
  [SMALL_STATE(550)] = 4653,
  [SMALL_STATE(551)] = 4657,
  [SMALL_STATE(552)] = 4661,
  [SMALL_STATE(553)] = 4665,
  [SMALL_STATE(554)] = 4669,
  [SMALL_STATE(555)] = 4673,
  [SMALL_STATE(556)] = 4677,
  [SMALL_STATE(557)] = 4681,
  [SMALL_STATE(558)] = 4685,
  [SMALL_STATE(559)] = 4689,
  [SMALL_STATE(560)] = 4693,
  [SMALL_STATE(561)] = 4697,
  [SMALL_STATE(562)] = 4701,
  [SMALL_STATE(563)] = 4705,
  [SMALL_STATE(564)] = 4709,
  [SMALL_STATE(565)] = 4713,
  [SMALL_STATE(566)] = 4717,
  [SMALL_STATE(567)] = 4721,
  [SMALL_STATE(568)] = 4725,
  [SMALL_STATE(569)] = 4729,
  [SMALL_STATE(570)] = 4733,
  [SMALL_STATE(571)] = 4737,
  [SMALL_STATE(572)] = 4741,
  [SMALL_STATE(573)] = 4745,
  [SMALL_STATE(574)] = 4749,
  [SMALL_STATE(575)] = 4753,
  [SMALL_STATE(576)] = 4757,
  [SMALL_STATE(577)] = 4761,
  [SMALL_STATE(578)] = 4765,
  [SMALL_STATE(579)] = 4769,
  [SMALL_STATE(580)] = 4773,
  [SMALL_STATE(581)] = 4777,
  [SMALL_STATE(582)] = 4781,
  [SMALL_STATE(583)] = 4785,
  [SMALL_STATE(584)] = 4789,
  [SMALL_STATE(585)] = 4793,
  [SMALL_STATE(586)] = 4797,
  [SMALL_STATE(587)] = 4801,
  [SMALL_STATE(588)] = 4805,
  [SMALL_STATE(589)] = 4809,
  [SMALL_STATE(590)] = 4813,
  [SMALL_STATE(591)] = 4817,
  [SMALL_STATE(592)] = 4821,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(469),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(468),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(546),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(567),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(568),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(571),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(575),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(576),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(580),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(581),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(444),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(453),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(456),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(462),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(507),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(585),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(501),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(424),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(439),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(440),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(445),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(449),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(472),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(475),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(494),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(497),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(524),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(584),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(586),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(591),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(403),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(405),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(411),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(415),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(486),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(491),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(502),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(505),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(509),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(514),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(515),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(518),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(521),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(522),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(523),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(525),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(526),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(529),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(530),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(531),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(532),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(536),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(537),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(538),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(539),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(542),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(543),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(544),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(545),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(547),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(548),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(549),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(550),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(551),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(552),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(553),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(554),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(555),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(556),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(558),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(560),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_value, 1, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_value, 1, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_value_repeat1, 2, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filter_value_repeat1, 2, 0, 0),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filter_value_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filter_value_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter_expression_inner, 2, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2, 0, 0),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2, 0, 0), SHIFT_REPEAT(484),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2, 0, 0), SHIFT_REPEAT(253),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2, 0, 0), SHIFT_REPEAT(487),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2, 0, 0), SHIFT_REPEAT(187),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 3, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 3, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 3, 0, 0), SHIFT_REPEAT(23),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2, 0, 0), SHIFT_REPEAT(22),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter_expression_inner, 1, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter_expression_inner, 3, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 4, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 4, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 4, 0, 0), SHIFT_REPEAT(25),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 5, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 5, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 5, 0, 0), SHIFT_REPEAT(29),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 7, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 7, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 7, 0, 0), SHIFT_REPEAT(28),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 8, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 8, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 6, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 6, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 9, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 9, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 8, 0, 0), SHIFT_REPEAT(30),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 6, 0, 0), SHIFT_REPEAT(26),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2, 0, 0), SHIFT_REPEAT(589),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2, 0, 0), SHIFT_REPEAT(272),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2, 0, 0), SHIFT_REPEAT(200),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2, 0, 0),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2, 0, 0), SHIFT_REPEAT(148),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 2, 0, 0), SHIFT_REPEAT(148),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2, 0, 0),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_policy_url, 4, 0, 10),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_policy_url, 4, 0, 10),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_policy_url, 4, 0, 10),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_keyserver_url, 4, 0, 10),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2, 0, 0),
  [731] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 2, 0, 0), SHIFT_REPEAT(147),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2, 0, 0), SHIFT_REPEAT(147),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 3, 0, 0), SHIFT_REPEAT(51),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 1, 0, 3),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 4, 0, 0), SHIFT_REPEAT(71),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 5, 0, 0), SHIFT_REPEAT(55),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_keyserver_url, 3, 0, 7),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 6, 0, 0), SHIFT_REPEAT(56),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 7, 0, 0), SHIFT_REPEAT(58),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 8, 0, 0), SHIFT_REPEAT(60),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 9, 0, 0), SHIFT_REPEAT(62),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 10, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 10, 0, 0),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 10, 0, 0), SHIFT_REPEAT(64),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 11, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 11, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__notation, 2, 0, 0),
  [775] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__notation, 2, 0, 0), SHIFT_REPEAT(194),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__notation, 2, 0, 0), SHIFT_REPEAT(194),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_policy_url, 3, 0, 7),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_policy_url, 3, 0, 7),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_policy_url, 3, 0, 7),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__auto_key_locate, 3, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_preference_list, 3, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyserver_options, 3, 0, 5),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_options, 3, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_options, 3, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_cipher_preferences, 3, 0, 6),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_digest_preferences, 3, 0, 6),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_compress_preferences, 3, 0, 6),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug, 3, 0, 0),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_options, 3, 0, 0),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_options, 3, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [903] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__notation, 2, 0, 0), SHIFT_REPEAT(239),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__notation, 2, 0, 0), SHIFT_REPEAT(239),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_new_key_algo, 3, 0, 0),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 1, 0, 0),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 1, 0, 0),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyserver_set_option, 1, 0, 4),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_options, 4, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_options, 4, 0, 0),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 1, 0, 0),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 1, 0, 0),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 1, 0, 0),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 1, 0, 0),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__auto_key_locate, 4, 0, 0),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyserver_set_option, 2, 0, 8),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyserver_options, 4, 0, 9),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_options, 4, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_cipher_preferences, 4, 0, 6),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_digest_preferences, 4, 0, 6),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_compress_preferences, 4, 0, 6),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug, 4, 0, 0),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_new_key_algo, 4, 0, 0),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_preference_list, 4, 0, 0),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2, 0, 0),
  [977] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2, 0, 0),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [987] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(213),
  [998] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(213),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, 0, 0),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__keyserver_options_repeat1, 2, 0, 15),
  [1008] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyserver_options_repeat1, 2, 0, 15), SHIFT_REPEAT(96),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2, 0, 0),
  [1013] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2, 0, 0),
  [1018] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2, 0, 0), SHIFT_REPEAT(561),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2, 0, 0),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2, 0, 0), SHIFT_REPEAT(565),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2, 0, 0),
  [1028] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2, 0, 0), SHIFT_REPEAT(569),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2, 0, 0),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2, 0, 0), SHIFT_REPEAT(573),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__debug_repeat1, 2, 0, 0),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__debug_repeat1, 2, 0, 0), SHIFT_REPEAT(577),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat1, 2, 0, 0),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat1, 2, 0, 0), SHIFT_REPEAT(406),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat1, 2, 0, 0),
  [1048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat1, 2, 0, 0),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat1, 2, 0, 0),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__notation, 1, 0, 0),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__notation, 1, 0, 0),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_options, 4, 0, 0),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_preference_value, 1, 0, 0),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 1, 0, 0),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 1, 0, 0),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_options_repeat2, 2, 0, 0),
  [1122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_options_repeat2, 2, 0, 0), SHIFT_REPEAT(479),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat2, 2, 0, 0),
  [1127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat2, 2, 0, 0), SHIFT_REPEAT(483),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 12),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat2, 2, 0, 0),
  [1134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat2, 2, 0, 0), SHIFT_REPEAT(324),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyserver_set_option, 3, 0, 13),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__keyserver_options_repeat1, 2, 0, 14),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__keyserver_options_repeat2, 2, 0, 15),
  [1143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyserver_options_repeat2, 2, 0, 15), SHIFT_REPEAT(101),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_options_repeat2, 2, 0, 0),
  [1148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_options_repeat2, 2, 0, 0), SHIFT_REPEAT(540),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__export_options_repeat2, 2, 0, 0),
  [1153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_options_repeat2, 2, 0, 0), SHIFT_REPEAT(562),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2, 0, 17),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat2, 2, 0, 0),
  [1160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat2, 2, 0, 0), SHIFT_REPEAT(566),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2, 0, 17),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat2, 2, 0, 0),
  [1167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat2, 2, 0, 0), SHIFT_REPEAT(570),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2, 0, 17),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat2, 2, 0, 0),
  [1174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat2, 2, 0, 0), SHIFT_REPEAT(574),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__debug_repeat2, 2, 0, 0),
  [1179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__debug_repeat2, 2, 0, 0), SHIFT_REPEAT(579),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat2, 2, 0, 0),
  [1184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat2, 2, 0, 0), SHIFT_REPEAT(407),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat2, 2, 0, 0),
  [1189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat2, 2, 0, 0), SHIFT_REPEAT(77),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyserver_set_option, 4, 0, 19),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_origin, 3, 0, 0),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__faked_system_time, 3, 0, 0),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_recipient_file, 3, 0, 0),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marginals_needed, 3, 0, 0),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__override_session_key, 3, 0, 0),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_filter, 5, 0, 11),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__override_session_key_fd, 3, 0, 0),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tofu_default_policy, 3, 0, 0),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_sig_expire, 3, 0, 0),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_cert_expire, 3, 0, 0),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__max_cert_depth, 3, 0, 0),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_notation, 3, 0, 0),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 3, 0, 12),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_keyserver_url, 3, 0, 0),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agent_program, 3, 0, 0),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dirmngr_program, 3, 0, 0),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chuid, 3, 0, 0),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__limit_card_insert_tries, 3, 0, 0),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipient, 3, 0, 0),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_key, 3, 0, 0),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__keyserver_options_repeat2, 2, 0, 14),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_recipient, 3, 0, 0),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__photo_viewer, 3, 0, 0),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 5, 0, 16),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_origin, 5, 0, 0),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_filename, 3, 0, 0),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipient_file, 3, 0, 0),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cipher_algo, 3, 0, 6),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_filter, 5, 0, 11),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_filter, 5, 0, 11),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exec_path, 3, 0, 0),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, 0, 2),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digest_algo, 3, 0, 6),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyring, 3, 0, 0),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat2, 2, 0, 17),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__encrypt_to, 3, 0, 0),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compress_algo, 3, 0, 6),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_keyring, 3, 0, 0),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat2, 2, 0, 17),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_encrypt_to, 3, 0, 0),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_desig_revoker, 4, 0, 0),
  [1330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat2, 2, 0, 17),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ungroup, 3, 0, 0),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trustdb_name, 3, 0, 0),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_user, 3, 0, 0),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_digest_algo, 3, 0, 6),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sender, 3, 0, 0),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_notation, 5, 0, 18),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__try_secret_name, 3, 0, 0),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_notation, 5, 0, 18),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3, 0, 0),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_notation, 5, 0, 18),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_charset, 3, 0, 0),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__max_output, 3, 0, 0),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compress_level, 3, 0, 0),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__weak_digest, 3, 0, 6),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk_size, 3, 0, 0),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disable_cipher_algo, 3, 0, 6),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_cert_level, 3, 0, 0),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_size_hint, 3, 0, 0),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__min_cert_level, 3, 0, 0),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_notation, 6, 0, 20),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_notation, 6, 0, 20),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_notation, 6, 0, 20),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disable_pubkey_algo, 3, 0, 6),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_repeat, 3, 0, 0),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_cipher_algo, 3, 0, 6),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_fd, 3, 0, 0),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_digest_algo, 3, 0, 6),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter_expression, 3, 0, 0),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_mode, 3, 0, 0),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_count, 3, 0, 0),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trusted_key, 3, 0, 0),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_file, 3, 0, 0),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compliance, 3, 0, 0),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_desig_revoker, 3, 0, 0),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase, 3, 0, 0),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__min_rsa_length, 3, 0, 0),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trust_model, 3, 0, 0),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_level, 3, 0, 0),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pinentry_mode, 3, 0, 0),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assert_signer, 3, 0, 0),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_origin, 3, 0, 0),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_set_iobuf_size, 3, 0, 0),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyid_format, 3, 0, 0),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_fd, 3, 0, 0),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__faked_system_time, 4, 0, 0),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__status_fd, 3, 0, 0),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyserver, 3, 0, 0),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__status_file, 3, 0, 0),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logger_fd, 3, 0, 0),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_file, 3, 0, 0),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, 0, 0),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__completes_needed, 3, 0, 0),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logger_file, 3, 0, 0),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, 0, 1),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 3, 0, 0),
  [1460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bzip2_compress_level, 3, 0, 0),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1816] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
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

TS_PUBLIC const TSLanguage *tree_sitter_gpg(void) {
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
