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
#define STATE_COUNT 841
#define LARGE_STATE_COUNT 36
#define SYMBOL_COUNT 374
#define ALIAS_COUNT 1
#define TOKEN_COUNT 184
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 83

enum ts_symbol_identifiers {
  aux_sym_host_declaration_token1 = 1,
  anon_sym_BANG = 2,
  aux_sym_match_declaration_token1 = 3,
  aux_sym__all_token1 = 4,
  aux_sym__match_canonical_token1 = 5,
  aux_sym__match_final_token1 = 6,
  aux_sym__match_exec_token1 = 7,
  aux_sym__match_exec_token2 = 8,
  anon_sym_DQUOTE = 9,
  aux_sym__match_exec_token3 = 10,
  aux_sym__match_localnetwork_token1 = 11,
  aux_sym__match_localnetwork_token2 = 12,
  anon_sym_COMMA = 13,
  aux_sym__match_localnetwork_token3 = 14,
  aux_sym__match_host_token1 = 15,
  aux_sym__match_originalhost_token1 = 16,
  aux_sym__match_tagged_token1 = 17,
  aux_sym__match_user_token1 = 18,
  aux_sym__match_localuser_token1 = 19,
  anon_sym_STAR = 20,
  anon_sym_QMARK = 21,
  aux_sym__add_keys_to_agent_token1 = 22,
  anon_sym_ask = 23,
  anon_sym_confirm = 24,
  aux_sym__address_family_token1 = 25,
  anon_sym_any = 26,
  anon_sym_inet = 27,
  anon_sym_inet6 = 28,
  aux_sym__batch_mode_token1 = 29,
  aux_sym__bind_address_token1 = 30,
  aux_sym__bind_interface_token1 = 31,
  aux_sym__canonical_domains_token1 = 32,
  aux_sym__canonicalize_fallback_local_token1 = 33,
  aux_sym__canonicalize_hostname_token1 = 34,
  aux_sym__canonicalize_max_dots_token1 = 35,
  aux_sym__canonicalize_permitted_cnames_token1 = 36,
  anon_sym_none = 37,
  anon_sym_COLON = 38,
  aux_sym__ca_signature_algorithms_token1 = 39,
  anon_sym_PLUS = 40,
  anon_sym_DASH = 41,
  aux_sym__certificate_file_token1 = 42,
  aux_sym__check_host_ip_token1 = 43,
  aux_sym__ciphers_token1 = 44,
  anon_sym_CARET = 45,
  aux_sym__clear_all_forwardings_token1 = 46,
  aux_sym__compression_token1 = 47,
  aux_sym__connection_attempts_token1 = 48,
  aux_sym__connect_timeout_token1 = 49,
  aux_sym__control_master_token1 = 50,
  anon_sym_auto = 51,
  anon_sym_autoask = 52,
  aux_sym__control_persist_token1 = 53,
  aux_sym__control_path_token1 = 54,
  aux_sym__dynamic_forward_token1 = 55,
  aux_sym__enable_escape_command_line_token1 = 56,
  aux_sym__enable_ssh_keysign_token1 = 57,
  aux_sym__escape_char_token1 = 58,
  aux_sym__escape_char_token2 = 59,
  aux_sym__exit_on_forward_failure_token1 = 60,
  aux_sym__fingerprint_hash_token1 = 61,
  anon_sym_md5 = 62,
  anon_sym_sha256 = 63,
  aux_sym__fork_after_authentication_token1 = 64,
  aux_sym__forward_agent_token1 = 65,
  aux_sym__forward_x11_token1 = 66,
  aux_sym__forward_x11_timeout_token1 = 67,
  aux_sym__forward_x11_trusted_token1 = 68,
  aux_sym__global_known_hosts_file_token1 = 69,
  aux_sym__gssapi_authentication_token1 = 70,
  aux_sym__gssapi_delegate_credentials_token1 = 71,
  aux_sym__hash_known_hosts_token1 = 72,
  aux_sym__hostbased_accepted_algorithms_token1 = 73,
  aux_sym__hostbased_accepted_algorithms_token2 = 74,
  aux_sym__hostbased_authentication_token1 = 75,
  aux_sym__host_key_algorithms_token1 = 76,
  aux_sym__host_key_alias_token1 = 77,
  aux_sym__hostname_token1 = 78,
  aux_sym__identities_only_token1 = 79,
  aux_sym__identity_agent_token1 = 80,
  anon_sym_SSH_AUTH_SOCK = 81,
  aux_sym__identity_file_token1 = 82,
  aux_sym__ignore_unknown_token1 = 83,
  aux_sym__include_token1 = 84,
  aux_sym__ipqos_token1 = 85,
  aux_sym__kbd_interactive_authentication_token1 = 86,
  aux_sym__kbd_interactive_authentication_token2 = 87,
  aux_sym__kex_algorithms_token1 = 88,
  aux_sym__known_hosts_command_token1 = 89,
  aux_sym__local_command_token1 = 90,
  aux_sym__local_forward_token1 = 91,
  aux_sym__log_level_token1 = 92,
  aux_sym__log_verbose_token1 = 93,
  aux_sym__log_verbose_value_token1 = 94,
  aux_sym__macs_token1 = 95,
  aux_sym__no_host_authentication_for_localhost_token1 = 96,
  aux_sym__number_of_password_prompts_token1 = 97,
  aux_sym__password_authentication_token1 = 98,
  aux_sym__permit_local_command_token1 = 99,
  aux_sym__permit_remote_open_token1 = 100,
  aux_sym__pkcs11_provider_token1 = 101,
  aux_sym__port_token1 = 102,
  aux_sym__preferred_authentications_token1 = 103,
  aux_sym__proxy_command_token1 = 104,
  aux_sym__proxy_jump_token1 = 105,
  anon_sym_AT = 106,
  aux_sym__proxy_jump_value_token1 = 107,
  aux_sym__proxy_use_fdpass_token1 = 108,
  aux_sym__pubkey_accepted_algorithms_token1 = 109,
  aux_sym__pubkey_accepted_algorithms_token2 = 110,
  aux_sym__pubkey_authentication_token1 = 111,
  anon_sym_unbound = 112,
  anon_sym_host_DASHbound = 113,
  aux_sym__rekey_limit_token1 = 114,
  aux_sym__remote_command_token1 = 115,
  aux_sym__remote_command_token2 = 116,
  aux_sym__remote_forward_token1 = 117,
  aux_sym__request_tty_token1 = 118,
  anon_sym_force = 119,
  aux_sym__required_rsa_size_token1 = 120,
  aux_sym__revoked_host_keys_token1 = 121,
  aux_sym__security_key_provider_token1 = 122,
  aux_sym__send_env_token1 = 123,
  aux_sym__send_env_value_token1 = 124,
  aux_sym__server_alive_count_max_token1 = 125,
  aux_sym__server_alive_interval_token1 = 126,
  aux_sym__session_type_token1 = 127,
  anon_sym_subsystem = 128,
  anon_sym_default = 129,
  aux_sym__set_env_token1 = 130,
  anon_sym_EQ = 131,
  aux_sym__stdin_null_token1 = 132,
  aux_sym__stream_local_bind_mask_token1 = 133,
  aux_sym__stream_local_bind_mask_token2 = 134,
  aux_sym__stream_local_bind_unlink_token1 = 135,
  aux_sym__strict_host_key_checking_token1 = 136,
  anon_sym_accept_DASHnew = 137,
  anon_sym_off = 138,
  aux_sym__syslog_facility_token1 = 139,
  aux_sym__tcp_keep_alive_token1 = 140,
  aux_sym__tag_token1 = 141,
  aux_sym__tunnel_token1 = 142,
  anon_sym_point_DASHto_DASHpoint = 143,
  anon_sym_ethernet = 144,
  aux_sym__tunnel_device_token1 = 145,
  aux_sym__update_host_keys_token1 = 146,
  aux_sym__use_keychain_token1 = 147,
  aux_sym__user_token1 = 148,
  aux_sym__user_known_hosts_file_token1 = 149,
  aux_sym__verify_host_key_dns_token1 = 150,
  aux_sym__visual_host_key_token1 = 151,
  aux_sym__xauth_location_token1 = 152,
  sym_ipqos = 153,
  sym_verbosity = 154,
  sym_facility = 155,
  sym_authentication = 156,
  sym_cipher = 157,
  sym_kex = 158,
  sym_key_sig = 159,
  sym_mac = 160,
  sym_sig = 161,
  aux_sym__file_token_token1 = 162,
  aux_sym__hosts_token_token1 = 163,
  aux_sym__hostname_token_token1 = 164,
  aux_sym__proxy_token_token1 = 165,
  sym_token = 166,
  anon_sym_DOLLAR = 167,
  sym__var_name = 168,
  anon_sym_DOLLAR_LBRACE = 169,
  anon_sym_RBRACE = 170,
  anon_sym_yes = 171,
  anon_sym_no = 172,
  sym__number = 173,
  aux_sym_bytes_token1 = 174,
  aux_sym_time_token1 = 175,
  aux_sym_time_token2 = 176,
  aux_sym_time_token3 = 177,
  aux_sym_time_token4 = 178,
  aux_sym_time_token5 = 179,
  sym_comment = 180,
  aux_sym__sep_token1 = 181,
  sym__space = 182,
  sym__eol = 183,
  sym_config = 184,
  sym_host_declaration = 185,
  sym_match_declaration = 186,
  sym_condition = 187,
  sym__all = 188,
  sym__match_canonical = 189,
  sym__match_final = 190,
  sym__match_exec = 191,
  sym__match_localnetwork = 192,
  sym__match_host = 193,
  sym__match_originalhost = 194,
  sym__match_tagged = 195,
  sym__match_user = 196,
  sym__match_localuser = 197,
  sym__match_value = 198,
  sym__declarations = 199,
  sym_parameter = 200,
  sym__add_keys_to_agent = 201,
  sym__address_family = 202,
  sym__batch_mode = 203,
  sym__bind_address = 204,
  sym__bind_interface = 205,
  sym__canonical_domains = 206,
  sym__canonicalize_fallback_local = 207,
  sym__canonicalize_hostname = 208,
  sym__canonicalize_max_dots = 209,
  sym__canonicalize_permitted_cnames = 210,
  sym__cnames_map = 211,
  sym__ca_signature_algorithms = 212,
  sym__certificate_file = 213,
  sym__check_host_ip = 214,
  sym__ciphers = 215,
  sym__clear_all_forwardings = 216,
  sym__compression = 217,
  sym__connection_attempts = 218,
  sym__connect_timeout = 219,
  sym__control_master = 220,
  sym__control_persist = 221,
  sym__control_path = 222,
  sym__dynamic_forward = 223,
  sym__forward_value_inner = 224,
  sym__dynamic_forward_value = 225,
  sym__enable_escape_command_line = 226,
  sym__enable_ssh_keysign = 227,
  sym__escape_char = 228,
  sym__exit_on_forward_failure = 229,
  sym__fingerprint_hash = 230,
  sym__fork_after_authentication = 231,
  sym__forward_agent = 232,
  sym__forward_x11 = 233,
  sym__forward_x11_timeout = 234,
  sym__forward_x11_trusted = 235,
  sym__global_known_hosts_file = 236,
  sym__gssapi_authentication = 237,
  sym__gssapi_delegate_credentials = 238,
  sym__hash_known_hosts = 239,
  sym__hostbased_accepted_algorithms = 240,
  sym__hostbased_authentication = 241,
  sym__host_key_algorithms = 242,
  sym__host_key_alias = 243,
  sym__hostname = 244,
  sym__identities_only = 245,
  sym__identity_agent = 246,
  sym__identity_file = 247,
  sym__ignore_unknown = 248,
  sym__include = 249,
  sym__ipqos = 250,
  sym__kbd_interactive_authentication = 251,
  sym__kex_algorithms = 252,
  sym__known_hosts_command = 253,
  sym__local_command = 254,
  sym__local_forward = 255,
  sym__forward_value1 = 256,
  sym__forward_value2 = 257,
  sym__log_level = 258,
  sym__log_verbose = 259,
  sym__log_verbose_value = 260,
  sym__log_verbose_quoted = 261,
  sym__macs = 262,
  sym__no_host_authentication_for_localhost = 263,
  sym__number_of_password_prompts = 264,
  sym__password_authentication = 265,
  sym__permit_local_command = 266,
  sym__permit_remote_open = 267,
  sym__permit_remote_open_value = 268,
  sym__pkcs11_provider = 269,
  sym__port = 270,
  sym__preferred_authentications = 271,
  sym__proxy_command = 272,
  sym__proxy_jump = 273,
  sym__proxy_jump_value = 274,
  sym__proxy_use_fdpass = 275,
  sym__pubkey_accepted_algorithms = 276,
  sym__pubkey_authentication = 277,
  sym__pubkey_authentication_arg = 278,
  sym__rekey_limit = 279,
  sym__remote_command = 280,
  sym__remote_forward = 281,
  sym__request_tty = 282,
  sym__required_rsa_size = 283,
  sym__revoked_host_keys = 284,
  sym__security_key_provider = 285,
  sym__send_env = 286,
  sym__send_env_value = 287,
  sym__server_alive_count_max = 288,
  sym__server_alive_interval = 289,
  sym__session_type = 290,
  sym__set_env = 291,
  sym__set_env_value = 292,
  sym__stdin_null = 293,
  sym__stream_local_bind_mask = 294,
  sym__stream_local_bind_unlink = 295,
  sym__strict_host_key_checking = 296,
  sym__syslog_facility = 297,
  sym__tcp_keep_alive = 298,
  sym__tag = 299,
  sym__tunnel = 300,
  sym__tunnel_device = 301,
  sym__update_host_keys = 302,
  sym__use_keychain = 303,
  sym__user = 304,
  sym__user_known_hosts_file = 305,
  sym__verify_host_key_dns = 306,
  sym__visual_host_key = 307,
  sym__xauth_location = 308,
  sym__file_token = 309,
  sym__hosts_token = 310,
  sym__hostname_token = 311,
  sym__proxy_token = 312,
  sym__var_value = 313,
  sym_variable = 314,
  sym__file_string = 315,
  sym__hosts_string = 316,
  sym__hostname_string = 317,
  sym__proxy_string = 318,
  sym__token_string = 319,
  sym__string = 320,
  sym__plain_string = 321,
  sym__file_pattern_vars = 322,
  sym__pattern = 323,
  sym__boolean = 324,
  sym_number = 325,
  sym_bytes = 326,
  sym_time = 327,
  sym__sep = 328,
  aux_sym_config_repeat1 = 329,
  aux_sym_host_declaration_repeat1 = 330,
  aux_sym_match_declaration_repeat1 = 331,
  aux_sym__match_exec_repeat1 = 332,
  aux_sym__match_exec_repeat2 = 333,
  aux_sym__match_localnetwork_repeat1 = 334,
  aux_sym__match_localnetwork_repeat2 = 335,
  aux_sym__match_value_repeat1 = 336,
  aux_sym__match_value_repeat2 = 337,
  aux_sym__match_value_repeat3 = 338,
  aux_sym__match_value_repeat4 = 339,
  aux_sym__declarations_repeat1 = 340,
  aux_sym__canonical_domains_repeat1 = 341,
  aux_sym__canonicalize_permitted_cnames_repeat1 = 342,
  aux_sym__cnames_map_repeat1 = 343,
  aux_sym__ca_signature_algorithms_repeat1 = 344,
  aux_sym__ciphers_repeat1 = 345,
  aux_sym__dynamic_forward_repeat1 = 346,
  aux_sym__global_known_hosts_file_repeat1 = 347,
  aux_sym__hostbased_accepted_algorithms_repeat1 = 348,
  aux_sym__ignore_unknown_repeat1 = 349,
  aux_sym__kex_algorithms_repeat1 = 350,
  aux_sym__log_verbose_repeat1 = 351,
  aux_sym__log_verbose_repeat2 = 352,
  aux_sym__log_verbose_value_repeat1 = 353,
  aux_sym__macs_repeat1 = 354,
  aux_sym__permit_remote_open_repeat1 = 355,
  aux_sym__preferred_authentications_repeat1 = 356,
  aux_sym__proxy_jump_repeat1 = 357,
  aux_sym__remote_command_repeat1 = 358,
  aux_sym__send_env_repeat1 = 359,
  aux_sym__send_env_value_repeat1 = 360,
  aux_sym__set_env_repeat1 = 361,
  aux_sym__user_known_hosts_file_repeat1 = 362,
  aux_sym__file_string_repeat1 = 363,
  aux_sym__file_string_repeat2 = 364,
  aux_sym__hosts_string_repeat1 = 365,
  aux_sym__hostname_string_repeat1 = 366,
  aux_sym__hostname_string_repeat2 = 367,
  aux_sym__proxy_string_repeat1 = 368,
  aux_sym__token_string_repeat1 = 369,
  aux_sym__string_repeat1 = 370,
  aux_sym__plain_string_repeat1 = 371,
  aux_sym__file_pattern_vars_repeat1 = 372,
  aux_sym__file_pattern_vars_repeat2 = 373,
  alias_sym_pattern = 374,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_host_declaration_token1] = "Host",
  [anon_sym_BANG] = "!",
  [aux_sym_match_declaration_token1] = "Match",
  [aux_sym__all_token1] = "all",
  [aux_sym__match_canonical_token1] = "canonical",
  [aux_sym__match_final_token1] = "final",
  [aux_sym__match_exec_token1] = "exec",
  [aux_sym__match_exec_token2] = "_match_exec_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__match_exec_token3] = "_match_exec_token3",
  [aux_sym__match_localnetwork_token1] = "localnetwork",
  [aux_sym__match_localnetwork_token2] = "string",
  [anon_sym_COMMA] = ",",
  [aux_sym__match_localnetwork_token3] = "string",
  [aux_sym__match_host_token1] = "host",
  [aux_sym__match_originalhost_token1] = "originalhost",
  [aux_sym__match_tagged_token1] = "tagged",
  [aux_sym__match_user_token1] = "user",
  [aux_sym__match_localuser_token1] = "localuser",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [aux_sym__add_keys_to_agent_token1] = "AddKeysToAgent",
  [anon_sym_ask] = "ask",
  [anon_sym_confirm] = "confirm",
  [aux_sym__address_family_token1] = "AddressFamily",
  [anon_sym_any] = "any",
  [anon_sym_inet] = "inet",
  [anon_sym_inet6] = "inet6",
  [aux_sym__batch_mode_token1] = "BatchMode",
  [aux_sym__bind_address_token1] = "BindAddress",
  [aux_sym__bind_interface_token1] = "BindInterface",
  [aux_sym__canonical_domains_token1] = "CanonicalDomains",
  [aux_sym__canonicalize_fallback_local_token1] = "CanonicalizeFallbackLocal",
  [aux_sym__canonicalize_hostname_token1] = "CanonicalizeHostname",
  [aux_sym__canonicalize_max_dots_token1] = "CanonicalizeMaxDots",
  [aux_sym__canonicalize_permitted_cnames_token1] = "CanonicalizePermittedCNAMEs",
  [anon_sym_none] = "none",
  [anon_sym_COLON] = ":",
  [aux_sym__ca_signature_algorithms_token1] = "CASignatureAlgorithms",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym__certificate_file_token1] = "CertificateFile",
  [aux_sym__check_host_ip_token1] = "CheckHostIP",
  [aux_sym__ciphers_token1] = "Ciphers",
  [anon_sym_CARET] = "^",
  [aux_sym__clear_all_forwardings_token1] = "ClearAllForwardings",
  [aux_sym__compression_token1] = "Compression",
  [aux_sym__connection_attempts_token1] = "ConnectionAttempts",
  [aux_sym__connect_timeout_token1] = "ConnectTimeout",
  [aux_sym__control_master_token1] = "ControlMaster",
  [anon_sym_auto] = "auto",
  [anon_sym_autoask] = "autoask",
  [aux_sym__control_persist_token1] = "ControlPersist",
  [aux_sym__control_path_token1] = "ControlPath",
  [aux_sym__dynamic_forward_token1] = "DynamicForward",
  [aux_sym__enable_escape_command_line_token1] = "EnableEscapeCommandline",
  [aux_sym__enable_ssh_keysign_token1] = "EnableSSHKeysign",
  [aux_sym__escape_char_token1] = "EscapeChar",
  [aux_sym__escape_char_token2] = "_escape_char_token2",
  [aux_sym__exit_on_forward_failure_token1] = "ExitOnForwardFailure",
  [aux_sym__fingerprint_hash_token1] = "FingerprintHash",
  [anon_sym_md5] = "md5",
  [anon_sym_sha256] = "sha256",
  [aux_sym__fork_after_authentication_token1] = "ForkAfterAuthentication",
  [aux_sym__forward_agent_token1] = "ForwardAgent",
  [aux_sym__forward_x11_token1] = "ForwardX11",
  [aux_sym__forward_x11_timeout_token1] = "ForwardX11Timeout",
  [aux_sym__forward_x11_trusted_token1] = "ForwardX11Trusted",
  [aux_sym__global_known_hosts_file_token1] = "GlobalKnownHostsFile",
  [aux_sym__gssapi_authentication_token1] = "GSSAPIAuthentication",
  [aux_sym__gssapi_delegate_credentials_token1] = "GSSAPIDelegateCredentials",
  [aux_sym__hash_known_hosts_token1] = "HashKnownHosts",
  [aux_sym__hostbased_accepted_algorithms_token1] = "HostbasedAcceptedAlgorithms",
  [aux_sym__hostbased_accepted_algorithms_token2] = "HostbasedKeyTypes",
  [aux_sym__hostbased_authentication_token1] = "HostbasedAuthentication",
  [aux_sym__host_key_algorithms_token1] = "HostKeyAlgorithms",
  [aux_sym__host_key_alias_token1] = "HostKeyAlias",
  [aux_sym__hostname_token1] = "Hostname",
  [aux_sym__identities_only_token1] = "IdentitiesOnly",
  [aux_sym__identity_agent_token1] = "IdentityAgent",
  [anon_sym_SSH_AUTH_SOCK] = "SSH_AUTH_SOCK",
  [aux_sym__identity_file_token1] = "IdentityFile",
  [aux_sym__ignore_unknown_token1] = "IgnoreUnknown",
  [aux_sym__include_token1] = "Include",
  [aux_sym__ipqos_token1] = "IPQoS",
  [aux_sym__kbd_interactive_authentication_token1] = "KbdInteractiveAuthentication",
  [aux_sym__kbd_interactive_authentication_token2] = "ChallengeResponseAuthentication",
  [aux_sym__kex_algorithms_token1] = "KexAlgorithms",
  [aux_sym__known_hosts_command_token1] = "KnownHostsCommand",
  [aux_sym__local_command_token1] = "LocalCommand",
  [aux_sym__local_forward_token1] = "LocalForward",
  [aux_sym__log_level_token1] = "LogLevel",
  [aux_sym__log_verbose_token1] = "LogVerbose",
  [aux_sym__log_verbose_value_token1] = "_log_verbose_value_token1",
  [aux_sym__macs_token1] = "MACs",
  [aux_sym__no_host_authentication_for_localhost_token1] = "NoHostAuthenticationForLocalhost",
  [aux_sym__number_of_password_prompts_token1] = "NumberOfPasswordPrompts",
  [aux_sym__password_authentication_token1] = "PasswordAuthentication",
  [aux_sym__permit_local_command_token1] = "PermitLocalCommand",
  [aux_sym__permit_remote_open_token1] = "PermitRemoteOpen",
  [aux_sym__pkcs11_provider_token1] = "PKCS11Provider",
  [aux_sym__port_token1] = "Port",
  [aux_sym__preferred_authentications_token1] = "PreferredAuthentications",
  [aux_sym__proxy_command_token1] = "ProxyCommand",
  [aux_sym__proxy_jump_token1] = "ProxyJump",
  [anon_sym_AT] = "@",
  [aux_sym__proxy_jump_value_token1] = "uri",
  [aux_sym__proxy_use_fdpass_token1] = "ProxyUseFdpass",
  [aux_sym__pubkey_accepted_algorithms_token1] = "PubkeyAcceptedAlgorithms",
  [aux_sym__pubkey_accepted_algorithms_token2] = "PubkeyAcceptedKeyTypes",
  [aux_sym__pubkey_authentication_token1] = "PubkeyAuthentication",
  [anon_sym_unbound] = "unbound",
  [anon_sym_host_DASHbound] = "host-bound",
  [aux_sym__rekey_limit_token1] = "RekeyLimit",
  [aux_sym__remote_command_token1] = "RemoteCommand",
  [aux_sym__remote_command_token2] = "_remote_command_token2",
  [aux_sym__remote_forward_token1] = "RemoteForward",
  [aux_sym__request_tty_token1] = "RequestTTY",
  [anon_sym_force] = "force",
  [aux_sym__required_rsa_size_token1] = "RequiredRSASize",
  [aux_sym__revoked_host_keys_token1] = "RevokedHostKeys",
  [aux_sym__security_key_provider_token1] = "SecurityKeyProvider",
  [aux_sym__send_env_token1] = "SendEnv",
  [aux_sym__send_env_value_token1] = "_send_env_value_token1",
  [aux_sym__server_alive_count_max_token1] = "ServerAliveCountMax",
  [aux_sym__server_alive_interval_token1] = "ServerAliveInterval",
  [aux_sym__session_type_token1] = "SessionType",
  [anon_sym_subsystem] = "subsystem",
  [anon_sym_default] = "default",
  [aux_sym__set_env_token1] = "SetEnv",
  [anon_sym_EQ] = "=",
  [aux_sym__stdin_null_token1] = "StdinNull",
  [aux_sym__stream_local_bind_mask_token1] = "StreamLocalBindMask",
  [aux_sym__stream_local_bind_mask_token2] = "number",
  [aux_sym__stream_local_bind_unlink_token1] = "StreamLocalBindUnlink",
  [aux_sym__strict_host_key_checking_token1] = "StrictHostKeyChecking",
  [anon_sym_accept_DASHnew] = "accept-new",
  [anon_sym_off] = "off",
  [aux_sym__syslog_facility_token1] = "SyslogFacility",
  [aux_sym__tcp_keep_alive_token1] = "TCPKeepAlive",
  [aux_sym__tag_token1] = "Tag",
  [aux_sym__tunnel_token1] = "Tunnel",
  [anon_sym_point_DASHto_DASHpoint] = "point-to-point",
  [anon_sym_ethernet] = "ethernet",
  [aux_sym__tunnel_device_token1] = "TunnelDevice",
  [aux_sym__update_host_keys_token1] = "UpdateHostKeys",
  [aux_sym__use_keychain_token1] = "UseKeychain",
  [aux_sym__user_token1] = "User",
  [aux_sym__user_known_hosts_file_token1] = "UserKnownHostsFile",
  [aux_sym__verify_host_key_dns_token1] = "VerifyHostKeyDNS",
  [aux_sym__visual_host_key_token1] = "VisualHostKey",
  [aux_sym__xauth_location_token1] = "XAuthLocation",
  [sym_ipqos] = "ipqos",
  [sym_verbosity] = "verbosity",
  [sym_facility] = "facility",
  [sym_authentication] = "authentication",
  [sym_cipher] = "cipher",
  [sym_kex] = "kex",
  [sym_key_sig] = "key_sig",
  [sym_mac] = "mac",
  [sym_sig] = "sig",
  [aux_sym__file_token_token1] = "token",
  [aux_sym__hosts_token_token1] = "token",
  [aux_sym__hostname_token_token1] = "token",
  [aux_sym__proxy_token_token1] = "token",
  [sym_token] = "token",
  [anon_sym_DOLLAR] = "variable",
  [sym__var_name] = "_var_name",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [sym__number] = "_number",
  [aux_sym_bytes_token1] = "bytes_token1",
  [aux_sym_time_token1] = "time_token1",
  [aux_sym_time_token2] = "time_token2",
  [aux_sym_time_token3] = "time_token3",
  [aux_sym_time_token4] = "time_token4",
  [aux_sym_time_token5] = "time_token5",
  [sym_comment] = "comment",
  [aux_sym__sep_token1] = "=",
  [sym__space] = "_space",
  [sym__eol] = "_eol",
  [sym_config] = "config",
  [sym_host_declaration] = "host_declaration",
  [sym_match_declaration] = "match_declaration",
  [sym_condition] = "condition",
  [sym__all] = "_all",
  [sym__match_canonical] = "_match_canonical",
  [sym__match_final] = "_match_final",
  [sym__match_exec] = "_match_exec",
  [sym__match_localnetwork] = "_match_localnetwork",
  [sym__match_host] = "_match_host",
  [sym__match_originalhost] = "_match_originalhost",
  [sym__match_tagged] = "_match_tagged",
  [sym__match_user] = "_match_user",
  [sym__match_localuser] = "_match_localuser",
  [sym__match_value] = "_match_value",
  [sym__declarations] = "_declarations",
  [sym_parameter] = "parameter",
  [sym__add_keys_to_agent] = "_add_keys_to_agent",
  [sym__address_family] = "_address_family",
  [sym__batch_mode] = "_batch_mode",
  [sym__bind_address] = "_bind_address",
  [sym__bind_interface] = "_bind_interface",
  [sym__canonical_domains] = "_canonical_domains",
  [sym__canonicalize_fallback_local] = "_canonicalize_fallback_local",
  [sym__canonicalize_hostname] = "_canonicalize_hostname",
  [sym__canonicalize_max_dots] = "_canonicalize_max_dots",
  [sym__canonicalize_permitted_cnames] = "_canonicalize_permitted_cnames",
  [sym__cnames_map] = "_cnames_map",
  [sym__ca_signature_algorithms] = "_ca_signature_algorithms",
  [sym__certificate_file] = "_certificate_file",
  [sym__check_host_ip] = "_check_host_ip",
  [sym__ciphers] = "_ciphers",
  [sym__clear_all_forwardings] = "_clear_all_forwardings",
  [sym__compression] = "_compression",
  [sym__connection_attempts] = "_connection_attempts",
  [sym__connect_timeout] = "_connect_timeout",
  [sym__control_master] = "_control_master",
  [sym__control_persist] = "_control_persist",
  [sym__control_path] = "_control_path",
  [sym__dynamic_forward] = "_dynamic_forward",
  [sym__forward_value_inner] = "_forward_value_inner",
  [sym__dynamic_forward_value] = "_dynamic_forward_value",
  [sym__enable_escape_command_line] = "_enable_escape_command_line",
  [sym__enable_ssh_keysign] = "_enable_ssh_keysign",
  [sym__escape_char] = "_escape_char",
  [sym__exit_on_forward_failure] = "_exit_on_forward_failure",
  [sym__fingerprint_hash] = "_fingerprint_hash",
  [sym__fork_after_authentication] = "_fork_after_authentication",
  [sym__forward_agent] = "_forward_agent",
  [sym__forward_x11] = "_forward_x11",
  [sym__forward_x11_timeout] = "_forward_x11_timeout",
  [sym__forward_x11_trusted] = "_forward_x11_trusted",
  [sym__global_known_hosts_file] = "_global_known_hosts_file",
  [sym__gssapi_authentication] = "_gssapi_authentication",
  [sym__gssapi_delegate_credentials] = "_gssapi_delegate_credentials",
  [sym__hash_known_hosts] = "_hash_known_hosts",
  [sym__hostbased_accepted_algorithms] = "_hostbased_accepted_algorithms",
  [sym__hostbased_authentication] = "_hostbased_authentication",
  [sym__host_key_algorithms] = "_host_key_algorithms",
  [sym__host_key_alias] = "_host_key_alias",
  [sym__hostname] = "_hostname",
  [sym__identities_only] = "_identities_only",
  [sym__identity_agent] = "_identity_agent",
  [sym__identity_file] = "_identity_file",
  [sym__ignore_unknown] = "_ignore_unknown",
  [sym__include] = "_include",
  [sym__ipqos] = "_ipqos",
  [sym__kbd_interactive_authentication] = "_kbd_interactive_authentication",
  [sym__kex_algorithms] = "_kex_algorithms",
  [sym__known_hosts_command] = "_known_hosts_command",
  [sym__local_command] = "_local_command",
  [sym__local_forward] = "_local_forward",
  [sym__forward_value1] = "_forward_value1",
  [sym__forward_value2] = "_forward_value2",
  [sym__log_level] = "_log_level",
  [sym__log_verbose] = "_log_verbose",
  [sym__log_verbose_value] = "_log_verbose_value",
  [sym__log_verbose_quoted] = "_log_verbose_quoted",
  [sym__macs] = "_macs",
  [sym__no_host_authentication_for_localhost] = "_no_host_authentication_for_localhost",
  [sym__number_of_password_prompts] = "_number_of_password_prompts",
  [sym__password_authentication] = "_password_authentication",
  [sym__permit_local_command] = "_permit_local_command",
  [sym__permit_remote_open] = "_permit_remote_open",
  [sym__permit_remote_open_value] = "_permit_remote_open_value",
  [sym__pkcs11_provider] = "_pkcs11_provider",
  [sym__port] = "_port",
  [sym__preferred_authentications] = "_preferred_authentications",
  [sym__proxy_command] = "_proxy_command",
  [sym__proxy_jump] = "_proxy_jump",
  [sym__proxy_jump_value] = "_proxy_jump_value",
  [sym__proxy_use_fdpass] = "_proxy_use_fdpass",
  [sym__pubkey_accepted_algorithms] = "_pubkey_accepted_algorithms",
  [sym__pubkey_authentication] = "_pubkey_authentication",
  [sym__pubkey_authentication_arg] = "_pubkey_authentication_arg",
  [sym__rekey_limit] = "_rekey_limit",
  [sym__remote_command] = "_remote_command",
  [sym__remote_forward] = "_remote_forward",
  [sym__request_tty] = "_request_tty",
  [sym__required_rsa_size] = "_required_rsa_size",
  [sym__revoked_host_keys] = "_revoked_host_keys",
  [sym__security_key_provider] = "_security_key_provider",
  [sym__send_env] = "_send_env",
  [sym__send_env_value] = "_send_env_value",
  [sym__server_alive_count_max] = "_server_alive_count_max",
  [sym__server_alive_interval] = "_server_alive_interval",
  [sym__session_type] = "_session_type",
  [sym__set_env] = "_set_env",
  [sym__set_env_value] = "_set_env_value",
  [sym__stdin_null] = "_stdin_null",
  [sym__stream_local_bind_mask] = "_stream_local_bind_mask",
  [sym__stream_local_bind_unlink] = "_stream_local_bind_unlink",
  [sym__strict_host_key_checking] = "_strict_host_key_checking",
  [sym__syslog_facility] = "_syslog_facility",
  [sym__tcp_keep_alive] = "_tcp_keep_alive",
  [sym__tag] = "_tag",
  [sym__tunnel] = "_tunnel",
  [sym__tunnel_device] = "_tunnel_device",
  [sym__update_host_keys] = "_update_host_keys",
  [sym__use_keychain] = "_use_keychain",
  [sym__user] = "_user",
  [sym__user_known_hosts_file] = "_user_known_hosts_file",
  [sym__verify_host_key_dns] = "_verify_host_key_dns",
  [sym__visual_host_key] = "_visual_host_key",
  [sym__xauth_location] = "_xauth_location",
  [sym__file_token] = "_file_token",
  [sym__hosts_token] = "_hosts_token",
  [sym__hostname_token] = "_hostname_token",
  [sym__proxy_token] = "_proxy_token",
  [sym__var_value] = "_var_value",
  [sym_variable] = "variable",
  [sym__file_string] = "_file_string",
  [sym__hosts_string] = "_hosts_string",
  [sym__hostname_string] = "_hostname_string",
  [sym__proxy_string] = "_proxy_string",
  [sym__token_string] = "_token_string",
  [sym__string] = "_string",
  [sym__plain_string] = "_plain_string",
  [sym__file_pattern_vars] = "_file_pattern_vars",
  [sym__pattern] = "_pattern",
  [sym__boolean] = "_boolean",
  [sym_number] = "number",
  [sym_bytes] = "bytes",
  [sym_time] = "time",
  [sym__sep] = "_sep",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_host_declaration_repeat1] = "host_declaration_repeat1",
  [aux_sym_match_declaration_repeat1] = "match_declaration_repeat1",
  [aux_sym__match_exec_repeat1] = "_match_exec_repeat1",
  [aux_sym__match_exec_repeat2] = "_match_exec_repeat2",
  [aux_sym__match_localnetwork_repeat1] = "_match_localnetwork_repeat1",
  [aux_sym__match_localnetwork_repeat2] = "_match_localnetwork_repeat2",
  [aux_sym__match_value_repeat1] = "_match_value_repeat1",
  [aux_sym__match_value_repeat2] = "_match_value_repeat2",
  [aux_sym__match_value_repeat3] = "_match_value_repeat3",
  [aux_sym__match_value_repeat4] = "_match_value_repeat4",
  [aux_sym__declarations_repeat1] = "_declarations_repeat1",
  [aux_sym__canonical_domains_repeat1] = "_canonical_domains_repeat1",
  [aux_sym__canonicalize_permitted_cnames_repeat1] = "_canonicalize_permitted_cnames_repeat1",
  [aux_sym__cnames_map_repeat1] = "_cnames_map_repeat1",
  [aux_sym__ca_signature_algorithms_repeat1] = "_ca_signature_algorithms_repeat1",
  [aux_sym__ciphers_repeat1] = "_ciphers_repeat1",
  [aux_sym__dynamic_forward_repeat1] = "_dynamic_forward_repeat1",
  [aux_sym__global_known_hosts_file_repeat1] = "_global_known_hosts_file_repeat1",
  [aux_sym__hostbased_accepted_algorithms_repeat1] = "_hostbased_accepted_algorithms_repeat1",
  [aux_sym__ignore_unknown_repeat1] = "_ignore_unknown_repeat1",
  [aux_sym__kex_algorithms_repeat1] = "_kex_algorithms_repeat1",
  [aux_sym__log_verbose_repeat1] = "_log_verbose_repeat1",
  [aux_sym__log_verbose_repeat2] = "_log_verbose_repeat2",
  [aux_sym__log_verbose_value_repeat1] = "_log_verbose_value_repeat1",
  [aux_sym__macs_repeat1] = "_macs_repeat1",
  [aux_sym__permit_remote_open_repeat1] = "_permit_remote_open_repeat1",
  [aux_sym__preferred_authentications_repeat1] = "_preferred_authentications_repeat1",
  [aux_sym__proxy_jump_repeat1] = "_proxy_jump_repeat1",
  [aux_sym__remote_command_repeat1] = "_remote_command_repeat1",
  [aux_sym__send_env_repeat1] = "_send_env_repeat1",
  [aux_sym__send_env_value_repeat1] = "_send_env_value_repeat1",
  [aux_sym__set_env_repeat1] = "_set_env_repeat1",
  [aux_sym__user_known_hosts_file_repeat1] = "_user_known_hosts_file_repeat1",
  [aux_sym__file_string_repeat1] = "_file_string_repeat1",
  [aux_sym__file_string_repeat2] = "_file_string_repeat2",
  [aux_sym__hosts_string_repeat1] = "_hosts_string_repeat1",
  [aux_sym__hostname_string_repeat1] = "_hostname_string_repeat1",
  [aux_sym__hostname_string_repeat2] = "_hostname_string_repeat2",
  [aux_sym__proxy_string_repeat1] = "_proxy_string_repeat1",
  [aux_sym__token_string_repeat1] = "_token_string_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__plain_string_repeat1] = "_plain_string_repeat1",
  [aux_sym__file_pattern_vars_repeat1] = "_file_pattern_vars_repeat1",
  [aux_sym__file_pattern_vars_repeat2] = "_file_pattern_vars_repeat2",
  [alias_sym_pattern] = "pattern",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_host_declaration_token1] = aux_sym_host_declaration_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_match_declaration_token1] = aux_sym_match_declaration_token1,
  [aux_sym__all_token1] = aux_sym__all_token1,
  [aux_sym__match_canonical_token1] = aux_sym__match_canonical_token1,
  [aux_sym__match_final_token1] = aux_sym__match_final_token1,
  [aux_sym__match_exec_token1] = aux_sym__match_exec_token1,
  [aux_sym__match_exec_token2] = aux_sym__match_exec_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__match_exec_token3] = aux_sym__match_exec_token3,
  [aux_sym__match_localnetwork_token1] = aux_sym__match_localnetwork_token1,
  [aux_sym__match_localnetwork_token2] = aux_sym__match_localnetwork_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym__match_localnetwork_token3] = aux_sym__match_localnetwork_token2,
  [aux_sym__match_host_token1] = aux_sym__match_host_token1,
  [aux_sym__match_originalhost_token1] = aux_sym__match_originalhost_token1,
  [aux_sym__match_tagged_token1] = aux_sym__match_tagged_token1,
  [aux_sym__match_user_token1] = aux_sym__match_user_token1,
  [aux_sym__match_localuser_token1] = aux_sym__match_localuser_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym__add_keys_to_agent_token1] = aux_sym__add_keys_to_agent_token1,
  [anon_sym_ask] = anon_sym_ask,
  [anon_sym_confirm] = anon_sym_confirm,
  [aux_sym__address_family_token1] = aux_sym__address_family_token1,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_inet] = anon_sym_inet,
  [anon_sym_inet6] = anon_sym_inet6,
  [aux_sym__batch_mode_token1] = aux_sym__batch_mode_token1,
  [aux_sym__bind_address_token1] = aux_sym__bind_address_token1,
  [aux_sym__bind_interface_token1] = aux_sym__bind_interface_token1,
  [aux_sym__canonical_domains_token1] = aux_sym__canonical_domains_token1,
  [aux_sym__canonicalize_fallback_local_token1] = aux_sym__canonicalize_fallback_local_token1,
  [aux_sym__canonicalize_hostname_token1] = aux_sym__canonicalize_hostname_token1,
  [aux_sym__canonicalize_max_dots_token1] = aux_sym__canonicalize_max_dots_token1,
  [aux_sym__canonicalize_permitted_cnames_token1] = aux_sym__canonicalize_permitted_cnames_token1,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__ca_signature_algorithms_token1] = aux_sym__ca_signature_algorithms_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym__certificate_file_token1] = aux_sym__certificate_file_token1,
  [aux_sym__check_host_ip_token1] = aux_sym__check_host_ip_token1,
  [aux_sym__ciphers_token1] = aux_sym__ciphers_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym__clear_all_forwardings_token1] = aux_sym__clear_all_forwardings_token1,
  [aux_sym__compression_token1] = aux_sym__compression_token1,
  [aux_sym__connection_attempts_token1] = aux_sym__connection_attempts_token1,
  [aux_sym__connect_timeout_token1] = aux_sym__connect_timeout_token1,
  [aux_sym__control_master_token1] = aux_sym__control_master_token1,
  [anon_sym_auto] = anon_sym_auto,
  [anon_sym_autoask] = anon_sym_autoask,
  [aux_sym__control_persist_token1] = aux_sym__control_persist_token1,
  [aux_sym__control_path_token1] = aux_sym__control_path_token1,
  [aux_sym__dynamic_forward_token1] = aux_sym__dynamic_forward_token1,
  [aux_sym__enable_escape_command_line_token1] = aux_sym__enable_escape_command_line_token1,
  [aux_sym__enable_ssh_keysign_token1] = aux_sym__enable_ssh_keysign_token1,
  [aux_sym__escape_char_token1] = aux_sym__escape_char_token1,
  [aux_sym__escape_char_token2] = aux_sym__escape_char_token2,
  [aux_sym__exit_on_forward_failure_token1] = aux_sym__exit_on_forward_failure_token1,
  [aux_sym__fingerprint_hash_token1] = aux_sym__fingerprint_hash_token1,
  [anon_sym_md5] = anon_sym_md5,
  [anon_sym_sha256] = anon_sym_sha256,
  [aux_sym__fork_after_authentication_token1] = aux_sym__fork_after_authentication_token1,
  [aux_sym__forward_agent_token1] = aux_sym__forward_agent_token1,
  [aux_sym__forward_x11_token1] = aux_sym__forward_x11_token1,
  [aux_sym__forward_x11_timeout_token1] = aux_sym__forward_x11_timeout_token1,
  [aux_sym__forward_x11_trusted_token1] = aux_sym__forward_x11_trusted_token1,
  [aux_sym__global_known_hosts_file_token1] = aux_sym__global_known_hosts_file_token1,
  [aux_sym__gssapi_authentication_token1] = aux_sym__gssapi_authentication_token1,
  [aux_sym__gssapi_delegate_credentials_token1] = aux_sym__gssapi_delegate_credentials_token1,
  [aux_sym__hash_known_hosts_token1] = aux_sym__hash_known_hosts_token1,
  [aux_sym__hostbased_accepted_algorithms_token1] = aux_sym__hostbased_accepted_algorithms_token1,
  [aux_sym__hostbased_accepted_algorithms_token2] = aux_sym__hostbased_accepted_algorithms_token2,
  [aux_sym__hostbased_authentication_token1] = aux_sym__hostbased_authentication_token1,
  [aux_sym__host_key_algorithms_token1] = aux_sym__host_key_algorithms_token1,
  [aux_sym__host_key_alias_token1] = aux_sym__host_key_alias_token1,
  [aux_sym__hostname_token1] = aux_sym__hostname_token1,
  [aux_sym__identities_only_token1] = aux_sym__identities_only_token1,
  [aux_sym__identity_agent_token1] = aux_sym__identity_agent_token1,
  [anon_sym_SSH_AUTH_SOCK] = anon_sym_SSH_AUTH_SOCK,
  [aux_sym__identity_file_token1] = aux_sym__identity_file_token1,
  [aux_sym__ignore_unknown_token1] = aux_sym__ignore_unknown_token1,
  [aux_sym__include_token1] = aux_sym__include_token1,
  [aux_sym__ipqos_token1] = aux_sym__ipqos_token1,
  [aux_sym__kbd_interactive_authentication_token1] = aux_sym__kbd_interactive_authentication_token1,
  [aux_sym__kbd_interactive_authentication_token2] = aux_sym__kbd_interactive_authentication_token2,
  [aux_sym__kex_algorithms_token1] = aux_sym__kex_algorithms_token1,
  [aux_sym__known_hosts_command_token1] = aux_sym__known_hosts_command_token1,
  [aux_sym__local_command_token1] = aux_sym__local_command_token1,
  [aux_sym__local_forward_token1] = aux_sym__local_forward_token1,
  [aux_sym__log_level_token1] = aux_sym__log_level_token1,
  [aux_sym__log_verbose_token1] = aux_sym__log_verbose_token1,
  [aux_sym__log_verbose_value_token1] = aux_sym__log_verbose_value_token1,
  [aux_sym__macs_token1] = aux_sym__macs_token1,
  [aux_sym__no_host_authentication_for_localhost_token1] = aux_sym__no_host_authentication_for_localhost_token1,
  [aux_sym__number_of_password_prompts_token1] = aux_sym__number_of_password_prompts_token1,
  [aux_sym__password_authentication_token1] = aux_sym__password_authentication_token1,
  [aux_sym__permit_local_command_token1] = aux_sym__permit_local_command_token1,
  [aux_sym__permit_remote_open_token1] = aux_sym__permit_remote_open_token1,
  [aux_sym__pkcs11_provider_token1] = aux_sym__pkcs11_provider_token1,
  [aux_sym__port_token1] = aux_sym__port_token1,
  [aux_sym__preferred_authentications_token1] = aux_sym__preferred_authentications_token1,
  [aux_sym__proxy_command_token1] = aux_sym__proxy_command_token1,
  [aux_sym__proxy_jump_token1] = aux_sym__proxy_jump_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__proxy_jump_value_token1] = aux_sym__proxy_jump_value_token1,
  [aux_sym__proxy_use_fdpass_token1] = aux_sym__proxy_use_fdpass_token1,
  [aux_sym__pubkey_accepted_algorithms_token1] = aux_sym__pubkey_accepted_algorithms_token1,
  [aux_sym__pubkey_accepted_algorithms_token2] = aux_sym__pubkey_accepted_algorithms_token2,
  [aux_sym__pubkey_authentication_token1] = aux_sym__pubkey_authentication_token1,
  [anon_sym_unbound] = anon_sym_unbound,
  [anon_sym_host_DASHbound] = anon_sym_host_DASHbound,
  [aux_sym__rekey_limit_token1] = aux_sym__rekey_limit_token1,
  [aux_sym__remote_command_token1] = aux_sym__remote_command_token1,
  [aux_sym__remote_command_token2] = aux_sym__remote_command_token2,
  [aux_sym__remote_forward_token1] = aux_sym__remote_forward_token1,
  [aux_sym__request_tty_token1] = aux_sym__request_tty_token1,
  [anon_sym_force] = anon_sym_force,
  [aux_sym__required_rsa_size_token1] = aux_sym__required_rsa_size_token1,
  [aux_sym__revoked_host_keys_token1] = aux_sym__revoked_host_keys_token1,
  [aux_sym__security_key_provider_token1] = aux_sym__security_key_provider_token1,
  [aux_sym__send_env_token1] = aux_sym__send_env_token1,
  [aux_sym__send_env_value_token1] = aux_sym__send_env_value_token1,
  [aux_sym__server_alive_count_max_token1] = aux_sym__server_alive_count_max_token1,
  [aux_sym__server_alive_interval_token1] = aux_sym__server_alive_interval_token1,
  [aux_sym__session_type_token1] = aux_sym__session_type_token1,
  [anon_sym_subsystem] = anon_sym_subsystem,
  [anon_sym_default] = anon_sym_default,
  [aux_sym__set_env_token1] = aux_sym__set_env_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__stdin_null_token1] = aux_sym__stdin_null_token1,
  [aux_sym__stream_local_bind_mask_token1] = aux_sym__stream_local_bind_mask_token1,
  [aux_sym__stream_local_bind_mask_token2] = sym_number,
  [aux_sym__stream_local_bind_unlink_token1] = aux_sym__stream_local_bind_unlink_token1,
  [aux_sym__strict_host_key_checking_token1] = aux_sym__strict_host_key_checking_token1,
  [anon_sym_accept_DASHnew] = anon_sym_accept_DASHnew,
  [anon_sym_off] = anon_sym_off,
  [aux_sym__syslog_facility_token1] = aux_sym__syslog_facility_token1,
  [aux_sym__tcp_keep_alive_token1] = aux_sym__tcp_keep_alive_token1,
  [aux_sym__tag_token1] = aux_sym__tag_token1,
  [aux_sym__tunnel_token1] = aux_sym__tunnel_token1,
  [anon_sym_point_DASHto_DASHpoint] = anon_sym_point_DASHto_DASHpoint,
  [anon_sym_ethernet] = anon_sym_ethernet,
  [aux_sym__tunnel_device_token1] = aux_sym__tunnel_device_token1,
  [aux_sym__update_host_keys_token1] = aux_sym__update_host_keys_token1,
  [aux_sym__use_keychain_token1] = aux_sym__use_keychain_token1,
  [aux_sym__user_token1] = aux_sym__user_token1,
  [aux_sym__user_known_hosts_file_token1] = aux_sym__user_known_hosts_file_token1,
  [aux_sym__verify_host_key_dns_token1] = aux_sym__verify_host_key_dns_token1,
  [aux_sym__visual_host_key_token1] = aux_sym__visual_host_key_token1,
  [aux_sym__xauth_location_token1] = aux_sym__xauth_location_token1,
  [sym_ipqos] = sym_ipqos,
  [sym_verbosity] = sym_verbosity,
  [sym_facility] = sym_facility,
  [sym_authentication] = sym_authentication,
  [sym_cipher] = sym_cipher,
  [sym_kex] = sym_kex,
  [sym_key_sig] = sym_key_sig,
  [sym_mac] = sym_mac,
  [sym_sig] = sym_sig,
  [aux_sym__file_token_token1] = sym_token,
  [aux_sym__hosts_token_token1] = sym_token,
  [aux_sym__hostname_token_token1] = sym_token,
  [aux_sym__proxy_token_token1] = sym_token,
  [sym_token] = sym_token,
  [anon_sym_DOLLAR] = sym_variable,
  [sym__var_name] = sym__var_name,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [sym__number] = sym__number,
  [aux_sym_bytes_token1] = aux_sym_bytes_token1,
  [aux_sym_time_token1] = aux_sym_time_token1,
  [aux_sym_time_token2] = aux_sym_time_token2,
  [aux_sym_time_token3] = aux_sym_time_token3,
  [aux_sym_time_token4] = aux_sym_time_token4,
  [aux_sym_time_token5] = aux_sym_time_token5,
  [sym_comment] = sym_comment,
  [aux_sym__sep_token1] = anon_sym_EQ,
  [sym__space] = sym__space,
  [sym__eol] = sym__eol,
  [sym_config] = sym_config,
  [sym_host_declaration] = sym_host_declaration,
  [sym_match_declaration] = sym_match_declaration,
  [sym_condition] = sym_condition,
  [sym__all] = sym__all,
  [sym__match_canonical] = sym__match_canonical,
  [sym__match_final] = sym__match_final,
  [sym__match_exec] = sym__match_exec,
  [sym__match_localnetwork] = sym__match_localnetwork,
  [sym__match_host] = sym__match_host,
  [sym__match_originalhost] = sym__match_originalhost,
  [sym__match_tagged] = sym__match_tagged,
  [sym__match_user] = sym__match_user,
  [sym__match_localuser] = sym__match_localuser,
  [sym__match_value] = sym__match_value,
  [sym__declarations] = sym__declarations,
  [sym_parameter] = sym_parameter,
  [sym__add_keys_to_agent] = sym__add_keys_to_agent,
  [sym__address_family] = sym__address_family,
  [sym__batch_mode] = sym__batch_mode,
  [sym__bind_address] = sym__bind_address,
  [sym__bind_interface] = sym__bind_interface,
  [sym__canonical_domains] = sym__canonical_domains,
  [sym__canonicalize_fallback_local] = sym__canonicalize_fallback_local,
  [sym__canonicalize_hostname] = sym__canonicalize_hostname,
  [sym__canonicalize_max_dots] = sym__canonicalize_max_dots,
  [sym__canonicalize_permitted_cnames] = sym__canonicalize_permitted_cnames,
  [sym__cnames_map] = sym__cnames_map,
  [sym__ca_signature_algorithms] = sym__ca_signature_algorithms,
  [sym__certificate_file] = sym__certificate_file,
  [sym__check_host_ip] = sym__check_host_ip,
  [sym__ciphers] = sym__ciphers,
  [sym__clear_all_forwardings] = sym__clear_all_forwardings,
  [sym__compression] = sym__compression,
  [sym__connection_attempts] = sym__connection_attempts,
  [sym__connect_timeout] = sym__connect_timeout,
  [sym__control_master] = sym__control_master,
  [sym__control_persist] = sym__control_persist,
  [sym__control_path] = sym__control_path,
  [sym__dynamic_forward] = sym__dynamic_forward,
  [sym__forward_value_inner] = sym__forward_value_inner,
  [sym__dynamic_forward_value] = sym__dynamic_forward_value,
  [sym__enable_escape_command_line] = sym__enable_escape_command_line,
  [sym__enable_ssh_keysign] = sym__enable_ssh_keysign,
  [sym__escape_char] = sym__escape_char,
  [sym__exit_on_forward_failure] = sym__exit_on_forward_failure,
  [sym__fingerprint_hash] = sym__fingerprint_hash,
  [sym__fork_after_authentication] = sym__fork_after_authentication,
  [sym__forward_agent] = sym__forward_agent,
  [sym__forward_x11] = sym__forward_x11,
  [sym__forward_x11_timeout] = sym__forward_x11_timeout,
  [sym__forward_x11_trusted] = sym__forward_x11_trusted,
  [sym__global_known_hosts_file] = sym__global_known_hosts_file,
  [sym__gssapi_authentication] = sym__gssapi_authentication,
  [sym__gssapi_delegate_credentials] = sym__gssapi_delegate_credentials,
  [sym__hash_known_hosts] = sym__hash_known_hosts,
  [sym__hostbased_accepted_algorithms] = sym__hostbased_accepted_algorithms,
  [sym__hostbased_authentication] = sym__hostbased_authentication,
  [sym__host_key_algorithms] = sym__host_key_algorithms,
  [sym__host_key_alias] = sym__host_key_alias,
  [sym__hostname] = sym__hostname,
  [sym__identities_only] = sym__identities_only,
  [sym__identity_agent] = sym__identity_agent,
  [sym__identity_file] = sym__identity_file,
  [sym__ignore_unknown] = sym__ignore_unknown,
  [sym__include] = sym__include,
  [sym__ipqos] = sym__ipqos,
  [sym__kbd_interactive_authentication] = sym__kbd_interactive_authentication,
  [sym__kex_algorithms] = sym__kex_algorithms,
  [sym__known_hosts_command] = sym__known_hosts_command,
  [sym__local_command] = sym__local_command,
  [sym__local_forward] = sym__local_forward,
  [sym__forward_value1] = sym__forward_value1,
  [sym__forward_value2] = sym__forward_value2,
  [sym__log_level] = sym__log_level,
  [sym__log_verbose] = sym__log_verbose,
  [sym__log_verbose_value] = sym__log_verbose_value,
  [sym__log_verbose_quoted] = sym__log_verbose_quoted,
  [sym__macs] = sym__macs,
  [sym__no_host_authentication_for_localhost] = sym__no_host_authentication_for_localhost,
  [sym__number_of_password_prompts] = sym__number_of_password_prompts,
  [sym__password_authentication] = sym__password_authentication,
  [sym__permit_local_command] = sym__permit_local_command,
  [sym__permit_remote_open] = sym__permit_remote_open,
  [sym__permit_remote_open_value] = sym__permit_remote_open_value,
  [sym__pkcs11_provider] = sym__pkcs11_provider,
  [sym__port] = sym__port,
  [sym__preferred_authentications] = sym__preferred_authentications,
  [sym__proxy_command] = sym__proxy_command,
  [sym__proxy_jump] = sym__proxy_jump,
  [sym__proxy_jump_value] = sym__proxy_jump_value,
  [sym__proxy_use_fdpass] = sym__proxy_use_fdpass,
  [sym__pubkey_accepted_algorithms] = sym__pubkey_accepted_algorithms,
  [sym__pubkey_authentication] = sym__pubkey_authentication,
  [sym__pubkey_authentication_arg] = sym__pubkey_authentication_arg,
  [sym__rekey_limit] = sym__rekey_limit,
  [sym__remote_command] = sym__remote_command,
  [sym__remote_forward] = sym__remote_forward,
  [sym__request_tty] = sym__request_tty,
  [sym__required_rsa_size] = sym__required_rsa_size,
  [sym__revoked_host_keys] = sym__revoked_host_keys,
  [sym__security_key_provider] = sym__security_key_provider,
  [sym__send_env] = sym__send_env,
  [sym__send_env_value] = sym__send_env_value,
  [sym__server_alive_count_max] = sym__server_alive_count_max,
  [sym__server_alive_interval] = sym__server_alive_interval,
  [sym__session_type] = sym__session_type,
  [sym__set_env] = sym__set_env,
  [sym__set_env_value] = sym__set_env_value,
  [sym__stdin_null] = sym__stdin_null,
  [sym__stream_local_bind_mask] = sym__stream_local_bind_mask,
  [sym__stream_local_bind_unlink] = sym__stream_local_bind_unlink,
  [sym__strict_host_key_checking] = sym__strict_host_key_checking,
  [sym__syslog_facility] = sym__syslog_facility,
  [sym__tcp_keep_alive] = sym__tcp_keep_alive,
  [sym__tag] = sym__tag,
  [sym__tunnel] = sym__tunnel,
  [sym__tunnel_device] = sym__tunnel_device,
  [sym__update_host_keys] = sym__update_host_keys,
  [sym__use_keychain] = sym__use_keychain,
  [sym__user] = sym__user,
  [sym__user_known_hosts_file] = sym__user_known_hosts_file,
  [sym__verify_host_key_dns] = sym__verify_host_key_dns,
  [sym__visual_host_key] = sym__visual_host_key,
  [sym__xauth_location] = sym__xauth_location,
  [sym__file_token] = sym__file_token,
  [sym__hosts_token] = sym__hosts_token,
  [sym__hostname_token] = sym__hostname_token,
  [sym__proxy_token] = sym__proxy_token,
  [sym__var_value] = sym__var_value,
  [sym_variable] = sym_variable,
  [sym__file_string] = sym__file_string,
  [sym__hosts_string] = sym__hosts_string,
  [sym__hostname_string] = sym__hostname_string,
  [sym__proxy_string] = sym__proxy_string,
  [sym__token_string] = sym__token_string,
  [sym__string] = sym__string,
  [sym__plain_string] = sym__plain_string,
  [sym__file_pattern_vars] = sym__file_pattern_vars,
  [sym__pattern] = sym__pattern,
  [sym__boolean] = sym__boolean,
  [sym_number] = sym_number,
  [sym_bytes] = sym_bytes,
  [sym_time] = sym_time,
  [sym__sep] = sym__sep,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_host_declaration_repeat1] = aux_sym_host_declaration_repeat1,
  [aux_sym_match_declaration_repeat1] = aux_sym_match_declaration_repeat1,
  [aux_sym__match_exec_repeat1] = aux_sym__match_exec_repeat1,
  [aux_sym__match_exec_repeat2] = aux_sym__match_exec_repeat2,
  [aux_sym__match_localnetwork_repeat1] = aux_sym__match_localnetwork_repeat1,
  [aux_sym__match_localnetwork_repeat2] = aux_sym__match_localnetwork_repeat2,
  [aux_sym__match_value_repeat1] = aux_sym__match_value_repeat1,
  [aux_sym__match_value_repeat2] = aux_sym__match_value_repeat2,
  [aux_sym__match_value_repeat3] = aux_sym__match_value_repeat3,
  [aux_sym__match_value_repeat4] = aux_sym__match_value_repeat4,
  [aux_sym__declarations_repeat1] = aux_sym__declarations_repeat1,
  [aux_sym__canonical_domains_repeat1] = aux_sym__canonical_domains_repeat1,
  [aux_sym__canonicalize_permitted_cnames_repeat1] = aux_sym__canonicalize_permitted_cnames_repeat1,
  [aux_sym__cnames_map_repeat1] = aux_sym__cnames_map_repeat1,
  [aux_sym__ca_signature_algorithms_repeat1] = aux_sym__ca_signature_algorithms_repeat1,
  [aux_sym__ciphers_repeat1] = aux_sym__ciphers_repeat1,
  [aux_sym__dynamic_forward_repeat1] = aux_sym__dynamic_forward_repeat1,
  [aux_sym__global_known_hosts_file_repeat1] = aux_sym__global_known_hosts_file_repeat1,
  [aux_sym__hostbased_accepted_algorithms_repeat1] = aux_sym__hostbased_accepted_algorithms_repeat1,
  [aux_sym__ignore_unknown_repeat1] = aux_sym__ignore_unknown_repeat1,
  [aux_sym__kex_algorithms_repeat1] = aux_sym__kex_algorithms_repeat1,
  [aux_sym__log_verbose_repeat1] = aux_sym__log_verbose_repeat1,
  [aux_sym__log_verbose_repeat2] = aux_sym__log_verbose_repeat2,
  [aux_sym__log_verbose_value_repeat1] = aux_sym__log_verbose_value_repeat1,
  [aux_sym__macs_repeat1] = aux_sym__macs_repeat1,
  [aux_sym__permit_remote_open_repeat1] = aux_sym__permit_remote_open_repeat1,
  [aux_sym__preferred_authentications_repeat1] = aux_sym__preferred_authentications_repeat1,
  [aux_sym__proxy_jump_repeat1] = aux_sym__proxy_jump_repeat1,
  [aux_sym__remote_command_repeat1] = aux_sym__remote_command_repeat1,
  [aux_sym__send_env_repeat1] = aux_sym__send_env_repeat1,
  [aux_sym__send_env_value_repeat1] = aux_sym__send_env_value_repeat1,
  [aux_sym__set_env_repeat1] = aux_sym__set_env_repeat1,
  [aux_sym__user_known_hosts_file_repeat1] = aux_sym__user_known_hosts_file_repeat1,
  [aux_sym__file_string_repeat1] = aux_sym__file_string_repeat1,
  [aux_sym__file_string_repeat2] = aux_sym__file_string_repeat2,
  [aux_sym__hosts_string_repeat1] = aux_sym__hosts_string_repeat1,
  [aux_sym__hostname_string_repeat1] = aux_sym__hostname_string_repeat1,
  [aux_sym__hostname_string_repeat2] = aux_sym__hostname_string_repeat2,
  [aux_sym__proxy_string_repeat1] = aux_sym__proxy_string_repeat1,
  [aux_sym__token_string_repeat1] = aux_sym__token_string_repeat1,
  [aux_sym__string_repeat1] = aux_sym__string_repeat1,
  [aux_sym__plain_string_repeat1] = aux_sym__plain_string_repeat1,
  [aux_sym__file_pattern_vars_repeat1] = aux_sym__file_pattern_vars_repeat1,
  [aux_sym__file_pattern_vars_repeat2] = aux_sym__file_pattern_vars_repeat2,
  [alias_sym_pattern] = alias_sym_pattern,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_host_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_match_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__all_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_canonical_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_final_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_exec_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_exec_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_exec_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_localnetwork_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_localnetwork_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_localnetwork_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__match_host_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_originalhost_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_tagged_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_user_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_localuser_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__add_keys_to_agent_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_confirm] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__address_family_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inet6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__batch_mode_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__bind_address_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__bind_interface_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonical_domains_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonicalize_fallback_local_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonicalize_hostname_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonicalize_max_dots_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonicalize_permitted_cnames_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ca_signature_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__certificate_file_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__check_host_ip_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ciphers_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__clear_all_forwardings_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__compression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__connection_attempts_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__connect_timeout_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__control_master_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoask] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__control_persist_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__control_path_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__dynamic_forward_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__enable_escape_command_line_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__enable_ssh_keysign_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__escape_char_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__escape_char_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__exit_on_forward_failure_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__fingerprint_hash_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_md5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__fork_after_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__forward_agent_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__forward_x11_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__forward_x11_timeout_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__forward_x11_trusted_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__global_known_hosts_file_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__gssapi_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__gssapi_delegate_credentials_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hash_known_hosts_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hostbased_accepted_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hostbased_accepted_algorithms_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hostbased_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__host_key_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__host_key_alias_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hostname_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identities_only_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identity_agent_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SSH_AUTH_SOCK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identity_file_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ignore_unknown_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__include_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ipqos_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__kbd_interactive_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__kbd_interactive_authentication_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__kex_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__known_hosts_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__local_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__local_forward_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__log_level_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__log_verbose_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__log_verbose_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__macs_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__no_host_authentication_for_localhost_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_of_password_prompts_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__password_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__permit_local_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__permit_remote_open_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__pkcs11_provider_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__port_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__preferred_authentications_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__proxy_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__proxy_jump_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__proxy_jump_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__proxy_use_fdpass_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__pubkey_accepted_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__pubkey_accepted_algorithms_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__pubkey_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unbound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_host_DASHbound] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__rekey_limit_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__remote_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__remote_command_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__remote_forward_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__request_tty_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__required_rsa_size_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__revoked_host_keys_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__security_key_provider_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__send_env_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__send_env_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__server_alive_count_max_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__server_alive_interval_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__session_type_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subsystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__set_env_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__stdin_null_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__stream_local_bind_mask_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__stream_local_bind_mask_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__stream_local_bind_unlink_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__strict_host_key_checking_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_accept_DASHnew] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__syslog_facility_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tcp_keep_alive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tag_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tunnel_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_point_DASHto_DASHpoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ethernet] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tunnel_device_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__update_host_keys_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__use_keychain_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__user_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__user_known_hosts_file_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__verify_host_key_dns_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__visual_host_key_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__xauth_location_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_ipqos] = {
    .visible = true,
    .named = true,
  },
  [sym_verbosity] = {
    .visible = true,
    .named = true,
  },
  [sym_facility] = {
    .visible = true,
    .named = true,
  },
  [sym_authentication] = {
    .visible = true,
    .named = true,
  },
  [sym_cipher] = {
    .visible = true,
    .named = true,
  },
  [sym_kex] = {
    .visible = true,
    .named = true,
  },
  [sym_key_sig] = {
    .visible = true,
    .named = true,
  },
  [sym_mac] = {
    .visible = true,
    .named = true,
  },
  [sym_sig] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__file_token_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__hosts_token_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__hostname_token_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__proxy_token_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [sym__var_name] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_bytes_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token5] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__sep_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_host_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_match_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym__all] = {
    .visible = false,
    .named = true,
  },
  [sym__match_canonical] = {
    .visible = false,
    .named = true,
  },
  [sym__match_final] = {
    .visible = false,
    .named = true,
  },
  [sym__match_exec] = {
    .visible = false,
    .named = true,
  },
  [sym__match_localnetwork] = {
    .visible = false,
    .named = true,
  },
  [sym__match_host] = {
    .visible = false,
    .named = true,
  },
  [sym__match_originalhost] = {
    .visible = false,
    .named = true,
  },
  [sym__match_tagged] = {
    .visible = false,
    .named = true,
  },
  [sym__match_user] = {
    .visible = false,
    .named = true,
  },
  [sym__match_localuser] = {
    .visible = false,
    .named = true,
  },
  [sym__match_value] = {
    .visible = false,
    .named = true,
  },
  [sym__declarations] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__add_keys_to_agent] = {
    .visible = false,
    .named = true,
  },
  [sym__address_family] = {
    .visible = false,
    .named = true,
  },
  [sym__batch_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__bind_address] = {
    .visible = false,
    .named = true,
  },
  [sym__bind_interface] = {
    .visible = false,
    .named = true,
  },
  [sym__canonical_domains] = {
    .visible = false,
    .named = true,
  },
  [sym__canonicalize_fallback_local] = {
    .visible = false,
    .named = true,
  },
  [sym__canonicalize_hostname] = {
    .visible = false,
    .named = true,
  },
  [sym__canonicalize_max_dots] = {
    .visible = false,
    .named = true,
  },
  [sym__canonicalize_permitted_cnames] = {
    .visible = false,
    .named = true,
  },
  [sym__cnames_map] = {
    .visible = false,
    .named = true,
  },
  [sym__ca_signature_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__certificate_file] = {
    .visible = false,
    .named = true,
  },
  [sym__check_host_ip] = {
    .visible = false,
    .named = true,
  },
  [sym__ciphers] = {
    .visible = false,
    .named = true,
  },
  [sym__clear_all_forwardings] = {
    .visible = false,
    .named = true,
  },
  [sym__compression] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_attempts] = {
    .visible = false,
    .named = true,
  },
  [sym__connect_timeout] = {
    .visible = false,
    .named = true,
  },
  [sym__control_master] = {
    .visible = false,
    .named = true,
  },
  [sym__control_persist] = {
    .visible = false,
    .named = true,
  },
  [sym__control_path] = {
    .visible = false,
    .named = true,
  },
  [sym__dynamic_forward] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_value_inner] = {
    .visible = false,
    .named = true,
  },
  [sym__dynamic_forward_value] = {
    .visible = false,
    .named = true,
  },
  [sym__enable_escape_command_line] = {
    .visible = false,
    .named = true,
  },
  [sym__enable_ssh_keysign] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_char] = {
    .visible = false,
    .named = true,
  },
  [sym__exit_on_forward_failure] = {
    .visible = false,
    .named = true,
  },
  [sym__fingerprint_hash] = {
    .visible = false,
    .named = true,
  },
  [sym__fork_after_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_agent] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_x11] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_x11_timeout] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_x11_trusted] = {
    .visible = false,
    .named = true,
  },
  [sym__global_known_hosts_file] = {
    .visible = false,
    .named = true,
  },
  [sym__gssapi_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__gssapi_delegate_credentials] = {
    .visible = false,
    .named = true,
  },
  [sym__hash_known_hosts] = {
    .visible = false,
    .named = true,
  },
  [sym__hostbased_accepted_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__hostbased_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__host_key_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__host_key_alias] = {
    .visible = false,
    .named = true,
  },
  [sym__hostname] = {
    .visible = false,
    .named = true,
  },
  [sym__identities_only] = {
    .visible = false,
    .named = true,
  },
  [sym__identity_agent] = {
    .visible = false,
    .named = true,
  },
  [sym__identity_file] = {
    .visible = false,
    .named = true,
  },
  [sym__ignore_unknown] = {
    .visible = false,
    .named = true,
  },
  [sym__include] = {
    .visible = false,
    .named = true,
  },
  [sym__ipqos] = {
    .visible = false,
    .named = true,
  },
  [sym__kbd_interactive_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__kex_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__known_hosts_command] = {
    .visible = false,
    .named = true,
  },
  [sym__local_command] = {
    .visible = false,
    .named = true,
  },
  [sym__local_forward] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_value1] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_value2] = {
    .visible = false,
    .named = true,
  },
  [sym__log_level] = {
    .visible = false,
    .named = true,
  },
  [sym__log_verbose] = {
    .visible = false,
    .named = true,
  },
  [sym__log_verbose_value] = {
    .visible = false,
    .named = true,
  },
  [sym__log_verbose_quoted] = {
    .visible = false,
    .named = true,
  },
  [sym__macs] = {
    .visible = false,
    .named = true,
  },
  [sym__no_host_authentication_for_localhost] = {
    .visible = false,
    .named = true,
  },
  [sym__number_of_password_prompts] = {
    .visible = false,
    .named = true,
  },
  [sym__password_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__permit_local_command] = {
    .visible = false,
    .named = true,
  },
  [sym__permit_remote_open] = {
    .visible = false,
    .named = true,
  },
  [sym__permit_remote_open_value] = {
    .visible = false,
    .named = true,
  },
  [sym__pkcs11_provider] = {
    .visible = false,
    .named = true,
  },
  [sym__port] = {
    .visible = false,
    .named = true,
  },
  [sym__preferred_authentications] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_command] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_jump] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_jump_value] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_use_fdpass] = {
    .visible = false,
    .named = true,
  },
  [sym__pubkey_accepted_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__pubkey_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__pubkey_authentication_arg] = {
    .visible = false,
    .named = true,
  },
  [sym__rekey_limit] = {
    .visible = false,
    .named = true,
  },
  [sym__remote_command] = {
    .visible = false,
    .named = true,
  },
  [sym__remote_forward] = {
    .visible = false,
    .named = true,
  },
  [sym__request_tty] = {
    .visible = false,
    .named = true,
  },
  [sym__required_rsa_size] = {
    .visible = false,
    .named = true,
  },
  [sym__revoked_host_keys] = {
    .visible = false,
    .named = true,
  },
  [sym__security_key_provider] = {
    .visible = false,
    .named = true,
  },
  [sym__send_env] = {
    .visible = false,
    .named = true,
  },
  [sym__send_env_value] = {
    .visible = false,
    .named = true,
  },
  [sym__server_alive_count_max] = {
    .visible = false,
    .named = true,
  },
  [sym__server_alive_interval] = {
    .visible = false,
    .named = true,
  },
  [sym__session_type] = {
    .visible = false,
    .named = true,
  },
  [sym__set_env] = {
    .visible = false,
    .named = true,
  },
  [sym__set_env_value] = {
    .visible = false,
    .named = true,
  },
  [sym__stdin_null] = {
    .visible = false,
    .named = true,
  },
  [sym__stream_local_bind_mask] = {
    .visible = false,
    .named = true,
  },
  [sym__stream_local_bind_unlink] = {
    .visible = false,
    .named = true,
  },
  [sym__strict_host_key_checking] = {
    .visible = false,
    .named = true,
  },
  [sym__syslog_facility] = {
    .visible = false,
    .named = true,
  },
  [sym__tcp_keep_alive] = {
    .visible = false,
    .named = true,
  },
  [sym__tag] = {
    .visible = false,
    .named = true,
  },
  [sym__tunnel] = {
    .visible = false,
    .named = true,
  },
  [sym__tunnel_device] = {
    .visible = false,
    .named = true,
  },
  [sym__update_host_keys] = {
    .visible = false,
    .named = true,
  },
  [sym__use_keychain] = {
    .visible = false,
    .named = true,
  },
  [sym__user] = {
    .visible = false,
    .named = true,
  },
  [sym__user_known_hosts_file] = {
    .visible = false,
    .named = true,
  },
  [sym__verify_host_key_dns] = {
    .visible = false,
    .named = true,
  },
  [sym__visual_host_key] = {
    .visible = false,
    .named = true,
  },
  [sym__xauth_location] = {
    .visible = false,
    .named = true,
  },
  [sym__file_token] = {
    .visible = false,
    .named = true,
  },
  [sym__hosts_token] = {
    .visible = false,
    .named = true,
  },
  [sym__hostname_token] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_token] = {
    .visible = false,
    .named = true,
  },
  [sym__var_value] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__file_string] = {
    .visible = false,
    .named = true,
  },
  [sym__hosts_string] = {
    .visible = false,
    .named = true,
  },
  [sym__hostname_string] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_string] = {
    .visible = false,
    .named = true,
  },
  [sym__token_string] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym__plain_string] = {
    .visible = false,
    .named = true,
  },
  [sym__file_pattern_vars] = {
    .visible = false,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym__sep] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_host_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_exec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_exec_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_localnetwork_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_localnetwork_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_value_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_value_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__canonical_domains_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__canonicalize_permitted_cnames_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cnames_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ca_signature_algorithms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ciphers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__dynamic_forward_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__global_known_hosts_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hostbased_accepted_algorithms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ignore_unknown_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__kex_algorithms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__log_verbose_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__log_verbose_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__log_verbose_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__macs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__permit_remote_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__preferred_authentications_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__proxy_jump_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__remote_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__send_env_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__send_env_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__set_env_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__user_known_hosts_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__file_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__file_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hosts_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hostname_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hostname_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__proxy_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__token_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__plain_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__file_pattern_vars_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__file_pattern_vars_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_pattern] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_bind_address = 2,
  field_criteria = 3,
  field_file = 4,
  field_function = 5,
  field_host = 6,
  field_keyword = 7,
  field_line = 8,
  field_local_tun = 9,
  field_name = 10,
  field_port = 11,
  field_remote_tun = 12,
  field_socket = 13,
  field_source_domain_list = 14,
  field_target_domain_list = 15,
  field_uri = 16,
  field_user = 17,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_bind_address] = "bind_address",
  [field_criteria] = "criteria",
  [field_file] = "file",
  [field_function] = "function",
  [field_host] = "host",
  [field_keyword] = "keyword",
  [field_line] = "line",
  [field_local_tun] = "local_tun",
  [field_name] = "name",
  [field_port] = "port",
  [field_remote_tun] = "remote_tun",
  [field_socket] = "socket",
  [field_source_domain_list] = "source_domain_list",
  [field_target_domain_list] = "target_domain_list",
  [field_uri] = "uri",
  [field_user] = "user",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
  [3] = {.index = 6, .length = 4},
  [4] = {.index = 10, .length = 3},
  [5] = {.index = 13, .length = 5},
  [6] = {.index = 18, .length = 5},
  [7] = {.index = 23, .length = 4},
  [8] = {.index = 27, .length = 6},
  [9] = {.index = 33, .length = 4},
  [10] = {.index = 37, .length = 1},
  [12] = {.index = 38, .length = 1},
  [13] = {.index = 39, .length = 1},
  [14] = {.index = 40, .length = 2},
  [15] = {.index = 42, .length = 2},
  [16] = {.index = 44, .length = 1},
  [17] = {.index = 45, .length = 4},
  [18] = {.index = 49, .length = 2},
  [19] = {.index = 51, .length = 4},
  [20] = {.index = 55, .length = 1},
  [22] = {.index = 56, .length = 3},
  [23] = {.index = 59, .length = 1},
  [24] = {.index = 60, .length = 5},
  [25] = {.index = 65, .length = 4},
  [26] = {.index = 69, .length = 1},
  [27] = {.index = 70, .length = 1},
  [28] = {.index = 71, .length = 6},
  [29] = {.index = 77, .length = 1},
  [30] = {.index = 42, .length = 2},
  [31] = {.index = 78, .length = 5},
  [33] = {.index = 83, .length = 1},
  [34] = {.index = 84, .length = 2},
  [35] = {.index = 86, .length = 3},
  [36] = {.index = 89, .length = 7},
  [37] = {.index = 96, .length = 3},
  [38] = {.index = 99, .length = 7},
  [39] = {.index = 106, .length = 1},
  [40] = {.index = 107, .length = 9},
  [41] = {.index = 116, .length = 7},
  [42] = {.index = 123, .length = 11},
  [45] = {.index = 134, .length = 1},
  [46] = {.index = 135, .length = 2},
  [47] = {.index = 137, .length = 2},
  [48] = {.index = 137, .length = 2},
  [49] = {.index = 139, .length = 4},
  [50] = {.index = 143, .length = 3},
  [51] = {.index = 146, .length = 6},
  [52] = {.index = 152, .length = 2},
  [53] = {.index = 106, .length = 1},
  [54] = {.index = 154, .length = 2},
  [56] = {.index = 156, .length = 2},
  [57] = {.index = 158, .length = 3},
  [58] = {.index = 161, .length = 6},
  [59] = {.index = 167, .length = 3},
  [60] = {.index = 170, .length = 9},
  [61] = {.index = 179, .length = 7},
  [62] = {.index = 186, .length = 3},
  [63] = {.index = 189, .length = 6},
  [64] = {.index = 195, .length = 2},
  [65] = {.index = 197, .length = 2},
  [66] = {.index = 199, .length = 4},
  [67] = {.index = 203, .length = 5},
  [68] = {.index = 208, .length = 10},
  [69] = {.index = 218, .length = 2},
  [70] = {.index = 220, .length = 2},
  [71] = {.index = 222, .length = 3},
  [72] = {.index = 225, .length = 3},
  [73] = {.index = 228, .length = 3},
  [74] = {.index = 231, .length = 11},
  [75] = {.index = 242, .length = 4},
  [76] = {.index = 246, .length = 4},
  [77] = {.index = 246, .length = 4},
  [78] = {.index = 250, .length = 4},
  [79] = {.index = 254, .length = 3},
  [80] = {.index = 257, .length = 2},
  [81] = {.index = 259, .length = 3},
  [82] = {.index = 262, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
  [2] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
  [6] =
    {field_argument, 0, .inherited = true},
    {field_bind_address, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
  [10] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [13] =
    {field_argument, 0, .inherited = true},
    {field_bind_address, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_socket, 0, .inherited = true},
  [18] =
    {field_argument, 0, .inherited = true},
    {field_file, 0, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_line, 0, .inherited = true},
  [23] =
    {field_argument, 0, .inherited = true},
    {field_host, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
  [27] =
    {field_argument, 0, .inherited = true},
    {field_host, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_uri, 0, .inherited = true},
    {field_user, 0, .inherited = true},
  [33] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_local_tun, 0, .inherited = true},
    {field_remote_tun, 0, .inherited = true},
  [37] =
    {field_keyword, 0, .inherited = true},
  [38] =
    {field_criteria, 0},
  [39] =
    {field_criteria, 0, .inherited = true},
  [40] =
    {field_argument, 0, .inherited = true},
    {field_criteria, 0, .inherited = true},
  [42] =
    {field_argument, 2},
    {field_keyword, 0},
  [44] =
    {field_keyword, 0},
  [45] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
  [49] =
    {field_bind_address, 0, .inherited = true},
    {field_port, 0, .inherited = true},
  [51] =
    {field_argument, 2},
    {field_bind_address, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
  [55] =
    {field_port, 0},
  [56] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_name, 2, .inherited = true},
  [59] =
    {field_socket, 0},
  [60] =
    {field_argument, 2},
    {field_file, 2, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
  [65] =
    {field_argument, 2},
    {field_host, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
  [69] =
    {field_argument, 0},
  [70] =
    {field_uri, 0},
  [71] =
    {field_argument, 2, .inherited = true},
    {field_host, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_uri, 2, .inherited = true},
    {field_user, 2, .inherited = true},
  [77] =
    {field_host, 0},
  [78] =
    {field_argument, 2},
    {field_bind_address, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_socket, 2, .inherited = true},
  [83] =
    {field_criteria, 1, .inherited = true},
  [84] =
    {field_argument, 1, .inherited = true},
    {field_criteria, 1, .inherited = true},
  [86] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
  [89] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_source_domain_list, 3, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
    {field_target_domain_list, 3, .inherited = true},
  [96] =
    {field_argument, 2},
    {field_argument, 3},
    {field_keyword, 0},
  [99] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_bind_address, 2, .inherited = true},
    {field_bind_address, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
  [106] =
    {field_name, 1},
  [107] =
    {field_argument, 2},
    {field_argument, 3},
    {field_file, 2, .inherited = true},
    {field_file, 3, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
    {field_line, 3, .inherited = true},
  [116] =
    {field_argument, 2},
    {field_argument, 3},
    {field_host, 2, .inherited = true},
    {field_host, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
  [123] =
    {field_argument, 2, .inherited = true},
    {field_argument, 3, .inherited = true},
    {field_host, 2, .inherited = true},
    {field_host, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
    {field_uri, 2, .inherited = true},
    {field_uri, 3, .inherited = true},
    {field_user, 2, .inherited = true},
    {field_user, 3, .inherited = true},
  [134] =
    {field_argument, 1},
  [135] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [137] =
    {field_argument, 2},
    {field_criteria, 0},
  [139] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_keyword, 0},
  [143] =
    {field_argument, 1},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [146] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [152] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
  [154] =
    {field_bind_address, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [156] =
    {field_bind_address, 0},
    {field_port, 2},
  [158] =
    {field_argument, 1},
    {field_bind_address, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [161] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_bind_address, 0, .inherited = true},
    {field_bind_address, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
  [167] =
    {field_argument, 2},
    {field_argument, 4},
    {field_keyword, 0},
  [170] =
    {field_argument, 2},
    {field_argument, 4},
    {field_bind_address, 2, .inherited = true},
    {field_bind_address, 4, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 4, .inherited = true},
    {field_socket, 2, .inherited = true},
    {field_socket, 4, .inherited = true},
  [179] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_file, 3, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 3, .inherited = true},
  [186] =
    {field_file, 1, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 1, .inherited = true},
  [189] =
    {field_file, 0, .inherited = true},
    {field_file, 1, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 0, .inherited = true},
    {field_line, 1, .inherited = true},
  [195] =
    {field_host, 0},
    {field_port, 2},
  [197] =
    {field_host, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [199] =
    {field_host, 0, .inherited = true},
    {field_host, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
  [203] =
    {field_argument, 1, .inherited = true},
    {field_host, 1, .inherited = true},
    {field_port, 1, .inherited = true},
    {field_uri, 1, .inherited = true},
    {field_user, 1, .inherited = true},
  [208] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_host, 0, .inherited = true},
    {field_host, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
    {field_uri, 0, .inherited = true},
    {field_uri, 1, .inherited = true},
    {field_user, 0, .inherited = true},
    {field_user, 1, .inherited = true},
  [218] =
    {field_host, 2},
    {field_user, 0},
  [220] =
    {field_argument, 1},
    {field_argument, 2},
  [222] =
    {field_argument, 2},
    {field_argument, 3},
    {field_criteria, 0},
  [225] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
    {field_target_domain_list, 3},
  [228] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
  [231] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_file, 3, .inherited = true},
    {field_file, 4, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_function, 4, .inherited = true},
    {field_keyword, 0},
    {field_line, 3, .inherited = true},
    {field_line, 4, .inherited = true},
  [242] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4, .inherited = true},
    {field_keyword, 0},
  [246] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_criteria, 0},
  [250] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
    {field_target_domain_list, 4},
  [254] =
    {field_file, 0},
    {field_function, 2},
    {field_line, 4},
  [257] =
    {field_host, 1},
    {field_port, 3},
  [259] =
    {field_host, 2},
    {field_port, 4},
    {field_user, 0},
  [262] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_criteria, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [0] = alias_sym_pattern,
  },
  [21] = {
    [0] = aux_sym__match_localnetwork_token2,
  },
  [30] = {
    [2] = aux_sym__match_localnetwork_token2,
  },
  [32] = {
    [0] = sym_variable,
  },
  [39] = {
    [1] = sym_variable,
  },
  [43] = {
    [1] = sym_variable,
  },
  [44] = {
    [1] = alias_sym_pattern,
  },
  [47] = {
    [2] = aux_sym__match_localnetwork_token2,
  },
  [55] = {
    [1] = aux_sym__match_localnetwork_token2,
  },
  [76] = {
    [3] = aux_sym__match_localnetwork_token2,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__match_exec_repeat1, 2,
    aux_sym__match_exec_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__match_exec_repeat2, 2,
    aux_sym__match_exec_repeat2,
    aux_sym__match_localnetwork_token2,
  aux_sym__match_value_repeat1, 2,
    aux_sym__match_value_repeat1,
    alias_sym_pattern,
  aux_sym__match_value_repeat3, 2,
    aux_sym__match_value_repeat3,
    alias_sym_pattern,
  aux_sym__remote_command_repeat1, 2,
    aux_sym__remote_command_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__send_env_value_repeat1, 2,
    aux_sym__send_env_value_repeat1,
    sym_variable,
  aux_sym__file_string_repeat1, 2,
    aux_sym__file_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__file_string_repeat2, 2,
    aux_sym__file_string_repeat2,
    aux_sym__match_localnetwork_token2,
  aux_sym__hosts_string_repeat1, 2,
    aux_sym__hosts_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__hostname_string_repeat1, 2,
    aux_sym__hostname_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__hostname_string_repeat2, 2,
    aux_sym__hostname_string_repeat2,
    aux_sym__match_localnetwork_token2,
  aux_sym__proxy_string_repeat1, 2,
    aux_sym__proxy_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__token_string_repeat1, 2,
    aux_sym__token_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__string_repeat1, 2,
    aux_sym__string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__plain_string_repeat1, 2,
    aux_sym__plain_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__file_pattern_vars_repeat1, 2,
    aux_sym__file_pattern_vars_repeat1,
    alias_sym_pattern,
  aux_sym__file_pattern_vars_repeat2, 2,
    aux_sym__file_pattern_vars_repeat2,
    alias_sym_pattern,
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
  [96] = 89,
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
  [108] = 90,
  [109] = 87,
  [110] = 76,
  [111] = 91,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 107,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 87,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 89,
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
  [148] = 117,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 114,
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
  [172] = 114,
  [173] = 90,
  [174] = 174,
  [175] = 90,
  [176] = 116,
  [177] = 177,
  [178] = 90,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 117,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 76,
  [190] = 174,
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
  [264] = 90,
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
  [275] = 91,
  [276] = 174,
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
  [287] = 116,
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
  [329] = 273,
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
  [367] = 91,
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
  [462] = 76,
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
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 116,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 791,
  [792] = 792,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 814,
  [815] = 815,
  [816] = 816,
  [817] = 817,
  [818] = 818,
  [819] = 819,
  [820] = 820,
  [821] = 821,
  [822] = 822,
  [823] = 823,
  [824] = 824,
  [825] = 825,
  [826] = 826,
  [827] = 827,
  [828] = 828,
  [829] = 829,
  [830] = 825,
  [831] = 831,
  [832] = 825,
  [833] = 825,
  [834] = 825,
  [835] = 825,
  [836] = 805,
  [837] = 805,
  [838] = 805,
  [839] = 805,
  [840] = 805,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1860);
      ADVANCE_MAP(
        '!', 1862,
        '"', 1878,
        '$', 2065,
        '%', 1877,
        '*', 1898,
        '+', 1922,
        ',', 1891,
        '-', 1923,
        ':', 1920,
        '=', 2022,
        '?', 1901,
        '@', 1990,
        'S', 1868,
        '^', 1927,
        's', 1868,
        '}', 2068,
        '\n', 1880,
        '\r', 1880,
        'D', 1868,
        'd', 1868,
        'H', 1868,
        'h', 1868,
        'M', 1868,
        'm', 1868,
        'W', 1868,
        'w', 1868,
        '\t', 1880,
        0x0b, 1880,
        '\f', 1880,
        ' ', 1880,
        'G', 1868,
        'K', 1868,
        'g', 1868,
        'k', 1868,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1868);
      if (lookahead != 0) ADVANCE(1868);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2083);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 2083,
        '\r', 1,
        '!', 1862,
        '"', 1878,
        '*', 1898,
        '+', 1922,
        '-', 1923,
        '0', 2071,
        ':', 1920,
        '=', 2080,
        '?', 1901,
        'A', 1236,
        'C', 786,
        'E', 1821,
        'F', 1174,
        'O', 1570,
        'S', 1978,
        'a', 363,
        'c', 562,
        'e', 372,
        'f', 564,
        'n', 556,
        'o', 435,
        'p', 568,
        'r', 669,
        's', 504,
        'w', 430,
        'y', 416,
        '\t', 2081,
        ' ', 2081,
        'H', 1473,
        'h', 1473,
        'L', 1468,
        'l', 1468,
        'T', 748,
        't', 748,
        'U', 1654,
        'u', 1654,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2072);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1862);
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '*') ADVANCE(1898);
      if (lookahead == '?') ADVANCE(1901);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead)) ADVANCE(1868);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 2083,
        '\r', 1,
        '$', 1874,
        '%', 1877,
        '*', 1898,
        '?', 1901,
        '\t', 2082,
        ' ', 2082,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1868);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1874);
      if (lookahead == '%') ADVANCE(1877);
      if (lookahead == ':') ADVANCE(1920);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2082);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1868);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1874);
      if (lookahead == '%') ADVANCE(1877);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2082);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1868);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(2002);
      if (lookahead == '%') ADVANCE(2006);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2003);
      if (lookahead != 0) ADVANCE(2000);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(2002);
      if (lookahead == '%') ADVANCE(2005);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2003);
      if (lookahead != 0) ADVANCE(2000);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1877);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2082);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1868);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1875);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2082);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1868);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(2004);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2003);
      if (lookahead != 0) ADVANCE(2000);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(2007);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2003);
      if (lookahead != 0) ADVANCE(2000);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1898);
      if (lookahead == ',') ADVANCE(1891);
      if (lookahead == '?') ADVANCE(1901);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2082);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1868);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1898);
      if (lookahead == '-') ADVANCE(1923);
      if (lookahead == '?') ADVANCE(1901);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2015);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1898);
      if (lookahead == '?') ADVANCE(1901);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2082);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1868);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 2083,
        '\r', 1,
        '+', 1922,
        '-', 1923,
        '0', 1853,
        '3', 383,
        '^', 1927,
        'a', 417,
        'c', 462,
        '\t', 2082,
        ' ', 2082,
        'D', 2075,
        'd', 2075,
        'H', 2076,
        'h', 2076,
        'M', 2077,
        'm', 2077,
        'S', 2078,
        's', 2078,
        'W', 2074,
        'w', 2074,
      );
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1854);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1891);
      if (lookahead == ':') ADVANCE(1920);
      if (lookahead == '@') ADVANCE(1990);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2082);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1868);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1891);
      if (lookahead == ':') ADVANCE(1920);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2082);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1868);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\n', 2083,
        '\r', 1,
        'A', 292,
        'D', 244,
        'L', 276,
        'U', 284,
        'h', 574,
        'n', 556,
        'u', 534,
        'y', 416,
        '\t', 2082,
        ' ', 2082,
        'G', 2073,
        'K', 2073,
        'M', 2073,
        'g', 2073,
        'k', 2073,
        'm', 2073,
      );
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(2083);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2082);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1868);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '$') ADVANCE(2065);
      if (lookahead == '%') ADVANCE(1877);
      if (lookahead == 'S') ADVANCE(1869);
      if (lookahead == 'n') ADVANCE(1872);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '$') ADVANCE(1874);
      if (lookahead == '%') ADVANCE(1877);
      if (lookahead == '*') ADVANCE(1898);
      if (lookahead == '0') ADVANCE(1868);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1876);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '$') ADVANCE(1874);
      if (lookahead == '%') ADVANCE(1877);
      if (lookahead == '*') ADVANCE(1898);
      if (lookahead == '?') ADVANCE(1901);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '$') ADVANCE(1874);
      if (lookahead == '%') ADVANCE(1877);
      if (lookahead == '*') ADVANCE(1898);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1880);
      if (lookahead != 0) ADVANCE(1868);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '$') ADVANCE(1874);
      if (lookahead == '%') ADVANCE(1877);
      if (lookahead == 'n') ADVANCE(1872);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '$') ADVANCE(1874);
      if (lookahead == '%') ADVANCE(1877);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '$') ADVANCE(2064);
      if (lookahead == 'n') ADVANCE(1871);
      if (lookahead == 'y') ADVANCE(1870);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '$') ADVANCE(2064);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '$') ADVANCE(1881);
      if (lookahead == '%') ADVANCE(1883);
      if (lookahead == '*') ADVANCE(1898);
      if (lookahead == '?') ADVANCE(1901);
      if (lookahead != 0) ADVANCE(1880);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '$') ADVANCE(1881);
      if (lookahead == '%') ADVANCE(1883);
      if (lookahead != 0) ADVANCE(1880);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '%') ADVANCE(1877);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '%') ADVANCE(1883);
      if (lookahead != 0) ADVANCE(1880);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '%') ADVANCE(1875);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '%') ADVANCE(1882);
      if (lookahead != 0) ADVANCE(1880);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '*') ADVANCE(1898);
      if (lookahead == ',') ADVANCE(1891);
      if (lookahead == '?') ADVANCE(1901);
      if (lookahead != 0) ADVANCE(1880);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '*') ADVANCE(1898);
      if (lookahead == '0') ADVANCE(1868);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1876);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '*') ADVANCE(1898);
      if (lookahead == '?') ADVANCE(1901);
      if (lookahead == 'n') ADVANCE(1872);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '*') ADVANCE(1898);
      if (lookahead == '?') ADVANCE(1901);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '*') ADVANCE(1898);
      if (lookahead == '?') ADVANCE(1901);
      if (lookahead != 0) ADVANCE(1880);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '*') ADVANCE(1898);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1880);
      if (lookahead != 0) ADVANCE(1868);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead != 0) ADVANCE(1880);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1879);
      if (lookahead == '*') ADVANCE(1899);
      if (lookahead == 'a') ADVANCE(1886);
      if (lookahead == 'n') ADVANCE(1888);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1890);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1879);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1890);
      END_STATE();
    case 45:
      if (lookahead == '$') ADVANCE(2002);
      if (lookahead == '%') ADVANCE(2006);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2000);
      END_STATE();
    case 46:
      if (lookahead == '$') ADVANCE(2002);
      if (lookahead == '%') ADVANCE(2005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2000);
      END_STATE();
    case 47:
      if (lookahead == '%') ADVANCE(2004);
      if (lookahead == 'n') ADVANCE(2001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2000);
      END_STATE();
    case 48:
      if (lookahead == '%') ADVANCE(2007);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2000);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(1898);
      if (lookahead == ',') ADVANCE(1891);
      if (lookahead == ':') ADVANCE(1920);
      if (lookahead == '?') ADVANCE(1901);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(1898);
      if (lookahead == ':') ADVANCE(1920);
      if (lookahead == '?') ADVANCE(1901);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1880);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(1900);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1892);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(401);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(380);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(524);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(351);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(710);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(620);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(441);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(535);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(359);
      if (lookahead == '@') ADVANCE(579);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(715);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(452);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(420);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(356);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(350);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(595);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(412);
      if (lookahead == '@') ADVANCE(559);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(616);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(587);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(526);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(490);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(427);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '1') ADVANCE(88);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(687);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(151);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(642);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(541);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(387);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(649);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(346);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(645);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(654);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(549);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(647);
      if (lookahead == '4') ADVANCE(90);
      if (lookahead == '6') ADVANCE(91);
      if (lookahead == '8') ADVANCE(91);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(657);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(648);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(653);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(662);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(547);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(422);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(664);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(550);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(665);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(429);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(554);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(671);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(428);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(673);
      END_STATE();
    case 103:
      if (lookahead == '.') ADVANCE(354);
      END_STATE();
    case 104:
      if (lookahead == '.') ADVANCE(561);
      END_STATE();
    case 105:
      if (lookahead == '.') ADVANCE(364);
      END_STATE();
    case 106:
      if (lookahead == '.') ADVANCE(365);
      END_STATE();
    case 107:
      if (lookahead == '.') ADVANCE(366);
      END_STATE();
    case 108:
      if (lookahead == '.') ADVANCE(367);
      END_STATE();
    case 109:
      if (lookahead == '/') ADVANCE(1857);
      END_STATE();
    case 110:
      if (lookahead == '/') ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead == '0') ADVANCE(139);
      END_STATE();
    case 112:
      if (lookahead == '0') ADVANCE(207);
      END_STATE();
    case 113:
      if (lookahead == '0') ADVANCE(71);
      END_STATE();
    case 114:
      if (lookahead == '1') ADVANCE(1848);
      if (lookahead == '2') ADVANCE(1848);
      if (lookahead == '3') ADVANCE(1848);
      if (lookahead == '4') ADVANCE(1848);
      END_STATE();
    case 115:
      if (lookahead == '1') ADVANCE(2054);
      END_STATE();
    case 116:
      if (lookahead == '1') ADVANCE(2056);
      if (lookahead == '2') ADVANCE(77);
      END_STATE();
    case 117:
      if (lookahead == '1') ADVANCE(230);
      END_STATE();
    case 118:
      if (lookahead == '1') ADVANCE(718);
      END_STATE();
    case 119:
      if (lookahead == '1') ADVANCE(1950);
      END_STATE();
    case 120:
      if (lookahead == '1') ADVANCE(2051);
      END_STATE();
    case 121:
      if (lookahead == '1') ADVANCE(2051);
      if (lookahead == '2') ADVANCE(192);
      END_STATE();
    case 122:
      if (lookahead == '1') ADVANCE(2058);
      END_STATE();
    case 123:
      if (lookahead == '1') ADVANCE(148);
      if (lookahead == '2') ADVANCE(197);
      END_STATE();
    case 124:
      if (lookahead == '1') ADVANCE(177);
      END_STATE();
    case 125:
      if (lookahead == '1') ADVANCE(141);
      if (lookahead == '6') ADVANCE(179);
      END_STATE();
    case 126:
      if (lookahead == '1') ADVANCE(137);
      END_STATE();
    case 127:
      if (lookahead == '1') ADVANCE(226);
      END_STATE();
    case 128:
      if (lookahead == '1') ADVANCE(228);
      END_STATE();
    case 129:
      if (lookahead == '1') ADVANCE(140);
      END_STATE();
    case 130:
      if (lookahead == '1') ADVANCE(227);
      END_STATE();
    case 131:
      if (lookahead == '1') ADVANCE(145);
      END_STATE();
    case 132:
      if (lookahead == '1') ADVANCE(119);
      END_STATE();
    case 133:
      if (lookahead == '1') ADVANCE(232);
      END_STATE();
    case 134:
      if (lookahead == '1') ADVANCE(174);
      END_STATE();
    case 135:
      if (lookahead == '1') ADVANCE(142);
      END_STATE();
    case 136:
      if (lookahead == '1') ADVANCE(143);
      END_STATE();
    case 137:
      if (lookahead == '1') ADVANCE(1519);
      END_STATE();
    case 138:
      if (lookahead == '1') ADVANCE(231);
      END_STATE();
    case 139:
      if (lookahead == '1') ADVANCE(236);
      END_STATE();
    case 140:
      if (lookahead == '2') ADVANCE(2054);
      END_STATE();
    case 141:
      if (lookahead == '2') ADVANCE(221);
      END_STATE();
    case 142:
      if (lookahead == '2') ADVANCE(2051);
      END_STATE();
    case 143:
      if (lookahead == '2') ADVANCE(2058);
      END_STATE();
    case 144:
      if (lookahead == '2') ADVANCE(183);
      END_STATE();
    case 145:
      if (lookahead == '2') ADVANCE(2057);
      END_STATE();
    case 146:
      if (lookahead == '2') ADVANCE(113);
      END_STATE();
    case 147:
      if (lookahead == '2') ADVANCE(187);
      END_STATE();
    case 148:
      if (lookahead == '2') ADVANCE(225);
      if (lookahead == '9') ADVANCE(162);
      END_STATE();
    case 149:
      if (lookahead == '2') ADVANCE(188);
      if (lookahead == '3') ADVANCE(223);
      if (lookahead == '5') ADVANCE(159);
      END_STATE();
    case 150:
      if (lookahead == '2') ADVANCE(188);
      if (lookahead == '5') ADVANCE(129);
      END_STATE();
    case 151:
      if (lookahead == '2') ADVANCE(186);
      if (lookahead == '5') ADVANCE(131);
      END_STATE();
    case 152:
      if (lookahead == '2') ADVANCE(56);
      END_STATE();
    case 153:
      if (lookahead == '2') ADVANCE(189);
      END_STATE();
    case 154:
      if (lookahead == '2') ADVANCE(61);
      END_STATE();
    case 155:
      if (lookahead == '2') ADVANCE(192);
      if (lookahead == '3') ADVANCE(222);
      if (lookahead == '5') ADVANCE(157);
      END_STATE();
    case 156:
      if (lookahead == '2') ADVANCE(193);
      END_STATE();
    case 157:
      if (lookahead == '2') ADVANCE(120);
      END_STATE();
    case 158:
      if (lookahead == '2') ADVANCE(194);
      END_STATE();
    case 159:
      if (lookahead == '2') ADVANCE(115);
      END_STATE();
    case 160:
      if (lookahead == '2') ADVANCE(196);
      if (lookahead == '3') ADVANCE(224);
      if (lookahead == '5') ADVANCE(163);
      END_STATE();
    case 161:
      if (lookahead == '2') ADVANCE(196);
      if (lookahead == '5') ADVANCE(136);
      END_STATE();
    case 162:
      if (lookahead == '2') ADVANCE(67);
      END_STATE();
    case 163:
      if (lookahead == '2') ADVANCE(122);
      END_STATE();
    case 164:
      if (lookahead == '2') ADVANCE(190);
      END_STATE();
    case 165:
      if (lookahead == '2') ADVANCE(202);
      END_STATE();
    case 166:
      if (lookahead == '2') ADVANCE(80);
      END_STATE();
    case 167:
      if (lookahead == '2') ADVANCE(203);
      END_STATE();
    case 168:
      if (lookahead == '2') ADVANCE(83);
      END_STATE();
    case 169:
      if (lookahead == '2') ADVANCE(204);
      END_STATE();
    case 170:
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 171:
      if (lookahead == '2') ADVANCE(93);
      END_STATE();
    case 172:
      if (lookahead == '2') ADVANCE(96);
      END_STATE();
    case 173:
      if (lookahead == '2') ADVANCE(206);
      END_STATE();
    case 174:
      if (lookahead == '2') ADVANCE(237);
      END_STATE();
    case 175:
      if (lookahead == '2') ADVANCE(208);
      END_STATE();
    case 176:
      if (lookahead == '2') ADVANCE(99);
      END_STATE();
    case 177:
      if (lookahead == '3') ADVANCE(112);
      END_STATE();
    case 178:
      if (lookahead == '4') ADVANCE(2054);
      END_STATE();
    case 179:
      if (lookahead == '4') ADVANCE(69);
      END_STATE();
    case 180:
      if (lookahead == '4') ADVANCE(2051);
      END_STATE();
    case 181:
      if (lookahead == '4') ADVANCE(2058);
      END_STATE();
    case 182:
      if (lookahead == '5') ADVANCE(1946);
      END_STATE();
    case 183:
      if (lookahead == '5') ADVANCE(209);
      END_STATE();
    case 184:
      if (lookahead == '5') ADVANCE(2056);
      END_STATE();
    case 185:
      if (lookahead == '5') ADVANCE(117);
      END_STATE();
    case 186:
      if (lookahead == '5') ADVANCE(215);
      END_STATE();
    case 187:
      if (lookahead == '5') ADVANCE(185);
      END_STATE();
    case 188:
      if (lookahead == '5') ADVANCE(210);
      END_STATE();
    case 189:
      if (lookahead == '5') ADVANCE(211);
      END_STATE();
    case 190:
      if (lookahead == '5') ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == '5') ADVANCE(127);
      END_STATE();
    case 192:
      if (lookahead == '5') ADVANCE(212);
      END_STATE();
    case 193:
      if (lookahead == '5') ADVANCE(214);
      END_STATE();
    case 194:
      if (lookahead == '5') ADVANCE(218);
      END_STATE();
    case 195:
      if (lookahead == '5') ADVANCE(128);
      END_STATE();
    case 196:
      if (lookahead == '5') ADVANCE(213);
      END_STATE();
    case 197:
      if (lookahead == '5') ADVANCE(217);
      END_STATE();
    case 198:
      if (lookahead == '5') ADVANCE(134);
      END_STATE();
    case 199:
      if (lookahead == '5') ADVANCE(135);
      END_STATE();
    case 200:
      if (lookahead == '5') ADVANCE(130);
      END_STATE();
    case 201:
      if (lookahead == '5') ADVANCE(133);
      END_STATE();
    case 202:
      if (lookahead == '5') ADVANCE(195);
      END_STATE();
    case 203:
      if (lookahead == '5') ADVANCE(200);
      END_STATE();
    case 204:
      if (lookahead == '5') ADVANCE(201);
      END_STATE();
    case 205:
      if (lookahead == '5') ADVANCE(138);
      END_STATE();
    case 206:
      if (lookahead == '5') ADVANCE(205);
      END_STATE();
    case 207:
      if (lookahead == '5') ADVANCE(239);
      END_STATE();
    case 208:
      if (lookahead == '5') ADVANCE(219);
      END_STATE();
    case 209:
      if (lookahead == '6') ADVANCE(1947);
      END_STATE();
    case 210:
      if (lookahead == '6') ADVANCE(2054);
      END_STATE();
    case 211:
      if (lookahead == '6') ADVANCE(2052);
      END_STATE();
    case 212:
      if (lookahead == '6') ADVANCE(2051);
      END_STATE();
    case 213:
      if (lookahead == '6') ADVANCE(2058);
      END_STATE();
    case 214:
      if (lookahead == '6') ADVANCE(62);
      END_STATE();
    case 215:
      if (lookahead == '6') ADVANCE(2057);
      END_STATE();
    case 216:
      if (lookahead == '6') ADVANCE(118);
      END_STATE();
    case 217:
      if (lookahead == '6') ADVANCE(57);
      END_STATE();
    case 218:
      if (lookahead == '6') ADVANCE(236);
      END_STATE();
    case 219:
      if (lookahead == '6') ADVANCE(238);
      END_STATE();
    case 220:
      if (lookahead == '7') ADVANCE(216);
      END_STATE();
    case 221:
      if (lookahead == '8') ADVANCE(69);
      END_STATE();
    case 222:
      if (lookahead == '8') ADVANCE(180);
      END_STATE();
    case 223:
      if (lookahead == '8') ADVANCE(178);
      END_STATE();
    case 224:
      if (lookahead == '8') ADVANCE(181);
      END_STATE();
    case 225:
      if (lookahead == '8') ADVANCE(57);
      END_STATE();
    case 226:
      if (lookahead == '9') ADVANCE(2054);
      END_STATE();
    case 227:
      if (lookahead == '9') ADVANCE(2058);
      END_STATE();
    case 228:
      if (lookahead == '9') ADVANCE(62);
      END_STATE();
    case 229:
      if (lookahead == '9') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 230:
      if (lookahead == '9') ADVANCE(78);
      END_STATE();
    case 231:
      if (lookahead == '9') ADVANCE(85);
      END_STATE();
    case 232:
      if (lookahead == '9') ADVANCE(238);
      END_STATE();
    case 233:
      if (lookahead == ':') ADVANCE(1920);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 234:
      if (lookahead == ':') ADVANCE(110);
      END_STATE();
    case 235:
      if (lookahead == '@') ADVANCE(559);
      END_STATE();
    case 236:
      if (lookahead == '@') ADVANCE(579);
      END_STATE();
    case 237:
      if (lookahead == '@') ADVANCE(580);
      END_STATE();
    case 238:
      if (lookahead == '@') ADVANCE(581);
      END_STATE();
    case 239:
      if (lookahead == '@') ADVANCE(582);
      END_STATE();
    case 240:
      if (lookahead == 'A') ADVANCE(285);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1344);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1528);
      END_STATE();
    case 241:
      if (lookahead == 'A') ADVANCE(263);
      END_STATE();
    case 242:
      if (lookahead == 'A') ADVANCE(264);
      END_STATE();
    case 243:
      if (lookahead == 'A') ADVANCE(291);
      END_STATE();
    case 244:
      if (lookahead == 'A') ADVANCE(253);
      END_STATE();
    case 245:
      if (lookahead == 'B') ADVANCE(290);
      END_STATE();
    case 246:
      if (lookahead == 'B') ADVANCE(272);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1058);
      END_STATE();
    case 247:
      if (lookahead == 'C') ADVANCE(262);
      END_STATE();
    case 248:
      if (lookahead == 'C') ADVANCE(242);
      END_STATE();
    case 249:
      if (lookahead == 'E') ADVANCE(245);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1349);
      END_STATE();
    case 250:
      if (lookahead == 'E') ADVANCE(1216);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 251:
      if (lookahead == 'E') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(1538);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1619);
      END_STATE();
    case 252:
      if (lookahead == 'E') ADVANCE(2046);
      END_STATE();
    case 253:
      if (lookahead == 'E') ADVANCE(265);
      END_STATE();
    case 254:
      if (lookahead == 'E') ADVANCE(286);
      END_STATE();
    case 255:
      if (lookahead == 'E') ADVANCE(281);
      END_STATE();
    case 256:
      if (lookahead == 'F') ADVANCE(271);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1253);
      END_STATE();
    case 257:
      if (lookahead == 'G') ADVANCE(2047);
      END_STATE();
    case 258:
      if (lookahead == 'H') ADVANCE(294);
      END_STATE();
    case 259:
      if (lookahead == 'H') ADVANCE(2048);
      END_STATE();
    case 260:
      if (lookahead == 'H') ADVANCE(295);
      END_STATE();
    case 261:
      if (lookahead == 'I') ADVANCE(254);
      END_STATE();
    case 262:
      if (lookahead == 'K') ADVANCE(1965);
      END_STATE();
    case 263:
      if (lookahead == 'L') ADVANCE(2046);
      END_STATE();
    case 264:
      if (lookahead == 'L') ADVANCE(1852);
      END_STATE();
    case 265:
      if (lookahead == 'M') ADVANCE(274);
      END_STATE();
    case 266:
      ADVANCE_MAP(
        'N', 256,
        'n', 839,
        'D', 962,
        'd', 962,
        'G', 1348,
        'g', 1348,
        'P', 1527,
        'p', 1527,
      );
      END_STATE();
    case 267:
      if (lookahead == 'N') ADVANCE(2048);
      END_STATE();
    case 268:
      ADVANCE_MAP(
        'N', 839,
        'n', 399,
        'D', 962,
        'd', 962,
        'G', 1348,
        'g', 1348,
        'P', 1527,
        'p', 1527,
      );
      END_STATE();
    case 269:
      if (lookahead == 'O') ADVANCE(846);
      if (lookahead == 'e') ADVANCE(2045);
      if (lookahead == 'o') ADVANCE(714);
      END_STATE();
    case 270:
      if (lookahead == 'O') ADVANCE(1101);
      if (lookahead == 'o') ADVANCE(531);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1293);
      END_STATE();
    case 271:
      if (lookahead == 'O') ADVANCE(2046);
      END_STATE();
    case 272:
      if (lookahead == 'O') ADVANCE(282);
      END_STATE();
    case 273:
      if (lookahead == 'O') ADVANCE(247);
      END_STATE();
    case 274:
      if (lookahead == 'O') ADVANCE(267);
      END_STATE();
    case 275:
      if (lookahead == 'O') ADVANCE(280);
      END_STATE();
    case 276:
      if (lookahead == 'O') ADVANCE(248);
      END_STATE();
    case 277:
      if (lookahead == 'R') ADVANCE(278);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(733);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(844);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1139);
      END_STATE();
    case 278:
      if (lookahead == 'R') ADVANCE(275);
      END_STATE();
    case 279:
      if (lookahead == 'R') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(1137);
      END_STATE();
    case 280:
      if (lookahead == 'R') ADVANCE(2046);
      END_STATE();
    case 281:
      if (lookahead == 'R') ADVANCE(2048);
      END_STATE();
    case 282:
      if (lookahead == 'S') ADVANCE(252);
      END_STATE();
    case 283:
      if (lookahead == 'S') ADVANCE(273);
      END_STATE();
    case 284:
      if (lookahead == 'S') ADVANCE(255);
      END_STATE();
    case 285:
      if (lookahead == 'T') ADVANCE(241);
      END_STATE();
    case 286:
      if (lookahead == 'T') ADVANCE(2046);
      END_STATE();
    case 287:
      if (lookahead == 'T') ADVANCE(259);
      END_STATE();
    case 288:
      if (lookahead == 'T') ADVANCE(260);
      END_STATE();
    case 289:
      if (lookahead == 'U') ADVANCE(261);
      END_STATE();
    case 290:
      if (lookahead == 'U') ADVANCE(257);
      END_STATE();
    case 291:
      if (lookahead == 'U') ADVANCE(288);
      END_STATE();
    case 292:
      if (lookahead == 'U') ADVANCE(287);
      END_STATE();
    case 293:
      if (lookahead == '^') ADVANCE(1943);
      if (lookahead == 'n') ADVANCE(1942);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1941);
      END_STATE();
    case 294:
      if (lookahead == '_') ADVANCE(243);
      END_STATE();
    case 295:
      if (lookahead == '_') ADVANCE(283);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 297:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 298:
      if (lookahead == 'a') ADVANCE(701);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(2054);
      END_STATE();
    case 300:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(2058);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(719);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(704);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 309:
      if (lookahead == 'a') ADVANCE(608);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(588);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(639);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 334:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(709);
      END_STATE();
    case 336:
      if (lookahead == 'b') ADVANCE(619);
      END_STATE();
    case 337:
      if (lookahead == 'b') ADVANCE(480);
      END_STATE();
    case 338:
      if (lookahead == 'b') ADVANCE(307);
      END_STATE();
    case 339:
      if (lookahead == 'b') ADVANCE(349);
      END_STATE();
    case 340:
      if (lookahead == 'b') ADVANCE(349);
      if (lookahead == 't') ADVANCE(603);
      END_STATE();
    case 341:
      if (lookahead == 'b') ADVANCE(575);
      END_STATE();
    case 342:
      if (lookahead == 'b') ADVANCE(314);
      END_STATE();
    case 343:
      if (lookahead == 'b') ADVANCE(569);
      END_STATE();
    case 344:
      if (lookahead == 'b') ADVANCE(514);
      END_STATE();
    case 345:
      if (lookahead == 'b') ADVANCE(632);
      END_STATE();
    case 346:
      if (lookahead == 'b') ADVANCE(578);
      END_STATE();
    case 347:
      if (lookahead == 'b') ADVANCE(335);
      END_STATE();
    case 348:
      ADVANCE_MAP(
        'c', 375,
        'f', 2045,
        'N', 733,
        'n', 733,
        'S', 844,
        's', 844,
        'X', 1139,
        'x', 1139,
      );
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(2050);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(340);
      if (lookahead == 'g') ADVANCE(370);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(2049);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(382);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(560);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(503);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(689);
      END_STATE();
    case 363:
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == 's') ADVANCE(500);
      if (lookahead == 'u') ADVANCE(686);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1237);
      END_STATE();
    case 364:
      if (lookahead == 'c') ADVANCE(563);
      END_STATE();
    case 365:
      if (lookahead == 'c') ADVANCE(567);
      END_STATE();
    case 366:
      if (lookahead == 'c') ADVANCE(570);
      END_STATE();
    case 367:
      if (lookahead == 'c') ADVANCE(571);
      END_STATE();
    case 368:
      if (lookahead == 'c') ADVANCE(457);
      END_STATE();
    case 369:
      if (lookahead == 'c') ADVANCE(460);
      END_STATE();
    case 370:
      if (lookahead == 'c') ADVANCE(528);
      END_STATE();
    case 371:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 372:
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(995);
      END_STATE();
    case 373:
      if (lookahead == 'c') ADVANCE(392);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(847);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(474);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(1996);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(1997);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(2049);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(402);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(627);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(666);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1851);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == 'r') ADVANCE(633);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 389:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 390:
      if (lookahead == 'd') ADVANCE(667);
      END_STATE();
    case 391:
      if (lookahead == 'd') ADVANCE(668);
      END_STATE();
    case 392:
      if (lookahead == 'd') ADVANCE(672);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1349);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(1918);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(2010);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(2049);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(675);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1253);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 's') ADVANCE(640);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == 's') ADVANCE(663);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 431:
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(720);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(892);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1237);
      END_STATE();
    case 432:
      if (lookahead == 'f') ADVANCE(2030);
      END_STATE();
    case 433:
      if (lookahead == 'f') ADVANCE(481);
      END_STATE();
    case 434:
      if (lookahead == 'f') ADVANCE(433);
      END_STATE();
    case 435:
      if (lookahead == 'f') ADVANCE(432);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1144);
      END_STATE();
    case 436:
      if (lookahead == 'f') ADVANCE(298);
      END_STATE();
    case 437:
      if (lookahead == 'f') ADVANCE(485);
      END_STATE();
    case 438:
      if (lookahead == 'g') ADVANCE(2051);
      END_STATE();
    case 439:
      if (lookahead == 'g') ADVANCE(447);
      END_STATE();
    case 440:
      if (lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 441:
      if (lookahead == 'g') ADVANCE(611);
      END_STATE();
    case 442:
      if (lookahead == 'g') ADVANCE(643);
      if (lookahead == 'h') ADVANCE(576);
      if (lookahead == 'k') ADVANCE(407);
      if (lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 443:
      if (lookahead == 'h') ADVANCE(542);
      END_STATE();
    case 444:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 445:
      if (lookahead == 'h') ADVANCE(234);
      END_STATE();
    case 446:
      if (lookahead == 'h') ADVANCE(602);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1076);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1502);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1352);
      END_STATE();
    case 447:
      if (lookahead == 'h') ADVANCE(586);
      END_STATE();
    case 448:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 449:
      ADVANCE_MAP(
        'h', 297,
        'k', 52,
        'n', 681,
        's', 450,
        'u', 336,
        'E', 840,
        'e', 840,
        'T', 908,
        't', 908,
        'Y', 1617,
        'y', 1617,
      );
      END_STATE();
    case 450:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 451:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 452:
      if (lookahead == 'h') ADVANCE(406);
      END_STATE();
    case 453:
      if (lookahead == 'h') ADVANCE(306);
      END_STATE();
    case 454:
      if (lookahead == 'h') ADVANCE(300);
      END_STATE();
    case 455:
      if (lookahead == 'h') ADVANCE(318);
      END_STATE();
    case 456:
      if (lookahead == 'h') ADVANCE(312);
      END_STATE();
    case 457:
      if (lookahead == 'h') ADVANCE(308);
      END_STATE();
    case 458:
      if (lookahead == 'h') ADVANCE(303);
      END_STATE();
    case 459:
      if (lookahead == 'h') ADVANCE(410);
      END_STATE();
    case 460:
      if (lookahead == 'h') ADVANCE(310);
      END_STATE();
    case 461:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 462:
      if (lookahead == 'h') ADVANCE(323);
      END_STATE();
    case 463:
      if (lookahead == 'h') ADVANCE(320);
      END_STATE();
    case 464:
      if (lookahead == 'h') ADVANCE(317);
      END_STATE();
    case 465:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 466:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 467:
      if (lookahead == 'h') ADVANCE(322);
      END_STATE();
    case 468:
      if (lookahead == 'h') ADVANCE(319);
      END_STATE();
    case 469:
      if (lookahead == 'h') ADVANCE(324);
      END_STATE();
    case 470:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 471:
      if (lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 472:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 473:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 474:
      if (lookahead == 'h') ADVANCE(82);
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 475:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 476:
      if (lookahead == 'h') ADVANCE(326);
      END_STATE();
    case 477:
      if (lookahead == 'h') ADVANCE(328);
      END_STATE();
    case 478:
      if (lookahead == 'h') ADVANCE(333);
      END_STATE();
    case 479:
      if (lookahead == 'h') ADVANCE(555);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 481:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 482:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(680);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(696);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 494:
      if (lookahead == 'i') ADVANCE(712);
      END_STATE();
    case 495:
      if (lookahead == 'i') ADVANCE(539);
      END_STATE();
    case 496:
      if (lookahead == 'i') ADVANCE(641);
      END_STATE();
    case 497:
      if (lookahead == 'i') ADVANCE(644);
      END_STATE();
    case 498:
      if (lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 499:
      if (lookahead == 'i') ADVANCE(670);
      END_STATE();
    case 500:
      if (lookahead == 'k') ADVANCE(1903);
      END_STATE();
    case 501:
      if (lookahead == 'k') ADVANCE(1934);
      END_STATE();
    case 502:
      if (lookahead == 'k') ADVANCE(74);
      END_STATE();
    case 503:
      if (lookahead == 'k') ADVANCE(408);
      END_STATE();
    case 504:
      if (lookahead == 'k') ADVANCE(98);
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 505:
      if (lookahead == 'k') ADVANCE(101);
      END_STATE();
    case 506:
      ADVANCE_MAP(
        'l', 482,
        'K', 936,
        'k', 936,
        'M', 1422,
        'm', 1422,
        'Q', 1772,
        'q', 1772,
        'V', 1453,
        'v', 1453,
      );
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(525);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(724);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(676);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(507);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(493);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(486);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(296);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1616);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1618);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(2019);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(235);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(2051);
      END_STATE();
    case 519:
      if (lookahead == 'm') ADVANCE(2055);
      END_STATE();
    case 520:
      if (lookahead == 'm') ADVANCE(2053);
      END_STATE();
    case 521:
      if (lookahead == 'm') ADVANCE(1904);
      END_STATE();
    case 522:
      if (lookahead == 'm') ADVANCE(2058);
      END_STATE();
    case 523:
      if (lookahead == 'm') ADVANCE(2050);
      END_STATE();
    case 524:
      if (lookahead == 'm') ADVANCE(381);
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 525:
      if (lookahead == 'm') ADVANCE(316);
      END_STATE();
    case 526:
      if (lookahead == 'm') ADVANCE(488);
      END_STATE();
    case 527:
      if (lookahead == 'm') ADVANCE(315);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(909);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(956);
      END_STATE();
    case 528:
      if (lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(1872);
      if (lookahead == 's') ADVANCE(1873);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1868);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1448);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(487);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(678);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(631);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(693);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(690);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(652);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(656);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(659);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(661);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(499);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(2070);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(1933);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(703);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(519);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1398);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(613);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1380);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(705);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(609);
      END_STATE();
    case 573:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 575:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 576:
      if (lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 577:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 578:
      if (lookahead == 'o') ADVANCE(708);
      END_STATE();
    case 579:
      if (lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 580:
      if (lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 581:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 582:
      if (lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 584:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(706);
      END_STATE();
    case 587:
      if (lookahead == 'p') ADVANCE(566);
      END_STATE();
    case 588:
      if (lookahead == 'p') ADVANCE(492);
      END_STATE();
    case 589:
      if (lookahead == 'p') ADVANCE(404);
      END_STATE();
    case 590:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 591:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 592:
      if (lookahead == 'p') ADVANCE(691);
      END_STATE();
    case 593:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 594:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 595:
      if (lookahead == 'p') ADVANCE(577);
      END_STATE();
    case 596:
      if (lookahead == 'p') ADVANCE(423);
      END_STATE();
    case 597:
      if (lookahead == 'p') ADVANCE(424);
      END_STATE();
    case 598:
      if (lookahead == 'p') ADVANCE(425);
      END_STATE();
    case 599:
      if (lookahead == 'p') ADVANCE(426);
      END_STATE();
    case 600:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(711);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(558);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(2050);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(702);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 611:
      if (lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 613:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 614:
      ADVANCE_MAP(
        's', 1849,
        'u', 601,
        'A', 1347,
        'a', 1347,
        'E', 1536,
        'e', 1536,
        'H', 732,
        'h', 732,
        'I', 1506,
        'i', 1506,
        'L', 959,
        'l', 959,
        'O', 1292,
        'o', 1292,
      );
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(2054);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(2069);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(2058);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(722);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(716);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(685);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(684);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(694);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(618);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 638:
      if (lookahead == 's') ADVANCE(621);
      END_STATE();
    case 639:
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 640:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(695);
      END_STATE();
    case 642:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(637);
      END_STATE();
    case 644:
      if (lookahead == 's') ADVANCE(697);
      END_STATE();
    case 645:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 646:
      if (lookahead == 's') ADVANCE(692);
      END_STATE();
    case 647:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 648:
      if (lookahead == 's') ADVANCE(458);
      END_STATE();
    case 649:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 650:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 651:
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 652:
      if (lookahead == 's') ADVANCE(650);
      END_STATE();
    case 653:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 654:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 655:
      if (lookahead == 's') ADVANCE(470);
      END_STATE();
    case 656:
      if (lookahead == 's') ADVANCE(655);
      END_STATE();
    case 657:
      if (lookahead == 's') ADVANCE(471);
      END_STATE();
    case 658:
      if (lookahead == 's') ADVANCE(472);
      END_STATE();
    case 659:
      if (lookahead == 's') ADVANCE(658);
      END_STATE();
    case 660:
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 661:
      if (lookahead == 's') ADVANCE(660);
      END_STATE();
    case 662:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 663:
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 664:
      if (lookahead == 's') ADVANCE(476);
      END_STATE();
    case 665:
      if (lookahead == 's') ADVANCE(477);
      END_STATE();
    case 666:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 667:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 668:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 669:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 670:
      if (lookahead == 's') ADVANCE(699);
      END_STATE();
    case 671:
      if (lookahead == 's') ADVANCE(478);
      END_STATE();
    case 672:
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 673:
      if (lookahead == 's') ADVANCE(505);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(2045);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(1908);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(2020);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(2036);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(2035);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(719);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 682:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 684:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 685:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 690:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 692:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 693:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 694:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 696:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(591);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(600);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 701:
      if (lookahead == 'u') ADVANCE(509);
      END_STATE();
    case 702:
      if (lookahead == 'u') ADVANCE(583);
      END_STATE();
    case 703:
      if (lookahead == 'u') ADVANCE(439);
      END_STATE();
    case 704:
      if (lookahead == 'u') ADVANCE(682);
      END_STATE();
    case 705:
      if (lookahead == 'u') ADVANCE(585);
      END_STATE();
    case 706:
      if (lookahead == 'u') ADVANCE(674);
      END_STATE();
    case 707:
      if (lookahead == 'u') ADVANCE(536);
      END_STATE();
    case 708:
      if (lookahead == 'u') ADVANCE(537);
      END_STATE();
    case 709:
      if (lookahead == 'u') ADVANCE(700);
      END_STATE();
    case 710:
      if (lookahead == 'v') ADVANCE(111);
      END_STATE();
    case 711:
      if (lookahead == 'v') ADVANCE(419);
      END_STATE();
    case 712:
      if (lookahead == 'v') ADVANCE(398);
      END_STATE();
    case 713:
      if (lookahead == 'w') ADVANCE(2029);
      END_STATE();
    case 714:
      if (lookahead == 'w') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(742);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1256);
      END_STATE();
    case 715:
      if (lookahead == 'w') ADVANCE(491);
      END_STATE();
    case 716:
      if (lookahead == 'w') ADVANCE(572);
      END_STATE();
    case 717:
      if (lookahead == 'x') ADVANCE(368);
      END_STATE();
    case 718:
      if (lookahead == 'x') ADVANCE(173);
      END_STATE();
    case 719:
      if (lookahead == 'y') ADVANCE(2045);
      END_STATE();
    case 720:
      if (lookahead == 'y') ADVANCE(1906);
      END_STATE();
    case 721:
      if (lookahead == 'y') ADVANCE(2049);
      END_STATE();
    case 722:
      if (lookahead == 'y') ADVANCE(624);
      END_STATE();
    case 723:
      if (lookahead == 'y') ADVANCE(341);
      END_STATE();
    case 724:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 725:
      ADVANCE_MAP(
        'A', 1347,
        'a', 1347,
        'E', 1536,
        'e', 1536,
        'H', 732,
        'h', 732,
        'I', 1506,
        'i', 1506,
        'L', 959,
        'l', 959,
        'O', 1292,
        'o', 1292,
      );
      END_STATE();
    case 726:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1616);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1618);
      END_STATE();
    case 727:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(847);
      END_STATE();
    case 728:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1076);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1502);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1352);
      END_STATE();
    case 729:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1686);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1350);
      END_STATE();
    case 730:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1774);
      END_STATE();
    case 731:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(853);
      END_STATE();
    case 732:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1251);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(838);
      END_STATE();
    case 733:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(834);
      END_STATE();
    case 734:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1295);
      END_STATE();
    case 735:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1820);
      END_STATE();
    case 736:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1509);
      END_STATE();
    case 737:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1330);
      END_STATE();
    case 738:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1817);
      END_STATE();
    case 739:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1059);
      END_STATE();
    case 740:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1549);
      END_STATE();
    case 741:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1508);
      END_STATE();
    case 742:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1238);
      END_STATE();
    case 743:
      ADVANCE_MAP(
        'A', 1624,
        'a', 1624,
        'E', 1535,
        'e', 1535,
        'K', 850,
        'k', 850,
        'O', 1539,
        'o', 1539,
        'R', 935,
        'r', 935,
        'U', 833,
        'u', 833,
      );
      END_STATE();
    case 744:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1302);
      END_STATE();
    case 745:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(910);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1394);
      END_STATE();
    case 746:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1252);
      END_STATE();
    case 747:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1285);
      END_STATE();
    case 748:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1085);
      END_STATE();
    case 749:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1291);
      END_STATE();
    case 750:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1543);
      END_STATE();
    case 751:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(855);
      END_STATE();
    case 752:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(869);
      END_STATE();
    case 753:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1637);
      END_STATE();
    case 754:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1242);
      END_STATE();
    case 755:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1243);
      END_STATE();
    case 756:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1362);
      END_STATE();
    case 757:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1715);
      END_STATE();
    case 758:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1254);
      END_STATE();
    case 759:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(845);
      END_STATE();
    case 760:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1363);
      END_STATE();
    case 761:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1283);
      END_STATE();
    case 762:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1529);
      END_STATE();
    case 763:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1550);
      END_STATE();
    case 764:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1163);
      END_STATE();
    case 765:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1594);
      END_STATE();
    case 766:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1553);
      END_STATE();
    case 767:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1365);
      END_STATE();
    case 768:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1633);
      END_STATE();
    case 769:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1691);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1554);
      END_STATE();
    case 770:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1556);
      END_STATE();
    case 771:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1245);
      END_STATE();
    case 772:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1557);
      END_STATE();
    case 773:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1268);
      END_STATE();
    case 774:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1567);
      END_STATE();
    case 775:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1246);
      END_STATE();
    case 776:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1731);
      END_STATE();
    case 777:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1247);
      END_STATE();
    case 778:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1370);
      END_STATE();
    case 779:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1248);
      END_STATE();
    case 780:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1249);
      END_STATE();
    case 781:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1372);
      END_STATE();
    case 782:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1373);
      END_STATE();
    case 783:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1620);
      END_STATE();
    case 784:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1780);
      END_STATE();
    case 785:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1259);
      END_STATE();
    case 786:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1398);
      END_STATE();
    case 787:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1320);
      END_STATE();
    case 788:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1258);
      END_STATE();
    case 789:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1699);
      END_STATE();
    case 790:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1628);
      END_STATE();
    case 791:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1087);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 792:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1741);
      END_STATE();
    case 793:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1149);
      END_STATE();
    case 794:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1514);
      END_STATE();
    case 795:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1315);
      END_STATE();
    case 796:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(866);
      END_STATE();
    case 797:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1266);
      END_STATE();
    case 798:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1316);
      END_STATE();
    case 799:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1705);
      END_STATE();
    case 800:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1155);
      END_STATE();
    case 801:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1638);
      END_STATE();
    case 802:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1662);
      END_STATE();
    case 803:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1709);
      END_STATE();
    case 804:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1278);
      END_STATE();
    case 805:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1660);
      END_STATE();
    case 806:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1089);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1177);
      END_STATE();
    case 807:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1745);
      END_STATE();
    case 808:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1091);
      END_STATE();
    case 809:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1746);
      END_STATE();
    case 810:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1747);
      END_STATE();
    case 811:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1748);
      END_STATE();
    case 812:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1749);
      END_STATE();
    case 813:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1750);
      END_STATE();
    case 814:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1751);
      END_STATE();
    case 815:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1752);
      END_STATE();
    case 816:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1753);
      END_STATE();
    case 817:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(880);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(981);
      END_STATE();
    case 818:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1288);
      END_STATE();
    case 819:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1286);
      END_STATE();
    case 820:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1289);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1043);
      END_STATE();
    case 821:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1287);
      END_STATE();
    case 822:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1290);
      END_STATE();
    case 823:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1787);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1027);
      END_STATE();
    case 824:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1788);
      END_STATE();
    case 825:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1789);
      END_STATE();
    case 826:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1790);
      END_STATE();
    case 827:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1791);
      END_STATE();
    case 828:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1792);
      END_STATE();
    case 829:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(917);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1819);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1417);
      END_STATE();
    case 830:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1023);
      END_STATE();
    case 831:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(749);
      END_STATE();
    case 832:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(759);
      END_STATE();
    case 833:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1222);
      END_STATE();
    case 834:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1265);
      END_STATE();
    case 835:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1454);
      END_STATE();
    case 836:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1153);
      END_STATE();
    case 837:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1867);
      END_STATE();
    case 838:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1234);
      END_STATE();
    case 839:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1253);
      END_STATE();
    case 840:
      ADVANCE_MAP(
        'C', 1775,
        'c', 1775,
        'N', 920,
        'n', 920,
        'R', 1795,
        'r', 1795,
        'S', 1621,
        's', 1621,
        'T', 970,
        't', 970,
      );
      END_STATE();
    case 841:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1096);
      END_STATE();
    case 842:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1232);
      END_STATE();
    case 843:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1100);
      END_STATE();
    case 844:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(736);
      END_STATE();
    case 845:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1233);
      END_STATE();
    case 846:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(742);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1256);
      END_STATE();
    case 847:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1589);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(841);
      END_STATE();
    case 848:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1109);
      END_STATE();
    case 849:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1104);
      END_STATE();
    case 850:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1590);
      END_STATE();
    case 851:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1754);
      END_STATE();
    case 852:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1420);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1430);
      END_STATE();
    case 853:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(861);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1765);
      END_STATE();
    case 854:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1673);
      END_STATE();
    case 855:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1150);
      END_STATE();
    case 856:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(754);
      END_STATE();
    case 857:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1424);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1397);
      END_STATE();
    case 858:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(792);
      END_STATE();
    case 859:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(758);
      END_STATE();
    case 860:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(761);
      END_STATE();
    case 861:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(974);
      END_STATE();
    case 862:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(775);
      END_STATE();
    case 863:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(779);
      END_STATE();
    case 864:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(780);
      END_STATE();
    case 865:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(947);
      END_STATE();
    case 866:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(948);
      END_STATE();
    case 867:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(794);
      END_STATE();
    case 868:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1106);
      END_STATE();
    case 869:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1744);
      END_STATE();
    case 870:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1564);
      END_STATE();
    case 871:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(799);
      END_STATE();
    case 872:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1475);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(1776);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1641);
      END_STATE();
    case 873:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1039);
      END_STATE();
    case 874:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1395);
      END_STATE();
    case 875:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1483);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1485);
      END_STATE();
    case 876:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1487);
      END_STATE();
    case 877:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1491);
      END_STATE();
    case 878:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1495);
      END_STATE();
    case 879:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1074);
      END_STATE();
    case 880:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(873);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1768);
      END_STATE();
    case 881:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(819);
      END_STATE();
    case 882:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(807);
      END_STATE();
    case 883:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(809);
      END_STATE();
    case 884:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(810);
      END_STATE();
    case 885:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(811);
      END_STATE();
    case 886:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(812);
      END_STATE();
    case 887:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(813);
      END_STATE();
    case 888:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(814);
      END_STATE();
    case 889:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(815);
      END_STATE();
    case 890:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(816);
      END_STATE();
    case 891:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(892);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1237);
      END_STATE();
    case 892:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1217);
      END_STATE();
    case 893:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(791);
      END_STATE();
    case 894:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(817);
      END_STATE();
    case 895:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1974);
      END_STATE();
    case 896:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1975);
      END_STATE();
    case 897:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1988);
      END_STATE();
    case 898:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1999);
      END_STATE();
    case 899:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2008);
      END_STATE();
    case 900:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1937);
      END_STATE();
    case 901:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1311);
      END_STATE();
    case 902:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1952);
      END_STATE();
    case 903:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1973);
      END_STATE();
    case 904:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1983);
      END_STATE();
    case 905:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1895);
      END_STATE();
    case 906:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(745);
      END_STATE();
    case 907:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(820);
      END_STATE();
    case 908:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1164);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(979);
      END_STATE();
    case 909:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(789);
      END_STATE();
    case 910:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(928);
      END_STATE();
    case 911:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1568);
      END_STATE();
    case 912:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1459);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1846);
      END_STATE();
    case 913:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(874);
      END_STATE();
    case 914:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1162);
      END_STATE();
    case 915:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(938);
      END_STATE();
    case 916:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(940);
      END_STATE();
    case 917:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1165);
      END_STATE();
    case 918:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1446);
      END_STATE();
    case 919:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1376);
      END_STATE();
    case 920:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(984);
      END_STATE();
    case 921:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1063);
      END_STATE();
    case 922:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1518);
      END_STATE();
    case 923:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1003);
      END_STATE();
    case 924:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1005);
      END_STATE();
    case 925:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1277);
      END_STATE();
    case 926:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1520);
      END_STATE();
    case 927:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1041);
      END_STATE();
    case 928:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1580);
      END_STATE();
    case 929:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1121);
      END_STATE();
    case 930:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(822);
      END_STATE();
    case 931:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(824);
      END_STATE();
    case 932:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(826);
      END_STATE();
    case 933:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1216);
      END_STATE();
    case 934:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(840);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(908);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1617);
      END_STATE();
    case 935:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1066);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1818);
      END_STATE();
    case 936:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1828);
      END_STATE();
    case 937:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(987);
      END_STATE();
    case 938:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1968);
      END_STATE();
    case 939:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1962);
      END_STATE();
    case 940:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1910);
      END_STATE();
    case 941:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1977);
      END_STATE();
    case 942:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(857);
      END_STATE();
    case 943:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2018);
      END_STATE();
    case 944:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1070);
      END_STATE();
    case 945:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1966);
      END_STATE();
    case 946:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2032);
      END_STATE();
    case 947:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2037);
      END_STATE();
    case 948:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1912);
      END_STATE();
    case 949:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1924);
      END_STATE();
    case 950:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2011);
      END_STATE();
    case 951:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2041);
      END_STATE();
    case 952:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1915);
      END_STATE();
    case 953:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1944);
      END_STATE();
    case 954:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1953);
      END_STATE();
    case 955:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1938);
      END_STATE();
    case 956:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1221);
      END_STATE();
    case 957:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1538);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1619);
      END_STATE();
    case 958:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1839);
      END_STATE();
    case 959:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 960:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1796);
      END_STATE();
    case 961:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1829);
      END_STATE();
    case 962:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1354);
      END_STATE();
    case 963:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1090);
      END_STATE();
    case 964:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1778);
      END_STATE();
    case 965:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1831);
      END_STATE();
    case 966:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1525);
      END_STATE();
    case 967:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(929);
      END_STATE();
    case 968:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1239);
      END_STATE();
    case 969:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1548);
      END_STATE();
    case 970:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1345);
      END_STATE();
    case 971:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(848);
      END_STATE();
    case 972:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1060);
      END_STATE();
    case 973:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1542);
      END_STATE();
    case 974:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1522);
      END_STATE();
    case 975:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1845);
      END_STATE();
    case 976:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(911);
      END_STATE();
    case 977:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1297);
      END_STATE();
    case 978:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1834);
      END_STATE();
    case 979:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(851);
      END_STATE();
    case 980:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1540);
      END_STATE();
    case 981:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1842);
      END_STATE();
    case 982:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 983:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1572);
      END_STATE();
    case 984:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1346);
      END_STATE();
    case 985:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1241);
      END_STATE();
    case 986:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1833);
      END_STATE();
    case 987:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1656);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1625);
      END_STATE();
    case 988:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1825);
      END_STATE();
    case 989:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1588);
      END_STATE();
    case 990:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 991:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1652);
      END_STATE();
    case 992:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(842);
      END_STATE();
    case 993:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1569);
      END_STATE();
    case 994:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1452);
      END_STATE();
    case 995:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      END_STATE();
    case 996:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1627);
      END_STATE();
    case 997:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1390);
      END_STATE();
    case 998:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1428);
      END_STATE();
    case 999:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(966);
      END_STATE();
    case 1000:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 1001:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1530);
      END_STATE();
    case 1002:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 1003:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1531);
      END_STATE();
    case 1004:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1541);
      END_STATE();
    case 1005:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1532);
      END_STATE();
    case 1006:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1336);
      END_STATE();
    case 1007:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(913);
      END_STATE();
    case 1008:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 1009:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1602);
      END_STATE();
    case 1010:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1533);
      END_STATE();
    case 1011:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1534);
      END_STATE();
    case 1012:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1608);
      END_STATE();
    case 1013:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1613);
      END_STATE();
    case 1014:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1740);
      END_STATE();
    case 1015:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1798);
      END_STATE();
    case 1016:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 1017:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1069);
      END_STATE();
    case 1018:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1830);
      END_STATE();
    case 1019:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1552);
      END_STATE();
    case 1020:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1327);
      END_STATE();
    case 1021:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1629);
      END_STATE();
    case 1022:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1832);
      END_STATE();
    case 1023:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1547);
      END_STATE();
    case 1024:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(854);
      END_STATE();
    case 1025:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1835);
      END_STATE();
    case 1026:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1631);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1561);
      END_STATE();
    case 1027:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1267);
      END_STATE();
    case 1028:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1559);
      END_STATE();
    case 1029:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1659);
      END_STATE();
    case 1030:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1836);
      END_STATE();
    case 1031:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1634);
      END_STATE();
    case 1032:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1563);
      END_STATE();
    case 1033:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1371);
      END_STATE();
    case 1034:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1375);
      END_STATE();
    case 1035:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1377);
      END_STATE();
    case 1036:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1383);
      END_STATE();
    case 1037:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(927);
      END_STATE();
    case 1038:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1578);
      END_STATE();
    case 1039:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1524);
      END_STATE();
    case 1040:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1457);
      END_STATE();
    case 1041:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1391);
      END_STATE();
    case 1042:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 1043:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1843);
      END_STATE();
    case 1044:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 1045:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1118);
      END_STATE();
    case 1046:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(818);
      END_STATE();
    case 1047:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1407);
      END_STATE();
    case 1048:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1408);
      END_STATE();
    case 1049:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1409);
      END_STATE();
    case 1050:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1410);
      END_STATE();
    case 1051:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1411);
      END_STATE();
    case 1052:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1412);
      END_STATE();
    case 1053:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1413);
      END_STATE();
    case 1054:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1414);
      END_STATE();
    case 1055:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 1056:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(828);
      END_STATE();
    case 1057:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 1058:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1844);
      END_STATE();
    case 1059:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1725);
      END_STATE();
    case 1060:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(922);
      END_STATE();
    case 1061:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(751);
      END_STATE();
    case 1062:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(796);
      END_STATE();
    case 1063:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(764);
      END_STATE();
    case 1064:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(787);
      END_STATE();
    case 1065:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1510);
      END_STATE();
    case 1066:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(983);
      END_STATE();
    case 1067:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1437);
      END_STATE();
    case 1068:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1169);
      END_STATE();
    case 1069:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1180);
      END_STATE();
    case 1070:
      ADVANCE_MAP(
        'F', 797,
        'f', 797,
        'H', 1471,
        'h', 1471,
        'M', 735,
        'm', 735,
        'P', 1038,
        'p', 1038,
      );
      END_STATE();
    case 1071:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1480);
      END_STATE();
    case 1072:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1183);
      END_STATE();
    case 1073:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1184);
      END_STATE();
    case 1074:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1489);
      END_STATE();
    case 1075:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1493);
      END_STATE();
    case 1076:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2033);
      END_STATE();
    case 1077:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2028);
      END_STATE();
    case 1078:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1061);
      END_STATE();
    case 1079:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1335);
      END_STATE();
    case 1080:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1032);
      END_STATE();
    case 1081:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1606);
      END_STATE();
    case 1082:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1008);
      END_STATE();
    case 1083:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1385);
      END_STATE();
    case 1084:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(973);
      END_STATE();
    case 1085:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1082);
      END_STATE();
    case 1086:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1476);
      END_STATE();
    case 1087:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1033);
      END_STATE();
    case 1088:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1178);
      END_STATE();
    case 1089:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1034);
      END_STATE();
    case 1090:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(803);
      END_STATE();
    case 1091:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1035);
      END_STATE();
    case 1092:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1484);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(765);
      END_STATE();
    case 1093:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1488);
      END_STATE();
    case 1094:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1492);
      END_STATE();
    case 1095:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1496);
      END_STATE();
    case 1096:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1863);
      END_STATE();
    case 1097:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1936);
      END_STATE();
    case 1098:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1945);
      END_STATE();
    case 1099:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1219);
      END_STATE();
    case 1100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1298);
      END_STATE();
    case 1101:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1448);
      END_STATE();
    case 1102:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(969);
      END_STATE();
    case 1103:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1300);
      END_STATE();
    case 1104:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(793);
      END_STATE();
    case 1105:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(790);
      END_STATE();
    case 1106:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(992);
      END_STATE();
    case 1107:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1261);
      END_STATE();
    case 1108:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1304);
      END_STATE();
    case 1109:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(762);
      END_STATE();
    case 1110:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1306);
      END_STATE();
    case 1111:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(997);
      END_STATE();
    case 1112:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1310);
      END_STATE();
    case 1113:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1225);
      END_STATE();
    case 1114:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1314);
      END_STATE();
    case 1115:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1461);
      END_STATE();
    case 1116:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1464);
      END_STATE();
    case 1117:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1466);
      END_STATE();
    case 1118:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1482);
      END_STATE();
    case 1119:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1486);
      END_STATE();
    case 1120:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1490);
      END_STATE();
    case 1121:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1494);
      END_STATE();
    case 1122:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1469);
      END_STATE();
    case 1123:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1470);
      END_STATE();
    case 1124:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1472);
      END_STATE();
    case 1125:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1474);
      END_STATE();
    case 1126:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1498);
      END_STATE();
    case 1127:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1047);
      END_STATE();
    case 1128:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1048);
      END_STATE();
    case 1129:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1049);
      END_STATE();
    case 1130:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1050);
      END_STATE();
    case 1131:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1051);
      END_STATE();
    case 1132:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1052);
      END_STATE();
    case 1133:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1053);
      END_STATE();
    case 1134:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1054);
      END_STATE();
    case 1135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(823);
      END_STATE();
    case 1136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1344);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1528);
      END_STATE();
    case 1137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1058);
      END_STATE();
    case 1138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1083);
      END_STATE();
    case 1139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1716);
      END_STATE();
    case 1140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1068);
      END_STATE();
    case 1141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1079);
      END_STATE();
    case 1142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(879);
      END_STATE();
    case 1143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1504);
      END_STATE();
    case 1144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1088);
      END_STATE();
    case 1145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1672);
      END_STATE();
    case 1146:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1674);
      END_STATE();
    case 1147:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1688);
      END_STATE();
    case 1148:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1481);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1166);
      END_STATE();
    case 1149:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1332);
      END_STATE();
    case 1150:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1276);
      END_STATE();
    case 1151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1260);
      END_STATE();
    case 1152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1675);
      END_STATE();
    case 1153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1367);
      END_STATE();
    case 1154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1717);
      END_STATE();
    case 1155:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1374);
      END_STATE();
    case 1156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1695);
      END_STATE();
    case 1157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1356);
      END_STATE();
    case 1158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(991);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(806);
      END_STATE();
    case 1159:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(773);
      END_STATE();
    case 1160:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(856);
      END_STATE();
    case 1161:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1847);
      END_STATE();
    case 1162:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1357);
      END_STATE();
    case 1163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1274);
      END_STATE();
    case 1164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1361);
      END_STATE();
    case 1165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1388);
      END_STATE();
    case 1166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1312);
      END_STATE();
    case 1167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1381);
      END_STATE();
    case 1168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(865);
      END_STATE();
    case 1169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(871);
      END_STATE();
    case 1170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1800);
      END_STATE();
    case 1171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1359);
      END_STATE();
    case 1172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1458);
      END_STATE();
    case 1173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(923);
      END_STATE();
    case 1174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1380);
      END_STATE();
    case 1175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1801);
      END_STATE();
    case 1176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1431);
      END_STATE();
    case 1177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1269);
      END_STATE();
    case 1178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1403);
      END_STATE();
    case 1179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1802);
      END_STATE();
    case 1180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1270);
      END_STATE();
    case 1181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1369);
      END_STATE();
    case 1182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1433);
      END_STATE();
    case 1183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1271);
      END_STATE();
    case 1184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1272);
      END_STATE();
    case 1185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1438);
      END_STATE();
    case 1186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1440);
      END_STATE();
    case 1187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(864);
      END_STATE();
    case 1188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1441);
      END_STATE();
    case 1189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1643);
      END_STATE();
    case 1190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1442);
      END_STATE();
    case 1191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1443);
      END_STATE();
    case 1192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1455);
      END_STATE();
    case 1193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1444);
      END_STATE();
    case 1194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1445);
      END_STATE();
    case 1195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1322);
      END_STATE();
    case 1196:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1722);
      END_STATE();
    case 1197:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1737);
      END_STATE();
    case 1198:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1478);
      END_STATE();
    case 1199:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1329);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1786);
      END_STATE();
    case 1200:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(924);
      END_STATE();
    case 1201:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1723);
      END_STATE();
    case 1202:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1724);
      END_STATE();
    case 1203:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1727);
      END_STATE();
    case 1204:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(882);
      END_STATE();
    case 1205:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(883);
      END_STATE();
    case 1206:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(884);
      END_STATE();
    case 1207:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      END_STATE();
    case 1208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(886);
      END_STATE();
    case 1209:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(887);
      END_STATE();
    case 1210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(888);
      END_STATE();
    case 1211:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(889);
      END_STATE();
    case 1212:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(890);
      END_STATE();
    case 1213:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2024);
      END_STATE();
    case 1214:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2027);
      END_STATE();
    case 1215:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1884);
      END_STATE();
    case 1216:
      ADVANCE_MAP(
        'K', 936,
        'k', 936,
        'M', 1422,
        'm', 1422,
        'Q', 1772,
        'q', 1772,
        'V', 1453,
        'v', 1453,
      );
      END_STATE();
    case 1217:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(958);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1021);
      END_STATE();
    case 1218:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(739);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(750);
      END_STATE();
    case 1219:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1404);
      END_STATE();
    case 1220:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(999);
      END_STATE();
    case 1221:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(961);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2040);
      END_STATE();
    case 1222:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(965);
      END_STATE();
    case 1223:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(967);
      END_STATE();
    case 1224:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(975);
      END_STATE();
    case 1225:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(978);
      END_STATE();
    case 1226:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(986);
      END_STATE();
    case 1227:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(988);
      END_STATE();
    case 1228:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1384);
      END_STATE();
    case 1229:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1018);
      END_STATE();
    case 1230:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1025);
      END_STATE();
    case 1231:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1030);
      END_STATE();
    case 1232:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1171);
      END_STATE();
    case 1233:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1281);
      END_STATE();
    case 1234:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1115);
      END_STATE();
    case 1235:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1406);
      END_STATE();
    case 1236:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1237);
      END_STATE();
    case 1237:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1864);
      END_STATE();
    case 1238:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(852);
      END_STATE();
    case 1239:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2034);
      END_STATE();
    case 1240:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1299);
      END_STATE();
    case 1241:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1976);
      END_STATE();
    case 1242:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(912);
      END_STATE();
    case 1243:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1092);
      END_STATE();
    case 1244:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2023);
      END_STATE();
    case 1245:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2017);
      END_STATE();
    case 1246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1914);
      END_STATE();
    case 1247:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1866);
      END_STATE();
    case 1248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1382);
      END_STATE();
    case 1249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1865);
      END_STATE();
    case 1250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1419);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1623);
      END_STATE();
    case 1251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1263);
      END_STATE();
    case 1252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1086);
      END_STATE();
    case 1253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1773);
      END_STATE();
    case 1254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(836);
      END_STATE();
    case 1255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1418);
      END_STATE();
    case 1256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1015);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(980);
      END_STATE();
    case 1257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1195);
      END_STATE();
    case 1258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1170);
      END_STATE();
    case 1259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1284);
      END_STATE();
    case 1260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1824);
      END_STATE();
    case 1261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1456);
      END_STATE();
    case 1262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1826);
      END_STATE();
    case 1263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1036);
      END_STATE();
    case 1264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1244);
      END_STATE();
    case 1265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(937);
      END_STATE();
    case 1266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1273);
      END_STATE();
    case 1267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(963);
      END_STATE();
    case 1268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1612);
      END_STATE();
    case 1269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(945);
      END_STATE();
    case 1270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(949);
      END_STATE();
    case 1271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(951);
      END_STATE();
    case 1272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(954);
      END_STATE();
    case 1273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(832);
      END_STATE();
    case 1274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1784);
      END_STATE();
    case 1275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1157);
      END_STATE();
    case 1276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1156);
      END_STATE();
    case 1277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1167);
      END_STATE();
    case 1278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1175);
      END_STATE();
    case 1279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1460);
      END_STATE();
    case 1280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1463);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1020);
      END_STATE();
    case 1281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1465);
      END_STATE();
    case 1282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1467);
      END_STATE();
    case 1283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(877);
      END_STATE();
    case 1284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1075);
      END_STATE();
    case 1285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1120);
      END_STATE();
    case 1286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1124);
      END_STATE();
    case 1287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1125);
      END_STATE();
    case 1288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1093);
      END_STATE();
    case 1289:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1094);
      END_STATE();
    case 1290:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1095);
      END_STATE();
    case 1291:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1235);
      END_STATE();
    case 1292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1507);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1358);
      END_STATE();
    case 1293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(830);
      END_STATE();
    case 1294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1503);
      END_STATE();
    case 1295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1142);
      END_STATE();
    case 1296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1301);
      END_STATE();
    case 1297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1511);
      END_STATE();
    case 1298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1450);
      END_STATE();
    case 1299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(802);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(769);
      END_STATE();
    case 1300:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1595);
      END_STATE();
    case 1301:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(756);
      END_STATE();
    case 1302:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(939);
      END_STATE();
    case 1303:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(760);
      END_STATE();
    case 1304:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1603);
      END_STATE();
    case 1305:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(767);
      END_STATE();
    case 1306:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1607);
      END_STATE();
    case 1307:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(778);
      END_STATE();
    case 1308:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(781);
      END_STATE();
    case 1309:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(782);
      END_STATE();
    case 1310:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1611);
      END_STATE();
    case 1311:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(783);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1368);
      END_STATE();
    case 1312:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(994);
      END_STATE();
    case 1313:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(738);
      END_STATE();
    case 1314:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1614);
      END_STATE();
    case 1315:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(952);
      END_STATE();
    case 1316:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1013);
      END_STATE();
    case 1317:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1145);
      END_STATE();
    case 1318:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1303);
      END_STATE();
    case 1319:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1512);
      END_STATE();
    case 1320:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1151);
      END_STATE();
    case 1321:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1305);
      END_STATE();
    case 1322:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1152);
      END_STATE();
    case 1323:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1307);
      END_STATE();
    case 1324:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1308);
      END_STATE();
    case 1325:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1309);
      END_STATE();
    case 1326:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1197);
      END_STATE();
    case 1327:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1462);
      END_STATE();
    case 1328:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(800);
      END_STATE();
    case 1329:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1040);
      END_STATE();
    case 1330:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1279);
      END_STATE();
    case 1331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1929);
      END_STATE();
    case 1332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2039);
      END_STATE();
    case 1333:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1967);
      END_STATE();
    case 1334:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2044);
      END_STATE();
    case 1335:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1939);
      END_STATE();
    case 1336:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1984);
      END_STATE();
    case 1337:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1954);
      END_STATE();
    case 1338:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1995);
      END_STATE();
    case 1339:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1982);
      END_STATE();
    case 1340:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1948);
      END_STATE();
    case 1341:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1959);
      END_STATE();
    case 1342:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1970);
      END_STATE();
    case 1343:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1971);
      END_STATE();
    case 1344:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1084);
      END_STATE();
    case 1345:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1793);
      END_STATE();
    case 1346:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1794);
      END_STATE();
    case 1347:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1421);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1138);
      END_STATE();
    case 1348:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1451);
      END_STATE();
    case 1349:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 1350:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(906);
      END_STATE();
    case 1351:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1071);
      END_STATE();
    case 1352:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1360);
      END_STATE();
    case 1353:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1160);
      END_STATE();
    case 1354:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1721);
      END_STATE();
    case 1355:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1783);
      END_STATE();
    case 1356:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1214);
      END_STATE();
    case 1357:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1081);
      END_STATE();
    case 1358:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1024);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1545);
      END_STATE();
    case 1359:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1077);
      END_STATE();
    case 1360:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(968);
      END_STATE();
    case 1361:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1355);
      END_STATE();
    case 1362:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(895);
      END_STATE();
    case 1363:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(897);
      END_STATE();
    case 1364:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1689);
      END_STATE();
    case 1365:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(898);
      END_STATE();
    case 1366:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1262);
      END_STATE();
    case 1367:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(901);
      END_STATE();
    case 1368:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1275);
      END_STATE();
    case 1369:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1718);
      END_STATE();
    case 1370:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(903);
      END_STATE();
    case 1371:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1676);
      END_STATE();
    case 1372:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(904);
      END_STATE();
    case 1373:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(925);
      END_STATE();
    case 1374:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1600);
      END_STATE();
    case 1375:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1677);
      END_STATE();
    case 1376:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1601);
      END_STATE();
    case 1377:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1678);
      END_STATE();
    case 1378:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1733);
      END_STATE();
    case 1379:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1610);
      END_STATE();
    case 1380:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(777);
      END_STATE();
    case 1381:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(955);
      END_STATE();
    case 1382:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1014);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1655);
      END_STATE();
    case 1383:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1080);
      END_STATE();
    case 1384:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1447);
      END_STATE();
    case 1385:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(757);
      END_STATE();
    case 1386:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 1387:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(776);
      END_STATE();
    case 1388:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1739);
      END_STATE();
    case 1389:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1669);
      END_STATE();
    case 1390:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1742);
      END_STATE();
    case 1391:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1698);
      END_STATE();
    case 1392:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1228);
      END_STATE();
    case 1393:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1067);
      END_STATE();
    case 1394:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1728);
      END_STATE();
    case 1395:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(798);
      END_STATE();
    case 1396:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1187);
      END_STATE();
    case 1397:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1735);
      END_STATE();
    case 1398:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1477);
      END_STATE();
    case 1399:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1116);
      END_STATE();
    case 1400:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1122);
      END_STATE();
    case 1401:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1123);
      END_STATE();
    case 1402:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1126);
      END_STATE();
    case 1403:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(821);
      END_STATE();
    case 1404:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1499);
      END_STATE();
    case 1405:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1500);
      END_STATE();
    case 1406:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1501);
      END_STATE();
    case 1407:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1756);
      END_STATE();
    case 1408:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1757);
      END_STATE();
    case 1409:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1758);
      END_STATE();
    case 1410:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1759);
      END_STATE();
    case 1411:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1760);
      END_STATE();
    case 1412:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1761);
      END_STATE();
    case 1413:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1762);
      END_STATE();
    case 1414:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1763);
      END_STATE();
    case 1415:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(846);
      END_STATE();
    case 1416:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1101);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1293);
      END_STATE();
    case 1417:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1804);
      END_STATE();
    case 1418:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1078);
      END_STATE();
    case 1419:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(831);
      END_STATE();
    case 1420:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1296);
      END_STATE();
    case 1421:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1353);
      END_STATE();
    case 1422:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1697);
      END_STATE();
    case 1423:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1065);
      END_STATE();
    case 1424:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1785);
      END_STATE();
    case 1425:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1351);
      END_STATE();
    case 1426:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1591);
      END_STATE();
    case 1427:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1240);
      END_STATE();
    case 1428:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1521);
      END_STATE();
    case 1429:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1546);
      END_STATE();
    case 1430:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1537);
      END_STATE();
    case 1431:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1331);
      END_STATE();
    case 1432:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1366);
      END_STATE();
    case 1433:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1334);
      END_STATE();
    case 1434:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      END_STATE();
    case 1435:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1389);
      END_STATE();
    case 1436:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1560);
      END_STATE();
    case 1437:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1586);
      END_STATE();
    case 1438:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1337);
      END_STATE();
    case 1439:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1544);
      END_STATE();
    case 1440:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1338);
      END_STATE();
    case 1441:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1339);
      END_STATE();
    case 1442:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1340);
      END_STATE();
    case 1443:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1341);
      END_STATE();
    case 1444:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1342);
      END_STATE();
    case 1445:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1343);
      END_STATE();
    case 1446:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1703);
      END_STATE();
    case 1447:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1805);
      END_STATE();
    case 1448:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1626);
      END_STATE();
    case 1449:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1797);
      END_STATE();
    case 1450:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(916);
      END_STATE();
    case 1451:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1555);
      END_STATE();
    case 1452:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1781);
      END_STATE();
    case 1453:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1223);
      END_STATE();
    case 1454:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1645);
      END_STATE();
    case 1455:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1379);
      END_STATE();
    case 1456:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(858);
      END_STATE();
    case 1457:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1782);
      END_STATE();
    case 1458:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1364);
      END_STATE();
    case 1459:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1328);
      END_STATE();
    case 1460:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      END_STATE();
    case 1461:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1650);
      END_STATE();
    case 1462:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1706);
      END_STATE();
    case 1463:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(860);
      END_STATE();
    case 1464:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1635);
      END_STATE();
    case 1465:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(862);
      END_STATE();
    case 1466:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1636);
      END_STATE();
    case 1467:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(881);
      END_STATE();
    case 1468:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(863);
      END_STATE();
    case 1469:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1639);
      END_STATE();
    case 1470:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1640);
      END_STATE();
    case 1471:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1644);
      END_STATE();
    case 1472:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1646);
      END_STATE();
    case 1473:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1647);
      END_STATE();
    case 1474:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1648);
      END_STATE();
    case 1475:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1318);
      END_STATE();
    case 1476:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1573);
      END_STATE();
    case 1477:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1396);
      END_STATE();
    case 1478:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1393);
      END_STATE();
    case 1479:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1319);
      END_STATE();
    case 1480:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1574);
      END_STATE();
    case 1481:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1387);
      END_STATE();
    case 1482:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1661);
      END_STATE();
    case 1483:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1321);
      END_STATE();
    case 1484:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1577);
      END_STATE();
    case 1485:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1579);
      END_STATE();
    case 1486:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1663);
      END_STATE();
    case 1487:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1323);
      END_STATE();
    case 1488:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1581);
      END_STATE();
    case 1489:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1582);
      END_STATE();
    case 1490:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1664);
      END_STATE();
    case 1491:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1324);
      END_STATE();
    case 1492:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1583);
      END_STATE();
    case 1493:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1584);
      END_STATE();
    case 1494:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1665);
      END_STATE();
    case 1495:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1325);
      END_STATE();
    case 1496:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1585);
      END_STATE();
    case 1497:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1803);
      END_STATE();
    case 1498:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1668);
      END_STATE();
    case 1499:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1814);
      END_STATE();
    case 1500:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1815);
      END_STATE();
    case 1501:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1816);
      END_STATE();
    case 1502:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1220);
      END_STATE();
    case 1503:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1989);
      END_STATE();
    case 1504:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1925);
      END_STATE();
    case 1505:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(909);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(956);
      END_STATE();
    case 1506:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1102);
      END_STATE();
    case 1507:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1575);
      END_STATE();
    case 1508:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1135);
      END_STATE();
    case 1509:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(971);
      END_STATE();
    case 1510:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(805);
      END_STATE();
    case 1511:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1702);
      END_STATE();
    case 1512:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1704);
      END_STATE();
    case 1513:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(943);
      END_STATE();
    case 1514:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1044);
      END_STATE();
    case 1515:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1009);
      END_STATE();
    case 1516:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1012);
      END_STATE();
    case 1517:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1576);
      END_STATE();
    case 1518:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(801);
      END_STATE();
    case 1519:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1551);
      END_STATE();
    case 1520:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1558);
      END_STATE();
    case 1521:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1006);
      END_STATE();
    case 1522:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1707);
      END_STATE();
    case 1523:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1435);
      END_STATE();
    case 1524:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1711);
      END_STATE();
    case 1525:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(804);
      END_STATE();
    case 1526:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1587);
      END_STATE();
    case 1527:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1426);
      END_STATE();
    case 1528:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1218);
      END_STATE();
    case 1529:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1940);
      END_STATE();
    case 1530:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1932);
      END_STATE();
    case 1531:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1985);
      END_STATE();
    case 1532:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2013);
      END_STATE();
    case 1533:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1896);
      END_STATE();
    case 1534:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1897);
      END_STATE();
    case 1535:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1317);
      END_STATE();
    case 1536:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1685);
      END_STATE();
    case 1537:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1807);
      END_STATE();
    case 1538:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1137);
      END_STATE();
    case 1539:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1671);
      END_STATE();
    case 1540:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(835);
      END_STATE();
    case 1541:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1799);
      END_STATE();
    case 1542:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1517);
      END_STATE();
    case 1543:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(893);
      END_STATE();
    case 1544:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1215);
      END_STATE();
    case 1545:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1427);
      END_STATE();
    case 1546:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(931);
      END_STATE();
    case 1547:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1423);
      END_STATE();
    case 1548:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1592);
      END_STATE();
    case 1549:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(785);
      END_STATE();
    case 1550:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(896);
      END_STATE();
    case 1551:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1449);
      END_STATE();
    case 1552:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 1553:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(921);
      END_STATE();
    case 1554:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1632);
      END_STATE();
    case 1555:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(964);
      END_STATE();
    case 1556:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(899);
      END_STATE();
    case 1557:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(900);
      END_STATE();
    case 1558:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1479);
      END_STATE();
    case 1559:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(752);
      END_STATE();
    case 1560:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(926);
      END_STATE();
    case 1561:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(976);
      END_STATE();
    case 1562:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1057);
      END_STATE();
    case 1563:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(996);
      END_STATE();
    case 1564:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1037);
      END_STATE();
    case 1565:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(953);
      END_STATE();
    case 1566:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1046);
      END_STATE();
    case 1567:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      END_STATE();
    case 1568:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1642);
      END_STATE();
    case 1569:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1062);
      END_STATE();
    case 1570:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1144);
      END_STATE();
    case 1571:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1147);
      END_STATE();
    case 1572:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1562);
      END_STATE();
    case 1573:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1154);
      END_STATE();
    case 1574:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1808);
      END_STATE();
    case 1575:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1029);
      END_STATE();
    case 1576:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1181);
      END_STATE();
    case 1577:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1196);
      END_STATE();
    case 1578:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1326);
      END_STATE();
    case 1579:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1810);
      END_STATE();
    case 1580:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1031);
      END_STATE();
    case 1581:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1201);
      END_STATE();
    case 1582:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1811);
      END_STATE();
    case 1583:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1202);
      END_STATE();
    case 1584:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1813);
      END_STATE();
    case 1585:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1203);
      END_STATE();
    case 1586:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1282);
      END_STATE();
    case 1587:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1497);
      END_STATE();
    case 1588:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(825);
      END_STATE();
    case 1589:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1979);
      END_STATE();
    case 1590:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 1591:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1969);
      END_STATE();
    case 1592:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1926);
      END_STATE();
    case 1593:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1911);
      END_STATE();
    case 1594:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1961);
      END_STATE();
    case 1595:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1972);
      END_STATE();
    case 1596:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1956);
      END_STATE();
    case 1597:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2038);
      END_STATE();
    case 1598:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1992);
      END_STATE();
    case 1599:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2012);
      END_STATE();
    case 1600:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1913);
      END_STATE();
    case 1601:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2042);
      END_STATE();
    case 1602:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1958);
      END_STATE();
    case 1603:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1960);
      END_STATE();
    case 1604:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1930);
      END_STATE();
    case 1605:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1916);
      END_STATE();
    case 1606:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1928);
      END_STATE();
    case 1607:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1921);
      END_STATE();
    case 1608:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1994);
      END_STATE();
    case 1609:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1981);
      END_STATE();
    case 1610:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1987);
      END_STATE();
    case 1611:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1993);
      END_STATE();
    case 1612:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1955);
      END_STATE();
    case 1613:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1917);
      END_STATE();
    case 1614:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1957);
      END_STATE();
    case 1615:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1806);
      END_STATE();
    case 1616:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1099);
      END_STATE();
    case 1617:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1255);
      END_STATE();
    case 1618:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1670);
      END_STATE();
    case 1619:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1777);
      END_STATE();
    case 1620:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1213);
      END_STATE();
    case 1621:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1172);
      END_STATE();
    case 1622:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1064);
      END_STATE();
    case 1623:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(741);
      END_STATE();
    case 1624:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1615);
      END_STATE();
    case 1625:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1113);
      END_STATE();
    case 1626:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1713);
      END_STATE();
    case 1627:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1523);
      END_STATE();
    case 1628:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1098);
      END_STATE();
    case 1629:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1622);
      END_STATE();
    case 1630:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(876);
      END_STATE();
    case 1631:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1719);
      END_STATE();
    case 1632:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1189);
      END_STATE();
    case 1633:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1161);
      END_STATE();
    case 1634:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1593);
      END_STATE();
    case 1635:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1694);
      END_STATE();
    case 1636:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1726);
      END_STATE();
    case 1637:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(982);
      END_STATE();
    case 1638:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1598);
      END_STATE();
    case 1639:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1700);
      END_STATE();
    case 1640:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1701);
      END_STATE();
    case 1641:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(972);
      END_STATE();
    case 1642:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(768);
      END_STATE();
    case 1643:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1680);
      END_STATE();
    case 1644:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1720);
      END_STATE();
    case 1645:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(941);
      END_STATE();
    case 1646:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1682);
      END_STATE();
    case 1647:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1683);
      END_STATE();
    case 1648:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1684);
      END_STATE();
    case 1649:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1141);
      END_STATE();
    case 1650:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1692);
      END_STATE();
    case 1651:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1693);
      END_STATE();
    case 1652:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1432);
      END_STATE();
    case 1653:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1710);
      END_STATE();
    case 1654:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1010);
      END_STATE();
    case 1655:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1011);
      END_STATE();
    case 1656:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(867);
      END_STATE();
    case 1657:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1809);
      END_STATE();
    case 1658:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1176);
      END_STATE();
    case 1659:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1658);
      END_STATE();
    case 1660:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1657);
      END_STATE();
    case 1661:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1729);
      END_STATE();
    case 1662:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1730);
      END_STATE();
    case 1663:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1732);
      END_STATE();
    case 1664:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1734);
      END_STATE();
    case 1665:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1736);
      END_STATE();
    case 1666:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1072);
      END_STATE();
    case 1667:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1073);
      END_STATE();
    case 1668:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1755);
      END_STATE();
    case 1669:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1056);
      END_STATE();
    case 1670:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1861);
      END_STATE();
    case 1671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1986);
      END_STATE();
    case 1672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1280);
      END_STATE();
    case 1673:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1148);
      END_STATE();
    case 1674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1158);
      END_STATE();
    case 1675:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1998);
      END_STATE();
    case 1676:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1949);
      END_STATE();
    case 1677:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1964);
      END_STATE();
    case 1678:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1902);
      END_STATE();
    case 1679:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1931);
      END_STATE();
    case 1680:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1935);
      END_STATE();
    case 1681:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1951);
      END_STATE();
    case 1682:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1980);
      END_STATE();
    case 1683:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1893);
      END_STATE();
    case 1684:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1894);
      END_STATE();
    case 1685:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1140);
      END_STATE();
    case 1686:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(843);
      END_STATE();
    case 1687:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1107);
      END_STATE();
    case 1688:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1838);
      END_STATE();
    case 1689:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1837);
      END_STATE();
    case 1690:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1823);
      END_STATE();
    case 1691:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1097);
      END_STATE();
    case 1692:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1143);
      END_STATE();
    case 1693:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1434);
      END_STATE();
    case 1694:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1630);
      END_STATE();
    case 1695:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1827);
      END_STATE();
    case 1696:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1690);
      END_STATE();
    case 1697:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1042);
      END_STATE();
    case 1698:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1159);
      END_STATE();
    case 1699:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1045);
      END_STATE();
    case 1700:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1596);
      END_STATE();
    case 1701:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1666);
      END_STATE();
    case 1702:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1604);
      END_STATE();
    case 1703:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1605);
      END_STATE();
    case 1704:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1609);
      END_STATE();
    case 1705:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1017);
      END_STATE();
    case 1706:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(998);
      END_STATE();
    case 1707:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1000);
      END_STATE();
    case 1708:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(977);
      END_STATE();
    case 1709:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(990);
      END_STATE();
    case 1710:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1002);
      END_STATE();
    case 1711:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1016);
      END_STATE();
    case 1712:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1007);
      END_STATE();
    case 1713:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(784);
      END_STATE();
    case 1714:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1111);
      END_STATE();
    case 1715:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1779);
      END_STATE();
    case 1716:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1425);
      END_STATE();
    case 1717:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1103);
      END_STATE();
    case 1718:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1105);
      END_STATE();
    case 1719:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1696);
      END_STATE();
    case 1720:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1386);
      END_STATE();
    case 1721:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1146);
      END_STATE();
    case 1722:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1108);
      END_STATE();
    case 1723:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1110);
      END_STATE();
    case 1724:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1112);
      END_STATE();
    case 1725:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(989);
      END_STATE();
    case 1726:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1229);
      END_STATE();
    case 1727:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1114);
      END_STATE();
    case 1728:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(993);
      END_STATE();
    case 1729:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1230);
      END_STATE();
    case 1730:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1001);
      END_STATE();
    case 1731:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1708);
      END_STATE();
    case 1732:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1226);
      END_STATE();
    case 1733:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1313);
      END_STATE();
    case 1734:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1227);
      END_STATE();
    case 1735:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1004);
      END_STATE();
    case 1736:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1231);
      END_STATE();
    case 1737:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1712);
      END_STATE();
    case 1738:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1840);
      END_STATE();
    case 1739:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1028);
      END_STATE();
    case 1740:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1812);
      END_STATE();
    case 1741:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1182);
      END_STATE();
    case 1742:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1204);
      END_STATE();
    case 1743:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1841);
      END_STATE();
    case 1744:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1179);
      END_STATE();
    case 1745:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1198);
      END_STATE();
    case 1746:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1185);
      END_STATE();
    case 1747:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1186);
      END_STATE();
    case 1748:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1188);
      END_STATE();
    case 1749:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1190);
      END_STATE();
    case 1750:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1191);
      END_STATE();
    case 1751:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1192);
      END_STATE();
    case 1752:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1193);
      END_STATE();
    case 1753:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1194);
      END_STATE();
    case 1754:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1117);
      END_STATE();
    case 1755:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1667);
      END_STATE();
    case 1756:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1205);
      END_STATE();
    case 1757:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1206);
      END_STATE();
    case 1758:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1207);
      END_STATE();
    case 1759:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1208);
      END_STATE();
    case 1760:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1209);
      END_STATE();
    case 1761:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1210);
      END_STATE();
    case 1762:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1211);
      END_STATE();
    case 1763:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1212);
      END_STATE();
    case 1764:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1127);
      END_STATE();
    case 1765:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1128);
      END_STATE();
    case 1766:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1129);
      END_STATE();
    case 1767:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1130);
      END_STATE();
    case 1768:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1131);
      END_STATE();
    case 1769:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1132);
      END_STATE();
    case 1770:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1133);
      END_STATE();
    case 1771:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1134);
      END_STATE();
    case 1772:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1026);
      END_STATE();
    case 1773:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(915);
      END_STATE();
    case 1774:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1687);
      END_STATE();
    case 1775:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1571);
      END_STATE();
    case 1776:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1294);
      END_STATE();
    case 1777:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(747);
      END_STATE();
    case 1778:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1392);
      END_STATE();
    case 1779:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1566);
      END_STATE();
    case 1780:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1714);
      END_STATE();
    case 1781:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1679);
      END_STATE();
    case 1782:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1681);
      END_STATE();
    case 1783:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1264);
      END_STATE();
    case 1784:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1565);
      END_STATE();
    case 1785:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1378);
      END_STATE();
    case 1786:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1653);
      END_STATE();
    case 1787:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1764);
      END_STATE();
    case 1788:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1766);
      END_STATE();
    case 1789:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1767);
      END_STATE();
    case 1790:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1769);
      END_STATE();
    case 1791:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1770);
      END_STATE();
    case 1792:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1771);
      END_STATE();
    case 1793:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2021);
      END_STATE();
    case 1794:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2014);
      END_STATE();
    case 1795:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1019);
      END_STATE();
    case 1796:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1168);
      END_STATE();
    case 1797:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1173);
      END_STATE();
    case 1798:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(985);
      END_STATE();
    case 1799:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(771);
      END_STATE();
    case 1800:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(942);
      END_STATE();
    case 1801:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(946);
      END_STATE();
    case 1802:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1055);
      END_STATE();
    case 1803:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1200);
      END_STATE();
    case 1804:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1399);
      END_STATE();
    case 1805:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1333);
      END_STATE();
    case 1806:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1429);
      END_STATE();
    case 1807:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(763);
      END_STATE();
    case 1808:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(766);
      END_STATE();
    case 1809:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1436);
      END_STATE();
    case 1810:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(770);
      END_STATE();
    case 1811:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(772);
      END_STATE();
    case 1812:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1439);
      END_STATE();
    case 1813:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(774);
      END_STATE();
    case 1814:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1400);
      END_STATE();
    case 1815:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1401);
      END_STATE();
    case 1816:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1402);
      END_STATE();
    case 1817:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2016);
      END_STATE();
    case 1818:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1822);
      END_STATE();
    case 1819:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(746);
      END_STATE();
    case 1820:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(918);
      END_STATE();
    case 1821:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(995);
      END_STATE();
    case 1822:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(872);
      END_STATE();
    case 1823:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2009);
      END_STATE();
    case 1824:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1905);
      END_STATE();
    case 1825:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2043);
      END_STATE();
    case 1826:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1963);
      END_STATE();
    case 1827:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2031);
      END_STATE();
    case 1828:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1257);
      END_STATE();
    case 1829:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(849);
      END_STATE();
    case 1830:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(868);
      END_STATE();
    case 1831:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(731);
      END_STATE();
    case 1832:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(755);
      END_STATE();
    case 1833:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(919);
      END_STATE();
    case 1834:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1649);
      END_STATE();
    case 1835:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1597);
      END_STATE();
    case 1836:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1599);
      END_STATE();
    case 1837:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1513);
      END_STATE();
    case 1838:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1224);
      END_STATE();
    case 1839:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1651);
      END_STATE();
    case 1840:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1515);
      END_STATE();
    case 1841:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1516);
      END_STATE();
    case 1842:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1738);
      END_STATE();
    case 1843:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1743);
      END_STATE();
    case 1844:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1119);
      END_STATE();
    case 1845:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1526);
      END_STATE();
    case 1846:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(944);
      END_STATE();
    case 1847:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(950);
      END_STATE();
    case 1848:
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(2045);
      END_STATE();
    case 1849:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2045);
      END_STATE();
    case 1850:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2026);
      END_STATE();
    case 1851:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2025);
      END_STATE();
    case 1852:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2048);
      END_STATE();
    case 1853:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1850);
      END_STATE();
    case 1854:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1851);
      END_STATE();
    case 1855:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2066);
      END_STATE();
    case 1856:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1890);
      END_STATE();
    case 1857:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1991);
      END_STATE();
    case 1858:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1892);
      END_STATE();
    case 1859:
      if (eof) ADVANCE(1860);
      ADVANCE_MAP(
        '\n', 2083,
        '\r', 1,
        '"', 1878,
        '#', 2079,
        '*', 1898,
        '+', 1922,
        ',', 1891,
        '-', 1923,
        '0', 2071,
        ':', 1920,
        '=', 2022,
        '@', 1990,
        'A', 891,
        'C', 725,
        'D', 249,
        'E', 277,
        'F', 240,
        'H', 726,
        'I', 266,
        'L', 1415,
        'M', 727,
        'N', 1416,
        'Q', 289,
        'R', 933,
        'S', 934,
        'T', 728,
        'U', 1505,
        'V', 251,
        '^', 1927,
        'a', 431,
        'c', 614,
        'd', 393,
        'e', 348,
        'f', 1136,
        'h', 515,
        'i', 268,
        'l', 269,
        'm', 374,
        'n', 270,
        'r', 250,
        's', 449,
        't', 446,
        'u', 527,
        'v', 957,
        'w', 400,
        '}', 2068,
        '\t', 2082,
        ' ', 2082,
        'B', 729,
        'b', 729,
        'G', 1250,
        'g', 1250,
        'K', 829,
        'k', 829,
        'P', 743,
        'p', 743,
        'X', 730,
        'x', 730,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2072);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(753);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1022);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(aux_sym_match_declaration_token1);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(aux_sym__all_token1);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(aux_sym__match_canonical_token1);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(aux_sym__match_final_token1);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(aux_sym__match_exec_token1);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'S') ADVANCE(258);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'o') ADVANCE(2070);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '{') ADVANCE(2067);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2061);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2072);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      ADVANCE_MAP(
        '%', 2059,
        'C', 2059,
        'L', 2059,
        'd', 2059,
        'h', 2059,
        'i', 2059,
        'k', 2059,
        'l', 2059,
        'n', 2059,
        'p', 2059,
        'r', 2059,
        'u', 2059,
      );
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1890);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '{') ADVANCE(2067);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2061);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      ADVANCE_MAP(
        '%', 2059,
        'C', 2059,
        'L', 2059,
        'd', 2059,
        'h', 2059,
        'i', 2059,
        'k', 2059,
        'l', 2059,
        'n', 2059,
        'p', 2059,
        'r', 2059,
        'u', 2059,
      );
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token1);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'e') ADVANCE(1919);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1890);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'n') ADVANCE(1889);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1890);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'n') ADVANCE(1885);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1890);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'o') ADVANCE(1887);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1890);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'y') ADVANCE(1907);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1890);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1890);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1892);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(aux_sym__match_host_token1);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(aux_sym__match_originalhost_token1);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(aux_sym__match_tagged_token1);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(aux_sym__match_user_token1);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(aux_sym__match_localuser_token1);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1890);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1892);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(aux_sym__add_keys_to_agent_token1);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(aux_sym__address_family_token1);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1890);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(anon_sym_inet);
      if (lookahead == '6') ADVANCE(1909);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(anon_sym_inet6);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(aux_sym__batch_mode_token1);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(aux_sym__bind_address_token1);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(aux_sym__bind_interface_token1);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(aux_sym__canonical_domains_token1);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(aux_sym__canonicalize_fallback_local_token1);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(aux_sym__canonicalize_hostname_token1);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(aux_sym__canonicalize_max_dots_token1);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(aux_sym__canonicalize_permitted_cnames_token1);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1890);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(aux_sym__ca_signature_algorithms_token1);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(aux_sym__certificate_file_token1);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(aux_sym__check_host_ip_token1);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(aux_sym__ciphers_token1);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(aux_sym__clear_all_forwardings_token1);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(aux_sym__compression_token1);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(aux_sym__connection_attempts_token1);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(aux_sym__connect_timeout_token1);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(aux_sym__control_master_token1);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(anon_sym_autoask);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(aux_sym__control_persist_token1);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(aux_sym__control_path_token1);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(aux_sym__dynamic_forward_token1);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(aux_sym__enable_escape_command_line_token1);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(aux_sym__enable_ssh_keysign_token1);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(aux_sym__escape_char_token1);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1941);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(aux_sym__exit_on_forward_failure_token1);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(aux_sym__fingerprint_hash_token1);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(aux_sym__fork_after_authentication_token1);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(aux_sym__forward_agent_token1);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(aux_sym__forward_x11_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(aux_sym__forward_x11_timeout_token1);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(aux_sym__forward_x11_trusted_token1);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(aux_sym__global_known_hosts_file_token1);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(aux_sym__gssapi_authentication_token1);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(aux_sym__gssapi_delegate_credentials_token1);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(aux_sym__hash_known_hosts_token1);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token1);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token2);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(aux_sym__hostbased_authentication_token1);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(aux_sym__host_key_algorithms_token1);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(aux_sym__host_key_alias_token1);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(aux_sym__hostname_token1);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(aux_sym__identities_only_token1);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(aux_sym__identity_agent_token1);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(anon_sym_SSH_AUTH_SOCK);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(aux_sym__identity_file_token1);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(aux_sym__ignore_unknown_token1);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(aux_sym__include_token1);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(aux_sym__ipqos_token1);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token1);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token2);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(aux_sym__kex_algorithms_token1);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(aux_sym__known_hosts_command_token1);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(aux_sym__local_command_token1);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(aux_sym__local_forward_token1);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(aux_sym__log_level_token1);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(aux_sym__log_verbose_token1);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(aux_sym__macs_token1);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(aux_sym__no_host_authentication_for_localhost_token1);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(aux_sym__number_of_password_prompts_token1);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(aux_sym__password_authentication_token1);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(aux_sym__permit_local_command_token1);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_token1);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(aux_sym__pkcs11_provider_token1);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(aux_sym__port_token1);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(aux_sym__preferred_authentications_token1);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(aux_sym__proxy_command_token1);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(aux_sym__proxy_jump_token1);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(aux_sym__proxy_jump_value_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1991);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(aux_sym__proxy_use_fdpass_token1);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(aux_sym__pubkey_accepted_algorithms_token1);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(aux_sym__pubkey_accepted_algorithms_token2);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(aux_sym__pubkey_authentication_token1);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(anon_sym_unbound);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(anon_sym_host_DASHbound);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(aux_sym__rekey_limit_token1);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(aux_sym__remote_command_token1);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '{') ADVANCE(2067);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2082);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(2062);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      ADVANCE_MAP(
        '%', 2059,
        'C', 2059,
        'L', 2059,
        'd', 2059,
        'h', 2059,
        'i', 2059,
        'k', 2059,
        'l', 2059,
        'n', 2059,
        'p', 2059,
        'r', 2059,
        'u', 2059,
      );
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      ADVANCE_MAP(
        '%', 2060,
        'C', 2060,
        'H', 2060,
        'I', 2060,
        'K', 2060,
        'L', 2060,
        'd', 2060,
        'f', 2060,
        'h', 2060,
        'i', 2060,
        'k', 2060,
        'l', 2060,
        'n', 2060,
        'p', 2060,
        'r', 2060,
        't', 2060,
        'u', 2060,
      );
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      ADVANCE_MAP(
        '%', 2063,
        'C', 2063,
        'H', 2063,
        'I', 2063,
        'K', 2063,
        'L', 2063,
        'T', 2063,
        'd', 2063,
        'f', 2063,
        'h', 2063,
        'i', 2063,
        'k', 2063,
        'l', 2063,
        'n', 2063,
        'p', 2063,
        'r', 2063,
        't', 2063,
        'u', 2063,
      );
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(aux_sym__remote_forward_token1);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(aux_sym__request_tty_token1);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(aux_sym__required_rsa_size_token1);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(aux_sym__revoked_host_keys_token1);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(aux_sym__security_key_provider_token1);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(aux_sym__send_env_token1);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(aux_sym__send_env_value_token1);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(aux_sym__server_alive_count_max_token1);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(aux_sym__server_alive_interval_token1);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(aux_sym__session_type_token1);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(anon_sym_subsystem);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(aux_sym__set_env_token1);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(aux_sym__stdin_null_token1);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token1);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2025);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_unlink_token1);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(aux_sym__strict_host_key_checking_token1);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(anon_sym_accept_DASHnew);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(aux_sym__syslog_facility_token1);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(aux_sym__tcp_keep_alive_token1);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(aux_sym__tag_token1);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(aux_sym__tunnel_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(960);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(anon_sym_point_DASHto_DASHpoint);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(anon_sym_ethernet);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(aux_sym__tunnel_device_token1);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(aux_sym__update_host_keys_token1);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(aux_sym__use_keychain_token1);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(aux_sym__user_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1405);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(aux_sym__user_known_hosts_file_token1);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(aux_sym__verify_host_key_dns_token1);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(aux_sym__visual_host_key_token1);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(aux_sym__xauth_location_token1);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(sym_ipqos);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(sym_verbosity);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(sym_verbosity);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(2046);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(sym_facility);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(sym_authentication);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(sym_kex);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(sym_kex);
      if (lookahead == '@') ADVANCE(512);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(sym_key_sig);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(sym_key_sig);
      if (lookahead == '-') ADVANCE(359);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(sym_mac);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(229);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(412);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(sym_sig);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(aux_sym__hosts_token_token1);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(aux_sym__hostname_token_token1);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(aux_sym__proxy_token_token1);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(2067);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(sym__var_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2066);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2072);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(aux_sym_bytes_token1);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(aux_sym_time_token5);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2079);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(aux_sym__sep_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2080);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(2080);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2081);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2082);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1859},
  [2] = {.lex_state = 1859},
  [3] = {.lex_state = 1859},
  [4] = {.lex_state = 1859},
  [5] = {.lex_state = 1859},
  [6] = {.lex_state = 1859},
  [7] = {.lex_state = 1859},
  [8] = {.lex_state = 1859},
  [9] = {.lex_state = 1859},
  [10] = {.lex_state = 1859},
  [11] = {.lex_state = 1859},
  [12] = {.lex_state = 1859},
  [13] = {.lex_state = 1859},
  [14] = {.lex_state = 1859},
  [15] = {.lex_state = 1859},
  [16] = {.lex_state = 1859},
  [17] = {.lex_state = 1859},
  [18] = {.lex_state = 1859},
  [19] = {.lex_state = 1859},
  [20] = {.lex_state = 1859},
  [21] = {.lex_state = 1859},
  [22] = {.lex_state = 1859},
  [23] = {.lex_state = 1859},
  [24] = {.lex_state = 1859},
  [25] = {.lex_state = 1859},
  [26] = {.lex_state = 1859},
  [27] = {.lex_state = 1859},
  [28] = {.lex_state = 1859},
  [29] = {.lex_state = 1859},
  [30] = {.lex_state = 1859},
  [31] = {.lex_state = 1859},
  [32] = {.lex_state = 1859},
  [33] = {.lex_state = 1859},
  [34] = {.lex_state = 1859},
  [35] = {.lex_state = 1859},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 36},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 36},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 40},
  [57] = {.lex_state = 25},
  [58] = {.lex_state = 25},
  [59] = {.lex_state = 29},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 29},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 26},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 38},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 35},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 45},
  [84] = {.lex_state = 30},
  [85] = {.lex_state = 28},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 17},
  [92] = {.lex_state = 35},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 38},
  [95] = {.lex_state = 38},
  [96] = {.lex_state = 15},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 38},
  [99] = {.lex_state = 38},
  [100] = {.lex_state = 38},
  [101] = {.lex_state = 38},
  [102] = {.lex_state = 38},
  [103] = {.lex_state = 38},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 30},
  [107] = {.lex_state = 38},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 18},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 38},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 35},
  [115] = {.lex_state = 38},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 49},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 38},
  [124] = {.lex_state = 43},
  [125] = {.lex_state = 49},
  [126] = {.lex_state = 29},
  [127] = {.lex_state = 46},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 529},
  [130] = {.lex_state = 47},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 529},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 43},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 38},
  [139] = {.lex_state = 38},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 38},
  [142] = {.lex_state = 38},
  [143] = {.lex_state = 38},
  [144] = {.lex_state = 38},
  [145] = {.lex_state = 33},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 41},
  [148] = {.lex_state = 49},
  [149] = {.lex_state = 39},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 41},
  [154] = {.lex_state = 1859},
  [155] = {.lex_state = 50},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 39},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 34},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 41},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 41},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 50},
  [168] = {.lex_state = 32},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 34},
  [171] = {.lex_state = 32},
  [172] = {.lex_state = 50},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 35},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 18},
  [177] = {.lex_state = 39},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 31},
  [180] = {.lex_state = 41},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 41},
  [183] = {.lex_state = 41},
  [184] = {.lex_state = 15},
  [185] = {.lex_state = 39},
  [186] = {.lex_state = 41},
  [187] = {.lex_state = 1859},
  [188] = {.lex_state = 1859},
  [189] = {.lex_state = 20},
  [190] = {.lex_state = 39},
  [191] = {.lex_state = 1859},
  [192] = {.lex_state = 1859},
  [193] = {.lex_state = 1859},
  [194] = {.lex_state = 1859},
  [195] = {.lex_state = 1859},
  [196] = {.lex_state = 1859},
  [197] = {.lex_state = 1859},
  [198] = {.lex_state = 15},
  [199] = {.lex_state = 1859},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 1859},
  [202] = {.lex_state = 1859},
  [203] = {.lex_state = 1859},
  [204] = {.lex_state = 1859},
  [205] = {.lex_state = 1859},
  [206] = {.lex_state = 1859},
  [207] = {.lex_state = 1859},
  [208] = {.lex_state = 1859},
  [209] = {.lex_state = 30},
  [210] = {.lex_state = 1859},
  [211] = {.lex_state = 1859},
  [212] = {.lex_state = 11},
  [213] = {.lex_state = 1859},
  [214] = {.lex_state = 1859},
  [215] = {.lex_state = 1859},
  [216] = {.lex_state = 1859},
  [217] = {.lex_state = 1859},
  [218] = {.lex_state = 1859},
  [219] = {.lex_state = 1859},
  [220] = {.lex_state = 30},
  [221] = {.lex_state = 1859},
  [222] = {.lex_state = 1859},
  [223] = {.lex_state = 1859},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 16},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 1859},
  [228] = {.lex_state = 39},
  [229] = {.lex_state = 1859},
  [230] = {.lex_state = 1859},
  [231] = {.lex_state = 1859},
  [232] = {.lex_state = 1859},
  [233] = {.lex_state = 34},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 1859},
  [236] = {.lex_state = 1859},
  [237] = {.lex_state = 1859},
  [238] = {.lex_state = 1859},
  [239] = {.lex_state = 1859},
  [240] = {.lex_state = 1859},
  [241] = {.lex_state = 1859},
  [242] = {.lex_state = 1859},
  [243] = {.lex_state = 9},
  [244] = {.lex_state = 32},
  [245] = {.lex_state = 1859},
  [246] = {.lex_state = 1859},
  [247] = {.lex_state = 39},
  [248] = {.lex_state = 1859},
  [249] = {.lex_state = 1859},
  [250] = {.lex_state = 39},
  [251] = {.lex_state = 1859},
  [252] = {.lex_state = 1859},
  [253] = {.lex_state = 48},
  [254] = {.lex_state = 16},
  [255] = {.lex_state = 1859},
  [256] = {.lex_state = 1859},
  [257] = {.lex_state = 1859},
  [258] = {.lex_state = 1859},
  [259] = {.lex_state = 1859},
  [260] = {.lex_state = 1859},
  [261] = {.lex_state = 1859},
  [262] = {.lex_state = 1859},
  [263] = {.lex_state = 1859},
  [264] = {.lex_state = 30},
  [265] = {.lex_state = 1859},
  [266] = {.lex_state = 1859},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 1859},
  [270] = {.lex_state = 39},
  [271] = {.lex_state = 1859},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 1859},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 20},
  [276] = {.lex_state = 50},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 20},
  [279] = {.lex_state = 1859},
  [280] = {.lex_state = 1859},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 1859},
  [284] = {.lex_state = 1859},
  [285] = {.lex_state = 1859},
  [286] = {.lex_state = 1859},
  [287] = {.lex_state = 20},
  [288] = {.lex_state = 1859},
  [289] = {.lex_state = 1859},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 1859},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 1859},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 2},
  [301] = {.lex_state = 2},
  [302] = {.lex_state = 2},
  [303] = {.lex_state = 1859},
  [304] = {.lex_state = 1859},
  [305] = {.lex_state = 2},
  [306] = {.lex_state = 2},
  [307] = {.lex_state = 2},
  [308] = {.lex_state = 1859},
  [309] = {.lex_state = 2},
  [310] = {.lex_state = 2},
  [311] = {.lex_state = 2},
  [312] = {.lex_state = 2},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 2},
  [316] = {.lex_state = 2},
  [317] = {.lex_state = 2},
  [318] = {.lex_state = 1859},
  [319] = {.lex_state = 42},
  [320] = {.lex_state = 1859},
  [321] = {.lex_state = 1859},
  [322] = {.lex_state = 1859},
  [323] = {.lex_state = 1859},
  [324] = {.lex_state = 2},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 1859},
  [327] = {.lex_state = 1859},
  [328] = {.lex_state = 2},
  [329] = {.lex_state = 1859},
  [330] = {.lex_state = 2},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 2},
  [333] = {.lex_state = 2},
  [334] = {.lex_state = 1859},
  [335] = {.lex_state = 1859},
  [336] = {.lex_state = 1859},
  [337] = {.lex_state = 16},
  [338] = {.lex_state = 1859},
  [339] = {.lex_state = 2},
  [340] = {.lex_state = 1859},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 1859},
  [343] = {.lex_state = 1859},
  [344] = {.lex_state = 1859},
  [345] = {.lex_state = 16},
  [346] = {.lex_state = 2},
  [347] = {.lex_state = 2},
  [348] = {.lex_state = 2},
  [349] = {.lex_state = 2},
  [350] = {.lex_state = 2},
  [351] = {.lex_state = 1859},
  [352] = {.lex_state = 2},
  [353] = {.lex_state = 1859},
  [354] = {.lex_state = 2},
  [355] = {.lex_state = 1859},
  [356] = {.lex_state = 2},
  [357] = {.lex_state = 1859},
  [358] = {.lex_state = 2},
  [359] = {.lex_state = 2},
  [360] = {.lex_state = 2},
  [361] = {.lex_state = 2},
  [362] = {.lex_state = 2},
  [363] = {.lex_state = 2},
  [364] = {.lex_state = 2},
  [365] = {.lex_state = 1859},
  [366] = {.lex_state = 2},
  [367] = {.lex_state = 233},
  [368] = {.lex_state = 2},
  [369] = {.lex_state = 1859},
  [370] = {.lex_state = 1859},
  [371] = {.lex_state = 2},
  [372] = {.lex_state = 2},
  [373] = {.lex_state = 2},
  [374] = {.lex_state = 1859},
  [375] = {.lex_state = 2},
  [376] = {.lex_state = 1859},
  [377] = {.lex_state = 1859},
  [378] = {.lex_state = 2},
  [379] = {.lex_state = 2},
  [380] = {.lex_state = 1859},
  [381] = {.lex_state = 1859},
  [382] = {.lex_state = 2},
  [383] = {.lex_state = 2},
  [384] = {.lex_state = 2},
  [385] = {.lex_state = 2},
  [386] = {.lex_state = 2},
  [387] = {.lex_state = 2},
  [388] = {.lex_state = 2},
  [389] = {.lex_state = 2},
  [390] = {.lex_state = 1859},
  [391] = {.lex_state = 2},
  [392] = {.lex_state = 2},
  [393] = {.lex_state = 2},
  [394] = {.lex_state = 2},
  [395] = {.lex_state = 2},
  [396] = {.lex_state = 2},
  [397] = {.lex_state = 2},
  [398] = {.lex_state = 2},
  [399] = {.lex_state = 2},
  [400] = {.lex_state = 2},
  [401] = {.lex_state = 1859},
  [402] = {.lex_state = 1859},
  [403] = {.lex_state = 2},
  [404] = {.lex_state = 1859},
  [405] = {.lex_state = 2},
  [406] = {.lex_state = 2},
  [407] = {.lex_state = 1859},
  [408] = {.lex_state = 2},
  [409] = {.lex_state = 2},
  [410] = {.lex_state = 2},
  [411] = {.lex_state = 2},
  [412] = {.lex_state = 2},
  [413] = {.lex_state = 2},
  [414] = {.lex_state = 2},
  [415] = {.lex_state = 2},
  [416] = {.lex_state = 2},
  [417] = {.lex_state = 2},
  [418] = {.lex_state = 2},
  [419] = {.lex_state = 2},
  [420] = {.lex_state = 1859},
  [421] = {.lex_state = 2},
  [422] = {.lex_state = 2},
  [423] = {.lex_state = 2},
  [424] = {.lex_state = 2},
  [425] = {.lex_state = 1859},
  [426] = {.lex_state = 2},
  [427] = {.lex_state = 2},
  [428] = {.lex_state = 2},
  [429] = {.lex_state = 2},
  [430] = {.lex_state = 2},
  [431] = {.lex_state = 1859},
  [432] = {.lex_state = 1859},
  [433] = {.lex_state = 1859},
  [434] = {.lex_state = 2},
  [435] = {.lex_state = 1859},
  [436] = {.lex_state = 2},
  [437] = {.lex_state = 1859},
  [438] = {.lex_state = 2},
  [439] = {.lex_state = 1859},
  [440] = {.lex_state = 1859},
  [441] = {.lex_state = 1859},
  [442] = {.lex_state = 2},
  [443] = {.lex_state = 2},
  [444] = {.lex_state = 1859},
  [445] = {.lex_state = 1859},
  [446] = {.lex_state = 2},
  [447] = {.lex_state = 2},
  [448] = {.lex_state = 19},
  [449] = {.lex_state = 34},
  [450] = {.lex_state = 2},
  [451] = {.lex_state = 2},
  [452] = {.lex_state = 1859},
  [453] = {.lex_state = 1859},
  [454] = {.lex_state = 1859},
  [455] = {.lex_state = 1859},
  [456] = {.lex_state = 1859},
  [457] = {.lex_state = 2},
  [458] = {.lex_state = 2},
  [459] = {.lex_state = 32},
  [460] = {.lex_state = 1859},
  [461] = {.lex_state = 2},
  [462] = {.lex_state = 233},
  [463] = {.lex_state = 1859},
  [464] = {.lex_state = 2},
  [465] = {.lex_state = 42},
  [466] = {.lex_state = 1859},
  [467] = {.lex_state = 1859},
  [468] = {.lex_state = 1859},
  [469] = {.lex_state = 2},
  [470] = {.lex_state = 2},
  [471] = {.lex_state = 2},
  [472] = {.lex_state = 1859},
  [473] = {.lex_state = 1859},
  [474] = {.lex_state = 1859},
  [475] = {.lex_state = 1859},
  [476] = {.lex_state = 2},
  [477] = {.lex_state = 2},
  [478] = {.lex_state = 1859},
  [479] = {.lex_state = 1859},
  [480] = {.lex_state = 2},
  [481] = {.lex_state = 1859},
  [482] = {.lex_state = 2},
  [483] = {.lex_state = 2},
  [484] = {.lex_state = 1859},
  [485] = {.lex_state = 1859},
  [486] = {.lex_state = 2},
  [487] = {.lex_state = 2},
  [488] = {.lex_state = 2},
  [489] = {.lex_state = 1859},
  [490] = {.lex_state = 2},
  [491] = {.lex_state = 2},
  [492] = {.lex_state = 2},
  [493] = {.lex_state = 2},
  [494] = {.lex_state = 2},
  [495] = {.lex_state = 2},
  [496] = {.lex_state = 2},
  [497] = {.lex_state = 2},
  [498] = {.lex_state = 2},
  [499] = {.lex_state = 1859},
  [500] = {.lex_state = 1859},
  [501] = {.lex_state = 1859},
  [502] = {.lex_state = 1859},
  [503] = {.lex_state = 1859},
  [504] = {.lex_state = 1859},
  [505] = {.lex_state = 1859},
  [506] = {.lex_state = 1859},
  [507] = {.lex_state = 1859},
  [508] = {.lex_state = 1859},
  [509] = {.lex_state = 1859},
  [510] = {.lex_state = 1859},
  [511] = {.lex_state = 1859},
  [512] = {.lex_state = 1859},
  [513] = {.lex_state = 1859},
  [514] = {.lex_state = 1859},
  [515] = {.lex_state = 1859},
  [516] = {.lex_state = 1859},
  [517] = {.lex_state = 1859},
  [518] = {.lex_state = 1859},
  [519] = {.lex_state = 1859},
  [520] = {.lex_state = 1859},
  [521] = {.lex_state = 1859},
  [522] = {.lex_state = 1859},
  [523] = {.lex_state = 1859},
  [524] = {.lex_state = 1859},
  [525] = {.lex_state = 1859},
  [526] = {.lex_state = 1859},
  [527] = {.lex_state = 1859},
  [528] = {.lex_state = 1859},
  [529] = {.lex_state = 1859},
  [530] = {.lex_state = 1859},
  [531] = {.lex_state = 1859},
  [532] = {.lex_state = 1859},
  [533] = {.lex_state = 1859},
  [534] = {.lex_state = 1859},
  [535] = {.lex_state = 1859},
  [536] = {.lex_state = 1859},
  [537] = {.lex_state = 42},
  [538] = {.lex_state = 1859},
  [539] = {.lex_state = 1859},
  [540] = {.lex_state = 1859},
  [541] = {.lex_state = 1859},
  [542] = {.lex_state = 1859},
  [543] = {.lex_state = 1859},
  [544] = {.lex_state = 1859},
  [545] = {.lex_state = 1859},
  [546] = {.lex_state = 1859},
  [547] = {.lex_state = 1859},
  [548] = {.lex_state = 1859},
  [549] = {.lex_state = 1859},
  [550] = {.lex_state = 1859},
  [551] = {.lex_state = 1859},
  [552] = {.lex_state = 1859},
  [553] = {.lex_state = 1859},
  [554] = {.lex_state = 1859},
  [555] = {.lex_state = 1859},
  [556] = {.lex_state = 1859},
  [557] = {.lex_state = 1859},
  [558] = {.lex_state = 1859},
  [559] = {.lex_state = 1859},
  [560] = {.lex_state = 1859},
  [561] = {.lex_state = 1859},
  [562] = {.lex_state = 1859},
  [563] = {.lex_state = 51},
  [564] = {.lex_state = 1859},
  [565] = {.lex_state = 1859},
  [566] = {.lex_state = 1859},
  [567] = {.lex_state = 1859},
  [568] = {.lex_state = 1859},
  [569] = {.lex_state = 1859},
  [570] = {.lex_state = 1859},
  [571] = {.lex_state = 1859},
  [572] = {.lex_state = 1859},
  [573] = {.lex_state = 1859},
  [574] = {.lex_state = 1859},
  [575] = {.lex_state = 1859},
  [576] = {.lex_state = 1859},
  [577] = {.lex_state = 1859},
  [578] = {.lex_state = 1859},
  [579] = {.lex_state = 1859},
  [580] = {.lex_state = 1859},
  [581] = {.lex_state = 1859},
  [582] = {.lex_state = 1859},
  [583] = {.lex_state = 1859},
  [584] = {.lex_state = 1859},
  [585] = {.lex_state = 1859},
  [586] = {.lex_state = 1859},
  [587] = {.lex_state = 1859},
  [588] = {.lex_state = 1859},
  [589] = {.lex_state = 1859},
  [590] = {.lex_state = 1859},
  [591] = {.lex_state = 1859},
  [592] = {.lex_state = 1859},
  [593] = {.lex_state = 1859},
  [594] = {.lex_state = 1859},
  [595] = {.lex_state = 1859},
  [596] = {.lex_state = 1859},
  [597] = {.lex_state = 1859},
  [598] = {.lex_state = 1859},
  [599] = {.lex_state = 1859},
  [600] = {.lex_state = 1855},
  [601] = {.lex_state = 1859},
  [602] = {.lex_state = 1859},
  [603] = {.lex_state = 1859},
  [604] = {.lex_state = 1859},
  [605] = {.lex_state = 42},
  [606] = {.lex_state = 1859},
  [607] = {.lex_state = 1859},
  [608] = {.lex_state = 1859},
  [609] = {.lex_state = 1859},
  [610] = {.lex_state = 1859},
  [611] = {.lex_state = 1859},
  [612] = {.lex_state = 1859},
  [613] = {.lex_state = 1859},
  [614] = {.lex_state = 1859},
  [615] = {.lex_state = 1859},
  [616] = {.lex_state = 1859},
  [617] = {.lex_state = 233},
  [618] = {.lex_state = 1859},
  [619] = {.lex_state = 1859},
  [620] = {.lex_state = 1859},
  [621] = {.lex_state = 1859},
  [622] = {.lex_state = 1859},
  [623] = {.lex_state = 1859},
  [624] = {.lex_state = 1859},
  [625] = {.lex_state = 1859},
  [626] = {.lex_state = 1859},
  [627] = {.lex_state = 1859},
  [628] = {.lex_state = 1859},
  [629] = {.lex_state = 1859},
  [630] = {.lex_state = 1859},
  [631] = {.lex_state = 1859},
  [632] = {.lex_state = 1859},
  [633] = {.lex_state = 1859},
  [634] = {.lex_state = 1859},
  [635] = {.lex_state = 1859},
  [636] = {.lex_state = 1859},
  [637] = {.lex_state = 1859},
  [638] = {.lex_state = 1859},
  [639] = {.lex_state = 1859},
  [640] = {.lex_state = 1859},
  [641] = {.lex_state = 1859},
  [642] = {.lex_state = 1859},
  [643] = {.lex_state = 16},
  [644] = {.lex_state = 1859},
  [645] = {.lex_state = 1859},
  [646] = {.lex_state = 1859},
  [647] = {.lex_state = 1859},
  [648] = {.lex_state = 1859},
  [649] = {.lex_state = 1859},
  [650] = {.lex_state = 1859},
  [651] = {.lex_state = 1859},
  [652] = {.lex_state = 1859},
  [653] = {.lex_state = 1859},
  [654] = {.lex_state = 1859},
  [655] = {.lex_state = 1859},
  [656] = {.lex_state = 1859},
  [657] = {.lex_state = 1859},
  [658] = {.lex_state = 1859},
  [659] = {.lex_state = 1859},
  [660] = {.lex_state = 1859},
  [661] = {.lex_state = 1859},
  [662] = {.lex_state = 1859},
  [663] = {.lex_state = 1859},
  [664] = {.lex_state = 1859},
  [665] = {.lex_state = 1859},
  [666] = {.lex_state = 1859},
  [667] = {.lex_state = 1859},
  [668] = {.lex_state = 1859},
  [669] = {.lex_state = 1859},
  [670] = {.lex_state = 16},
  [671] = {.lex_state = 1859},
  [672] = {.lex_state = 1855},
  [673] = {.lex_state = 44},
  [674] = {.lex_state = 1859},
  [675] = {.lex_state = 1859},
  [676] = {.lex_state = 1859},
  [677] = {.lex_state = 1859},
  [678] = {.lex_state = 1859},
  [679] = {.lex_state = 1859},
  [680] = {.lex_state = 1859},
  [681] = {.lex_state = 1859},
  [682] = {.lex_state = 1859},
  [683] = {.lex_state = 1859},
  [684] = {.lex_state = 1859},
  [685] = {.lex_state = 1859},
  [686] = {.lex_state = 1859},
  [687] = {.lex_state = 1859},
  [688] = {.lex_state = 1859},
  [689] = {.lex_state = 1859},
  [690] = {.lex_state = 1859},
  [691] = {.lex_state = 293},
  [692] = {.lex_state = 1859},
  [693] = {.lex_state = 1859},
  [694] = {.lex_state = 1859},
  [695] = {.lex_state = 1859},
  [696] = {.lex_state = 1859},
  [697] = {.lex_state = 1859},
  [698] = {.lex_state = 1859},
  [699] = {.lex_state = 1859},
  [700] = {.lex_state = 1859},
  [701] = {.lex_state = 1859},
  [702] = {.lex_state = 1859},
  [703] = {.lex_state = 1859},
  [704] = {.lex_state = 1859},
  [705] = {.lex_state = 1859},
  [706] = {.lex_state = 1859},
  [707] = {.lex_state = 1859},
  [708] = {.lex_state = 1859},
  [709] = {.lex_state = 1859},
  [710] = {.lex_state = 1859},
  [711] = {.lex_state = 1859},
  [712] = {.lex_state = 1859},
  [713] = {.lex_state = 1859},
  [714] = {.lex_state = 1859},
  [715] = {.lex_state = 1859},
  [716] = {.lex_state = 1859},
  [717] = {.lex_state = 1859},
  [718] = {.lex_state = 1859},
  [719] = {.lex_state = 1859},
  [720] = {.lex_state = 1859},
  [721] = {.lex_state = 1859},
  [722] = {.lex_state = 1859},
  [723] = {.lex_state = 1859},
  [724] = {.lex_state = 1859},
  [725] = {.lex_state = 1859},
  [726] = {.lex_state = 1859},
  [727] = {.lex_state = 1859},
  [728] = {.lex_state = 1859},
  [729] = {.lex_state = 1859},
  [730] = {.lex_state = 1859},
  [731] = {.lex_state = 1859},
  [732] = {.lex_state = 1859},
  [733] = {.lex_state = 1859},
  [734] = {.lex_state = 1859},
  [735] = {.lex_state = 1859},
  [736] = {.lex_state = 1859},
  [737] = {.lex_state = 1859},
  [738] = {.lex_state = 1859},
  [739] = {.lex_state = 1859},
  [740] = {.lex_state = 1859},
  [741] = {.lex_state = 1859},
  [742] = {.lex_state = 1859},
  [743] = {.lex_state = 1859},
  [744] = {.lex_state = 1859},
  [745] = {.lex_state = 1859},
  [746] = {.lex_state = 1859},
  [747] = {.lex_state = 1859},
  [748] = {.lex_state = 1859},
  [749] = {.lex_state = 1859},
  [750] = {.lex_state = 1859},
  [751] = {.lex_state = 1859},
  [752] = {.lex_state = 1859},
  [753] = {.lex_state = 1859},
  [754] = {.lex_state = 1859},
  [755] = {.lex_state = 1859},
  [756] = {.lex_state = 1859},
  [757] = {.lex_state = 1859},
  [758] = {.lex_state = 1859},
  [759] = {.lex_state = 1859},
  [760] = {.lex_state = 1859},
  [761] = {.lex_state = 1859},
  [762] = {.lex_state = 1859},
  [763] = {.lex_state = 1859},
  [764] = {.lex_state = 1859},
  [765] = {.lex_state = 1859},
  [766] = {.lex_state = 1859},
  [767] = {.lex_state = 1859},
  [768] = {.lex_state = 1859},
  [769] = {.lex_state = 1859},
  [770] = {.lex_state = 1859},
  [771] = {.lex_state = 1859},
  [772] = {.lex_state = 1859},
  [773] = {.lex_state = 1859},
  [774] = {.lex_state = 1859},
  [775] = {.lex_state = 1859},
  [776] = {.lex_state = 1859},
  [777] = {.lex_state = 1859},
  [778] = {.lex_state = 1859},
  [779] = {.lex_state = 16},
  [780] = {.lex_state = 1859},
  [781] = {.lex_state = 1859},
  [782] = {.lex_state = 1859},
  [783] = {.lex_state = 1859},
  [784] = {.lex_state = 1859},
  [785] = {.lex_state = 1859},
  [786] = {.lex_state = 1859},
  [787] = {.lex_state = 1859},
  [788] = {.lex_state = 16},
  [789] = {.lex_state = 1858},
  [790] = {.lex_state = 1859},
  [791] = {.lex_state = 1859},
  [792] = {.lex_state = 1859},
  [793] = {.lex_state = 1856},
  [794] = {.lex_state = 1859},
  [795] = {.lex_state = 1859},
  [796] = {.lex_state = 1859},
  [797] = {.lex_state = 442},
  [798] = {.lex_state = 16},
  [799] = {.lex_state = 19},
  [800] = {.lex_state = 16},
  [801] = {.lex_state = 1859},
  [802] = {.lex_state = 16},
  [803] = {.lex_state = 16},
  [804] = {.lex_state = 2},
  [805] = {.lex_state = 1855},
  [806] = {.lex_state = 16},
  [807] = {.lex_state = 1858},
  [808] = {.lex_state = 1859},
  [809] = {.lex_state = 1855},
  [810] = {.lex_state = 1859},
  [811] = {.lex_state = 1859},
  [812] = {.lex_state = 442},
  [813] = {.lex_state = 1859},
  [814] = {.lex_state = 1859},
  [815] = {.lex_state = 1859},
  [816] = {.lex_state = 1859},
  [817] = {.lex_state = 1859},
  [818] = {.lex_state = 1859},
  [819] = {.lex_state = 1859},
  [820] = {.lex_state = 1859},
  [821] = {.lex_state = 1859},
  [822] = {.lex_state = 1859},
  [823] = {.lex_state = 1859},
  [824] = {.lex_state = 16},
  [825] = {.lex_state = 1859},
  [826] = {.lex_state = 2},
  [827] = {.lex_state = 1859},
  [828] = {.lex_state = 1859},
  [829] = {.lex_state = 1859},
  [830] = {.lex_state = 1859},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 1859},
  [833] = {.lex_state = 1859},
  [834] = {.lex_state = 1859},
  [835] = {.lex_state = 1859},
  [836] = {.lex_state = 1855},
  [837] = {.lex_state = 1855},
  [838] = {.lex_state = 1855},
  [839] = {.lex_state = 1855},
  [840] = {.lex_state = 1855},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym__match_exec_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__match_exec_token3] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym__log_verbose_value_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__remote_command_token2] = ACTIONS(1),
    [aux_sym__send_env_value_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__file_token_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_bytes_token1] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [aux_sym_time_token2] = ACTIONS(1),
    [aux_sym_time_token3] = ACTIONS(1),
    [aux_sym_time_token4] = ACTIONS(1),
    [aux_sym_time_token5] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(831),
    [sym_host_declaration] = STATE(3),
    [sym_match_declaration] = STATE(3),
    [sym_parameter] = STATE(513),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym_match_declaration_token1] = ACTIONS(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(201),
    [sym__space] = ACTIONS(203),
    [sym__eol] = ACTIONS(205),
  },
  [2] = {
    [sym_host_declaration] = STATE(2),
    [sym_match_declaration] = STATE(2),
    [sym_parameter] = STATE(513),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_host_declaration_token1] = ACTIONS(209),
    [aux_sym_match_declaration_token1] = ACTIONS(212),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(215),
    [aux_sym__address_family_token1] = ACTIONS(218),
    [aux_sym__batch_mode_token1] = ACTIONS(221),
    [aux_sym__bind_address_token1] = ACTIONS(224),
    [aux_sym__bind_interface_token1] = ACTIONS(227),
    [aux_sym__canonical_domains_token1] = ACTIONS(230),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(233),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(236),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(239),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(242),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(245),
    [aux_sym__certificate_file_token1] = ACTIONS(248),
    [aux_sym__check_host_ip_token1] = ACTIONS(251),
    [aux_sym__ciphers_token1] = ACTIONS(254),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(257),
    [aux_sym__compression_token1] = ACTIONS(260),
    [aux_sym__connection_attempts_token1] = ACTIONS(263),
    [aux_sym__connect_timeout_token1] = ACTIONS(266),
    [aux_sym__control_master_token1] = ACTIONS(269),
    [aux_sym__control_persist_token1] = ACTIONS(272),
    [aux_sym__control_path_token1] = ACTIONS(275),
    [aux_sym__dynamic_forward_token1] = ACTIONS(278),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(281),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(284),
    [aux_sym__escape_char_token1] = ACTIONS(287),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(290),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(293),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(296),
    [aux_sym__forward_agent_token1] = ACTIONS(299),
    [aux_sym__forward_x11_token1] = ACTIONS(302),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(305),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(308),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(311),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(314),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(317),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(320),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(323),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(323),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(326),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(329),
    [aux_sym__host_key_alias_token1] = ACTIONS(332),
    [aux_sym__hostname_token1] = ACTIONS(335),
    [aux_sym__identities_only_token1] = ACTIONS(338),
    [aux_sym__identity_agent_token1] = ACTIONS(341),
    [aux_sym__identity_file_token1] = ACTIONS(344),
    [aux_sym__ignore_unknown_token1] = ACTIONS(347),
    [aux_sym__include_token1] = ACTIONS(350),
    [aux_sym__ipqos_token1] = ACTIONS(353),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(356),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(356),
    [aux_sym__kex_algorithms_token1] = ACTIONS(359),
    [aux_sym__known_hosts_command_token1] = ACTIONS(362),
    [aux_sym__local_command_token1] = ACTIONS(365),
    [aux_sym__local_forward_token1] = ACTIONS(368),
    [aux_sym__log_level_token1] = ACTIONS(371),
    [aux_sym__log_verbose_token1] = ACTIONS(374),
    [aux_sym__macs_token1] = ACTIONS(377),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(380),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(383),
    [aux_sym__password_authentication_token1] = ACTIONS(386),
    [aux_sym__permit_local_command_token1] = ACTIONS(389),
    [aux_sym__permit_remote_open_token1] = ACTIONS(392),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(395),
    [aux_sym__port_token1] = ACTIONS(398),
    [aux_sym__preferred_authentications_token1] = ACTIONS(401),
    [aux_sym__proxy_command_token1] = ACTIONS(404),
    [aux_sym__proxy_jump_token1] = ACTIONS(407),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(410),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(413),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(413),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(416),
    [aux_sym__rekey_limit_token1] = ACTIONS(419),
    [aux_sym__remote_command_token1] = ACTIONS(422),
    [aux_sym__remote_forward_token1] = ACTIONS(425),
    [aux_sym__request_tty_token1] = ACTIONS(428),
    [aux_sym__required_rsa_size_token1] = ACTIONS(431),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(434),
    [aux_sym__security_key_provider_token1] = ACTIONS(437),
    [aux_sym__send_env_token1] = ACTIONS(440),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(443),
    [aux_sym__server_alive_interval_token1] = ACTIONS(446),
    [aux_sym__session_type_token1] = ACTIONS(449),
    [aux_sym__set_env_token1] = ACTIONS(452),
    [aux_sym__stdin_null_token1] = ACTIONS(455),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(458),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(461),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(464),
    [aux_sym__syslog_facility_token1] = ACTIONS(467),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(470),
    [aux_sym__tag_token1] = ACTIONS(473),
    [aux_sym__tunnel_token1] = ACTIONS(476),
    [aux_sym__tunnel_device_token1] = ACTIONS(479),
    [aux_sym__update_host_keys_token1] = ACTIONS(482),
    [aux_sym__use_keychain_token1] = ACTIONS(485),
    [aux_sym__user_token1] = ACTIONS(488),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(491),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(494),
    [aux_sym__visual_host_key_token1] = ACTIONS(497),
    [aux_sym__xauth_location_token1] = ACTIONS(500),
    [sym_comment] = ACTIONS(503),
    [sym__space] = ACTIONS(506),
    [sym__eol] = ACTIONS(509),
  },
  [3] = {
    [sym_host_declaration] = STATE(2),
    [sym_match_declaration] = STATE(2),
    [sym_parameter] = STATE(513),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(512),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym_match_declaration_token1] = ACTIONS(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(201),
    [sym__space] = ACTIONS(203),
    [sym__eol] = ACTIONS(514),
  },
  [4] = {
    [sym__declarations] = STATE(30),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym__declarations_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(516),
    [aux_sym_host_declaration_token1] = ACTIONS(518),
    [aux_sym_match_declaration_token1] = ACTIONS(516),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
    [sym__eol] = ACTIONS(516),
  },
  [5] = {
    [sym__declarations] = STATE(29),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym__declarations_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(524),
    [aux_sym_host_declaration_token1] = ACTIONS(526),
    [aux_sym_match_declaration_token1] = ACTIONS(524),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
    [sym__eol] = ACTIONS(524),
  },
  [6] = {
    [sym__declarations] = STATE(22),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym__declarations_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(528),
    [aux_sym_host_declaration_token1] = ACTIONS(530),
    [aux_sym_match_declaration_token1] = ACTIONS(528),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
    [sym__eol] = ACTIONS(528),
  },
  [7] = {
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym__declarations_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(532),
    [aux_sym_host_declaration_token1] = ACTIONS(534),
    [aux_sym_match_declaration_token1] = ACTIONS(532),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
    [sym__eol] = ACTIONS(532),
  },
  [8] = {
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym__declarations_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(536),
    [aux_sym_host_declaration_token1] = ACTIONS(538),
    [aux_sym_match_declaration_token1] = ACTIONS(536),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(540),
    [aux_sym__address_family_token1] = ACTIONS(543),
    [aux_sym__batch_mode_token1] = ACTIONS(546),
    [aux_sym__bind_address_token1] = ACTIONS(549),
    [aux_sym__bind_interface_token1] = ACTIONS(552),
    [aux_sym__canonical_domains_token1] = ACTIONS(555),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(558),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(561),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(564),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(567),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(570),
    [aux_sym__certificate_file_token1] = ACTIONS(573),
    [aux_sym__check_host_ip_token1] = ACTIONS(576),
    [aux_sym__ciphers_token1] = ACTIONS(579),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(582),
    [aux_sym__compression_token1] = ACTIONS(585),
    [aux_sym__connection_attempts_token1] = ACTIONS(588),
    [aux_sym__connect_timeout_token1] = ACTIONS(591),
    [aux_sym__control_master_token1] = ACTIONS(594),
    [aux_sym__control_persist_token1] = ACTIONS(597),
    [aux_sym__control_path_token1] = ACTIONS(600),
    [aux_sym__dynamic_forward_token1] = ACTIONS(603),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(606),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(609),
    [aux_sym__escape_char_token1] = ACTIONS(612),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(615),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(618),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(621),
    [aux_sym__forward_agent_token1] = ACTIONS(624),
    [aux_sym__forward_x11_token1] = ACTIONS(627),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(630),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(633),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(636),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(639),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(642),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(645),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(648),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(648),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(651),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(654),
    [aux_sym__host_key_alias_token1] = ACTIONS(657),
    [aux_sym__hostname_token1] = ACTIONS(660),
    [aux_sym__identities_only_token1] = ACTIONS(663),
    [aux_sym__identity_agent_token1] = ACTIONS(666),
    [aux_sym__identity_file_token1] = ACTIONS(669),
    [aux_sym__ignore_unknown_token1] = ACTIONS(672),
    [aux_sym__include_token1] = ACTIONS(675),
    [aux_sym__ipqos_token1] = ACTIONS(678),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(681),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(681),
    [aux_sym__kex_algorithms_token1] = ACTIONS(684),
    [aux_sym__known_hosts_command_token1] = ACTIONS(687),
    [aux_sym__local_command_token1] = ACTIONS(690),
    [aux_sym__local_forward_token1] = ACTIONS(693),
    [aux_sym__log_level_token1] = ACTIONS(696),
    [aux_sym__log_verbose_token1] = ACTIONS(699),
    [aux_sym__macs_token1] = ACTIONS(702),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(705),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(708),
    [aux_sym__password_authentication_token1] = ACTIONS(711),
    [aux_sym__permit_local_command_token1] = ACTIONS(714),
    [aux_sym__permit_remote_open_token1] = ACTIONS(717),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(720),
    [aux_sym__port_token1] = ACTIONS(723),
    [aux_sym__preferred_authentications_token1] = ACTIONS(726),
    [aux_sym__proxy_command_token1] = ACTIONS(729),
    [aux_sym__proxy_jump_token1] = ACTIONS(732),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(735),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(738),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(738),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(741),
    [aux_sym__rekey_limit_token1] = ACTIONS(744),
    [aux_sym__remote_command_token1] = ACTIONS(747),
    [aux_sym__remote_forward_token1] = ACTIONS(750),
    [aux_sym__request_tty_token1] = ACTIONS(753),
    [aux_sym__required_rsa_size_token1] = ACTIONS(756),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(759),
    [aux_sym__security_key_provider_token1] = ACTIONS(762),
    [aux_sym__send_env_token1] = ACTIONS(765),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(768),
    [aux_sym__server_alive_interval_token1] = ACTIONS(771),
    [aux_sym__session_type_token1] = ACTIONS(774),
    [aux_sym__set_env_token1] = ACTIONS(777),
    [aux_sym__stdin_null_token1] = ACTIONS(780),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(783),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(786),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(789),
    [aux_sym__syslog_facility_token1] = ACTIONS(792),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(795),
    [aux_sym__tag_token1] = ACTIONS(798),
    [aux_sym__tunnel_token1] = ACTIONS(801),
    [aux_sym__tunnel_device_token1] = ACTIONS(804),
    [aux_sym__update_host_keys_token1] = ACTIONS(807),
    [aux_sym__use_keychain_token1] = ACTIONS(810),
    [aux_sym__user_token1] = ACTIONS(813),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(816),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(819),
    [aux_sym__visual_host_key_token1] = ACTIONS(822),
    [aux_sym__xauth_location_token1] = ACTIONS(825),
    [sym_comment] = ACTIONS(828),
    [sym__space] = ACTIONS(831),
    [sym__eol] = ACTIONS(536),
  },
  [9] = {
    [sym_host_declaration] = STATE(28),
    [sym_match_declaration] = STATE(28),
    [sym_parameter] = STATE(667),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym_match_declaration_token1] = ACTIONS(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(834),
    [sym__eol] = ACTIONS(836),
  },
  [10] = {
    [sym__declarations] = STATE(32),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [11] = {
    [sym__declarations] = STATE(19),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [12] = {
    [sym__declarations] = STATE(21),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [13] = {
    [sym__declarations] = STATE(20),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [14] = {
    [sym__declarations] = STATE(34),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [15] = {
    [sym__declarations] = STATE(33),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [16] = {
    [sym__declarations] = STATE(35),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [17] = {
    [sym__declarations] = STATE(24),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [18] = {
    [sym_parameter] = STATE(728),
    [sym__add_keys_to_agent] = STATE(518),
    [sym__address_family] = STATE(520),
    [sym__batch_mode] = STATE(528),
    [sym__bind_address] = STATE(532),
    [sym__bind_interface] = STATE(535),
    [sym__canonical_domains] = STATE(538),
    [sym__canonicalize_fallback_local] = STATE(541),
    [sym__canonicalize_hostname] = STATE(548),
    [sym__canonicalize_max_dots] = STATE(556),
    [sym__canonicalize_permitted_cnames] = STATE(561),
    [sym__ca_signature_algorithms] = STATE(562),
    [sym__certificate_file] = STATE(567),
    [sym__check_host_ip] = STATE(569),
    [sym__ciphers] = STATE(572),
    [sym__clear_all_forwardings] = STATE(576),
    [sym__compression] = STATE(578),
    [sym__connection_attempts] = STATE(582),
    [sym__connect_timeout] = STATE(590),
    [sym__control_master] = STATE(594),
    [sym__control_persist] = STATE(604),
    [sym__control_path] = STATE(616),
    [sym__dynamic_forward] = STATE(626),
    [sym__enable_escape_command_line] = STATE(628),
    [sym__enable_ssh_keysign] = STATE(637),
    [sym__escape_char] = STATE(669),
    [sym__exit_on_forward_failure] = STATE(683),
    [sym__fingerprint_hash] = STATE(704),
    [sym__fork_after_authentication] = STATE(726),
    [sym__forward_agent] = STATE(751),
    [sym__forward_x11] = STATE(757),
    [sym__forward_x11_timeout] = STATE(780),
    [sym__forward_x11_trusted] = STATE(787),
    [sym__global_known_hosts_file] = STATE(786),
    [sym__gssapi_authentication] = STATE(784),
    [sym__gssapi_delegate_credentials] = STATE(783),
    [sym__hash_known_hosts] = STATE(781),
    [sym__hostbased_accepted_algorithms] = STATE(778),
    [sym__hostbased_authentication] = STATE(777),
    [sym__host_key_algorithms] = STATE(776),
    [sym__host_key_alias] = STATE(775),
    [sym__hostname] = STATE(774),
    [sym__identities_only] = STATE(773),
    [sym__identity_agent] = STATE(771),
    [sym__identity_file] = STATE(770),
    [sym__ignore_unknown] = STATE(769),
    [sym__include] = STATE(766),
    [sym__ipqos] = STATE(764),
    [sym__kbd_interactive_authentication] = STATE(762),
    [sym__kex_algorithms] = STATE(761),
    [sym__known_hosts_command] = STATE(760),
    [sym__local_command] = STATE(759),
    [sym__local_forward] = STATE(756),
    [sym__log_level] = STATE(755),
    [sym__log_verbose] = STATE(754),
    [sym__macs] = STATE(750),
    [sym__no_host_authentication_for_localhost] = STATE(749),
    [sym__number_of_password_prompts] = STATE(747),
    [sym__password_authentication] = STATE(746),
    [sym__permit_local_command] = STATE(745),
    [sym__permit_remote_open] = STATE(744),
    [sym__pkcs11_provider] = STATE(743),
    [sym__port] = STATE(742),
    [sym__preferred_authentications] = STATE(741),
    [sym__proxy_command] = STATE(740),
    [sym__proxy_jump] = STATE(739),
    [sym__proxy_use_fdpass] = STATE(738),
    [sym__pubkey_accepted_algorithms] = STATE(736),
    [sym__pubkey_authentication] = STATE(735),
    [sym__rekey_limit] = STATE(734),
    [sym__remote_command] = STATE(733),
    [sym__remote_forward] = STATE(732),
    [sym__request_tty] = STATE(731),
    [sym__required_rsa_size] = STATE(730),
    [sym__revoked_host_keys] = STATE(729),
    [sym__security_key_provider] = STATE(727),
    [sym__send_env] = STATE(725),
    [sym__server_alive_count_max] = STATE(723),
    [sym__server_alive_interval] = STATE(722),
    [sym__session_type] = STATE(721),
    [sym__set_env] = STATE(720),
    [sym__stdin_null] = STATE(719),
    [sym__stream_local_bind_mask] = STATE(716),
    [sym__stream_local_bind_unlink] = STATE(713),
    [sym__strict_host_key_checking] = STATE(709),
    [sym__syslog_facility] = STATE(708),
    [sym__tcp_keep_alive] = STATE(707),
    [sym__tag] = STATE(706),
    [sym__tunnel] = STATE(705),
    [sym__tunnel_device] = STATE(690),
    [sym__update_host_keys] = STATE(703),
    [sym__use_keychain] = STATE(702),
    [sym__user] = STATE(699),
    [sym__user_known_hosts_file] = STATE(698),
    [sym__verify_host_key_dns] = STATE(697),
    [sym__visual_host_key] = STATE(696),
    [sym__xauth_location] = STATE(695),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(838),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(840),
    [aux_sym_host_declaration_token1] = ACTIONS(842),
    [aux_sym_match_declaration_token1] = ACTIONS(840),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(840),
    [aux_sym__address_family_token1] = ACTIONS(840),
    [aux_sym__batch_mode_token1] = ACTIONS(840),
    [aux_sym__bind_address_token1] = ACTIONS(840),
    [aux_sym__bind_interface_token1] = ACTIONS(840),
    [aux_sym__canonical_domains_token1] = ACTIONS(840),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(840),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(840),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(840),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(840),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(840),
    [aux_sym__certificate_file_token1] = ACTIONS(840),
    [aux_sym__check_host_ip_token1] = ACTIONS(840),
    [aux_sym__ciphers_token1] = ACTIONS(840),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(840),
    [aux_sym__compression_token1] = ACTIONS(840),
    [aux_sym__connection_attempts_token1] = ACTIONS(840),
    [aux_sym__connect_timeout_token1] = ACTIONS(840),
    [aux_sym__control_master_token1] = ACTIONS(840),
    [aux_sym__control_persist_token1] = ACTIONS(840),
    [aux_sym__control_path_token1] = ACTIONS(840),
    [aux_sym__dynamic_forward_token1] = ACTIONS(840),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(840),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(840),
    [aux_sym__escape_char_token1] = ACTIONS(840),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(840),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(840),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(840),
    [aux_sym__forward_agent_token1] = ACTIONS(840),
    [aux_sym__forward_x11_token1] = ACTIONS(842),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(840),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(840),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(840),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(840),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(840),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(840),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(840),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(840),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(840),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(840),
    [aux_sym__host_key_alias_token1] = ACTIONS(840),
    [aux_sym__hostname_token1] = ACTIONS(840),
    [aux_sym__identities_only_token1] = ACTIONS(840),
    [aux_sym__identity_agent_token1] = ACTIONS(840),
    [aux_sym__identity_file_token1] = ACTIONS(840),
    [aux_sym__ignore_unknown_token1] = ACTIONS(840),
    [aux_sym__include_token1] = ACTIONS(840),
    [aux_sym__ipqos_token1] = ACTIONS(840),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(840),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(840),
    [aux_sym__kex_algorithms_token1] = ACTIONS(840),
    [aux_sym__known_hosts_command_token1] = ACTIONS(840),
    [aux_sym__local_command_token1] = ACTIONS(840),
    [aux_sym__local_forward_token1] = ACTIONS(840),
    [aux_sym__log_level_token1] = ACTIONS(840),
    [aux_sym__log_verbose_token1] = ACTIONS(840),
    [aux_sym__macs_token1] = ACTIONS(840),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(840),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(840),
    [aux_sym__password_authentication_token1] = ACTIONS(840),
    [aux_sym__permit_local_command_token1] = ACTIONS(840),
    [aux_sym__permit_remote_open_token1] = ACTIONS(840),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(840),
    [aux_sym__port_token1] = ACTIONS(840),
    [aux_sym__preferred_authentications_token1] = ACTIONS(840),
    [aux_sym__proxy_command_token1] = ACTIONS(840),
    [aux_sym__proxy_jump_token1] = ACTIONS(840),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(840),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(840),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(840),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(840),
    [aux_sym__rekey_limit_token1] = ACTIONS(840),
    [aux_sym__remote_command_token1] = ACTIONS(840),
    [aux_sym__remote_forward_token1] = ACTIONS(840),
    [aux_sym__request_tty_token1] = ACTIONS(840),
    [aux_sym__required_rsa_size_token1] = ACTIONS(840),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(840),
    [aux_sym__security_key_provider_token1] = ACTIONS(840),
    [aux_sym__send_env_token1] = ACTIONS(840),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(840),
    [aux_sym__server_alive_interval_token1] = ACTIONS(840),
    [aux_sym__session_type_token1] = ACTIONS(840),
    [aux_sym__set_env_token1] = ACTIONS(840),
    [aux_sym__stdin_null_token1] = ACTIONS(840),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(840),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(840),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(840),
    [aux_sym__syslog_facility_token1] = ACTIONS(840),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(840),
    [aux_sym__tag_token1] = ACTIONS(840),
    [aux_sym__tunnel_token1] = ACTIONS(842),
    [aux_sym__tunnel_device_token1] = ACTIONS(840),
    [aux_sym__update_host_keys_token1] = ACTIONS(840),
    [aux_sym__use_keychain_token1] = ACTIONS(840),
    [aux_sym__user_token1] = ACTIONS(842),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(840),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(840),
    [aux_sym__visual_host_key_token1] = ACTIONS(840),
    [aux_sym__xauth_location_token1] = ACTIONS(840),
    [sym_comment] = ACTIONS(840),
    [sym__space] = ACTIONS(840),
    [sym__eol] = ACTIONS(840),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(844),
    [aux_sym_host_declaration_token1] = ACTIONS(846),
    [aux_sym_match_declaration_token1] = ACTIONS(844),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(844),
    [aux_sym__address_family_token1] = ACTIONS(844),
    [aux_sym__batch_mode_token1] = ACTIONS(844),
    [aux_sym__bind_address_token1] = ACTIONS(844),
    [aux_sym__bind_interface_token1] = ACTIONS(844),
    [aux_sym__canonical_domains_token1] = ACTIONS(844),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(844),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(844),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(844),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(844),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(844),
    [aux_sym__certificate_file_token1] = ACTIONS(844),
    [aux_sym__check_host_ip_token1] = ACTIONS(844),
    [aux_sym__ciphers_token1] = ACTIONS(844),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(844),
    [aux_sym__compression_token1] = ACTIONS(844),
    [aux_sym__connection_attempts_token1] = ACTIONS(844),
    [aux_sym__connect_timeout_token1] = ACTIONS(844),
    [aux_sym__control_master_token1] = ACTIONS(844),
    [aux_sym__control_persist_token1] = ACTIONS(844),
    [aux_sym__control_path_token1] = ACTIONS(844),
    [aux_sym__dynamic_forward_token1] = ACTIONS(844),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(844),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(844),
    [aux_sym__escape_char_token1] = ACTIONS(844),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(844),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(844),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(844),
    [aux_sym__forward_agent_token1] = ACTIONS(844),
    [aux_sym__forward_x11_token1] = ACTIONS(846),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(844),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(844),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(844),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(844),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(844),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(844),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(844),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(844),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(844),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(844),
    [aux_sym__host_key_alias_token1] = ACTIONS(844),
    [aux_sym__hostname_token1] = ACTIONS(844),
    [aux_sym__identities_only_token1] = ACTIONS(844),
    [aux_sym__identity_agent_token1] = ACTIONS(844),
    [aux_sym__identity_file_token1] = ACTIONS(844),
    [aux_sym__ignore_unknown_token1] = ACTIONS(844),
    [aux_sym__include_token1] = ACTIONS(844),
    [aux_sym__ipqos_token1] = ACTIONS(844),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(844),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(844),
    [aux_sym__kex_algorithms_token1] = ACTIONS(844),
    [aux_sym__known_hosts_command_token1] = ACTIONS(844),
    [aux_sym__local_command_token1] = ACTIONS(844),
    [aux_sym__local_forward_token1] = ACTIONS(844),
    [aux_sym__log_level_token1] = ACTIONS(844),
    [aux_sym__log_verbose_token1] = ACTIONS(844),
    [aux_sym__macs_token1] = ACTIONS(844),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(844),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(844),
    [aux_sym__password_authentication_token1] = ACTIONS(844),
    [aux_sym__permit_local_command_token1] = ACTIONS(844),
    [aux_sym__permit_remote_open_token1] = ACTIONS(844),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(844),
    [aux_sym__port_token1] = ACTIONS(844),
    [aux_sym__preferred_authentications_token1] = ACTIONS(844),
    [aux_sym__proxy_command_token1] = ACTIONS(844),
    [aux_sym__proxy_jump_token1] = ACTIONS(844),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(844),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(844),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(844),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(844),
    [aux_sym__rekey_limit_token1] = ACTIONS(844),
    [aux_sym__remote_command_token1] = ACTIONS(844),
    [aux_sym__remote_forward_token1] = ACTIONS(844),
    [aux_sym__request_tty_token1] = ACTIONS(844),
    [aux_sym__required_rsa_size_token1] = ACTIONS(844),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(844),
    [aux_sym__security_key_provider_token1] = ACTIONS(844),
    [aux_sym__send_env_token1] = ACTIONS(844),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(844),
    [aux_sym__server_alive_interval_token1] = ACTIONS(844),
    [aux_sym__session_type_token1] = ACTIONS(844),
    [aux_sym__set_env_token1] = ACTIONS(844),
    [aux_sym__stdin_null_token1] = ACTIONS(844),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(844),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(844),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(844),
    [aux_sym__syslog_facility_token1] = ACTIONS(844),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(844),
    [aux_sym__tag_token1] = ACTIONS(844),
    [aux_sym__tunnel_token1] = ACTIONS(846),
    [aux_sym__tunnel_device_token1] = ACTIONS(844),
    [aux_sym__update_host_keys_token1] = ACTIONS(844),
    [aux_sym__use_keychain_token1] = ACTIONS(844),
    [aux_sym__user_token1] = ACTIONS(846),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(844),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(844),
    [aux_sym__visual_host_key_token1] = ACTIONS(844),
    [aux_sym__xauth_location_token1] = ACTIONS(844),
    [sym_comment] = ACTIONS(844),
    [sym__space] = ACTIONS(844),
    [sym__eol] = ACTIONS(844),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(848),
    [aux_sym_host_declaration_token1] = ACTIONS(850),
    [aux_sym_match_declaration_token1] = ACTIONS(848),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(848),
    [aux_sym__address_family_token1] = ACTIONS(848),
    [aux_sym__batch_mode_token1] = ACTIONS(848),
    [aux_sym__bind_address_token1] = ACTIONS(848),
    [aux_sym__bind_interface_token1] = ACTIONS(848),
    [aux_sym__canonical_domains_token1] = ACTIONS(848),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(848),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(848),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(848),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(848),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(848),
    [aux_sym__certificate_file_token1] = ACTIONS(848),
    [aux_sym__check_host_ip_token1] = ACTIONS(848),
    [aux_sym__ciphers_token1] = ACTIONS(848),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(848),
    [aux_sym__compression_token1] = ACTIONS(848),
    [aux_sym__connection_attempts_token1] = ACTIONS(848),
    [aux_sym__connect_timeout_token1] = ACTIONS(848),
    [aux_sym__control_master_token1] = ACTIONS(848),
    [aux_sym__control_persist_token1] = ACTIONS(848),
    [aux_sym__control_path_token1] = ACTIONS(848),
    [aux_sym__dynamic_forward_token1] = ACTIONS(848),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(848),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(848),
    [aux_sym__escape_char_token1] = ACTIONS(848),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(848),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(848),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(848),
    [aux_sym__forward_agent_token1] = ACTIONS(848),
    [aux_sym__forward_x11_token1] = ACTIONS(850),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(848),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(848),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(848),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(848),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(848),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(848),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(848),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(848),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(848),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(848),
    [aux_sym__host_key_alias_token1] = ACTIONS(848),
    [aux_sym__hostname_token1] = ACTIONS(848),
    [aux_sym__identities_only_token1] = ACTIONS(848),
    [aux_sym__identity_agent_token1] = ACTIONS(848),
    [aux_sym__identity_file_token1] = ACTIONS(848),
    [aux_sym__ignore_unknown_token1] = ACTIONS(848),
    [aux_sym__include_token1] = ACTIONS(848),
    [aux_sym__ipqos_token1] = ACTIONS(848),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(848),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(848),
    [aux_sym__kex_algorithms_token1] = ACTIONS(848),
    [aux_sym__known_hosts_command_token1] = ACTIONS(848),
    [aux_sym__local_command_token1] = ACTIONS(848),
    [aux_sym__local_forward_token1] = ACTIONS(848),
    [aux_sym__log_level_token1] = ACTIONS(848),
    [aux_sym__log_verbose_token1] = ACTIONS(848),
    [aux_sym__macs_token1] = ACTIONS(848),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(848),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(848),
    [aux_sym__password_authentication_token1] = ACTIONS(848),
    [aux_sym__permit_local_command_token1] = ACTIONS(848),
    [aux_sym__permit_remote_open_token1] = ACTIONS(848),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(848),
    [aux_sym__port_token1] = ACTIONS(848),
    [aux_sym__preferred_authentications_token1] = ACTIONS(848),
    [aux_sym__proxy_command_token1] = ACTIONS(848),
    [aux_sym__proxy_jump_token1] = ACTIONS(848),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(848),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(848),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(848),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(848),
    [aux_sym__rekey_limit_token1] = ACTIONS(848),
    [aux_sym__remote_command_token1] = ACTIONS(848),
    [aux_sym__remote_forward_token1] = ACTIONS(848),
    [aux_sym__request_tty_token1] = ACTIONS(848),
    [aux_sym__required_rsa_size_token1] = ACTIONS(848),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(848),
    [aux_sym__security_key_provider_token1] = ACTIONS(848),
    [aux_sym__send_env_token1] = ACTIONS(848),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(848),
    [aux_sym__server_alive_interval_token1] = ACTIONS(848),
    [aux_sym__session_type_token1] = ACTIONS(848),
    [aux_sym__set_env_token1] = ACTIONS(848),
    [aux_sym__stdin_null_token1] = ACTIONS(848),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(848),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(848),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(848),
    [aux_sym__syslog_facility_token1] = ACTIONS(848),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(848),
    [aux_sym__tag_token1] = ACTIONS(848),
    [aux_sym__tunnel_token1] = ACTIONS(850),
    [aux_sym__tunnel_device_token1] = ACTIONS(848),
    [aux_sym__update_host_keys_token1] = ACTIONS(848),
    [aux_sym__use_keychain_token1] = ACTIONS(848),
    [aux_sym__user_token1] = ACTIONS(850),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(848),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(848),
    [aux_sym__visual_host_key_token1] = ACTIONS(848),
    [aux_sym__xauth_location_token1] = ACTIONS(848),
    [sym_comment] = ACTIONS(848),
    [sym__space] = ACTIONS(848),
    [sym__eol] = ACTIONS(848),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(852),
    [aux_sym_host_declaration_token1] = ACTIONS(854),
    [aux_sym_match_declaration_token1] = ACTIONS(852),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(852),
    [aux_sym__address_family_token1] = ACTIONS(852),
    [aux_sym__batch_mode_token1] = ACTIONS(852),
    [aux_sym__bind_address_token1] = ACTIONS(852),
    [aux_sym__bind_interface_token1] = ACTIONS(852),
    [aux_sym__canonical_domains_token1] = ACTIONS(852),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(852),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(852),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(852),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(852),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(852),
    [aux_sym__certificate_file_token1] = ACTIONS(852),
    [aux_sym__check_host_ip_token1] = ACTIONS(852),
    [aux_sym__ciphers_token1] = ACTIONS(852),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(852),
    [aux_sym__compression_token1] = ACTIONS(852),
    [aux_sym__connection_attempts_token1] = ACTIONS(852),
    [aux_sym__connect_timeout_token1] = ACTIONS(852),
    [aux_sym__control_master_token1] = ACTIONS(852),
    [aux_sym__control_persist_token1] = ACTIONS(852),
    [aux_sym__control_path_token1] = ACTIONS(852),
    [aux_sym__dynamic_forward_token1] = ACTIONS(852),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(852),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(852),
    [aux_sym__escape_char_token1] = ACTIONS(852),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(852),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(852),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(852),
    [aux_sym__forward_agent_token1] = ACTIONS(852),
    [aux_sym__forward_x11_token1] = ACTIONS(854),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(852),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(852),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(852),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(852),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(852),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(852),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(852),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(852),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(852),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(852),
    [aux_sym__host_key_alias_token1] = ACTIONS(852),
    [aux_sym__hostname_token1] = ACTIONS(852),
    [aux_sym__identities_only_token1] = ACTIONS(852),
    [aux_sym__identity_agent_token1] = ACTIONS(852),
    [aux_sym__identity_file_token1] = ACTIONS(852),
    [aux_sym__ignore_unknown_token1] = ACTIONS(852),
    [aux_sym__include_token1] = ACTIONS(852),
    [aux_sym__ipqos_token1] = ACTIONS(852),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(852),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(852),
    [aux_sym__kex_algorithms_token1] = ACTIONS(852),
    [aux_sym__known_hosts_command_token1] = ACTIONS(852),
    [aux_sym__local_command_token1] = ACTIONS(852),
    [aux_sym__local_forward_token1] = ACTIONS(852),
    [aux_sym__log_level_token1] = ACTIONS(852),
    [aux_sym__log_verbose_token1] = ACTIONS(852),
    [aux_sym__macs_token1] = ACTIONS(852),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(852),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(852),
    [aux_sym__password_authentication_token1] = ACTIONS(852),
    [aux_sym__permit_local_command_token1] = ACTIONS(852),
    [aux_sym__permit_remote_open_token1] = ACTIONS(852),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(852),
    [aux_sym__port_token1] = ACTIONS(852),
    [aux_sym__preferred_authentications_token1] = ACTIONS(852),
    [aux_sym__proxy_command_token1] = ACTIONS(852),
    [aux_sym__proxy_jump_token1] = ACTIONS(852),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(852),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(852),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(852),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(852),
    [aux_sym__rekey_limit_token1] = ACTIONS(852),
    [aux_sym__remote_command_token1] = ACTIONS(852),
    [aux_sym__remote_forward_token1] = ACTIONS(852),
    [aux_sym__request_tty_token1] = ACTIONS(852),
    [aux_sym__required_rsa_size_token1] = ACTIONS(852),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(852),
    [aux_sym__security_key_provider_token1] = ACTIONS(852),
    [aux_sym__send_env_token1] = ACTIONS(852),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(852),
    [aux_sym__server_alive_interval_token1] = ACTIONS(852),
    [aux_sym__session_type_token1] = ACTIONS(852),
    [aux_sym__set_env_token1] = ACTIONS(852),
    [aux_sym__stdin_null_token1] = ACTIONS(852),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(852),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(852),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(852),
    [aux_sym__syslog_facility_token1] = ACTIONS(852),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(852),
    [aux_sym__tag_token1] = ACTIONS(852),
    [aux_sym__tunnel_token1] = ACTIONS(854),
    [aux_sym__tunnel_device_token1] = ACTIONS(852),
    [aux_sym__update_host_keys_token1] = ACTIONS(852),
    [aux_sym__use_keychain_token1] = ACTIONS(852),
    [aux_sym__user_token1] = ACTIONS(854),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(852),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(852),
    [aux_sym__visual_host_key_token1] = ACTIONS(852),
    [aux_sym__xauth_location_token1] = ACTIONS(852),
    [sym_comment] = ACTIONS(852),
    [sym__space] = ACTIONS(852),
    [sym__eol] = ACTIONS(852),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(856),
    [aux_sym_host_declaration_token1] = ACTIONS(858),
    [aux_sym_match_declaration_token1] = ACTIONS(856),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(856),
    [aux_sym__address_family_token1] = ACTIONS(856),
    [aux_sym__batch_mode_token1] = ACTIONS(856),
    [aux_sym__bind_address_token1] = ACTIONS(856),
    [aux_sym__bind_interface_token1] = ACTIONS(856),
    [aux_sym__canonical_domains_token1] = ACTIONS(856),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(856),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(856),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(856),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(856),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(856),
    [aux_sym__certificate_file_token1] = ACTIONS(856),
    [aux_sym__check_host_ip_token1] = ACTIONS(856),
    [aux_sym__ciphers_token1] = ACTIONS(856),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(856),
    [aux_sym__compression_token1] = ACTIONS(856),
    [aux_sym__connection_attempts_token1] = ACTIONS(856),
    [aux_sym__connect_timeout_token1] = ACTIONS(856),
    [aux_sym__control_master_token1] = ACTIONS(856),
    [aux_sym__control_persist_token1] = ACTIONS(856),
    [aux_sym__control_path_token1] = ACTIONS(856),
    [aux_sym__dynamic_forward_token1] = ACTIONS(856),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(856),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(856),
    [aux_sym__escape_char_token1] = ACTIONS(856),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(856),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(856),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(856),
    [aux_sym__forward_agent_token1] = ACTIONS(856),
    [aux_sym__forward_x11_token1] = ACTIONS(858),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(856),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(856),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(856),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(856),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(856),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(856),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(856),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(856),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(856),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(856),
    [aux_sym__host_key_alias_token1] = ACTIONS(856),
    [aux_sym__hostname_token1] = ACTIONS(856),
    [aux_sym__identities_only_token1] = ACTIONS(856),
    [aux_sym__identity_agent_token1] = ACTIONS(856),
    [aux_sym__identity_file_token1] = ACTIONS(856),
    [aux_sym__ignore_unknown_token1] = ACTIONS(856),
    [aux_sym__include_token1] = ACTIONS(856),
    [aux_sym__ipqos_token1] = ACTIONS(856),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(856),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(856),
    [aux_sym__kex_algorithms_token1] = ACTIONS(856),
    [aux_sym__known_hosts_command_token1] = ACTIONS(856),
    [aux_sym__local_command_token1] = ACTIONS(856),
    [aux_sym__local_forward_token1] = ACTIONS(856),
    [aux_sym__log_level_token1] = ACTIONS(856),
    [aux_sym__log_verbose_token1] = ACTIONS(856),
    [aux_sym__macs_token1] = ACTIONS(856),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(856),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(856),
    [aux_sym__password_authentication_token1] = ACTIONS(856),
    [aux_sym__permit_local_command_token1] = ACTIONS(856),
    [aux_sym__permit_remote_open_token1] = ACTIONS(856),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(856),
    [aux_sym__port_token1] = ACTIONS(856),
    [aux_sym__preferred_authentications_token1] = ACTIONS(856),
    [aux_sym__proxy_command_token1] = ACTIONS(856),
    [aux_sym__proxy_jump_token1] = ACTIONS(856),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(856),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(856),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(856),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(856),
    [aux_sym__rekey_limit_token1] = ACTIONS(856),
    [aux_sym__remote_command_token1] = ACTIONS(856),
    [aux_sym__remote_forward_token1] = ACTIONS(856),
    [aux_sym__request_tty_token1] = ACTIONS(856),
    [aux_sym__required_rsa_size_token1] = ACTIONS(856),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(856),
    [aux_sym__security_key_provider_token1] = ACTIONS(856),
    [aux_sym__send_env_token1] = ACTIONS(856),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(856),
    [aux_sym__server_alive_interval_token1] = ACTIONS(856),
    [aux_sym__session_type_token1] = ACTIONS(856),
    [aux_sym__set_env_token1] = ACTIONS(856),
    [aux_sym__stdin_null_token1] = ACTIONS(856),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(856),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(856),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(856),
    [aux_sym__syslog_facility_token1] = ACTIONS(856),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(856),
    [aux_sym__tag_token1] = ACTIONS(856),
    [aux_sym__tunnel_token1] = ACTIONS(858),
    [aux_sym__tunnel_device_token1] = ACTIONS(856),
    [aux_sym__update_host_keys_token1] = ACTIONS(856),
    [aux_sym__use_keychain_token1] = ACTIONS(856),
    [aux_sym__user_token1] = ACTIONS(858),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(856),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(856),
    [aux_sym__visual_host_key_token1] = ACTIONS(856),
    [aux_sym__xauth_location_token1] = ACTIONS(856),
    [sym_comment] = ACTIONS(856),
    [sym__space] = ACTIONS(856),
    [sym__eol] = ACTIONS(856),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(860),
    [aux_sym_host_declaration_token1] = ACTIONS(862),
    [aux_sym_match_declaration_token1] = ACTIONS(860),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(860),
    [aux_sym__address_family_token1] = ACTIONS(860),
    [aux_sym__batch_mode_token1] = ACTIONS(860),
    [aux_sym__bind_address_token1] = ACTIONS(860),
    [aux_sym__bind_interface_token1] = ACTIONS(860),
    [aux_sym__canonical_domains_token1] = ACTIONS(860),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(860),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(860),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(860),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(860),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(860),
    [aux_sym__certificate_file_token1] = ACTIONS(860),
    [aux_sym__check_host_ip_token1] = ACTIONS(860),
    [aux_sym__ciphers_token1] = ACTIONS(860),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(860),
    [aux_sym__compression_token1] = ACTIONS(860),
    [aux_sym__connection_attempts_token1] = ACTIONS(860),
    [aux_sym__connect_timeout_token1] = ACTIONS(860),
    [aux_sym__control_master_token1] = ACTIONS(860),
    [aux_sym__control_persist_token1] = ACTIONS(860),
    [aux_sym__control_path_token1] = ACTIONS(860),
    [aux_sym__dynamic_forward_token1] = ACTIONS(860),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(860),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(860),
    [aux_sym__escape_char_token1] = ACTIONS(860),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(860),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(860),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(860),
    [aux_sym__forward_agent_token1] = ACTIONS(860),
    [aux_sym__forward_x11_token1] = ACTIONS(862),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(860),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(860),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(860),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(860),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(860),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(860),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(860),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(860),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(860),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(860),
    [aux_sym__host_key_alias_token1] = ACTIONS(860),
    [aux_sym__hostname_token1] = ACTIONS(860),
    [aux_sym__identities_only_token1] = ACTIONS(860),
    [aux_sym__identity_agent_token1] = ACTIONS(860),
    [aux_sym__identity_file_token1] = ACTIONS(860),
    [aux_sym__ignore_unknown_token1] = ACTIONS(860),
    [aux_sym__include_token1] = ACTIONS(860),
    [aux_sym__ipqos_token1] = ACTIONS(860),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(860),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(860),
    [aux_sym__kex_algorithms_token1] = ACTIONS(860),
    [aux_sym__known_hosts_command_token1] = ACTIONS(860),
    [aux_sym__local_command_token1] = ACTIONS(860),
    [aux_sym__local_forward_token1] = ACTIONS(860),
    [aux_sym__log_level_token1] = ACTIONS(860),
    [aux_sym__log_verbose_token1] = ACTIONS(860),
    [aux_sym__macs_token1] = ACTIONS(860),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(860),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(860),
    [aux_sym__password_authentication_token1] = ACTIONS(860),
    [aux_sym__permit_local_command_token1] = ACTIONS(860),
    [aux_sym__permit_remote_open_token1] = ACTIONS(860),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(860),
    [aux_sym__port_token1] = ACTIONS(860),
    [aux_sym__preferred_authentications_token1] = ACTIONS(860),
    [aux_sym__proxy_command_token1] = ACTIONS(860),
    [aux_sym__proxy_jump_token1] = ACTIONS(860),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(860),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(860),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(860),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(860),
    [aux_sym__rekey_limit_token1] = ACTIONS(860),
    [aux_sym__remote_command_token1] = ACTIONS(860),
    [aux_sym__remote_forward_token1] = ACTIONS(860),
    [aux_sym__request_tty_token1] = ACTIONS(860),
    [aux_sym__required_rsa_size_token1] = ACTIONS(860),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(860),
    [aux_sym__security_key_provider_token1] = ACTIONS(860),
    [aux_sym__send_env_token1] = ACTIONS(860),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(860),
    [aux_sym__server_alive_interval_token1] = ACTIONS(860),
    [aux_sym__session_type_token1] = ACTIONS(860),
    [aux_sym__set_env_token1] = ACTIONS(860),
    [aux_sym__stdin_null_token1] = ACTIONS(860),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(860),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(860),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(860),
    [aux_sym__syslog_facility_token1] = ACTIONS(860),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(860),
    [aux_sym__tag_token1] = ACTIONS(860),
    [aux_sym__tunnel_token1] = ACTIONS(862),
    [aux_sym__tunnel_device_token1] = ACTIONS(860),
    [aux_sym__update_host_keys_token1] = ACTIONS(860),
    [aux_sym__use_keychain_token1] = ACTIONS(860),
    [aux_sym__user_token1] = ACTIONS(862),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(860),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(860),
    [aux_sym__visual_host_key_token1] = ACTIONS(860),
    [aux_sym__xauth_location_token1] = ACTIONS(860),
    [sym_comment] = ACTIONS(860),
    [sym__space] = ACTIONS(860),
    [sym__eol] = ACTIONS(860),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(536),
    [aux_sym_host_declaration_token1] = ACTIONS(538),
    [aux_sym_match_declaration_token1] = ACTIONS(536),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(536),
    [aux_sym__address_family_token1] = ACTIONS(536),
    [aux_sym__batch_mode_token1] = ACTIONS(536),
    [aux_sym__bind_address_token1] = ACTIONS(536),
    [aux_sym__bind_interface_token1] = ACTIONS(536),
    [aux_sym__canonical_domains_token1] = ACTIONS(536),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(536),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(536),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(536),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(536),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(536),
    [aux_sym__certificate_file_token1] = ACTIONS(536),
    [aux_sym__check_host_ip_token1] = ACTIONS(536),
    [aux_sym__ciphers_token1] = ACTIONS(536),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(536),
    [aux_sym__compression_token1] = ACTIONS(536),
    [aux_sym__connection_attempts_token1] = ACTIONS(536),
    [aux_sym__connect_timeout_token1] = ACTIONS(536),
    [aux_sym__control_master_token1] = ACTIONS(536),
    [aux_sym__control_persist_token1] = ACTIONS(536),
    [aux_sym__control_path_token1] = ACTIONS(536),
    [aux_sym__dynamic_forward_token1] = ACTIONS(536),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(536),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(536),
    [aux_sym__escape_char_token1] = ACTIONS(536),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(536),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(536),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(536),
    [aux_sym__forward_agent_token1] = ACTIONS(536),
    [aux_sym__forward_x11_token1] = ACTIONS(538),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(536),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(536),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(536),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(536),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(536),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(536),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(536),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(536),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(536),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(536),
    [aux_sym__host_key_alias_token1] = ACTIONS(536),
    [aux_sym__hostname_token1] = ACTIONS(536),
    [aux_sym__identities_only_token1] = ACTIONS(536),
    [aux_sym__identity_agent_token1] = ACTIONS(536),
    [aux_sym__identity_file_token1] = ACTIONS(536),
    [aux_sym__ignore_unknown_token1] = ACTIONS(536),
    [aux_sym__include_token1] = ACTIONS(536),
    [aux_sym__ipqos_token1] = ACTIONS(536),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(536),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(536),
    [aux_sym__kex_algorithms_token1] = ACTIONS(536),
    [aux_sym__known_hosts_command_token1] = ACTIONS(536),
    [aux_sym__local_command_token1] = ACTIONS(536),
    [aux_sym__local_forward_token1] = ACTIONS(536),
    [aux_sym__log_level_token1] = ACTIONS(536),
    [aux_sym__log_verbose_token1] = ACTIONS(536),
    [aux_sym__macs_token1] = ACTIONS(536),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(536),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(536),
    [aux_sym__password_authentication_token1] = ACTIONS(536),
    [aux_sym__permit_local_command_token1] = ACTIONS(536),
    [aux_sym__permit_remote_open_token1] = ACTIONS(536),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(536),
    [aux_sym__port_token1] = ACTIONS(536),
    [aux_sym__preferred_authentications_token1] = ACTIONS(536),
    [aux_sym__proxy_command_token1] = ACTIONS(536),
    [aux_sym__proxy_jump_token1] = ACTIONS(536),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(536),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(536),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(536),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(536),
    [aux_sym__rekey_limit_token1] = ACTIONS(536),
    [aux_sym__remote_command_token1] = ACTIONS(536),
    [aux_sym__remote_forward_token1] = ACTIONS(536),
    [aux_sym__request_tty_token1] = ACTIONS(536),
    [aux_sym__required_rsa_size_token1] = ACTIONS(536),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(536),
    [aux_sym__security_key_provider_token1] = ACTIONS(536),
    [aux_sym__send_env_token1] = ACTIONS(536),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(536),
    [aux_sym__server_alive_interval_token1] = ACTIONS(536),
    [aux_sym__session_type_token1] = ACTIONS(536),
    [aux_sym__set_env_token1] = ACTIONS(536),
    [aux_sym__stdin_null_token1] = ACTIONS(536),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(536),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(536),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(536),
    [aux_sym__syslog_facility_token1] = ACTIONS(536),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(536),
    [aux_sym__tag_token1] = ACTIONS(536),
    [aux_sym__tunnel_token1] = ACTIONS(538),
    [aux_sym__tunnel_device_token1] = ACTIONS(536),
    [aux_sym__update_host_keys_token1] = ACTIONS(536),
    [aux_sym__use_keychain_token1] = ACTIONS(536),
    [aux_sym__user_token1] = ACTIONS(538),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(536),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(536),
    [aux_sym__visual_host_key_token1] = ACTIONS(536),
    [aux_sym__xauth_location_token1] = ACTIONS(536),
    [sym_comment] = ACTIONS(536),
    [sym__space] = ACTIONS(536),
    [sym__eol] = ACTIONS(536),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(864),
    [aux_sym_host_declaration_token1] = ACTIONS(866),
    [aux_sym_match_declaration_token1] = ACTIONS(864),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(864),
    [aux_sym__address_family_token1] = ACTIONS(864),
    [aux_sym__batch_mode_token1] = ACTIONS(864),
    [aux_sym__bind_address_token1] = ACTIONS(864),
    [aux_sym__bind_interface_token1] = ACTIONS(864),
    [aux_sym__canonical_domains_token1] = ACTIONS(864),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(864),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(864),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(864),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(864),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(864),
    [aux_sym__certificate_file_token1] = ACTIONS(864),
    [aux_sym__check_host_ip_token1] = ACTIONS(864),
    [aux_sym__ciphers_token1] = ACTIONS(864),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(864),
    [aux_sym__compression_token1] = ACTIONS(864),
    [aux_sym__connection_attempts_token1] = ACTIONS(864),
    [aux_sym__connect_timeout_token1] = ACTIONS(864),
    [aux_sym__control_master_token1] = ACTIONS(864),
    [aux_sym__control_persist_token1] = ACTIONS(864),
    [aux_sym__control_path_token1] = ACTIONS(864),
    [aux_sym__dynamic_forward_token1] = ACTIONS(864),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(864),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(864),
    [aux_sym__escape_char_token1] = ACTIONS(864),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(864),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(864),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(864),
    [aux_sym__forward_agent_token1] = ACTIONS(864),
    [aux_sym__forward_x11_token1] = ACTIONS(866),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(864),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(864),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(864),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(864),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(864),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(864),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(864),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(864),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(864),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(864),
    [aux_sym__host_key_alias_token1] = ACTIONS(864),
    [aux_sym__hostname_token1] = ACTIONS(864),
    [aux_sym__identities_only_token1] = ACTIONS(864),
    [aux_sym__identity_agent_token1] = ACTIONS(864),
    [aux_sym__identity_file_token1] = ACTIONS(864),
    [aux_sym__ignore_unknown_token1] = ACTIONS(864),
    [aux_sym__include_token1] = ACTIONS(864),
    [aux_sym__ipqos_token1] = ACTIONS(864),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(864),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(864),
    [aux_sym__kex_algorithms_token1] = ACTIONS(864),
    [aux_sym__known_hosts_command_token1] = ACTIONS(864),
    [aux_sym__local_command_token1] = ACTIONS(864),
    [aux_sym__local_forward_token1] = ACTIONS(864),
    [aux_sym__log_level_token1] = ACTIONS(864),
    [aux_sym__log_verbose_token1] = ACTIONS(864),
    [aux_sym__macs_token1] = ACTIONS(864),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(864),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(864),
    [aux_sym__password_authentication_token1] = ACTIONS(864),
    [aux_sym__permit_local_command_token1] = ACTIONS(864),
    [aux_sym__permit_remote_open_token1] = ACTIONS(864),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(864),
    [aux_sym__port_token1] = ACTIONS(864),
    [aux_sym__preferred_authentications_token1] = ACTIONS(864),
    [aux_sym__proxy_command_token1] = ACTIONS(864),
    [aux_sym__proxy_jump_token1] = ACTIONS(864),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(864),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(864),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(864),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(864),
    [aux_sym__rekey_limit_token1] = ACTIONS(864),
    [aux_sym__remote_command_token1] = ACTIONS(864),
    [aux_sym__remote_forward_token1] = ACTIONS(864),
    [aux_sym__request_tty_token1] = ACTIONS(864),
    [aux_sym__required_rsa_size_token1] = ACTIONS(864),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(864),
    [aux_sym__security_key_provider_token1] = ACTIONS(864),
    [aux_sym__send_env_token1] = ACTIONS(864),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(864),
    [aux_sym__server_alive_interval_token1] = ACTIONS(864),
    [aux_sym__session_type_token1] = ACTIONS(864),
    [aux_sym__set_env_token1] = ACTIONS(864),
    [aux_sym__stdin_null_token1] = ACTIONS(864),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(864),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(864),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(864),
    [aux_sym__syslog_facility_token1] = ACTIONS(864),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(864),
    [aux_sym__tag_token1] = ACTIONS(864),
    [aux_sym__tunnel_token1] = ACTIONS(866),
    [aux_sym__tunnel_device_token1] = ACTIONS(864),
    [aux_sym__update_host_keys_token1] = ACTIONS(864),
    [aux_sym__use_keychain_token1] = ACTIONS(864),
    [aux_sym__user_token1] = ACTIONS(866),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(864),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(864),
    [aux_sym__visual_host_key_token1] = ACTIONS(864),
    [aux_sym__xauth_location_token1] = ACTIONS(864),
    [sym_comment] = ACTIONS(864),
    [sym__space] = ACTIONS(864),
    [sym__eol] = ACTIONS(864),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(868),
    [aux_sym_host_declaration_token1] = ACTIONS(870),
    [aux_sym_match_declaration_token1] = ACTIONS(868),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(868),
    [aux_sym__address_family_token1] = ACTIONS(868),
    [aux_sym__batch_mode_token1] = ACTIONS(868),
    [aux_sym__bind_address_token1] = ACTIONS(868),
    [aux_sym__bind_interface_token1] = ACTIONS(868),
    [aux_sym__canonical_domains_token1] = ACTIONS(868),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(868),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(868),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(868),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(868),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(868),
    [aux_sym__certificate_file_token1] = ACTIONS(868),
    [aux_sym__check_host_ip_token1] = ACTIONS(868),
    [aux_sym__ciphers_token1] = ACTIONS(868),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(868),
    [aux_sym__compression_token1] = ACTIONS(868),
    [aux_sym__connection_attempts_token1] = ACTIONS(868),
    [aux_sym__connect_timeout_token1] = ACTIONS(868),
    [aux_sym__control_master_token1] = ACTIONS(868),
    [aux_sym__control_persist_token1] = ACTIONS(868),
    [aux_sym__control_path_token1] = ACTIONS(868),
    [aux_sym__dynamic_forward_token1] = ACTIONS(868),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(868),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(868),
    [aux_sym__escape_char_token1] = ACTIONS(868),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(868),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(868),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(868),
    [aux_sym__forward_agent_token1] = ACTIONS(868),
    [aux_sym__forward_x11_token1] = ACTIONS(870),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(868),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(868),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(868),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(868),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(868),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(868),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(868),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(868),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(868),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(868),
    [aux_sym__host_key_alias_token1] = ACTIONS(868),
    [aux_sym__hostname_token1] = ACTIONS(868),
    [aux_sym__identities_only_token1] = ACTIONS(868),
    [aux_sym__identity_agent_token1] = ACTIONS(868),
    [aux_sym__identity_file_token1] = ACTIONS(868),
    [aux_sym__ignore_unknown_token1] = ACTIONS(868),
    [aux_sym__include_token1] = ACTIONS(868),
    [aux_sym__ipqos_token1] = ACTIONS(868),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(868),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(868),
    [aux_sym__kex_algorithms_token1] = ACTIONS(868),
    [aux_sym__known_hosts_command_token1] = ACTIONS(868),
    [aux_sym__local_command_token1] = ACTIONS(868),
    [aux_sym__local_forward_token1] = ACTIONS(868),
    [aux_sym__log_level_token1] = ACTIONS(868),
    [aux_sym__log_verbose_token1] = ACTIONS(868),
    [aux_sym__macs_token1] = ACTIONS(868),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(868),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(868),
    [aux_sym__password_authentication_token1] = ACTIONS(868),
    [aux_sym__permit_local_command_token1] = ACTIONS(868),
    [aux_sym__permit_remote_open_token1] = ACTIONS(868),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(868),
    [aux_sym__port_token1] = ACTIONS(868),
    [aux_sym__preferred_authentications_token1] = ACTIONS(868),
    [aux_sym__proxy_command_token1] = ACTIONS(868),
    [aux_sym__proxy_jump_token1] = ACTIONS(868),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(868),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(868),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(868),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(868),
    [aux_sym__rekey_limit_token1] = ACTIONS(868),
    [aux_sym__remote_command_token1] = ACTIONS(868),
    [aux_sym__remote_forward_token1] = ACTIONS(868),
    [aux_sym__request_tty_token1] = ACTIONS(868),
    [aux_sym__required_rsa_size_token1] = ACTIONS(868),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(868),
    [aux_sym__security_key_provider_token1] = ACTIONS(868),
    [aux_sym__send_env_token1] = ACTIONS(868),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(868),
    [aux_sym__server_alive_interval_token1] = ACTIONS(868),
    [aux_sym__session_type_token1] = ACTIONS(868),
    [aux_sym__set_env_token1] = ACTIONS(868),
    [aux_sym__stdin_null_token1] = ACTIONS(868),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(868),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(868),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(868),
    [aux_sym__syslog_facility_token1] = ACTIONS(868),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(868),
    [aux_sym__tag_token1] = ACTIONS(868),
    [aux_sym__tunnel_token1] = ACTIONS(870),
    [aux_sym__tunnel_device_token1] = ACTIONS(868),
    [aux_sym__update_host_keys_token1] = ACTIONS(868),
    [aux_sym__use_keychain_token1] = ACTIONS(868),
    [aux_sym__user_token1] = ACTIONS(870),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(868),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(868),
    [aux_sym__visual_host_key_token1] = ACTIONS(868),
    [aux_sym__xauth_location_token1] = ACTIONS(868),
    [sym_comment] = ACTIONS(868),
    [sym__space] = ACTIONS(868),
    [sym__eol] = ACTIONS(868),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_host_declaration_token1] = ACTIONS(872),
    [aux_sym_match_declaration_token1] = ACTIONS(207),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(207),
    [aux_sym__address_family_token1] = ACTIONS(207),
    [aux_sym__batch_mode_token1] = ACTIONS(207),
    [aux_sym__bind_address_token1] = ACTIONS(207),
    [aux_sym__bind_interface_token1] = ACTIONS(207),
    [aux_sym__canonical_domains_token1] = ACTIONS(207),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(207),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(207),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(207),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(207),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(207),
    [aux_sym__certificate_file_token1] = ACTIONS(207),
    [aux_sym__check_host_ip_token1] = ACTIONS(207),
    [aux_sym__ciphers_token1] = ACTIONS(207),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(207),
    [aux_sym__compression_token1] = ACTIONS(207),
    [aux_sym__connection_attempts_token1] = ACTIONS(207),
    [aux_sym__connect_timeout_token1] = ACTIONS(207),
    [aux_sym__control_master_token1] = ACTIONS(207),
    [aux_sym__control_persist_token1] = ACTIONS(207),
    [aux_sym__control_path_token1] = ACTIONS(207),
    [aux_sym__dynamic_forward_token1] = ACTIONS(207),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(207),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(207),
    [aux_sym__escape_char_token1] = ACTIONS(207),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(207),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(207),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(207),
    [aux_sym__forward_agent_token1] = ACTIONS(207),
    [aux_sym__forward_x11_token1] = ACTIONS(872),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(207),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(207),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(207),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(207),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(207),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(207),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(207),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(207),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(207),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(207),
    [aux_sym__host_key_alias_token1] = ACTIONS(207),
    [aux_sym__hostname_token1] = ACTIONS(207),
    [aux_sym__identities_only_token1] = ACTIONS(207),
    [aux_sym__identity_agent_token1] = ACTIONS(207),
    [aux_sym__identity_file_token1] = ACTIONS(207),
    [aux_sym__ignore_unknown_token1] = ACTIONS(207),
    [aux_sym__include_token1] = ACTIONS(207),
    [aux_sym__ipqos_token1] = ACTIONS(207),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(207),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(207),
    [aux_sym__kex_algorithms_token1] = ACTIONS(207),
    [aux_sym__known_hosts_command_token1] = ACTIONS(207),
    [aux_sym__local_command_token1] = ACTIONS(207),
    [aux_sym__local_forward_token1] = ACTIONS(207),
    [aux_sym__log_level_token1] = ACTIONS(207),
    [aux_sym__log_verbose_token1] = ACTIONS(207),
    [aux_sym__macs_token1] = ACTIONS(207),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(207),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(207),
    [aux_sym__password_authentication_token1] = ACTIONS(207),
    [aux_sym__permit_local_command_token1] = ACTIONS(207),
    [aux_sym__permit_remote_open_token1] = ACTIONS(207),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(207),
    [aux_sym__port_token1] = ACTIONS(207),
    [aux_sym__preferred_authentications_token1] = ACTIONS(207),
    [aux_sym__proxy_command_token1] = ACTIONS(207),
    [aux_sym__proxy_jump_token1] = ACTIONS(207),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(207),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(207),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(207),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(207),
    [aux_sym__rekey_limit_token1] = ACTIONS(207),
    [aux_sym__remote_command_token1] = ACTIONS(207),
    [aux_sym__remote_forward_token1] = ACTIONS(207),
    [aux_sym__request_tty_token1] = ACTIONS(207),
    [aux_sym__required_rsa_size_token1] = ACTIONS(207),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(207),
    [aux_sym__security_key_provider_token1] = ACTIONS(207),
    [aux_sym__send_env_token1] = ACTIONS(207),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(207),
    [aux_sym__server_alive_interval_token1] = ACTIONS(207),
    [aux_sym__session_type_token1] = ACTIONS(207),
    [aux_sym__set_env_token1] = ACTIONS(207),
    [aux_sym__stdin_null_token1] = ACTIONS(207),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(207),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(207),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(207),
    [aux_sym__syslog_facility_token1] = ACTIONS(207),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(207),
    [aux_sym__tag_token1] = ACTIONS(207),
    [aux_sym__tunnel_token1] = ACTIONS(872),
    [aux_sym__tunnel_device_token1] = ACTIONS(207),
    [aux_sym__update_host_keys_token1] = ACTIONS(207),
    [aux_sym__use_keychain_token1] = ACTIONS(207),
    [aux_sym__user_token1] = ACTIONS(872),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(207),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(207),
    [aux_sym__visual_host_key_token1] = ACTIONS(207),
    [aux_sym__xauth_location_token1] = ACTIONS(207),
    [sym_comment] = ACTIONS(207),
    [sym__space] = ACTIONS(207),
    [sym__eol] = ACTIONS(207),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(528),
    [aux_sym_host_declaration_token1] = ACTIONS(530),
    [aux_sym_match_declaration_token1] = ACTIONS(528),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(528),
    [aux_sym__address_family_token1] = ACTIONS(528),
    [aux_sym__batch_mode_token1] = ACTIONS(528),
    [aux_sym__bind_address_token1] = ACTIONS(528),
    [aux_sym__bind_interface_token1] = ACTIONS(528),
    [aux_sym__canonical_domains_token1] = ACTIONS(528),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(528),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(528),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(528),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(528),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(528),
    [aux_sym__certificate_file_token1] = ACTIONS(528),
    [aux_sym__check_host_ip_token1] = ACTIONS(528),
    [aux_sym__ciphers_token1] = ACTIONS(528),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(528),
    [aux_sym__compression_token1] = ACTIONS(528),
    [aux_sym__connection_attempts_token1] = ACTIONS(528),
    [aux_sym__connect_timeout_token1] = ACTIONS(528),
    [aux_sym__control_master_token1] = ACTIONS(528),
    [aux_sym__control_persist_token1] = ACTIONS(528),
    [aux_sym__control_path_token1] = ACTIONS(528),
    [aux_sym__dynamic_forward_token1] = ACTIONS(528),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(528),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(528),
    [aux_sym__escape_char_token1] = ACTIONS(528),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(528),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(528),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(528),
    [aux_sym__forward_agent_token1] = ACTIONS(528),
    [aux_sym__forward_x11_token1] = ACTIONS(530),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(528),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(528),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(528),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(528),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(528),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(528),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(528),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(528),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(528),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(528),
    [aux_sym__host_key_alias_token1] = ACTIONS(528),
    [aux_sym__hostname_token1] = ACTIONS(528),
    [aux_sym__identities_only_token1] = ACTIONS(528),
    [aux_sym__identity_agent_token1] = ACTIONS(528),
    [aux_sym__identity_file_token1] = ACTIONS(528),
    [aux_sym__ignore_unknown_token1] = ACTIONS(528),
    [aux_sym__include_token1] = ACTIONS(528),
    [aux_sym__ipqos_token1] = ACTIONS(528),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(528),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(528),
    [aux_sym__kex_algorithms_token1] = ACTIONS(528),
    [aux_sym__known_hosts_command_token1] = ACTIONS(528),
    [aux_sym__local_command_token1] = ACTIONS(528),
    [aux_sym__local_forward_token1] = ACTIONS(528),
    [aux_sym__log_level_token1] = ACTIONS(528),
    [aux_sym__log_verbose_token1] = ACTIONS(528),
    [aux_sym__macs_token1] = ACTIONS(528),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(528),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(528),
    [aux_sym__password_authentication_token1] = ACTIONS(528),
    [aux_sym__permit_local_command_token1] = ACTIONS(528),
    [aux_sym__permit_remote_open_token1] = ACTIONS(528),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(528),
    [aux_sym__port_token1] = ACTIONS(528),
    [aux_sym__preferred_authentications_token1] = ACTIONS(528),
    [aux_sym__proxy_command_token1] = ACTIONS(528),
    [aux_sym__proxy_jump_token1] = ACTIONS(528),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(528),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(528),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(528),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(528),
    [aux_sym__rekey_limit_token1] = ACTIONS(528),
    [aux_sym__remote_command_token1] = ACTIONS(528),
    [aux_sym__remote_forward_token1] = ACTIONS(528),
    [aux_sym__request_tty_token1] = ACTIONS(528),
    [aux_sym__required_rsa_size_token1] = ACTIONS(528),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(528),
    [aux_sym__security_key_provider_token1] = ACTIONS(528),
    [aux_sym__send_env_token1] = ACTIONS(528),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(528),
    [aux_sym__server_alive_interval_token1] = ACTIONS(528),
    [aux_sym__session_type_token1] = ACTIONS(528),
    [aux_sym__set_env_token1] = ACTIONS(528),
    [aux_sym__stdin_null_token1] = ACTIONS(528),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(528),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(528),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(528),
    [aux_sym__syslog_facility_token1] = ACTIONS(528),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(528),
    [aux_sym__tag_token1] = ACTIONS(528),
    [aux_sym__tunnel_token1] = ACTIONS(530),
    [aux_sym__tunnel_device_token1] = ACTIONS(528),
    [aux_sym__update_host_keys_token1] = ACTIONS(528),
    [aux_sym__use_keychain_token1] = ACTIONS(528),
    [aux_sym__user_token1] = ACTIONS(530),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(528),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(528),
    [aux_sym__visual_host_key_token1] = ACTIONS(528),
    [aux_sym__xauth_location_token1] = ACTIONS(528),
    [sym_comment] = ACTIONS(528),
    [sym__space] = ACTIONS(528),
    [sym__eol] = ACTIONS(528),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(524),
    [aux_sym_host_declaration_token1] = ACTIONS(526),
    [aux_sym_match_declaration_token1] = ACTIONS(524),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(524),
    [aux_sym__address_family_token1] = ACTIONS(524),
    [aux_sym__batch_mode_token1] = ACTIONS(524),
    [aux_sym__bind_address_token1] = ACTIONS(524),
    [aux_sym__bind_interface_token1] = ACTIONS(524),
    [aux_sym__canonical_domains_token1] = ACTIONS(524),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(524),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(524),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(524),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(524),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(524),
    [aux_sym__certificate_file_token1] = ACTIONS(524),
    [aux_sym__check_host_ip_token1] = ACTIONS(524),
    [aux_sym__ciphers_token1] = ACTIONS(524),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(524),
    [aux_sym__compression_token1] = ACTIONS(524),
    [aux_sym__connection_attempts_token1] = ACTIONS(524),
    [aux_sym__connect_timeout_token1] = ACTIONS(524),
    [aux_sym__control_master_token1] = ACTIONS(524),
    [aux_sym__control_persist_token1] = ACTIONS(524),
    [aux_sym__control_path_token1] = ACTIONS(524),
    [aux_sym__dynamic_forward_token1] = ACTIONS(524),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(524),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(524),
    [aux_sym__escape_char_token1] = ACTIONS(524),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(524),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(524),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(524),
    [aux_sym__forward_agent_token1] = ACTIONS(524),
    [aux_sym__forward_x11_token1] = ACTIONS(526),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(524),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(524),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(524),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(524),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(524),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(524),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(524),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(524),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(524),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(524),
    [aux_sym__host_key_alias_token1] = ACTIONS(524),
    [aux_sym__hostname_token1] = ACTIONS(524),
    [aux_sym__identities_only_token1] = ACTIONS(524),
    [aux_sym__identity_agent_token1] = ACTIONS(524),
    [aux_sym__identity_file_token1] = ACTIONS(524),
    [aux_sym__ignore_unknown_token1] = ACTIONS(524),
    [aux_sym__include_token1] = ACTIONS(524),
    [aux_sym__ipqos_token1] = ACTIONS(524),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(524),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(524),
    [aux_sym__kex_algorithms_token1] = ACTIONS(524),
    [aux_sym__known_hosts_command_token1] = ACTIONS(524),
    [aux_sym__local_command_token1] = ACTIONS(524),
    [aux_sym__local_forward_token1] = ACTIONS(524),
    [aux_sym__log_level_token1] = ACTIONS(524),
    [aux_sym__log_verbose_token1] = ACTIONS(524),
    [aux_sym__macs_token1] = ACTIONS(524),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(524),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(524),
    [aux_sym__password_authentication_token1] = ACTIONS(524),
    [aux_sym__permit_local_command_token1] = ACTIONS(524),
    [aux_sym__permit_remote_open_token1] = ACTIONS(524),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(524),
    [aux_sym__port_token1] = ACTIONS(524),
    [aux_sym__preferred_authentications_token1] = ACTIONS(524),
    [aux_sym__proxy_command_token1] = ACTIONS(524),
    [aux_sym__proxy_jump_token1] = ACTIONS(524),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(524),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(524),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(524),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(524),
    [aux_sym__rekey_limit_token1] = ACTIONS(524),
    [aux_sym__remote_command_token1] = ACTIONS(524),
    [aux_sym__remote_forward_token1] = ACTIONS(524),
    [aux_sym__request_tty_token1] = ACTIONS(524),
    [aux_sym__required_rsa_size_token1] = ACTIONS(524),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(524),
    [aux_sym__security_key_provider_token1] = ACTIONS(524),
    [aux_sym__send_env_token1] = ACTIONS(524),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(524),
    [aux_sym__server_alive_interval_token1] = ACTIONS(524),
    [aux_sym__session_type_token1] = ACTIONS(524),
    [aux_sym__set_env_token1] = ACTIONS(524),
    [aux_sym__stdin_null_token1] = ACTIONS(524),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(524),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(524),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(524),
    [aux_sym__syslog_facility_token1] = ACTIONS(524),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(524),
    [aux_sym__tag_token1] = ACTIONS(524),
    [aux_sym__tunnel_token1] = ACTIONS(526),
    [aux_sym__tunnel_device_token1] = ACTIONS(524),
    [aux_sym__update_host_keys_token1] = ACTIONS(524),
    [aux_sym__use_keychain_token1] = ACTIONS(524),
    [aux_sym__user_token1] = ACTIONS(526),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(524),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(524),
    [aux_sym__visual_host_key_token1] = ACTIONS(524),
    [aux_sym__xauth_location_token1] = ACTIONS(524),
    [sym_comment] = ACTIONS(524),
    [sym__space] = ACTIONS(524),
    [sym__eol] = ACTIONS(524),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(874),
    [aux_sym_host_declaration_token1] = ACTIONS(876),
    [aux_sym_match_declaration_token1] = ACTIONS(874),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(874),
    [aux_sym__address_family_token1] = ACTIONS(874),
    [aux_sym__batch_mode_token1] = ACTIONS(874),
    [aux_sym__bind_address_token1] = ACTIONS(874),
    [aux_sym__bind_interface_token1] = ACTIONS(874),
    [aux_sym__canonical_domains_token1] = ACTIONS(874),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(874),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(874),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(874),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(874),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(874),
    [aux_sym__certificate_file_token1] = ACTIONS(874),
    [aux_sym__check_host_ip_token1] = ACTIONS(874),
    [aux_sym__ciphers_token1] = ACTIONS(874),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(874),
    [aux_sym__compression_token1] = ACTIONS(874),
    [aux_sym__connection_attempts_token1] = ACTIONS(874),
    [aux_sym__connect_timeout_token1] = ACTIONS(874),
    [aux_sym__control_master_token1] = ACTIONS(874),
    [aux_sym__control_persist_token1] = ACTIONS(874),
    [aux_sym__control_path_token1] = ACTIONS(874),
    [aux_sym__dynamic_forward_token1] = ACTIONS(874),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(874),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(874),
    [aux_sym__escape_char_token1] = ACTIONS(874),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(874),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(874),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(874),
    [aux_sym__forward_agent_token1] = ACTIONS(874),
    [aux_sym__forward_x11_token1] = ACTIONS(876),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(874),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(874),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(874),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(874),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(874),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(874),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(874),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(874),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(874),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(874),
    [aux_sym__host_key_alias_token1] = ACTIONS(874),
    [aux_sym__hostname_token1] = ACTIONS(874),
    [aux_sym__identities_only_token1] = ACTIONS(874),
    [aux_sym__identity_agent_token1] = ACTIONS(874),
    [aux_sym__identity_file_token1] = ACTIONS(874),
    [aux_sym__ignore_unknown_token1] = ACTIONS(874),
    [aux_sym__include_token1] = ACTIONS(874),
    [aux_sym__ipqos_token1] = ACTIONS(874),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(874),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(874),
    [aux_sym__kex_algorithms_token1] = ACTIONS(874),
    [aux_sym__known_hosts_command_token1] = ACTIONS(874),
    [aux_sym__local_command_token1] = ACTIONS(874),
    [aux_sym__local_forward_token1] = ACTIONS(874),
    [aux_sym__log_level_token1] = ACTIONS(874),
    [aux_sym__log_verbose_token1] = ACTIONS(874),
    [aux_sym__macs_token1] = ACTIONS(874),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(874),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(874),
    [aux_sym__password_authentication_token1] = ACTIONS(874),
    [aux_sym__permit_local_command_token1] = ACTIONS(874),
    [aux_sym__permit_remote_open_token1] = ACTIONS(874),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(874),
    [aux_sym__port_token1] = ACTIONS(874),
    [aux_sym__preferred_authentications_token1] = ACTIONS(874),
    [aux_sym__proxy_command_token1] = ACTIONS(874),
    [aux_sym__proxy_jump_token1] = ACTIONS(874),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(874),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(874),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(874),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(874),
    [aux_sym__rekey_limit_token1] = ACTIONS(874),
    [aux_sym__remote_command_token1] = ACTIONS(874),
    [aux_sym__remote_forward_token1] = ACTIONS(874),
    [aux_sym__request_tty_token1] = ACTIONS(874),
    [aux_sym__required_rsa_size_token1] = ACTIONS(874),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(874),
    [aux_sym__security_key_provider_token1] = ACTIONS(874),
    [aux_sym__send_env_token1] = ACTIONS(874),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(874),
    [aux_sym__server_alive_interval_token1] = ACTIONS(874),
    [aux_sym__session_type_token1] = ACTIONS(874),
    [aux_sym__set_env_token1] = ACTIONS(874),
    [aux_sym__stdin_null_token1] = ACTIONS(874),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(874),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(874),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(874),
    [aux_sym__syslog_facility_token1] = ACTIONS(874),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(874),
    [aux_sym__tag_token1] = ACTIONS(874),
    [aux_sym__tunnel_token1] = ACTIONS(876),
    [aux_sym__tunnel_device_token1] = ACTIONS(874),
    [aux_sym__update_host_keys_token1] = ACTIONS(874),
    [aux_sym__use_keychain_token1] = ACTIONS(874),
    [aux_sym__user_token1] = ACTIONS(876),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(874),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(874),
    [aux_sym__visual_host_key_token1] = ACTIONS(874),
    [aux_sym__xauth_location_token1] = ACTIONS(874),
    [sym_comment] = ACTIONS(874),
    [sym__space] = ACTIONS(874),
    [sym__eol] = ACTIONS(874),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(878),
    [aux_sym_host_declaration_token1] = ACTIONS(880),
    [aux_sym_match_declaration_token1] = ACTIONS(878),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(878),
    [aux_sym__address_family_token1] = ACTIONS(878),
    [aux_sym__batch_mode_token1] = ACTIONS(878),
    [aux_sym__bind_address_token1] = ACTIONS(878),
    [aux_sym__bind_interface_token1] = ACTIONS(878),
    [aux_sym__canonical_domains_token1] = ACTIONS(878),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(878),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(878),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(878),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(878),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(878),
    [aux_sym__certificate_file_token1] = ACTIONS(878),
    [aux_sym__check_host_ip_token1] = ACTIONS(878),
    [aux_sym__ciphers_token1] = ACTIONS(878),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(878),
    [aux_sym__compression_token1] = ACTIONS(878),
    [aux_sym__connection_attempts_token1] = ACTIONS(878),
    [aux_sym__connect_timeout_token1] = ACTIONS(878),
    [aux_sym__control_master_token1] = ACTIONS(878),
    [aux_sym__control_persist_token1] = ACTIONS(878),
    [aux_sym__control_path_token1] = ACTIONS(878),
    [aux_sym__dynamic_forward_token1] = ACTIONS(878),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(878),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(878),
    [aux_sym__escape_char_token1] = ACTIONS(878),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(878),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(878),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(878),
    [aux_sym__forward_agent_token1] = ACTIONS(878),
    [aux_sym__forward_x11_token1] = ACTIONS(880),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(878),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(878),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(878),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(878),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(878),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(878),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(878),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(878),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(878),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(878),
    [aux_sym__host_key_alias_token1] = ACTIONS(878),
    [aux_sym__hostname_token1] = ACTIONS(878),
    [aux_sym__identities_only_token1] = ACTIONS(878),
    [aux_sym__identity_agent_token1] = ACTIONS(878),
    [aux_sym__identity_file_token1] = ACTIONS(878),
    [aux_sym__ignore_unknown_token1] = ACTIONS(878),
    [aux_sym__include_token1] = ACTIONS(878),
    [aux_sym__ipqos_token1] = ACTIONS(878),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(878),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(878),
    [aux_sym__kex_algorithms_token1] = ACTIONS(878),
    [aux_sym__known_hosts_command_token1] = ACTIONS(878),
    [aux_sym__local_command_token1] = ACTIONS(878),
    [aux_sym__local_forward_token1] = ACTIONS(878),
    [aux_sym__log_level_token1] = ACTIONS(878),
    [aux_sym__log_verbose_token1] = ACTIONS(878),
    [aux_sym__macs_token1] = ACTIONS(878),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(878),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(878),
    [aux_sym__password_authentication_token1] = ACTIONS(878),
    [aux_sym__permit_local_command_token1] = ACTIONS(878),
    [aux_sym__permit_remote_open_token1] = ACTIONS(878),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(878),
    [aux_sym__port_token1] = ACTIONS(878),
    [aux_sym__preferred_authentications_token1] = ACTIONS(878),
    [aux_sym__proxy_command_token1] = ACTIONS(878),
    [aux_sym__proxy_jump_token1] = ACTIONS(878),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(878),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(878),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(878),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(878),
    [aux_sym__rekey_limit_token1] = ACTIONS(878),
    [aux_sym__remote_command_token1] = ACTIONS(878),
    [aux_sym__remote_forward_token1] = ACTIONS(878),
    [aux_sym__request_tty_token1] = ACTIONS(878),
    [aux_sym__required_rsa_size_token1] = ACTIONS(878),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(878),
    [aux_sym__security_key_provider_token1] = ACTIONS(878),
    [aux_sym__send_env_token1] = ACTIONS(878),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(878),
    [aux_sym__server_alive_interval_token1] = ACTIONS(878),
    [aux_sym__session_type_token1] = ACTIONS(878),
    [aux_sym__set_env_token1] = ACTIONS(878),
    [aux_sym__stdin_null_token1] = ACTIONS(878),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(878),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(878),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(878),
    [aux_sym__syslog_facility_token1] = ACTIONS(878),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(878),
    [aux_sym__tag_token1] = ACTIONS(878),
    [aux_sym__tunnel_token1] = ACTIONS(880),
    [aux_sym__tunnel_device_token1] = ACTIONS(878),
    [aux_sym__update_host_keys_token1] = ACTIONS(878),
    [aux_sym__use_keychain_token1] = ACTIONS(878),
    [aux_sym__user_token1] = ACTIONS(880),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(878),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(878),
    [aux_sym__visual_host_key_token1] = ACTIONS(878),
    [aux_sym__xauth_location_token1] = ACTIONS(878),
    [sym_comment] = ACTIONS(878),
    [sym__space] = ACTIONS(878),
    [sym__eol] = ACTIONS(878),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(882),
    [aux_sym_host_declaration_token1] = ACTIONS(884),
    [aux_sym_match_declaration_token1] = ACTIONS(882),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(882),
    [aux_sym__address_family_token1] = ACTIONS(882),
    [aux_sym__batch_mode_token1] = ACTIONS(882),
    [aux_sym__bind_address_token1] = ACTIONS(882),
    [aux_sym__bind_interface_token1] = ACTIONS(882),
    [aux_sym__canonical_domains_token1] = ACTIONS(882),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(882),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(882),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(882),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(882),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(882),
    [aux_sym__certificate_file_token1] = ACTIONS(882),
    [aux_sym__check_host_ip_token1] = ACTIONS(882),
    [aux_sym__ciphers_token1] = ACTIONS(882),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(882),
    [aux_sym__compression_token1] = ACTIONS(882),
    [aux_sym__connection_attempts_token1] = ACTIONS(882),
    [aux_sym__connect_timeout_token1] = ACTIONS(882),
    [aux_sym__control_master_token1] = ACTIONS(882),
    [aux_sym__control_persist_token1] = ACTIONS(882),
    [aux_sym__control_path_token1] = ACTIONS(882),
    [aux_sym__dynamic_forward_token1] = ACTIONS(882),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(882),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(882),
    [aux_sym__escape_char_token1] = ACTIONS(882),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(882),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(882),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(882),
    [aux_sym__forward_agent_token1] = ACTIONS(882),
    [aux_sym__forward_x11_token1] = ACTIONS(884),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(882),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(882),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(882),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(882),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(882),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(882),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(882),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(882),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(882),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(882),
    [aux_sym__host_key_alias_token1] = ACTIONS(882),
    [aux_sym__hostname_token1] = ACTIONS(882),
    [aux_sym__identities_only_token1] = ACTIONS(882),
    [aux_sym__identity_agent_token1] = ACTIONS(882),
    [aux_sym__identity_file_token1] = ACTIONS(882),
    [aux_sym__ignore_unknown_token1] = ACTIONS(882),
    [aux_sym__include_token1] = ACTIONS(882),
    [aux_sym__ipqos_token1] = ACTIONS(882),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(882),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(882),
    [aux_sym__kex_algorithms_token1] = ACTIONS(882),
    [aux_sym__known_hosts_command_token1] = ACTIONS(882),
    [aux_sym__local_command_token1] = ACTIONS(882),
    [aux_sym__local_forward_token1] = ACTIONS(882),
    [aux_sym__log_level_token1] = ACTIONS(882),
    [aux_sym__log_verbose_token1] = ACTIONS(882),
    [aux_sym__macs_token1] = ACTIONS(882),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(882),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(882),
    [aux_sym__password_authentication_token1] = ACTIONS(882),
    [aux_sym__permit_local_command_token1] = ACTIONS(882),
    [aux_sym__permit_remote_open_token1] = ACTIONS(882),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(882),
    [aux_sym__port_token1] = ACTIONS(882),
    [aux_sym__preferred_authentications_token1] = ACTIONS(882),
    [aux_sym__proxy_command_token1] = ACTIONS(882),
    [aux_sym__proxy_jump_token1] = ACTIONS(882),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(882),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(882),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(882),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(882),
    [aux_sym__rekey_limit_token1] = ACTIONS(882),
    [aux_sym__remote_command_token1] = ACTIONS(882),
    [aux_sym__remote_forward_token1] = ACTIONS(882),
    [aux_sym__request_tty_token1] = ACTIONS(882),
    [aux_sym__required_rsa_size_token1] = ACTIONS(882),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(882),
    [aux_sym__security_key_provider_token1] = ACTIONS(882),
    [aux_sym__send_env_token1] = ACTIONS(882),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(882),
    [aux_sym__server_alive_interval_token1] = ACTIONS(882),
    [aux_sym__session_type_token1] = ACTIONS(882),
    [aux_sym__set_env_token1] = ACTIONS(882),
    [aux_sym__stdin_null_token1] = ACTIONS(882),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(882),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(882),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(882),
    [aux_sym__syslog_facility_token1] = ACTIONS(882),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(882),
    [aux_sym__tag_token1] = ACTIONS(882),
    [aux_sym__tunnel_token1] = ACTIONS(884),
    [aux_sym__tunnel_device_token1] = ACTIONS(882),
    [aux_sym__update_host_keys_token1] = ACTIONS(882),
    [aux_sym__use_keychain_token1] = ACTIONS(882),
    [aux_sym__user_token1] = ACTIONS(884),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(882),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(882),
    [aux_sym__visual_host_key_token1] = ACTIONS(882),
    [aux_sym__xauth_location_token1] = ACTIONS(882),
    [sym_comment] = ACTIONS(882),
    [sym__space] = ACTIONS(882),
    [sym__eol] = ACTIONS(882),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(886),
    [aux_sym_host_declaration_token1] = ACTIONS(888),
    [aux_sym_match_declaration_token1] = ACTIONS(886),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(886),
    [aux_sym__address_family_token1] = ACTIONS(886),
    [aux_sym__batch_mode_token1] = ACTIONS(886),
    [aux_sym__bind_address_token1] = ACTIONS(886),
    [aux_sym__bind_interface_token1] = ACTIONS(886),
    [aux_sym__canonical_domains_token1] = ACTIONS(886),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(886),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(886),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(886),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(886),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(886),
    [aux_sym__certificate_file_token1] = ACTIONS(886),
    [aux_sym__check_host_ip_token1] = ACTIONS(886),
    [aux_sym__ciphers_token1] = ACTIONS(886),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(886),
    [aux_sym__compression_token1] = ACTIONS(886),
    [aux_sym__connection_attempts_token1] = ACTIONS(886),
    [aux_sym__connect_timeout_token1] = ACTIONS(886),
    [aux_sym__control_master_token1] = ACTIONS(886),
    [aux_sym__control_persist_token1] = ACTIONS(886),
    [aux_sym__control_path_token1] = ACTIONS(886),
    [aux_sym__dynamic_forward_token1] = ACTIONS(886),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(886),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(886),
    [aux_sym__escape_char_token1] = ACTIONS(886),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(886),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(886),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(886),
    [aux_sym__forward_agent_token1] = ACTIONS(886),
    [aux_sym__forward_x11_token1] = ACTIONS(888),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(886),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(886),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(886),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(886),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(886),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(886),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(886),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(886),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(886),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(886),
    [aux_sym__host_key_alias_token1] = ACTIONS(886),
    [aux_sym__hostname_token1] = ACTIONS(886),
    [aux_sym__identities_only_token1] = ACTIONS(886),
    [aux_sym__identity_agent_token1] = ACTIONS(886),
    [aux_sym__identity_file_token1] = ACTIONS(886),
    [aux_sym__ignore_unknown_token1] = ACTIONS(886),
    [aux_sym__include_token1] = ACTIONS(886),
    [aux_sym__ipqos_token1] = ACTIONS(886),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(886),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(886),
    [aux_sym__kex_algorithms_token1] = ACTIONS(886),
    [aux_sym__known_hosts_command_token1] = ACTIONS(886),
    [aux_sym__local_command_token1] = ACTIONS(886),
    [aux_sym__local_forward_token1] = ACTIONS(886),
    [aux_sym__log_level_token1] = ACTIONS(886),
    [aux_sym__log_verbose_token1] = ACTIONS(886),
    [aux_sym__macs_token1] = ACTIONS(886),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(886),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(886),
    [aux_sym__password_authentication_token1] = ACTIONS(886),
    [aux_sym__permit_local_command_token1] = ACTIONS(886),
    [aux_sym__permit_remote_open_token1] = ACTIONS(886),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(886),
    [aux_sym__port_token1] = ACTIONS(886),
    [aux_sym__preferred_authentications_token1] = ACTIONS(886),
    [aux_sym__proxy_command_token1] = ACTIONS(886),
    [aux_sym__proxy_jump_token1] = ACTIONS(886),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(886),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(886),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(886),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(886),
    [aux_sym__rekey_limit_token1] = ACTIONS(886),
    [aux_sym__remote_command_token1] = ACTIONS(886),
    [aux_sym__remote_forward_token1] = ACTIONS(886),
    [aux_sym__request_tty_token1] = ACTIONS(886),
    [aux_sym__required_rsa_size_token1] = ACTIONS(886),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(886),
    [aux_sym__security_key_provider_token1] = ACTIONS(886),
    [aux_sym__send_env_token1] = ACTIONS(886),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(886),
    [aux_sym__server_alive_interval_token1] = ACTIONS(886),
    [aux_sym__session_type_token1] = ACTIONS(886),
    [aux_sym__set_env_token1] = ACTIONS(886),
    [aux_sym__stdin_null_token1] = ACTIONS(886),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(886),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(886),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(886),
    [aux_sym__syslog_facility_token1] = ACTIONS(886),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(886),
    [aux_sym__tag_token1] = ACTIONS(886),
    [aux_sym__tunnel_token1] = ACTIONS(888),
    [aux_sym__tunnel_device_token1] = ACTIONS(886),
    [aux_sym__update_host_keys_token1] = ACTIONS(886),
    [aux_sym__use_keychain_token1] = ACTIONS(886),
    [aux_sym__user_token1] = ACTIONS(888),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(886),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(886),
    [aux_sym__visual_host_key_token1] = ACTIONS(886),
    [aux_sym__xauth_location_token1] = ACTIONS(886),
    [sym_comment] = ACTIONS(886),
    [sym__space] = ACTIONS(886),
    [sym__eol] = ACTIONS(886),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(890),
    [aux_sym_host_declaration_token1] = ACTIONS(892),
    [aux_sym_match_declaration_token1] = ACTIONS(890),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(890),
    [aux_sym__address_family_token1] = ACTIONS(890),
    [aux_sym__batch_mode_token1] = ACTIONS(890),
    [aux_sym__bind_address_token1] = ACTIONS(890),
    [aux_sym__bind_interface_token1] = ACTIONS(890),
    [aux_sym__canonical_domains_token1] = ACTIONS(890),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(890),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(890),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(890),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(890),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(890),
    [aux_sym__certificate_file_token1] = ACTIONS(890),
    [aux_sym__check_host_ip_token1] = ACTIONS(890),
    [aux_sym__ciphers_token1] = ACTIONS(890),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(890),
    [aux_sym__compression_token1] = ACTIONS(890),
    [aux_sym__connection_attempts_token1] = ACTIONS(890),
    [aux_sym__connect_timeout_token1] = ACTIONS(890),
    [aux_sym__control_master_token1] = ACTIONS(890),
    [aux_sym__control_persist_token1] = ACTIONS(890),
    [aux_sym__control_path_token1] = ACTIONS(890),
    [aux_sym__dynamic_forward_token1] = ACTIONS(890),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(890),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(890),
    [aux_sym__escape_char_token1] = ACTIONS(890),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(890),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(890),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(890),
    [aux_sym__forward_agent_token1] = ACTIONS(890),
    [aux_sym__forward_x11_token1] = ACTIONS(892),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(890),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(890),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(890),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(890),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(890),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(890),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(890),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(890),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(890),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(890),
    [aux_sym__host_key_alias_token1] = ACTIONS(890),
    [aux_sym__hostname_token1] = ACTIONS(890),
    [aux_sym__identities_only_token1] = ACTIONS(890),
    [aux_sym__identity_agent_token1] = ACTIONS(890),
    [aux_sym__identity_file_token1] = ACTIONS(890),
    [aux_sym__ignore_unknown_token1] = ACTIONS(890),
    [aux_sym__include_token1] = ACTIONS(890),
    [aux_sym__ipqos_token1] = ACTIONS(890),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(890),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(890),
    [aux_sym__kex_algorithms_token1] = ACTIONS(890),
    [aux_sym__known_hosts_command_token1] = ACTIONS(890),
    [aux_sym__local_command_token1] = ACTIONS(890),
    [aux_sym__local_forward_token1] = ACTIONS(890),
    [aux_sym__log_level_token1] = ACTIONS(890),
    [aux_sym__log_verbose_token1] = ACTIONS(890),
    [aux_sym__macs_token1] = ACTIONS(890),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(890),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(890),
    [aux_sym__password_authentication_token1] = ACTIONS(890),
    [aux_sym__permit_local_command_token1] = ACTIONS(890),
    [aux_sym__permit_remote_open_token1] = ACTIONS(890),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(890),
    [aux_sym__port_token1] = ACTIONS(890),
    [aux_sym__preferred_authentications_token1] = ACTIONS(890),
    [aux_sym__proxy_command_token1] = ACTIONS(890),
    [aux_sym__proxy_jump_token1] = ACTIONS(890),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(890),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(890),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(890),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(890),
    [aux_sym__rekey_limit_token1] = ACTIONS(890),
    [aux_sym__remote_command_token1] = ACTIONS(890),
    [aux_sym__remote_forward_token1] = ACTIONS(890),
    [aux_sym__request_tty_token1] = ACTIONS(890),
    [aux_sym__required_rsa_size_token1] = ACTIONS(890),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(890),
    [aux_sym__security_key_provider_token1] = ACTIONS(890),
    [aux_sym__send_env_token1] = ACTIONS(890),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(890),
    [aux_sym__server_alive_interval_token1] = ACTIONS(890),
    [aux_sym__session_type_token1] = ACTIONS(890),
    [aux_sym__set_env_token1] = ACTIONS(890),
    [aux_sym__stdin_null_token1] = ACTIONS(890),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(890),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(890),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(890),
    [aux_sym__syslog_facility_token1] = ACTIONS(890),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(890),
    [aux_sym__tag_token1] = ACTIONS(890),
    [aux_sym__tunnel_token1] = ACTIONS(892),
    [aux_sym__tunnel_device_token1] = ACTIONS(890),
    [aux_sym__update_host_keys_token1] = ACTIONS(890),
    [aux_sym__use_keychain_token1] = ACTIONS(890),
    [aux_sym__user_token1] = ACTIONS(892),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(890),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(890),
    [aux_sym__visual_host_key_token1] = ACTIONS(890),
    [aux_sym__xauth_location_token1] = ACTIONS(890),
    [sym_comment] = ACTIONS(890),
    [sym__space] = ACTIONS(890),
    [sym__eol] = ACTIONS(890),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(894), 1,
      anon_sym_BANG,
    ACTIONS(896), 1,
      aux_sym__all_token1,
    ACTIONS(898), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(900), 1,
      aux_sym__match_final_token1,
    ACTIONS(902), 1,
      aux_sym__match_exec_token1,
    ACTIONS(904), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(906), 1,
      aux_sym__match_host_token1,
    ACTIONS(908), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(910), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(912), 1,
      aux_sym__match_user_token1,
    ACTIONS(914), 1,
      aux_sym__match_localuser_token1,
    STATE(318), 1,
      sym_condition,
    STATE(654), 1,
      sym__match_localuser,
    STATE(655), 1,
      sym__match_user,
    STATE(657), 1,
      sym__match_tagged,
    STATE(658), 1,
      sym__match_originalhost,
    STATE(659), 1,
      sym__match_host,
    STATE(660), 1,
      sym__match_localnetwork,
    STATE(661), 1,
      sym__match_exec,
    STATE(663), 1,
      sym__match_final,
    STATE(664), 1,
      sym__match_canonical,
    STATE(665), 1,
      sym__all,
  [67] = 21,
    ACTIONS(894), 1,
      anon_sym_BANG,
    ACTIONS(898), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(900), 1,
      aux_sym__match_final_token1,
    ACTIONS(902), 1,
      aux_sym__match_exec_token1,
    ACTIONS(904), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(906), 1,
      aux_sym__match_host_token1,
    ACTIONS(908), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(910), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(912), 1,
      aux_sym__match_user_token1,
    ACTIONS(914), 1,
      aux_sym__match_localuser_token1,
    ACTIONS(916), 1,
      sym__eol,
    STATE(636), 1,
      sym_condition,
    STATE(654), 1,
      sym__match_localuser,
    STATE(655), 1,
      sym__match_user,
    STATE(657), 1,
      sym__match_tagged,
    STATE(658), 1,
      sym__match_originalhost,
    STATE(659), 1,
      sym__match_host,
    STATE(660), 1,
      sym__match_localnetwork,
    STATE(661), 1,
      sym__match_exec,
    STATE(663), 1,
      sym__match_final,
    STATE(664), 1,
      sym__match_canonical,
  [131] = 21,
    ACTIONS(894), 1,
      anon_sym_BANG,
    ACTIONS(898), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(900), 1,
      aux_sym__match_final_token1,
    ACTIONS(902), 1,
      aux_sym__match_exec_token1,
    ACTIONS(904), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(906), 1,
      aux_sym__match_host_token1,
    ACTIONS(908), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(910), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(912), 1,
      aux_sym__match_user_token1,
    ACTIONS(914), 1,
      aux_sym__match_localuser_token1,
    ACTIONS(918), 1,
      sym__eol,
    STATE(636), 1,
      sym_condition,
    STATE(654), 1,
      sym__match_localuser,
    STATE(655), 1,
      sym__match_user,
    STATE(657), 1,
      sym__match_tagged,
    STATE(658), 1,
      sym__match_originalhost,
    STATE(659), 1,
      sym__match_host,
    STATE(660), 1,
      sym__match_localnetwork,
    STATE(661), 1,
      sym__match_exec,
    STATE(663), 1,
      sym__match_final,
    STATE(664), 1,
      sym__match_canonical,
  [195] = 20,
    ACTIONS(894), 1,
      anon_sym_BANG,
    ACTIONS(898), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(900), 1,
      aux_sym__match_final_token1,
    ACTIONS(902), 1,
      aux_sym__match_exec_token1,
    ACTIONS(904), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(906), 1,
      aux_sym__match_host_token1,
    ACTIONS(908), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(910), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(912), 1,
      aux_sym__match_user_token1,
    ACTIONS(914), 1,
      aux_sym__match_localuser_token1,
    STATE(636), 1,
      sym_condition,
    STATE(654), 1,
      sym__match_localuser,
    STATE(655), 1,
      sym__match_user,
    STATE(657), 1,
      sym__match_tagged,
    STATE(658), 1,
      sym__match_originalhost,
    STATE(659), 1,
      sym__match_host,
    STATE(660), 1,
      sym__match_localnetwork,
    STATE(661), 1,
      sym__match_exec,
    STATE(663), 1,
      sym__match_final,
    STATE(664), 1,
      sym__match_canonical,
  [256] = 18,
    ACTIONS(898), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(900), 1,
      aux_sym__match_final_token1,
    ACTIONS(902), 1,
      aux_sym__match_exec_token1,
    ACTIONS(904), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(906), 1,
      aux_sym__match_host_token1,
    ACTIONS(908), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(910), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(912), 1,
      aux_sym__match_user_token1,
    ACTIONS(914), 1,
      aux_sym__match_localuser_token1,
    STATE(505), 1,
      sym__match_canonical,
    STATE(506), 1,
      sym__match_final,
    STATE(507), 1,
      sym__match_exec,
    STATE(508), 1,
      sym__match_localnetwork,
    STATE(509), 1,
      sym__match_host,
    STATE(510), 1,
      sym__match_originalhost,
    STATE(511), 1,
      sym__match_tagged,
    STATE(512), 1,
      sym__match_user,
    STATE(515), 1,
      sym__match_localuser,
  [311] = 14,
    ACTIONS(920), 1,
      aux_sym__match_exec_token2,
    ACTIONS(922), 1,
      anon_sym_DQUOTE,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(930), 1,
      sym__number,
    STATE(70), 1,
      aux_sym__file_string_repeat1,
    STATE(367), 1,
      aux_sym__plain_string_repeat1,
    STATE(503), 1,
      sym_number,
    STATE(552), 1,
      sym__forward_value1,
    STATE(571), 1,
      sym__file_string,
    STATE(573), 1,
      sym__forward_value_inner,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
    STATE(808), 2,
      sym__string,
      sym__plain_string,
  [356] = 14,
    ACTIONS(920), 1,
      aux_sym__match_exec_token2,
    ACTIONS(922), 1,
      anon_sym_DQUOTE,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(930), 1,
      sym__number,
    STATE(70), 1,
      aux_sym__file_string_repeat1,
    STATE(367), 1,
      aux_sym__plain_string_repeat1,
    STATE(503), 1,
      sym_number,
    STATE(571), 1,
      sym__file_string,
    STATE(573), 1,
      sym__forward_value_inner,
    STATE(815), 1,
      sym__forward_value1,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
    STATE(808), 2,
      sym__string,
      sym__plain_string,
  [401] = 12,
    ACTIONS(920), 1,
      aux_sym__match_exec_token2,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(932), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym__file_string_repeat1,
    STATE(367), 1,
      aux_sym__plain_string_repeat1,
    STATE(686), 1,
      sym__forward_value_inner,
    STATE(687), 1,
      sym__forward_value2,
    STATE(688), 1,
      sym__file_string,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
    STATE(808), 2,
      sym__string,
      sym__plain_string,
  [440] = 12,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(934), 1,
      aux_sym__match_exec_token2,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      aux_sym__match_exec_token3,
    ACTIONS(940), 1,
      aux_sym__file_token_token1,
    ACTIONS(942), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(82), 1,
      aux_sym__file_string_repeat2,
    STATE(367), 1,
      aux_sym__plain_string_repeat1,
    STATE(465), 1,
      aux_sym__string_repeat1,
    STATE(792), 1,
      sym__forward_value_inner,
    STATE(209), 2,
      sym__file_token,
      sym_variable,
    STATE(808), 2,
      sym__string,
      sym__plain_string,
  [479] = 12,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(934), 1,
      aux_sym__match_exec_token2,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      aux_sym__match_exec_token3,
    ACTIONS(940), 1,
      aux_sym__file_token_token1,
    ACTIONS(942), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(82), 1,
      aux_sym__file_string_repeat2,
    STATE(367), 1,
      aux_sym__plain_string_repeat1,
    STATE(465), 1,
      aux_sym__string_repeat1,
    STATE(817), 1,
      sym__forward_value_inner,
    STATE(209), 2,
      sym__file_token,
      sym_variable,
    STATE(808), 2,
      sym__string,
      sym__plain_string,
  [518] = 12,
    ACTIONS(920), 1,
      aux_sym__match_exec_token2,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(932), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym__file_string_repeat1,
    STATE(367), 1,
      aux_sym__plain_string_repeat1,
    STATE(686), 1,
      sym__forward_value_inner,
    STATE(688), 1,
      sym__file_string,
    STATE(711), 1,
      sym__forward_value2,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
    STATE(808), 2,
      sym__string,
      sym__plain_string,
  [557] = 10,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      anon_sym_DOLLAR,
    STATE(70), 1,
      aux_sym__file_string_repeat1,
    STATE(584), 1,
      sym__var_value,
    STATE(585), 1,
      sym__file_string,
    ACTIONS(948), 2,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
  [590] = 7,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      aux_sym__match_exec_token2,
    ACTIONS(954), 1,
      anon_sym_DOLLAR,
    STATE(275), 1,
      aux_sym__plain_string_repeat1,
    STATE(603), 1,
      sym__var_value,
    ACTIONS(956), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(602), 3,
      sym__string,
      sym__plain_string,
      sym__boolean,
  [615] = 6,
    ACTIONS(958), 1,
      aux_sym__match_exec_token2,
    ACTIONS(964), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(49), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(967), 2,
      sym__space,
      sym__eol,
    STATE(86), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(961), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [638] = 9,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(930), 1,
      sym__number,
    ACTIONS(934), 1,
      aux_sym__match_exec_token2,
    ACTIONS(969), 1,
      anon_sym_DQUOTE,
    STATE(367), 1,
      aux_sym__plain_string_repeat1,
    STATE(612), 1,
      sym_number,
    STATE(615), 1,
      sym__forward_value_inner,
    STATE(666), 1,
      sym__dynamic_forward_value,
    STATE(808), 2,
      sym__string,
      sym__plain_string,
  [667] = 6,
    ACTIONS(971), 1,
      aux_sym__match_exec_token2,
    ACTIONS(975), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(49), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(977), 2,
      sym__space,
      sym__eol,
    STATE(86), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(973), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [690] = 9,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(930), 1,
      sym__number,
    ACTIONS(934), 1,
      aux_sym__match_exec_token2,
    ACTIONS(969), 1,
      anon_sym_DQUOTE,
    STATE(365), 1,
      sym__dynamic_forward_value,
    STATE(367), 1,
      aux_sym__plain_string_repeat1,
    STATE(612), 1,
      sym_number,
    STATE(615), 1,
      sym__forward_value_inner,
    STATE(808), 2,
      sym__string,
      sym__plain_string,
  [719] = 7,
    ACTIONS(971), 1,
      aux_sym__match_exec_token2,
    ACTIONS(975), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(979), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(635), 1,
      sym__file_pattern_vars,
    STATE(86), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(973), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [744] = 7,
    ACTIONS(971), 1,
      aux_sym__match_exec_token2,
    ACTIONS(975), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(979), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(618), 1,
      sym__file_pattern_vars,
    STATE(86), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(973), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [769] = 6,
    ACTIONS(981), 1,
      anon_sym_DQUOTE,
    ACTIONS(983), 1,
      aux_sym__match_exec_token3,
    ACTIONS(987), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(59), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(126), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(985), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [791] = 8,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(934), 1,
      aux_sym__match_exec_token2,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(989), 1,
      aux_sym__match_exec_token3,
    STATE(367), 1,
      aux_sym__plain_string_repeat1,
    STATE(465), 1,
      aux_sym__string_repeat1,
    STATE(823), 1,
      sym__forward_value_inner,
    STATE(808), 2,
      sym__string,
      sym__plain_string,
  [817] = 8,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(991), 1,
      anon_sym_none,
    STATE(70), 1,
      aux_sym__file_string_repeat1,
    STATE(479), 1,
      sym__file_string,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
  [843] = 8,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(993), 1,
      anon_sym_none,
    STATE(70), 1,
      aux_sym__file_string_repeat1,
    STATE(718), 1,
      sym__file_string,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
  [869] = 6,
    ACTIONS(995), 1,
      anon_sym_DQUOTE,
    ACTIONS(997), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1003), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(59), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(126), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(1000), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [891] = 7,
    ACTIONS(1006), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1009), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1012), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1015), 1,
      sym__space,
    ACTIONS(1017), 1,
      sym__eol,
    STATE(60), 1,
      aux_sym__hosts_string_repeat1,
    STATE(159), 2,
      sym__hosts_token,
      sym_variable,
  [914] = 7,
    ACTIONS(1019), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1025), 1,
      anon_sym_none,
    STATE(125), 1,
      aux_sym__match_value_repeat1,
    STATE(342), 1,
      sym__cnames_map,
    STATE(343), 1,
      sym__pattern,
    ACTIONS(1023), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [937] = 7,
    ACTIONS(1027), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1029), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1031), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1033), 1,
      sym__space,
    ACTIONS(1035), 1,
      sym__eol,
    STATE(60), 1,
      aux_sym__hosts_string_repeat1,
    STATE(159), 2,
      sym__hosts_token,
      sym_variable,
  [960] = 5,
    ACTIONS(983), 1,
      aux_sym__match_exec_token3,
    ACTIONS(987), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(55), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(126), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(985), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [979] = 7,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1037), 1,
      anon_sym_BANG,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1043), 1,
      sym__eol,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(613), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1002] = 7,
    ACTIONS(1045), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1048), 1,
      aux_sym__file_token_token1,
    ACTIONS(1051), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1054), 1,
      sym__space,
    ACTIONS(1056), 1,
      sym__eol,
    STATE(65), 1,
      aux_sym__remote_command_repeat1,
    STATE(161), 2,
      sym__file_token,
      sym_variable,
  [1025] = 7,
    ACTIONS(1058), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1060), 1,
      aux_sym__file_token_token1,
    ACTIONS(1062), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1064), 1,
      sym__space,
    ACTIONS(1066), 1,
      sym__eol,
    STATE(65), 1,
      aux_sym__remote_command_repeat1,
    STATE(161), 2,
      sym__file_token,
      sym_variable,
  [1048] = 6,
    ACTIONS(1068), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1071), 1,
      aux_sym__file_token_token1,
    ACTIONS(1074), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(67), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(1077), 2,
      sym__space,
      sym__eol,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
  [1069] = 6,
    ACTIONS(1079), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym__match_value_repeat1,
    STATE(197), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1083), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1085), 2,
      sym__space,
      sym__eol,
  [1090] = 7,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym__file_string_repeat1,
    STATE(583), 1,
      sym__file_string,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
  [1113] = 6,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    STATE(67), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(1087), 2,
      sym__space,
      sym__eol,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
  [1134] = 7,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym__file_string_repeat1,
    STATE(549), 1,
      sym__file_string,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
  [1157] = 7,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1037), 1,
      anon_sym_BANG,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1089), 1,
      sym__eol,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(613), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1180] = 7,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1037), 1,
      anon_sym_BANG,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1091), 1,
      sym__eol,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(613), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1203] = 7,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1037), 1,
      anon_sym_BANG,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1093), 1,
      sym__eol,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(613), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1226] = 4,
    ACTIONS(1079), 1,
      aux_sym__match_exec_token2,
    STATE(87), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1083), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1095), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1242] = 3,
    ACTIONS(1097), 1,
      aux_sym__match_exec_token2,
    STATE(76), 1,
      aux_sym__plain_string_repeat1,
    ACTIONS(1100), 5,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_AT,
      sym__space,
      sym__eol,
  [1256] = 4,
    ACTIONS(1104), 1,
      anon_sym_confirm,
    ACTIONS(1106), 1,
      sym__number,
    STATE(653), 2,
      sym__boolean,
      sym_time,
    ACTIONS(1102), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [1272] = 6,
    ACTIONS(1019), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym__match_value_repeat1,
    STATE(343), 1,
      sym__pattern,
    STATE(647), 1,
      sym__cnames_map,
    ACTIONS(1023), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1292] = 6,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1037), 1,
      anon_sym_BANG,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(613), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1312] = 6,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1108), 1,
      anon_sym_BANG,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(308), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1332] = 6,
    ACTIONS(1110), 1,
      anon_sym_DQUOTE,
    ACTIONS(1112), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1114), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym__match_value_repeat3,
    STATE(353), 1,
      aux_sym__match_value_repeat4,
    ACTIONS(1116), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1352] = 6,
    ACTIONS(940), 1,
      aux_sym__file_token_token1,
    ACTIONS(942), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1118), 1,
      anon_sym_DQUOTE,
    ACTIONS(1120), 1,
      aux_sym__match_exec_token3,
    STATE(84), 1,
      aux_sym__file_string_repeat2,
    STATE(209), 2,
      sym__file_token,
      sym_variable,
  [1372] = 6,
    ACTIONS(1027), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1029), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1031), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(62), 1,
      aux_sym__hosts_string_repeat1,
    STATE(575), 1,
      sym__hosts_string,
    STATE(159), 2,
      sym__hosts_token,
      sym_variable,
  [1392] = 6,
    ACTIONS(1122), 1,
      anon_sym_DQUOTE,
    ACTIONS(1124), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1127), 1,
      aux_sym__file_token_token1,
    ACTIONS(1130), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(84), 1,
      aux_sym__file_string_repeat2,
    STATE(209), 2,
      sym__file_token,
      sym_variable,
  [1412] = 6,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      aux_sym__match_exec_token2,
    ACTIONS(954), 1,
      anon_sym_DOLLAR,
    STATE(275), 1,
      aux_sym__plain_string_repeat1,
    STATE(547), 1,
      sym__var_value,
    STATE(546), 2,
      sym__string,
      sym__plain_string,
  [1432] = 2,
    ACTIONS(1133), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1135), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1444] = 4,
    ACTIONS(1137), 1,
      aux_sym__match_exec_token2,
    STATE(87), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1142), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1140), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1460] = 6,
    ACTIONS(1145), 1,
      aux_sym_time_token1,
    ACTIONS(1147), 1,
      aux_sym_time_token2,
    ACTIONS(1149), 1,
      aux_sym_time_token3,
    ACTIONS(1151), 1,
      aux_sym_time_token4,
    ACTIONS(1153), 1,
      aux_sym_time_token5,
    ACTIONS(1155), 2,
      sym__space,
      sym__eol,
  [1480] = 4,
    ACTIONS(1079), 1,
      aux_sym__match_exec_token2,
    STATE(87), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1083), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1157), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1496] = 2,
    ACTIONS(1159), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1161), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1508] = 3,
    ACTIONS(1163), 1,
      aux_sym__match_exec_token2,
    STATE(76), 1,
      aux_sym__plain_string_repeat1,
    ACTIONS(1165), 5,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_AT,
      sym__space,
      sym__eol,
  [1522] = 4,
    ACTIONS(1112), 1,
      aux_sym__match_exec_token3,
    STATE(114), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1116), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1167), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [1537] = 3,
    ACTIONS(1169), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1172), 1,
      anon_sym_COLON,
    ACTIONS(1174), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1550] = 5,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(649), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1567] = 5,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1079), 1,
      aux_sym__match_exec_token2,
    STATE(89), 1,
      aux_sym__match_value_repeat1,
    STATE(192), 1,
      sym__pattern,
    ACTIONS(1083), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1584] = 4,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    STATE(109), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1157), 2,
      sym__space,
      sym__eol,
  [1599] = 5,
    ACTIONS(1176), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1178), 1,
      aux_sym__hostname_token_token1,
    STATE(133), 1,
      aux_sym__hostname_string_repeat1,
    STATE(234), 1,
      sym__hostname_token,
    ACTIONS(1180), 2,
      sym__space,
      sym__eol,
  [1616] = 5,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(484), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1633] = 5,
    ACTIONS(1079), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1182), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym__match_value_repeat1,
    STATE(633), 1,
      sym__match_value,
    ACTIONS(1083), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1650] = 5,
    ACTIONS(1079), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1182), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym__match_value_repeat1,
    STATE(634), 1,
      sym__match_value,
    ACTIONS(1083), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1667] = 5,
    ACTIONS(1079), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1182), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym__match_value_repeat1,
    STATE(632), 1,
      sym__match_value,
    ACTIONS(1083), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1684] = 5,
    ACTIONS(1079), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1182), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym__match_value_repeat1,
    STATE(631), 1,
      sym__match_value,
    ACTIONS(1083), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1701] = 5,
    ACTIONS(1079), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1182), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym__match_value_repeat1,
    STATE(629), 1,
      sym__match_value,
    ACTIONS(1083), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1718] = 2,
    STATE(533), 1,
      sym__boolean,
    ACTIONS(1184), 5,
      anon_sym_ask,
      anon_sym_accept_DASHnew,
      anon_sym_off,
      anon_sym_yes,
      anon_sym_no,
  [1729] = 4,
    ACTIONS(1188), 1,
      anon_sym_DASH,
    STATE(131), 1,
      aux_sym__send_env_value_repeat1,
    STATE(460), 1,
      sym__send_env_value,
    ACTIONS(1186), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1744] = 5,
    ACTIONS(940), 1,
      aux_sym__file_token_token1,
    ACTIONS(942), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1120), 1,
      aux_sym__match_exec_token3,
    STATE(82), 1,
      aux_sym__file_string_repeat2,
    STATE(209), 2,
      sym__file_token,
      sym_variable,
  [1761] = 5,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1079), 1,
      aux_sym__match_exec_token2,
    STATE(89), 1,
      aux_sym__match_value_repeat1,
    STATE(255), 1,
      sym__pattern,
    ACTIONS(1083), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1778] = 2,
    ACTIONS(1159), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1161), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1789] = 4,
    ACTIONS(1190), 1,
      aux_sym__match_exec_token2,
    STATE(109), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1140), 2,
      sym__space,
      sym__eol,
    ACTIONS(1193), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1804] = 3,
    ACTIONS(1196), 1,
      aux_sym__match_exec_token2,
    STATE(110), 1,
      aux_sym__plain_string_repeat1,
    ACTIONS(1100), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [1817] = 3,
    ACTIONS(1199), 1,
      aux_sym__match_exec_token2,
    STATE(110), 1,
      aux_sym__plain_string_repeat1,
    ACTIONS(1165), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [1830] = 5,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(645), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1847] = 3,
    STATE(119), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1201), 2,
      sym__space,
      sym__eol,
    ACTIONS(1186), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1860] = 4,
    ACTIONS(1205), 1,
      aux_sym__match_exec_token3,
    STATE(114), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1203), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    ACTIONS(1208), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1875] = 5,
    ACTIONS(1019), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym__match_value_repeat1,
    STATE(255), 1,
      sym__pattern,
    ACTIONS(1023), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1892] = 2,
    ACTIONS(1211), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1172), 5,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_AT,
      sym__space,
      sym__eol,
  [1903] = 2,
    ACTIONS(1213), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1215), 5,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [1914] = 4,
    ACTIONS(1188), 1,
      anon_sym_DASH,
    STATE(131), 1,
      aux_sym__send_env_value_repeat1,
    STATE(712), 1,
      sym__send_env_value,
    ACTIONS(1186), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1929] = 3,
    STATE(119), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1220), 2,
      sym__space,
      sym__eol,
    ACTIONS(1217), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1942] = 6,
    ACTIONS(1222), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1225), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1228), 1,
      sym__space,
    ACTIONS(1230), 1,
      sym__eol,
    STATE(120), 1,
      aux_sym__proxy_string_repeat1,
    STATE(212), 1,
      sym__proxy_token,
  [1961] = 4,
    ACTIONS(1232), 1,
      aux_sym__match_exec_token2,
    STATE(121), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1140), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(1235), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1976] = 5,
    ACTIONS(1238), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1241), 1,
      aux_sym__file_token_token1,
    STATE(122), 1,
      aux_sym__match_exec_repeat1,
    STATE(243), 1,
      sym__file_token,
    ACTIONS(1244), 2,
      sym__space,
      sym__eol,
  [1993] = 5,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1079), 1,
      aux_sym__match_exec_token2,
    STATE(89), 1,
      aux_sym__match_value_repeat1,
    STATE(258), 1,
      sym__pattern,
    ACTIONS(1083), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2010] = 4,
    ACTIONS(1246), 1,
      anon_sym_DQUOTE,
    STATE(701), 1,
      sym__permit_remote_open_value,
    ACTIONS(1248), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    ACTIONS(1250), 2,
      anon_sym_any,
      anon_sym_none,
  [2025] = 4,
    ACTIONS(1019), 1,
      aux_sym__match_exec_token2,
    STATE(121), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1023), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1157), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2040] = 2,
    ACTIONS(1254), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1252), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2051] = 5,
    ACTIONS(1058), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1060), 1,
      aux_sym__file_token_token1,
    ACTIONS(1062), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(66), 1,
      aux_sym__remote_command_repeat1,
    STATE(161), 2,
      sym__file_token,
      sym_variable,
  [2068] = 2,
    STATE(555), 2,
      sym__pubkey_authentication_arg,
      sym__boolean,
    ACTIONS(1256), 4,
      anon_sym_unbound,
      anon_sym_host_DASHbound,
      anon_sym_yes,
      anon_sym_no,
  [2079] = 6,
    ACTIONS(1163), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1258), 1,
      anon_sym_none,
    ACTIONS(1260), 1,
      aux_sym__proxy_jump_value_token1,
    STATE(91), 1,
      aux_sym__plain_string_repeat1,
    STATE(154), 1,
      sym__plain_string,
    STATE(211), 1,
      sym__proxy_jump_value,
  [2098] = 6,
    ACTIONS(1262), 1,
      anon_sym_none,
    ACTIONS(1264), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1266), 1,
      aux_sym__proxy_token_token1,
    STATE(135), 1,
      aux_sym__proxy_string_repeat1,
    STATE(212), 1,
      sym__proxy_token,
    STATE(558), 1,
      sym__proxy_string,
  [2117] = 3,
    STATE(119), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1268), 2,
      sym__space,
      sym__eol,
    ACTIONS(1186), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2130] = 6,
    ACTIONS(1163), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1258), 1,
      anon_sym_none,
    ACTIONS(1260), 1,
      aux_sym__proxy_jump_value_token1,
    STATE(91), 1,
      aux_sym__plain_string_repeat1,
    STATE(154), 1,
      sym__plain_string,
    STATE(445), 1,
      sym__proxy_jump_value,
  [2149] = 5,
    ACTIONS(1270), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1273), 1,
      aux_sym__hostname_token_token1,
    STATE(133), 1,
      aux_sym__hostname_string_repeat1,
    STATE(234), 1,
      sym__hostname_token,
    ACTIONS(1276), 2,
      sym__space,
      sym__eol,
  [2166] = 3,
    ACTIONS(1280), 1,
      anon_sym_auto,
    STATE(620), 1,
      sym__boolean,
    ACTIONS(1278), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [2179] = 6,
    ACTIONS(1264), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1266), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1282), 1,
      sym__space,
    ACTIONS(1284), 1,
      sym__eol,
    STATE(120), 1,
      aux_sym__proxy_string_repeat1,
    STATE(212), 1,
      sym__proxy_token,
  [2198] = 4,
    ACTIONS(1246), 1,
      anon_sym_DQUOTE,
    STATE(432), 1,
      sym__permit_remote_open_value,
    ACTIONS(1248), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    ACTIONS(1286), 2,
      anon_sym_any,
      anon_sym_none,
  [2213] = 4,
    ACTIONS(1288), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(222), 1,
      sym__log_verbose_value,
    ACTIONS(1290), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2228] = 5,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(678), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2245] = 5,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(724), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2262] = 5,
    ACTIONS(1292), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1294), 1,
      aux_sym__file_token_token1,
    STATE(122), 1,
      aux_sym__match_exec_repeat1,
    STATE(243), 1,
      sym__file_token,
    ACTIONS(1296), 2,
      sym__space,
      sym__eol,
  [2279] = 5,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(581), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2296] = 5,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(648), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2313] = 5,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2330] = 5,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(336), 1,
      sym__pattern,
    ACTIONS(1041), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2347] = 6,
    ACTIONS(1176), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1178), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(1298), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      aux_sym__hostname_string_repeat1,
    STATE(234), 1,
      sym__hostname_token,
    STATE(588), 1,
      sym__hostname_string,
  [2366] = 3,
    ACTIONS(1302), 1,
      anon_sym_COLON,
    STATE(156), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1300), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2378] = 4,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      aux_sym__match_exec_token2,
    STATE(275), 1,
      aux_sym__plain_string_repeat1,
    STATE(714), 2,
      sym__string,
      sym__plain_string,
  [2392] = 2,
    ACTIONS(1213), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1215), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2402] = 4,
    ACTIONS(1304), 1,
      aux_sym__match_exec_token3,
    STATE(167), 1,
      aux_sym__match_value_repeat3,
    STATE(420), 1,
      sym__log_verbose_quoted,
    ACTIONS(1306), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2416] = 3,
    ACTIONS(1308), 1,
      anon_sym_COLON,
    STATE(156), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1300), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2428] = 5,
    ACTIONS(1310), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1313), 1,
      sym_token,
    ACTIONS(1316), 1,
      sym__space,
    ACTIONS(1318), 1,
      sym__eol,
    STATE(151), 1,
      aux_sym__token_string_repeat1,
  [2444] = 5,
    ACTIONS(1320), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1322), 1,
      sym_token,
    ACTIONS(1324), 1,
      sym__space,
    ACTIONS(1326), 1,
      sym__eol,
    STATE(151), 1,
      aux_sym__token_string_repeat1,
  [2460] = 4,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      aux_sym__match_exec_token2,
    STATE(275), 1,
      aux_sym__plain_string_repeat1,
    STATE(560), 2,
      sym__string,
      sym__plain_string,
  [2474] = 3,
    ACTIONS(1330), 1,
      anon_sym_COLON,
    ACTIONS(1332), 1,
      anon_sym_AT,
    ACTIONS(1328), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [2486] = 4,
    ACTIONS(1304), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1334), 1,
      anon_sym_COLON,
    STATE(172), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1306), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2500] = 3,
    ACTIONS(1339), 1,
      anon_sym_COLON,
    STATE(156), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1336), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2512] = 3,
    ACTIONS(1106), 1,
      sym__number,
    ACTIONS(1341), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(619), 2,
      sym__boolean,
      sym_time,
  [2524] = 4,
    ACTIONS(1203), 1,
      anon_sym_DQUOTE,
    ACTIONS(1343), 1,
      aux_sym__match_exec_token3,
    STATE(158), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1346), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2538] = 2,
    ACTIONS(1349), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1351), 3,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2548] = 5,
    ACTIONS(1353), 1,
      anon_sym_DQUOTE,
    ACTIONS(1355), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1357), 1,
      aux_sym__hostname_token_token1,
    STATE(170), 1,
      aux_sym__hostname_string_repeat2,
    STATE(449), 1,
      sym__hostname_token,
  [2564] = 2,
    ACTIONS(1359), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1361), 3,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2574] = 4,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      aux_sym__match_exec_token2,
    STATE(275), 1,
      aux_sym__plain_string_repeat1,
    STATE(668), 2,
      sym__string,
      sym__plain_string,
  [2588] = 1,
    ACTIONS(1363), 5,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
      sym__space,
      sym__eol,
  [2596] = 2,
    ACTIONS(1365), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1174), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2606] = 4,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      aux_sym__match_exec_token2,
    STATE(275), 1,
      aux_sym__plain_string_repeat1,
    STATE(381), 2,
      sym__string,
      sym__plain_string,
  [2620] = 3,
    STATE(150), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(425), 1,
      sym__log_verbose_value,
    ACTIONS(1290), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2632] = 4,
    ACTIONS(1304), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1367), 1,
      anon_sym_COLON,
    STATE(172), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1306), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2646] = 5,
    ACTIONS(1369), 1,
      anon_sym_DQUOTE,
    ACTIONS(1371), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1374), 1,
      aux_sym__file_token_token1,
    STATE(168), 1,
      aux_sym__match_exec_repeat2,
    STATE(459), 1,
      sym__file_token,
  [2662] = 2,
    STATE(551), 1,
      sym__boolean,
    ACTIONS(1377), 4,
      anon_sym_auto,
      anon_sym_force,
      anon_sym_yes,
      anon_sym_no,
  [2672] = 5,
    ACTIONS(1379), 1,
      anon_sym_DQUOTE,
    ACTIONS(1381), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1384), 1,
      aux_sym__hostname_token_token1,
    STATE(170), 1,
      aux_sym__hostname_string_repeat2,
    STATE(449), 1,
      sym__hostname_token,
  [2688] = 5,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    ACTIONS(1389), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1391), 1,
      aux_sym__file_token_token1,
    STATE(168), 1,
      aux_sym__match_exec_repeat2,
    STATE(459), 1,
      sym__file_token,
  [2704] = 4,
    ACTIONS(1203), 1,
      anon_sym_COLON,
    ACTIONS(1393), 1,
      aux_sym__match_exec_token3,
    STATE(172), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1396), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2718] = 2,
    ACTIONS(1159), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1161), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2728] = 2,
    ACTIONS(1401), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1399), 4,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2738] = 2,
    ACTIONS(1159), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1161), 3,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2748] = 2,
    ACTIONS(1211), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1172), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2758] = 4,
    ACTIONS(1403), 1,
      anon_sym_DQUOTE,
    ACTIONS(1405), 1,
      aux_sym__match_exec_token3,
    STATE(158), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1407), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2772] = 2,
    ACTIONS(1159), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1161), 3,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2782] = 5,
    ACTIONS(1292), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1294), 1,
      aux_sym__file_token_token1,
    ACTIONS(1409), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      aux_sym__match_exec_repeat1,
    STATE(243), 1,
      sym__file_token,
  [2798] = 4,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      aux_sym__match_exec_token2,
    STATE(275), 1,
      aux_sym__plain_string_repeat1,
    STATE(529), 2,
      sym__string,
      sym__plain_string,
  [2812] = 2,
    STATE(527), 1,
      sym__boolean,
    ACTIONS(1411), 4,
      anon_sym_point_DASHto_DASHpoint,
      anon_sym_ethernet,
      anon_sym_yes,
      anon_sym_no,
  [2822] = 4,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      aux_sym__match_exec_token2,
    STATE(275), 1,
      aux_sym__plain_string_repeat1,
    STATE(524), 2,
      sym__string,
      sym__plain_string,
  [2836] = 4,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      aux_sym__match_exec_token2,
    STATE(275), 1,
      aux_sym__plain_string_repeat1,
    STATE(521), 2,
      sym__string,
      sym__plain_string,
  [2850] = 2,
    ACTIONS(1213), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1215), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [2860] = 4,
    ACTIONS(1304), 1,
      aux_sym__match_exec_token3,
    STATE(167), 1,
      aux_sym__match_value_repeat3,
    STATE(752), 1,
      sym__log_verbose_quoted,
    ACTIONS(1306), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2874] = 4,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      aux_sym__match_exec_token2,
    STATE(275), 1,
      aux_sym__plain_string_repeat1,
    STATE(589), 2,
      sym__string,
      sym__plain_string,
  [2888] = 1,
    ACTIONS(1413), 5,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2896] = 2,
    ACTIONS(1417), 1,
      sym_kex,
    ACTIONS(1415), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2905] = 3,
    ACTIONS(1419), 1,
      aux_sym__match_exec_token2,
    STATE(189), 1,
      aux_sym__plain_string_repeat1,
    ACTIONS(1100), 2,
      sym__space,
      sym__eol,
  [2916] = 2,
    ACTIONS(1401), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1399), 3,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2925] = 3,
    ACTIONS(1422), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1424), 2,
      sym__space,
      sym__eol,
  [2936] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1428), 2,
      sym__space,
      sym__eol,
  [2947] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1430), 2,
      sym__space,
      sym__eol,
  [2958] = 3,
    ACTIONS(1422), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1424), 2,
      sym__space,
      sym__eol,
  [2969] = 3,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(262), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1434), 2,
      sym__space,
      sym__eol,
  [2980] = 3,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1434), 2,
      sym__space,
      sym__eol,
  [2991] = 3,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1436), 2,
      sym__space,
      sym__eol,
  [3002] = 3,
    ACTIONS(1079), 1,
      aux_sym__match_exec_token2,
    STATE(75), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1083), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3013] = 3,
    ACTIONS(1438), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1440), 2,
      sym__space,
      sym__eol,
  [3024] = 2,
    STATE(113), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1186), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [3033] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1444), 2,
      sym__space,
      sym__eol,
  [3044] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1444), 2,
      sym__space,
      sym__eol,
  [3055] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(265), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1446), 2,
      sym__space,
      sym__eol,
  [3066] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1446), 2,
      sym__space,
      sym__eol,
  [3077] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1448), 2,
      sym__space,
      sym__eol,
  [3088] = 2,
    ACTIONS(1452), 1,
      anon_sym_COLON,
    ACTIONS(1450), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3097] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1454), 2,
      sym__space,
      sym__eol,
  [3108] = 3,
    ACTIONS(1456), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym__proxy_jump_repeat1,
    ACTIONS(1459), 2,
      sym__space,
      sym__eol,
  [3119] = 2,
    ACTIONS(1463), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1461), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3128] = 3,
    ACTIONS(1465), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1468), 2,
      sym__space,
      sym__eol,
  [3139] = 3,
    ACTIONS(1470), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym__proxy_jump_repeat1,
    ACTIONS(1472), 2,
      sym__space,
      sym__eol,
  [3150] = 2,
    ACTIONS(1474), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1476), 2,
      aux_sym__proxy_token_token1,
      sym__eol,
  [3159] = 3,
    ACTIONS(1478), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1480), 2,
      sym__space,
      sym__eol,
  [3170] = 3,
    ACTIONS(1482), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1485), 2,
      sym__space,
      sym__eol,
  [3181] = 3,
    ACTIONS(1489), 1,
      sym__number,
    STATE(680), 1,
      sym_number,
    ACTIONS(1487), 2,
      anon_sym_none,
      sym_ipqos,
  [3192] = 3,
    ACTIONS(1491), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1493), 2,
      sym__space,
      sym__eol,
  [3203] = 3,
    ACTIONS(1495), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1498), 2,
      sym__space,
      sym__eol,
  [3214] = 3,
    ACTIONS(1500), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1502), 2,
      sym__space,
      sym__eol,
  [3225] = 3,
    ACTIONS(1500), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1502), 2,
      sym__space,
      sym__eol,
  [3236] = 3,
    ACTIONS(1504), 1,
      anon_sym_DQUOTE,
    ACTIONS(1507), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1461), 2,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3247] = 3,
    ACTIONS(1491), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1510), 2,
      sym__space,
      sym__eol,
  [3258] = 3,
    ACTIONS(1512), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1514), 2,
      sym__space,
      sym__eol,
  [3269] = 3,
    ACTIONS(1512), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1516), 2,
      sym__space,
      sym__eol,
  [3280] = 2,
    STATE(146), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1518), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [3289] = 2,
    ACTIONS(1522), 1,
      sym_cipher,
    ACTIONS(1520), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3298] = 2,
    ACTIONS(1524), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1526), 2,
      sym_token,
      sym__eol,
  [3307] = 3,
    ACTIONS(1500), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1528), 2,
      sym__space,
      sym__eol,
  [3318] = 3,
    ACTIONS(1304), 1,
      aux_sym__match_exec_token3,
    STATE(155), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1306), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3329] = 3,
    ACTIONS(1491), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1530), 2,
      sym__space,
      sym__eol,
  [3340] = 3,
    ACTIONS(1491), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1530), 2,
      sym__space,
      sym__eol,
  [3351] = 3,
    ACTIONS(1478), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1532), 2,
      sym__space,
      sym__eol,
  [3362] = 3,
    ACTIONS(1470), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym__proxy_jump_repeat1,
    ACTIONS(1534), 2,
      sym__space,
      sym__eol,
  [3373] = 4,
    ACTIONS(1355), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1357), 1,
      aux_sym__hostname_token_token1,
    STATE(160), 1,
      aux_sym__hostname_string_repeat2,
    STATE(449), 1,
      sym__hostname_token,
  [3386] = 2,
    ACTIONS(1536), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1538), 3,
      aux_sym__hostname_token_token1,
      sym__space,
      sym__eol,
  [3395] = 3,
    ACTIONS(1540), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1543), 2,
      sym__space,
      sym__eol,
  [3406] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1545), 2,
      sym__space,
      sym__eol,
  [3417] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1547), 2,
      sym__space,
      sym__eol,
  [3428] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1547), 2,
      sym__space,
      sym__eol,
  [3439] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1549), 2,
      sym__space,
      sym__eol,
  [3450] = 2,
    ACTIONS(1553), 1,
      sym_key_sig,
    ACTIONS(1551), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3459] = 1,
    ACTIONS(1555), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3466] = 2,
    ACTIONS(1559), 1,
      sym_key_sig,
    ACTIONS(1557), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3475] = 2,
    ACTIONS(1561), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1563), 3,
      aux_sym__file_token_token1,
      sym__space,
      sym__eol,
  [3484] = 4,
    ACTIONS(1389), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1391), 1,
      aux_sym__file_token_token1,
    STATE(171), 1,
      aux_sym__match_exec_repeat2,
    STATE(459), 1,
      sym__file_token,
  [3497] = 3,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1565), 2,
      sym__space,
      sym__eol,
  [3508] = 3,
    ACTIONS(1567), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1570), 2,
      sym__space,
      sym__eol,
  [3519] = 3,
    ACTIONS(1112), 1,
      aux_sym__match_exec_token3,
    STATE(92), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1116), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3530] = 3,
    ACTIONS(1438), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1572), 2,
      sym__space,
      sym__eol,
  [3541] = 3,
    ACTIONS(1489), 1,
      sym__number,
    STATE(580), 1,
      sym_number,
    ACTIONS(1574), 2,
      anon_sym_none,
      sym_ipqos,
  [3552] = 3,
    ACTIONS(1112), 1,
      aux_sym__match_exec_token3,
    STATE(81), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1116), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3563] = 3,
    ACTIONS(1422), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1576), 2,
      sym__space,
      sym__eol,
  [3574] = 3,
    ACTIONS(1578), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1581), 2,
      sym__space,
      sym__eol,
  [3585] = 4,
    ACTIONS(1320), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1322), 1,
      sym_token,
    STATE(152), 1,
      aux_sym__token_string_repeat1,
    STATE(574), 1,
      sym__token_string,
  [3598] = 4,
    ACTIONS(1583), 1,
      aux_sym_time_token2,
    ACTIONS(1585), 1,
      aux_sym_time_token3,
    ACTIONS(1587), 1,
      aux_sym_time_token4,
    ACTIONS(1589), 1,
      aux_sym_time_token5,
  [3611] = 1,
    ACTIONS(1591), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3618] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1593), 2,
      sym__space,
      sym__eol,
  [3629] = 2,
    ACTIONS(1597), 1,
      sym_mac,
    ACTIONS(1595), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3638] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1599), 2,
      sym__space,
      sym__eol,
  [3649] = 3,
    ACTIONS(1500), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1601), 2,
      sym__space,
      sym__eol,
  [3660] = 3,
    ACTIONS(1422), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1603), 2,
      sym__space,
      sym__eol,
  [3671] = 3,
    ACTIONS(1605), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1608), 2,
      sym__space,
      sym__eol,
  [3682] = 3,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1610), 2,
      sym__space,
      sym__eol,
  [3693] = 3,
    ACTIONS(1612), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1615), 2,
      sym__space,
      sym__eol,
  [3704] = 2,
    ACTIONS(1159), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1161), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3713] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1617), 2,
      sym__space,
      sym__eol,
  [3724] = 3,
    ACTIONS(1619), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1622), 2,
      sym__space,
      sym__eol,
  [3735] = 4,
    ACTIONS(1624), 1,
      aux_sym__sep_token1,
    ACTIONS(1626), 1,
      sym__space,
    ACTIONS(1628), 1,
      sym__eol,
    STATE(517), 1,
      sym__sep,
  [3748] = 4,
    ACTIONS(1630), 1,
      aux_sym__sep_token1,
    ACTIONS(1632), 1,
      sym__space,
    ACTIONS(1634), 1,
      sym__eol,
    STATE(516), 1,
      sym__sep,
  [3761] = 2,
    ACTIONS(1638), 1,
      sym_key_sig,
    ACTIONS(1636), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3770] = 3,
    ACTIONS(1405), 1,
      aux_sym__match_exec_token3,
    STATE(177), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1407), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3781] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1640), 2,
      sym__space,
      sym__eol,
  [3792] = 2,
    STATE(523), 1,
      sym__boolean,
    ACTIONS(1642), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3801] = 3,
    ACTIONS(1644), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1591), 2,
      sym__space,
      sym__eol,
  [3812] = 2,
    STATE(526), 1,
      sym__boolean,
    ACTIONS(1647), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3821] = 3,
    ACTIONS(1649), 1,
      aux_sym__match_exec_token2,
    STATE(189), 1,
      aux_sym__plain_string_repeat1,
    ACTIONS(1165), 2,
      sym__space,
      sym__eol,
  [3832] = 2,
    ACTIONS(1401), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1399), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3841] = 3,
    ACTIONS(1651), 1,
      aux_sym__sep_token1,
    ACTIONS(1653), 1,
      sym__space,
    STATE(288), 1,
      sym__sep,
  [3851] = 3,
    ACTIONS(1655), 1,
      aux_sym__match_exec_token2,
    STATE(111), 1,
      aux_sym__plain_string_repeat1,
    STATE(206), 1,
      sym__plain_string,
  [3861] = 1,
    ACTIONS(1657), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3867] = 3,
    ACTIONS(1659), 1,
      anon_sym_DQUOTE,
    ACTIONS(1661), 1,
      anon_sym_COMMA,
    STATE(280), 1,
      aux_sym__match_localnetwork_repeat2,
  [3877] = 3,
    ACTIONS(1664), 1,
      aux_sym__sep_token1,
    ACTIONS(1666), 1,
      sym__space,
    STATE(797), 1,
      sym__sep,
  [3887] = 2,
    STATE(557), 1,
      sym__boolean,
    ACTIONS(1668), 2,
      anon_sym_yes,
      anon_sym_no,
  [3895] = 2,
    ACTIONS(1670), 1,
      sym__number,
    ACTIONS(1672), 2,
      sym__space,
      sym__eol,
  [3903] = 3,
    ACTIONS(1674), 1,
      anon_sym_none,
    ACTIONS(1676), 1,
      sym__number,
    STATE(553), 1,
      sym_bytes,
  [3913] = 2,
    ACTIONS(1678), 1,
      sym__number,
    ACTIONS(1672), 2,
      sym__space,
      sym__eol,
  [3921] = 2,
    ACTIONS(1680), 1,
      sym__number,
    ACTIONS(1682), 2,
      sym__space,
      sym__eol,
  [3929] = 1,
    ACTIONS(1172), 3,
      aux_sym__match_exec_token2,
      sym__space,
      sym__eol,
  [3935] = 1,
    ACTIONS(1684), 3,
      anon_sym_none,
      anon_sym_subsystem,
      anon_sym_default,
  [3941] = 1,
    ACTIONS(1622), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3947] = 2,
    STATE(539), 1,
      sym__boolean,
    ACTIONS(1686), 2,
      anon_sym_yes,
      anon_sym_no,
  [3955] = 2,
    STATE(534), 1,
      sym__boolean,
    ACTIONS(1688), 2,
      anon_sym_yes,
      anon_sym_no,
  [3963] = 3,
    ACTIONS(1690), 1,
      sym__space,
    ACTIONS(1693), 1,
      sym__eol,
    STATE(292), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [3973] = 2,
    STATE(530), 1,
      sym__boolean,
    ACTIONS(1695), 2,
      anon_sym_yes,
      anon_sym_no,
  [3981] = 3,
    ACTIONS(1697), 1,
      aux_sym__sep_token1,
    ACTIONS(1699), 1,
      sym__space,
    STATE(183), 1,
      sym__sep,
  [3991] = 3,
    ACTIONS(1701), 1,
      aux_sym__sep_token1,
    ACTIONS(1703), 1,
      sym__space,
    STATE(300), 1,
      sym__sep,
  [4001] = 3,
    ACTIONS(1489), 1,
      sym__number,
    ACTIONS(1705), 1,
      anon_sym_any,
    STATE(475), 1,
      sym_number,
  [4011] = 2,
    STATE(525), 1,
      sym__boolean,
    ACTIONS(1707), 2,
      anon_sym_yes,
      anon_sym_no,
  [4019] = 3,
    ACTIONS(1709), 1,
      aux_sym__sep_token1,
    ACTIONS(1711), 1,
      sym__space,
    STATE(272), 1,
      sym__sep,
  [4029] = 3,
    ACTIONS(1713), 1,
      aux_sym__sep_token1,
    ACTIONS(1715), 1,
      sym__space,
    STATE(57), 1,
      sym__sep,
  [4039] = 2,
    STATE(522), 1,
      sym__boolean,
    ACTIONS(1717), 2,
      anon_sym_yes,
      anon_sym_no,
  [4047] = 3,
    ACTIONS(1719), 1,
      aux_sym__sep_token1,
    ACTIONS(1721), 1,
      sym__space,
    STATE(182), 1,
      sym__sep,
  [4057] = 3,
    ACTIONS(1723), 1,
      aux_sym__sep_token1,
    ACTIONS(1725), 1,
      sym__space,
    STATE(297), 1,
      sym__sep,
  [4067] = 3,
    ACTIONS(1727), 1,
      sym__space,
    ACTIONS(1730), 1,
      sym__eol,
    STATE(303), 1,
      aux_sym__dynamic_forward_repeat1,
  [4077] = 1,
    ACTIONS(1732), 3,
      anon_sym_DQUOTE,
      sym__space,
      sym__eol,
  [4083] = 3,
    ACTIONS(1734), 1,
      aux_sym__sep_token1,
    ACTIONS(1736), 1,
      sym__space,
    STATE(274), 1,
      sym__sep,
  [4093] = 3,
    ACTIONS(1738), 1,
      aux_sym__sep_token1,
    ACTIONS(1740), 1,
      sym__space,
    STATE(296), 1,
      sym__sep,
  [4103] = 3,
    ACTIONS(1742), 1,
      aux_sym__sep_token1,
    ACTIONS(1744), 1,
      sym__space,
    STATE(181), 1,
      sym__sep,
  [4113] = 3,
    ACTIONS(1746), 1,
      sym__space,
    ACTIONS(1748), 1,
      sym__eol,
    STATE(489), 1,
      aux_sym_host_declaration_repeat1,
  [4123] = 3,
    ACTIONS(1750), 1,
      aux_sym__sep_token1,
    ACTIONS(1752), 1,
      sym__space,
    STATE(180), 1,
      sym__sep,
  [4133] = 3,
    ACTIONS(1754), 1,
      aux_sym__sep_token1,
    ACTIONS(1756), 1,
      sym__space,
    STATE(293), 1,
      sym__sep,
  [4143] = 3,
    ACTIONS(1758), 1,
      aux_sym__sep_token1,
    ACTIONS(1760), 1,
      sym__space,
    STATE(179), 1,
      sym__sep,
  [4153] = 3,
    ACTIONS(1762), 1,
      aux_sym__sep_token1,
    ACTIONS(1764), 1,
      sym__space,
    STATE(673), 1,
      sym__sep,
  [4163] = 3,
    ACTIONS(1766), 1,
      aux_sym__sep_token1,
    ACTIONS(1768), 1,
      sym__space,
    STATE(103), 1,
      sym__sep,
  [4173] = 3,
    ACTIONS(1770), 1,
      aux_sym__sep_token1,
    ACTIONS(1772), 1,
      sym__space,
    STATE(102), 1,
      sym__sep,
  [4183] = 3,
    ACTIONS(1774), 1,
      aux_sym__sep_token1,
    ACTIONS(1776), 1,
      sym__space,
    STATE(101), 1,
      sym__sep,
  [4193] = 3,
    ACTIONS(1778), 1,
      aux_sym__sep_token1,
    ACTIONS(1780), 1,
      sym__space,
    STATE(99), 1,
      sym__sep,
  [4203] = 3,
    ACTIONS(1782), 1,
      aux_sym__sep_token1,
    ACTIONS(1784), 1,
      sym__space,
    STATE(100), 1,
      sym__sep,
  [4213] = 3,
    ACTIONS(1786), 1,
      sym__space,
    ACTIONS(1788), 1,
      sym__eol,
    STATE(499), 1,
      aux_sym_match_declaration_repeat1,
  [4223] = 3,
    ACTIONS(1790), 1,
      anon_sym_DQUOTE,
    ACTIONS(1792), 1,
      aux_sym__match_exec_token3,
    STATE(319), 1,
      aux_sym__string_repeat1,
  [4233] = 1,
    ACTIONS(1795), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [4239] = 3,
    ACTIONS(1797), 1,
      anon_sym_DQUOTE,
    ACTIONS(1799), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym__match_value_repeat4,
  [4249] = 1,
    ACTIONS(1615), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4255] = 1,
    ACTIONS(1802), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4261] = 3,
    ACTIONS(1804), 1,
      aux_sym__sep_token1,
    ACTIONS(1806), 1,
      sym__space,
    STATE(799), 1,
      sym__sep,
  [4271] = 3,
    ACTIONS(1808), 1,
      aux_sym__sep_token1,
    ACTIONS(1810), 1,
      sym__space,
    STATE(104), 1,
      sym__sep,
  [4281] = 3,
    ACTIONS(1489), 1,
      sym__number,
    ACTIONS(1812), 1,
      anon_sym_STAR,
    STATE(671), 1,
      sym_number,
  [4291] = 1,
    ACTIONS(1608), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4297] = 2,
    STATE(564), 1,
      sym__boolean,
    ACTIONS(1814), 2,
      anon_sym_yes,
      anon_sym_no,
  [4305] = 3,
    ACTIONS(1591), 1,
      anon_sym_COLON,
    ACTIONS(1816), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym__cnames_map_repeat1,
  [4315] = 3,
    ACTIONS(1819), 1,
      aux_sym__sep_token1,
    ACTIONS(1821), 1,
      sym__space,
    STATE(291), 1,
      sym__sep,
  [4325] = 3,
    ACTIONS(1823), 1,
      aux_sym__sep_token1,
    ACTIONS(1825), 1,
      sym__space,
    STATE(798), 1,
      sym__sep,
  [4335] = 2,
    STATE(565), 1,
      sym__boolean,
    ACTIONS(1827), 2,
      anon_sym_yes,
      anon_sym_no,
  [4343] = 2,
    STATE(568), 1,
      sym__boolean,
    ACTIONS(1829), 2,
      anon_sym_yes,
      anon_sym_no,
  [4351] = 3,
    ACTIONS(1831), 1,
      sym__space,
    ACTIONS(1834), 1,
      sym__eol,
    STATE(334), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4361] = 3,
    ACTIONS(1836), 1,
      sym__space,
    ACTIONS(1839), 1,
      sym__eol,
    STATE(335), 1,
      aux_sym__canonical_domains_repeat1,
  [4371] = 3,
    ACTIONS(1841), 1,
      sym__space,
    ACTIONS(1843), 1,
      sym__eol,
    STATE(481), 1,
      aux_sym__canonical_domains_repeat1,
  [4381] = 3,
    ACTIONS(1585), 1,
      aux_sym_time_token3,
    ACTIONS(1587), 1,
      aux_sym_time_token4,
    ACTIONS(1589), 1,
      aux_sym_time_token5,
  [4391] = 1,
    ACTIONS(1543), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4397] = 3,
    ACTIONS(1845), 1,
      aux_sym__sep_token1,
    ACTIONS(1847), 1,
      sym__space,
    STATE(290), 1,
      sym__sep,
  [4407] = 3,
    ACTIONS(1849), 1,
      sym__space,
    ACTIONS(1852), 1,
      sym__eol,
    STATE(340), 1,
      aux_sym_match_declaration_repeat1,
  [4417] = 3,
    ACTIONS(1854), 1,
      aux_sym__sep_token1,
    ACTIONS(1856), 1,
      sym__space,
    STATE(672), 1,
      sym__sep,
  [4427] = 3,
    ACTIONS(1858), 1,
      sym__space,
    ACTIONS(1860), 1,
      sym__eol,
    STATE(478), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4437] = 3,
    ACTIONS(1862), 1,
      anon_sym_COMMA,
    ACTIONS(1864), 1,
      anon_sym_COLON,
    STATE(474), 1,
      aux_sym__cnames_map_repeat1,
  [4447] = 3,
    ACTIONS(1866), 1,
      anon_sym_DQUOTE,
    ACTIONS(1868), 1,
      anon_sym_COMMA,
    STATE(280), 1,
      aux_sym__match_localnetwork_repeat2,
  [4457] = 3,
    ACTIONS(1870), 1,
      aux_sym_time_token3,
    ACTIONS(1872), 1,
      aux_sym_time_token4,
    ACTIONS(1874), 1,
      aux_sym_time_token5,
  [4467] = 3,
    ACTIONS(1876), 1,
      aux_sym__sep_token1,
    ACTIONS(1878), 1,
      sym__space,
    STATE(504), 1,
      sym__sep,
  [4477] = 3,
    ACTIONS(1880), 1,
      aux_sym__sep_token1,
    ACTIONS(1882), 1,
      sym__space,
    STATE(675), 1,
      sym__sep,
  [4487] = 3,
    ACTIONS(1884), 1,
      aux_sym__sep_token1,
    ACTIONS(1886), 1,
      sym__space,
    STATE(105), 1,
      sym__sep,
  [4497] = 3,
    ACTIONS(1888), 1,
      aux_sym__sep_token1,
    ACTIONS(1890), 1,
      sym__space,
    STATE(85), 1,
      sym__sep,
  [4507] = 3,
    ACTIONS(1892), 1,
      aux_sym__sep_token1,
    ACTIONS(1894), 1,
      sym__space,
    STATE(71), 1,
      sym__sep,
  [4517] = 2,
    ACTIONS(1896), 1,
      sym__number,
    ACTIONS(1898), 2,
      sym__space,
      sym__eol,
  [4525] = 2,
    STATE(579), 1,
      sym__boolean,
    ACTIONS(1900), 2,
      anon_sym_yes,
      anon_sym_no,
  [4533] = 3,
    ACTIONS(1114), 1,
      anon_sym_COMMA,
    ACTIONS(1902), 1,
      anon_sym_DQUOTE,
    STATE(321), 1,
      aux_sym__match_value_repeat4,
  [4543] = 3,
    ACTIONS(1904), 1,
      aux_sym__sep_token1,
    ACTIONS(1906), 1,
      sym__space,
    STATE(677), 1,
      sym__sep,
  [4553] = 1,
    ACTIONS(1570), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4559] = 2,
    STATE(586), 1,
      sym__boolean,
    ACTIONS(1908), 2,
      anon_sym_yes,
      anon_sym_no,
  [4567] = 3,
    ACTIONS(1910), 1,
      sym__space,
    ACTIONS(1913), 1,
      sym__eol,
    STATE(357), 1,
      aux_sym_host_declaration_repeat1,
  [4577] = 3,
    ACTIONS(1915), 1,
      aux_sym__sep_token1,
    ACTIONS(1917), 1,
      sym__space,
    STATE(169), 1,
      sym__sep,
  [4587] = 3,
    ACTIONS(1919), 1,
      aux_sym__sep_token1,
    ACTIONS(1921), 1,
      sym__space,
    STATE(41), 1,
      sym__sep,
  [4597] = 3,
    ACTIONS(1923), 1,
      aux_sym__sep_token1,
    ACTIONS(1925), 1,
      sym__space,
    STATE(127), 1,
      sym__sep,
  [4607] = 3,
    ACTIONS(1927), 1,
      aux_sym__sep_token1,
    ACTIONS(1929), 1,
      sym__space,
    STATE(284), 1,
      sym__sep,
  [4617] = 3,
    ACTIONS(1931), 1,
      aux_sym__sep_token1,
    ACTIONS(1933), 1,
      sym__space,
    STATE(128), 1,
      sym__sep,
  [4627] = 3,
    ACTIONS(1935), 1,
      aux_sym__sep_token1,
    ACTIONS(1937), 1,
      sym__space,
    STATE(269), 1,
      sym__sep,
  [4637] = 3,
    ACTIONS(1939), 1,
      aux_sym__sep_token1,
    ACTIONS(1941), 1,
      sym__space,
    STATE(282), 1,
      sym__sep,
  [4647] = 3,
    ACTIONS(1943), 1,
      sym__space,
    ACTIONS(1945), 1,
      sym__eol,
    STATE(463), 1,
      aux_sym__dynamic_forward_repeat1,
  [4657] = 3,
    ACTIONS(1947), 1,
      aux_sym__sep_token1,
    ACTIONS(1949), 1,
      sym__space,
    STATE(129), 1,
      sym__sep,
  [4667] = 3,
    ACTIONS(934), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1165), 1,
      anon_sym_COLON,
    STATE(462), 1,
      aux_sym__plain_string_repeat1,
  [4677] = 3,
    ACTIONS(1951), 1,
      aux_sym__sep_token1,
    ACTIONS(1953), 1,
      sym__space,
    STATE(130), 1,
      sym__sep,
  [4687] = 3,
    ACTIONS(1489), 1,
      sym__number,
    ACTIONS(1955), 1,
      anon_sym_STAR,
    STATE(323), 1,
      sym_number,
  [4697] = 3,
    ACTIONS(1957), 1,
      sym__space,
    ACTIONS(1959), 1,
      sym__eol,
    STATE(357), 1,
      aux_sym_host_declaration_repeat1,
  [4707] = 3,
    ACTIONS(1961), 1,
      aux_sym__sep_token1,
    ACTIONS(1963), 1,
      sym__space,
    STATE(80), 1,
      sym__sep,
  [4717] = 3,
    ACTIONS(1965), 1,
      aux_sym__sep_token1,
    ACTIONS(1967), 1,
      sym__space,
    STATE(681), 1,
      sym__sep,
  [4727] = 3,
    ACTIONS(1969), 1,
      aux_sym__sep_token1,
    ACTIONS(1971), 1,
      sym__space,
    STATE(153), 1,
      sym__sep,
  [4737] = 3,
    ACTIONS(1973), 1,
      sym__space,
    ACTIONS(1975), 1,
      sym__eol,
    STATE(455), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [4747] = 3,
    ACTIONS(1977), 1,
      aux_sym__sep_token1,
    ACTIONS(1979), 1,
      sym__space,
    STATE(136), 1,
      sym__sep,
  [4757] = 3,
    ACTIONS(1489), 1,
      sym__number,
    ACTIONS(1981), 1,
      anon_sym_any,
    STATE(717), 1,
      sym_number,
  [4767] = 3,
    ACTIONS(1983), 1,
      sym__space,
    ACTIONS(1985), 1,
      sym__eol,
    STATE(454), 1,
      aux_sym__set_env_repeat1,
  [4777] = 3,
    ACTIONS(1987), 1,
      aux_sym__sep_token1,
    ACTIONS(1989), 1,
      sym__space,
    STATE(328), 1,
      sym__sep,
  [4787] = 3,
    ACTIONS(1991), 1,
      aux_sym__sep_token1,
    ACTIONS(1993), 1,
      sym__space,
    STATE(332), 1,
      sym__sep,
  [4797] = 3,
    ACTIONS(1995), 1,
      sym__space,
    ACTIONS(1997), 1,
      sym__eol,
    STATE(453), 1,
      aux_sym__send_env_repeat1,
  [4807] = 3,
    ACTIONS(1999), 1,
      sym__space,
    ACTIONS(2001), 1,
      sym__eol,
    STATE(456), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4817] = 3,
    ACTIONS(2003), 1,
      aux_sym__sep_token1,
    ACTIONS(2005), 1,
      sym__space,
    STATE(682), 1,
      sym__sep,
  [4827] = 3,
    ACTIONS(2007), 1,
      aux_sym__sep_token1,
    ACTIONS(2009), 1,
      sym__space,
    STATE(333), 1,
      sym__sep,
  [4837] = 3,
    ACTIONS(2011), 1,
      aux_sym__sep_token1,
    ACTIONS(2013), 1,
      sym__space,
    STATE(257), 1,
      sym__sep,
  [4847] = 3,
    ACTIONS(2015), 1,
      aux_sym__sep_token1,
    ACTIONS(2017), 1,
      sym__space,
    STATE(137), 1,
      sym__sep,
  [4857] = 2,
    STATE(593), 1,
      sym__boolean,
    ACTIONS(2019), 2,
      anon_sym_yes,
      anon_sym_no,
  [4865] = 2,
    STATE(595), 1,
      sym__boolean,
    ACTIONS(2021), 2,
      anon_sym_yes,
      anon_sym_no,
  [4873] = 2,
    STATE(596), 1,
      sym__boolean,
    ACTIONS(2023), 2,
      anon_sym_yes,
      anon_sym_no,
  [4881] = 2,
    STATE(597), 1,
      sym__boolean,
    ACTIONS(2025), 2,
      anon_sym_yes,
      anon_sym_no,
  [4889] = 3,
    ACTIONS(2027), 1,
      sym__space,
    ACTIONS(2030), 1,
      sym__eol,
    STATE(390), 1,
      aux_sym__ignore_unknown_repeat1,
  [4899] = 2,
    STATE(598), 1,
      sym__boolean,
    ACTIONS(2032), 2,
      anon_sym_yes,
      anon_sym_no,
  [4907] = 2,
    STATE(601), 1,
      sym__boolean,
    ACTIONS(2034), 2,
      anon_sym_yes,
      anon_sym_no,
  [4915] = 2,
    STATE(606), 1,
      sym__boolean,
    ACTIONS(2036), 2,
      anon_sym_yes,
      anon_sym_no,
  [4923] = 3,
    ACTIONS(2038), 1,
      aux_sym__sep_token1,
    ACTIONS(2040), 1,
      sym__space,
    STATE(796), 1,
      sym__sep,
  [4933] = 3,
    ACTIONS(2042), 1,
      aux_sym__sep_token1,
    ACTIONS(2044), 1,
      sym__space,
    STATE(42), 1,
      sym__sep,
  [4943] = 3,
    ACTIONS(2046), 1,
      aux_sym__sep_token1,
    ACTIONS(2048), 1,
      sym__space,
    STATE(253), 1,
      sym__sep,
  [4953] = 3,
    ACTIONS(2050), 1,
      aux_sym__sep_token1,
    ACTIONS(2052), 1,
      sym__space,
    STATE(83), 1,
      sym__sep,
  [4963] = 3,
    ACTIONS(2054), 1,
      aux_sym__sep_token1,
    ACTIONS(2056), 1,
      sym__space,
    STATE(188), 1,
      sym__sep,
  [4973] = 2,
    STATE(608), 1,
      sym__boolean,
    ACTIONS(2058), 2,
      anon_sym_yes,
      anon_sym_no,
  [4981] = 3,
    ACTIONS(2060), 1,
      aux_sym__sep_token1,
    ACTIONS(2062), 1,
      sym__space,
    STATE(352), 1,
      sym__sep,
  [4991] = 3,
    ACTIONS(2064), 1,
      sym__space,
    ACTIONS(2066), 1,
      sym__eol,
    STATE(441), 1,
      aux_sym__permit_remote_open_repeat1,
  [5001] = 3,
    ACTIONS(2068), 1,
      sym__space,
    ACTIONS(2070), 1,
      sym__eol,
    STATE(433), 1,
      aux_sym__ignore_unknown_repeat1,
  [5011] = 3,
    ACTIONS(2072), 1,
      aux_sym__sep_token1,
    ACTIONS(2074), 1,
      sym__space,
    STATE(249), 1,
      sym__sep,
  [5021] = 3,
    ACTIONS(1489), 1,
      sym__number,
    ACTIONS(2076), 1,
      anon_sym_STAR,
    STATE(700), 1,
      sym_number,
  [5031] = 2,
    STATE(610), 1,
      sym__boolean,
    ACTIONS(2078), 2,
      anon_sym_yes,
      anon_sym_no,
  [5039] = 2,
    STATE(611), 1,
      sym__boolean,
    ACTIONS(2080), 2,
      anon_sym_yes,
      anon_sym_no,
  [5047] = 3,
    ACTIONS(2082), 1,
      anon_sym_DQUOTE,
    ACTIONS(2084), 1,
      anon_sym_COMMA,
    STATE(485), 1,
      aux_sym__log_verbose_repeat2,
  [5057] = 3,
    ACTIONS(2086), 1,
      aux_sym__sep_token1,
    ACTIONS(2088), 1,
      sym__space,
    STATE(141), 1,
      sym__sep,
  [5067] = 3,
    ACTIONS(2090), 1,
      aux_sym__sep_token1,
    ACTIONS(2092), 1,
      sym__space,
    STATE(143), 1,
      sym__sep,
  [5077] = 3,
    ACTIONS(2094), 1,
      aux_sym__sep_token1,
    ACTIONS(2096), 1,
      sym__space,
    STATE(69), 1,
      sym__sep,
  [5087] = 2,
    STATE(625), 1,
      sym__boolean,
    ACTIONS(2098), 2,
      anon_sym_yes,
      anon_sym_no,
  [5095] = 2,
    STATE(627), 1,
      sym__boolean,
    ACTIONS(2100), 2,
      anon_sym_yes,
      anon_sym_no,
  [5103] = 3,
    ACTIONS(2102), 1,
      aux_sym__sep_token1,
    ACTIONS(2104), 1,
      sym__space,
    STATE(47), 1,
      sym__sep,
  [5113] = 3,
    ACTIONS(2106), 1,
      aux_sym__sep_token1,
    ACTIONS(2108), 1,
      sym__space,
    STATE(356), 1,
      sym__sep,
  [5123] = 3,
    ACTIONS(2110), 1,
      aux_sym__sep_token1,
    ACTIONS(2112), 1,
      sym__space,
    STATE(145), 1,
      sym__sep,
  [5133] = 2,
    STATE(630), 1,
      sym__boolean,
    ACTIONS(2114), 2,
      anon_sym_yes,
      anon_sym_no,
  [5141] = 3,
    ACTIONS(2116), 1,
      aux_sym__sep_token1,
    ACTIONS(2118), 1,
      sym__space,
    STATE(186), 1,
      sym__sep,
  [5151] = 3,
    ACTIONS(2120), 1,
      aux_sym__sep_token1,
    ACTIONS(2122), 1,
      sym__space,
    STATE(242), 1,
      sym__sep,
  [5161] = 3,
    ACTIONS(2124), 1,
      aux_sym__sep_token1,
    ACTIONS(2126), 1,
      sym__space,
    STATE(386), 1,
      sym__sep,
  [5171] = 3,
    ACTIONS(2084), 1,
      anon_sym_COMMA,
    ACTIONS(2128), 1,
      anon_sym_DQUOTE,
    STATE(407), 1,
      aux_sym__log_verbose_repeat2,
  [5181] = 3,
    ACTIONS(2130), 1,
      aux_sym__sep_token1,
    ACTIONS(2132), 1,
      sym__space,
    STATE(240), 1,
      sym__sep,
  [5191] = 2,
    ACTIONS(2136), 1,
      sym_sig,
    ACTIONS(2134), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5199] = 3,
    ACTIONS(2138), 1,
      aux_sym__sep_token1,
    ACTIONS(2140), 1,
      sym__space,
    STATE(387), 1,
      sym__sep,
  [5209] = 3,
    ACTIONS(2142), 1,
      aux_sym__sep_token1,
    ACTIONS(2144), 1,
      sym__space,
    STATE(388), 1,
      sym__sep,
  [5219] = 1,
    ACTIONS(2146), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5225] = 2,
    STATE(642), 1,
      sym__boolean,
    ACTIONS(2148), 2,
      anon_sym_yes,
      anon_sym_no,
  [5233] = 3,
    ACTIONS(2150), 1,
      aux_sym__sep_token1,
    ACTIONS(2152), 1,
      sym__space,
    STATE(389), 1,
      sym__sep,
  [5243] = 3,
    ACTIONS(2154), 1,
      aux_sym__sep_token1,
    ACTIONS(2156), 1,
      sym__space,
    STATE(165), 1,
      sym__sep,
  [5253] = 2,
    STATE(646), 1,
      sym__boolean,
    ACTIONS(2158), 2,
      anon_sym_yes,
      anon_sym_no,
  [5261] = 2,
    STATE(650), 1,
      sym__boolean,
    ACTIONS(2160), 2,
      anon_sym_yes,
      anon_sym_no,
  [5269] = 2,
    ACTIONS(2164), 1,
      anon_sym_inet,
    ACTIONS(2162), 2,
      anon_sym_any,
      anon_sym_inet6,
  [5277] = 3,
    ACTIONS(2064), 1,
      sym__space,
    ACTIONS(2166), 1,
      sym__eol,
    STATE(401), 1,
      aux_sym__permit_remote_open_repeat1,
  [5287] = 3,
    ACTIONS(2068), 1,
      sym__space,
    ACTIONS(2168), 1,
      sym__eol,
    STATE(390), 1,
      aux_sym__ignore_unknown_repeat1,
  [5297] = 3,
    ACTIONS(2170), 1,
      aux_sym__sep_token1,
    ACTIONS(2172), 1,
      sym__space,
    STATE(391), 1,
      sym__sep,
  [5307] = 1,
    ACTIONS(1485), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5313] = 3,
    ACTIONS(2174), 1,
      aux_sym__sep_token1,
    ACTIONS(2176), 1,
      sym__space,
    STATE(685), 1,
      sym__sep,
  [5323] = 3,
    ACTIONS(1489), 1,
      sym__number,
    ACTIONS(2178), 1,
      anon_sym_STAR,
    STATE(791), 1,
      sym_number,
  [5333] = 3,
    ACTIONS(2180), 1,
      aux_sym__sep_token1,
    ACTIONS(2182), 1,
      sym__space,
    STATE(392), 1,
      sym__sep,
  [5343] = 1,
    ACTIONS(2184), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5349] = 1,
    ACTIONS(2186), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5355] = 3,
    ACTIONS(2188), 1,
      sym__space,
    ACTIONS(2191), 1,
      sym__eol,
    STATE(441), 1,
      aux_sym__permit_remote_open_repeat1,
  [5365] = 3,
    ACTIONS(2193), 1,
      aux_sym__sep_token1,
    ACTIONS(2195), 1,
      sym__space,
    STATE(48), 1,
      sym__sep,
  [5375] = 3,
    ACTIONS(2197), 1,
      aux_sym__sep_token1,
    ACTIONS(2199), 1,
      sym__space,
    STATE(393), 1,
      sym__sep,
  [5385] = 1,
    ACTIONS(1468), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5391] = 1,
    ACTIONS(2201), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5397] = 3,
    ACTIONS(2203), 1,
      aux_sym__sep_token1,
    ACTIONS(2205), 1,
      sym__space,
    STATE(624), 1,
      sym__sep,
  [5407] = 3,
    ACTIONS(2207), 1,
      aux_sym__sep_token1,
    ACTIONS(2209), 1,
      sym__space,
    STATE(399), 1,
      sym__sep,
  [5417] = 2,
    ACTIONS(2211), 1,
      aux_sym_bytes_token1,
    ACTIONS(2213), 2,
      sym__space,
      sym__eol,
  [5425] = 2,
    ACTIONS(2217), 1,
      aux_sym__match_exec_token3,
    ACTIONS(2215), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [5433] = 3,
    ACTIONS(2219), 1,
      aux_sym__sep_token1,
    ACTIONS(2221), 1,
      sym__space,
    STATE(691), 1,
      sym__sep,
  [5443] = 3,
    ACTIONS(2223), 1,
      aux_sym__sep_token1,
    ACTIONS(2225), 1,
      sym__space,
    STATE(405), 1,
      sym__sep,
  [5453] = 1,
    ACTIONS(2227), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5459] = 3,
    ACTIONS(2229), 1,
      sym__space,
    ACTIONS(2232), 1,
      sym__eol,
    STATE(453), 1,
      aux_sym__send_env_repeat1,
  [5469] = 3,
    ACTIONS(2234), 1,
      sym__space,
    ACTIONS(2237), 1,
      sym__eol,
    STATE(454), 1,
      aux_sym__set_env_repeat1,
  [5479] = 3,
    ACTIONS(2239), 1,
      sym__space,
    ACTIONS(2242), 1,
      sym__eol,
    STATE(455), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5489] = 3,
    ACTIONS(1999), 1,
      sym__space,
    ACTIONS(2244), 1,
      sym__eol,
    STATE(292), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [5499] = 3,
    ACTIONS(2246), 1,
      aux_sym__sep_token1,
    ACTIONS(2248), 1,
      sym__space,
    STATE(406), 1,
      sym__sep,
  [5509] = 3,
    ACTIONS(2250), 1,
      aux_sym__sep_token1,
    ACTIONS(2252), 1,
      sym__space,
    STATE(52), 1,
      sym__sep,
  [5519] = 2,
    ACTIONS(2256), 1,
      aux_sym__match_exec_token3,
    ACTIONS(2254), 2,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
  [5527] = 3,
    ACTIONS(1995), 1,
      sym__space,
    ACTIONS(2258), 1,
      sym__eol,
    STATE(380), 1,
      aux_sym__send_env_repeat1,
  [5537] = 3,
    ACTIONS(2260), 1,
      aux_sym__sep_token1,
    ACTIONS(2262), 1,
      sym__space,
    STATE(54), 1,
      sym__sep,
  [5547] = 3,
    ACTIONS(1100), 1,
      anon_sym_COLON,
    ACTIONS(2264), 1,
      aux_sym__match_exec_token2,
    STATE(462), 1,
      aux_sym__plain_string_repeat1,
  [5557] = 3,
    ACTIONS(1943), 1,
      sym__space,
    ACTIONS(2267), 1,
      sym__eol,
    STATE(303), 1,
      aux_sym__dynamic_forward_repeat1,
  [5567] = 3,
    ACTIONS(2269), 1,
      aux_sym__sep_token1,
    ACTIONS(2271), 1,
      sym__space,
    STATE(157), 1,
      sym__sep,
  [5577] = 3,
    ACTIONS(2273), 1,
      anon_sym_DQUOTE,
    ACTIONS(2275), 1,
      aux_sym__match_exec_token3,
    STATE(319), 1,
      aux_sym__string_repeat1,
  [5587] = 3,
    ACTIONS(1983), 1,
      sym__space,
    ACTIONS(2277), 1,
      sym__eol,
    STATE(377), 1,
      aux_sym__set_env_repeat1,
  [5597] = 3,
    ACTIONS(1868), 1,
      anon_sym_COMMA,
    ACTIONS(2279), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym__match_localnetwork_repeat2,
  [5607] = 2,
    ACTIONS(2281), 1,
      sym__number,
    ACTIONS(2283), 2,
      sym__space,
      sym__eol,
  [5615] = 3,
    ACTIONS(2285), 1,
      aux_sym__sep_token1,
    ACTIONS(2287), 1,
      sym__space,
    STATE(134), 1,
      sym__sep,
  [5625] = 3,
    ACTIONS(2289), 1,
      aux_sym__sep_token1,
    ACTIONS(2291), 1,
      sym__space,
    STATE(692), 1,
      sym__sep,
  [5635] = 3,
    ACTIONS(2293), 1,
      aux_sym__sep_token1,
    ACTIONS(2295), 1,
      sym__space,
    STATE(693), 1,
      sym__sep,
  [5645] = 2,
    ACTIONS(2297), 1,
      sym__number,
    ACTIONS(2283), 2,
      sym__space,
      sym__eol,
  [5653] = 2,
    ACTIONS(2299), 1,
      sym__number,
    ACTIONS(2283), 2,
      sym__space,
      sym__eol,
  [5661] = 3,
    ACTIONS(1862), 1,
      anon_sym_COMMA,
    ACTIONS(2301), 1,
      anon_sym_COLON,
    STATE(329), 1,
      aux_sym__cnames_map_repeat1,
  [5671] = 2,
    ACTIONS(2303), 1,
      anon_sym_COLON,
    ACTIONS(2305), 2,
      sym__space,
      sym__eol,
  [5679] = 3,
    ACTIONS(2307), 1,
      aux_sym__sep_token1,
    ACTIONS(2309), 1,
      sym__space,
    STATE(411), 1,
      sym__sep,
  [5689] = 3,
    ACTIONS(2311), 1,
      aux_sym__sep_token1,
    ACTIONS(2313), 1,
      sym__space,
    STATE(412), 1,
      sym__sep,
  [5699] = 3,
    ACTIONS(1858), 1,
      sym__space,
    ACTIONS(2315), 1,
      sym__eol,
    STATE(334), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [5709] = 3,
    ACTIONS(1973), 1,
      sym__space,
    ACTIONS(2317), 1,
      sym__eol,
    STATE(374), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5719] = 3,
    ACTIONS(2319), 1,
      aux_sym__sep_token1,
    ACTIONS(2321), 1,
      sym__space,
    STATE(225), 1,
      sym__sep,
  [5729] = 3,
    ACTIONS(1841), 1,
      sym__space,
    ACTIONS(2323), 1,
      sym__eol,
    STATE(335), 1,
      aux_sym__canonical_domains_repeat1,
  [5739] = 3,
    ACTIONS(2325), 1,
      aux_sym__sep_token1,
    ACTIONS(2327), 1,
      sym__space,
    STATE(416), 1,
      sym__sep,
  [5749] = 3,
    ACTIONS(2329), 1,
      aux_sym__sep_token1,
    ACTIONS(2331), 1,
      sym__space,
    STATE(53), 1,
      sym__sep,
  [5759] = 3,
    ACTIONS(2333), 1,
      sym__space,
    ACTIONS(2335), 1,
      sym__eol,
    STATE(370), 1,
      aux_sym_host_declaration_repeat1,
  [5769] = 3,
    ACTIONS(2337), 1,
      anon_sym_DQUOTE,
    ACTIONS(2339), 1,
      anon_sym_COMMA,
    STATE(485), 1,
      aux_sym__log_verbose_repeat2,
  [5779] = 3,
    ACTIONS(2342), 1,
      aux_sym__sep_token1,
    ACTIONS(2344), 1,
      sym__space,
    STATE(422), 1,
      sym__sep,
  [5789] = 3,
    ACTIONS(2346), 1,
      aux_sym__sep_token1,
    ACTIONS(2348), 1,
      sym__space,
    STATE(61), 1,
      sym__sep,
  [5799] = 3,
    ACTIONS(2350), 1,
      aux_sym__sep_token1,
    ACTIONS(2352), 1,
      sym__space,
    STATE(694), 1,
      sym__sep,
  [5809] = 3,
    ACTIONS(2354), 1,
      sym__space,
    ACTIONS(2356), 1,
      sym__eol,
    STATE(357), 1,
      aux_sym_host_declaration_repeat1,
  [5819] = 3,
    ACTIONS(2358), 1,
      aux_sym__sep_token1,
    ACTIONS(2360), 1,
      sym__space,
    STATE(426), 1,
      sym__sep,
  [5829] = 3,
    ACTIONS(2362), 1,
      aux_sym__sep_token1,
    ACTIONS(2364), 1,
      sym__space,
    STATE(429), 1,
      sym__sep,
  [5839] = 3,
    ACTIONS(2366), 1,
      aux_sym__sep_token1,
    ACTIONS(2368), 1,
      sym__space,
    STATE(144), 1,
      sym__sep,
  [5849] = 3,
    ACTIONS(2370), 1,
      aux_sym__sep_token1,
    ACTIONS(2372), 1,
      sym__space,
    STATE(142), 1,
      sym__sep,
  [5859] = 3,
    ACTIONS(2374), 1,
      aux_sym__sep_token1,
    ACTIONS(2376), 1,
      sym__space,
    STATE(94), 1,
      sym__sep,
  [5869] = 3,
    ACTIONS(2378), 1,
      aux_sym__sep_token1,
    ACTIONS(2380), 1,
      sym__space,
    STATE(430), 1,
      sym__sep,
  [5879] = 3,
    ACTIONS(2382), 1,
      aux_sym__sep_token1,
    ACTIONS(2384), 1,
      sym__space,
    STATE(431), 1,
      sym__sep,
  [5889] = 3,
    ACTIONS(2386), 1,
      aux_sym__sep_token1,
    ACTIONS(2388), 1,
      sym__space,
    STATE(77), 1,
      sym__sep,
  [5899] = 3,
    ACTIONS(2390), 1,
      aux_sym__sep_token1,
    ACTIONS(2392), 1,
      sym__space,
    STATE(36), 1,
      sym__sep,
  [5909] = 3,
    ACTIONS(918), 1,
      sym__eol,
    ACTIONS(2394), 1,
      sym__space,
    STATE(340), 1,
      aux_sym_match_declaration_repeat1,
  [5919] = 2,
    ACTIONS(2396), 1,
      sym__number,
    ACTIONS(1898), 2,
      sym__space,
      sym__eol,
  [5927] = 2,
    ACTIONS(2398), 1,
      sym__number,
    ACTIONS(1898), 2,
      sym__space,
      sym__eol,
  [5935] = 2,
    ACTIONS(2400), 1,
      sym__number,
    ACTIONS(1898), 2,
      sym__space,
      sym__eol,
  [5943] = 1,
    ACTIONS(2402), 2,
      sym__space,
      sym__eol,
  [5948] = 2,
    ACTIONS(1489), 1,
      sym__number,
    STATE(543), 1,
      sym_number,
  [5955] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [5960] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [5965] = 1,
    ACTIONS(2406), 2,
      sym__space,
      sym__eol,
  [5970] = 1,
    ACTIONS(2406), 2,
      sym__space,
      sym__eol,
  [5975] = 1,
    ACTIONS(2406), 2,
      sym__space,
      sym__eol,
  [5980] = 1,
    ACTIONS(2406), 2,
      sym__space,
      sym__eol,
  [5985] = 1,
    ACTIONS(2406), 2,
      sym__space,
      sym__eol,
  [5990] = 1,
    ACTIONS(2406), 2,
      sym__space,
      sym__eol,
  [5995] = 2,
    ACTIONS(834), 1,
      sym__space,
    ACTIONS(836), 1,
      sym__eol,
  [6002] = 2,
    ACTIONS(1106), 1,
      sym__number,
    STATE(640), 1,
      sym_time,
  [6009] = 1,
    ACTIONS(2406), 2,
      sym__space,
      sym__eol,
  [6014] = 2,
    ACTIONS(2408), 1,
      aux_sym__all_token1,
    STATE(621), 1,
      sym__all,
  [6021] = 2,
    ACTIONS(2410), 1,
      aux_sym__all_token1,
    STATE(622), 1,
      sym__all,
  [6028] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6033] = 1,
    ACTIONS(1898), 2,
      sym__space,
      sym__eol,
  [6038] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6043] = 1,
    ACTIONS(2414), 2,
      sym__space,
      sym__eol,
  [6048] = 1,
    ACTIONS(2416), 2,
      sym__space,
      sym__eol,
  [6053] = 1,
    ACTIONS(2418), 2,
      sym__space,
      sym__eol,
  [6058] = 1,
    ACTIONS(2420), 2,
      sym__space,
      sym__eol,
  [6063] = 1,
    ACTIONS(2422), 2,
      sym__space,
      sym__eol,
  [6068] = 1,
    ACTIONS(2424), 2,
      sym__space,
      sym__eol,
  [6073] = 1,
    ACTIONS(2426), 2,
      sym__space,
      sym__eol,
  [6078] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6083] = 1,
    ACTIONS(2428), 2,
      sym__space,
      sym__eol,
  [6088] = 1,
    ACTIONS(2430), 2,
      sym__space,
      sym__eol,
  [6093] = 1,
    ACTIONS(2432), 2,
      sym__space,
      sym__eol,
  [6098] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6103] = 1,
    ACTIONS(2434), 2,
      sym__space,
      sym__eol,
  [6108] = 1,
    ACTIONS(2436), 2,
      sym__space,
      sym__eol,
  [6113] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6118] = 1,
    ACTIONS(2438), 2,
      sym__space,
      sym__eol,
  [6123] = 1,
    ACTIONS(2440), 2,
      anon_sym_DQUOTE,
      aux_sym__match_exec_token3,
  [6128] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6133] = 1,
    ACTIONS(2442), 2,
      sym__space,
      sym__eol,
  [6138] = 2,
    ACTIONS(1489), 1,
      sym__number,
    STATE(304), 1,
      sym_number,
  [6145] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6150] = 1,
    ACTIONS(2444), 2,
      sym__space,
      sym__eol,
  [6155] = 1,
    ACTIONS(2446), 2,
      sym__space,
      sym__eol,
  [6160] = 1,
    ACTIONS(2448), 2,
      sym__space,
      sym__eol,
  [6165] = 1,
    ACTIONS(2450), 2,
      sym__space,
      sym__eol,
  [6170] = 1,
    ACTIONS(2452), 2,
      sym__space,
      sym__eol,
  [6175] = 1,
    ACTIONS(2454), 2,
      sym__space,
      sym__eol,
  [6180] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6185] = 1,
    ACTIONS(2456), 2,
      sym__space,
      sym__eol,
  [6190] = 1,
    ACTIONS(2458), 2,
      sym__space,
      sym__eol,
  [6195] = 1,
    ACTIONS(2460), 2,
      sym__space,
      sym__eol,
  [6200] = 2,
    ACTIONS(2462), 1,
      sym__space,
    ACTIONS(2464), 1,
      sym__eol,
  [6207] = 2,
    ACTIONS(2466), 1,
      sym__space,
    ACTIONS(2468), 1,
      sym__eol,
  [6214] = 1,
    ACTIONS(2468), 2,
      sym__space,
      sym__eol,
  [6219] = 1,
    ACTIONS(2470), 2,
      sym__space,
      sym__eol,
  [6224] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6229] = 1,
    ACTIONS(2472), 2,
      sym__space,
      sym__eol,
  [6234] = 1,
    ACTIONS(2474), 2,
      sym__space,
      sym__eol,
  [6239] = 1,
    ACTIONS(2476), 2,
      sym__space,
      sym__eol,
  [6244] = 1,
    ACTIONS(2478), 2,
      sym__space,
      sym__eol,
  [6249] = 1,
    ACTIONS(2480), 2,
      sym__space,
      sym__eol,
  [6254] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6259] = 1,
    ACTIONS(2482), 2,
      aux_sym__match_localnetwork_token3,
      anon_sym_STAR,
  [6264] = 1,
    ACTIONS(2484), 2,
      sym__space,
      sym__eol,
  [6269] = 1,
    ACTIONS(2486), 2,
      sym__space,
      sym__eol,
  [6274] = 1,
    ACTIONS(2488), 2,
      sym__space,
      sym__eol,
  [6279] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6284] = 1,
    ACTIONS(2490), 2,
      sym__space,
      sym__eol,
  [6289] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6294] = 1,
    ACTIONS(2492), 2,
      sym__space,
      sym__eol,
  [6299] = 1,
    ACTIONS(2494), 2,
      sym__space,
      sym__eol,
  [6304] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6309] = 1,
    ACTIONS(2496), 2,
      sym__space,
      sym__eol,
  [6314] = 1,
    ACTIONS(2498), 2,
      sym__space,
      sym__eol,
  [6319] = 1,
    ACTIONS(2500), 2,
      sym__space,
      sym__eol,
  [6324] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6329] = 1,
    ACTIONS(2502), 2,
      sym__space,
      sym__eol,
  [6334] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6339] = 1,
    ACTIONS(2504), 2,
      sym__space,
      sym__eol,
  [6344] = 2,
    ACTIONS(2506), 1,
      sym__space,
    ACTIONS(2508), 1,
      sym__eol,
  [6351] = 1,
    ACTIONS(2510), 2,
      sym__space,
      sym__eol,
  [6356] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6361] = 1,
    ACTIONS(2512), 2,
      sym__space,
      sym__eol,
  [6366] = 1,
    ACTIONS(2514), 2,
      sym__space,
      sym__eol,
  [6371] = 1,
    ACTIONS(2516), 2,
      sym__space,
      sym__eol,
  [6376] = 1,
    ACTIONS(2518), 2,
      sym__space,
      sym__eol,
  [6381] = 2,
    ACTIONS(1489), 1,
      sym__number,
    STATE(452), 1,
      sym_number,
  [6388] = 1,
    ACTIONS(2520), 2,
      sym__space,
      sym__eol,
  [6393] = 1,
    ACTIONS(2522), 2,
      sym__space,
      sym__eol,
  [6398] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6403] = 1,
    ACTIONS(2524), 2,
      sym__space,
      sym__eol,
  [6408] = 2,
    ACTIONS(1106), 1,
      sym__number,
    STATE(710), 1,
      sym_time,
  [6415] = 1,
    ACTIONS(2526), 2,
      sym__space,
      sym__eol,
  [6420] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6425] = 1,
    ACTIONS(2528), 2,
      sym__space,
      sym__eol,
  [6430] = 1,
    ACTIONS(2530), 2,
      sym__space,
      sym__eol,
  [6435] = 1,
    ACTIONS(2532), 2,
      sym__space,
      sym__eol,
  [6440] = 1,
    ACTIONS(2534), 2,
      sym__space,
      sym__eol,
  [6445] = 1,
    ACTIONS(2536), 2,
      sym__space,
      sym__eol,
  [6450] = 2,
    ACTIONS(2538), 1,
      sym__var_name,
    STATE(715), 1,
      sym__set_env_value,
  [6457] = 1,
    ACTIONS(2540), 2,
      sym__space,
      sym__eol,
  [6462] = 1,
    ACTIONS(2542), 2,
      sym__space,
      sym__eol,
  [6467] = 1,
    ACTIONS(2544), 2,
      sym__space,
      sym__eol,
  [6472] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6477] = 2,
    ACTIONS(2275), 1,
      aux_sym__match_exec_token3,
    STATE(465), 1,
      aux_sym__string_repeat1,
  [6484] = 1,
    ACTIONS(2546), 2,
      sym__space,
      sym__eol,
  [6489] = 1,
    ACTIONS(2548), 2,
      sym__space,
      sym__eol,
  [6494] = 1,
    ACTIONS(2550), 2,
      sym__space,
      sym__eol,
  [6499] = 1,
    ACTIONS(2552), 2,
      sym__space,
      sym__eol,
  [6504] = 1,
    ACTIONS(2554), 2,
      sym__space,
      sym__eol,
  [6509] = 1,
    ACTIONS(2556), 2,
      sym__space,
      sym__eol,
  [6514] = 1,
    ACTIONS(2558), 2,
      sym__space,
      sym__eol,
  [6519] = 1,
    ACTIONS(2560), 2,
      sym__space,
      sym__eol,
  [6524] = 2,
    ACTIONS(2562), 1,
      sym__space,
    ACTIONS(2564), 1,
      sym__eol,
  [6531] = 1,
    ACTIONS(2566), 2,
      sym__space,
      sym__eol,
  [6536] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6541] = 2,
    ACTIONS(1172), 1,
      anon_sym_COLON,
    ACTIONS(1211), 1,
      aux_sym__match_exec_token2,
  [6548] = 1,
    ACTIONS(2568), 2,
      sym__space,
      sym__eol,
  [6553] = 1,
    ACTIONS(2570), 2,
      sym__space,
      sym__eol,
  [6558] = 1,
    ACTIONS(2572), 2,
      sym__space,
      sym__eol,
  [6563] = 1,
    ACTIONS(2574), 2,
      sym__space,
      sym__eol,
  [6568] = 1,
    ACTIONS(2576), 2,
      sym__space,
      sym__eol,
  [6573] = 1,
    ACTIONS(2578), 2,
      sym__space,
      sym__eol,
  [6578] = 1,
    ACTIONS(2580), 2,
      anon_sym_md5,
      anon_sym_sha256,
  [6583] = 1,
    ACTIONS(2582), 2,
      sym__space,
      sym__eol,
  [6588] = 1,
    ACTIONS(2584), 2,
      sym__space,
      sym__eol,
  [6593] = 1,
    ACTIONS(2586), 2,
      sym__space,
      sym__eol,
  [6598] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6603] = 1,
    ACTIONS(2588), 2,
      sym__space,
      sym__eol,
  [6608] = 1,
    ACTIONS(2590), 2,
      sym__space,
      sym__eol,
  [6613] = 1,
    ACTIONS(2592), 2,
      sym__space,
      sym__eol,
  [6618] = 1,
    ACTIONS(2594), 2,
      sym__space,
      sym__eol,
  [6623] = 1,
    ACTIONS(2596), 2,
      sym__space,
      sym__eol,
  [6628] = 1,
    ACTIONS(2598), 2,
      sym__space,
      sym__eol,
  [6633] = 1,
    ACTIONS(2600), 2,
      sym__space,
      sym__eol,
  [6638] = 1,
    ACTIONS(1852), 2,
      sym__space,
      sym__eol,
  [6643] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6648] = 1,
    ACTIONS(2602), 2,
      sym__space,
      sym__eol,
  [6653] = 1,
    ACTIONS(2604), 2,
      sym__space,
      sym__eol,
  [6658] = 1,
    ACTIONS(2606), 2,
      sym__space,
      sym__eol,
  [6663] = 1,
    ACTIONS(2608), 2,
      sym__space,
      sym__eol,
  [6668] = 1,
    ACTIONS(2610), 2,
      sym__space,
      sym__eol,
  [6673] = 2,
    ACTIONS(1587), 1,
      aux_sym_time_token4,
    ACTIONS(1589), 1,
      aux_sym_time_token5,
  [6680] = 1,
    ACTIONS(1682), 2,
      sym__space,
      sym__eol,
  [6685] = 1,
    ACTIONS(2612), 2,
      sym__space,
      sym__eol,
  [6690] = 1,
    ACTIONS(2614), 2,
      sym__space,
      sym__eol,
  [6695] = 1,
    ACTIONS(2616), 2,
      sym__space,
      sym__eol,
  [6700] = 1,
    ACTIONS(2618), 2,
      sym__space,
      sym__eol,
  [6705] = 1,
    ACTIONS(2620), 2,
      sym__space,
      sym__eol,
  [6710] = 1,
    ACTIONS(2622), 2,
      sym__space,
      sym__eol,
  [6715] = 1,
    ACTIONS(2624), 2,
      sym__space,
      sym__eol,
  [6720] = 2,
    ACTIONS(2626), 1,
      sym__space,
    ACTIONS(2628), 1,
      sym__eol,
  [6727] = 1,
    ACTIONS(2628), 2,
      sym__space,
      sym__eol,
  [6732] = 1,
    ACTIONS(2630), 2,
      sym__space,
      sym__eol,
  [6737] = 1,
    ACTIONS(2630), 2,
      sym__space,
      sym__eol,
  [6742] = 1,
    ACTIONS(2632), 2,
      sym__space,
      sym__eol,
  [6747] = 1,
    ACTIONS(2630), 2,
      sym__space,
      sym__eol,
  [6752] = 1,
    ACTIONS(2630), 2,
      sym__space,
      sym__eol,
  [6757] = 1,
    ACTIONS(2630), 2,
      sym__space,
      sym__eol,
  [6762] = 1,
    ACTIONS(2630), 2,
      sym__space,
      sym__eol,
  [6767] = 1,
    ACTIONS(2630), 2,
      sym__space,
      sym__eol,
  [6772] = 1,
    ACTIONS(2634), 2,
      sym__space,
      sym__eol,
  [6777] = 1,
    ACTIONS(2636), 2,
      sym__space,
      sym__eol,
  [6782] = 1,
    ACTIONS(2636), 2,
      sym__space,
      sym__eol,
  [6787] = 2,
    ACTIONS(1788), 1,
      sym__eol,
    ACTIONS(2638), 1,
      sym__space,
  [6794] = 1,
    ACTIONS(2640), 2,
      sym__space,
      sym__eol,
  [6799] = 2,
    ACTIONS(2642), 1,
      sym__space,
    ACTIONS(2644), 1,
      sym__eol,
  [6806] = 1,
    ACTIONS(2646), 2,
      sym__space,
      sym__eol,
  [6811] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6816] = 2,
    ACTIONS(2648), 1,
      aux_sym_time_token4,
    ACTIONS(2650), 1,
      aux_sym_time_token5,
  [6823] = 1,
    ACTIONS(2652), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [6828] = 2,
    ACTIONS(2538), 1,
      sym__var_name,
    STATE(466), 1,
      sym__set_env_value,
  [6835] = 2,
    ACTIONS(2654), 1,
      anon_sym_DQUOTE,
    ACTIONS(2656), 1,
      aux_sym__match_localnetwork_token2,
  [6842] = 1,
    ACTIONS(2658), 2,
      sym__space,
      sym__eol,
  [6847] = 2,
    ACTIONS(1489), 1,
      sym__number,
    STATE(545), 1,
      sym_number,
  [6854] = 1,
    ACTIONS(2660), 2,
      sym__space,
      sym__eol,
  [6859] = 2,
    ACTIONS(1489), 1,
      sym__number,
    STATE(550), 1,
      sym_number,
  [6866] = 1,
    ACTIONS(2030), 2,
      sym__space,
      sym__eol,
  [6871] = 1,
    ACTIONS(1672), 2,
      sym__space,
      sym__eol,
  [6876] = 1,
    ACTIONS(2662), 2,
      sym__space,
      sym__eol,
  [6881] = 2,
    ACTIONS(1489), 1,
      sym__number,
    STATE(559), 1,
      sym_number,
  [6888] = 2,
    ACTIONS(1489), 1,
      sym__number,
    STATE(566), 1,
      sym_number,
  [6895] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6900] = 1,
    ACTIONS(2664), 2,
      sym__space,
      sym__eol,
  [6905] = 2,
    ACTIONS(1106), 1,
      sym__number,
    STATE(599), 1,
      sym_time,
  [6912] = 1,
    ACTIONS(2666), 2,
      sym__space,
      sym__eol,
  [6917] = 1,
    ACTIONS(2668), 2,
      sym__space,
      sym__eol,
  [6922] = 1,
    ACTIONS(2670), 2,
      sym__space,
      sym__eol,
  [6927] = 1,
    ACTIONS(2672), 2,
      sym__space,
      sym__eol,
  [6932] = 1,
    ACTIONS(2674), 2,
      sym__space,
      sym__eol,
  [6937] = 2,
    ACTIONS(2676), 1,
      anon_sym_none,
    ACTIONS(2678), 1,
      aux_sym__escape_char_token2,
  [6944] = 2,
    ACTIONS(1489), 1,
      sym__number,
    STATE(623), 1,
      sym_number,
  [6951] = 2,
    ACTIONS(1489), 1,
      sym__number,
    STATE(577), 1,
      sym_number,
  [6958] = 2,
    ACTIONS(1489), 1,
      sym__number,
    STATE(641), 1,
      sym_number,
  [6965] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6970] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6975] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6980] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6985] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6990] = 1,
    ACTIONS(2680), 2,
      sym__space,
      sym__eol,
  [6995] = 1,
    ACTIONS(2682), 2,
      sym__space,
      sym__eol,
  [7000] = 1,
    ACTIONS(2684), 2,
      sym__space,
      sym__eol,
  [7005] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7010] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7015] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7020] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7025] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7030] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7035] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7040] = 1,
    ACTIONS(2686), 2,
      sym__space,
      sym__eol,
  [7045] = 1,
    ACTIONS(2688), 2,
      sym__space,
      sym__eol,
  [7050] = 1,
    ACTIONS(2690), 2,
      sym__space,
      sym__eol,
  [7055] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7060] = 1,
    ACTIONS(2692), 2,
      sym__space,
      sym__eol,
  [7065] = 1,
    ACTIONS(2694), 2,
      sym__space,
      sym__eol,
  [7070] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7075] = 1,
    ACTIONS(2696), 2,
      sym__space,
      sym__eol,
  [7080] = 1,
    ACTIONS(2698), 2,
      sym__space,
      sym__eol,
  [7085] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7090] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7095] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7100] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7105] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7110] = 1,
    ACTIONS(2700), 2,
      sym__space,
      sym__eol,
  [7115] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7120] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7125] = 1,
    ACTIONS(2702), 2,
      sym__space,
      sym__eol,
  [7130] = 2,
    ACTIONS(2704), 1,
      sym__space,
    ACTIONS(2706), 1,
      sym__eol,
  [7137] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7142] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7147] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7152] = 1,
    ACTIONS(2708), 2,
      sym__space,
      sym__eol,
  [7157] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7162] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7167] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7172] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7177] = 1,
    ACTIONS(2710), 2,
      sym__space,
      sym__eol,
  [7182] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7187] = 1,
    ACTIONS(2712), 2,
      sym__space,
      sym__eol,
  [7192] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7197] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7202] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7207] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7212] = 1,
    ACTIONS(2714), 2,
      sym__space,
      sym__eol,
  [7217] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7222] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7227] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7232] = 1,
    ACTIONS(2283), 2,
      sym__space,
      sym__eol,
  [7237] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7242] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7247] = 1,
    ACTIONS(2702), 2,
      sym__space,
      sym__eol,
  [7252] = 1,
    ACTIONS(2716), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [7257] = 1,
    ACTIONS(2718), 2,
      sym__space,
      sym__eol,
  [7262] = 1,
    ACTIONS(2720), 2,
      sym__space,
      sym__eol,
  [7267] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7272] = 1,
    ACTIONS(2708), 2,
      sym__space,
      sym__eol,
  [7277] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7282] = 2,
    ACTIONS(1489), 1,
      sym__number,
    STATE(279), 1,
      sym_number,
  [7289] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7294] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7299] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7304] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7309] = 1,
    ACTIONS(2722), 2,
      sym__space,
      sym__eol,
  [7314] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7319] = 1,
    ACTIONS(2724), 2,
      sym__space,
      sym__eol,
  [7324] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7329] = 1,
    ACTIONS(2726), 2,
      sym__space,
      sym__eol,
  [7334] = 1,
    ACTIONS(1659), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [7339] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7344] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7349] = 1,
    ACTIONS(2702), 2,
      sym__space,
      sym__eol,
  [7354] = 1,
    ACTIONS(2728), 2,
      sym__space,
      sym__eol,
  [7359] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7364] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7369] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7374] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7379] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7384] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7389] = 2,
    ACTIONS(1872), 1,
      aux_sym_time_token4,
    ACTIONS(1874), 1,
      aux_sym_time_token5,
  [7396] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7401] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7406] = 1,
    ACTIONS(2730), 2,
      sym__space,
      sym__eol,
  [7411] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7416] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7421] = 1,
    ACTIONS(2732), 2,
      sym__space,
      sym__eol,
  [7426] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7431] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [7436] = 1,
    ACTIONS(1874), 1,
      aux_sym_time_token5,
  [7440] = 1,
    ACTIONS(2734), 1,
      aux_sym__match_localnetwork_token3,
  [7444] = 1,
    ACTIONS(2736), 1,
      sym__eol,
  [7448] = 1,
    ACTIONS(2738), 1,
      anon_sym_DQUOTE,
  [7452] = 1,
    ACTIONS(2740), 1,
      anon_sym_DQUOTE,
  [7456] = 1,
    ACTIONS(2742), 1,
      aux_sym__match_localnetwork_token2,
  [7460] = 1,
    ACTIONS(2706), 1,
      sym__eol,
  [7464] = 1,
    ACTIONS(836), 1,
      sym__eol,
  [7468] = 1,
    ACTIONS(2744), 1,
      sym_verbosity,
  [7472] = 1,
    ACTIONS(2746), 1,
      sym_authentication,
  [7476] = 1,
    ACTIONS(2748), 1,
      aux_sym__stream_local_bind_mask_token2,
  [7480] = 1,
    ACTIONS(2750), 1,
      sym_facility,
  [7484] = 1,
    ACTIONS(2650), 1,
      aux_sym_time_token5,
  [7488] = 1,
    ACTIONS(2644), 1,
      sym__eol,
  [7492] = 1,
    ACTIONS(1589), 1,
      aux_sym_time_token5,
  [7496] = 1,
    ACTIONS(2752), 1,
      aux_sym_time_token5,
  [7500] = 1,
    ACTIONS(2754), 1,
      sym_sig,
  [7504] = 1,
    ACTIONS(2756), 1,
      sym__var_name,
  [7508] = 1,
    ACTIONS(2758), 1,
      sym_cipher,
  [7512] = 1,
    ACTIONS(2760), 1,
      aux_sym__match_localnetwork_token3,
  [7516] = 1,
    ACTIONS(2762), 1,
      anon_sym_COLON,
  [7520] = 1,
    ACTIONS(2764), 1,
      sym__var_name,
  [7524] = 1,
    ACTIONS(2766), 1,
      sym_key_sig,
  [7528] = 1,
    ACTIONS(2768), 1,
      sym_key_sig,
  [7532] = 1,
    ACTIONS(2770), 1,
      sym_authentication,
  [7536] = 1,
    ACTIONS(2772), 1,
      anon_sym_COLON,
  [7540] = 1,
    ACTIONS(2774), 1,
      sym_mac,
  [7544] = 1,
    ACTIONS(2776), 1,
      sym__space,
  [7548] = 1,
    ACTIONS(2778), 1,
      sym_mac,
  [7552] = 1,
    ACTIONS(2780), 1,
      anon_sym_DQUOTE,
  [7556] = 1,
    ACTIONS(2782), 1,
      sym_kex,
  [7560] = 1,
    ACTIONS(2784), 1,
      anon_sym_COLON,
  [7564] = 1,
    ACTIONS(2786), 1,
      sym_key_sig,
  [7568] = 1,
    ACTIONS(2788), 1,
      sym_key_sig,
  [7572] = 1,
    ACTIONS(2790), 1,
      anon_sym_EQ,
  [7576] = 1,
    ACTIONS(2792), 1,
      anon_sym_DQUOTE,
  [7580] = 1,
    ACTIONS(2794), 1,
      sym_cipher,
  [7584] = 1,
    ACTIONS(2796), 1,
      anon_sym_RBRACE,
  [7588] = 1,
    ACTIONS(2798), 1,
      sym_sig,
  [7592] = 1,
    ACTIONS(2800), 1,
      sym_kex,
  [7596] = 1,
    ACTIONS(2802), 1,
      sym__eol,
  [7600] = 1,
    ACTIONS(918), 1,
      sym__eol,
  [7604] = 1,
    ACTIONS(2804), 1,
      anon_sym_RBRACE,
  [7608] = 1,
    ACTIONS(2806), 1,
      ts_builtin_sym_end,
  [7612] = 1,
    ACTIONS(2808), 1,
      anon_sym_RBRACE,
  [7616] = 1,
    ACTIONS(2810), 1,
      anon_sym_RBRACE,
  [7620] = 1,
    ACTIONS(2812), 1,
      anon_sym_RBRACE,
  [7624] = 1,
    ACTIONS(2814), 1,
      anon_sym_RBRACE,
  [7628] = 1,
    ACTIONS(2816), 1,
      sym__var_name,
  [7632] = 1,
    ACTIONS(2818), 1,
      sym__var_name,
  [7636] = 1,
    ACTIONS(2820), 1,
      sym__var_name,
  [7640] = 1,
    ACTIONS(2822), 1,
      sym__var_name,
  [7644] = 1,
    ACTIONS(2824), 1,
      sym__var_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(36)] = 0,
  [SMALL_STATE(37)] = 67,
  [SMALL_STATE(38)] = 131,
  [SMALL_STATE(39)] = 195,
  [SMALL_STATE(40)] = 256,
  [SMALL_STATE(41)] = 311,
  [SMALL_STATE(42)] = 356,
  [SMALL_STATE(43)] = 401,
  [SMALL_STATE(44)] = 440,
  [SMALL_STATE(45)] = 479,
  [SMALL_STATE(46)] = 518,
  [SMALL_STATE(47)] = 557,
  [SMALL_STATE(48)] = 590,
  [SMALL_STATE(49)] = 615,
  [SMALL_STATE(50)] = 638,
  [SMALL_STATE(51)] = 667,
  [SMALL_STATE(52)] = 690,
  [SMALL_STATE(53)] = 719,
  [SMALL_STATE(54)] = 744,
  [SMALL_STATE(55)] = 769,
  [SMALL_STATE(56)] = 791,
  [SMALL_STATE(57)] = 817,
  [SMALL_STATE(58)] = 843,
  [SMALL_STATE(59)] = 869,
  [SMALL_STATE(60)] = 891,
  [SMALL_STATE(61)] = 914,
  [SMALL_STATE(62)] = 937,
  [SMALL_STATE(63)] = 960,
  [SMALL_STATE(64)] = 979,
  [SMALL_STATE(65)] = 1002,
  [SMALL_STATE(66)] = 1025,
  [SMALL_STATE(67)] = 1048,
  [SMALL_STATE(68)] = 1069,
  [SMALL_STATE(69)] = 1090,
  [SMALL_STATE(70)] = 1113,
  [SMALL_STATE(71)] = 1134,
  [SMALL_STATE(72)] = 1157,
  [SMALL_STATE(73)] = 1180,
  [SMALL_STATE(74)] = 1203,
  [SMALL_STATE(75)] = 1226,
  [SMALL_STATE(76)] = 1242,
  [SMALL_STATE(77)] = 1256,
  [SMALL_STATE(78)] = 1272,
  [SMALL_STATE(79)] = 1292,
  [SMALL_STATE(80)] = 1312,
  [SMALL_STATE(81)] = 1332,
  [SMALL_STATE(82)] = 1352,
  [SMALL_STATE(83)] = 1372,
  [SMALL_STATE(84)] = 1392,
  [SMALL_STATE(85)] = 1412,
  [SMALL_STATE(86)] = 1432,
  [SMALL_STATE(87)] = 1444,
  [SMALL_STATE(88)] = 1460,
  [SMALL_STATE(89)] = 1480,
  [SMALL_STATE(90)] = 1496,
  [SMALL_STATE(91)] = 1508,
  [SMALL_STATE(92)] = 1522,
  [SMALL_STATE(93)] = 1537,
  [SMALL_STATE(94)] = 1550,
  [SMALL_STATE(95)] = 1567,
  [SMALL_STATE(96)] = 1584,
  [SMALL_STATE(97)] = 1599,
  [SMALL_STATE(98)] = 1616,
  [SMALL_STATE(99)] = 1633,
  [SMALL_STATE(100)] = 1650,
  [SMALL_STATE(101)] = 1667,
  [SMALL_STATE(102)] = 1684,
  [SMALL_STATE(103)] = 1701,
  [SMALL_STATE(104)] = 1718,
  [SMALL_STATE(105)] = 1729,
  [SMALL_STATE(106)] = 1744,
  [SMALL_STATE(107)] = 1761,
  [SMALL_STATE(108)] = 1778,
  [SMALL_STATE(109)] = 1789,
  [SMALL_STATE(110)] = 1804,
  [SMALL_STATE(111)] = 1817,
  [SMALL_STATE(112)] = 1830,
  [SMALL_STATE(113)] = 1847,
  [SMALL_STATE(114)] = 1860,
  [SMALL_STATE(115)] = 1875,
  [SMALL_STATE(116)] = 1892,
  [SMALL_STATE(117)] = 1903,
  [SMALL_STATE(118)] = 1914,
  [SMALL_STATE(119)] = 1929,
  [SMALL_STATE(120)] = 1942,
  [SMALL_STATE(121)] = 1961,
  [SMALL_STATE(122)] = 1976,
  [SMALL_STATE(123)] = 1993,
  [SMALL_STATE(124)] = 2010,
  [SMALL_STATE(125)] = 2025,
  [SMALL_STATE(126)] = 2040,
  [SMALL_STATE(127)] = 2051,
  [SMALL_STATE(128)] = 2068,
  [SMALL_STATE(129)] = 2079,
  [SMALL_STATE(130)] = 2098,
  [SMALL_STATE(131)] = 2117,
  [SMALL_STATE(132)] = 2130,
  [SMALL_STATE(133)] = 2149,
  [SMALL_STATE(134)] = 2166,
  [SMALL_STATE(135)] = 2179,
  [SMALL_STATE(136)] = 2198,
  [SMALL_STATE(137)] = 2213,
  [SMALL_STATE(138)] = 2228,
  [SMALL_STATE(139)] = 2245,
  [SMALL_STATE(140)] = 2262,
  [SMALL_STATE(141)] = 2279,
  [SMALL_STATE(142)] = 2296,
  [SMALL_STATE(143)] = 2313,
  [SMALL_STATE(144)] = 2330,
  [SMALL_STATE(145)] = 2347,
  [SMALL_STATE(146)] = 2366,
  [SMALL_STATE(147)] = 2378,
  [SMALL_STATE(148)] = 2392,
  [SMALL_STATE(149)] = 2402,
  [SMALL_STATE(150)] = 2416,
  [SMALL_STATE(151)] = 2428,
  [SMALL_STATE(152)] = 2444,
  [SMALL_STATE(153)] = 2460,
  [SMALL_STATE(154)] = 2474,
  [SMALL_STATE(155)] = 2486,
  [SMALL_STATE(156)] = 2500,
  [SMALL_STATE(157)] = 2512,
  [SMALL_STATE(158)] = 2524,
  [SMALL_STATE(159)] = 2538,
  [SMALL_STATE(160)] = 2548,
  [SMALL_STATE(161)] = 2564,
  [SMALL_STATE(162)] = 2574,
  [SMALL_STATE(163)] = 2588,
  [SMALL_STATE(164)] = 2596,
  [SMALL_STATE(165)] = 2606,
  [SMALL_STATE(166)] = 2620,
  [SMALL_STATE(167)] = 2632,
  [SMALL_STATE(168)] = 2646,
  [SMALL_STATE(169)] = 2662,
  [SMALL_STATE(170)] = 2672,
  [SMALL_STATE(171)] = 2688,
  [SMALL_STATE(172)] = 2704,
  [SMALL_STATE(173)] = 2718,
  [SMALL_STATE(174)] = 2728,
  [SMALL_STATE(175)] = 2738,
  [SMALL_STATE(176)] = 2748,
  [SMALL_STATE(177)] = 2758,
  [SMALL_STATE(178)] = 2772,
  [SMALL_STATE(179)] = 2782,
  [SMALL_STATE(180)] = 2798,
  [SMALL_STATE(181)] = 2812,
  [SMALL_STATE(182)] = 2822,
  [SMALL_STATE(183)] = 2836,
  [SMALL_STATE(184)] = 2850,
  [SMALL_STATE(185)] = 2860,
  [SMALL_STATE(186)] = 2874,
  [SMALL_STATE(187)] = 2888,
  [SMALL_STATE(188)] = 2896,
  [SMALL_STATE(189)] = 2905,
  [SMALL_STATE(190)] = 2916,
  [SMALL_STATE(191)] = 2925,
  [SMALL_STATE(192)] = 2936,
  [SMALL_STATE(193)] = 2947,
  [SMALL_STATE(194)] = 2958,
  [SMALL_STATE(195)] = 2969,
  [SMALL_STATE(196)] = 2980,
  [SMALL_STATE(197)] = 2991,
  [SMALL_STATE(198)] = 3002,
  [SMALL_STATE(199)] = 3013,
  [SMALL_STATE(200)] = 3024,
  [SMALL_STATE(201)] = 3033,
  [SMALL_STATE(202)] = 3044,
  [SMALL_STATE(203)] = 3055,
  [SMALL_STATE(204)] = 3066,
  [SMALL_STATE(205)] = 3077,
  [SMALL_STATE(206)] = 3088,
  [SMALL_STATE(207)] = 3097,
  [SMALL_STATE(208)] = 3108,
  [SMALL_STATE(209)] = 3119,
  [SMALL_STATE(210)] = 3128,
  [SMALL_STATE(211)] = 3139,
  [SMALL_STATE(212)] = 3150,
  [SMALL_STATE(213)] = 3159,
  [SMALL_STATE(214)] = 3170,
  [SMALL_STATE(215)] = 3181,
  [SMALL_STATE(216)] = 3192,
  [SMALL_STATE(217)] = 3203,
  [SMALL_STATE(218)] = 3214,
  [SMALL_STATE(219)] = 3225,
  [SMALL_STATE(220)] = 3236,
  [SMALL_STATE(221)] = 3247,
  [SMALL_STATE(222)] = 3258,
  [SMALL_STATE(223)] = 3269,
  [SMALL_STATE(224)] = 3280,
  [SMALL_STATE(225)] = 3289,
  [SMALL_STATE(226)] = 3298,
  [SMALL_STATE(227)] = 3307,
  [SMALL_STATE(228)] = 3318,
  [SMALL_STATE(229)] = 3329,
  [SMALL_STATE(230)] = 3340,
  [SMALL_STATE(231)] = 3351,
  [SMALL_STATE(232)] = 3362,
  [SMALL_STATE(233)] = 3373,
  [SMALL_STATE(234)] = 3386,
  [SMALL_STATE(235)] = 3395,
  [SMALL_STATE(236)] = 3406,
  [SMALL_STATE(237)] = 3417,
  [SMALL_STATE(238)] = 3428,
  [SMALL_STATE(239)] = 3439,
  [SMALL_STATE(240)] = 3450,
  [SMALL_STATE(241)] = 3459,
  [SMALL_STATE(242)] = 3466,
  [SMALL_STATE(243)] = 3475,
  [SMALL_STATE(244)] = 3484,
  [SMALL_STATE(245)] = 3497,
  [SMALL_STATE(246)] = 3508,
  [SMALL_STATE(247)] = 3519,
  [SMALL_STATE(248)] = 3530,
  [SMALL_STATE(249)] = 3541,
  [SMALL_STATE(250)] = 3552,
  [SMALL_STATE(251)] = 3563,
  [SMALL_STATE(252)] = 3574,
  [SMALL_STATE(253)] = 3585,
  [SMALL_STATE(254)] = 3598,
  [SMALL_STATE(255)] = 3611,
  [SMALL_STATE(256)] = 3618,
  [SMALL_STATE(257)] = 3629,
  [SMALL_STATE(258)] = 3638,
  [SMALL_STATE(259)] = 3649,
  [SMALL_STATE(260)] = 3660,
  [SMALL_STATE(261)] = 3671,
  [SMALL_STATE(262)] = 3682,
  [SMALL_STATE(263)] = 3693,
  [SMALL_STATE(264)] = 3704,
  [SMALL_STATE(265)] = 3713,
  [SMALL_STATE(266)] = 3724,
  [SMALL_STATE(267)] = 3735,
  [SMALL_STATE(268)] = 3748,
  [SMALL_STATE(269)] = 3761,
  [SMALL_STATE(270)] = 3770,
  [SMALL_STATE(271)] = 3781,
  [SMALL_STATE(272)] = 3792,
  [SMALL_STATE(273)] = 3801,
  [SMALL_STATE(274)] = 3812,
  [SMALL_STATE(275)] = 3821,
  [SMALL_STATE(276)] = 3832,
  [SMALL_STATE(277)] = 3841,
  [SMALL_STATE(278)] = 3851,
  [SMALL_STATE(279)] = 3861,
  [SMALL_STATE(280)] = 3867,
  [SMALL_STATE(281)] = 3877,
  [SMALL_STATE(282)] = 3887,
  [SMALL_STATE(283)] = 3895,
  [SMALL_STATE(284)] = 3903,
  [SMALL_STATE(285)] = 3913,
  [SMALL_STATE(286)] = 3921,
  [SMALL_STATE(287)] = 3929,
  [SMALL_STATE(288)] = 3935,
  [SMALL_STATE(289)] = 3941,
  [SMALL_STATE(290)] = 3947,
  [SMALL_STATE(291)] = 3955,
  [SMALL_STATE(292)] = 3963,
  [SMALL_STATE(293)] = 3973,
  [SMALL_STATE(294)] = 3981,
  [SMALL_STATE(295)] = 3991,
  [SMALL_STATE(296)] = 4001,
  [SMALL_STATE(297)] = 4011,
  [SMALL_STATE(298)] = 4019,
  [SMALL_STATE(299)] = 4029,
  [SMALL_STATE(300)] = 4039,
  [SMALL_STATE(301)] = 4047,
  [SMALL_STATE(302)] = 4057,
  [SMALL_STATE(303)] = 4067,
  [SMALL_STATE(304)] = 4077,
  [SMALL_STATE(305)] = 4083,
  [SMALL_STATE(306)] = 4093,
  [SMALL_STATE(307)] = 4103,
  [SMALL_STATE(308)] = 4113,
  [SMALL_STATE(309)] = 4123,
  [SMALL_STATE(310)] = 4133,
  [SMALL_STATE(311)] = 4143,
  [SMALL_STATE(312)] = 4153,
  [SMALL_STATE(313)] = 4163,
  [SMALL_STATE(314)] = 4173,
  [SMALL_STATE(315)] = 4183,
  [SMALL_STATE(316)] = 4193,
  [SMALL_STATE(317)] = 4203,
  [SMALL_STATE(318)] = 4213,
  [SMALL_STATE(319)] = 4223,
  [SMALL_STATE(320)] = 4233,
  [SMALL_STATE(321)] = 4239,
  [SMALL_STATE(322)] = 4249,
  [SMALL_STATE(323)] = 4255,
  [SMALL_STATE(324)] = 4261,
  [SMALL_STATE(325)] = 4271,
  [SMALL_STATE(326)] = 4281,
  [SMALL_STATE(327)] = 4291,
  [SMALL_STATE(328)] = 4297,
  [SMALL_STATE(329)] = 4305,
  [SMALL_STATE(330)] = 4315,
  [SMALL_STATE(331)] = 4325,
  [SMALL_STATE(332)] = 4335,
  [SMALL_STATE(333)] = 4343,
  [SMALL_STATE(334)] = 4351,
  [SMALL_STATE(335)] = 4361,
  [SMALL_STATE(336)] = 4371,
  [SMALL_STATE(337)] = 4381,
  [SMALL_STATE(338)] = 4391,
  [SMALL_STATE(339)] = 4397,
  [SMALL_STATE(340)] = 4407,
  [SMALL_STATE(341)] = 4417,
  [SMALL_STATE(342)] = 4427,
  [SMALL_STATE(343)] = 4437,
  [SMALL_STATE(344)] = 4447,
  [SMALL_STATE(345)] = 4457,
  [SMALL_STATE(346)] = 4467,
  [SMALL_STATE(347)] = 4477,
  [SMALL_STATE(348)] = 4487,
  [SMALL_STATE(349)] = 4497,
  [SMALL_STATE(350)] = 4507,
  [SMALL_STATE(351)] = 4517,
  [SMALL_STATE(352)] = 4525,
  [SMALL_STATE(353)] = 4533,
  [SMALL_STATE(354)] = 4543,
  [SMALL_STATE(355)] = 4553,
  [SMALL_STATE(356)] = 4559,
  [SMALL_STATE(357)] = 4567,
  [SMALL_STATE(358)] = 4577,
  [SMALL_STATE(359)] = 4587,
  [SMALL_STATE(360)] = 4597,
  [SMALL_STATE(361)] = 4607,
  [SMALL_STATE(362)] = 4617,
  [SMALL_STATE(363)] = 4627,
  [SMALL_STATE(364)] = 4637,
  [SMALL_STATE(365)] = 4647,
  [SMALL_STATE(366)] = 4657,
  [SMALL_STATE(367)] = 4667,
  [SMALL_STATE(368)] = 4677,
  [SMALL_STATE(369)] = 4687,
  [SMALL_STATE(370)] = 4697,
  [SMALL_STATE(371)] = 4707,
  [SMALL_STATE(372)] = 4717,
  [SMALL_STATE(373)] = 4727,
  [SMALL_STATE(374)] = 4737,
  [SMALL_STATE(375)] = 4747,
  [SMALL_STATE(376)] = 4757,
  [SMALL_STATE(377)] = 4767,
  [SMALL_STATE(378)] = 4777,
  [SMALL_STATE(379)] = 4787,
  [SMALL_STATE(380)] = 4797,
  [SMALL_STATE(381)] = 4807,
  [SMALL_STATE(382)] = 4817,
  [SMALL_STATE(383)] = 4827,
  [SMALL_STATE(384)] = 4837,
  [SMALL_STATE(385)] = 4847,
  [SMALL_STATE(386)] = 4857,
  [SMALL_STATE(387)] = 4865,
  [SMALL_STATE(388)] = 4873,
  [SMALL_STATE(389)] = 4881,
  [SMALL_STATE(390)] = 4889,
  [SMALL_STATE(391)] = 4899,
  [SMALL_STATE(392)] = 4907,
  [SMALL_STATE(393)] = 4915,
  [SMALL_STATE(394)] = 4923,
  [SMALL_STATE(395)] = 4933,
  [SMALL_STATE(396)] = 4943,
  [SMALL_STATE(397)] = 4953,
  [SMALL_STATE(398)] = 4963,
  [SMALL_STATE(399)] = 4973,
  [SMALL_STATE(400)] = 4981,
  [SMALL_STATE(401)] = 4991,
  [SMALL_STATE(402)] = 5001,
  [SMALL_STATE(403)] = 5011,
  [SMALL_STATE(404)] = 5021,
  [SMALL_STATE(405)] = 5031,
  [SMALL_STATE(406)] = 5039,
  [SMALL_STATE(407)] = 5047,
  [SMALL_STATE(408)] = 5057,
  [SMALL_STATE(409)] = 5067,
  [SMALL_STATE(410)] = 5077,
  [SMALL_STATE(411)] = 5087,
  [SMALL_STATE(412)] = 5095,
  [SMALL_STATE(413)] = 5103,
  [SMALL_STATE(414)] = 5113,
  [SMALL_STATE(415)] = 5123,
  [SMALL_STATE(416)] = 5133,
  [SMALL_STATE(417)] = 5141,
  [SMALL_STATE(418)] = 5151,
  [SMALL_STATE(419)] = 5161,
  [SMALL_STATE(420)] = 5171,
  [SMALL_STATE(421)] = 5181,
  [SMALL_STATE(422)] = 5191,
  [SMALL_STATE(423)] = 5199,
  [SMALL_STATE(424)] = 5209,
  [SMALL_STATE(425)] = 5219,
  [SMALL_STATE(426)] = 5225,
  [SMALL_STATE(427)] = 5233,
  [SMALL_STATE(428)] = 5243,
  [SMALL_STATE(429)] = 5253,
  [SMALL_STATE(430)] = 5261,
  [SMALL_STATE(431)] = 5269,
  [SMALL_STATE(432)] = 5277,
  [SMALL_STATE(433)] = 5287,
  [SMALL_STATE(434)] = 5297,
  [SMALL_STATE(435)] = 5307,
  [SMALL_STATE(436)] = 5313,
  [SMALL_STATE(437)] = 5323,
  [SMALL_STATE(438)] = 5333,
  [SMALL_STATE(439)] = 5343,
  [SMALL_STATE(440)] = 5349,
  [SMALL_STATE(441)] = 5355,
  [SMALL_STATE(442)] = 5365,
  [SMALL_STATE(443)] = 5375,
  [SMALL_STATE(444)] = 5385,
  [SMALL_STATE(445)] = 5391,
  [SMALL_STATE(446)] = 5397,
  [SMALL_STATE(447)] = 5407,
  [SMALL_STATE(448)] = 5417,
  [SMALL_STATE(449)] = 5425,
  [SMALL_STATE(450)] = 5433,
  [SMALL_STATE(451)] = 5443,
  [SMALL_STATE(452)] = 5453,
  [SMALL_STATE(453)] = 5459,
  [SMALL_STATE(454)] = 5469,
  [SMALL_STATE(455)] = 5479,
  [SMALL_STATE(456)] = 5489,
  [SMALL_STATE(457)] = 5499,
  [SMALL_STATE(458)] = 5509,
  [SMALL_STATE(459)] = 5519,
  [SMALL_STATE(460)] = 5527,
  [SMALL_STATE(461)] = 5537,
  [SMALL_STATE(462)] = 5547,
  [SMALL_STATE(463)] = 5557,
  [SMALL_STATE(464)] = 5567,
  [SMALL_STATE(465)] = 5577,
  [SMALL_STATE(466)] = 5587,
  [SMALL_STATE(467)] = 5597,
  [SMALL_STATE(468)] = 5607,
  [SMALL_STATE(469)] = 5615,
  [SMALL_STATE(470)] = 5625,
  [SMALL_STATE(471)] = 5635,
  [SMALL_STATE(472)] = 5645,
  [SMALL_STATE(473)] = 5653,
  [SMALL_STATE(474)] = 5661,
  [SMALL_STATE(475)] = 5671,
  [SMALL_STATE(476)] = 5679,
  [SMALL_STATE(477)] = 5689,
  [SMALL_STATE(478)] = 5699,
  [SMALL_STATE(479)] = 5709,
  [SMALL_STATE(480)] = 5719,
  [SMALL_STATE(481)] = 5729,
  [SMALL_STATE(482)] = 5739,
  [SMALL_STATE(483)] = 5749,
  [SMALL_STATE(484)] = 5759,
  [SMALL_STATE(485)] = 5769,
  [SMALL_STATE(486)] = 5779,
  [SMALL_STATE(487)] = 5789,
  [SMALL_STATE(488)] = 5799,
  [SMALL_STATE(489)] = 5809,
  [SMALL_STATE(490)] = 5819,
  [SMALL_STATE(491)] = 5829,
  [SMALL_STATE(492)] = 5839,
  [SMALL_STATE(493)] = 5849,
  [SMALL_STATE(494)] = 5859,
  [SMALL_STATE(495)] = 5869,
  [SMALL_STATE(496)] = 5879,
  [SMALL_STATE(497)] = 5889,
  [SMALL_STATE(498)] = 5899,
  [SMALL_STATE(499)] = 5909,
  [SMALL_STATE(500)] = 5919,
  [SMALL_STATE(501)] = 5927,
  [SMALL_STATE(502)] = 5935,
  [SMALL_STATE(503)] = 5943,
  [SMALL_STATE(504)] = 5948,
  [SMALL_STATE(505)] = 5955,
  [SMALL_STATE(506)] = 5960,
  [SMALL_STATE(507)] = 5965,
  [SMALL_STATE(508)] = 5970,
  [SMALL_STATE(509)] = 5975,
  [SMALL_STATE(510)] = 5980,
  [SMALL_STATE(511)] = 5985,
  [SMALL_STATE(512)] = 5990,
  [SMALL_STATE(513)] = 5995,
  [SMALL_STATE(514)] = 6002,
  [SMALL_STATE(515)] = 6009,
  [SMALL_STATE(516)] = 6014,
  [SMALL_STATE(517)] = 6021,
  [SMALL_STATE(518)] = 6028,
  [SMALL_STATE(519)] = 6033,
  [SMALL_STATE(520)] = 6038,
  [SMALL_STATE(521)] = 6043,
  [SMALL_STATE(522)] = 6048,
  [SMALL_STATE(523)] = 6053,
  [SMALL_STATE(524)] = 6058,
  [SMALL_STATE(525)] = 6063,
  [SMALL_STATE(526)] = 6068,
  [SMALL_STATE(527)] = 6073,
  [SMALL_STATE(528)] = 6078,
  [SMALL_STATE(529)] = 6083,
  [SMALL_STATE(530)] = 6088,
  [SMALL_STATE(531)] = 6093,
  [SMALL_STATE(532)] = 6098,
  [SMALL_STATE(533)] = 6103,
  [SMALL_STATE(534)] = 6108,
  [SMALL_STATE(535)] = 6113,
  [SMALL_STATE(536)] = 6118,
  [SMALL_STATE(537)] = 6123,
  [SMALL_STATE(538)] = 6128,
  [SMALL_STATE(539)] = 6133,
  [SMALL_STATE(540)] = 6138,
  [SMALL_STATE(541)] = 6145,
  [SMALL_STATE(542)] = 6150,
  [SMALL_STATE(543)] = 6155,
  [SMALL_STATE(544)] = 6160,
  [SMALL_STATE(545)] = 6165,
  [SMALL_STATE(546)] = 6170,
  [SMALL_STATE(547)] = 6175,
  [SMALL_STATE(548)] = 6180,
  [SMALL_STATE(549)] = 6185,
  [SMALL_STATE(550)] = 6190,
  [SMALL_STATE(551)] = 6195,
  [SMALL_STATE(552)] = 6200,
  [SMALL_STATE(553)] = 6207,
  [SMALL_STATE(554)] = 6214,
  [SMALL_STATE(555)] = 6219,
  [SMALL_STATE(556)] = 6224,
  [SMALL_STATE(557)] = 6229,
  [SMALL_STATE(558)] = 6234,
  [SMALL_STATE(559)] = 6239,
  [SMALL_STATE(560)] = 6244,
  [SMALL_STATE(561)] = 6249,
  [SMALL_STATE(562)] = 6254,
  [SMALL_STATE(563)] = 6259,
  [SMALL_STATE(564)] = 6264,
  [SMALL_STATE(565)] = 6269,
  [SMALL_STATE(566)] = 6274,
  [SMALL_STATE(567)] = 6279,
  [SMALL_STATE(568)] = 6284,
  [SMALL_STATE(569)] = 6289,
  [SMALL_STATE(570)] = 6294,
  [SMALL_STATE(571)] = 6299,
  [SMALL_STATE(572)] = 6304,
  [SMALL_STATE(573)] = 6309,
  [SMALL_STATE(574)] = 6314,
  [SMALL_STATE(575)] = 6319,
  [SMALL_STATE(576)] = 6324,
  [SMALL_STATE(577)] = 6329,
  [SMALL_STATE(578)] = 6334,
  [SMALL_STATE(579)] = 6339,
  [SMALL_STATE(580)] = 6344,
  [SMALL_STATE(581)] = 6351,
  [SMALL_STATE(582)] = 6356,
  [SMALL_STATE(583)] = 6361,
  [SMALL_STATE(584)] = 6366,
  [SMALL_STATE(585)] = 6371,
  [SMALL_STATE(586)] = 6376,
  [SMALL_STATE(587)] = 6381,
  [SMALL_STATE(588)] = 6388,
  [SMALL_STATE(589)] = 6393,
  [SMALL_STATE(590)] = 6398,
  [SMALL_STATE(591)] = 6403,
  [SMALL_STATE(592)] = 6408,
  [SMALL_STATE(593)] = 6415,
  [SMALL_STATE(594)] = 6420,
  [SMALL_STATE(595)] = 6425,
  [SMALL_STATE(596)] = 6430,
  [SMALL_STATE(597)] = 6435,
  [SMALL_STATE(598)] = 6440,
  [SMALL_STATE(599)] = 6445,
  [SMALL_STATE(600)] = 6450,
  [SMALL_STATE(601)] = 6457,
  [SMALL_STATE(602)] = 6462,
  [SMALL_STATE(603)] = 6467,
  [SMALL_STATE(604)] = 6472,
  [SMALL_STATE(605)] = 6477,
  [SMALL_STATE(606)] = 6484,
  [SMALL_STATE(607)] = 6489,
  [SMALL_STATE(608)] = 6494,
  [SMALL_STATE(609)] = 6499,
  [SMALL_STATE(610)] = 6504,
  [SMALL_STATE(611)] = 6509,
  [SMALL_STATE(612)] = 6514,
  [SMALL_STATE(613)] = 6519,
  [SMALL_STATE(614)] = 6524,
  [SMALL_STATE(615)] = 6531,
  [SMALL_STATE(616)] = 6536,
  [SMALL_STATE(617)] = 6541,
  [SMALL_STATE(618)] = 6548,
  [SMALL_STATE(619)] = 6553,
  [SMALL_STATE(620)] = 6558,
  [SMALL_STATE(621)] = 6563,
  [SMALL_STATE(622)] = 6568,
  [SMALL_STATE(623)] = 6573,
  [SMALL_STATE(624)] = 6578,
  [SMALL_STATE(625)] = 6583,
  [SMALL_STATE(626)] = 6588,
  [SMALL_STATE(627)] = 6593,
  [SMALL_STATE(628)] = 6598,
  [SMALL_STATE(629)] = 6603,
  [SMALL_STATE(630)] = 6608,
  [SMALL_STATE(631)] = 6613,
  [SMALL_STATE(632)] = 6618,
  [SMALL_STATE(633)] = 6623,
  [SMALL_STATE(634)] = 6628,
  [SMALL_STATE(635)] = 6633,
  [SMALL_STATE(636)] = 6638,
  [SMALL_STATE(637)] = 6643,
  [SMALL_STATE(638)] = 6648,
  [SMALL_STATE(639)] = 6653,
  [SMALL_STATE(640)] = 6658,
  [SMALL_STATE(641)] = 6663,
  [SMALL_STATE(642)] = 6668,
  [SMALL_STATE(643)] = 6673,
  [SMALL_STATE(644)] = 6680,
  [SMALL_STATE(645)] = 6685,
  [SMALL_STATE(646)] = 6690,
  [SMALL_STATE(647)] = 6695,
  [SMALL_STATE(648)] = 6700,
  [SMALL_STATE(649)] = 6705,
  [SMALL_STATE(650)] = 6710,
  [SMALL_STATE(651)] = 6715,
  [SMALL_STATE(652)] = 6720,
  [SMALL_STATE(653)] = 6727,
  [SMALL_STATE(654)] = 6732,
  [SMALL_STATE(655)] = 6737,
  [SMALL_STATE(656)] = 6742,
  [SMALL_STATE(657)] = 6747,
  [SMALL_STATE(658)] = 6752,
  [SMALL_STATE(659)] = 6757,
  [SMALL_STATE(660)] = 6762,
  [SMALL_STATE(661)] = 6767,
  [SMALL_STATE(662)] = 6772,
  [SMALL_STATE(663)] = 6777,
  [SMALL_STATE(664)] = 6782,
  [SMALL_STATE(665)] = 6787,
  [SMALL_STATE(666)] = 6794,
  [SMALL_STATE(667)] = 6799,
  [SMALL_STATE(668)] = 6806,
  [SMALL_STATE(669)] = 6811,
  [SMALL_STATE(670)] = 6816,
  [SMALL_STATE(671)] = 6823,
  [SMALL_STATE(672)] = 6828,
  [SMALL_STATE(673)] = 6835,
  [SMALL_STATE(674)] = 6842,
  [SMALL_STATE(675)] = 6847,
  [SMALL_STATE(676)] = 6854,
  [SMALL_STATE(677)] = 6859,
  [SMALL_STATE(678)] = 6866,
  [SMALL_STATE(679)] = 6871,
  [SMALL_STATE(680)] = 6876,
  [SMALL_STATE(681)] = 6881,
  [SMALL_STATE(682)] = 6888,
  [SMALL_STATE(683)] = 6895,
  [SMALL_STATE(684)] = 6900,
  [SMALL_STATE(685)] = 6905,
  [SMALL_STATE(686)] = 6912,
  [SMALL_STATE(687)] = 6917,
  [SMALL_STATE(688)] = 6922,
  [SMALL_STATE(689)] = 6927,
  [SMALL_STATE(690)] = 6932,
  [SMALL_STATE(691)] = 6937,
  [SMALL_STATE(692)] = 6944,
  [SMALL_STATE(693)] = 6951,
  [SMALL_STATE(694)] = 6958,
  [SMALL_STATE(695)] = 6965,
  [SMALL_STATE(696)] = 6970,
  [SMALL_STATE(697)] = 6975,
  [SMALL_STATE(698)] = 6980,
  [SMALL_STATE(699)] = 6985,
  [SMALL_STATE(700)] = 6990,
  [SMALL_STATE(701)] = 6995,
  [SMALL_STATE(702)] = 7000,
  [SMALL_STATE(703)] = 7005,
  [SMALL_STATE(704)] = 7010,
  [SMALL_STATE(705)] = 7015,
  [SMALL_STATE(706)] = 7020,
  [SMALL_STATE(707)] = 7025,
  [SMALL_STATE(708)] = 7030,
  [SMALL_STATE(709)] = 7035,
  [SMALL_STATE(710)] = 7040,
  [SMALL_STATE(711)] = 7045,
  [SMALL_STATE(712)] = 7050,
  [SMALL_STATE(713)] = 7055,
  [SMALL_STATE(714)] = 7060,
  [SMALL_STATE(715)] = 7065,
  [SMALL_STATE(716)] = 7070,
  [SMALL_STATE(717)] = 7075,
  [SMALL_STATE(718)] = 7080,
  [SMALL_STATE(719)] = 7085,
  [SMALL_STATE(720)] = 7090,
  [SMALL_STATE(721)] = 7095,
  [SMALL_STATE(722)] = 7100,
  [SMALL_STATE(723)] = 7105,
  [SMALL_STATE(724)] = 7110,
  [SMALL_STATE(725)] = 7115,
  [SMALL_STATE(726)] = 7120,
  [SMALL_STATE(727)] = 7125,
  [SMALL_STATE(728)] = 7130,
  [SMALL_STATE(729)] = 7137,
  [SMALL_STATE(730)] = 7142,
  [SMALL_STATE(731)] = 7147,
  [SMALL_STATE(732)] = 7152,
  [SMALL_STATE(733)] = 7157,
  [SMALL_STATE(734)] = 7162,
  [SMALL_STATE(735)] = 7167,
  [SMALL_STATE(736)] = 7172,
  [SMALL_STATE(737)] = 7177,
  [SMALL_STATE(738)] = 7182,
  [SMALL_STATE(739)] = 7187,
  [SMALL_STATE(740)] = 7192,
  [SMALL_STATE(741)] = 7197,
  [SMALL_STATE(742)] = 7202,
  [SMALL_STATE(743)] = 7207,
  [SMALL_STATE(744)] = 7212,
  [SMALL_STATE(745)] = 7217,
  [SMALL_STATE(746)] = 7222,
  [SMALL_STATE(747)] = 7227,
  [SMALL_STATE(748)] = 7232,
  [SMALL_STATE(749)] = 7237,
  [SMALL_STATE(750)] = 7242,
  [SMALL_STATE(751)] = 7247,
  [SMALL_STATE(752)] = 7252,
  [SMALL_STATE(753)] = 7257,
  [SMALL_STATE(754)] = 7262,
  [SMALL_STATE(755)] = 7267,
  [SMALL_STATE(756)] = 7272,
  [SMALL_STATE(757)] = 7277,
  [SMALL_STATE(758)] = 7282,
  [SMALL_STATE(759)] = 7289,
  [SMALL_STATE(760)] = 7294,
  [SMALL_STATE(761)] = 7299,
  [SMALL_STATE(762)] = 7304,
  [SMALL_STATE(763)] = 7309,
  [SMALL_STATE(764)] = 7314,
  [SMALL_STATE(765)] = 7319,
  [SMALL_STATE(766)] = 7324,
  [SMALL_STATE(767)] = 7329,
  [SMALL_STATE(768)] = 7334,
  [SMALL_STATE(769)] = 7339,
  [SMALL_STATE(770)] = 7344,
  [SMALL_STATE(771)] = 7349,
  [SMALL_STATE(772)] = 7354,
  [SMALL_STATE(773)] = 7359,
  [SMALL_STATE(774)] = 7364,
  [SMALL_STATE(775)] = 7369,
  [SMALL_STATE(776)] = 7374,
  [SMALL_STATE(777)] = 7379,
  [SMALL_STATE(778)] = 7384,
  [SMALL_STATE(779)] = 7389,
  [SMALL_STATE(780)] = 7396,
  [SMALL_STATE(781)] = 7401,
  [SMALL_STATE(782)] = 7406,
  [SMALL_STATE(783)] = 7411,
  [SMALL_STATE(784)] = 7416,
  [SMALL_STATE(785)] = 7421,
  [SMALL_STATE(786)] = 7426,
  [SMALL_STATE(787)] = 7431,
  [SMALL_STATE(788)] = 7436,
  [SMALL_STATE(789)] = 7440,
  [SMALL_STATE(790)] = 7444,
  [SMALL_STATE(791)] = 7448,
  [SMALL_STATE(792)] = 7452,
  [SMALL_STATE(793)] = 7456,
  [SMALL_STATE(794)] = 7460,
  [SMALL_STATE(795)] = 7464,
  [SMALL_STATE(796)] = 7468,
  [SMALL_STATE(797)] = 7472,
  [SMALL_STATE(798)] = 7476,
  [SMALL_STATE(799)] = 7480,
  [SMALL_STATE(800)] = 7484,
  [SMALL_STATE(801)] = 7488,
  [SMALL_STATE(802)] = 7492,
  [SMALL_STATE(803)] = 7496,
  [SMALL_STATE(804)] = 7500,
  [SMALL_STATE(805)] = 7504,
  [SMALL_STATE(806)] = 7508,
  [SMALL_STATE(807)] = 7512,
  [SMALL_STATE(808)] = 7516,
  [SMALL_STATE(809)] = 7520,
  [SMALL_STATE(810)] = 7524,
  [SMALL_STATE(811)] = 7528,
  [SMALL_STATE(812)] = 7532,
  [SMALL_STATE(813)] = 7536,
  [SMALL_STATE(814)] = 7540,
  [SMALL_STATE(815)] = 7544,
  [SMALL_STATE(816)] = 7548,
  [SMALL_STATE(817)] = 7552,
  [SMALL_STATE(818)] = 7556,
  [SMALL_STATE(819)] = 7560,
  [SMALL_STATE(820)] = 7564,
  [SMALL_STATE(821)] = 7568,
  [SMALL_STATE(822)] = 7572,
  [SMALL_STATE(823)] = 7576,
  [SMALL_STATE(824)] = 7580,
  [SMALL_STATE(825)] = 7584,
  [SMALL_STATE(826)] = 7588,
  [SMALL_STATE(827)] = 7592,
  [SMALL_STATE(828)] = 7596,
  [SMALL_STATE(829)] = 7600,
  [SMALL_STATE(830)] = 7604,
  [SMALL_STATE(831)] = 7608,
  [SMALL_STATE(832)] = 7612,
  [SMALL_STATE(833)] = 7616,
  [SMALL_STATE(834)] = 7620,
  [SMALL_STATE(835)] = 7624,
  [SMALL_STATE(836)] = 7628,
  [SMALL_STATE(837)] = 7632,
  [SMALL_STATE(838)] = 7636,
  [SMALL_STATE(839)] = 7640,
  [SMALL_STATE(840)] = 7644,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(497),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(494),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(491),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(490),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(486),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(480),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(477),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(469),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(464),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(461),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(451),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(434),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(424),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(419),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(418),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(417),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(415),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(413),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(403),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(400),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(398),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(396),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(379),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(364),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(360),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(348),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(347),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(341),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(331),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(795),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 4, 0, 16),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 4, 0, 16),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 5, 0, 16),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 5, 0, 16),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 6, 0, 16),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 6, 0, 16),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(497),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(494),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(491),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(490),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(486),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(480),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(477),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(469),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(464),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(461),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(451),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(434),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(424),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(419),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(418),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(417),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(415),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(413),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(403),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(400),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(398),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(396),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(379),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(364),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(360),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(348),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(347),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(341),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(331),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [801] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [813] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [825] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(614),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, 0, 37),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, 0, 37),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, 0, 35),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, 0, 35),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, 0, 75),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 8, 0, 75),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 7, 0, 16),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 7, 0, 16),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4, 0, 0),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 4, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, 0, 35),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, 0, 35),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3, 0, 0),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 3, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, 0, 15),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, 0, 15),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, 0, 37),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, 0, 37),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, 0, 75),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, 0, 75),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, 0, 15),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 5, 0, 15),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [958] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2, 0, 0), SHIFT_REPEAT(805),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2, 0, 0),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, 0, 11),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2, 0, 0),
  [997] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2, 0, 0), SHIFT_REPEAT(126),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2, 0, 0), SHIFT_REPEAT(126),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2, 0, 0), SHIFT_REPEAT(839),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [1009] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0), SHIFT_REPEAT(837),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hosts_string, 1, 0, 21),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 1, 0, 21),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1045] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [1048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0), SHIFT_REPEAT(838),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__remote_command, 3, 0, 30),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_command, 3, 0, 30),
  [1068] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [1074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2, 0, 0), SHIFT_REPEAT(836),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2, 0, 0),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 1, 0, 11),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 1, 0, 21),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2, 0, 44),
  [1097] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__plain_string_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__plain_string_repeat1, 2, 0, 0),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2, 0, 0),
  [1124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 2, 0, 0), SHIFT_REPEAT(209),
  [1127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2, 0, 0), SHIFT_REPEAT(209),
  [1130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2, 0, 0), SHIFT_REPEAT(840),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1, 0, 0),
  [1137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0),
  [1142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, 0, 11),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 53),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 53),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__plain_string, 1, 0, 21),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2, 0, 44),
  [1169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1, 0, 0), REDUCE(aux_sym__plain_string_repeat1, 1, 0, 0),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__plain_string_repeat1, 1, 0, 0),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 1, 0, 0),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 1, 0, 21),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [1193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [1196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__plain_string_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 2, 0, 43),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0),
  [1205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(174),
  [1208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(174),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__plain_string_repeat1, 1, 0, 0),
  [1213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 1, 0, 0),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 1, 0, 0),
  [1217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2, 0, 0),
  [1222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [1225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [1228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2, 0, 0),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2, 0, 0),
  [1232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [1235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [1238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [1241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2, 0, 0),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(819),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1, 0, 0),
  [1254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1, 0, 0),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 1, 0, 32),
  [1270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [1273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2, 0, 0),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [1282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__proxy_string, 1, 0, 21),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 1, 0, 21),
  [1286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 3, 0, 47),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [1313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2, 0, 0),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2, 0, 0),
  [1320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__token_string, 1, 0, 21),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 1, 0, 21),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 1, 0, 29),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2, 0, 0),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(190),
  [1346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(190),
  [1349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 1, 0, 0),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 1, 0, 0),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 1, 0, 0),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 1, 0, 0),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 1, 0, 0),
  [1365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1, 0, 0),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2, 0, 0),
  [1371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 2, 0, 0), SHIFT_REPEAT(459),
  [1374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2, 0, 0), SHIFT_REPEAT(459),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2, 0, 0),
  [1381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 2, 0, 0), SHIFT_REPEAT(449),
  [1384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2, 0, 0), SHIFT_REPEAT(449),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(276),
  [1396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(276),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 1, 0, 0),
  [1401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 1, 0, 0),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__plain_string_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, 0, 37),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, 0, 73),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, 0, 72),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, 0, 37),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 2, 0, 11),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 4, 0, 71),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 4, 0, 37),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 4, 0, 37),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 5, 0, 49),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 3, 0, 69),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 3, 0, 15),
  [1456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_jump_repeat1, 2, 0, 68), SHIFT_REPEAT(132),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_jump_repeat1, 2, 0, 68),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1, 0, 0),
  [1463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1, 0, 0),
  [1465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2, 0, 0), SHIFT_REPEAT(812),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2, 0, 0),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, 0, 28),
  [1474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 1, 0, 0),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 1, 0, 0),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 3, 0, 15),
  [1482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2, 0, 0), SHIFT_REPEAT(814),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2, 0, 0),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 5, 0, 49),
  [1495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, 0, 63), SHIFT_REPEAT(166),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, 0, 63),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 4, 0, 37),
  [1504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1, 0, 0), REDUCE(aux_sym__string_repeat1, 1, 0, 0),
  [1507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1, 0, 0), REDUCE(aux_sym__string_repeat1, 1, 0, 0),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 3, 0, 15),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 3, 0, 24),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 4, 0, 40),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 1, 0, 0),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 1, 0, 0),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 3, 0, 15),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 4, 0, 37),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 4, 0, 37),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 4, 0, 42),
  [1536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 1, 0, 0),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 1, 0, 0),
  [1540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2, 0, 0), SHIFT_REPEAT(818),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2, 0, 0),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 3, 0, 15),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 4, 0, 37),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 3, 0, 15),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3, 0, 44),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 1, 0, 0),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 1, 0, 0),
  [1565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, 0, 15),
  [1567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2, 0, 0), SHIFT_REPEAT(793),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2, 0, 0),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 3, 0, 48),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, 0, 15),
  [1578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2, 0, 0), SHIFT_REPEAT(198),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2, 0, 0),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2, 0, 0),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, 0, 78),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, 0, 52),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 5, 0, 49),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, 0, 49),
  [1605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2, 0, 0), SHIFT_REPEAT(826),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2, 0, 0),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, 0, 49),
  [1612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2, 0, 0), SHIFT_REPEAT(824),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2, 0, 0),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 5, 0, 49),
  [1619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2, 0, 0), SHIFT_REPEAT(821),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2, 0, 0),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 1, 0, 12),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 1, 0, 12),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 5, 0, 49),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 5, 0, 81),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2, 0, 0),
  [1661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2, 0, 0), SHIFT_REPEAT(789),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6, 0, 0),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8, 0, 0),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, 0, 46), SHIFT_REPEAT(162),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, 0, 46),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, 0, 58), SHIFT_REPEAT(50),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, 0, 58),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value_inner, 3, 0, 56),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0),
  [1792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0), SHIFT_REPEAT(537),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, 0, 55),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2, 0, 0),
  [1799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2, 0, 0), SHIFT_REPEAT(247),
  [1802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, 0, 79),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, 0, 51), SHIFT_REPEAT(78),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, 0, 51),
  [1836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, 0, 46), SHIFT_REPEAT(112),
  [1839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, 0, 46),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, 0, 15),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [1852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, 0, 0),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, 0, 17),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2, 0, 0),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, 0, 46), SHIFT_REPEAT(79),
  [1913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, 0, 46),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward, 3, 0, 19),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 4, 0, 35),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 4, 0, 35),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 4, 0, 35),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [2001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 3, 0, 15),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [2013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [2017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [2027] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [2030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2, 0, 0),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [2048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [2052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [2066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 4, 0, 41),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 3, 0, 15),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [2074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [2088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [2092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [2096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [2108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [2112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [2118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [2122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [2126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [2132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [2140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [2144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [2146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, 0, 62),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [2152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [2164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [2166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 3, 0, 25),
  [2168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 4, 0, 37),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [2172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [2176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [2182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [2184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 1, 0, 26),
  [2186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 1, 0, 27),
  [2188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, 0, 66), SHIFT_REPEAT(124),
  [2191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, 0, 66),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [2201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_jump_repeat1, 2, 0, 67),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [2205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [2209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [2213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1, 0, 0),
  [2215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 1, 0, 0),
  [2217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 1, 0, 0),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [2227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 3, 0, 64),
  [2229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, 0, 46), SHIFT_REPEAT(118),
  [2232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, 0, 46),
  [2234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, 0, 46), SHIFT_REPEAT(600),
  [2237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, 0, 46),
  [2239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, 0, 46), SHIFT_REPEAT(58),
  [2242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, 0, 46),
  [2244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 4, 0, 35),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [2254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 1, 0, 0),
  [2256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 1, 0, 0),
  [2258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 3, 0, 15),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [2264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__plain_string_repeat1, 2, 0, 0), SHIFT_REPEAT(617),
  [2267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward, 4, 0, 38),
  [2269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [2271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [2277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 3, 0, 15),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4, 0, 0),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [2287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [2291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [2297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [2303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 3, 0, 15),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [2315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, 0, 36),
  [2317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 3, 0, 15),
  [2319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [2323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, 0, 35),
  [2325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [2327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [2333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [2335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, 0, 63),
  [2339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, 0, 63), SHIFT_REPEAT(185),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [2344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [2348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [2360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [2364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [2372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [2376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [2380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [2388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [2402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, 0, 20),
  [2404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2, 0, 33),
  [2406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2, 0, 34),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [2412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 1),
  [2414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xauth_location, 3, 0, 15),
  [2416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__visual_host_key, 3, 0, 15),
  [2418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_host_key_dns, 3, 0, 15),
  [2420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user, 3, 0, 15),
  [2422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use_keychain, 3, 0, 16),
  [2424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_host_keys, 3, 0, 15),
  [2426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel, 3, 0, 15),
  [2428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag, 3, 0, 15),
  [2430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tcp_keep_alive, 3, 0, 15),
  [2432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__syslog_facility, 3, 0, 15),
  [2434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strict_host_key_checking, 3, 0, 15),
  [2436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_unlink, 3, 0, 15),
  [2438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_mask, 3, 0, 15),
  [2440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 1, 0, 0),
  [2442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stdin_null, 3, 0, 15),
  [2444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__session_type, 3, 0, 15),
  [2446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_interval, 3, 0, 15),
  [2448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_value, 2, 0, 39),
  [2450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_count_max, 3, 0, 15),
  [2452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, 0, 15),
  [2454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, 0, 22),
  [2456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__revoked_host_keys, 3, 0, 15),
  [2458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_rsa_size, 3, 0, 15),
  [2460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_tty, 3, 0, 15),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 3, 0, 31),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [2468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 3, 0, 15),
  [2470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_authentication, 3, 0, 15),
  [2472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_use_fdpass, 3, 0, 15),
  [2474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 3, 0, 15),
  [2476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port, 3, 0, 15),
  [2478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pkcs11_provider, 3, 0, 15),
  [2480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 2),
  [2482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [2484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_local_command, 3, 0, 15),
  [2486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__password_authentication, 3, 0, 15),
  [2488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_of_password_prompts, 3, 0, 15),
  [2490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__no_host_authentication_for_localhost, 3, 0, 15),
  [2492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_level, 3, 0, 15),
  [2494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, 0, 23),
  [2496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, 0, 18),
  [2498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 3, 0, 15),
  [2500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_hosts_command, 3, 0, 15),
  [2502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, 0, 15),
  [2504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kbd_interactive_authentication, 3, 0, 15),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, 0, 15),
  [2510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include, 3, 0, 15),
  [2512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_file, 3, 0, 15),
  [2514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, 0, 22),
  [2516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, 0, 15),
  [2518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identities_only, 3, 0, 15),
  [2520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname, 3, 0, 15),
  [2522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_alias, 3, 0, 15),
  [2524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 2, 0, 0),
  [2526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_authentication, 3, 0, 15),
  [2528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_known_hosts, 3, 0, 15),
  [2530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_delegate_credentials, 3, 0, 15),
  [2532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_authentication, 3, 0, 15),
  [2534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_trusted, 3, 0, 15),
  [2536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_timeout, 3, 0, 15),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [2540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11, 3, 0, 15),
  [2542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, 0, 15),
  [2544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, 0, 22),
  [2546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fork_after_authentication, 3, 0, 15),
  [2548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fingerprint_hash, 3, 0, 15),
  [2550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exit_on_forward_failure, 3, 0, 15),
  [2552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_char, 3, 0, 15),
  [2554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_ssh_keysign, 3, 0, 15),
  [2556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_escape_command_line, 3, 0, 15),
  [2558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 1, 0, 20),
  [2560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, 0, 45),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 1, 0, 18),
  [2568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, 0, 15),
  [2570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, 0, 15),
  [2572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, 0, 15),
  [2574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 3, 0, 12),
  [2576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 3, 0, 12),
  [2578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, 0, 15),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, 0, 15),
  [2584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 3),
  [2586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, 0, 15),
  [2588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_host, 3, 0, 48),
  [2590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, 0, 15),
  [2592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_originalhost, 3, 0, 48),
  [2594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_tagged, 3, 0, 48),
  [2596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_user, 3, 0, 48),
  [2598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localuser, 3, 0, 48),
  [2600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, 0, 15),
  [2602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10, 0, 0),
  [2604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, 0, 16),
  [2606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, 0, 49),
  [2608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, 0, 15),
  [2610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, 0, 15),
  [2612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, 0, 45),
  [2614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, 0, 15),
  [2616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, 0, 50),
  [2618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, 0, 15),
  [2620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, 0, 15),
  [2622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, 0, 15),
  [2624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, 0, 15),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [2628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, 0, 15),
  [2630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 14),
  [2632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, 0, 44),
  [2634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 3, 0, 54),
  [2636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 13),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [2640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, 0, 57),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [2644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, 0, 45),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [2652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, 0, 79),
  [2654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [2656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [2658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 3, 0, 55),
  [2660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 3, 0, 55),
  [2662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, 0, 59),
  [2664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 3, 0, 54),
  [2666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 1, 0, 18),
  [2668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward, 5, 0, 60),
  [2670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 1, 0, 23),
  [2672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 5, 0, 61),
  [2674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 9),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [2678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [2680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, 0, 64),
  [2682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, 0, 65),
  [2684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 10),
  [2686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 5, 0, 59),
  [2688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 5, 0, 60),
  [2690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, 0, 45),
  [2692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env_value, 3, 0, 32),
  [2694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, 0, 45),
  [2696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 5, 0, 49),
  [2698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, 0, 45),
  [2700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, 0, 70),
  [2702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 4),
  [2704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [2706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 5),
  [2710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 4, 0, 44),
  [2712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 8),
  [2714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 7),
  [2716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, 0, 62),
  [2718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 6, 0, 74),
  [2720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 6),
  [2722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 6, 0, 82),
  [2724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 5, 0, 76),
  [2726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 5, 0, 77),
  [2728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 3, 0, 44),
  [2730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 3, 0, 54),
  [2732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, 0, 80),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [2740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [2776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [2780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [2782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [2788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [2790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [2792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [2798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [2806] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [2810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [2812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [2814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [2816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [2818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [2820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [2822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [2824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
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

TS_PUBLIC const TSLanguage *tree_sitter_ssh_config(void) {
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
