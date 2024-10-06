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
  [120] = 76,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 90,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 90,
  [133] = 76,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 91,
  [142] = 75,
  [143] = 83,
  [144] = 93,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 140,
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
  [175] = 134,
  [176] = 176,
  [177] = 140,
  [178] = 83,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 83,
  [183] = 136,
  [184] = 184,
  [185] = 83,
  [186] = 186,
  [187] = 134,
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
  [253] = 91,
  [254] = 179,
  [255] = 255,
  [256] = 75,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 179,
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
  [273] = 83,
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
  [323] = 91,
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
  [375] = 75,
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
  [393] = 275,
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
  [484] = 136,
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
  [617] = 617,
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
  [732] = 136,
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
  [829] = 821,
  [830] = 830,
  [831] = 821,
  [832] = 821,
  [833] = 821,
  [834] = 821,
  [835] = 794,
  [836] = 794,
  [837] = 794,
  [838] = 794,
  [839] = 794,
  [840] = 840,
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
  [48] = {.lex_state = 36},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 36},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 29},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 25},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 26},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 37},
  [66] = {.lex_state = 29},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 26},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 17},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 45},
  [80] = {.lex_state = 38},
  [81] = {.lex_state = 30},
  [82] = {.lex_state = 28},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 30},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 35},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 17},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 38},
  [94] = {.lex_state = 38},
  [95] = {.lex_state = 29},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 38},
  [99] = {.lex_state = 43},
  [100] = {.lex_state = 38},
  [101] = {.lex_state = 47},
  [102] = {.lex_state = 43},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 529},
  [105] = {.lex_state = 529},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 46},
  [111] = {.lex_state = 30},
  [112] = {.lex_state = 38},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 33},
  [117] = {.lex_state = 38},
  [118] = {.lex_state = 38},
  [119] = {.lex_state = 38},
  [120] = {.lex_state = 15},
  [121] = {.lex_state = 38},
  [122] = {.lex_state = 38},
  [123] = {.lex_state = 38},
  [124] = {.lex_state = 15},
  [125] = {.lex_state = 38},
  [126] = {.lex_state = 38},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 38},
  [129] = {.lex_state = 38},
  [130] = {.lex_state = 38},
  [131] = {.lex_state = 35},
  [132] = {.lex_state = 49},
  [133] = {.lex_state = 49},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 17},
  [137] = {.lex_state = 38},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 35},
  [141] = {.lex_state = 18},
  [142] = {.lex_state = 18},
  [143] = {.lex_state = 29},
  [144] = {.lex_state = 38},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 39},
  [149] = {.lex_state = 31},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 41},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 39},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 1859},
  [156] = {.lex_state = 41},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 41},
  [160] = {.lex_state = 41},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 34},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 39},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 41},
  [168] = {.lex_state = 41},
  [169] = {.lex_state = 32},
  [170] = {.lex_state = 1859},
  [171] = {.lex_state = 50},
  [172] = {.lex_state = 41},
  [173] = {.lex_state = 32},
  [174] = {.lex_state = 34},
  [175] = {.lex_state = 49},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 50},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 35},
  [180] = {.lex_state = 41},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 18},
  [184] = {.lex_state = 39},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 50},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 1859},
  [189] = {.lex_state = 1859},
  [190] = {.lex_state = 1859},
  [191] = {.lex_state = 1859},
  [192] = {.lex_state = 1859},
  [193] = {.lex_state = 1859},
  [194] = {.lex_state = 1859},
  [195] = {.lex_state = 1859},
  [196] = {.lex_state = 1859},
  [197] = {.lex_state = 1859},
  [198] = {.lex_state = 1859},
  [199] = {.lex_state = 1859},
  [200] = {.lex_state = 16},
  [201] = {.lex_state = 1859},
  [202] = {.lex_state = 1859},
  [203] = {.lex_state = 1859},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 39},
  [206] = {.lex_state = 1859},
  [207] = {.lex_state = 12},
  [208] = {.lex_state = 1859},
  [209] = {.lex_state = 1859},
  [210] = {.lex_state = 1859},
  [211] = {.lex_state = 1859},
  [212] = {.lex_state = 1859},
  [213] = {.lex_state = 1859},
  [214] = {.lex_state = 1859},
  [215] = {.lex_state = 1859},
  [216] = {.lex_state = 1859},
  [217] = {.lex_state = 39},
  [218] = {.lex_state = 1859},
  [219] = {.lex_state = 1859},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 1859},
  [223] = {.lex_state = 1859},
  [224] = {.lex_state = 48},
  [225] = {.lex_state = 1859},
  [226] = {.lex_state = 1859},
  [227] = {.lex_state = 1859},
  [228] = {.lex_state = 15},
  [229] = {.lex_state = 1859},
  [230] = {.lex_state = 1859},
  [231] = {.lex_state = 1859},
  [232] = {.lex_state = 1859},
  [233] = {.lex_state = 1859},
  [234] = {.lex_state = 1859},
  [235] = {.lex_state = 1859},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 1859},
  [238] = {.lex_state = 1859},
  [239] = {.lex_state = 1859},
  [240] = {.lex_state = 1859},
  [241] = {.lex_state = 1859},
  [242] = {.lex_state = 1859},
  [243] = {.lex_state = 39},
  [244] = {.lex_state = 1859},
  [245] = {.lex_state = 1859},
  [246] = {.lex_state = 1859},
  [247] = {.lex_state = 1859},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 34},
  [250] = {.lex_state = 14},
  [251] = {.lex_state = 1859},
  [252] = {.lex_state = 30},
  [253] = {.lex_state = 20},
  [254] = {.lex_state = 50},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 20},
  [257] = {.lex_state = 32},
  [258] = {.lex_state = 1859},
  [259] = {.lex_state = 1859},
  [260] = {.lex_state = 39},
  [261] = {.lex_state = 1859},
  [262] = {.lex_state = 1859},
  [263] = {.lex_state = 1859},
  [264] = {.lex_state = 1859},
  [265] = {.lex_state = 39},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 1859},
  [268] = {.lex_state = 1859},
  [269] = {.lex_state = 30},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 16},
  [272] = {.lex_state = 1859},
  [273] = {.lex_state = 30},
  [274] = {.lex_state = 1859},
  [275] = {.lex_state = 1859},
  [276] = {.lex_state = 1859},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 1859},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 1859},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 1859},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 2},
  [301] = {.lex_state = 2},
  [302] = {.lex_state = 2},
  [303] = {.lex_state = 2},
  [304] = {.lex_state = 2},
  [305] = {.lex_state = 2},
  [306] = {.lex_state = 2},
  [307] = {.lex_state = 2},
  [308] = {.lex_state = 2},
  [309] = {.lex_state = 2},
  [310] = {.lex_state = 1859},
  [311] = {.lex_state = 2},
  [312] = {.lex_state = 1859},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 1859},
  [315] = {.lex_state = 1859},
  [316] = {.lex_state = 2},
  [317] = {.lex_state = 2},
  [318] = {.lex_state = 2},
  [319] = {.lex_state = 2},
  [320] = {.lex_state = 2},
  [321] = {.lex_state = 2},
  [322] = {.lex_state = 1859},
  [323] = {.lex_state = 233},
  [324] = {.lex_state = 1859},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 2},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 2},
  [329] = {.lex_state = 2},
  [330] = {.lex_state = 2},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 2},
  [333] = {.lex_state = 1859},
  [334] = {.lex_state = 2},
  [335] = {.lex_state = 2},
  [336] = {.lex_state = 2},
  [337] = {.lex_state = 2},
  [338] = {.lex_state = 2},
  [339] = {.lex_state = 2},
  [340] = {.lex_state = 2},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 2},
  [343] = {.lex_state = 2},
  [344] = {.lex_state = 2},
  [345] = {.lex_state = 1859},
  [346] = {.lex_state = 2},
  [347] = {.lex_state = 2},
  [348] = {.lex_state = 2},
  [349] = {.lex_state = 1859},
  [350] = {.lex_state = 1859},
  [351] = {.lex_state = 2},
  [352] = {.lex_state = 2},
  [353] = {.lex_state = 2},
  [354] = {.lex_state = 19},
  [355] = {.lex_state = 2},
  [356] = {.lex_state = 2},
  [357] = {.lex_state = 2},
  [358] = {.lex_state = 1859},
  [359] = {.lex_state = 2},
  [360] = {.lex_state = 1859},
  [361] = {.lex_state = 1859},
  [362] = {.lex_state = 1859},
  [363] = {.lex_state = 1859},
  [364] = {.lex_state = 1859},
  [365] = {.lex_state = 1859},
  [366] = {.lex_state = 1859},
  [367] = {.lex_state = 1859},
  [368] = {.lex_state = 1859},
  [369] = {.lex_state = 1859},
  [370] = {.lex_state = 1859},
  [371] = {.lex_state = 1859},
  [372] = {.lex_state = 1859},
  [373] = {.lex_state = 42},
  [374] = {.lex_state = 1859},
  [375] = {.lex_state = 233},
  [376] = {.lex_state = 1859},
  [377] = {.lex_state = 34},
  [378] = {.lex_state = 1859},
  [379] = {.lex_state = 1859},
  [380] = {.lex_state = 1859},
  [381] = {.lex_state = 1859},
  [382] = {.lex_state = 20},
  [383] = {.lex_state = 1859},
  [384] = {.lex_state = 1859},
  [385] = {.lex_state = 1859},
  [386] = {.lex_state = 1859},
  [387] = {.lex_state = 1859},
  [388] = {.lex_state = 1859},
  [389] = {.lex_state = 1859},
  [390] = {.lex_state = 16},
  [391] = {.lex_state = 1859},
  [392] = {.lex_state = 1859},
  [393] = {.lex_state = 1859},
  [394] = {.lex_state = 1859},
  [395] = {.lex_state = 1859},
  [396] = {.lex_state = 1859},
  [397] = {.lex_state = 42},
  [398] = {.lex_state = 1859},
  [399] = {.lex_state = 1859},
  [400] = {.lex_state = 1859},
  [401] = {.lex_state = 2},
  [402] = {.lex_state = 2},
  [403] = {.lex_state = 2},
  [404] = {.lex_state = 2},
  [405] = {.lex_state = 1859},
  [406] = {.lex_state = 2},
  [407] = {.lex_state = 1859},
  [408] = {.lex_state = 1859},
  [409] = {.lex_state = 2},
  [410] = {.lex_state = 2},
  [411] = {.lex_state = 1859},
  [412] = {.lex_state = 2},
  [413] = {.lex_state = 1859},
  [414] = {.lex_state = 2},
  [415] = {.lex_state = 2},
  [416] = {.lex_state = 2},
  [417] = {.lex_state = 1859},
  [418] = {.lex_state = 1859},
  [419] = {.lex_state = 1859},
  [420] = {.lex_state = 1859},
  [421] = {.lex_state = 2},
  [422] = {.lex_state = 1859},
  [423] = {.lex_state = 2},
  [424] = {.lex_state = 1859},
  [425] = {.lex_state = 2},
  [426] = {.lex_state = 2},
  [427] = {.lex_state = 1859},
  [428] = {.lex_state = 1859},
  [429] = {.lex_state = 1859},
  [430] = {.lex_state = 2},
  [431] = {.lex_state = 2},
  [432] = {.lex_state = 2},
  [433] = {.lex_state = 2},
  [434] = {.lex_state = 2},
  [435] = {.lex_state = 2},
  [436] = {.lex_state = 2},
  [437] = {.lex_state = 2},
  [438] = {.lex_state = 32},
  [439] = {.lex_state = 2},
  [440] = {.lex_state = 1859},
  [441] = {.lex_state = 2},
  [442] = {.lex_state = 2},
  [443] = {.lex_state = 2},
  [444] = {.lex_state = 2},
  [445] = {.lex_state = 2},
  [446] = {.lex_state = 1859},
  [447] = {.lex_state = 1859},
  [448] = {.lex_state = 1859},
  [449] = {.lex_state = 2},
  [450] = {.lex_state = 2},
  [451] = {.lex_state = 1859},
  [452] = {.lex_state = 2},
  [453] = {.lex_state = 1859},
  [454] = {.lex_state = 2},
  [455] = {.lex_state = 2},
  [456] = {.lex_state = 2},
  [457] = {.lex_state = 2},
  [458] = {.lex_state = 2},
  [459] = {.lex_state = 2},
  [460] = {.lex_state = 1859},
  [461] = {.lex_state = 1859},
  [462] = {.lex_state = 2},
  [463] = {.lex_state = 2},
  [464] = {.lex_state = 1859},
  [465] = {.lex_state = 2},
  [466] = {.lex_state = 2},
  [467] = {.lex_state = 2},
  [468] = {.lex_state = 16},
  [469] = {.lex_state = 2},
  [470] = {.lex_state = 1859},
  [471] = {.lex_state = 1859},
  [472] = {.lex_state = 1859},
  [473] = {.lex_state = 2},
  [474] = {.lex_state = 2},
  [475] = {.lex_state = 1859},
  [476] = {.lex_state = 2},
  [477] = {.lex_state = 1859},
  [478] = {.lex_state = 1859},
  [479] = {.lex_state = 1859},
  [480] = {.lex_state = 1859},
  [481] = {.lex_state = 2},
  [482] = {.lex_state = 2},
  [483] = {.lex_state = 2},
  [484] = {.lex_state = 20},
  [485] = {.lex_state = 2},
  [486] = {.lex_state = 2},
  [487] = {.lex_state = 2},
  [488] = {.lex_state = 2},
  [489] = {.lex_state = 2},
  [490] = {.lex_state = 2},
  [491] = {.lex_state = 2},
  [492] = {.lex_state = 2},
  [493] = {.lex_state = 2},
  [494] = {.lex_state = 2},
  [495] = {.lex_state = 2},
  [496] = {.lex_state = 2},
  [497] = {.lex_state = 1859},
  [498] = {.lex_state = 2},
  [499] = {.lex_state = 2},
  [500] = {.lex_state = 2},
  [501] = {.lex_state = 2},
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
  [524] = {.lex_state = 42},
  [525] = {.lex_state = 1859},
  [526] = {.lex_state = 1859},
  [527] = {.lex_state = 1859},
  [528] = {.lex_state = 1859},
  [529] = {.lex_state = 1859},
  [530] = {.lex_state = 1859},
  [531] = {.lex_state = 1859},
  [532] = {.lex_state = 42},
  [533] = {.lex_state = 1859},
  [534] = {.lex_state = 1859},
  [535] = {.lex_state = 1859},
  [536] = {.lex_state = 1859},
  [537] = {.lex_state = 1859},
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
  [563] = {.lex_state = 1859},
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
  [586] = {.lex_state = 1855},
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
  [600] = {.lex_state = 1859},
  [601] = {.lex_state = 1859},
  [602] = {.lex_state = 1859},
  [603] = {.lex_state = 1859},
  [604] = {.lex_state = 1859},
  [605] = {.lex_state = 1859},
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
  [617] = {.lex_state = 1859},
  [618] = {.lex_state = 1859},
  [619] = {.lex_state = 1859},
  [620] = {.lex_state = 1859},
  [621] = {.lex_state = 1859},
  [622] = {.lex_state = 1859},
  [623] = {.lex_state = 1859},
  [624] = {.lex_state = 1859},
  [625] = {.lex_state = 1859},
  [626] = {.lex_state = 1859},
  [627] = {.lex_state = 16},
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
  [643] = {.lex_state = 1859},
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
  [666] = {.lex_state = 1855},
  [667] = {.lex_state = 1859},
  [668] = {.lex_state = 1859},
  [669] = {.lex_state = 1859},
  [670] = {.lex_state = 1859},
  [671] = {.lex_state = 1859},
  [672] = {.lex_state = 1859},
  [673] = {.lex_state = 1859},
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
  [691] = {.lex_state = 1859},
  [692] = {.lex_state = 51},
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
  [707] = {.lex_state = 293},
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
  [732] = {.lex_state = 233},
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
  [743] = {.lex_state = 16},
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
  [761] = {.lex_state = 16},
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
  [779] = {.lex_state = 1859},
  [780] = {.lex_state = 1859},
  [781] = {.lex_state = 1859},
  [782] = {.lex_state = 1859},
  [783] = {.lex_state = 1859},
  [784] = {.lex_state = 1859},
  [785] = {.lex_state = 1859},
  [786] = {.lex_state = 44},
  [787] = {.lex_state = 1859},
  [788] = {.lex_state = 16},
  [789] = {.lex_state = 1859},
  [790] = {.lex_state = 1859},
  [791] = {.lex_state = 1859},
  [792] = {.lex_state = 1859},
  [793] = {.lex_state = 1859},
  [794] = {.lex_state = 1855},
  [795] = {.lex_state = 19},
  [796] = {.lex_state = 2},
  [797] = {.lex_state = 1859},
  [798] = {.lex_state = 1859},
  [799] = {.lex_state = 16},
  [800] = {.lex_state = 1859},
  [801] = {.lex_state = 1859},
  [802] = {.lex_state = 16},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 1859},
  [805] = {.lex_state = 1859},
  [806] = {.lex_state = 16},
  [807] = {.lex_state = 1859},
  [808] = {.lex_state = 1855},
  [809] = {.lex_state = 1858},
  [810] = {.lex_state = 1859},
  [811] = {.lex_state = 1859},
  [812] = {.lex_state = 16},
  [813] = {.lex_state = 442},
  [814] = {.lex_state = 1859},
  [815] = {.lex_state = 1859},
  [816] = {.lex_state = 1859},
  [817] = {.lex_state = 442},
  [818] = {.lex_state = 1859},
  [819] = {.lex_state = 1859},
  [820] = {.lex_state = 1858},
  [821] = {.lex_state = 1859},
  [822] = {.lex_state = 16},
  [823] = {.lex_state = 2},
  [824] = {.lex_state = 16},
  [825] = {.lex_state = 1859},
  [826] = {.lex_state = 1859},
  [827] = {.lex_state = 1859},
  [828] = {.lex_state = 1859},
  [829] = {.lex_state = 1859},
  [830] = {.lex_state = 1859},
  [831] = {.lex_state = 1859},
  [832] = {.lex_state = 1859},
  [833] = {.lex_state = 1859},
  [834] = {.lex_state = 1859},
  [835] = {.lex_state = 1855},
  [836] = {.lex_state = 1855},
  [837] = {.lex_state = 1855},
  [838] = {.lex_state = 1855},
  [839] = {.lex_state = 1855},
  [840] = {.lex_state = 1856},
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
    [sym_config] = STATE(803),
    [sym_host_declaration] = STATE(2),
    [sym_match_declaration] = STATE(2),
    [sym_parameter] = STATE(765),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym_config_repeat1] = STATE(2),
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
    [sym_host_declaration] = STATE(3),
    [sym_match_declaration] = STATE(3),
    [sym_parameter] = STATE(765),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(207),
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
    [sym__eol] = ACTIONS(209),
  },
  [3] = {
    [sym_host_declaration] = STATE(3),
    [sym_match_declaration] = STATE(3),
    [sym_parameter] = STATE(765),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_host_declaration_token1] = ACTIONS(213),
    [aux_sym_match_declaration_token1] = ACTIONS(216),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(219),
    [aux_sym__address_family_token1] = ACTIONS(222),
    [aux_sym__batch_mode_token1] = ACTIONS(225),
    [aux_sym__bind_address_token1] = ACTIONS(228),
    [aux_sym__bind_interface_token1] = ACTIONS(231),
    [aux_sym__canonical_domains_token1] = ACTIONS(234),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(237),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(240),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(243),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(246),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(249),
    [aux_sym__certificate_file_token1] = ACTIONS(252),
    [aux_sym__check_host_ip_token1] = ACTIONS(255),
    [aux_sym__ciphers_token1] = ACTIONS(258),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(261),
    [aux_sym__compression_token1] = ACTIONS(264),
    [aux_sym__connection_attempts_token1] = ACTIONS(267),
    [aux_sym__connect_timeout_token1] = ACTIONS(270),
    [aux_sym__control_master_token1] = ACTIONS(273),
    [aux_sym__control_persist_token1] = ACTIONS(276),
    [aux_sym__control_path_token1] = ACTIONS(279),
    [aux_sym__dynamic_forward_token1] = ACTIONS(282),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(285),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(288),
    [aux_sym__escape_char_token1] = ACTIONS(291),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(294),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(297),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(300),
    [aux_sym__forward_agent_token1] = ACTIONS(303),
    [aux_sym__forward_x11_token1] = ACTIONS(306),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(309),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(312),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(315),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(318),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(321),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(324),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(327),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(327),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(330),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(333),
    [aux_sym__host_key_alias_token1] = ACTIONS(336),
    [aux_sym__hostname_token1] = ACTIONS(339),
    [aux_sym__identities_only_token1] = ACTIONS(342),
    [aux_sym__identity_agent_token1] = ACTIONS(345),
    [aux_sym__identity_file_token1] = ACTIONS(348),
    [aux_sym__ignore_unknown_token1] = ACTIONS(351),
    [aux_sym__include_token1] = ACTIONS(354),
    [aux_sym__ipqos_token1] = ACTIONS(357),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(360),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(360),
    [aux_sym__kex_algorithms_token1] = ACTIONS(363),
    [aux_sym__known_hosts_command_token1] = ACTIONS(366),
    [aux_sym__local_command_token1] = ACTIONS(369),
    [aux_sym__local_forward_token1] = ACTIONS(372),
    [aux_sym__log_level_token1] = ACTIONS(375),
    [aux_sym__log_verbose_token1] = ACTIONS(378),
    [aux_sym__macs_token1] = ACTIONS(381),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(384),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(387),
    [aux_sym__password_authentication_token1] = ACTIONS(390),
    [aux_sym__permit_local_command_token1] = ACTIONS(393),
    [aux_sym__permit_remote_open_token1] = ACTIONS(396),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(399),
    [aux_sym__port_token1] = ACTIONS(402),
    [aux_sym__preferred_authentications_token1] = ACTIONS(405),
    [aux_sym__proxy_command_token1] = ACTIONS(408),
    [aux_sym__proxy_jump_token1] = ACTIONS(411),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(414),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(417),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(417),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(420),
    [aux_sym__rekey_limit_token1] = ACTIONS(423),
    [aux_sym__remote_command_token1] = ACTIONS(426),
    [aux_sym__remote_forward_token1] = ACTIONS(429),
    [aux_sym__request_tty_token1] = ACTIONS(432),
    [aux_sym__required_rsa_size_token1] = ACTIONS(435),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(438),
    [aux_sym__security_key_provider_token1] = ACTIONS(441),
    [aux_sym__send_env_token1] = ACTIONS(444),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(447),
    [aux_sym__server_alive_interval_token1] = ACTIONS(450),
    [aux_sym__session_type_token1] = ACTIONS(453),
    [aux_sym__set_env_token1] = ACTIONS(456),
    [aux_sym__stdin_null_token1] = ACTIONS(459),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(462),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(465),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(468),
    [aux_sym__syslog_facility_token1] = ACTIONS(471),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(474),
    [aux_sym__tag_token1] = ACTIONS(477),
    [aux_sym__tunnel_token1] = ACTIONS(480),
    [aux_sym__tunnel_device_token1] = ACTIONS(483),
    [aux_sym__update_host_keys_token1] = ACTIONS(486),
    [aux_sym__use_keychain_token1] = ACTIONS(489),
    [aux_sym__user_token1] = ACTIONS(492),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(495),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(498),
    [aux_sym__visual_host_key_token1] = ACTIONS(501),
    [aux_sym__xauth_location_token1] = ACTIONS(504),
    [sym_comment] = ACTIONS(507),
    [sym__space] = ACTIONS(510),
    [sym__eol] = ACTIONS(513),
  },
  [4] = {
    [sym__declarations] = STATE(20),
    [sym_parameter] = STATE(599),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym__declarations_repeat1] = STATE(8),
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
    [sym__declarations] = STATE(27),
    [sym_parameter] = STATE(599),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym__declarations_repeat1] = STATE(8),
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
    [sym__declarations] = STATE(32),
    [sym_parameter] = STATE(599),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym__declarations_repeat1] = STATE(8),
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
    [sym_parameter] = STATE(599),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym__declarations_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(532),
    [aux_sym_host_declaration_token1] = ACTIONS(534),
    [aux_sym_match_declaration_token1] = ACTIONS(532),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(536),
    [aux_sym__address_family_token1] = ACTIONS(539),
    [aux_sym__batch_mode_token1] = ACTIONS(542),
    [aux_sym__bind_address_token1] = ACTIONS(545),
    [aux_sym__bind_interface_token1] = ACTIONS(548),
    [aux_sym__canonical_domains_token1] = ACTIONS(551),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(554),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(557),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(560),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(563),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(566),
    [aux_sym__certificate_file_token1] = ACTIONS(569),
    [aux_sym__check_host_ip_token1] = ACTIONS(572),
    [aux_sym__ciphers_token1] = ACTIONS(575),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(578),
    [aux_sym__compression_token1] = ACTIONS(581),
    [aux_sym__connection_attempts_token1] = ACTIONS(584),
    [aux_sym__connect_timeout_token1] = ACTIONS(587),
    [aux_sym__control_master_token1] = ACTIONS(590),
    [aux_sym__control_persist_token1] = ACTIONS(593),
    [aux_sym__control_path_token1] = ACTIONS(596),
    [aux_sym__dynamic_forward_token1] = ACTIONS(599),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(602),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(605),
    [aux_sym__escape_char_token1] = ACTIONS(608),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(611),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(614),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(617),
    [aux_sym__forward_agent_token1] = ACTIONS(620),
    [aux_sym__forward_x11_token1] = ACTIONS(623),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(626),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(629),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(632),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(635),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(638),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(641),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(644),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(644),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(647),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(650),
    [aux_sym__host_key_alias_token1] = ACTIONS(653),
    [aux_sym__hostname_token1] = ACTIONS(656),
    [aux_sym__identities_only_token1] = ACTIONS(659),
    [aux_sym__identity_agent_token1] = ACTIONS(662),
    [aux_sym__identity_file_token1] = ACTIONS(665),
    [aux_sym__ignore_unknown_token1] = ACTIONS(668),
    [aux_sym__include_token1] = ACTIONS(671),
    [aux_sym__ipqos_token1] = ACTIONS(674),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(677),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(677),
    [aux_sym__kex_algorithms_token1] = ACTIONS(680),
    [aux_sym__known_hosts_command_token1] = ACTIONS(683),
    [aux_sym__local_command_token1] = ACTIONS(686),
    [aux_sym__local_forward_token1] = ACTIONS(689),
    [aux_sym__log_level_token1] = ACTIONS(692),
    [aux_sym__log_verbose_token1] = ACTIONS(695),
    [aux_sym__macs_token1] = ACTIONS(698),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(701),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(704),
    [aux_sym__password_authentication_token1] = ACTIONS(707),
    [aux_sym__permit_local_command_token1] = ACTIONS(710),
    [aux_sym__permit_remote_open_token1] = ACTIONS(713),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(716),
    [aux_sym__port_token1] = ACTIONS(719),
    [aux_sym__preferred_authentications_token1] = ACTIONS(722),
    [aux_sym__proxy_command_token1] = ACTIONS(725),
    [aux_sym__proxy_jump_token1] = ACTIONS(728),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(731),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(734),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(734),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(737),
    [aux_sym__rekey_limit_token1] = ACTIONS(740),
    [aux_sym__remote_command_token1] = ACTIONS(743),
    [aux_sym__remote_forward_token1] = ACTIONS(746),
    [aux_sym__request_tty_token1] = ACTIONS(749),
    [aux_sym__required_rsa_size_token1] = ACTIONS(752),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(755),
    [aux_sym__security_key_provider_token1] = ACTIONS(758),
    [aux_sym__send_env_token1] = ACTIONS(761),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(764),
    [aux_sym__server_alive_interval_token1] = ACTIONS(767),
    [aux_sym__session_type_token1] = ACTIONS(770),
    [aux_sym__set_env_token1] = ACTIONS(773),
    [aux_sym__stdin_null_token1] = ACTIONS(776),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(779),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(782),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(785),
    [aux_sym__syslog_facility_token1] = ACTIONS(788),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(791),
    [aux_sym__tag_token1] = ACTIONS(794),
    [aux_sym__tunnel_token1] = ACTIONS(797),
    [aux_sym__tunnel_device_token1] = ACTIONS(800),
    [aux_sym__update_host_keys_token1] = ACTIONS(803),
    [aux_sym__use_keychain_token1] = ACTIONS(806),
    [aux_sym__user_token1] = ACTIONS(809),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(812),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(815),
    [aux_sym__visual_host_key_token1] = ACTIONS(818),
    [aux_sym__xauth_location_token1] = ACTIONS(821),
    [sym_comment] = ACTIONS(824),
    [sym__space] = ACTIONS(827),
    [sym__eol] = ACTIONS(532),
  },
  [8] = {
    [sym_parameter] = STATE(599),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym__declarations_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(830),
    [aux_sym_host_declaration_token1] = ACTIONS(832),
    [aux_sym_match_declaration_token1] = ACTIONS(830),
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
    [sym__eol] = ACTIONS(830),
  },
  [9] = {
    [sym_host_declaration] = STATE(25),
    [sym_match_declaration] = STATE(25),
    [sym_parameter] = STATE(631),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
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
    [sym__declarations] = STATE(22),
    [sym_parameter] = STATE(599),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym__declarations_repeat1] = STATE(8),
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
    [sym__declarations] = STATE(23),
    [sym_parameter] = STATE(599),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym__declarations_repeat1] = STATE(8),
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
    [sym__declarations] = STATE(24),
    [sym_parameter] = STATE(599),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym__declarations_repeat1] = STATE(8),
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
    [sym__declarations] = STATE(26),
    [sym_parameter] = STATE(599),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym__declarations_repeat1] = STATE(8),
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
    [sym__declarations] = STATE(29),
    [sym_parameter] = STATE(599),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym__declarations_repeat1] = STATE(8),
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
    [sym__declarations] = STATE(31),
    [sym_parameter] = STATE(599),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym__declarations_repeat1] = STATE(8),
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
    [sym__declarations] = STATE(34),
    [sym_parameter] = STATE(599),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym__declarations_repeat1] = STATE(8),
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
    [sym__declarations] = STATE(33),
    [sym_parameter] = STATE(599),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
    [aux_sym__declarations_repeat1] = STATE(8),
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
    [sym_parameter] = STATE(701),
    [sym__add_keys_to_agent] = STATE(766),
    [sym__address_family] = STATE(767),
    [sym__batch_mode] = STATE(768),
    [sym__bind_address] = STATE(771),
    [sym__bind_interface] = STATE(785),
    [sym__canonical_domains] = STATE(504),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(506),
    [sym__canonicalize_max_dots] = STATE(507),
    [sym__canonicalize_permitted_cnames] = STATE(508),
    [sym__ca_signature_algorithms] = STATE(509),
    [sym__certificate_file] = STATE(510),
    [sym__check_host_ip] = STATE(518),
    [sym__ciphers] = STATE(520),
    [sym__clear_all_forwardings] = STATE(522),
    [sym__compression] = STATE(523),
    [sym__connection_attempts] = STATE(525),
    [sym__connect_timeout] = STATE(526),
    [sym__control_master] = STATE(527),
    [sym__control_persist] = STATE(528),
    [sym__control_path] = STATE(529),
    [sym__dynamic_forward] = STATE(530),
    [sym__enable_escape_command_line] = STATE(531),
    [sym__enable_ssh_keysign] = STATE(534),
    [sym__escape_char] = STATE(538),
    [sym__exit_on_forward_failure] = STATE(540),
    [sym__fingerprint_hash] = STATE(541),
    [sym__fork_after_authentication] = STATE(542),
    [sym__forward_agent] = STATE(543),
    [sym__forward_x11] = STATE(545),
    [sym__forward_x11_timeout] = STATE(546),
    [sym__forward_x11_trusted] = STATE(547),
    [sym__global_known_hosts_file] = STATE(548),
    [sym__gssapi_authentication] = STATE(549),
    [sym__gssapi_delegate_credentials] = STATE(550),
    [sym__hash_known_hosts] = STATE(552),
    [sym__hostbased_accepted_algorithms] = STATE(553),
    [sym__hostbased_authentication] = STATE(554),
    [sym__host_key_algorithms] = STATE(555),
    [sym__host_key_alias] = STATE(556),
    [sym__hostname] = STATE(557),
    [sym__identities_only] = STATE(558),
    [sym__identity_agent] = STATE(560),
    [sym__identity_file] = STATE(561),
    [sym__ignore_unknown] = STATE(562),
    [sym__include] = STATE(563),
    [sym__ipqos] = STATE(564),
    [sym__kbd_interactive_authentication] = STATE(565),
    [sym__kex_algorithms] = STATE(566),
    [sym__known_hosts_command] = STATE(568),
    [sym__local_command] = STATE(570),
    [sym__local_forward] = STATE(571),
    [sym__log_level] = STATE(572),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(576),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(580),
    [sym__password_authentication] = STATE(581),
    [sym__permit_local_command] = STATE(582),
    [sym__permit_remote_open] = STATE(583),
    [sym__pkcs11_provider] = STATE(584),
    [sym__port] = STATE(585),
    [sym__preferred_authentications] = STATE(589),
    [sym__proxy_command] = STATE(590),
    [sym__proxy_jump] = STATE(591),
    [sym__proxy_use_fdpass] = STATE(592),
    [sym__pubkey_accepted_algorithms] = STATE(594),
    [sym__pubkey_authentication] = STATE(595),
    [sym__rekey_limit] = STATE(596),
    [sym__remote_command] = STATE(597),
    [sym__remote_forward] = STATE(600),
    [sym__request_tty] = STATE(601),
    [sym__required_rsa_size] = STATE(602),
    [sym__revoked_host_keys] = STATE(603),
    [sym__security_key_provider] = STATE(604),
    [sym__send_env] = STATE(608),
    [sym__server_alive_count_max] = STATE(609),
    [sym__server_alive_interval] = STATE(610),
    [sym__session_type] = STATE(611),
    [sym__set_env] = STATE(612),
    [sym__stdin_null] = STATE(614),
    [sym__stream_local_bind_mask] = STATE(619),
    [sym__stream_local_bind_unlink] = STATE(621),
    [sym__strict_host_key_checking] = STATE(622),
    [sym__syslog_facility] = STATE(625),
    [sym__tcp_keep_alive] = STATE(632),
    [sym__tag] = STATE(633),
    [sym__tunnel] = STATE(634),
    [sym__tunnel_device] = STATE(636),
    [sym__update_host_keys] = STATE(638),
    [sym__use_keychain] = STATE(640),
    [sym__user] = STATE(641),
    [sym__user_known_hosts_file] = STATE(642),
    [sym__verify_host_key_dns] = STATE(644),
    [sym__visual_host_key] = STATE(653),
    [sym__xauth_location] = STATE(655),
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
  [21] = {
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
  [22] = {
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
  [23] = {
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
  [24] = {
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_host_declaration_token1] = ACTIONS(860),
    [aux_sym_match_declaration_token1] = ACTIONS(211),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(211),
    [aux_sym__address_family_token1] = ACTIONS(211),
    [aux_sym__batch_mode_token1] = ACTIONS(211),
    [aux_sym__bind_address_token1] = ACTIONS(211),
    [aux_sym__bind_interface_token1] = ACTIONS(211),
    [aux_sym__canonical_domains_token1] = ACTIONS(211),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(211),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(211),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(211),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(211),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(211),
    [aux_sym__certificate_file_token1] = ACTIONS(211),
    [aux_sym__check_host_ip_token1] = ACTIONS(211),
    [aux_sym__ciphers_token1] = ACTIONS(211),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(211),
    [aux_sym__compression_token1] = ACTIONS(211),
    [aux_sym__connection_attempts_token1] = ACTIONS(211),
    [aux_sym__connect_timeout_token1] = ACTIONS(211),
    [aux_sym__control_master_token1] = ACTIONS(211),
    [aux_sym__control_persist_token1] = ACTIONS(211),
    [aux_sym__control_path_token1] = ACTIONS(211),
    [aux_sym__dynamic_forward_token1] = ACTIONS(211),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(211),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(211),
    [aux_sym__escape_char_token1] = ACTIONS(211),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(211),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(211),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(211),
    [aux_sym__forward_agent_token1] = ACTIONS(211),
    [aux_sym__forward_x11_token1] = ACTIONS(860),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(211),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(211),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(211),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(211),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(211),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(211),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(211),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(211),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(211),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(211),
    [aux_sym__host_key_alias_token1] = ACTIONS(211),
    [aux_sym__hostname_token1] = ACTIONS(211),
    [aux_sym__identities_only_token1] = ACTIONS(211),
    [aux_sym__identity_agent_token1] = ACTIONS(211),
    [aux_sym__identity_file_token1] = ACTIONS(211),
    [aux_sym__ignore_unknown_token1] = ACTIONS(211),
    [aux_sym__include_token1] = ACTIONS(211),
    [aux_sym__ipqos_token1] = ACTIONS(211),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(211),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(211),
    [aux_sym__kex_algorithms_token1] = ACTIONS(211),
    [aux_sym__known_hosts_command_token1] = ACTIONS(211),
    [aux_sym__local_command_token1] = ACTIONS(211),
    [aux_sym__local_forward_token1] = ACTIONS(211),
    [aux_sym__log_level_token1] = ACTIONS(211),
    [aux_sym__log_verbose_token1] = ACTIONS(211),
    [aux_sym__macs_token1] = ACTIONS(211),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(211),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(211),
    [aux_sym__password_authentication_token1] = ACTIONS(211),
    [aux_sym__permit_local_command_token1] = ACTIONS(211),
    [aux_sym__permit_remote_open_token1] = ACTIONS(211),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(211),
    [aux_sym__port_token1] = ACTIONS(211),
    [aux_sym__preferred_authentications_token1] = ACTIONS(211),
    [aux_sym__proxy_command_token1] = ACTIONS(211),
    [aux_sym__proxy_jump_token1] = ACTIONS(211),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(211),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(211),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(211),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(211),
    [aux_sym__rekey_limit_token1] = ACTIONS(211),
    [aux_sym__remote_command_token1] = ACTIONS(211),
    [aux_sym__remote_forward_token1] = ACTIONS(211),
    [aux_sym__request_tty_token1] = ACTIONS(211),
    [aux_sym__required_rsa_size_token1] = ACTIONS(211),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(211),
    [aux_sym__security_key_provider_token1] = ACTIONS(211),
    [aux_sym__send_env_token1] = ACTIONS(211),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(211),
    [aux_sym__server_alive_interval_token1] = ACTIONS(211),
    [aux_sym__session_type_token1] = ACTIONS(211),
    [aux_sym__set_env_token1] = ACTIONS(211),
    [aux_sym__stdin_null_token1] = ACTIONS(211),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(211),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(211),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(211),
    [aux_sym__syslog_facility_token1] = ACTIONS(211),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(211),
    [aux_sym__tag_token1] = ACTIONS(211),
    [aux_sym__tunnel_token1] = ACTIONS(860),
    [aux_sym__tunnel_device_token1] = ACTIONS(211),
    [aux_sym__update_host_keys_token1] = ACTIONS(211),
    [aux_sym__use_keychain_token1] = ACTIONS(211),
    [aux_sym__user_token1] = ACTIONS(860),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(211),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(211),
    [aux_sym__visual_host_key_token1] = ACTIONS(211),
    [aux_sym__xauth_location_token1] = ACTIONS(211),
    [sym_comment] = ACTIONS(211),
    [sym__space] = ACTIONS(211),
    [sym__eol] = ACTIONS(211),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(862),
    [aux_sym_host_declaration_token1] = ACTIONS(864),
    [aux_sym_match_declaration_token1] = ACTIONS(862),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(862),
    [aux_sym__address_family_token1] = ACTIONS(862),
    [aux_sym__batch_mode_token1] = ACTIONS(862),
    [aux_sym__bind_address_token1] = ACTIONS(862),
    [aux_sym__bind_interface_token1] = ACTIONS(862),
    [aux_sym__canonical_domains_token1] = ACTIONS(862),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(862),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(862),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(862),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(862),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(862),
    [aux_sym__certificate_file_token1] = ACTIONS(862),
    [aux_sym__check_host_ip_token1] = ACTIONS(862),
    [aux_sym__ciphers_token1] = ACTIONS(862),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(862),
    [aux_sym__compression_token1] = ACTIONS(862),
    [aux_sym__connection_attempts_token1] = ACTIONS(862),
    [aux_sym__connect_timeout_token1] = ACTIONS(862),
    [aux_sym__control_master_token1] = ACTIONS(862),
    [aux_sym__control_persist_token1] = ACTIONS(862),
    [aux_sym__control_path_token1] = ACTIONS(862),
    [aux_sym__dynamic_forward_token1] = ACTIONS(862),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(862),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(862),
    [aux_sym__escape_char_token1] = ACTIONS(862),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(862),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(862),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(862),
    [aux_sym__forward_agent_token1] = ACTIONS(862),
    [aux_sym__forward_x11_token1] = ACTIONS(864),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(862),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(862),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(862),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(862),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(862),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(862),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(862),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(862),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(862),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(862),
    [aux_sym__host_key_alias_token1] = ACTIONS(862),
    [aux_sym__hostname_token1] = ACTIONS(862),
    [aux_sym__identities_only_token1] = ACTIONS(862),
    [aux_sym__identity_agent_token1] = ACTIONS(862),
    [aux_sym__identity_file_token1] = ACTIONS(862),
    [aux_sym__ignore_unknown_token1] = ACTIONS(862),
    [aux_sym__include_token1] = ACTIONS(862),
    [aux_sym__ipqos_token1] = ACTIONS(862),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(862),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(862),
    [aux_sym__kex_algorithms_token1] = ACTIONS(862),
    [aux_sym__known_hosts_command_token1] = ACTIONS(862),
    [aux_sym__local_command_token1] = ACTIONS(862),
    [aux_sym__local_forward_token1] = ACTIONS(862),
    [aux_sym__log_level_token1] = ACTIONS(862),
    [aux_sym__log_verbose_token1] = ACTIONS(862),
    [aux_sym__macs_token1] = ACTIONS(862),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(862),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(862),
    [aux_sym__password_authentication_token1] = ACTIONS(862),
    [aux_sym__permit_local_command_token1] = ACTIONS(862),
    [aux_sym__permit_remote_open_token1] = ACTIONS(862),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(862),
    [aux_sym__port_token1] = ACTIONS(862),
    [aux_sym__preferred_authentications_token1] = ACTIONS(862),
    [aux_sym__proxy_command_token1] = ACTIONS(862),
    [aux_sym__proxy_jump_token1] = ACTIONS(862),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(862),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(862),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(862),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(862),
    [aux_sym__rekey_limit_token1] = ACTIONS(862),
    [aux_sym__remote_command_token1] = ACTIONS(862),
    [aux_sym__remote_forward_token1] = ACTIONS(862),
    [aux_sym__request_tty_token1] = ACTIONS(862),
    [aux_sym__required_rsa_size_token1] = ACTIONS(862),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(862),
    [aux_sym__security_key_provider_token1] = ACTIONS(862),
    [aux_sym__send_env_token1] = ACTIONS(862),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(862),
    [aux_sym__server_alive_interval_token1] = ACTIONS(862),
    [aux_sym__session_type_token1] = ACTIONS(862),
    [aux_sym__set_env_token1] = ACTIONS(862),
    [aux_sym__stdin_null_token1] = ACTIONS(862),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(862),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(862),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(862),
    [aux_sym__syslog_facility_token1] = ACTIONS(862),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(862),
    [aux_sym__tag_token1] = ACTIONS(862),
    [aux_sym__tunnel_token1] = ACTIONS(864),
    [aux_sym__tunnel_device_token1] = ACTIONS(862),
    [aux_sym__update_host_keys_token1] = ACTIONS(862),
    [aux_sym__use_keychain_token1] = ACTIONS(862),
    [aux_sym__user_token1] = ACTIONS(864),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(862),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(862),
    [aux_sym__visual_host_key_token1] = ACTIONS(862),
    [aux_sym__xauth_location_token1] = ACTIONS(862),
    [sym_comment] = ACTIONS(862),
    [sym__space] = ACTIONS(862),
    [sym__eol] = ACTIONS(862),
  },
  [27] = {
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(532),
    [aux_sym_host_declaration_token1] = ACTIONS(534),
    [aux_sym_match_declaration_token1] = ACTIONS(532),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(532),
    [aux_sym__address_family_token1] = ACTIONS(532),
    [aux_sym__batch_mode_token1] = ACTIONS(532),
    [aux_sym__bind_address_token1] = ACTIONS(532),
    [aux_sym__bind_interface_token1] = ACTIONS(532),
    [aux_sym__canonical_domains_token1] = ACTIONS(532),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(532),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(532),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(532),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(532),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(532),
    [aux_sym__certificate_file_token1] = ACTIONS(532),
    [aux_sym__check_host_ip_token1] = ACTIONS(532),
    [aux_sym__ciphers_token1] = ACTIONS(532),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(532),
    [aux_sym__compression_token1] = ACTIONS(532),
    [aux_sym__connection_attempts_token1] = ACTIONS(532),
    [aux_sym__connect_timeout_token1] = ACTIONS(532),
    [aux_sym__control_master_token1] = ACTIONS(532),
    [aux_sym__control_persist_token1] = ACTIONS(532),
    [aux_sym__control_path_token1] = ACTIONS(532),
    [aux_sym__dynamic_forward_token1] = ACTIONS(532),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(532),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(532),
    [aux_sym__escape_char_token1] = ACTIONS(532),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(532),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(532),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(532),
    [aux_sym__forward_agent_token1] = ACTIONS(532),
    [aux_sym__forward_x11_token1] = ACTIONS(534),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(532),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(532),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(532),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(532),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(532),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(532),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(532),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(532),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(532),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(532),
    [aux_sym__host_key_alias_token1] = ACTIONS(532),
    [aux_sym__hostname_token1] = ACTIONS(532),
    [aux_sym__identities_only_token1] = ACTIONS(532),
    [aux_sym__identity_agent_token1] = ACTIONS(532),
    [aux_sym__identity_file_token1] = ACTIONS(532),
    [aux_sym__ignore_unknown_token1] = ACTIONS(532),
    [aux_sym__include_token1] = ACTIONS(532),
    [aux_sym__ipqos_token1] = ACTIONS(532),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(532),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(532),
    [aux_sym__kex_algorithms_token1] = ACTIONS(532),
    [aux_sym__known_hosts_command_token1] = ACTIONS(532),
    [aux_sym__local_command_token1] = ACTIONS(532),
    [aux_sym__local_forward_token1] = ACTIONS(532),
    [aux_sym__log_level_token1] = ACTIONS(532),
    [aux_sym__log_verbose_token1] = ACTIONS(532),
    [aux_sym__macs_token1] = ACTIONS(532),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(532),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(532),
    [aux_sym__password_authentication_token1] = ACTIONS(532),
    [aux_sym__permit_local_command_token1] = ACTIONS(532),
    [aux_sym__permit_remote_open_token1] = ACTIONS(532),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(532),
    [aux_sym__port_token1] = ACTIONS(532),
    [aux_sym__preferred_authentications_token1] = ACTIONS(532),
    [aux_sym__proxy_command_token1] = ACTIONS(532),
    [aux_sym__proxy_jump_token1] = ACTIONS(532),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(532),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(532),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(532),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(532),
    [aux_sym__rekey_limit_token1] = ACTIONS(532),
    [aux_sym__remote_command_token1] = ACTIONS(532),
    [aux_sym__remote_forward_token1] = ACTIONS(532),
    [aux_sym__request_tty_token1] = ACTIONS(532),
    [aux_sym__required_rsa_size_token1] = ACTIONS(532),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(532),
    [aux_sym__security_key_provider_token1] = ACTIONS(532),
    [aux_sym__send_env_token1] = ACTIONS(532),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(532),
    [aux_sym__server_alive_interval_token1] = ACTIONS(532),
    [aux_sym__session_type_token1] = ACTIONS(532),
    [aux_sym__set_env_token1] = ACTIONS(532),
    [aux_sym__stdin_null_token1] = ACTIONS(532),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(532),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(532),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(532),
    [aux_sym__syslog_facility_token1] = ACTIONS(532),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(532),
    [aux_sym__tag_token1] = ACTIONS(532),
    [aux_sym__tunnel_token1] = ACTIONS(534),
    [aux_sym__tunnel_device_token1] = ACTIONS(532),
    [aux_sym__update_host_keys_token1] = ACTIONS(532),
    [aux_sym__use_keychain_token1] = ACTIONS(532),
    [aux_sym__user_token1] = ACTIONS(534),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(532),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(532),
    [aux_sym__visual_host_key_token1] = ACTIONS(532),
    [aux_sym__xauth_location_token1] = ACTIONS(532),
    [sym_comment] = ACTIONS(532),
    [sym__space] = ACTIONS(532),
    [sym__eol] = ACTIONS(532),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(866),
    [aux_sym_host_declaration_token1] = ACTIONS(868),
    [aux_sym_match_declaration_token1] = ACTIONS(866),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(866),
    [aux_sym__address_family_token1] = ACTIONS(866),
    [aux_sym__batch_mode_token1] = ACTIONS(866),
    [aux_sym__bind_address_token1] = ACTIONS(866),
    [aux_sym__bind_interface_token1] = ACTIONS(866),
    [aux_sym__canonical_domains_token1] = ACTIONS(866),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(866),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(866),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(866),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(866),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(866),
    [aux_sym__certificate_file_token1] = ACTIONS(866),
    [aux_sym__check_host_ip_token1] = ACTIONS(866),
    [aux_sym__ciphers_token1] = ACTIONS(866),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(866),
    [aux_sym__compression_token1] = ACTIONS(866),
    [aux_sym__connection_attempts_token1] = ACTIONS(866),
    [aux_sym__connect_timeout_token1] = ACTIONS(866),
    [aux_sym__control_master_token1] = ACTIONS(866),
    [aux_sym__control_persist_token1] = ACTIONS(866),
    [aux_sym__control_path_token1] = ACTIONS(866),
    [aux_sym__dynamic_forward_token1] = ACTIONS(866),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(866),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(866),
    [aux_sym__escape_char_token1] = ACTIONS(866),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(866),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(866),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(866),
    [aux_sym__forward_agent_token1] = ACTIONS(866),
    [aux_sym__forward_x11_token1] = ACTIONS(868),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(866),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(866),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(866),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(866),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(866),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(866),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(866),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(866),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(866),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(866),
    [aux_sym__host_key_alias_token1] = ACTIONS(866),
    [aux_sym__hostname_token1] = ACTIONS(866),
    [aux_sym__identities_only_token1] = ACTIONS(866),
    [aux_sym__identity_agent_token1] = ACTIONS(866),
    [aux_sym__identity_file_token1] = ACTIONS(866),
    [aux_sym__ignore_unknown_token1] = ACTIONS(866),
    [aux_sym__include_token1] = ACTIONS(866),
    [aux_sym__ipqos_token1] = ACTIONS(866),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(866),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(866),
    [aux_sym__kex_algorithms_token1] = ACTIONS(866),
    [aux_sym__known_hosts_command_token1] = ACTIONS(866),
    [aux_sym__local_command_token1] = ACTIONS(866),
    [aux_sym__local_forward_token1] = ACTIONS(866),
    [aux_sym__log_level_token1] = ACTIONS(866),
    [aux_sym__log_verbose_token1] = ACTIONS(866),
    [aux_sym__macs_token1] = ACTIONS(866),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(866),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(866),
    [aux_sym__password_authentication_token1] = ACTIONS(866),
    [aux_sym__permit_local_command_token1] = ACTIONS(866),
    [aux_sym__permit_remote_open_token1] = ACTIONS(866),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(866),
    [aux_sym__port_token1] = ACTIONS(866),
    [aux_sym__preferred_authentications_token1] = ACTIONS(866),
    [aux_sym__proxy_command_token1] = ACTIONS(866),
    [aux_sym__proxy_jump_token1] = ACTIONS(866),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(866),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(866),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(866),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(866),
    [aux_sym__rekey_limit_token1] = ACTIONS(866),
    [aux_sym__remote_command_token1] = ACTIONS(866),
    [aux_sym__remote_forward_token1] = ACTIONS(866),
    [aux_sym__request_tty_token1] = ACTIONS(866),
    [aux_sym__required_rsa_size_token1] = ACTIONS(866),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(866),
    [aux_sym__security_key_provider_token1] = ACTIONS(866),
    [aux_sym__send_env_token1] = ACTIONS(866),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(866),
    [aux_sym__server_alive_interval_token1] = ACTIONS(866),
    [aux_sym__session_type_token1] = ACTIONS(866),
    [aux_sym__set_env_token1] = ACTIONS(866),
    [aux_sym__stdin_null_token1] = ACTIONS(866),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(866),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(866),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(866),
    [aux_sym__syslog_facility_token1] = ACTIONS(866),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(866),
    [aux_sym__tag_token1] = ACTIONS(866),
    [aux_sym__tunnel_token1] = ACTIONS(868),
    [aux_sym__tunnel_device_token1] = ACTIONS(866),
    [aux_sym__update_host_keys_token1] = ACTIONS(866),
    [aux_sym__use_keychain_token1] = ACTIONS(866),
    [aux_sym__user_token1] = ACTIONS(868),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(866),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(866),
    [aux_sym__visual_host_key_token1] = ACTIONS(866),
    [aux_sym__xauth_location_token1] = ACTIONS(866),
    [sym_comment] = ACTIONS(866),
    [sym__space] = ACTIONS(866),
    [sym__eol] = ACTIONS(866),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(870),
    [aux_sym_host_declaration_token1] = ACTIONS(872),
    [aux_sym_match_declaration_token1] = ACTIONS(870),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(870),
    [aux_sym__address_family_token1] = ACTIONS(870),
    [aux_sym__batch_mode_token1] = ACTIONS(870),
    [aux_sym__bind_address_token1] = ACTIONS(870),
    [aux_sym__bind_interface_token1] = ACTIONS(870),
    [aux_sym__canonical_domains_token1] = ACTIONS(870),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(870),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(870),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(870),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(870),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(870),
    [aux_sym__certificate_file_token1] = ACTIONS(870),
    [aux_sym__check_host_ip_token1] = ACTIONS(870),
    [aux_sym__ciphers_token1] = ACTIONS(870),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(870),
    [aux_sym__compression_token1] = ACTIONS(870),
    [aux_sym__connection_attempts_token1] = ACTIONS(870),
    [aux_sym__connect_timeout_token1] = ACTIONS(870),
    [aux_sym__control_master_token1] = ACTIONS(870),
    [aux_sym__control_persist_token1] = ACTIONS(870),
    [aux_sym__control_path_token1] = ACTIONS(870),
    [aux_sym__dynamic_forward_token1] = ACTIONS(870),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(870),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(870),
    [aux_sym__escape_char_token1] = ACTIONS(870),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(870),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(870),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(870),
    [aux_sym__forward_agent_token1] = ACTIONS(870),
    [aux_sym__forward_x11_token1] = ACTIONS(872),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(870),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(870),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(870),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(870),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(870),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(870),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(870),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(870),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(870),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(870),
    [aux_sym__host_key_alias_token1] = ACTIONS(870),
    [aux_sym__hostname_token1] = ACTIONS(870),
    [aux_sym__identities_only_token1] = ACTIONS(870),
    [aux_sym__identity_agent_token1] = ACTIONS(870),
    [aux_sym__identity_file_token1] = ACTIONS(870),
    [aux_sym__ignore_unknown_token1] = ACTIONS(870),
    [aux_sym__include_token1] = ACTIONS(870),
    [aux_sym__ipqos_token1] = ACTIONS(870),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(870),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(870),
    [aux_sym__kex_algorithms_token1] = ACTIONS(870),
    [aux_sym__known_hosts_command_token1] = ACTIONS(870),
    [aux_sym__local_command_token1] = ACTIONS(870),
    [aux_sym__local_forward_token1] = ACTIONS(870),
    [aux_sym__log_level_token1] = ACTIONS(870),
    [aux_sym__log_verbose_token1] = ACTIONS(870),
    [aux_sym__macs_token1] = ACTIONS(870),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(870),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(870),
    [aux_sym__password_authentication_token1] = ACTIONS(870),
    [aux_sym__permit_local_command_token1] = ACTIONS(870),
    [aux_sym__permit_remote_open_token1] = ACTIONS(870),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(870),
    [aux_sym__port_token1] = ACTIONS(870),
    [aux_sym__preferred_authentications_token1] = ACTIONS(870),
    [aux_sym__proxy_command_token1] = ACTIONS(870),
    [aux_sym__proxy_jump_token1] = ACTIONS(870),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(870),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(870),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(870),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(870),
    [aux_sym__rekey_limit_token1] = ACTIONS(870),
    [aux_sym__remote_command_token1] = ACTIONS(870),
    [aux_sym__remote_forward_token1] = ACTIONS(870),
    [aux_sym__request_tty_token1] = ACTIONS(870),
    [aux_sym__required_rsa_size_token1] = ACTIONS(870),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(870),
    [aux_sym__security_key_provider_token1] = ACTIONS(870),
    [aux_sym__send_env_token1] = ACTIONS(870),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(870),
    [aux_sym__server_alive_interval_token1] = ACTIONS(870),
    [aux_sym__session_type_token1] = ACTIONS(870),
    [aux_sym__set_env_token1] = ACTIONS(870),
    [aux_sym__stdin_null_token1] = ACTIONS(870),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(870),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(870),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(870),
    [aux_sym__syslog_facility_token1] = ACTIONS(870),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(870),
    [aux_sym__tag_token1] = ACTIONS(870),
    [aux_sym__tunnel_token1] = ACTIONS(872),
    [aux_sym__tunnel_device_token1] = ACTIONS(870),
    [aux_sym__update_host_keys_token1] = ACTIONS(870),
    [aux_sym__use_keychain_token1] = ACTIONS(870),
    [aux_sym__user_token1] = ACTIONS(872),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(870),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(870),
    [aux_sym__visual_host_key_token1] = ACTIONS(870),
    [aux_sym__xauth_location_token1] = ACTIONS(870),
    [sym_comment] = ACTIONS(870),
    [sym__space] = ACTIONS(870),
    [sym__eol] = ACTIONS(870),
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
    STATE(310), 1,
      sym_condition,
    STATE(511), 1,
      sym__match_originalhost,
    STATE(559), 1,
      sym__match_tagged,
    STATE(587), 1,
      sym__match_user,
    STATE(593), 1,
      sym__match_localuser,
    STATE(682), 1,
      sym__all,
    STATE(695), 1,
      sym__match_canonical,
    STATE(704), 1,
      sym__match_final,
    STATE(706), 1,
      sym__match_exec,
    STATE(738), 1,
      sym__match_localnetwork,
    STATE(764), 1,
      sym__match_host,
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
    STATE(511), 1,
      sym__match_originalhost,
    STATE(559), 1,
      sym__match_tagged,
    STATE(587), 1,
      sym__match_user,
    STATE(593), 1,
      sym__match_localuser,
    STATE(620), 1,
      sym_condition,
    STATE(695), 1,
      sym__match_canonical,
    STATE(704), 1,
      sym__match_final,
    STATE(706), 1,
      sym__match_exec,
    STATE(738), 1,
      sym__match_localnetwork,
    STATE(764), 1,
      sym__match_host,
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
    STATE(511), 1,
      sym__match_originalhost,
    STATE(559), 1,
      sym__match_tagged,
    STATE(587), 1,
      sym__match_user,
    STATE(593), 1,
      sym__match_localuser,
    STATE(620), 1,
      sym_condition,
    STATE(695), 1,
      sym__match_canonical,
    STATE(704), 1,
      sym__match_final,
    STATE(706), 1,
      sym__match_exec,
    STATE(738), 1,
      sym__match_localnetwork,
    STATE(764), 1,
      sym__match_host,
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
    STATE(511), 1,
      sym__match_originalhost,
    STATE(559), 1,
      sym__match_tagged,
    STATE(587), 1,
      sym__match_user,
    STATE(593), 1,
      sym__match_localuser,
    STATE(620), 1,
      sym_condition,
    STATE(695), 1,
      sym__match_canonical,
    STATE(704), 1,
      sym__match_final,
    STATE(706), 1,
      sym__match_exec,
    STATE(738), 1,
      sym__match_localnetwork,
    STATE(764), 1,
      sym__match_host,
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
    STATE(772), 1,
      sym__match_canonical,
    STATE(773), 1,
      sym__match_final,
    STATE(775), 1,
      sym__match_exec,
    STATE(776), 1,
      sym__match_localnetwork,
    STATE(777), 1,
      sym__match_host,
    STATE(778), 1,
      sym__match_originalhost,
    STATE(779), 1,
      sym__match_tagged,
    STATE(780), 1,
      sym__match_user,
    STATE(781), 1,
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
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(323), 1,
      aux_sym__plain_string_repeat1,
    STATE(675), 1,
      sym__forward_value_inner,
    STATE(676), 1,
      sym__file_string,
    STATE(677), 1,
      sym_number,
    STATE(825), 1,
      sym__forward_value1,
    STATE(150), 2,
      sym__file_token,
      sym_variable,
    STATE(830), 2,
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
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(323), 1,
      aux_sym__plain_string_repeat1,
    STATE(675), 1,
      sym__forward_value_inner,
    STATE(676), 1,
      sym__file_string,
    STATE(677), 1,
      sym_number,
    STATE(720), 1,
      sym__forward_value1,
    STATE(150), 2,
      sym__file_token,
      sym_variable,
    STATE(830), 2,
      sym__string,
      sym__plain_string,
  [401] = 12,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(932), 1,
      aux_sym__match_exec_token2,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(936), 1,
      aux_sym__match_exec_token3,
    ACTIONS(938), 1,
      aux_sym__file_token_token1,
    ACTIONS(940), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(81), 1,
      aux_sym__file_string_repeat2,
    STATE(323), 1,
      aux_sym__plain_string_repeat1,
    STATE(373), 1,
      aux_sym__string_repeat1,
    STATE(811), 1,
      sym__forward_value_inner,
    STATE(252), 2,
      sym__file_token,
      sym_variable,
    STATE(830), 2,
      sym__string,
      sym__plain_string,
  [440] = 12,
    ACTIONS(920), 1,
      aux_sym__match_exec_token2,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(323), 1,
      aux_sym__plain_string_repeat1,
    STATE(667), 1,
      sym__forward_value_inner,
    STATE(669), 1,
      sym__file_string,
    STATE(687), 1,
      sym__forward_value2,
    STATE(150), 2,
      sym__file_token,
      sym_variable,
    STATE(830), 2,
      sym__string,
      sym__plain_string,
  [479] = 12,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(932), 1,
      aux_sym__match_exec_token2,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(936), 1,
      aux_sym__match_exec_token3,
    ACTIONS(938), 1,
      aux_sym__file_token_token1,
    ACTIONS(940), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(81), 1,
      aux_sym__file_string_repeat2,
    STATE(323), 1,
      aux_sym__plain_string_repeat1,
    STATE(373), 1,
      aux_sym__string_repeat1,
    STATE(790), 1,
      sym__forward_value_inner,
    STATE(252), 2,
      sym__file_token,
      sym_variable,
    STATE(830), 2,
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
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(323), 1,
      aux_sym__plain_string_repeat1,
    STATE(667), 1,
      sym__forward_value_inner,
    STATE(668), 1,
      sym__forward_value2,
    STATE(669), 1,
      sym__file_string,
    STATE(150), 2,
      sym__file_token,
      sym_variable,
    STATE(830), 2,
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
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(646), 1,
      sym__file_string,
    STATE(647), 1,
      sym__var_value,
    ACTIONS(948), 2,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
    STATE(150), 2,
      sym__file_token,
      sym_variable,
  [590] = 9,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(930), 1,
      sym__number,
    ACTIONS(932), 1,
      aux_sym__match_exec_token2,
    ACTIONS(952), 1,
      anon_sym_DQUOTE,
    STATE(322), 1,
      sym__dynamic_forward_value,
    STATE(323), 1,
      aux_sym__plain_string_repeat1,
    STATE(756), 1,
      sym__forward_value_inner,
    STATE(770), 1,
      sym_number,
    STATE(830), 2,
      sym__string,
      sym__plain_string,
  [619] = 7,
    ACTIONS(954), 1,
      aux_sym__match_exec_token2,
    ACTIONS(956), 1,
      anon_sym_DQUOTE,
    ACTIONS(960), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(703), 1,
      sym__file_pattern_vars,
    STATE(88), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(958), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [644] = 6,
    ACTIONS(962), 1,
      aux_sym__match_exec_token2,
    ACTIONS(968), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(50), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(971), 2,
      sym__space,
      sym__eol,
    STATE(88), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(965), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [667] = 9,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(930), 1,
      sym__number,
    ACTIONS(932), 1,
      aux_sym__match_exec_token2,
    ACTIONS(952), 1,
      anon_sym_DQUOTE,
    STATE(323), 1,
      aux_sym__plain_string_repeat1,
    STATE(649), 1,
      sym__dynamic_forward_value,
    STATE(756), 1,
      sym__forward_value_inner,
    STATE(770), 1,
      sym_number,
    STATE(830), 2,
      sym__string,
      sym__plain_string,
  [696] = 7,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(973), 1,
      aux_sym__match_exec_token2,
    ACTIONS(975), 1,
      anon_sym_DOLLAR,
    STATE(253), 1,
      aux_sym__plain_string_repeat1,
    STATE(535), 1,
      sym__var_value,
    ACTIONS(977), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(536), 3,
      sym__string,
      sym__plain_string,
      sym__boolean,
  [721] = 6,
    ACTIONS(954), 1,
      aux_sym__match_exec_token2,
    ACTIONS(960), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(50), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(979), 2,
      sym__space,
      sym__eol,
    STATE(88), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(958), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [744] = 7,
    ACTIONS(954), 1,
      aux_sym__match_exec_token2,
    ACTIONS(956), 1,
      anon_sym_DQUOTE,
    ACTIONS(960), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(730), 1,
      sym__file_pattern_vars,
    STATE(88), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(958), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [769] = 6,
    ACTIONS(981), 1,
      anon_sym_DQUOTE,
    ACTIONS(983), 1,
      aux_sym__match_exec_token3,
    ACTIONS(989), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(55), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(95), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(986), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [791] = 8,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(992), 1,
      anon_sym_none,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(362), 1,
      sym__file_string,
    STATE(150), 2,
      sym__file_token,
      sym_variable,
  [817] = 6,
    ACTIONS(994), 1,
      anon_sym_DQUOTE,
    ACTIONS(996), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1000), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(55), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(95), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(998), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [839] = 8,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(932), 1,
      aux_sym__match_exec_token2,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(1002), 1,
      aux_sym__match_exec_token3,
    STATE(323), 1,
      aux_sym__plain_string_repeat1,
    STATE(373), 1,
      aux_sym__string_repeat1,
    STATE(828), 1,
      sym__forward_value_inner,
    STATE(830), 2,
      sym__string,
      sym__plain_string,
  [865] = 8,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(1004), 1,
      anon_sym_none,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(694), 1,
      sym__file_string,
    STATE(150), 2,
      sym__file_token,
      sym_variable,
  [891] = 7,
    ACTIONS(1006), 1,
      anon_sym_BANG,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1014), 1,
      sym__eol,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(598), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [914] = 7,
    ACTIONS(1006), 1,
      anon_sym_BANG,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1016), 1,
      sym__eol,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(598), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [937] = 7,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(725), 1,
      sym__file_string,
    STATE(150), 2,
      sym__file_token,
      sym_variable,
  [960] = 6,
    ACTIONS(1018), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1021), 1,
      aux_sym__file_token_token1,
    ACTIONS(1024), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(63), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(1027), 2,
      sym__space,
      sym__eol,
    STATE(150), 2,
      sym__file_token,
      sym_variable,
  [981] = 7,
    ACTIONS(1029), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1032), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1035), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1038), 1,
      sym__space,
    ACTIONS(1040), 1,
      sym__eol,
    STATE(64), 1,
      aux_sym__hosts_string_repeat1,
    STATE(176), 2,
      sym__hosts_token,
      sym_variable,
  [1004] = 7,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1046), 1,
      anon_sym_none,
    STATE(132), 1,
      aux_sym__match_value_repeat1,
    STATE(314), 1,
      sym__cnames_map,
    STATE(315), 1,
      sym__pattern,
    ACTIONS(1044), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1027] = 5,
    ACTIONS(996), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1000), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(57), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(95), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(998), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1046] = 7,
    ACTIONS(1048), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1051), 1,
      aux_sym__file_token_token1,
    ACTIONS(1054), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1057), 1,
      sym__space,
    ACTIONS(1059), 1,
      sym__eol,
    STATE(67), 1,
      aux_sym__remote_command_repeat1,
    STATE(158), 2,
      sym__file_token,
      sym_variable,
  [1069] = 7,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__file_string_repeat1,
    STATE(650), 1,
      sym__file_string,
    STATE(150), 2,
      sym__file_token,
      sym_variable,
  [1092] = 7,
    ACTIONS(1006), 1,
      anon_sym_BANG,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1061), 1,
      sym__eol,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(598), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1115] = 7,
    ACTIONS(1063), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1065), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1067), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1069), 1,
      sym__space,
    ACTIONS(1071), 1,
      sym__eol,
    STATE(64), 1,
      aux_sym__hosts_string_repeat1,
    STATE(176), 2,
      sym__hosts_token,
      sym_variable,
  [1138] = 6,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    STATE(63), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(1073), 2,
      sym__space,
      sym__eol,
    STATE(150), 2,
      sym__file_token,
      sym_variable,
  [1159] = 7,
    ACTIONS(1006), 1,
      anon_sym_BANG,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1075), 1,
      sym__eol,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(598), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1182] = 7,
    ACTIONS(1077), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1079), 1,
      aux_sym__file_token_token1,
    ACTIONS(1081), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1083), 1,
      sym__space,
    ACTIONS(1085), 1,
      sym__eol,
    STATE(67), 1,
      aux_sym__remote_command_repeat1,
    STATE(158), 2,
      sym__file_token,
      sym_variable,
  [1205] = 6,
    ACTIONS(1087), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1089), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym__match_value_repeat1,
    STATE(229), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1091), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1093), 2,
      sym__space,
      sym__eol,
  [1226] = 3,
    ACTIONS(1095), 1,
      aux_sym__match_exec_token2,
    STATE(75), 1,
      aux_sym__plain_string_repeat1,
    ACTIONS(1098), 5,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_AT,
      sym__space,
      sym__eol,
  [1240] = 4,
    ACTIONS(1100), 1,
      aux_sym__match_exec_token2,
    STATE(76), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1105), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1103), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1256] = 6,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1108), 1,
      anon_sym_BANG,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(298), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1276] = 4,
    ACTIONS(1112), 1,
      anon_sym_confirm,
    ACTIONS(1114), 1,
      sym__number,
    STATE(623), 2,
      sym__boolean,
      sym_time,
    ACTIONS(1110), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [1292] = 6,
    ACTIONS(1063), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1065), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1067), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(70), 1,
      aux_sym__hosts_string_repeat1,
    STATE(663), 1,
      sym__hosts_string,
    STATE(176), 2,
      sym__hosts_token,
      sym_variable,
  [1312] = 6,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      aux_sym__match_exec_token2,
    STATE(132), 1,
      aux_sym__match_value_repeat1,
    STATE(315), 1,
      sym__pattern,
    STATE(630), 1,
      sym__cnames_map,
    ACTIONS(1044), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1332] = 6,
    ACTIONS(938), 1,
      aux_sym__file_token_token1,
    ACTIONS(940), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1116), 1,
      anon_sym_DQUOTE,
    ACTIONS(1118), 1,
      aux_sym__match_exec_token3,
    STATE(84), 1,
      aux_sym__file_string_repeat2,
    STATE(252), 2,
      sym__file_token,
      sym_variable,
  [1352] = 6,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(973), 1,
      aux_sym__match_exec_token2,
    ACTIONS(975), 1,
      anon_sym_DOLLAR,
    STATE(253), 1,
      aux_sym__plain_string_repeat1,
    STATE(727), 1,
      sym__var_value,
    STATE(728), 2,
      sym__string,
      sym__plain_string,
  [1372] = 2,
    ACTIONS(1120), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1122), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1384] = 6,
    ACTIONS(1124), 1,
      anon_sym_DQUOTE,
    ACTIONS(1126), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1129), 1,
      aux_sym__file_token_token1,
    ACTIONS(1132), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(84), 1,
      aux_sym__file_string_repeat2,
    STATE(252), 2,
      sym__file_token,
      sym_variable,
  [1404] = 6,
    ACTIONS(1135), 1,
      aux_sym_time_token1,
    ACTIONS(1137), 1,
      aux_sym_time_token2,
    ACTIONS(1139), 1,
      aux_sym_time_token3,
    ACTIONS(1141), 1,
      aux_sym_time_token4,
    ACTIONS(1143), 1,
      aux_sym_time_token5,
    ACTIONS(1145), 2,
      sym__space,
      sym__eol,
  [1424] = 6,
    ACTIONS(1006), 1,
      anon_sym_BANG,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(598), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1444] = 6,
    ACTIONS(1147), 1,
      anon_sym_DQUOTE,
    ACTIONS(1149), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym__match_value_repeat3,
    STATE(464), 1,
      aux_sym__match_value_repeat4,
    ACTIONS(1153), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1464] = 2,
    ACTIONS(1155), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1157), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1476] = 4,
    ACTIONS(1087), 1,
      aux_sym__match_exec_token2,
    STATE(76), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1091), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1159), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1492] = 4,
    ACTIONS(1087), 1,
      aux_sym__match_exec_token2,
    STATE(76), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1091), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1161), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1508] = 3,
    ACTIONS(1163), 1,
      aux_sym__match_exec_token2,
    STATE(75), 1,
      aux_sym__plain_string_repeat1,
    ACTIONS(1165), 5,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_AT,
      sym__space,
      sym__eol,
  [1522] = 3,
    ACTIONS(1169), 1,
      anon_sym_auto,
    STATE(719), 1,
      sym__boolean,
    ACTIONS(1167), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [1535] = 5,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      aux_sym__match_exec_token2,
    STATE(132), 1,
      aux_sym__match_value_repeat1,
    STATE(272), 1,
      sym__pattern,
    ACTIONS(1044), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1552] = 5,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1087), 1,
      aux_sym__match_exec_token2,
    STATE(90), 1,
      aux_sym__match_value_repeat1,
    STATE(274), 1,
      sym__pattern,
    ACTIONS(1091), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1569] = 2,
    ACTIONS(1173), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1171), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1580] = 4,
    ACTIONS(1175), 1,
      anon_sym_DQUOTE,
    STATE(146), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(267), 1,
      sym__log_verbose_value,
    ACTIONS(1177), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1595] = 5,
    ACTIONS(1179), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1182), 1,
      aux_sym__hostname_token_token1,
    STATE(97), 1,
      aux_sym__hostname_string_repeat1,
    STATE(248), 1,
      sym__hostname_token,
    ACTIONS(1185), 2,
      sym__space,
      sym__eol,
  [1612] = 5,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(333), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1629] = 4,
    ACTIONS(1187), 1,
      anon_sym_DQUOTE,
    STATE(345), 1,
      sym__permit_remote_open_value,
    ACTIONS(1189), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    ACTIONS(1191), 2,
      anon_sym_any,
      anon_sym_none,
  [1644] = 5,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(660), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1661] = 6,
    ACTIONS(1193), 1,
      anon_sym_none,
    ACTIONS(1195), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1197), 1,
      aux_sym__proxy_token_token1,
    STATE(138), 1,
      aux_sym__proxy_string_repeat1,
    STATE(204), 1,
      sym__proxy_token,
    STATE(702), 1,
      sym__proxy_string,
  [1680] = 4,
    ACTIONS(1187), 1,
      anon_sym_DQUOTE,
    STATE(681), 1,
      sym__permit_remote_open_value,
    ACTIONS(1189), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    ACTIONS(1199), 2,
      anon_sym_any,
      anon_sym_none,
  [1695] = 6,
    ACTIONS(1201), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1204), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1207), 1,
      sym__space,
    ACTIONS(1209), 1,
      sym__eol,
    STATE(103), 1,
      aux_sym__proxy_string_repeat1,
    STATE(204), 1,
      sym__proxy_token,
  [1714] = 6,
    ACTIONS(1163), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1211), 1,
      anon_sym_none,
    ACTIONS(1213), 1,
      aux_sym__proxy_jump_value_token1,
    STATE(91), 1,
      aux_sym__plain_string_repeat1,
    STATE(155), 1,
      sym__plain_string,
    STATE(422), 1,
      sym__proxy_jump_value,
  [1733] = 6,
    ACTIONS(1163), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1211), 1,
      anon_sym_none,
    ACTIONS(1213), 1,
      aux_sym__proxy_jump_value_token1,
    STATE(91), 1,
      aux_sym__plain_string_repeat1,
    STATE(155), 1,
      sym__plain_string,
    STATE(235), 1,
      sym__proxy_jump_value,
  [1752] = 3,
    STATE(108), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1217), 2,
      sym__space,
      sym__eol,
    ACTIONS(1215), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1765] = 4,
    ACTIONS(1219), 1,
      anon_sym_DASH,
    STATE(113), 1,
      aux_sym__send_env_value_repeat1,
    STATE(688), 1,
      sym__send_env_value,
    ACTIONS(1215), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1780] = 3,
    STATE(108), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1224), 2,
      sym__space,
      sym__eol,
    ACTIONS(1221), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1793] = 2,
    STATE(712), 2,
      sym__pubkey_authentication_arg,
      sym__boolean,
    ACTIONS(1226), 4,
      anon_sym_unbound,
      anon_sym_host_DASHbound,
      anon_sym_yes,
      anon_sym_no,
  [1804] = 5,
    ACTIONS(1077), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1079), 1,
      aux_sym__file_token_token1,
    ACTIONS(1081), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(73), 1,
      aux_sym__remote_command_repeat1,
    STATE(158), 2,
      sym__file_token,
      sym_variable,
  [1821] = 5,
    ACTIONS(938), 1,
      aux_sym__file_token_token1,
    ACTIONS(940), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1118), 1,
      aux_sym__match_exec_token3,
    STATE(81), 1,
      aux_sym__file_string_repeat2,
    STATE(252), 2,
      sym__file_token,
      sym_variable,
  [1838] = 5,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(699), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1855] = 3,
    STATE(108), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1228), 2,
      sym__space,
      sym__eol,
    ACTIONS(1215), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1868] = 4,
    ACTIONS(1219), 1,
      anon_sym_DASH,
    STATE(113), 1,
      aux_sym__send_env_value_repeat1,
    STATE(358), 1,
      sym__send_env_value,
    ACTIONS(1215), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1883] = 2,
    STATE(742), 1,
      sym__boolean,
    ACTIONS(1230), 5,
      anon_sym_ask,
      anon_sym_accept_DASHnew,
      anon_sym_off,
      anon_sym_yes,
      anon_sym_no,
  [1894] = 6,
    ACTIONS(1232), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1234), 1,
      anon_sym_DQUOTE,
    ACTIONS(1236), 1,
      aux_sym__hostname_token_token1,
    STATE(139), 1,
      aux_sym__hostname_string_repeat1,
    STATE(248), 1,
      sym__hostname_token,
    STATE(629), 1,
      sym__hostname_string,
  [1913] = 5,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(648), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1930] = 5,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1087), 1,
      aux_sym__match_exec_token2,
    STATE(90), 1,
      aux_sym__match_value_repeat1,
    STATE(234), 1,
      sym__pattern,
    ACTIONS(1091), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1947] = 5,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(654), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1964] = 4,
    ACTIONS(1238), 1,
      aux_sym__match_exec_token2,
    STATE(120), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1103), 2,
      sym__space,
      sym__eol,
    ACTIONS(1241), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1979] = 5,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(652), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1996] = 5,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(312), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2013] = 5,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(363), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2030] = 4,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    STATE(120), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1161), 2,
      sym__space,
      sym__eol,
  [2045] = 5,
    ACTIONS(1087), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1244), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym__match_value_repeat1,
    STATE(613), 1,
      sym__match_value,
    ACTIONS(1091), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2062] = 5,
    ACTIONS(1087), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1244), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym__match_value_repeat1,
    STATE(615), 1,
      sym__match_value,
    ACTIONS(1091), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2079] = 5,
    ACTIONS(1246), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1249), 1,
      aux_sym__file_token_token1,
    STATE(127), 1,
      aux_sym__match_exec_repeat1,
    STATE(255), 1,
      sym__file_token,
    ACTIONS(1252), 2,
      sym__space,
      sym__eol,
  [2096] = 5,
    ACTIONS(1087), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1244), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym__match_value_repeat1,
    STATE(616), 1,
      sym__match_value,
    ACTIONS(1091), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2113] = 5,
    ACTIONS(1087), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1244), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym__match_value_repeat1,
    STATE(617), 1,
      sym__match_value,
    ACTIONS(1091), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2130] = 5,
    ACTIONS(1087), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1244), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym__match_value_repeat1,
    STATE(618), 1,
      sym__match_value,
    ACTIONS(1091), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2147] = 4,
    ACTIONS(1149), 1,
      aux_sym__match_exec_token3,
    STATE(140), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1153), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1254), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [2162] = 4,
    ACTIONS(1042), 1,
      aux_sym__match_exec_token2,
    STATE(133), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1044), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1161), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2177] = 4,
    ACTIONS(1256), 1,
      aux_sym__match_exec_token2,
    STATE(133), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1103), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(1259), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2192] = 2,
    ACTIONS(1262), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1264), 5,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [2203] = 3,
    ACTIONS(1266), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1269), 1,
      anon_sym_COLON,
    ACTIONS(1271), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2216] = 2,
    ACTIONS(1273), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1269), 5,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_AT,
      sym__space,
      sym__eol,
  [2227] = 5,
    ACTIONS(1008), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym__match_value_repeat1,
    STATE(628), 1,
      sym__pattern,
    ACTIONS(1012), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2244] = 6,
    ACTIONS(1195), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1197), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1275), 1,
      sym__space,
    ACTIONS(1277), 1,
      sym__eol,
    STATE(103), 1,
      aux_sym__proxy_string_repeat1,
    STATE(204), 1,
      sym__proxy_token,
  [2263] = 5,
    ACTIONS(1232), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1236), 1,
      aux_sym__hostname_token_token1,
    STATE(97), 1,
      aux_sym__hostname_string_repeat1,
    STATE(248), 1,
      sym__hostname_token,
    ACTIONS(1279), 2,
      sym__space,
      sym__eol,
  [2280] = 4,
    ACTIONS(1283), 1,
      aux_sym__match_exec_token3,
    STATE(140), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1281), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    ACTIONS(1286), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2295] = 3,
    ACTIONS(1289), 1,
      aux_sym__match_exec_token2,
    STATE(142), 1,
      aux_sym__plain_string_repeat1,
    ACTIONS(1165), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2308] = 3,
    ACTIONS(1291), 1,
      aux_sym__match_exec_token2,
    STATE(142), 1,
      aux_sym__plain_string_repeat1,
    ACTIONS(1098), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2321] = 2,
    ACTIONS(1120), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1122), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2332] = 5,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1087), 1,
      aux_sym__match_exec_token2,
    STATE(90), 1,
      aux_sym__match_value_repeat1,
    STATE(272), 1,
      sym__pattern,
    ACTIONS(1091), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2349] = 5,
    ACTIONS(1294), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1296), 1,
      aux_sym__file_token_token1,
    STATE(127), 1,
      aux_sym__match_exec_repeat1,
    STATE(255), 1,
      sym__file_token,
    ACTIONS(1298), 2,
      sym__space,
      sym__eol,
  [2366] = 3,
    ACTIONS(1302), 1,
      anon_sym_COLON,
    STATE(147), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1300), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2378] = 3,
    ACTIONS(1307), 1,
      anon_sym_COLON,
    STATE(147), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1304), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2390] = 4,
    ACTIONS(1309), 1,
      aux_sym__match_exec_token3,
    STATE(186), 1,
      aux_sym__match_value_repeat3,
    STATE(379), 1,
      sym__log_verbose_quoted,
    ACTIONS(1311), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2404] = 5,
    ACTIONS(1294), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1296), 1,
      aux_sym__file_token_token1,
    ACTIONS(1313), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      aux_sym__match_exec_repeat1,
    STATE(255), 1,
      sym__file_token,
  [2420] = 2,
    ACTIONS(1315), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1271), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2430] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(973), 1,
      aux_sym__match_exec_token2,
    STATE(253), 1,
      aux_sym__plain_string_repeat1,
    STATE(690), 2,
      sym__string,
      sym__plain_string,
  [2444] = 2,
    STATE(723), 1,
      sym__boolean,
    ACTIONS(1317), 4,
      anon_sym_auto,
      anon_sym_force,
      anon_sym_yes,
      anon_sym_no,
  [2454] = 4,
    ACTIONS(1281), 1,
      anon_sym_DQUOTE,
    ACTIONS(1319), 1,
      aux_sym__match_exec_token3,
    STATE(153), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1322), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2468] = 3,
    ACTIONS(1114), 1,
      sym__number,
    ACTIONS(1325), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(729), 2,
      sym__boolean,
      sym_time,
  [2480] = 3,
    ACTIONS(1329), 1,
      anon_sym_COLON,
    ACTIONS(1331), 1,
      anon_sym_AT,
    ACTIONS(1327), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [2492] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(973), 1,
      aux_sym__match_exec_token2,
    STATE(253), 1,
      aux_sym__plain_string_repeat1,
    STATE(747), 2,
      sym__string,
      sym__plain_string,
  [2506] = 2,
    STATE(749), 1,
      sym__boolean,
    ACTIONS(1333), 4,
      anon_sym_point_DASHto_DASHpoint,
      anon_sym_ethernet,
      anon_sym_yes,
      anon_sym_no,
  [2516] = 2,
    ACTIONS(1335), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1337), 3,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2526] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(973), 1,
      aux_sym__match_exec_token2,
    STATE(253), 1,
      aux_sym__plain_string_repeat1,
    STATE(754), 2,
      sym__string,
      sym__plain_string,
  [2540] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(973), 1,
      aux_sym__match_exec_token2,
    STATE(253), 1,
      aux_sym__plain_string_repeat1,
    STATE(762), 2,
      sym__string,
      sym__plain_string,
  [2554] = 5,
    ACTIONS(1339), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1341), 1,
      sym_token,
    ACTIONS(1343), 1,
      sym__space,
    ACTIONS(1345), 1,
      sym__eol,
    STATE(181), 1,
      aux_sym__token_string_repeat1,
  [2570] = 5,
    ACTIONS(1347), 1,
      anon_sym_DQUOTE,
    ACTIONS(1349), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1352), 1,
      aux_sym__hostname_token_token1,
    STATE(162), 1,
      aux_sym__hostname_string_repeat2,
    STATE(377), 1,
      sym__hostname_token,
  [2586] = 1,
    ACTIONS(1355), 5,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
      sym__space,
      sym__eol,
  [2594] = 4,
    ACTIONS(1309), 1,
      aux_sym__match_exec_token3,
    STATE(186), 1,
      aux_sym__match_value_repeat3,
    STATE(721), 1,
      sym__log_verbose_quoted,
    ACTIONS(1311), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2608] = 3,
    ACTIONS(1357), 1,
      anon_sym_COLON,
    STATE(147), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1300), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2620] = 3,
    STATE(146), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(413), 1,
      sym__log_verbose_value,
    ACTIONS(1177), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2632] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(973), 1,
      aux_sym__match_exec_token2,
    STATE(253), 1,
      aux_sym__plain_string_repeat1,
    STATE(324), 2,
      sym__string,
      sym__plain_string,
  [2646] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(973), 1,
      aux_sym__match_exec_token2,
    STATE(253), 1,
      aux_sym__plain_string_repeat1,
    STATE(651), 2,
      sym__string,
      sym__plain_string,
  [2660] = 5,
    ACTIONS(1359), 1,
      anon_sym_DQUOTE,
    ACTIONS(1361), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1363), 1,
      aux_sym__file_token_token1,
    STATE(173), 1,
      aux_sym__match_exec_repeat2,
    STATE(438), 1,
      sym__file_token,
  [2676] = 1,
    ACTIONS(1365), 5,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2684] = 4,
    ACTIONS(1309), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1367), 1,
      anon_sym_COLON,
    STATE(177), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1311), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2698] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(973), 1,
      aux_sym__match_exec_token2,
    STATE(253), 1,
      aux_sym__plain_string_repeat1,
    STATE(605), 2,
      sym__string,
      sym__plain_string,
  [2712] = 5,
    ACTIONS(1369), 1,
      anon_sym_DQUOTE,
    ACTIONS(1371), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1374), 1,
      aux_sym__file_token_token1,
    STATE(173), 1,
      aux_sym__match_exec_repeat2,
    STATE(438), 1,
      sym__file_token,
  [2728] = 5,
    ACTIONS(1377), 1,
      anon_sym_DQUOTE,
    ACTIONS(1379), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1381), 1,
      aux_sym__hostname_token_token1,
    STATE(162), 1,
      aux_sym__hostname_string_repeat2,
    STATE(377), 1,
      sym__hostname_token,
  [2744] = 2,
    ACTIONS(1262), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1264), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2754] = 2,
    ACTIONS(1383), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1385), 3,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2764] = 4,
    ACTIONS(1281), 1,
      anon_sym_COLON,
    ACTIONS(1387), 1,
      aux_sym__match_exec_token3,
    STATE(177), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1390), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2778] = 2,
    ACTIONS(1120), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1122), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2788] = 2,
    ACTIONS(1395), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1393), 4,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2798] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(973), 1,
      aux_sym__match_exec_token2,
    STATE(253), 1,
      aux_sym__plain_string_repeat1,
    STATE(696), 2,
      sym__string,
      sym__plain_string,
  [2812] = 5,
    ACTIONS(1397), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1400), 1,
      sym_token,
    ACTIONS(1403), 1,
      sym__space,
    ACTIONS(1405), 1,
      sym__eol,
    STATE(181), 1,
      aux_sym__token_string_repeat1,
  [2828] = 2,
    ACTIONS(1120), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1122), 3,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2838] = 2,
    ACTIONS(1273), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1269), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2848] = 4,
    ACTIONS(1407), 1,
      anon_sym_DQUOTE,
    ACTIONS(1409), 1,
      aux_sym__match_exec_token3,
    STATE(153), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1411), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2862] = 2,
    ACTIONS(1120), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1122), 3,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2872] = 4,
    ACTIONS(1309), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1413), 1,
      anon_sym_COLON,
    STATE(177), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1311), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2886] = 2,
    ACTIONS(1262), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1264), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [2896] = 2,
    ACTIONS(1417), 1,
      sym_mac,
    ACTIONS(1415), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2905] = 3,
    ACTIONS(1419), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1421), 2,
      sym__space,
      sym__eol,
  [2916] = 3,
    ACTIONS(1419), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1423), 2,
      sym__space,
      sym__eol,
  [2927] = 3,
    ACTIONS(1425), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1428), 2,
      sym__space,
      sym__eol,
  [2938] = 3,
    ACTIONS(1432), 1,
      sym__number,
    STATE(656), 1,
      sym_number,
    ACTIONS(1430), 2,
      anon_sym_none,
      sym_ipqos,
  [2949] = 3,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1436), 2,
      sym__space,
      sym__eol,
  [2960] = 3,
    ACTIONS(1438), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1440), 2,
      sym__space,
      sym__eol,
  [2971] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1445), 2,
      sym__space,
      sym__eol,
  [2982] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1449), 2,
      sym__space,
      sym__eol,
  [2993] = 3,
    ACTIONS(1451), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1454), 2,
      sym__space,
      sym__eol,
  [3004] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1456), 2,
      sym__space,
      sym__eol,
  [3015] = 3,
    ACTIONS(1458), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1460), 2,
      sym__space,
      sym__eol,
  [3026] = 2,
    ACTIONS(1464), 1,
      sym_cipher,
    ACTIONS(1462), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3035] = 3,
    ACTIONS(1466), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1468), 2,
      sym__space,
      sym__eol,
  [3046] = 3,
    ACTIONS(1470), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1473), 2,
      sym__space,
      sym__eol,
  [3057] = 3,
    ACTIONS(1458), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1475), 2,
      sym__space,
      sym__eol,
  [3068] = 2,
    ACTIONS(1477), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1479), 2,
      aux_sym__proxy_token_token1,
      sym__eol,
  [3077] = 3,
    ACTIONS(1309), 1,
      aux_sym__match_exec_token3,
    STATE(171), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1311), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3088] = 3,
    ACTIONS(1481), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1484), 2,
      sym__space,
      sym__eol,
  [3099] = 2,
    ACTIONS(1486), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1488), 2,
      sym_token,
      sym__eol,
  [3108] = 3,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1490), 2,
      sym__space,
      sym__eol,
  [3119] = 3,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1495), 2,
      sym__space,
      sym__eol,
  [3130] = 3,
    ACTIONS(1497), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1500), 2,
      sym__space,
      sym__eol,
  [3141] = 3,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym__proxy_jump_repeat1,
    ACTIONS(1505), 2,
      sym__space,
      sym__eol,
  [3152] = 2,
    ACTIONS(1509), 1,
      anon_sym_COLON,
    ACTIONS(1507), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3161] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1511), 2,
      sym__space,
      sym__eol,
  [3172] = 3,
    ACTIONS(1438), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1513), 2,
      sym__space,
      sym__eol,
  [3183] = 3,
    ACTIONS(1438), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1513), 2,
      sym__space,
      sym__eol,
  [3194] = 2,
    ACTIONS(1517), 1,
      sym_kex,
    ACTIONS(1515), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3203] = 3,
    ACTIONS(1409), 1,
      aux_sym__match_exec_token3,
    STATE(184), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1411), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3214] = 3,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1521), 2,
      sym__space,
      sym__eol,
  [3225] = 1,
    ACTIONS(1523), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3232] = 4,
    ACTIONS(1525), 1,
      aux_sym__sep_token1,
    ACTIONS(1527), 1,
      sym__space,
    ACTIONS(1529), 1,
      sym__eol,
    STATE(782), 1,
      sym__sep,
  [3245] = 4,
    ACTIONS(1531), 1,
      aux_sym__sep_token1,
    ACTIONS(1533), 1,
      sym__space,
    ACTIONS(1535), 1,
      sym__eol,
    STATE(783), 1,
      sym__sep,
  [3258] = 3,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1537), 2,
      sym__space,
      sym__eol,
  [3269] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1539), 2,
      sym__space,
      sym__eol,
  [3280] = 4,
    ACTIONS(1339), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1341), 1,
      sym_token,
    STATE(161), 1,
      aux_sym__token_string_repeat1,
    STATE(671), 1,
      sym__token_string,
  [3293] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1539), 2,
      sym__space,
      sym__eol,
  [3304] = 3,
    ACTIONS(1541), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1543), 2,
      sym__space,
      sym__eol,
  [3315] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1545), 2,
      sym__space,
      sym__eol,
  [3326] = 3,
    ACTIONS(1087), 1,
      aux_sym__match_exec_token2,
    STATE(89), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1091), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3337] = 3,
    ACTIONS(1089), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1547), 2,
      sym__space,
      sym__eol,
  [3348] = 3,
    ACTIONS(1549), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym__proxy_jump_repeat1,
    ACTIONS(1551), 2,
      sym__space,
      sym__eol,
  [3359] = 3,
    ACTIONS(1419), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1553), 2,
      sym__space,
      sym__eol,
  [3370] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1545), 2,
      sym__space,
      sym__eol,
  [3381] = 3,
    ACTIONS(1555), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1557), 2,
      sym__space,
      sym__eol,
  [3392] = 3,
    ACTIONS(1555), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1559), 2,
      sym__space,
      sym__eol,
  [3403] = 3,
    ACTIONS(1549), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym__proxy_jump_repeat1,
    ACTIONS(1561), 2,
      sym__space,
      sym__eol,
  [3414] = 2,
    STATE(165), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1563), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [3423] = 2,
    ACTIONS(1567), 1,
      sym_key_sig,
    ACTIONS(1565), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3432] = 3,
    ACTIONS(1438), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1569), 2,
      sym__space,
      sym__eol,
  [3443] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1571), 2,
      sym__space,
      sym__eol,
  [3454] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1573), 2,
      sym__space,
      sym__eol,
  [3465] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1575), 2,
      sym__space,
      sym__eol,
  [3476] = 3,
    ACTIONS(1577), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1580), 2,
      sym__space,
      sym__eol,
  [3487] = 3,
    ACTIONS(1149), 1,
      aux_sym__match_exec_token3,
    STATE(131), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1153), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3498] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1571), 2,
      sym__space,
      sym__eol,
  [3509] = 3,
    ACTIONS(1582), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1585), 2,
      sym__space,
      sym__eol,
  [3520] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1587), 2,
      sym__space,
      sym__eol,
  [3531] = 3,
    ACTIONS(1555), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1589), 2,
      sym__space,
      sym__eol,
  [3542] = 2,
    ACTIONS(1591), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1593), 3,
      aux_sym__hostname_token_token1,
      sym__space,
      sym__eol,
  [3551] = 4,
    ACTIONS(1379), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1381), 1,
      aux_sym__hostname_token_token1,
    STATE(174), 1,
      aux_sym__hostname_string_repeat2,
    STATE(377), 1,
      sym__hostname_token,
  [3564] = 2,
    STATE(106), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1215), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [3573] = 3,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1537), 2,
      sym__space,
      sym__eol,
  [3584] = 2,
    ACTIONS(1597), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1595), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3593] = 3,
    ACTIONS(1599), 1,
      aux_sym__match_exec_token2,
    STATE(256), 1,
      aux_sym__plain_string_repeat1,
    ACTIONS(1165), 2,
      sym__space,
      sym__eol,
  [3604] = 2,
    ACTIONS(1395), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1393), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3613] = 2,
    ACTIONS(1601), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1603), 3,
      aux_sym__file_token_token1,
      sym__space,
      sym__eol,
  [3622] = 3,
    ACTIONS(1605), 1,
      aux_sym__match_exec_token2,
    STATE(256), 1,
      aux_sym__plain_string_repeat1,
    ACTIONS(1098), 2,
      sym__space,
      sym__eol,
  [3633] = 4,
    ACTIONS(1361), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1363), 1,
      aux_sym__file_token_token1,
    STATE(169), 1,
      aux_sym__match_exec_repeat2,
    STATE(438), 1,
      sym__file_token,
  [3646] = 2,
    ACTIONS(1610), 1,
      sym_key_sig,
    ACTIONS(1608), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3655] = 3,
    ACTIONS(1466), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1612), 2,
      sym__space,
      sym__eol,
  [3666] = 2,
    ACTIONS(1395), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1393), 3,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3675] = 3,
    ACTIONS(1432), 1,
      sym__number,
    STATE(661), 1,
      sym_number,
    ACTIONS(1614), 2,
      anon_sym_none,
      sym_ipqos,
  [3686] = 3,
    ACTIONS(1466), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1616), 2,
      sym__space,
      sym__eol,
  [3697] = 3,
    ACTIONS(1541), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1618), 2,
      sym__space,
      sym__eol,
  [3708] = 3,
    ACTIONS(1466), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1616), 2,
      sym__space,
      sym__eol,
  [3719] = 3,
    ACTIONS(1149), 1,
      aux_sym__match_exec_token3,
    STATE(87), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1153), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3730] = 2,
    STATE(750), 1,
      sym__boolean,
    ACTIONS(1620), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3739] = 3,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1622), 2,
      sym__space,
      sym__eol,
  [3750] = 3,
    ACTIONS(1419), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1421), 2,
      sym__space,
      sym__eol,
  [3761] = 3,
    ACTIONS(1624), 1,
      anon_sym_DQUOTE,
    ACTIONS(1627), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1595), 2,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3772] = 2,
    STATE(757), 1,
      sym__boolean,
    ACTIONS(1630), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3781] = 4,
    ACTIONS(1632), 1,
      aux_sym_time_token2,
    ACTIONS(1634), 1,
      aux_sym_time_token3,
    ACTIONS(1636), 1,
      aux_sym_time_token4,
    ACTIONS(1638), 1,
      aux_sym_time_token5,
  [3794] = 1,
    ACTIONS(1640), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3801] = 2,
    ACTIONS(1120), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1122), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3810] = 3,
    ACTIONS(1555), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1642), 2,
      sym__space,
      sym__eol,
  [3821] = 3,
    ACTIONS(1644), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1640), 2,
      sym__space,
      sym__eol,
  [3832] = 2,
    ACTIONS(1649), 1,
      sym_key_sig,
    ACTIONS(1647), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3841] = 3,
    ACTIONS(1651), 1,
      aux_sym__sep_token1,
    ACTIONS(1653), 1,
      sym__space,
    STATE(807), 1,
      sym__sep,
  [3851] = 1,
    ACTIONS(1655), 3,
      anon_sym_none,
      anon_sym_subsystem,
      anon_sym_default,
  [3857] = 2,
    STATE(739), 1,
      sym__boolean,
    ACTIONS(1657), 2,
      anon_sym_yes,
      anon_sym_no,
  [3865] = 2,
    STATE(741), 1,
      sym__boolean,
    ACTIONS(1659), 2,
      anon_sym_yes,
      anon_sym_no,
  [3873] = 3,
    ACTIONS(1661), 1,
      aux_sym__sep_token1,
    ACTIONS(1663), 1,
      sym__space,
    STATE(68), 1,
      sym__sep,
  [3883] = 2,
    STATE(746), 1,
      sym__boolean,
    ACTIONS(1665), 2,
      anon_sym_yes,
      anon_sym_no,
  [3891] = 3,
    ACTIONS(1667), 1,
      aux_sym__sep_token1,
    ACTIONS(1669), 1,
      sym__space,
    STATE(98), 1,
      sym__sep,
  [3901] = 3,
    ACTIONS(1671), 1,
      aux_sym__sep_token1,
    ACTIONS(1673), 1,
      sym__space,
    STATE(119), 1,
      sym__sep,
  [3911] = 3,
    ACTIONS(1432), 1,
      sym__number,
    ACTIONS(1675), 1,
      anon_sym_any,
    STATE(361), 1,
      sym_number,
  [3921] = 3,
    ACTIONS(1677), 1,
      aux_sym__sep_token1,
    ACTIONS(1679), 1,
      sym__space,
    STATE(192), 1,
      sym__sep,
  [3931] = 2,
    STATE(753), 1,
      sym__boolean,
    ACTIONS(1681), 2,
      anon_sym_yes,
      anon_sym_no,
  [3939] = 3,
    ACTIONS(1683), 1,
      aux_sym__sep_token1,
    ACTIONS(1685), 1,
      sym__space,
    STATE(473), 1,
      sym__sep,
  [3949] = 3,
    ACTIONS(1687), 1,
      aux_sym__sep_token1,
    ACTIONS(1689), 1,
      sym__space,
    STATE(216), 1,
      sym__sep,
  [3959] = 3,
    ACTIONS(1691), 1,
      aux_sym__sep_token1,
    ACTIONS(1693), 1,
      sym__space,
    STATE(79), 1,
      sym__sep,
  [3969] = 2,
    STATE(758), 1,
      sym__boolean,
    ACTIONS(1695), 2,
      anon_sym_yes,
      anon_sym_no,
  [3977] = 3,
    ACTIONS(1697), 1,
      aux_sym__sep_token1,
    ACTIONS(1699), 1,
      sym__space,
    STATE(224), 1,
      sym__sep,
  [3987] = 3,
    ACTIONS(1701), 1,
      aux_sym__sep_token1,
    ACTIONS(1703), 1,
      sym__space,
    STATE(41), 1,
      sym__sep,
  [3997] = 3,
    ACTIONS(1705), 1,
      aux_sym__sep_token1,
    ACTIONS(1707), 1,
      sym__space,
    STATE(77), 1,
      sym__sep,
  [4007] = 3,
    ACTIONS(1709), 1,
      aux_sym__sep_token1,
    ACTIONS(1711), 1,
      sym__space,
    STATE(96), 1,
      sym__sep,
  [4017] = 3,
    ACTIONS(1713), 1,
      aux_sym__sep_token1,
    ACTIONS(1715), 1,
      sym__space,
    STATE(188), 1,
      sym__sep,
  [4027] = 3,
    ACTIONS(1717), 1,
      aux_sym__sep_token1,
    ACTIONS(1719), 1,
      sym__space,
    STATE(487), 1,
      sym__sep,
  [4037] = 3,
    ACTIONS(1721), 1,
      sym__space,
    ACTIONS(1723), 1,
      sym__eol,
    STATE(364), 1,
      aux_sym_host_declaration_repeat1,
  [4047] = 3,
    ACTIONS(1725), 1,
      aux_sym__sep_token1,
    ACTIONS(1727), 1,
      sym__space,
    STATE(769), 1,
      sym__sep,
  [4057] = 3,
    ACTIONS(1729), 1,
      aux_sym__sep_token1,
    ACTIONS(1731), 1,
      sym__space,
    STATE(488), 1,
      sym__sep,
  [4067] = 3,
    ACTIONS(1733), 1,
      aux_sym__sep_token1,
    ACTIONS(1735), 1,
      sym__space,
    STATE(489), 1,
      sym__sep,
  [4077] = 3,
    ACTIONS(1737), 1,
      aux_sym__sep_token1,
    ACTIONS(1739), 1,
      sym__space,
    STATE(99), 1,
      sym__sep,
  [4087] = 3,
    ACTIONS(1741), 1,
      aux_sym__sep_token1,
    ACTIONS(1743), 1,
      sym__space,
    STATE(149), 1,
      sym__sep,
  [4097] = 3,
    ACTIONS(1745), 1,
      aux_sym__sep_token1,
    ACTIONS(1747), 1,
      sym__space,
    STATE(786), 1,
      sym__sep,
  [4107] = 3,
    ACTIONS(1749), 1,
      aux_sym__sep_token1,
    ACTIONS(1751), 1,
      sym__space,
    STATE(125), 1,
      sym__sep,
  [4117] = 3,
    ACTIONS(1753), 1,
      aux_sym__sep_token1,
    ACTIONS(1755), 1,
      sym__space,
    STATE(126), 1,
      sym__sep,
  [4127] = 3,
    ACTIONS(1757), 1,
      aux_sym__sep_token1,
    ACTIONS(1759), 1,
      sym__space,
    STATE(128), 1,
      sym__sep,
  [4137] = 3,
    ACTIONS(1761), 1,
      aux_sym__sep_token1,
    ACTIONS(1763), 1,
      sym__space,
    STATE(129), 1,
      sym__sep,
  [4147] = 3,
    ACTIONS(1765), 1,
      aux_sym__sep_token1,
    ACTIONS(1767), 1,
      sym__space,
    STATE(130), 1,
      sym__sep,
  [4157] = 3,
    ACTIONS(1769), 1,
      sym__space,
    ACTIONS(1771), 1,
      sym__eol,
    STATE(365), 1,
      aux_sym_match_declaration_repeat1,
  [4167] = 3,
    ACTIONS(1773), 1,
      aux_sym__sep_token1,
    ACTIONS(1775), 1,
      sym__space,
    STATE(180), 1,
      sym__sep,
  [4177] = 3,
    ACTIONS(1777), 1,
      sym__space,
    ACTIONS(1779), 1,
      sym__eol,
    STATE(370), 1,
      aux_sym__canonical_domains_repeat1,
  [4187] = 3,
    ACTIONS(1781), 1,
      aux_sym__sep_token1,
    ACTIONS(1783), 1,
      sym__space,
    STATE(774), 1,
      sym__sep,
  [4197] = 3,
    ACTIONS(1785), 1,
      sym__space,
    ACTIONS(1787), 1,
      sym__eol,
    STATE(371), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4207] = 3,
    ACTIONS(1789), 1,
      anon_sym_COMMA,
    ACTIONS(1791), 1,
      anon_sym_COLON,
    STATE(372), 1,
      aux_sym__cnames_map_repeat1,
  [4217] = 3,
    ACTIONS(1793), 1,
      aux_sym__sep_token1,
    ACTIONS(1795), 1,
      sym__space,
    STATE(817), 1,
      sym__sep,
  [4227] = 3,
    ACTIONS(1797), 1,
      aux_sym__sep_token1,
    ACTIONS(1799), 1,
      sym__space,
    STATE(101), 1,
      sym__sep,
  [4237] = 3,
    ACTIONS(1801), 1,
      aux_sym__sep_token1,
    ACTIONS(1803), 1,
      sym__space,
    STATE(105), 1,
      sym__sep,
  [4247] = 3,
    ACTIONS(1805), 1,
      aux_sym__sep_token1,
    ACTIONS(1807), 1,
      sym__space,
    STATE(494), 1,
      sym__sep,
  [4257] = 3,
    ACTIONS(1809), 1,
      aux_sym__sep_token1,
    ACTIONS(1811), 1,
      sym__space,
    STATE(258), 1,
      sym__sep,
  [4267] = 3,
    ACTIONS(1813), 1,
      aux_sym__sep_token1,
    ACTIONS(1815), 1,
      sym__space,
    STATE(109), 1,
      sym__sep,
  [4277] = 3,
    ACTIONS(1817), 1,
      sym__space,
    ACTIONS(1819), 1,
      sym__eol,
    STATE(374), 1,
      aux_sym__dynamic_forward_repeat1,
  [4287] = 3,
    ACTIONS(932), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1165), 1,
      anon_sym_COLON,
    STATE(375), 1,
      aux_sym__plain_string_repeat1,
  [4297] = 3,
    ACTIONS(1821), 1,
      sym__space,
    ACTIONS(1823), 1,
      sym__eol,
    STATE(376), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4307] = 3,
    ACTIONS(1825), 1,
      aux_sym__sep_token1,
    ACTIONS(1827), 1,
      sym__space,
    STATE(497), 1,
      sym__sep,
  [4317] = 3,
    ACTIONS(1829), 1,
      aux_sym__sep_token1,
    ACTIONS(1831), 1,
      sym__space,
    STATE(110), 1,
      sym__sep,
  [4327] = 3,
    ACTIONS(1833), 1,
      aux_sym__sep_token1,
    ACTIONS(1835), 1,
      sym__space,
    STATE(42), 1,
      sym__sep,
  [4337] = 3,
    ACTIONS(1837), 1,
      aux_sym__sep_token1,
    ACTIONS(1839), 1,
      sym__space,
    STATE(152), 1,
      sym__sep,
  [4347] = 3,
    ACTIONS(1841), 1,
      aux_sym__sep_token1,
    ACTIONS(1843), 1,
      sym__space,
    STATE(784), 1,
      sym__sep,
  [4357] = 3,
    ACTIONS(1845), 1,
      aux_sym__sep_token1,
    ACTIONS(1847), 1,
      sym__space,
    STATE(62), 1,
      sym__sep,
  [4367] = 3,
    ACTIONS(1849), 1,
      aux_sym__sep_token1,
    ACTIONS(1851), 1,
      sym__space,
    STATE(82), 1,
      sym__sep,
  [4377] = 3,
    ACTIONS(1853), 1,
      aux_sym__sep_token1,
    ACTIONS(1855), 1,
      sym__space,
    STATE(114), 1,
      sym__sep,
  [4387] = 3,
    ACTIONS(1857), 1,
      sym__space,
    ACTIONS(1859), 1,
      sym__eol,
    STATE(378), 1,
      aux_sym__ignore_unknown_repeat1,
  [4397] = 3,
    ACTIONS(1861), 1,
      aux_sym__sep_token1,
    ACTIONS(1863), 1,
      sym__space,
    STATE(787), 1,
      sym__sep,
  [4407] = 3,
    ACTIONS(1865), 1,
      aux_sym__sep_token1,
    ACTIONS(1867), 1,
      sym__space,
    STATE(674), 1,
      sym__sep,
  [4417] = 3,
    ACTIONS(1869), 1,
      aux_sym__sep_token1,
    ACTIONS(1871), 1,
      sym__space,
    STATE(278), 1,
      sym__sep,
  [4427] = 3,
    ACTIONS(1873), 1,
      aux_sym__sep_token1,
    ACTIONS(1875), 1,
      sym__space,
    STATE(666), 1,
      sym__sep,
  [4437] = 3,
    ACTIONS(1877), 1,
      aux_sym__sep_token1,
    ACTIONS(1879), 1,
      sym__space,
    STATE(279), 1,
      sym__sep,
  [4447] = 3,
    ACTIONS(1881), 1,
      aux_sym__sep_token1,
    ACTIONS(1883), 1,
      sym__space,
    STATE(812), 1,
      sym__sep,
  [4457] = 3,
    ACTIONS(1885), 1,
      aux_sym__sep_token1,
    ACTIONS(1887), 1,
      sym__space,
    STATE(280), 1,
      sym__sep,
  [4467] = 3,
    ACTIONS(1889), 1,
      aux_sym__sep_token1,
    ACTIONS(1891), 1,
      sym__space,
    STATE(115), 1,
      sym__sep,
  [4477] = 3,
    ACTIONS(1893), 1,
      aux_sym__sep_token1,
    ACTIONS(1895), 1,
      sym__space,
    STATE(795), 1,
      sym__sep,
  [4487] = 3,
    ACTIONS(1897), 1,
      aux_sym__sep_token1,
    ACTIONS(1899), 1,
      sym__space,
    STATE(282), 1,
      sym__sep,
  [4497] = 3,
    ACTIONS(1901), 1,
      aux_sym__sep_token1,
    ACTIONS(1903), 1,
      sym__space,
    STATE(156), 1,
      sym__sep,
  [4507] = 3,
    ACTIONS(1905), 1,
      sym__space,
    ACTIONS(1907), 1,
      sym__eol,
    STATE(381), 1,
      aux_sym__permit_remote_open_repeat1,
  [4517] = 3,
    ACTIONS(1909), 1,
      aux_sym__sep_token1,
    ACTIONS(1911), 1,
      sym__space,
    STATE(157), 1,
      sym__sep,
  [4527] = 3,
    ACTIONS(1913), 1,
      aux_sym__sep_token1,
    ACTIONS(1915), 1,
      sym__space,
    STATE(285), 1,
      sym__sep,
  [4537] = 3,
    ACTIONS(1917), 1,
      aux_sym__sep_token1,
    ACTIONS(1919), 1,
      sym__space,
    STATE(266), 1,
      sym__sep,
  [4547] = 1,
    ACTIONS(1921), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4553] = 1,
    ACTIONS(1923), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4559] = 3,
    ACTIONS(1925), 1,
      aux_sym__sep_token1,
    ACTIONS(1927), 1,
      sym__space,
    STATE(287), 1,
      sym__sep,
  [4569] = 3,
    ACTIONS(1929), 1,
      aux_sym__sep_token1,
    ACTIONS(1931), 1,
      sym__space,
    STATE(159), 1,
      sym__sep,
  [4579] = 3,
    ACTIONS(1933), 1,
      aux_sym__sep_token1,
    ACTIONS(1935), 1,
      sym__space,
    STATE(56), 1,
      sym__sep,
  [4589] = 2,
    ACTIONS(1937), 1,
      aux_sym_bytes_token1,
    ACTIONS(1939), 2,
      sym__space,
      sym__eol,
  [4597] = 3,
    ACTIONS(1941), 1,
      aux_sym__sep_token1,
    ACTIONS(1943), 1,
      sym__space,
    STATE(270), 1,
      sym__sep,
  [4607] = 3,
    ACTIONS(1945), 1,
      aux_sym__sep_token1,
    ACTIONS(1947), 1,
      sym__space,
    STATE(291), 1,
      sym__sep,
  [4617] = 3,
    ACTIONS(1949), 1,
      aux_sym__sep_token1,
    ACTIONS(1951), 1,
      sym__space,
    STATE(160), 1,
      sym__sep,
  [4627] = 3,
    ACTIONS(1953), 1,
      sym__space,
    ACTIONS(1955), 1,
      sym__eol,
    STATE(383), 1,
      aux_sym__send_env_repeat1,
  [4637] = 3,
    ACTIONS(1957), 1,
      aux_sym__sep_token1,
    ACTIONS(1959), 1,
      sym__space,
    STATE(36), 1,
      sym__sep,
  [4647] = 3,
    ACTIONS(1961), 1,
      sym__space,
    ACTIONS(1963), 1,
      sym__eol,
    STATE(384), 1,
      aux_sym__set_env_repeat1,
  [4657] = 2,
    ACTIONS(1965), 1,
      anon_sym_COLON,
    ACTIONS(1967), 2,
      sym__space,
      sym__eol,
  [4665] = 3,
    ACTIONS(1969), 1,
      sym__space,
    ACTIONS(1971), 1,
      sym__eol,
    STATE(386), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [4675] = 3,
    ACTIONS(1973), 1,
      sym__space,
    ACTIONS(1975), 1,
      sym__eol,
    STATE(387), 1,
      aux_sym_host_declaration_repeat1,
  [4685] = 3,
    ACTIONS(1977), 1,
      sym__space,
    ACTIONS(1979), 1,
      sym__eol,
    STATE(388), 1,
      aux_sym_host_declaration_repeat1,
  [4695] = 3,
    ACTIONS(916), 1,
      sym__eol,
    ACTIONS(1981), 1,
      sym__space,
    STATE(389), 1,
      aux_sym_match_declaration_repeat1,
  [4705] = 2,
    ACTIONS(1983), 1,
      sym__number,
    ACTIONS(1985), 2,
      sym__space,
      sym__eol,
  [4713] = 2,
    ACTIONS(1987), 1,
      sym__number,
    ACTIONS(1985), 2,
      sym__space,
      sym__eol,
  [4721] = 2,
    ACTIONS(1989), 1,
      sym__number,
    ACTIONS(1985), 2,
      sym__space,
      sym__eol,
  [4729] = 2,
    ACTIONS(1991), 1,
      sym__number,
    ACTIONS(1985), 2,
      sym__space,
      sym__eol,
  [4737] = 3,
    ACTIONS(1777), 1,
      sym__space,
    ACTIONS(1993), 1,
      sym__eol,
    STATE(391), 1,
      aux_sym__canonical_domains_repeat1,
  [4747] = 3,
    ACTIONS(1785), 1,
      sym__space,
    ACTIONS(1995), 1,
      sym__eol,
    STATE(392), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4757] = 3,
    ACTIONS(1789), 1,
      anon_sym_COMMA,
    ACTIONS(1997), 1,
      anon_sym_COLON,
    STATE(393), 1,
      aux_sym__cnames_map_repeat1,
  [4767] = 3,
    ACTIONS(1999), 1,
      anon_sym_DQUOTE,
    ACTIONS(2001), 1,
      aux_sym__match_exec_token3,
    STATE(397), 1,
      aux_sym__string_repeat1,
  [4777] = 3,
    ACTIONS(1817), 1,
      sym__space,
    ACTIONS(2003), 1,
      sym__eol,
    STATE(399), 1,
      aux_sym__dynamic_forward_repeat1,
  [4787] = 3,
    ACTIONS(1098), 1,
      anon_sym_COLON,
    ACTIONS(2005), 1,
      aux_sym__match_exec_token2,
    STATE(375), 1,
      aux_sym__plain_string_repeat1,
  [4797] = 3,
    ACTIONS(1821), 1,
      sym__space,
    ACTIONS(2008), 1,
      sym__eol,
    STATE(400), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4807] = 2,
    ACTIONS(2012), 1,
      aux_sym__match_exec_token3,
    ACTIONS(2010), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [4815] = 3,
    ACTIONS(1857), 1,
      sym__space,
    ACTIONS(2014), 1,
      sym__eol,
    STATE(405), 1,
      aux_sym__ignore_unknown_repeat1,
  [4825] = 3,
    ACTIONS(2016), 1,
      anon_sym_DQUOTE,
    ACTIONS(2018), 1,
      anon_sym_COMMA,
    STATE(411), 1,
      aux_sym__log_verbose_repeat2,
  [4835] = 3,
    ACTIONS(1432), 1,
      sym__number,
    ACTIONS(2020), 1,
      anon_sym_STAR,
    STATE(680), 1,
      sym_number,
  [4845] = 3,
    ACTIONS(1905), 1,
      sym__space,
    ACTIONS(2022), 1,
      sym__eol,
    STATE(419), 1,
      aux_sym__permit_remote_open_repeat1,
  [4855] = 3,
    ACTIONS(2024), 1,
      aux_sym__match_exec_token2,
    STATE(141), 1,
      aux_sym__plain_string_repeat1,
    STATE(212), 1,
      sym__plain_string,
  [4865] = 3,
    ACTIONS(1953), 1,
      sym__space,
    ACTIONS(2026), 1,
      sym__eol,
    STATE(427), 1,
      aux_sym__send_env_repeat1,
  [4875] = 3,
    ACTIONS(1961), 1,
      sym__space,
    ACTIONS(2028), 1,
      sym__eol,
    STATE(428), 1,
      aux_sym__set_env_repeat1,
  [4885] = 3,
    ACTIONS(1432), 1,
      sym__number,
    ACTIONS(2030), 1,
      anon_sym_any,
    STATE(693), 1,
      sym_number,
  [4895] = 3,
    ACTIONS(1969), 1,
      sym__space,
    ACTIONS(2032), 1,
      sym__eol,
    STATE(429), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [4905] = 3,
    ACTIONS(2034), 1,
      sym__space,
    ACTIONS(2036), 1,
      sym__eol,
    STATE(388), 1,
      aux_sym_host_declaration_repeat1,
  [4915] = 3,
    ACTIONS(2038), 1,
      sym__space,
    ACTIONS(2041), 1,
      sym__eol,
    STATE(388), 1,
      aux_sym_host_declaration_repeat1,
  [4925] = 3,
    ACTIONS(2043), 1,
      sym__space,
    ACTIONS(2046), 1,
      sym__eol,
    STATE(389), 1,
      aux_sym_match_declaration_repeat1,
  [4935] = 3,
    ACTIONS(1634), 1,
      aux_sym_time_token3,
    ACTIONS(1636), 1,
      aux_sym_time_token4,
    ACTIONS(1638), 1,
      aux_sym_time_token5,
  [4945] = 3,
    ACTIONS(2048), 1,
      sym__space,
    ACTIONS(2051), 1,
      sym__eol,
    STATE(391), 1,
      aux_sym__canonical_domains_repeat1,
  [4955] = 3,
    ACTIONS(2053), 1,
      sym__space,
    ACTIONS(2056), 1,
      sym__eol,
    STATE(392), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4965] = 3,
    ACTIONS(1640), 1,
      anon_sym_COLON,
    ACTIONS(2058), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      aux_sym__cnames_map_repeat1,
  [4975] = 1,
    ACTIONS(1428), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4981] = 1,
    ACTIONS(1445), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4987] = 1,
    ACTIONS(2061), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [4993] = 3,
    ACTIONS(2063), 1,
      anon_sym_DQUOTE,
    ACTIONS(2065), 1,
      aux_sym__match_exec_token3,
    STATE(397), 1,
      aux_sym__string_repeat1,
  [5003] = 1,
    ACTIONS(2068), 3,
      anon_sym_DQUOTE,
      sym__space,
      sym__eol,
  [5009] = 3,
    ACTIONS(2070), 1,
      sym__space,
    ACTIONS(2073), 1,
      sym__eol,
    STATE(399), 1,
      aux_sym__dynamic_forward_repeat1,
  [5019] = 3,
    ACTIONS(2075), 1,
      sym__space,
    ACTIONS(2078), 1,
      sym__eol,
    STATE(400), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [5029] = 3,
    ACTIONS(2080), 1,
      aux_sym__sep_token1,
    ACTIONS(2082), 1,
      sym__space,
    STATE(462), 1,
      sym__sep,
  [5039] = 3,
    ACTIONS(2084), 1,
      aux_sym__sep_token1,
    ACTIONS(2086), 1,
      sym__space,
    STATE(78), 1,
      sym__sep,
  [5049] = 3,
    ACTIONS(2088), 1,
      aux_sym__sep_token1,
    ACTIONS(2090), 1,
      sym__space,
    STATE(408), 1,
      sym__sep,
  [5059] = 3,
    ACTIONS(2092), 1,
      aux_sym__sep_token1,
    ACTIONS(2094), 1,
      sym__space,
    STATE(409), 1,
      sym__sep,
  [5069] = 3,
    ACTIONS(2096), 1,
      sym__space,
    ACTIONS(2099), 1,
      sym__eol,
    STATE(405), 1,
      aux_sym__ignore_unknown_repeat1,
  [5079] = 3,
    ACTIONS(2101), 1,
      aux_sym__sep_token1,
    ACTIONS(2103), 1,
      sym__space,
    STATE(117), 1,
      sym__sep,
  [5089] = 1,
    ACTIONS(1473), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5095] = 2,
    ACTIONS(2107), 1,
      anon_sym_inet,
    ACTIONS(2105), 2,
      anon_sym_any,
      anon_sym_inet6,
  [5103] = 2,
    STATE(643), 1,
      sym__boolean,
    ACTIONS(2109), 2,
      anon_sym_yes,
      anon_sym_no,
  [5111] = 3,
    ACTIONS(2111), 1,
      aux_sym__sep_token1,
    ACTIONS(2113), 1,
      sym__space,
    STATE(121), 1,
      sym__sep,
  [5121] = 3,
    ACTIONS(2018), 1,
      anon_sym_COMMA,
    ACTIONS(2115), 1,
      anon_sym_DQUOTE,
    STATE(451), 1,
      aux_sym__log_verbose_repeat2,
  [5131] = 3,
    ACTIONS(2117), 1,
      aux_sym__sep_token1,
    ACTIONS(2119), 1,
      sym__space,
    STATE(122), 1,
      sym__sep,
  [5141] = 1,
    ACTIONS(2121), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5147] = 3,
    ACTIONS(2123), 1,
      aux_sym__sep_token1,
    ACTIONS(2125), 1,
      sym__space,
    STATE(415), 1,
      sym__sep,
  [5157] = 2,
    STATE(662), 1,
      sym__boolean,
    ACTIONS(2127), 2,
      anon_sym_yes,
      anon_sym_no,
  [5165] = 2,
    STATE(664), 1,
      sym__boolean,
    ACTIONS(2129), 2,
      anon_sym_yes,
      anon_sym_no,
  [5173] = 1,
    ACTIONS(1495), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5179] = 3,
    ACTIONS(1432), 1,
      sym__number,
    ACTIONS(2131), 1,
      anon_sym_STAR,
    STATE(793), 1,
      sym_number,
  [5189] = 3,
    ACTIONS(2133), 1,
      sym__space,
    ACTIONS(2136), 1,
      sym__eol,
    STATE(419), 1,
      aux_sym__permit_remote_open_repeat1,
  [5199] = 1,
    ACTIONS(1500), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5205] = 3,
    ACTIONS(2138), 1,
      aux_sym__sep_token1,
    ACTIONS(2140), 1,
      sym__space,
    STATE(416), 1,
      sym__sep,
  [5215] = 1,
    ACTIONS(2142), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5221] = 2,
    ACTIONS(2146), 1,
      sym_sig,
    ACTIONS(2144), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5229] = 1,
    ACTIONS(2148), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5235] = 3,
    ACTIONS(2150), 1,
      aux_sym__sep_token1,
    ACTIONS(2152), 1,
      sym__space,
    STATE(678), 1,
      sym__sep,
  [5245] = 2,
    STATE(705), 1,
      sym__boolean,
    ACTIONS(2154), 2,
      anon_sym_yes,
      anon_sym_no,
  [5253] = 3,
    ACTIONS(2156), 1,
      sym__space,
    ACTIONS(2159), 1,
      sym__eol,
    STATE(427), 1,
      aux_sym__send_env_repeat1,
  [5263] = 3,
    ACTIONS(2161), 1,
      sym__space,
    ACTIONS(2164), 1,
      sym__eol,
    STATE(428), 1,
      aux_sym__set_env_repeat1,
  [5273] = 3,
    ACTIONS(2166), 1,
      sym__space,
    ACTIONS(2169), 1,
      sym__eol,
    STATE(429), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5283] = 3,
    ACTIONS(2171), 1,
      aux_sym__sep_token1,
    ACTIONS(2173), 1,
      sym__space,
    STATE(65), 1,
      sym__sep,
  [5293] = 2,
    STATE(708), 1,
      sym__boolean,
    ACTIONS(2175), 2,
      anon_sym_yes,
      anon_sym_no,
  [5301] = 2,
    STATE(711), 1,
      sym__boolean,
    ACTIONS(2177), 2,
      anon_sym_yes,
      anon_sym_no,
  [5309] = 3,
    ACTIONS(2179), 1,
      aux_sym__sep_token1,
    ACTIONS(2181), 1,
      sym__space,
    STATE(423), 1,
      sym__sep,
  [5319] = 3,
    ACTIONS(2183), 1,
      aux_sym__sep_token1,
    ACTIONS(2185), 1,
      sym__space,
    STATE(49), 1,
      sym__sep,
  [5329] = 3,
    ACTIONS(2187), 1,
      aux_sym__sep_token1,
    ACTIONS(2189), 1,
      sym__space,
    STATE(426), 1,
      sym__sep,
  [5339] = 3,
    ACTIONS(2191), 1,
      aux_sym__sep_token1,
    ACTIONS(2193), 1,
      sym__space,
    STATE(200), 1,
      sym__sep,
  [5349] = 2,
    STATE(513), 1,
      sym__boolean,
    ACTIONS(2195), 2,
      anon_sym_yes,
      anon_sym_no,
  [5357] = 2,
    ACTIONS(2199), 1,
      aux_sym__match_exec_token3,
    ACTIONS(2197), 2,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
  [5365] = 2,
    STATE(514), 1,
      sym__boolean,
    ACTIONS(2201), 2,
      anon_sym_yes,
      anon_sym_no,
  [5373] = 3,
    ACTIONS(2203), 1,
      anon_sym_DQUOTE,
    ACTIONS(2205), 1,
      anon_sym_COMMA,
    STATE(460), 1,
      aux_sym__match_localnetwork_repeat2,
  [5383] = 2,
    STATE(516), 1,
      sym__boolean,
    ACTIONS(2207), 2,
      anon_sym_yes,
      anon_sym_no,
  [5391] = 2,
    STATE(521), 1,
      sym__boolean,
    ACTIONS(2209), 2,
      anon_sym_yes,
      anon_sym_no,
  [5399] = 3,
    ACTIONS(2211), 1,
      aux_sym__sep_token1,
    ACTIONS(2213), 1,
      sym__space,
    STATE(431), 1,
      sym__sep,
  [5409] = 2,
    STATE(539), 1,
      sym__boolean,
    ACTIONS(2215), 2,
      anon_sym_yes,
      anon_sym_no,
  [5417] = 2,
    STATE(551), 1,
      sym__boolean,
    ACTIONS(2217), 2,
      anon_sym_yes,
      anon_sym_no,
  [5425] = 2,
    ACTIONS(2219), 1,
      sym__number,
    ACTIONS(2221), 2,
      sym__space,
      sym__eol,
  [5433] = 2,
    ACTIONS(2223), 1,
      sym__number,
    ACTIONS(2221), 2,
      sym__space,
      sym__eol,
  [5441] = 2,
    ACTIONS(2225), 1,
      sym__number,
    ACTIONS(2221), 2,
      sym__space,
      sym__eol,
  [5449] = 3,
    ACTIONS(2227), 1,
      aux_sym__sep_token1,
    ACTIONS(2229), 1,
      sym__space,
    STATE(432), 1,
      sym__sep,
  [5459] = 2,
    STATE(567), 1,
      sym__boolean,
    ACTIONS(2231), 2,
      anon_sym_yes,
      anon_sym_no,
  [5467] = 3,
    ACTIONS(2233), 1,
      anon_sym_DQUOTE,
    ACTIONS(2235), 1,
      anon_sym_COMMA,
    STATE(451), 1,
      aux_sym__log_verbose_repeat2,
  [5477] = 2,
    STATE(569), 1,
      sym__boolean,
    ACTIONS(2238), 2,
      anon_sym_yes,
      anon_sym_no,
  [5485] = 3,
    ACTIONS(1432), 1,
      sym__number,
    ACTIONS(2240), 1,
      anon_sym_STAR,
    STATE(471), 1,
      sym_number,
  [5495] = 2,
    STATE(575), 1,
      sym__boolean,
    ACTIONS(2242), 2,
      anon_sym_yes,
      anon_sym_no,
  [5503] = 3,
    ACTIONS(2244), 1,
      aux_sym__sep_token1,
    ACTIONS(2246), 1,
      sym__space,
    STATE(698), 1,
      sym__sep,
  [5513] = 2,
    STATE(588), 1,
      sym__boolean,
    ACTIONS(2248), 2,
      anon_sym_yes,
      anon_sym_no,
  [5521] = 3,
    ACTIONS(2250), 1,
      aux_sym__sep_token1,
    ACTIONS(2252), 1,
      sym__space,
    STATE(700), 1,
      sym__sep,
  [5531] = 3,
    ACTIONS(2254), 1,
      aux_sym__sep_token1,
    ACTIONS(2256), 1,
      sym__space,
    STATE(92), 1,
      sym__sep,
  [5541] = 3,
    ACTIONS(2258), 1,
      aux_sym__sep_token1,
    ACTIONS(2260), 1,
      sym__space,
    STATE(154), 1,
      sym__sep,
  [5551] = 3,
    ACTIONS(2205), 1,
      anon_sym_COMMA,
    ACTIONS(2262), 1,
      anon_sym_DQUOTE,
    STATE(475), 1,
      aux_sym__match_localnetwork_repeat2,
  [5561] = 1,
    ACTIONS(1580), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5567] = 2,
    STATE(635), 1,
      sym__boolean,
    ACTIONS(2264), 2,
      anon_sym_yes,
      anon_sym_no,
  [5575] = 3,
    ACTIONS(2266), 1,
      aux_sym__sep_token1,
    ACTIONS(2268), 1,
      sym__space,
    STATE(54), 1,
      sym__sep,
  [5585] = 3,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
    ACTIONS(2270), 1,
      anon_sym_DQUOTE,
    STATE(477), 1,
      aux_sym__match_value_repeat4,
  [5595] = 3,
    ACTIONS(2272), 1,
      aux_sym__sep_token1,
    ACTIONS(2274), 1,
      sym__space,
    STATE(48), 1,
      sym__sep,
  [5605] = 3,
    ACTIONS(2276), 1,
      aux_sym__sep_token1,
    ACTIONS(2278), 1,
      sym__space,
    STATE(437), 1,
      sym__sep,
  [5615] = 3,
    ACTIONS(2280), 1,
      aux_sym__sep_token1,
    ACTIONS(2282), 1,
      sym__space,
    STATE(439), 1,
      sym__sep,
  [5625] = 3,
    ACTIONS(2284), 1,
      aux_sym_time_token3,
    ACTIONS(2286), 1,
      aux_sym_time_token4,
    ACTIONS(2288), 1,
      aux_sym_time_token5,
  [5635] = 3,
    ACTIONS(2290), 1,
      aux_sym__sep_token1,
    ACTIONS(2292), 1,
      sym__space,
    STATE(707), 1,
      sym__sep,
  [5645] = 3,
    ACTIONS(1432), 1,
      sym__number,
    ACTIONS(2294), 1,
      anon_sym_STAR,
    STATE(760), 1,
      sym_number,
  [5655] = 1,
    ACTIONS(2296), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5661] = 1,
    ACTIONS(2298), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5667] = 2,
    STATE(658), 1,
      sym__boolean,
    ACTIONS(2300), 2,
      anon_sym_yes,
      anon_sym_no,
  [5675] = 3,
    ACTIONS(2302), 1,
      aux_sym__sep_token1,
    ACTIONS(2304), 1,
      sym__space,
    STATE(441), 1,
      sym__sep,
  [5685] = 3,
    ACTIONS(2306), 1,
      anon_sym_DQUOTE,
    ACTIONS(2308), 1,
      anon_sym_COMMA,
    STATE(475), 1,
      aux_sym__match_localnetwork_repeat2,
  [5695] = 3,
    ACTIONS(2311), 1,
      aux_sym__sep_token1,
    ACTIONS(2313), 1,
      sym__space,
    STATE(710), 1,
      sym__sep,
  [5705] = 3,
    ACTIONS(2315), 1,
      anon_sym_DQUOTE,
    ACTIONS(2317), 1,
      anon_sym_COMMA,
    STATE(477), 1,
      aux_sym__match_value_repeat4,
  [5715] = 2,
    ACTIONS(2320), 1,
      sym__number,
    ACTIONS(2322), 2,
      sym__space,
      sym__eol,
  [5723] = 2,
    ACTIONS(2324), 1,
      sym__number,
    ACTIONS(2322), 2,
      sym__space,
      sym__eol,
  [5731] = 2,
    ACTIONS(2326), 1,
      sym__number,
    ACTIONS(2328), 2,
      sym__space,
      sym__eol,
  [5739] = 3,
    ACTIONS(2330), 1,
      aux_sym__sep_token1,
    ACTIONS(2332), 1,
      sym__space,
    STATE(47), 1,
      sym__sep,
  [5749] = 3,
    ACTIONS(2334), 1,
      aux_sym__sep_token1,
    ACTIONS(2336), 1,
      sym__space,
    STATE(442), 1,
      sym__sep,
  [5759] = 3,
    ACTIONS(2338), 1,
      aux_sym__sep_token1,
    ACTIONS(2340), 1,
      sym__space,
    STATE(52), 1,
      sym__sep,
  [5769] = 1,
    ACTIONS(1269), 3,
      aux_sym__match_exec_token2,
      sym__space,
      sym__eol,
  [5775] = 3,
    ACTIONS(2342), 1,
      aux_sym__sep_token1,
    ACTIONS(2344), 1,
      sym__space,
    STATE(444), 1,
      sym__sep,
  [5785] = 3,
    ACTIONS(2346), 1,
      aux_sym__sep_token1,
    ACTIONS(2348), 1,
      sym__space,
    STATE(713), 1,
      sym__sep,
  [5795] = 2,
    STATE(683), 1,
      sym__boolean,
    ACTIONS(2350), 2,
      anon_sym_yes,
      anon_sym_no,
  [5803] = 2,
    STATE(685), 1,
      sym__boolean,
    ACTIONS(2352), 2,
      anon_sym_yes,
      anon_sym_no,
  [5811] = 2,
    STATE(689), 1,
      sym__boolean,
    ACTIONS(2354), 2,
      anon_sym_yes,
      anon_sym_no,
  [5819] = 3,
    ACTIONS(2356), 1,
      aux_sym__sep_token1,
    ACTIONS(2358), 1,
      sym__space,
    STATE(445), 1,
      sym__sep,
  [5829] = 3,
    ACTIONS(2360), 1,
      aux_sym__sep_token1,
    ACTIONS(2362), 1,
      sym__space,
    STATE(167), 1,
      sym__sep,
  [5839] = 3,
    ACTIONS(2364), 1,
      aux_sym__sep_token1,
    ACTIONS(2366), 1,
      sym__space,
    STATE(450), 1,
      sym__sep,
  [5849] = 3,
    ACTIONS(2368), 1,
      aux_sym__sep_token1,
    ACTIONS(2370), 1,
      sym__space,
    STATE(452), 1,
      sym__sep,
  [5859] = 2,
    STATE(709), 1,
      sym__boolean,
    ACTIONS(2372), 2,
      anon_sym_yes,
      anon_sym_no,
  [5867] = 3,
    ACTIONS(2374), 1,
      aux_sym__sep_token1,
    ACTIONS(2376), 1,
      sym__space,
    STATE(454), 1,
      sym__sep,
  [5877] = 3,
    ACTIONS(2378), 1,
      aux_sym__sep_token1,
    ACTIONS(2380), 1,
      sym__space,
    STATE(276), 1,
      sym__sep,
  [5887] = 3,
    ACTIONS(2382), 1,
      anon_sym_none,
    ACTIONS(2384), 1,
      sym__number,
    STATE(716), 1,
      sym_bytes,
  [5897] = 3,
    ACTIONS(2386), 1,
      aux_sym__sep_token1,
    ACTIONS(2388), 1,
      sym__space,
    STATE(456), 1,
      sym__sep,
  [5907] = 3,
    ACTIONS(2390), 1,
      aux_sym__sep_token1,
    ACTIONS(2392), 1,
      sym__space,
    STATE(237), 1,
      sym__sep,
  [5917] = 3,
    ACTIONS(2394), 1,
      aux_sym__sep_token1,
    ACTIONS(2396), 1,
      sym__space,
    STATE(172), 1,
      sym__sep,
  [5927] = 3,
    ACTIONS(2398), 1,
      aux_sym__sep_token1,
    ACTIONS(2400), 1,
      sym__space,
    STATE(116), 1,
      sym__sep,
  [5937] = 1,
    ACTIONS(1454), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5943] = 1,
    ACTIONS(2402), 2,
      sym__space,
      sym__eol,
  [5948] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [5953] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [5958] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [5963] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [5968] = 1,
    ACTIONS(2406), 2,
      sym__space,
      sym__eol,
  [5973] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [5978] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [5983] = 1,
    ACTIONS(2408), 2,
      sym__space,
      sym__eol,
  [5988] = 2,
    ACTIONS(1114), 1,
      sym__number,
    STATE(624), 1,
      sym_time,
  [5995] = 1,
    ACTIONS(2410), 2,
      sym__space,
      sym__eol,
  [6000] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [6005] = 1,
    ACTIONS(2414), 2,
      sym__space,
      sym__eol,
  [6010] = 1,
    ACTIONS(2416), 2,
      sym__space,
      sym__eol,
  [6015] = 1,
    ACTIONS(1985), 2,
      sym__space,
      sym__eol,
  [6020] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6025] = 1,
    ACTIONS(2418), 2,
      sym__space,
      sym__eol,
  [6030] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6035] = 1,
    ACTIONS(2420), 2,
      sym__space,
      sym__eol,
  [6040] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6045] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6050] = 2,
    ACTIONS(2001), 1,
      aux_sym__match_exec_token3,
    STATE(373), 1,
      aux_sym__string_repeat1,
  [6057] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6062] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6067] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6072] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6077] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6082] = 1,
    ACTIONS(2422), 2,
      sym__space,
      sym__eol,
  [6087] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6092] = 1,
    ACTIONS(2424), 2,
      anon_sym_DQUOTE,
      aux_sym__match_exec_token3,
  [6097] = 2,
    ACTIONS(1432), 1,
      sym__number,
    STATE(398), 1,
      sym_number,
  [6104] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6109] = 1,
    ACTIONS(2426), 2,
      sym__space,
      sym__eol,
  [6114] = 1,
    ACTIONS(2428), 2,
      sym__space,
      sym__eol,
  [6119] = 1,
    ACTIONS(2430), 2,
      sym__space,
      sym__eol,
  [6124] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6129] = 1,
    ACTIONS(2432), 2,
      sym__space,
      sym__eol,
  [6134] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6139] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6144] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6149] = 1,
    ACTIONS(2434), 2,
      sym__space,
      sym__eol,
  [6154] = 1,
    ACTIONS(2436), 2,
      sym__space,
      sym__eol,
  [6159] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6164] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6169] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6174] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6179] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6184] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6189] = 1,
    ACTIONS(2438), 2,
      sym__space,
      sym__eol,
  [6194] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6199] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6204] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6209] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6214] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6219] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6224] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6229] = 1,
    ACTIONS(2408), 2,
      sym__space,
      sym__eol,
  [6234] = 1,
    ACTIONS(2434), 2,
      sym__space,
      sym__eol,
  [6239] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6244] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6249] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6254] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6259] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6264] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6269] = 1,
    ACTIONS(2440), 2,
      sym__space,
      sym__eol,
  [6274] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6279] = 1,
    ACTIONS(2442), 2,
      sym__space,
      sym__eol,
  [6284] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6289] = 1,
    ACTIONS(2444), 2,
      sym__space,
      sym__eol,
  [6294] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6299] = 1,
    ACTIONS(2446), 2,
      sym__space,
      sym__eol,
  [6304] = 2,
    ACTIONS(1432), 1,
      sym__number,
    STATE(424), 1,
      sym_number,
  [6311] = 1,
    ACTIONS(2448), 2,
      sym__space,
      sym__eol,
  [6316] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6321] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6326] = 1,
    ACTIONS(2450), 2,
      sym__space,
      sym__eol,
  [6331] = 2,
    ACTIONS(1114), 1,
      sym__number,
    STATE(686), 1,
      sym_time,
  [6338] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6343] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6348] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6353] = 1,
    ACTIONS(2452), 2,
      sym__space,
      sym__eol,
  [6358] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6363] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6368] = 2,
    ACTIONS(2454), 1,
      sym__var_name,
    STATE(691), 1,
      sym__set_env_value,
  [6375] = 1,
    ACTIONS(2408), 2,
      sym__space,
      sym__eol,
  [6380] = 1,
    ACTIONS(2456), 2,
      sym__space,
      sym__eol,
  [6385] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6390] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6395] = 1,
    ACTIONS(2458), 2,
      sym__space,
      sym__eol,
  [6400] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6405] = 1,
    ACTIONS(2408), 2,
      sym__space,
      sym__eol,
  [6410] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6415] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6420] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6425] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6430] = 1,
    ACTIONS(2460), 2,
      sym__space,
      sym__eol,
  [6435] = 2,
    ACTIONS(2462), 1,
      sym__space,
    ACTIONS(2464), 1,
      sym__eol,
  [6442] = 1,
    ACTIONS(2444), 2,
      sym__space,
      sym__eol,
  [6447] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6452] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6457] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6462] = 1,
    ACTIONS(2434), 2,
      sym__space,
      sym__eol,
  [6467] = 1,
    ACTIONS(2466), 2,
      sym__space,
      sym__eol,
  [6472] = 1,
    ACTIONS(2468), 2,
      sym__space,
      sym__eol,
  [6477] = 1,
    ACTIONS(2470), 2,
      sym__space,
      sym__eol,
  [6482] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6487] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6492] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6497] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6502] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6507] = 1,
    ACTIONS(2472), 2,
      sym__space,
      sym__eol,
  [6512] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6517] = 1,
    ACTIONS(2474), 2,
      sym__space,
      sym__eol,
  [6522] = 1,
    ACTIONS(2476), 2,
      sym__space,
      sym__eol,
  [6527] = 1,
    ACTIONS(2478), 2,
      sym__space,
      sym__eol,
  [6532] = 1,
    ACTIONS(2480), 2,
      sym__space,
      sym__eol,
  [6537] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6542] = 1,
    ACTIONS(2046), 2,
      sym__space,
      sym__eol,
  [6547] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6552] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6557] = 1,
    ACTIONS(2482), 2,
      sym__space,
      sym__eol,
  [6562] = 1,
    ACTIONS(2484), 2,
      sym__space,
      sym__eol,
  [6567] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6572] = 2,
    ACTIONS(2482), 1,
      sym__eol,
    ACTIONS(2486), 1,
      sym__space,
  [6579] = 2,
    ACTIONS(1636), 1,
      aux_sym_time_token4,
    ACTIONS(1638), 1,
      aux_sym_time_token5,
  [6586] = 1,
    ACTIONS(2488), 2,
      sym__space,
      sym__eol,
  [6591] = 1,
    ACTIONS(2490), 2,
      sym__space,
      sym__eol,
  [6596] = 1,
    ACTIONS(2492), 2,
      sym__space,
      sym__eol,
  [6601] = 2,
    ACTIONS(2494), 1,
      sym__space,
    ACTIONS(2496), 1,
      sym__eol,
  [6608] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6613] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6618] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6623] = 1,
    ACTIONS(2498), 2,
      sym__space,
      sym__eol,
  [6628] = 1,
    ACTIONS(2500), 2,
      sym__space,
      sym__eol,
  [6633] = 1,
    ACTIONS(2502), 2,
      sym__space,
      sym__eol,
  [6638] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6643] = 1,
    ACTIONS(2504), 2,
      sym__space,
      sym__eol,
  [6648] = 1,
    ACTIONS(2506), 2,
      sym__space,
      sym__eol,
  [6653] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6658] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6663] = 1,
    ACTIONS(2508), 2,
      sym__space,
      sym__eol,
  [6668] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6673] = 1,
    ACTIONS(2510), 2,
      sym__space,
      sym__eol,
  [6678] = 1,
    ACTIONS(2512), 2,
      sym__space,
      sym__eol,
  [6683] = 1,
    ACTIONS(2514), 2,
      sym__space,
      sym__eol,
  [6688] = 1,
    ACTIONS(2516), 2,
      sym__space,
      sym__eol,
  [6693] = 1,
    ACTIONS(2518), 2,
      sym__space,
      sym__eol,
  [6698] = 1,
    ACTIONS(2520), 2,
      sym__space,
      sym__eol,
  [6703] = 1,
    ACTIONS(2522), 2,
      sym__space,
      sym__eol,
  [6708] = 1,
    ACTIONS(2524), 2,
      sym__space,
      sym__eol,
  [6713] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6718] = 1,
    ACTIONS(2526), 2,
      sym__space,
      sym__eol,
  [6723] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [6728] = 2,
    ACTIONS(2528), 1,
      sym__space,
    ACTIONS(2530), 1,
      sym__eol,
  [6735] = 1,
    ACTIONS(2532), 2,
      sym__space,
      sym__eol,
  [6740] = 1,
    ACTIONS(2534), 2,
      sym__space,
      sym__eol,
  [6745] = 1,
    ACTIONS(2536), 2,
      sym__space,
      sym__eol,
  [6750] = 1,
    ACTIONS(2099), 2,
      sym__space,
      sym__eol,
  [6755] = 1,
    ACTIONS(2538), 2,
      sym__space,
      sym__eol,
  [6760] = 1,
    ACTIONS(2540), 2,
      sym__space,
      sym__eol,
  [6765] = 1,
    ACTIONS(2542), 2,
      sym__space,
      sym__eol,
  [6770] = 1,
    ACTIONS(2544), 2,
      sym__space,
      sym__eol,
  [6775] = 1,
    ACTIONS(2546), 2,
      sym__space,
      sym__eol,
  [6780] = 2,
    ACTIONS(2454), 1,
      sym__var_name,
    STATE(360), 1,
      sym__set_env_value,
  [6787] = 1,
    ACTIONS(2548), 2,
      sym__space,
      sym__eol,
  [6792] = 1,
    ACTIONS(2550), 2,
      sym__space,
      sym__eol,
  [6797] = 1,
    ACTIONS(2552), 2,
      sym__space,
      sym__eol,
  [6802] = 1,
    ACTIONS(2554), 2,
      sym__space,
      sym__eol,
  [6807] = 1,
    ACTIONS(2556), 2,
      sym__space,
      sym__eol,
  [6812] = 1,
    ACTIONS(2558), 2,
      sym__space,
      sym__eol,
  [6817] = 1,
    ACTIONS(2560), 2,
      sym__space,
      sym__eol,
  [6822] = 2,
    ACTIONS(1432), 1,
      sym__number,
    STATE(735), 1,
      sym_number,
  [6829] = 1,
    ACTIONS(2562), 2,
      sym__space,
      sym__eol,
  [6834] = 1,
    ACTIONS(2564), 2,
      sym__space,
      sym__eol,
  [6839] = 1,
    ACTIONS(2566), 2,
      sym__space,
      sym__eol,
  [6844] = 2,
    ACTIONS(1432), 1,
      sym__number,
    STATE(672), 1,
      sym_number,
  [6851] = 1,
    ACTIONS(2568), 2,
      sym__space,
      sym__eol,
  [6856] = 1,
    ACTIONS(2570), 2,
      sym__space,
      sym__eol,
  [6861] = 1,
    ACTIONS(2572), 2,
      sym__space,
      sym__eol,
  [6866] = 2,
    ACTIONS(1771), 1,
      sym__eol,
    ACTIONS(2574), 1,
      sym__space,
  [6873] = 1,
    ACTIONS(2576), 2,
      sym__space,
      sym__eol,
  [6878] = 1,
    ACTIONS(2578), 2,
      sym__space,
      sym__eol,
  [6883] = 1,
    ACTIONS(2580), 2,
      sym__space,
      sym__eol,
  [6888] = 1,
    ACTIONS(2582), 2,
      sym__space,
      sym__eol,
  [6893] = 1,
    ACTIONS(2584), 2,
      sym__space,
      sym__eol,
  [6898] = 1,
    ACTIONS(2586), 2,
      sym__space,
      sym__eol,
  [6903] = 1,
    ACTIONS(2588), 2,
      sym__space,
      sym__eol,
  [6908] = 1,
    ACTIONS(2590), 2,
      sym__space,
      sym__eol,
  [6913] = 1,
    ACTIONS(2592), 2,
      sym__space,
      sym__eol,
  [6918] = 1,
    ACTIONS(2594), 2,
      aux_sym__match_localnetwork_token3,
      anon_sym_STAR,
  [6923] = 1,
    ACTIONS(2596), 2,
      sym__space,
      sym__eol,
  [6928] = 1,
    ACTIONS(2598), 2,
      sym__space,
      sym__eol,
  [6933] = 1,
    ACTIONS(2600), 2,
      sym__space,
      sym__eol,
  [6938] = 1,
    ACTIONS(2602), 2,
      sym__space,
      sym__eol,
  [6943] = 1,
    ACTIONS(2604), 2,
      sym__space,
      sym__eol,
  [6948] = 2,
    ACTIONS(1432), 1,
      sym__number,
    STATE(715), 1,
      sym_number,
  [6955] = 1,
    ACTIONS(2606), 2,
      sym__space,
      sym__eol,
  [6960] = 2,
    ACTIONS(1432), 1,
      sym__number,
    STATE(717), 1,
      sym_number,
  [6967] = 2,
    ACTIONS(2608), 1,
      sym__space,
    ACTIONS(2610), 1,
      sym__eol,
  [6974] = 1,
    ACTIONS(2612), 2,
      sym__space,
      sym__eol,
  [6979] = 1,
    ACTIONS(2614), 2,
      sym__space,
      sym__eol,
  [6984] = 1,
    ACTIONS(2600), 2,
      sym__space,
      sym__eol,
  [6989] = 1,
    ACTIONS(2616), 2,
      sym__space,
      sym__eol,
  [6994] = 1,
    ACTIONS(2408), 2,
      sym__space,
      sym__eol,
  [6999] = 2,
    ACTIONS(2618), 1,
      anon_sym_none,
    ACTIONS(2620), 1,
      aux_sym__escape_char_token2,
  [7006] = 1,
    ACTIONS(2622), 2,
      sym__space,
      sym__eol,
  [7011] = 1,
    ACTIONS(2624), 2,
      sym__space,
      sym__eol,
  [7016] = 1,
    ACTIONS(2626), 2,
      anon_sym_md5,
      anon_sym_sha256,
  [7021] = 1,
    ACTIONS(2628), 2,
      sym__space,
      sym__eol,
  [7026] = 1,
    ACTIONS(2630), 2,
      sym__space,
      sym__eol,
  [7031] = 2,
    ACTIONS(1114), 1,
      sym__number,
    STATE(544), 1,
      sym_time,
  [7038] = 1,
    ACTIONS(2632), 2,
      sym__space,
      sym__eol,
  [7043] = 1,
    ACTIONS(2634), 2,
      sym__space,
      sym__eol,
  [7048] = 2,
    ACTIONS(2632), 1,
      sym__eol,
    ACTIONS(2636), 1,
      sym__space,
  [7055] = 1,
    ACTIONS(2638), 2,
      sym__space,
      sym__eol,
  [7060] = 1,
    ACTIONS(2221), 2,
      sym__space,
      sym__eol,
  [7065] = 1,
    ACTIONS(2640), 2,
      sym__space,
      sym__eol,
  [7070] = 2,
    ACTIONS(2642), 1,
      sym__space,
    ACTIONS(2644), 1,
      sym__eol,
  [7077] = 1,
    ACTIONS(2646), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [7082] = 1,
    ACTIONS(2648), 2,
      sym__space,
      sym__eol,
  [7087] = 1,
    ACTIONS(2650), 2,
      sym__space,
      sym__eol,
  [7092] = 1,
    ACTIONS(2652), 2,
      sym__space,
      sym__eol,
  [7097] = 1,
    ACTIONS(2654), 2,
      sym__space,
      sym__eol,
  [7102] = 2,
    ACTIONS(1432), 1,
      sym__number,
    STATE(472), 1,
      sym_number,
  [7109] = 1,
    ACTIONS(2656), 2,
      sym__space,
      sym__eol,
  [7114] = 1,
    ACTIONS(2658), 2,
      sym__space,
      sym__eol,
  [7119] = 1,
    ACTIONS(2660), 2,
      sym__space,
      sym__eol,
  [7124] = 1,
    ACTIONS(2662), 2,
      sym__space,
      sym__eol,
  [7129] = 1,
    ACTIONS(2664), 2,
      sym__space,
      sym__eol,
  [7134] = 2,
    ACTIONS(1269), 1,
      anon_sym_COLON,
    ACTIONS(1273), 1,
      aux_sym__match_exec_token2,
  [7141] = 1,
    ACTIONS(2666), 2,
      sym__space,
      sym__eol,
  [7146] = 1,
    ACTIONS(2668), 2,
      sym__space,
      sym__eol,
  [7151] = 1,
    ACTIONS(2670), 2,
      sym__space,
      sym__eol,
  [7156] = 1,
    ACTIONS(2672), 2,
      sym__space,
      sym__eol,
  [7161] = 1,
    ACTIONS(2674), 2,
      sym__space,
      sym__eol,
  [7166] = 1,
    ACTIONS(2408), 2,
      sym__space,
      sym__eol,
  [7171] = 1,
    ACTIONS(2676), 2,
      sym__space,
      sym__eol,
  [7176] = 1,
    ACTIONS(2678), 2,
      sym__space,
      sym__eol,
  [7181] = 1,
    ACTIONS(2680), 2,
      sym__space,
      sym__eol,
  [7186] = 1,
    ACTIONS(2682), 2,
      sym__space,
      sym__eol,
  [7191] = 2,
    ACTIONS(2286), 1,
      aux_sym_time_token4,
    ACTIONS(2288), 1,
      aux_sym_time_token5,
  [7198] = 1,
    ACTIONS(2684), 2,
      sym__space,
      sym__eol,
  [7203] = 1,
    ACTIONS(2686), 2,
      sym__space,
      sym__eol,
  [7208] = 1,
    ACTIONS(2688), 2,
      sym__space,
      sym__eol,
  [7213] = 1,
    ACTIONS(2690), 2,
      sym__space,
      sym__eol,
  [7218] = 1,
    ACTIONS(2692), 2,
      sym__space,
      sym__eol,
  [7223] = 1,
    ACTIONS(2694), 2,
      sym__space,
      sym__eol,
  [7228] = 1,
    ACTIONS(2696), 2,
      sym__space,
      sym__eol,
  [7233] = 1,
    ACTIONS(2306), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [7238] = 1,
    ACTIONS(2698), 2,
      sym__space,
      sym__eol,
  [7243] = 1,
    ACTIONS(2700), 2,
      sym__space,
      sym__eol,
  [7248] = 1,
    ACTIONS(2702), 2,
      sym__space,
      sym__eol,
  [7253] = 1,
    ACTIONS(2704), 2,
      sym__space,
      sym__eol,
  [7258] = 1,
    ACTIONS(2706), 2,
      sym__space,
      sym__eol,
  [7263] = 1,
    ACTIONS(2708), 2,
      sym__space,
      sym__eol,
  [7268] = 1,
    ACTIONS(2710), 2,
      sym__space,
      sym__eol,
  [7273] = 1,
    ACTIONS(2322), 2,
      sym__space,
      sym__eol,
  [7278] = 1,
    ACTIONS(2712), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [7283] = 2,
    ACTIONS(2714), 1,
      aux_sym_time_token4,
    ACTIONS(2716), 1,
      aux_sym_time_token5,
  [7290] = 1,
    ACTIONS(2718), 2,
      sym__space,
      sym__eol,
  [7295] = 1,
    ACTIONS(2328), 2,
      sym__space,
      sym__eol,
  [7300] = 1,
    ACTIONS(2408), 2,
      sym__space,
      sym__eol,
  [7305] = 2,
    ACTIONS(834), 1,
      sym__space,
    ACTIONS(836), 1,
      sym__eol,
  [7312] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [7317] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [7322] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [7327] = 2,
    ACTIONS(1432), 1,
      sym__number,
    STATE(684), 1,
      sym_number,
  [7334] = 1,
    ACTIONS(2720), 2,
      sym__space,
      sym__eol,
  [7339] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [7344] = 1,
    ACTIONS(2722), 2,
      sym__space,
      sym__eol,
  [7349] = 1,
    ACTIONS(2722), 2,
      sym__space,
      sym__eol,
  [7354] = 2,
    ACTIONS(1432), 1,
      sym__number,
    STATE(697), 1,
      sym_number,
  [7361] = 1,
    ACTIONS(2724), 2,
      sym__space,
      sym__eol,
  [7366] = 1,
    ACTIONS(2724), 2,
      sym__space,
      sym__eol,
  [7371] = 1,
    ACTIONS(2724), 2,
      sym__space,
      sym__eol,
  [7376] = 1,
    ACTIONS(2724), 2,
      sym__space,
      sym__eol,
  [7381] = 1,
    ACTIONS(2724), 2,
      sym__space,
      sym__eol,
  [7386] = 1,
    ACTIONS(2724), 2,
      sym__space,
      sym__eol,
  [7391] = 1,
    ACTIONS(2724), 2,
      sym__space,
      sym__eol,
  [7396] = 2,
    ACTIONS(2726), 1,
      aux_sym__all_token1,
    STATE(606), 1,
      sym__all,
  [7403] = 2,
    ACTIONS(2728), 1,
      aux_sym__all_token1,
    STATE(607), 1,
      sym__all,
  [7410] = 2,
    ACTIONS(1432), 1,
      sym__number,
    STATE(724), 1,
      sym_number,
  [7417] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [7422] = 2,
    ACTIONS(2730), 1,
      anon_sym_DQUOTE,
    ACTIONS(2732), 1,
      aux_sym__match_localnetwork_token2,
  [7429] = 2,
    ACTIONS(1432), 1,
      sym__number,
    STATE(734), 1,
      sym_number,
  [7436] = 1,
    ACTIONS(2734), 1,
      sym_cipher,
  [7440] = 1,
    ACTIONS(2736), 1,
      sym_mac,
  [7444] = 1,
    ACTIONS(2738), 1,
      anon_sym_DQUOTE,
  [7448] = 1,
    ACTIONS(2740), 1,
      anon_sym_COLON,
  [7452] = 1,
    ACTIONS(2610), 1,
      sym__eol,
  [7456] = 1,
    ACTIONS(2742), 1,
      anon_sym_DQUOTE,
  [7460] = 1,
    ACTIONS(2744), 1,
      sym__var_name,
  [7464] = 1,
    ACTIONS(2746), 1,
      sym_facility,
  [7468] = 1,
    ACTIONS(2748), 1,
      sym_sig,
  [7472] = 1,
    ACTIONS(2496), 1,
      sym__eol,
  [7476] = 1,
    ACTIONS(836), 1,
      sym__eol,
  [7480] = 1,
    ACTIONS(2716), 1,
      aux_sym_time_token5,
  [7484] = 1,
    ACTIONS(2750), 1,
      sym__eol,
  [7488] = 1,
    ACTIONS(2752), 1,
      sym_mac,
  [7492] = 1,
    ACTIONS(2754), 1,
      aux_sym_time_token5,
  [7496] = 1,
    ACTIONS(2756), 1,
      ts_builtin_sym_end,
  [7500] = 1,
    ACTIONS(2758), 1,
      sym__eol,
  [7504] = 1,
    ACTIONS(2760), 1,
      sym_key_sig,
  [7508] = 1,
    ACTIONS(2762), 1,
      sym_cipher,
  [7512] = 1,
    ACTIONS(2764), 1,
      sym_verbosity,
  [7516] = 1,
    ACTIONS(2766), 1,
      sym__var_name,
  [7520] = 1,
    ACTIONS(2768), 1,
      aux_sym__match_localnetwork_token3,
  [7524] = 1,
    ACTIONS(916), 1,
      sym__eol,
  [7528] = 1,
    ACTIONS(2770), 1,
      anon_sym_DQUOTE,
  [7532] = 1,
    ACTIONS(2772), 1,
      aux_sym__stream_local_bind_mask_token2,
  [7536] = 1,
    ACTIONS(2774), 1,
      sym_authentication,
  [7540] = 1,
    ACTIONS(2776), 1,
      anon_sym_EQ,
  [7544] = 1,
    ACTIONS(2778), 1,
      sym_kex,
  [7548] = 1,
    ACTIONS(2780), 1,
      sym_key_sig,
  [7552] = 1,
    ACTIONS(2782), 1,
      sym_authentication,
  [7556] = 1,
    ACTIONS(2784), 1,
      sym_key_sig,
  [7560] = 1,
    ACTIONS(2786), 1,
      sym_key_sig,
  [7564] = 1,
    ACTIONS(2788), 1,
      aux_sym__match_localnetwork_token3,
  [7568] = 1,
    ACTIONS(2790), 1,
      anon_sym_RBRACE,
  [7572] = 1,
    ACTIONS(2288), 1,
      aux_sym_time_token5,
  [7576] = 1,
    ACTIONS(2792), 1,
      sym_sig,
  [7580] = 1,
    ACTIONS(1638), 1,
      aux_sym_time_token5,
  [7584] = 1,
    ACTIONS(2794), 1,
      sym__space,
  [7588] = 1,
    ACTIONS(2796), 1,
      anon_sym_COLON,
  [7592] = 1,
    ACTIONS(2798), 1,
      sym_kex,
  [7596] = 1,
    ACTIONS(2800), 1,
      anon_sym_DQUOTE,
  [7600] = 1,
    ACTIONS(2802), 1,
      anon_sym_RBRACE,
  [7604] = 1,
    ACTIONS(2804), 1,
      anon_sym_COLON,
  [7608] = 1,
    ACTIONS(2806), 1,
      anon_sym_RBRACE,
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
      sym__var_name,
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
      aux_sym__match_localnetwork_token2,
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
  [SMALL_STATE(49)] = 619,
  [SMALL_STATE(50)] = 644,
  [SMALL_STATE(51)] = 667,
  [SMALL_STATE(52)] = 696,
  [SMALL_STATE(53)] = 721,
  [SMALL_STATE(54)] = 744,
  [SMALL_STATE(55)] = 769,
  [SMALL_STATE(56)] = 791,
  [SMALL_STATE(57)] = 817,
  [SMALL_STATE(58)] = 839,
  [SMALL_STATE(59)] = 865,
  [SMALL_STATE(60)] = 891,
  [SMALL_STATE(61)] = 914,
  [SMALL_STATE(62)] = 937,
  [SMALL_STATE(63)] = 960,
  [SMALL_STATE(64)] = 981,
  [SMALL_STATE(65)] = 1004,
  [SMALL_STATE(66)] = 1027,
  [SMALL_STATE(67)] = 1046,
  [SMALL_STATE(68)] = 1069,
  [SMALL_STATE(69)] = 1092,
  [SMALL_STATE(70)] = 1115,
  [SMALL_STATE(71)] = 1138,
  [SMALL_STATE(72)] = 1159,
  [SMALL_STATE(73)] = 1182,
  [SMALL_STATE(74)] = 1205,
  [SMALL_STATE(75)] = 1226,
  [SMALL_STATE(76)] = 1240,
  [SMALL_STATE(77)] = 1256,
  [SMALL_STATE(78)] = 1276,
  [SMALL_STATE(79)] = 1292,
  [SMALL_STATE(80)] = 1312,
  [SMALL_STATE(81)] = 1332,
  [SMALL_STATE(82)] = 1352,
  [SMALL_STATE(83)] = 1372,
  [SMALL_STATE(84)] = 1384,
  [SMALL_STATE(85)] = 1404,
  [SMALL_STATE(86)] = 1424,
  [SMALL_STATE(87)] = 1444,
  [SMALL_STATE(88)] = 1464,
  [SMALL_STATE(89)] = 1476,
  [SMALL_STATE(90)] = 1492,
  [SMALL_STATE(91)] = 1508,
  [SMALL_STATE(92)] = 1522,
  [SMALL_STATE(93)] = 1535,
  [SMALL_STATE(94)] = 1552,
  [SMALL_STATE(95)] = 1569,
  [SMALL_STATE(96)] = 1580,
  [SMALL_STATE(97)] = 1595,
  [SMALL_STATE(98)] = 1612,
  [SMALL_STATE(99)] = 1629,
  [SMALL_STATE(100)] = 1644,
  [SMALL_STATE(101)] = 1661,
  [SMALL_STATE(102)] = 1680,
  [SMALL_STATE(103)] = 1695,
  [SMALL_STATE(104)] = 1714,
  [SMALL_STATE(105)] = 1733,
  [SMALL_STATE(106)] = 1752,
  [SMALL_STATE(107)] = 1765,
  [SMALL_STATE(108)] = 1780,
  [SMALL_STATE(109)] = 1793,
  [SMALL_STATE(110)] = 1804,
  [SMALL_STATE(111)] = 1821,
  [SMALL_STATE(112)] = 1838,
  [SMALL_STATE(113)] = 1855,
  [SMALL_STATE(114)] = 1868,
  [SMALL_STATE(115)] = 1883,
  [SMALL_STATE(116)] = 1894,
  [SMALL_STATE(117)] = 1913,
  [SMALL_STATE(118)] = 1930,
  [SMALL_STATE(119)] = 1947,
  [SMALL_STATE(120)] = 1964,
  [SMALL_STATE(121)] = 1979,
  [SMALL_STATE(122)] = 1996,
  [SMALL_STATE(123)] = 2013,
  [SMALL_STATE(124)] = 2030,
  [SMALL_STATE(125)] = 2045,
  [SMALL_STATE(126)] = 2062,
  [SMALL_STATE(127)] = 2079,
  [SMALL_STATE(128)] = 2096,
  [SMALL_STATE(129)] = 2113,
  [SMALL_STATE(130)] = 2130,
  [SMALL_STATE(131)] = 2147,
  [SMALL_STATE(132)] = 2162,
  [SMALL_STATE(133)] = 2177,
  [SMALL_STATE(134)] = 2192,
  [SMALL_STATE(135)] = 2203,
  [SMALL_STATE(136)] = 2216,
  [SMALL_STATE(137)] = 2227,
  [SMALL_STATE(138)] = 2244,
  [SMALL_STATE(139)] = 2263,
  [SMALL_STATE(140)] = 2280,
  [SMALL_STATE(141)] = 2295,
  [SMALL_STATE(142)] = 2308,
  [SMALL_STATE(143)] = 2321,
  [SMALL_STATE(144)] = 2332,
  [SMALL_STATE(145)] = 2349,
  [SMALL_STATE(146)] = 2366,
  [SMALL_STATE(147)] = 2378,
  [SMALL_STATE(148)] = 2390,
  [SMALL_STATE(149)] = 2404,
  [SMALL_STATE(150)] = 2420,
  [SMALL_STATE(151)] = 2430,
  [SMALL_STATE(152)] = 2444,
  [SMALL_STATE(153)] = 2454,
  [SMALL_STATE(154)] = 2468,
  [SMALL_STATE(155)] = 2480,
  [SMALL_STATE(156)] = 2492,
  [SMALL_STATE(157)] = 2506,
  [SMALL_STATE(158)] = 2516,
  [SMALL_STATE(159)] = 2526,
  [SMALL_STATE(160)] = 2540,
  [SMALL_STATE(161)] = 2554,
  [SMALL_STATE(162)] = 2570,
  [SMALL_STATE(163)] = 2586,
  [SMALL_STATE(164)] = 2594,
  [SMALL_STATE(165)] = 2608,
  [SMALL_STATE(166)] = 2620,
  [SMALL_STATE(167)] = 2632,
  [SMALL_STATE(168)] = 2646,
  [SMALL_STATE(169)] = 2660,
  [SMALL_STATE(170)] = 2676,
  [SMALL_STATE(171)] = 2684,
  [SMALL_STATE(172)] = 2698,
  [SMALL_STATE(173)] = 2712,
  [SMALL_STATE(174)] = 2728,
  [SMALL_STATE(175)] = 2744,
  [SMALL_STATE(176)] = 2754,
  [SMALL_STATE(177)] = 2764,
  [SMALL_STATE(178)] = 2778,
  [SMALL_STATE(179)] = 2788,
  [SMALL_STATE(180)] = 2798,
  [SMALL_STATE(181)] = 2812,
  [SMALL_STATE(182)] = 2828,
  [SMALL_STATE(183)] = 2838,
  [SMALL_STATE(184)] = 2848,
  [SMALL_STATE(185)] = 2862,
  [SMALL_STATE(186)] = 2872,
  [SMALL_STATE(187)] = 2886,
  [SMALL_STATE(188)] = 2896,
  [SMALL_STATE(189)] = 2905,
  [SMALL_STATE(190)] = 2916,
  [SMALL_STATE(191)] = 2927,
  [SMALL_STATE(192)] = 2938,
  [SMALL_STATE(193)] = 2949,
  [SMALL_STATE(194)] = 2960,
  [SMALL_STATE(195)] = 2971,
  [SMALL_STATE(196)] = 2982,
  [SMALL_STATE(197)] = 2993,
  [SMALL_STATE(198)] = 3004,
  [SMALL_STATE(199)] = 3015,
  [SMALL_STATE(200)] = 3026,
  [SMALL_STATE(201)] = 3035,
  [SMALL_STATE(202)] = 3046,
  [SMALL_STATE(203)] = 3057,
  [SMALL_STATE(204)] = 3068,
  [SMALL_STATE(205)] = 3077,
  [SMALL_STATE(206)] = 3088,
  [SMALL_STATE(207)] = 3099,
  [SMALL_STATE(208)] = 3108,
  [SMALL_STATE(209)] = 3119,
  [SMALL_STATE(210)] = 3130,
  [SMALL_STATE(211)] = 3141,
  [SMALL_STATE(212)] = 3152,
  [SMALL_STATE(213)] = 3161,
  [SMALL_STATE(214)] = 3172,
  [SMALL_STATE(215)] = 3183,
  [SMALL_STATE(216)] = 3194,
  [SMALL_STATE(217)] = 3203,
  [SMALL_STATE(218)] = 3214,
  [SMALL_STATE(219)] = 3225,
  [SMALL_STATE(220)] = 3232,
  [SMALL_STATE(221)] = 3245,
  [SMALL_STATE(222)] = 3258,
  [SMALL_STATE(223)] = 3269,
  [SMALL_STATE(224)] = 3280,
  [SMALL_STATE(225)] = 3293,
  [SMALL_STATE(226)] = 3304,
  [SMALL_STATE(227)] = 3315,
  [SMALL_STATE(228)] = 3326,
  [SMALL_STATE(229)] = 3337,
  [SMALL_STATE(230)] = 3348,
  [SMALL_STATE(231)] = 3359,
  [SMALL_STATE(232)] = 3370,
  [SMALL_STATE(233)] = 3381,
  [SMALL_STATE(234)] = 3392,
  [SMALL_STATE(235)] = 3403,
  [SMALL_STATE(236)] = 3414,
  [SMALL_STATE(237)] = 3423,
  [SMALL_STATE(238)] = 3432,
  [SMALL_STATE(239)] = 3443,
  [SMALL_STATE(240)] = 3454,
  [SMALL_STATE(241)] = 3465,
  [SMALL_STATE(242)] = 3476,
  [SMALL_STATE(243)] = 3487,
  [SMALL_STATE(244)] = 3498,
  [SMALL_STATE(245)] = 3509,
  [SMALL_STATE(246)] = 3520,
  [SMALL_STATE(247)] = 3531,
  [SMALL_STATE(248)] = 3542,
  [SMALL_STATE(249)] = 3551,
  [SMALL_STATE(250)] = 3564,
  [SMALL_STATE(251)] = 3573,
  [SMALL_STATE(252)] = 3584,
  [SMALL_STATE(253)] = 3593,
  [SMALL_STATE(254)] = 3604,
  [SMALL_STATE(255)] = 3613,
  [SMALL_STATE(256)] = 3622,
  [SMALL_STATE(257)] = 3633,
  [SMALL_STATE(258)] = 3646,
  [SMALL_STATE(259)] = 3655,
  [SMALL_STATE(260)] = 3666,
  [SMALL_STATE(261)] = 3675,
  [SMALL_STATE(262)] = 3686,
  [SMALL_STATE(263)] = 3697,
  [SMALL_STATE(264)] = 3708,
  [SMALL_STATE(265)] = 3719,
  [SMALL_STATE(266)] = 3730,
  [SMALL_STATE(267)] = 3739,
  [SMALL_STATE(268)] = 3750,
  [SMALL_STATE(269)] = 3761,
  [SMALL_STATE(270)] = 3772,
  [SMALL_STATE(271)] = 3781,
  [SMALL_STATE(272)] = 3794,
  [SMALL_STATE(273)] = 3801,
  [SMALL_STATE(274)] = 3810,
  [SMALL_STATE(275)] = 3821,
  [SMALL_STATE(276)] = 3832,
  [SMALL_STATE(277)] = 3841,
  [SMALL_STATE(278)] = 3851,
  [SMALL_STATE(279)] = 3857,
  [SMALL_STATE(280)] = 3865,
  [SMALL_STATE(281)] = 3873,
  [SMALL_STATE(282)] = 3883,
  [SMALL_STATE(283)] = 3891,
  [SMALL_STATE(284)] = 3901,
  [SMALL_STATE(285)] = 3911,
  [SMALL_STATE(286)] = 3921,
  [SMALL_STATE(287)] = 3931,
  [SMALL_STATE(288)] = 3939,
  [SMALL_STATE(289)] = 3949,
  [SMALL_STATE(290)] = 3959,
  [SMALL_STATE(291)] = 3969,
  [SMALL_STATE(292)] = 3977,
  [SMALL_STATE(293)] = 3987,
  [SMALL_STATE(294)] = 3997,
  [SMALL_STATE(295)] = 4007,
  [SMALL_STATE(296)] = 4017,
  [SMALL_STATE(297)] = 4027,
  [SMALL_STATE(298)] = 4037,
  [SMALL_STATE(299)] = 4047,
  [SMALL_STATE(300)] = 4057,
  [SMALL_STATE(301)] = 4067,
  [SMALL_STATE(302)] = 4077,
  [SMALL_STATE(303)] = 4087,
  [SMALL_STATE(304)] = 4097,
  [SMALL_STATE(305)] = 4107,
  [SMALL_STATE(306)] = 4117,
  [SMALL_STATE(307)] = 4127,
  [SMALL_STATE(308)] = 4137,
  [SMALL_STATE(309)] = 4147,
  [SMALL_STATE(310)] = 4157,
  [SMALL_STATE(311)] = 4167,
  [SMALL_STATE(312)] = 4177,
  [SMALL_STATE(313)] = 4187,
  [SMALL_STATE(314)] = 4197,
  [SMALL_STATE(315)] = 4207,
  [SMALL_STATE(316)] = 4217,
  [SMALL_STATE(317)] = 4227,
  [SMALL_STATE(318)] = 4237,
  [SMALL_STATE(319)] = 4247,
  [SMALL_STATE(320)] = 4257,
  [SMALL_STATE(321)] = 4267,
  [SMALL_STATE(322)] = 4277,
  [SMALL_STATE(323)] = 4287,
  [SMALL_STATE(324)] = 4297,
  [SMALL_STATE(325)] = 4307,
  [SMALL_STATE(326)] = 4317,
  [SMALL_STATE(327)] = 4327,
  [SMALL_STATE(328)] = 4337,
  [SMALL_STATE(329)] = 4347,
  [SMALL_STATE(330)] = 4357,
  [SMALL_STATE(331)] = 4367,
  [SMALL_STATE(332)] = 4377,
  [SMALL_STATE(333)] = 4387,
  [SMALL_STATE(334)] = 4397,
  [SMALL_STATE(335)] = 4407,
  [SMALL_STATE(336)] = 4417,
  [SMALL_STATE(337)] = 4427,
  [SMALL_STATE(338)] = 4437,
  [SMALL_STATE(339)] = 4447,
  [SMALL_STATE(340)] = 4457,
  [SMALL_STATE(341)] = 4467,
  [SMALL_STATE(342)] = 4477,
  [SMALL_STATE(343)] = 4487,
  [SMALL_STATE(344)] = 4497,
  [SMALL_STATE(345)] = 4507,
  [SMALL_STATE(346)] = 4517,
  [SMALL_STATE(347)] = 4527,
  [SMALL_STATE(348)] = 4537,
  [SMALL_STATE(349)] = 4547,
  [SMALL_STATE(350)] = 4553,
  [SMALL_STATE(351)] = 4559,
  [SMALL_STATE(352)] = 4569,
  [SMALL_STATE(353)] = 4579,
  [SMALL_STATE(354)] = 4589,
  [SMALL_STATE(355)] = 4597,
  [SMALL_STATE(356)] = 4607,
  [SMALL_STATE(357)] = 4617,
  [SMALL_STATE(358)] = 4627,
  [SMALL_STATE(359)] = 4637,
  [SMALL_STATE(360)] = 4647,
  [SMALL_STATE(361)] = 4657,
  [SMALL_STATE(362)] = 4665,
  [SMALL_STATE(363)] = 4675,
  [SMALL_STATE(364)] = 4685,
  [SMALL_STATE(365)] = 4695,
  [SMALL_STATE(366)] = 4705,
  [SMALL_STATE(367)] = 4713,
  [SMALL_STATE(368)] = 4721,
  [SMALL_STATE(369)] = 4729,
  [SMALL_STATE(370)] = 4737,
  [SMALL_STATE(371)] = 4747,
  [SMALL_STATE(372)] = 4757,
  [SMALL_STATE(373)] = 4767,
  [SMALL_STATE(374)] = 4777,
  [SMALL_STATE(375)] = 4787,
  [SMALL_STATE(376)] = 4797,
  [SMALL_STATE(377)] = 4807,
  [SMALL_STATE(378)] = 4815,
  [SMALL_STATE(379)] = 4825,
  [SMALL_STATE(380)] = 4835,
  [SMALL_STATE(381)] = 4845,
  [SMALL_STATE(382)] = 4855,
  [SMALL_STATE(383)] = 4865,
  [SMALL_STATE(384)] = 4875,
  [SMALL_STATE(385)] = 4885,
  [SMALL_STATE(386)] = 4895,
  [SMALL_STATE(387)] = 4905,
  [SMALL_STATE(388)] = 4915,
  [SMALL_STATE(389)] = 4925,
  [SMALL_STATE(390)] = 4935,
  [SMALL_STATE(391)] = 4945,
  [SMALL_STATE(392)] = 4955,
  [SMALL_STATE(393)] = 4965,
  [SMALL_STATE(394)] = 4975,
  [SMALL_STATE(395)] = 4981,
  [SMALL_STATE(396)] = 4987,
  [SMALL_STATE(397)] = 4993,
  [SMALL_STATE(398)] = 5003,
  [SMALL_STATE(399)] = 5009,
  [SMALL_STATE(400)] = 5019,
  [SMALL_STATE(401)] = 5029,
  [SMALL_STATE(402)] = 5039,
  [SMALL_STATE(403)] = 5049,
  [SMALL_STATE(404)] = 5059,
  [SMALL_STATE(405)] = 5069,
  [SMALL_STATE(406)] = 5079,
  [SMALL_STATE(407)] = 5089,
  [SMALL_STATE(408)] = 5095,
  [SMALL_STATE(409)] = 5103,
  [SMALL_STATE(410)] = 5111,
  [SMALL_STATE(411)] = 5121,
  [SMALL_STATE(412)] = 5131,
  [SMALL_STATE(413)] = 5141,
  [SMALL_STATE(414)] = 5147,
  [SMALL_STATE(415)] = 5157,
  [SMALL_STATE(416)] = 5165,
  [SMALL_STATE(417)] = 5173,
  [SMALL_STATE(418)] = 5179,
  [SMALL_STATE(419)] = 5189,
  [SMALL_STATE(420)] = 5199,
  [SMALL_STATE(421)] = 5205,
  [SMALL_STATE(422)] = 5215,
  [SMALL_STATE(423)] = 5221,
  [SMALL_STATE(424)] = 5229,
  [SMALL_STATE(425)] = 5235,
  [SMALL_STATE(426)] = 5245,
  [SMALL_STATE(427)] = 5253,
  [SMALL_STATE(428)] = 5263,
  [SMALL_STATE(429)] = 5273,
  [SMALL_STATE(430)] = 5283,
  [SMALL_STATE(431)] = 5293,
  [SMALL_STATE(432)] = 5301,
  [SMALL_STATE(433)] = 5309,
  [SMALL_STATE(434)] = 5319,
  [SMALL_STATE(435)] = 5329,
  [SMALL_STATE(436)] = 5339,
  [SMALL_STATE(437)] = 5349,
  [SMALL_STATE(438)] = 5357,
  [SMALL_STATE(439)] = 5365,
  [SMALL_STATE(440)] = 5373,
  [SMALL_STATE(441)] = 5383,
  [SMALL_STATE(442)] = 5391,
  [SMALL_STATE(443)] = 5399,
  [SMALL_STATE(444)] = 5409,
  [SMALL_STATE(445)] = 5417,
  [SMALL_STATE(446)] = 5425,
  [SMALL_STATE(447)] = 5433,
  [SMALL_STATE(448)] = 5441,
  [SMALL_STATE(449)] = 5449,
  [SMALL_STATE(450)] = 5459,
  [SMALL_STATE(451)] = 5467,
  [SMALL_STATE(452)] = 5477,
  [SMALL_STATE(453)] = 5485,
  [SMALL_STATE(454)] = 5495,
  [SMALL_STATE(455)] = 5503,
  [SMALL_STATE(456)] = 5513,
  [SMALL_STATE(457)] = 5521,
  [SMALL_STATE(458)] = 5531,
  [SMALL_STATE(459)] = 5541,
  [SMALL_STATE(460)] = 5551,
  [SMALL_STATE(461)] = 5561,
  [SMALL_STATE(462)] = 5567,
  [SMALL_STATE(463)] = 5575,
  [SMALL_STATE(464)] = 5585,
  [SMALL_STATE(465)] = 5595,
  [SMALL_STATE(466)] = 5605,
  [SMALL_STATE(467)] = 5615,
  [SMALL_STATE(468)] = 5625,
  [SMALL_STATE(469)] = 5635,
  [SMALL_STATE(470)] = 5645,
  [SMALL_STATE(471)] = 5655,
  [SMALL_STATE(472)] = 5661,
  [SMALL_STATE(473)] = 5667,
  [SMALL_STATE(474)] = 5675,
  [SMALL_STATE(475)] = 5685,
  [SMALL_STATE(476)] = 5695,
  [SMALL_STATE(477)] = 5705,
  [SMALL_STATE(478)] = 5715,
  [SMALL_STATE(479)] = 5723,
  [SMALL_STATE(480)] = 5731,
  [SMALL_STATE(481)] = 5739,
  [SMALL_STATE(482)] = 5749,
  [SMALL_STATE(483)] = 5759,
  [SMALL_STATE(484)] = 5769,
  [SMALL_STATE(485)] = 5775,
  [SMALL_STATE(486)] = 5785,
  [SMALL_STATE(487)] = 5795,
  [SMALL_STATE(488)] = 5803,
  [SMALL_STATE(489)] = 5811,
  [SMALL_STATE(490)] = 5819,
  [SMALL_STATE(491)] = 5829,
  [SMALL_STATE(492)] = 5839,
  [SMALL_STATE(493)] = 5849,
  [SMALL_STATE(494)] = 5859,
  [SMALL_STATE(495)] = 5867,
  [SMALL_STATE(496)] = 5877,
  [SMALL_STATE(497)] = 5887,
  [SMALL_STATE(498)] = 5897,
  [SMALL_STATE(499)] = 5907,
  [SMALL_STATE(500)] = 5917,
  [SMALL_STATE(501)] = 5927,
  [SMALL_STATE(502)] = 5937,
  [SMALL_STATE(503)] = 5943,
  [SMALL_STATE(504)] = 5948,
  [SMALL_STATE(505)] = 5953,
  [SMALL_STATE(506)] = 5958,
  [SMALL_STATE(507)] = 5963,
  [SMALL_STATE(508)] = 5968,
  [SMALL_STATE(509)] = 5973,
  [SMALL_STATE(510)] = 5978,
  [SMALL_STATE(511)] = 5983,
  [SMALL_STATE(512)] = 5988,
  [SMALL_STATE(513)] = 5995,
  [SMALL_STATE(514)] = 6000,
  [SMALL_STATE(515)] = 6005,
  [SMALL_STATE(516)] = 6010,
  [SMALL_STATE(517)] = 6015,
  [SMALL_STATE(518)] = 6020,
  [SMALL_STATE(519)] = 6025,
  [SMALL_STATE(520)] = 6030,
  [SMALL_STATE(521)] = 6035,
  [SMALL_STATE(522)] = 6040,
  [SMALL_STATE(523)] = 6045,
  [SMALL_STATE(524)] = 6050,
  [SMALL_STATE(525)] = 6057,
  [SMALL_STATE(526)] = 6062,
  [SMALL_STATE(527)] = 6067,
  [SMALL_STATE(528)] = 6072,
  [SMALL_STATE(529)] = 6077,
  [SMALL_STATE(530)] = 6082,
  [SMALL_STATE(531)] = 6087,
  [SMALL_STATE(532)] = 6092,
  [SMALL_STATE(533)] = 6097,
  [SMALL_STATE(534)] = 6104,
  [SMALL_STATE(535)] = 6109,
  [SMALL_STATE(536)] = 6114,
  [SMALL_STATE(537)] = 6119,
  [SMALL_STATE(538)] = 6124,
  [SMALL_STATE(539)] = 6129,
  [SMALL_STATE(540)] = 6134,
  [SMALL_STATE(541)] = 6139,
  [SMALL_STATE(542)] = 6144,
  [SMALL_STATE(543)] = 6149,
  [SMALL_STATE(544)] = 6154,
  [SMALL_STATE(545)] = 6159,
  [SMALL_STATE(546)] = 6164,
  [SMALL_STATE(547)] = 6169,
  [SMALL_STATE(548)] = 6174,
  [SMALL_STATE(549)] = 6179,
  [SMALL_STATE(550)] = 6184,
  [SMALL_STATE(551)] = 6189,
  [SMALL_STATE(552)] = 6194,
  [SMALL_STATE(553)] = 6199,
  [SMALL_STATE(554)] = 6204,
  [SMALL_STATE(555)] = 6209,
  [SMALL_STATE(556)] = 6214,
  [SMALL_STATE(557)] = 6219,
  [SMALL_STATE(558)] = 6224,
  [SMALL_STATE(559)] = 6229,
  [SMALL_STATE(560)] = 6234,
  [SMALL_STATE(561)] = 6239,
  [SMALL_STATE(562)] = 6244,
  [SMALL_STATE(563)] = 6249,
  [SMALL_STATE(564)] = 6254,
  [SMALL_STATE(565)] = 6259,
  [SMALL_STATE(566)] = 6264,
  [SMALL_STATE(567)] = 6269,
  [SMALL_STATE(568)] = 6274,
  [SMALL_STATE(569)] = 6279,
  [SMALL_STATE(570)] = 6284,
  [SMALL_STATE(571)] = 6289,
  [SMALL_STATE(572)] = 6294,
  [SMALL_STATE(573)] = 6299,
  [SMALL_STATE(574)] = 6304,
  [SMALL_STATE(575)] = 6311,
  [SMALL_STATE(576)] = 6316,
  [SMALL_STATE(577)] = 6321,
  [SMALL_STATE(578)] = 6326,
  [SMALL_STATE(579)] = 6331,
  [SMALL_STATE(580)] = 6338,
  [SMALL_STATE(581)] = 6343,
  [SMALL_STATE(582)] = 6348,
  [SMALL_STATE(583)] = 6353,
  [SMALL_STATE(584)] = 6358,
  [SMALL_STATE(585)] = 6363,
  [SMALL_STATE(586)] = 6368,
  [SMALL_STATE(587)] = 6375,
  [SMALL_STATE(588)] = 6380,
  [SMALL_STATE(589)] = 6385,
  [SMALL_STATE(590)] = 6390,
  [SMALL_STATE(591)] = 6395,
  [SMALL_STATE(592)] = 6400,
  [SMALL_STATE(593)] = 6405,
  [SMALL_STATE(594)] = 6410,
  [SMALL_STATE(595)] = 6415,
  [SMALL_STATE(596)] = 6420,
  [SMALL_STATE(597)] = 6425,
  [SMALL_STATE(598)] = 6430,
  [SMALL_STATE(599)] = 6435,
  [SMALL_STATE(600)] = 6442,
  [SMALL_STATE(601)] = 6447,
  [SMALL_STATE(602)] = 6452,
  [SMALL_STATE(603)] = 6457,
  [SMALL_STATE(604)] = 6462,
  [SMALL_STATE(605)] = 6467,
  [SMALL_STATE(606)] = 6472,
  [SMALL_STATE(607)] = 6477,
  [SMALL_STATE(608)] = 6482,
  [SMALL_STATE(609)] = 6487,
  [SMALL_STATE(610)] = 6492,
  [SMALL_STATE(611)] = 6497,
  [SMALL_STATE(612)] = 6502,
  [SMALL_STATE(613)] = 6507,
  [SMALL_STATE(614)] = 6512,
  [SMALL_STATE(615)] = 6517,
  [SMALL_STATE(616)] = 6522,
  [SMALL_STATE(617)] = 6527,
  [SMALL_STATE(618)] = 6532,
  [SMALL_STATE(619)] = 6537,
  [SMALL_STATE(620)] = 6542,
  [SMALL_STATE(621)] = 6547,
  [SMALL_STATE(622)] = 6552,
  [SMALL_STATE(623)] = 6557,
  [SMALL_STATE(624)] = 6562,
  [SMALL_STATE(625)] = 6567,
  [SMALL_STATE(626)] = 6572,
  [SMALL_STATE(627)] = 6579,
  [SMALL_STATE(628)] = 6586,
  [SMALL_STATE(629)] = 6591,
  [SMALL_STATE(630)] = 6596,
  [SMALL_STATE(631)] = 6601,
  [SMALL_STATE(632)] = 6608,
  [SMALL_STATE(633)] = 6613,
  [SMALL_STATE(634)] = 6618,
  [SMALL_STATE(635)] = 6623,
  [SMALL_STATE(636)] = 6628,
  [SMALL_STATE(637)] = 6633,
  [SMALL_STATE(638)] = 6638,
  [SMALL_STATE(639)] = 6643,
  [SMALL_STATE(640)] = 6648,
  [SMALL_STATE(641)] = 6653,
  [SMALL_STATE(642)] = 6658,
  [SMALL_STATE(643)] = 6663,
  [SMALL_STATE(644)] = 6668,
  [SMALL_STATE(645)] = 6673,
  [SMALL_STATE(646)] = 6678,
  [SMALL_STATE(647)] = 6683,
  [SMALL_STATE(648)] = 6688,
  [SMALL_STATE(649)] = 6693,
  [SMALL_STATE(650)] = 6698,
  [SMALL_STATE(651)] = 6703,
  [SMALL_STATE(652)] = 6708,
  [SMALL_STATE(653)] = 6713,
  [SMALL_STATE(654)] = 6718,
  [SMALL_STATE(655)] = 6723,
  [SMALL_STATE(656)] = 6728,
  [SMALL_STATE(657)] = 6735,
  [SMALL_STATE(658)] = 6740,
  [SMALL_STATE(659)] = 6745,
  [SMALL_STATE(660)] = 6750,
  [SMALL_STATE(661)] = 6755,
  [SMALL_STATE(662)] = 6760,
  [SMALL_STATE(663)] = 6765,
  [SMALL_STATE(664)] = 6770,
  [SMALL_STATE(665)] = 6775,
  [SMALL_STATE(666)] = 6780,
  [SMALL_STATE(667)] = 6787,
  [SMALL_STATE(668)] = 6792,
  [SMALL_STATE(669)] = 6797,
  [SMALL_STATE(670)] = 6802,
  [SMALL_STATE(671)] = 6807,
  [SMALL_STATE(672)] = 6812,
  [SMALL_STATE(673)] = 6817,
  [SMALL_STATE(674)] = 6822,
  [SMALL_STATE(675)] = 6829,
  [SMALL_STATE(676)] = 6834,
  [SMALL_STATE(677)] = 6839,
  [SMALL_STATE(678)] = 6844,
  [SMALL_STATE(679)] = 6851,
  [SMALL_STATE(680)] = 6856,
  [SMALL_STATE(681)] = 6861,
  [SMALL_STATE(682)] = 6866,
  [SMALL_STATE(683)] = 6873,
  [SMALL_STATE(684)] = 6878,
  [SMALL_STATE(685)] = 6883,
  [SMALL_STATE(686)] = 6888,
  [SMALL_STATE(687)] = 6893,
  [SMALL_STATE(688)] = 6898,
  [SMALL_STATE(689)] = 6903,
  [SMALL_STATE(690)] = 6908,
  [SMALL_STATE(691)] = 6913,
  [SMALL_STATE(692)] = 6918,
  [SMALL_STATE(693)] = 6923,
  [SMALL_STATE(694)] = 6928,
  [SMALL_STATE(695)] = 6933,
  [SMALL_STATE(696)] = 6938,
  [SMALL_STATE(697)] = 6943,
  [SMALL_STATE(698)] = 6948,
  [SMALL_STATE(699)] = 6955,
  [SMALL_STATE(700)] = 6960,
  [SMALL_STATE(701)] = 6967,
  [SMALL_STATE(702)] = 6974,
  [SMALL_STATE(703)] = 6979,
  [SMALL_STATE(704)] = 6984,
  [SMALL_STATE(705)] = 6989,
  [SMALL_STATE(706)] = 6994,
  [SMALL_STATE(707)] = 6999,
  [SMALL_STATE(708)] = 7006,
  [SMALL_STATE(709)] = 7011,
  [SMALL_STATE(710)] = 7016,
  [SMALL_STATE(711)] = 7021,
  [SMALL_STATE(712)] = 7026,
  [SMALL_STATE(713)] = 7031,
  [SMALL_STATE(714)] = 7038,
  [SMALL_STATE(715)] = 7043,
  [SMALL_STATE(716)] = 7048,
  [SMALL_STATE(717)] = 7055,
  [SMALL_STATE(718)] = 7060,
  [SMALL_STATE(719)] = 7065,
  [SMALL_STATE(720)] = 7070,
  [SMALL_STATE(721)] = 7077,
  [SMALL_STATE(722)] = 7082,
  [SMALL_STATE(723)] = 7087,
  [SMALL_STATE(724)] = 7092,
  [SMALL_STATE(725)] = 7097,
  [SMALL_STATE(726)] = 7102,
  [SMALL_STATE(727)] = 7109,
  [SMALL_STATE(728)] = 7114,
  [SMALL_STATE(729)] = 7119,
  [SMALL_STATE(730)] = 7124,
  [SMALL_STATE(731)] = 7129,
  [SMALL_STATE(732)] = 7134,
  [SMALL_STATE(733)] = 7141,
  [SMALL_STATE(734)] = 7146,
  [SMALL_STATE(735)] = 7151,
  [SMALL_STATE(736)] = 7156,
  [SMALL_STATE(737)] = 7161,
  [SMALL_STATE(738)] = 7166,
  [SMALL_STATE(739)] = 7171,
  [SMALL_STATE(740)] = 7176,
  [SMALL_STATE(741)] = 7181,
  [SMALL_STATE(742)] = 7186,
  [SMALL_STATE(743)] = 7191,
  [SMALL_STATE(744)] = 7198,
  [SMALL_STATE(745)] = 7203,
  [SMALL_STATE(746)] = 7208,
  [SMALL_STATE(747)] = 7213,
  [SMALL_STATE(748)] = 7218,
  [SMALL_STATE(749)] = 7223,
  [SMALL_STATE(750)] = 7228,
  [SMALL_STATE(751)] = 7233,
  [SMALL_STATE(752)] = 7238,
  [SMALL_STATE(753)] = 7243,
  [SMALL_STATE(754)] = 7248,
  [SMALL_STATE(755)] = 7253,
  [SMALL_STATE(756)] = 7258,
  [SMALL_STATE(757)] = 7263,
  [SMALL_STATE(758)] = 7268,
  [SMALL_STATE(759)] = 7273,
  [SMALL_STATE(760)] = 7278,
  [SMALL_STATE(761)] = 7283,
  [SMALL_STATE(762)] = 7290,
  [SMALL_STATE(763)] = 7295,
  [SMALL_STATE(764)] = 7300,
  [SMALL_STATE(765)] = 7305,
  [SMALL_STATE(766)] = 7312,
  [SMALL_STATE(767)] = 7317,
  [SMALL_STATE(768)] = 7322,
  [SMALL_STATE(769)] = 7327,
  [SMALL_STATE(770)] = 7334,
  [SMALL_STATE(771)] = 7339,
  [SMALL_STATE(772)] = 7344,
  [SMALL_STATE(773)] = 7349,
  [SMALL_STATE(774)] = 7354,
  [SMALL_STATE(775)] = 7361,
  [SMALL_STATE(776)] = 7366,
  [SMALL_STATE(777)] = 7371,
  [SMALL_STATE(778)] = 7376,
  [SMALL_STATE(779)] = 7381,
  [SMALL_STATE(780)] = 7386,
  [SMALL_STATE(781)] = 7391,
  [SMALL_STATE(782)] = 7396,
  [SMALL_STATE(783)] = 7403,
  [SMALL_STATE(784)] = 7410,
  [SMALL_STATE(785)] = 7417,
  [SMALL_STATE(786)] = 7422,
  [SMALL_STATE(787)] = 7429,
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
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(403),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(406),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(434),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(435),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(449),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(455),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(465),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(466),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(469),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(474),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(485),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(486),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(490),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(491),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(500),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(501),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(316),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(318),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(320),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(329),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(331),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(332),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(336),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(341),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(342),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(347),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(348),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(798),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 4, 0, 16),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 4, 0, 16),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 5, 0, 16),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 5, 0, 16),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 6, 0, 16),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 6, 0, 16),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(403),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(406),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(434),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(435),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(449),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(455),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(465),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(466),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(469),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(474),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(485),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(486),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(490),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(491),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(500),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(501),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(316),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(318),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(320),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [743] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(329),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(331),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(332),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(336),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(341),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(342),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(347),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(348),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [809] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(599),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4, 0, 0),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, 0, 37),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, 0, 37),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, 0, 15),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 5, 0, 15),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, 0, 15),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, 0, 15),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, 0, 35),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, 0, 35),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, 0, 37),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, 0, 37),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 3, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, 0, 75),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, 0, 75),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 7, 0, 16),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 7, 0, 16),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, 0, 35),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, 0, 35),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, 0, 75),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 8, 0, 75),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4, 0, 0),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 4, 0, 0),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [962] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2, 0, 0), SHIFT_REPEAT(794),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2, 0, 0),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, 0, 11),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2, 0, 0),
  [983] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2, 0, 0), SHIFT_REPEAT(95),
  [986] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2, 0, 0), SHIFT_REPEAT(95),
  [989] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2, 0, 0), SHIFT_REPEAT(838),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1018] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [1021] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [1024] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2, 0, 0), SHIFT_REPEAT(835),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2, 0, 0),
  [1029] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0), SHIFT_REPEAT(836),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1048] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [1054] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0), SHIFT_REPEAT(837),
  [1057] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hosts_string, 1, 0, 21),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 1, 0, 21),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 1, 0, 21),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1083] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__remote_command, 3, 0, 30),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_command, 3, 0, 30),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 1, 0, 11),
  [1095] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__plain_string_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__plain_string_repeat1, 2, 0, 0),
  [1100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0),
  [1105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 53),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 53),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2, 0, 0),
  [1126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 2, 0, 0), SHIFT_REPEAT(252),
  [1129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2, 0, 0), SHIFT_REPEAT(252),
  [1132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2, 0, 0), SHIFT_REPEAT(839),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1, 0, 0),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1, 0, 0),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2, 0, 44),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, 0, 11),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__plain_string, 1, 0, 21),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1, 0, 0),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1, 0, 0),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [1182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2, 0, 0),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [1201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [1204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2, 0, 0),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2, 0, 0),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 2, 0, 43),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2, 0, 0),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 1, 0, 32),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [1241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [1249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2, 0, 0),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2, 0, 44),
  [1256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [1259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [1262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 1, 0, 0),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 1, 0, 0),
  [1266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1, 0, 0), REDUCE(aux_sym__plain_string_repeat1, 1, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__plain_string_repeat1, 1, 0, 0),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 1, 0, 0),
  [1273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__plain_string_repeat1, 1, 0, 0),
  [1275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__proxy_string, 1, 0, 21),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 1, 0, 21),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 1, 0, 21),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0),
  [1283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(179),
  [1286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(179),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__plain_string_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [1294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 3, 0, 47),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1, 0, 0),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(260),
  [1322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(260),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 1, 0, 29),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 1, 0, 0),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 1, 0, 0),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__token_string, 1, 0, 21),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 1, 0, 21),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2, 0, 0),
  [1349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 2, 0, 0), SHIFT_REPEAT(377),
  [1352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2, 0, 0), SHIFT_REPEAT(377),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 1, 0, 0),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2, 0, 0),
  [1371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 2, 0, 0), SHIFT_REPEAT(438),
  [1374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2, 0, 0), SHIFT_REPEAT(438),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 1, 0, 0),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 1, 0, 0),
  [1387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(254),
  [1390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(254),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 1, 0, 0),
  [1395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 1, 0, 0),
  [1397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [1400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [1403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2, 0, 0),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2, 0, 0),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, 0, 37),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, 0, 49),
  [1425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2, 0, 0), SHIFT_REPEAT(823),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2, 0, 0),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 3, 0, 15),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, 0, 49),
  [1442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2, 0, 0), SHIFT_REPEAT(788),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2, 0, 0),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 5, 0, 49),
  [1451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2, 0, 0), SHIFT_REPEAT(818),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2, 0, 0),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 5, 0, 49),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 4, 0, 37),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 5, 0, 49),
  [1470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2, 0, 0), SHIFT_REPEAT(815),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2, 0, 0),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 3, 0, 15),
  [1477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 1, 0, 0),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 1, 0, 0),
  [1481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, 0, 63), SHIFT_REPEAT(166),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, 0, 63),
  [1486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 1, 0, 0),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 1, 0, 0),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 5, 0, 49),
  [1492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2, 0, 0), SHIFT_REPEAT(789),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2, 0, 0),
  [1497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2, 0, 0), SHIFT_REPEAT(813),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2, 0, 0),
  [1502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_jump_repeat1, 2, 0, 68), SHIFT_REPEAT(104),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_jump_repeat1, 2, 0, 68),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 3, 0, 69),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 5, 0, 49),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, 0, 37),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 4, 0, 40),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3, 0, 44),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 1, 0, 12),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 1, 0, 12),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 4, 0, 37),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 4, 0, 37),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 4, 0, 71),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 4, 0, 37),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 2, 0, 11),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 4, 0, 42),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, 0, 15),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, 0, 72),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, 0, 73),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, 0, 28),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, 0, 15),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 4, 0, 37),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 3, 0, 15),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 3, 0, 15),
  [1577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2, 0, 0), SHIFT_REPEAT(840),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2, 0, 0),
  [1582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2, 0, 0), SHIFT_REPEAT(228),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2, 0, 0),
  [1587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 3, 0, 15),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, 0, 78),
  [1591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 1, 0, 0),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 1, 0, 0),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1, 0, 0),
  [1597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1, 0, 0),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 1, 0, 0),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 1, 0, 0),
  [1605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__plain_string_repeat1, 2, 0, 0), SHIFT_REPEAT(484),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 3, 0, 15),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 4, 0, 37),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 3, 0, 48),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 3, 0, 24),
  [1624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1, 0, 0), REDUCE(aux_sym__string_repeat1, 1, 0, 0),
  [1627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1, 0, 0), REDUCE(aux_sym__string_repeat1, 1, 0, 0),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2, 0, 0),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, 0, 52),
  [1644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, 0, 15),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, 0, 17),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward, 3, 0, 19),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 3, 0, 15),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 3, 0, 15),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 3, 0, 25),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 1, 0, 26),
  [1923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 1, 0, 27),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1, 0, 0),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 3, 0, 15),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 3, 0, 15),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 3, 0, 15),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 3, 0, 15),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2, 0, 0),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, 0, 35),
  [1995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, 0, 36),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [2003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward, 4, 0, 38),
  [2005] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__plain_string_repeat1, 2, 0, 0), SHIFT_REPEAT(732),
  [2008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 4, 0, 35),
  [2010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 1, 0, 0),
  [2012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 1, 0, 0),
  [2014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 4, 0, 37),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [2022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 4, 0, 41),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [2026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 4, 0, 35),
  [2028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 4, 0, 35),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 4, 0, 35),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, 0, 46), SHIFT_REPEAT(86),
  [2041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, 0, 46),
  [2043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [2046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, 0, 0),
  [2048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, 0, 46), SHIFT_REPEAT(137),
  [2051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, 0, 46),
  [2053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, 0, 51), SHIFT_REPEAT(80),
  [2056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, 0, 51),
  [2058] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [2061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, 0, 55),
  [2063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0),
  [2065] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0), SHIFT_REPEAT(532),
  [2068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value_inner, 3, 0, 56),
  [2070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, 0, 58), SHIFT_REPEAT(51),
  [2073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, 0, 58),
  [2075] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, 0, 46), SHIFT_REPEAT(168),
  [2078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, 0, 46),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [2082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [2086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [2090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [2096] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [2099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2, 0, 0),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [2103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [2107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [2113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [2121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, 0, 62),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [2125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [2133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, 0, 66), SHIFT_REPEAT(102),
  [2136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, 0, 66),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [2140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [2142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_jump_repeat1, 2, 0, 67),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [2148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 3, 0, 64),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [2152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [2156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, 0, 46), SHIFT_REPEAT(107),
  [2159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, 0, 46),
  [2161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, 0, 46), SHIFT_REPEAT(586),
  [2164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, 0, 46),
  [2166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, 0, 46), SHIFT_REPEAT(59),
  [2169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, 0, 46),
  [2171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [2173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [2181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [2189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [2193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [2197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 1, 0, 0),
  [2199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 1, 0, 0),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [2221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4, 0, 0),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [2233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, 0, 63),
  [2235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, 0, 63), SHIFT_REPEAT(164),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [2252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [2260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [2278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [2282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [2292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [2296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, 0, 79),
  [2298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 5, 0, 81),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [2304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [2306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2, 0, 0),
  [2308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2, 0, 0), SHIFT_REPEAT(809),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [2315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2, 0, 0),
  [2317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2, 0, 0), SHIFT_REPEAT(243),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [2322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6, 0, 0),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [2328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8, 0, 0),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [2336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [2344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [2348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [2350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [2358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [2362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [2366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [2370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [2376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [2380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [2388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [2392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [2396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [2400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [2402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10, 0, 0),
  [2404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 1),
  [2406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 2),
  [2408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 14),
  [2410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_escape_command_line, 3, 0, 15),
  [2412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_ssh_keysign, 3, 0, 15),
  [2414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_char, 3, 0, 15),
  [2416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exit_on_forward_failure, 3, 0, 15),
  [2418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fingerprint_hash, 3, 0, 15),
  [2420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fork_after_authentication, 3, 0, 15),
  [2422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 3),
  [2424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 1, 0, 0),
  [2426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, 0, 22),
  [2428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, 0, 15),
  [2430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_value, 2, 0, 39),
  [2432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11, 3, 0, 15),
  [2434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 4),
  [2436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_timeout, 3, 0, 15),
  [2438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_trusted, 3, 0, 15),
  [2440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_authentication, 3, 0, 15),
  [2442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_delegate_credentials, 3, 0, 15),
  [2444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 5),
  [2446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 6),
  [2448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_known_hosts, 3, 0, 15),
  [2450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 2, 0, 0),
  [2452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 7),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [2456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_authentication, 3, 0, 15),
  [2458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 8),
  [2460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, 0, 45),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_alias, 3, 0, 15),
  [2468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 3, 0, 12),
  [2470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 3, 0, 12),
  [2472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_host, 3, 0, 48),
  [2474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_originalhost, 3, 0, 48),
  [2476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_tagged, 3, 0, 48),
  [2478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_user, 3, 0, 48),
  [2480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localuser, 3, 0, 48),
  [2482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, 0, 15),
  [2484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, 0, 49),
  [2486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [2488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, 0, 45),
  [2490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname, 3, 0, 15),
  [2492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, 0, 50),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identities_only, 3, 0, 15),
  [2500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 9),
  [2502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, 0, 15),
  [2504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, 0, 44),
  [2506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 10),
  [2508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, 0, 15),
  [2510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 3, 0, 54),
  [2512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, 0, 15),
  [2514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, 0, 22),
  [2516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, 0, 15),
  [2518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, 0, 57),
  [2520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_file, 3, 0, 15),
  [2522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, 0, 45),
  [2524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, 0, 15),
  [2526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include, 3, 0, 15),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, 0, 15),
  [2532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 3, 0, 55),
  [2534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kbd_interactive_authentication, 3, 0, 15),
  [2536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 3, 0, 55),
  [2538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, 0, 59),
  [2540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, 0, 15),
  [2542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_hosts_command, 3, 0, 15),
  [2544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, 0, 15),
  [2546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 3, 0, 54),
  [2548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 1, 0, 18),
  [2550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward, 5, 0, 60),
  [2552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 1, 0, 23),
  [2554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 5, 0, 61),
  [2556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 3, 0, 15),
  [2558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, 0, 15),
  [2560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, 0, 16),
  [2562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, 0, 18),
  [2564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, 0, 23),
  [2566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, 0, 20),
  [2568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_level, 3, 0, 15),
  [2570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, 0, 64),
  [2572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, 0, 65),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [2576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__no_host_authentication_for_localhost, 3, 0, 15),
  [2578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_of_password_prompts, 3, 0, 15),
  [2580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__password_authentication, 3, 0, 15),
  [2582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 5, 0, 59),
  [2584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 5, 0, 60),
  [2586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, 0, 45),
  [2588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_local_command, 3, 0, 15),
  [2590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env_value, 3, 0, 32),
  [2592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, 0, 45),
  [2594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [2596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 5, 0, 49),
  [2598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, 0, 45),
  [2600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 13),
  [2602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pkcs11_provider, 3, 0, 15),
  [2604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port, 3, 0, 15),
  [2606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, 0, 70),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 3, 0, 15),
  [2614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, 0, 15),
  [2616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, 0, 15),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [2620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [2622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, 0, 15),
  [2624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_use_fdpass, 3, 0, 15),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, 0, 15),
  [2630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_authentication, 3, 0, 15),
  [2632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 3, 0, 15),
  [2634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, 0, 15),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, 0, 15),
  [2640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, 0, 15),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 3, 0, 31),
  [2646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, 0, 62),
  [2648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 6, 0, 74),
  [2650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_tty, 3, 0, 15),
  [2652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_rsa_size, 3, 0, 15),
  [2654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__revoked_host_keys, 3, 0, 15),
  [2656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, 0, 22),
  [2658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, 0, 15),
  [2660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, 0, 15),
  [2662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, 0, 15),
  [2664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 5, 0, 76),
  [2666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 5, 0, 77),
  [2668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_count_max, 3, 0, 15),
  [2670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_interval, 3, 0, 15),
  [2672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__session_type, 3, 0, 15),
  [2674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 3, 0, 44),
  [2676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stdin_null, 3, 0, 15),
  [2678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_mask, 3, 0, 15),
  [2680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_unlink, 3, 0, 15),
  [2682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strict_host_key_checking, 3, 0, 15),
  [2684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__syslog_facility, 3, 0, 15),
  [2686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 3, 0, 54),
  [2688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tcp_keep_alive, 3, 0, 15),
  [2690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag, 3, 0, 15),
  [2692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, 0, 80),
  [2694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel, 3, 0, 15),
  [2696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_host_keys, 3, 0, 15),
  [2698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 6, 0, 82),
  [2700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use_keychain, 3, 0, 16),
  [2702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user, 3, 0, 15),
  [2704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 4, 0, 44),
  [2706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 1, 0, 18),
  [2708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_host_key_dns, 3, 0, 15),
  [2710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__visual_host_key, 3, 0, 15),
  [2712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, 0, 79),
  [2714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [2716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [2718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xauth_location, 3, 0, 15),
  [2720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 1, 0, 20),
  [2722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2, 0, 33),
  [2724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2, 0, 34),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [2728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [2732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [2740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [2756] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [2776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [2778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [2780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [2782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [2784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [2786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [2788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [2790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [2792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [2794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [2800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [2802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [2804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [2806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [2808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [2810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [2812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [2814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [2816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [2818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [2820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [2822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [2824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
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
