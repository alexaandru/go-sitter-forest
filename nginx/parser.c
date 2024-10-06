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
#define STATE_COUNT 178
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  aux_sym_comment_token1 = 1,
  sym_random_value = 2,
  anon_sym_SQUOTE_SQUOTE = 3,
  aux_sym_attribute_token1 = 4,
  anon_sym_SEMI = 5,
  sym_condition = 6,
  anon_sym_if = 7,
  sym_location_route = 8,
  anon_sym_EQ = 9,
  anon_sym_TILDE = 10,
  anon_sym_TILDE_STAR = 11,
  anon_sym_CARET_TILDE = 12,
  anon_sym_location = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  sym_on = 16,
  sym_off = 17,
  sym_auto = 18,
  sym_cpumask = 19,
  anon_sym_select = 20,
  anon_sym_poll = 21,
  anon_sym_kqueue = 22,
  anon_sym_epoll = 23,
  anon_sym_SLASHdev_SLASHpoll = 24,
  anon_sym_eventport = 25,
  anon_sym_debug = 26,
  anon_sym_info = 27,
  anon_sym_notice = 28,
  anon_sym_warn = 29,
  anon_sym_error = 30,
  anon_sym_crit = 31,
  anon_sym_alert = 32,
  anon_sym_emerg = 33,
  sym_time = 34,
  sym_size = 35,
  aux_sym__fileish_token1 = 36,
  aux_sym__fileish_token2 = 37,
  anon_sym_SLASH = 38,
  anon_sym_DOT = 39,
  anon_sym_DASH = 40,
  anon_sym__ = 41,
  anon_sym_STAR = 42,
  sym__word = 43,
  sym_var = 44,
  aux_sym_quoted_string_literal_token1 = 45,
  sym_string_literal = 46,
  sym_numeric_literal = 47,
  anon_sym_map = 48,
  anon_sym_accept_mutex = 49,
  anon_sym_daemon = 50,
  anon_sym_master_process = 51,
  anon_sym_multi_accept = 52,
  anon_sym_pcre_jit = 53,
  anon_sym_accept_mutex_delay = 54,
  anon_sym_worker_shutdown_timeout = 55,
  anon_sym_timer_resolution = 56,
  anon_sym_worker_aio_requests = 57,
  anon_sym_worker_connections = 58,
  anon_sym_worker_priority = 59,
  anon_sym_worker_rlimit_nofile = 60,
  anon_sym_load_module = 61,
  anon_sym_lock_file = 62,
  anon_sym_pid = 63,
  anon_sym_include = 64,
  anon_sym_worker_processes = 65,
  anon_sym_debug_points = 66,
  anon_sym_abort = 67,
  anon_sym_stop = 68,
  anon_sym_use = 69,
  anon_sym_working_directory = 70,
  anon_sym_worker_rlimit_core = 71,
  anon_sym_worker_cpu_affinity = 72,
  anon_sym_debug_connection = 73,
  anon_sym_ssl_engine = 74,
  aux_sym__abstract_directive_token1 = 75,
  anon_sym_return = 76,
  anon_sym_env = 77,
  aux_sym__env_directive_token1 = 78,
  anon_sym_error_log = 79,
  anon_sym_threads = 80,
  anon_sym_max_queue = 81,
  anon_sym_thread_pool = 82,
  anon_sym_user = 83,
  anon_sym_events = 84,
  sym__newline = 85,
  sym__indent = 86,
  sym__dedent = 87,
  sym_source_file = 88,
  sym_comment = 89,
  aux_sym__body = 90,
  sym__attribute_value = 91,
  sym_attribute = 92,
  sym_if = 93,
  sym_location_modifier = 94,
  sym_location = 95,
  sym_directive = 96,
  sym_block = 97,
  sym_boolean = 98,
  sym_connection_method = 99,
  sym_level = 100,
  sym__fileish = 101,
  sym_file = 102,
  sym_mask = 103,
  sym_quoted_string_literal = 104,
  sym_map = 105,
  sym__boolean_directive = 106,
  sym__boolean_keyword = 107,
  sym__time_directive = 108,
  sym__time_keyword = 109,
  sym__number_directive = 110,
  sym__number_keyword = 111,
  sym__file_directive = 112,
  sym__file_keyword = 113,
  sym__include_directive = 114,
  sym__number_or_auto_directive = 115,
  sym__debug_points_directive = 116,
  sym__use_directive = 117,
  sym__working_directory_directive = 118,
  sym__working_core_directive = 119,
  sym__affinity_directive = 120,
  sym__abstract_directive = 121,
  sym__return_directive = 122,
  sym__env_directive = 123,
  sym__error_log_directive = 124,
  sym__thread_poll_variable = 125,
  sym__thread_pool_directive = 126,
  sym__user_directive = 127,
  sym__events_directive = 128,
  aux_sym_attribute_repeat1 = 129,
  aux_sym_file_repeat1 = 130,
  aux_sym_mask_repeat1 = 131,
  aux_sym_map_repeat1 = 132,
  aux_sym__affinity_directive_repeat1 = 133,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_random_value] = "value",
  [anon_sym_SQUOTE_SQUOTE] = "keyword",
  [aux_sym_attribute_token1] = "attribute_token1",
  [anon_sym_SEMI] = ";",
  [sym_condition] = "condition",
  [anon_sym_if] = "if",
  [sym_location_route] = "location_route",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE] = "~",
  [anon_sym_TILDE_STAR] = "~*",
  [anon_sym_CARET_TILDE] = "^~",
  [anon_sym_location] = "location",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_on] = "on",
  [sym_off] = "off",
  [sym_auto] = "auto",
  [sym_cpumask] = "cpumask",
  [anon_sym_select] = "select",
  [anon_sym_poll] = "poll",
  [anon_sym_kqueue] = "kqueue",
  [anon_sym_epoll] = "epoll",
  [anon_sym_SLASHdev_SLASHpoll] = "/dev/poll",
  [anon_sym_eventport] = "eventport",
  [anon_sym_debug] = "debug",
  [anon_sym_info] = "info",
  [anon_sym_notice] = "notice",
  [anon_sym_warn] = "warn",
  [anon_sym_error] = "error",
  [anon_sym_crit] = "crit",
  [anon_sym_alert] = "alert",
  [anon_sym_emerg] = "emerg",
  [sym_time] = "time",
  [sym_size] = "size",
  [aux_sym__fileish_token1] = "_fileish_token1",
  [aux_sym__fileish_token2] = "_fileish_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym__] = "_",
  [anon_sym_STAR] = "*",
  [sym__word] = "_word",
  [sym_var] = "var",
  [aux_sym_quoted_string_literal_token1] = "quoted_string_literal_token1",
  [sym_string_literal] = "string_literal",
  [sym_numeric_literal] = "numeric_literal",
  [anon_sym_map] = "map",
  [anon_sym_accept_mutex] = "accept_mutex",
  [anon_sym_daemon] = "daemon",
  [anon_sym_master_process] = "master_process",
  [anon_sym_multi_accept] = "multi_accept",
  [anon_sym_pcre_jit] = "pcre_jit",
  [anon_sym_accept_mutex_delay] = "accept_mutex_delay",
  [anon_sym_worker_shutdown_timeout] = "worker_shutdown_timeout",
  [anon_sym_timer_resolution] = "timer_resolution",
  [anon_sym_worker_aio_requests] = "worker_aio_requests",
  [anon_sym_worker_connections] = "worker_connections",
  [anon_sym_worker_priority] = "worker_priority",
  [anon_sym_worker_rlimit_nofile] = "worker_rlimit_nofile",
  [anon_sym_load_module] = "load_module",
  [anon_sym_lock_file] = "lock_file",
  [anon_sym_pid] = "pid",
  [anon_sym_include] = "keyword",
  [anon_sym_worker_processes] = "keyword",
  [anon_sym_debug_points] = "keyword",
  [anon_sym_abort] = "constant",
  [anon_sym_stop] = "constant",
  [anon_sym_use] = "keyword",
  [anon_sym_working_directory] = "keyword",
  [anon_sym_worker_rlimit_core] = "keyword",
  [anon_sym_worker_cpu_affinity] = "keyword",
  [anon_sym_debug_connection] = "keyword",
  [anon_sym_ssl_engine] = "keyword",
  [aux_sym__abstract_directive_token1] = "value",
  [anon_sym_return] = "keyword",
  [anon_sym_env] = "keyword",
  [aux_sym__env_directive_token1] = "variable",
  [anon_sym_error_log] = "keyword",
  [anon_sym_threads] = "keyword",
  [anon_sym_max_queue] = "keyword",
  [anon_sym_thread_pool] = "keyword",
  [anon_sym_user] = "keyword",
  [anon_sym_events] = "keyword",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [aux_sym__body] = "_body",
  [sym__attribute_value] = "_attribute_value",
  [sym_attribute] = "attribute",
  [sym_if] = "if",
  [sym_location_modifier] = "location_modifier",
  [sym_location] = "location",
  [sym_directive] = "directive",
  [sym_block] = "block",
  [sym_boolean] = "boolean",
  [sym_connection_method] = "connection_method",
  [sym_level] = "level",
  [sym__fileish] = "_fileish",
  [sym_file] = "file",
  [sym_mask] = "mask",
  [sym_quoted_string_literal] = "quoted_string_literal",
  [sym_map] = "map",
  [sym__boolean_directive] = "_boolean_directive",
  [sym__boolean_keyword] = "keyword",
  [sym__time_directive] = "_time_directive",
  [sym__time_keyword] = "keyword",
  [sym__number_directive] = "_number_directive",
  [sym__number_keyword] = "keyword",
  [sym__file_directive] = "_file_directive",
  [sym__file_keyword] = "keyword",
  [sym__include_directive] = "_include_directive",
  [sym__number_or_auto_directive] = "_number_or_auto_directive",
  [sym__debug_points_directive] = "_debug_points_directive",
  [sym__use_directive] = "_use_directive",
  [sym__working_directory_directive] = "_working_directory_directive",
  [sym__working_core_directive] = "_working_core_directive",
  [sym__affinity_directive] = "_affinity_directive",
  [sym__abstract_directive] = "_abstract_directive",
  [sym__return_directive] = "_return_directive",
  [sym__env_directive] = "_env_directive",
  [sym__error_log_directive] = "_error_log_directive",
  [sym__thread_poll_variable] = "variable",
  [sym__thread_pool_directive] = "_thread_pool_directive",
  [sym__user_directive] = "_user_directive",
  [sym__events_directive] = "_events_directive",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_mask_repeat1] = "mask_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym__affinity_directive_repeat1] = "_affinity_directive_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_random_value] = sym_random_value,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [aux_sym_attribute_token1] = aux_sym_attribute_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_condition] = sym_condition,
  [anon_sym_if] = anon_sym_if,
  [sym_location_route] = sym_location_route,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_TILDE_STAR] = anon_sym_TILDE_STAR,
  [anon_sym_CARET_TILDE] = anon_sym_CARET_TILDE,
  [anon_sym_location] = anon_sym_location,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_on] = sym_on,
  [sym_off] = sym_off,
  [sym_auto] = sym_auto,
  [sym_cpumask] = sym_cpumask,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_poll] = anon_sym_poll,
  [anon_sym_kqueue] = anon_sym_kqueue,
  [anon_sym_epoll] = anon_sym_epoll,
  [anon_sym_SLASHdev_SLASHpoll] = anon_sym_SLASHdev_SLASHpoll,
  [anon_sym_eventport] = anon_sym_eventport,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_notice] = anon_sym_notice,
  [anon_sym_warn] = anon_sym_warn,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_crit] = anon_sym_crit,
  [anon_sym_alert] = anon_sym_alert,
  [anon_sym_emerg] = anon_sym_emerg,
  [sym_time] = sym_time,
  [sym_size] = sym_size,
  [aux_sym__fileish_token1] = aux_sym__fileish_token1,
  [aux_sym__fileish_token2] = aux_sym__fileish_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym__] = anon_sym__,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym__word] = sym__word,
  [sym_var] = sym_var,
  [aux_sym_quoted_string_literal_token1] = aux_sym_quoted_string_literal_token1,
  [sym_string_literal] = sym_string_literal,
  [sym_numeric_literal] = sym_numeric_literal,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_accept_mutex] = anon_sym_accept_mutex,
  [anon_sym_daemon] = anon_sym_daemon,
  [anon_sym_master_process] = anon_sym_master_process,
  [anon_sym_multi_accept] = anon_sym_multi_accept,
  [anon_sym_pcre_jit] = anon_sym_pcre_jit,
  [anon_sym_accept_mutex_delay] = anon_sym_accept_mutex_delay,
  [anon_sym_worker_shutdown_timeout] = anon_sym_worker_shutdown_timeout,
  [anon_sym_timer_resolution] = anon_sym_timer_resolution,
  [anon_sym_worker_aio_requests] = anon_sym_worker_aio_requests,
  [anon_sym_worker_connections] = anon_sym_worker_connections,
  [anon_sym_worker_priority] = anon_sym_worker_priority,
  [anon_sym_worker_rlimit_nofile] = anon_sym_worker_rlimit_nofile,
  [anon_sym_load_module] = anon_sym_load_module,
  [anon_sym_lock_file] = anon_sym_lock_file,
  [anon_sym_pid] = anon_sym_pid,
  [anon_sym_include] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_worker_processes] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_debug_points] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_abort] = anon_sym_abort,
  [anon_sym_stop] = anon_sym_abort,
  [anon_sym_use] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_working_directory] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_worker_rlimit_core] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_worker_cpu_affinity] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_debug_connection] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_ssl_engine] = anon_sym_SQUOTE_SQUOTE,
  [aux_sym__abstract_directive_token1] = sym_random_value,
  [anon_sym_return] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_env] = anon_sym_SQUOTE_SQUOTE,
  [aux_sym__env_directive_token1] = aux_sym__env_directive_token1,
  [anon_sym_error_log] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_threads] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_max_queue] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_thread_pool] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_user] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_events] = anon_sym_SQUOTE_SQUOTE,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [aux_sym__body] = aux_sym__body,
  [sym__attribute_value] = sym__attribute_value,
  [sym_attribute] = sym_attribute,
  [sym_if] = sym_if,
  [sym_location_modifier] = sym_location_modifier,
  [sym_location] = sym_location,
  [sym_directive] = sym_directive,
  [sym_block] = sym_block,
  [sym_boolean] = sym_boolean,
  [sym_connection_method] = sym_connection_method,
  [sym_level] = sym_level,
  [sym__fileish] = sym__fileish,
  [sym_file] = sym_file,
  [sym_mask] = sym_mask,
  [sym_quoted_string_literal] = sym_quoted_string_literal,
  [sym_map] = sym_map,
  [sym__boolean_directive] = sym__boolean_directive,
  [sym__boolean_keyword] = anon_sym_SQUOTE_SQUOTE,
  [sym__time_directive] = sym__time_directive,
  [sym__time_keyword] = anon_sym_SQUOTE_SQUOTE,
  [sym__number_directive] = sym__number_directive,
  [sym__number_keyword] = anon_sym_SQUOTE_SQUOTE,
  [sym__file_directive] = sym__file_directive,
  [sym__file_keyword] = anon_sym_SQUOTE_SQUOTE,
  [sym__include_directive] = sym__include_directive,
  [sym__number_or_auto_directive] = sym__number_or_auto_directive,
  [sym__debug_points_directive] = sym__debug_points_directive,
  [sym__use_directive] = sym__use_directive,
  [sym__working_directory_directive] = sym__working_directory_directive,
  [sym__working_core_directive] = sym__working_core_directive,
  [sym__affinity_directive] = sym__affinity_directive,
  [sym__abstract_directive] = sym__abstract_directive,
  [sym__return_directive] = sym__return_directive,
  [sym__env_directive] = sym__env_directive,
  [sym__error_log_directive] = sym__error_log_directive,
  [sym__thread_poll_variable] = aux_sym__env_directive_token1,
  [sym__thread_pool_directive] = sym__thread_pool_directive,
  [sym__user_directive] = sym__user_directive,
  [sym__events_directive] = sym__events_directive,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_mask_repeat1] = aux_sym_mask_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym__affinity_directive_repeat1] = aux_sym__affinity_directive_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_random_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_attribute_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_location_route] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_location] = {
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
  [sym_on] = {
    .visible = true,
    .named = true,
  },
  [sym_off] = {
    .visible = true,
    .named = true,
  },
  [sym_auto] = {
    .visible = true,
    .named = true,
  },
  [sym_cpumask] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kqueue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_epoll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHdev_SLASHpoll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eventport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_crit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emerg] = {
    .visible = true,
    .named = false,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_size] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__fileish_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__fileish_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quoted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_accept_mutex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_daemon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_master_process] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multi_accept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcre_jit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_accept_mutex_delay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_worker_shutdown_timeout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timer_resolution] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_worker_aio_requests] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_worker_connections] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_worker_priority] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_worker_rlimit_nofile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_worker_processes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_debug_points] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_abort] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_stop] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_working_directory] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_worker_rlimit_core] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_worker_cpu_affinity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_debug_connection] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ssl_engine] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__abstract_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__env_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_error_log] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_threads] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_max_queue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_thread_pool] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_user] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_events] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__body] = {
    .visible = false,
    .named = false,
  },
  [sym__attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_location_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_location] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_connection_method] = {
    .visible = true,
    .named = true,
  },
  [sym_level] = {
    .visible = true,
    .named = true,
  },
  [sym__fileish] = {
    .visible = false,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_mask] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__time_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__time_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__number_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__number_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__file_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__file_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__include_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__number_or_auto_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__debug_points_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__use_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__working_directory_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__working_core_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__affinity_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__abstract_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__return_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__env_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__error_log_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__thread_poll_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__thread_pool_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__user_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__events_directive] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mask_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__affinity_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_condition = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_sym_SQUOTE_SQUOTE,
  },
  [3] = {
    [1] = anon_sym_abort,
  },
  [4] = {
    [1] = sym_random_value,
  },
  [5] = {
    [1] = sym_random_value,
    [2] = sym_random_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_connection_method, 2,
    sym_connection_method,
    anon_sym_abort,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 14,
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
  [63] = 59,
  [64] = 61,
  [65] = 60,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 67,
  [75] = 73,
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
  [164] = 158,
  [165] = 159,
  [166] = 160,
  [167] = 167,
  [168] = 168,
  [169] = 150,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 103,
  [175] = 104,
  [176] = 176,
  [177] = 177,
};

static TSCharacterRange aux_sym__fileish_token2_character_set_1[] = {
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

static TSCharacterRange sym__word_character_set_1[] = {
  {'-', '-'}, {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a},
  {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710},
  {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a},
  {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939},
  {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0},
  {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc},
  {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c},
  {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9},
  {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30},
  {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a},
  {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9},
  {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d},
  {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd},
  {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e},
  {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6},
  {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5},
  {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47},
  {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066},
  {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248},
  {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5},
  {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f},
  {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711},
  {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878},
  {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab},
  {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf},
  {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec},
  {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d},
  {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe},
  {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071},
  {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124},
  {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184},
  {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f},
  {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6},
  {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa},
  {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00},
  {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5},
  {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805},
  {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925},
  {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28},
  {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd},
  {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16},
  {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6},
  {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36},
  {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7},
  {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf},
  {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d},
  {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a},
  {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736},
  {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835},
  {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static TSCharacterRange sym_var_character_set_1[] = {
  {'$', '$'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6},
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

static TSCharacterRange sym_var_character_set_2[] = {
  {'$', '$'}, {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a},
  {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710},
  {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a},
  {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939},
  {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0},
  {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc},
  {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c},
  {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9},
  {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30},
  {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a},
  {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9},
  {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d},
  {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd},
  {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e},
  {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6},
  {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5},
  {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47},
  {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066},
  {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248},
  {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5},
  {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f},
  {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711},
  {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878},
  {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab},
  {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf},
  {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec},
  {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d},
  {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe},
  {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071},
  {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124},
  {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184},
  {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f},
  {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6},
  {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa},
  {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00},
  {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5},
  {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805},
  {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925},
  {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28},
  {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd},
  {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16},
  {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6},
  {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36},
  {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7},
  {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf},
  {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d},
  {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a},
  {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736},
  {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835},
  {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_random_value);
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '"', 53,
        '#', 49,
        '\'', 56,
        '*', 171,
        '-', 169,
        '.', 168,
        '/', 167,
        ';', 131,
        '=', 137,
        '^', 123,
        '_', 170,
        '{', 142,
        '}', 143,
        '~', 138,
        '0', 147,
        '1', 147,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(166);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(423);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '$') ADVANCE(417);
      if (lookahead == '{') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (set_contains(sym_var_character_set_1, 430, lookahead)) ADVANCE(172);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ';') ADVANCE(131);
      if (lookahead == '_') ADVANCE(170);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(166);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == ';') ADVANCE(131);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(147);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == ';') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (set_contains(aux_sym__fileish_token2_character_set_1, 429, lookahead)) ADVANCE(416);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '^') ADVANCE(135);
      if (lookahead == '~') ADVANCE(138);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(136);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(136);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(456);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(128);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(420);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(449);
      END_STATE();
    case 29:
      if (lookahead == 'q') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 41:
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(459);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '#', 50,
        '\'', 11,
        '(', 14,
        ';', 131,
        '=', 137,
        'a', 200,
        'd', 191,
        'e', 300,
        'i', 251,
        'l', 318,
        'm', 190,
        'p', 201,
        'r', 221,
        's', 371,
        't', 261,
        'u', 372,
        'w', 321,
        '{', 142,
        '}', 143,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      if (set_contains(aux_sym__fileish_token2_character_set_1, 429, lookahead)) ADVANCE(416);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(456);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_random_value);
      ADVANCE_MAP(
        '"', 53,
        '#', 49,
        '\'', 58,
        '/', 64,
        'a', 86,
        'c', 105,
        'd', 65,
        'e', 90,
        'i', 91,
        'k', 104,
        'n', 97,
        'o', 76,
        'p', 94,
        's', 70,
        'w', 60,
        '{', 142,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_random_value);
      ADVANCE_MAP(
        '"', 53,
        '#', 49,
        '\'', 58,
        '/', 64,
        'a', 86,
        'c', 105,
        'd', 65,
        'e', 90,
        'i', 91,
        'k', 104,
        'n', 97,
        'o', 76,
        'p', 94,
        's', 70,
        'w', 60,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(1);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '"') ADVANCE(422);
      if (lookahead == '\\') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(1);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == ';') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(12);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\'') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(12);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(12);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'g') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 'v') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'q') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == 'v') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '~') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_random_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_random_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(456);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_condition);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_if);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_location_route);
      if (lookahead == '~') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_location_route);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '*') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_TILDE_STAR);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_CARET_TILDE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_location);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_on);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_off);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_auto);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_cpumask);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_poll);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_kqueue);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_epoll);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SLASHdev_SLASHpoll);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_eventport);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_notice);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_warn);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_crit);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_alert);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_emerg);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_size);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__fileish_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__fileish_token2);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(417);
      if (lookahead == '-') ADVANCE(416);
      if (set_contains(sym_var_character_set_2, 432, lookahead)) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(252);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(281);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(207);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(197);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(209);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(346);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(198);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(296);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(344);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(193);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(288);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(216);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(237);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(390);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(295);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(358);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(360);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == 'u') ADVANCE(285);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(199);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(195);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(253);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(414);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'k') ADVANCE(173);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(218);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(289);
      if (lookahead == 's') ADVANCE(260);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(210);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'b') ADVANCE(399);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(203);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead == 'i') ADVANCE(213);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(286);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(224);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(394);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(239);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(240);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'p') ADVANCE(326);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(245);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead == 'n') ADVANCE(340);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(208);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(395);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(398);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(444);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(187);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(407);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(278);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(226);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(181);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(319);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(241);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(383);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(307);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(450);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(343);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(196);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(445);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(443);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(455);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(411);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(442);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(347);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(452);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(441);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(294);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(211);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(374);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(306);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(174);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(373);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(377);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(287);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(368);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(375);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(337);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(345);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(204);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(355);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(357);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'i') ADVANCE(313);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(212);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(202);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(264);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(254);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(270);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(277);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(460);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(175);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(267);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(184);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(402);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(297);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(299);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(325);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(291);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(379);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(179);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(310);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(381);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(339);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(315);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(386);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(298);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(308);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(393);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(206);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(332);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(293);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(363);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(333);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(334);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'j') ADVANCE(265);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(249);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(185);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(463);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(378);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(400);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(194);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(322);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(262);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(408);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(227);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(230);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(233);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(320);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(324);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(406);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(247);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(244);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(274);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead == 'v') ADVANCE(222);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(431);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(457);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(141);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(454);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(437);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(258);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(385);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(387);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(369);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(228);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(235);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(186);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(259);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(311);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(271);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(250);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(316);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(192);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(410);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(301);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(348);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(256);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(353);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(215);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(303);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(273);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(364);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(284);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(314);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(350);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(328);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(304);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(305);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(309);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(205);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(290);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(404);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(361);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(189);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(255);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'p') ADVANCE(403);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(429);
      if (lookahead == 's') ADVANCE(396);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(389);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(331);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(380);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(356);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'q') ADVANCE(405);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(282);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(275);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(413);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(302);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(238);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(183);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(225);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(188);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(335);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(178);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(236);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(176);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(231);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(232);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(323);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(246);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(268);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(465);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(447);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(432);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(446);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(439);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(438);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(283);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(223);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(367);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(336);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(391);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(242);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(376);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(266);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(434);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(433);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(412);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(436);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(401);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(263);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(365);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(415);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(366);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(219);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(180);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(272);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(370);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(229);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(177);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(330);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(276);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(248);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(279);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(280);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(257);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(217);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(351);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(388);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(182);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(382);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(243);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(392);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(292);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(397);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'v') ADVANCE(458);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(312);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'x') ADVANCE(430);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(440);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(451);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(435);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(453);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__word);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_var);
      if (set_contains(sym_var_character_set_2, 432, lookahead)) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(12);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_quoted_string_literal_token1);
      if (lookahead == '\'') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ';') ADVANCE(1);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_numeric_literal);
      ADVANCE_MAP(
        '.', 126,
        'M', 162,
        'm', 163,
        'E', 124,
        'e', 124,
        'G', 164,
        'K', 164,
        'g', 164,
        'k', 164,
        'd', 162,
        'h', 162,
        's', 162,
        'w', 162,
        'y', 162,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_map);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_accept_mutex);
      if (lookahead == '_') ADVANCE(220);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_daemon);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_master_process);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_multi_accept);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_pcre_jit);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_accept_mutex_delay);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_worker_shutdown_timeout);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_timer_resolution);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_worker_aio_requests);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_worker_connections);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_worker_priority);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_worker_rlimit_nofile);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_load_module);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_lock_file);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_pid);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_include);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_worker_processes);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_debug_points);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_abort);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == 'r') ADVANCE(464);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_working_directory);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_worker_rlimit_core);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_worker_cpu_affinity);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_debug_connection);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_ssl_engine);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__abstract_directive_token1);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_return);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_env);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__env_directive_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_error_log);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_threads);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_max_queue);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_thread_pool);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_user);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_events);
      if (set_contains(sym__word_character_set_1, 432, lookahead)) ADVANCE(416);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 45, .external_lex_state = 2},
  [4] = {.lex_state = 45, .external_lex_state = 2},
  [5] = {.lex_state = 45},
  [6] = {.lex_state = 45},
  [7] = {.lex_state = 45},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 45},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 45, .external_lex_state = 2},
  [13] = {.lex_state = 45, .external_lex_state = 2},
  [14] = {.lex_state = 45, .external_lex_state = 2},
  [15] = {.lex_state = 45, .external_lex_state = 2},
  [16] = {.lex_state = 45},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 45},
  [20] = {.lex_state = 45},
  [21] = {.lex_state = 45},
  [22] = {.lex_state = 45},
  [23] = {.lex_state = 45},
  [24] = {.lex_state = 45},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 45},
  [27] = {.lex_state = 45},
  [28] = {.lex_state = 45},
  [29] = {.lex_state = 45},
  [30] = {.lex_state = 45},
  [31] = {.lex_state = 45},
  [32] = {.lex_state = 45},
  [33] = {.lex_state = 45},
  [34] = {.lex_state = 45},
  [35] = {.lex_state = 45},
  [36] = {.lex_state = 45},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 45},
  [39] = {.lex_state = 45},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 45},
  [42] = {.lex_state = 45},
  [43] = {.lex_state = 45},
  [44] = {.lex_state = 45},
  [45] = {.lex_state = 45},
  [46] = {.lex_state = 45},
  [47] = {.lex_state = 45},
  [48] = {.lex_state = 45},
  [49] = {.lex_state = 45},
  [50] = {.lex_state = 45},
  [51] = {.lex_state = 45},
  [52] = {.lex_state = 51},
  [53] = {.lex_state = 52},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 51},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 51},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 51},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 55},
  [96] = {.lex_state = 45},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 51},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 45},
  [104] = {.lex_state = 45},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 45},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 45},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 51},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 51},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 45},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 45},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 45},
  [175] = {.lex_state = 45},
  [176] = {.lex_state = 0},
  [177] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_random_value] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_TILDE_STAR] = ACTIONS(1),
    [anon_sym_CARET_TILDE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_cpumask] = ACTIONS(1),
    [aux_sym__fileish_token1] = ACTIONS(1),
    [aux_sym__fileish_token2] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_quoted_string_literal_token1] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(130),
    [sym_comment] = STATE(1),
    [aux_sym__body] = STATE(9),
    [sym_attribute] = STATE(49),
    [sym_if] = STATE(49),
    [sym_location] = STATE(49),
    [sym_directive] = STATE(49),
    [sym_block] = STATE(49),
    [sym_map] = STATE(49),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(88),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(155),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(157),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(69),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_thread_pool] = ACTIONS(49),
    [anon_sym_user] = ACTIONS(51),
    [anon_sym_events] = ACTIONS(53),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [aux_sym__body] = STATE(2),
    [sym_attribute] = STATE(49),
    [sym_if] = STATE(49),
    [sym_location] = STATE(49),
    [sym_directive] = STATE(49),
    [sym_block] = STATE(49),
    [sym_map] = STATE(49),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(88),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(155),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(157),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(69),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(55),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(57),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(60),
    [anon_sym_location] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(55),
    [sym__word] = ACTIONS(69),
    [anon_sym_map] = ACTIONS(72),
    [anon_sym_accept_mutex] = ACTIONS(75),
    [anon_sym_daemon] = ACTIONS(75),
    [anon_sym_master_process] = ACTIONS(75),
    [anon_sym_multi_accept] = ACTIONS(75),
    [anon_sym_pcre_jit] = ACTIONS(75),
    [anon_sym_accept_mutex_delay] = ACTIONS(78),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(78),
    [anon_sym_timer_resolution] = ACTIONS(78),
    [anon_sym_worker_aio_requests] = ACTIONS(81),
    [anon_sym_worker_connections] = ACTIONS(81),
    [anon_sym_worker_priority] = ACTIONS(81),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(81),
    [anon_sym_load_module] = ACTIONS(84),
    [anon_sym_lock_file] = ACTIONS(84),
    [anon_sym_pid] = ACTIONS(84),
    [anon_sym_include] = ACTIONS(87),
    [anon_sym_worker_processes] = ACTIONS(90),
    [anon_sym_debug_points] = ACTIONS(93),
    [anon_sym_use] = ACTIONS(96),
    [anon_sym_working_directory] = ACTIONS(99),
    [anon_sym_worker_rlimit_core] = ACTIONS(102),
    [anon_sym_worker_cpu_affinity] = ACTIONS(105),
    [anon_sym_debug_connection] = ACTIONS(108),
    [anon_sym_ssl_engine] = ACTIONS(108),
    [anon_sym_return] = ACTIONS(111),
    [anon_sym_env] = ACTIONS(114),
    [anon_sym_error_log] = ACTIONS(117),
    [anon_sym_thread_pool] = ACTIONS(120),
    [anon_sym_user] = ACTIONS(123),
    [anon_sym_events] = ACTIONS(126),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [aux_sym__body] = STATE(6),
    [sym_attribute] = STATE(49),
    [sym_if] = STATE(49),
    [sym_location] = STATE(49),
    [sym_directive] = STATE(49),
    [sym_block] = STATE(49),
    [sym_map] = STATE(49),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(88),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(155),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(157),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(69),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(129),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_thread_pool] = ACTIONS(49),
    [anon_sym_user] = ACTIONS(51),
    [anon_sym_events] = ACTIONS(53),
    [sym__newline] = ACTIONS(131),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [aux_sym__body] = STATE(11),
    [sym_attribute] = STATE(49),
    [sym_if] = STATE(49),
    [sym_location] = STATE(49),
    [sym_directive] = STATE(49),
    [sym_block] = STATE(49),
    [sym_map] = STATE(49),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(88),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(155),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(157),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(69),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(133),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_thread_pool] = ACTIONS(49),
    [anon_sym_user] = ACTIONS(51),
    [anon_sym_events] = ACTIONS(53),
    [sym__newline] = ACTIONS(135),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [aux_sym__body] = STATE(2),
    [sym_attribute] = STATE(49),
    [sym_if] = STATE(49),
    [sym_location] = STATE(49),
    [sym_directive] = STATE(49),
    [sym_block] = STATE(49),
    [sym_map] = STATE(49),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(88),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(155),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(157),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(69),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(137),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_thread_pool] = ACTIONS(49),
    [anon_sym_user] = ACTIONS(51),
    [anon_sym_events] = ACTIONS(53),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [aux_sym__body] = STATE(2),
    [sym_attribute] = STATE(49),
    [sym_if] = STATE(49),
    [sym_location] = STATE(49),
    [sym_directive] = STATE(49),
    [sym_block] = STATE(49),
    [sym_map] = STATE(49),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(88),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(155),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(157),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(69),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(139),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_thread_pool] = ACTIONS(49),
    [anon_sym_user] = ACTIONS(51),
    [anon_sym_events] = ACTIONS(53),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [aux_sym__body] = STATE(2),
    [sym_attribute] = STATE(49),
    [sym_if] = STATE(49),
    [sym_location] = STATE(49),
    [sym_directive] = STATE(49),
    [sym_block] = STATE(49),
    [sym_map] = STATE(49),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(88),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(155),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(157),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(69),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(141),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_thread_pool] = ACTIONS(49),
    [anon_sym_user] = ACTIONS(51),
    [anon_sym_events] = ACTIONS(53),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [aux_sym__body] = STATE(7),
    [sym_attribute] = STATE(49),
    [sym_if] = STATE(49),
    [sym_location] = STATE(49),
    [sym_directive] = STATE(49),
    [sym_block] = STATE(49),
    [sym_map] = STATE(49),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(88),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(155),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(157),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(69),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(139),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_thread_pool] = ACTIONS(49),
    [anon_sym_user] = ACTIONS(51),
    [anon_sym_events] = ACTIONS(53),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [aux_sym__body] = STATE(2),
    [sym_attribute] = STATE(49),
    [sym_if] = STATE(49),
    [sym_location] = STATE(49),
    [sym_directive] = STATE(49),
    [sym_block] = STATE(49),
    [sym_map] = STATE(49),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(88),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(155),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(157),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(69),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_thread_pool] = ACTIONS(49),
    [anon_sym_user] = ACTIONS(51),
    [anon_sym_events] = ACTIONS(53),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [aux_sym__body] = STATE(5),
    [sym_attribute] = STATE(49),
    [sym_if] = STATE(49),
    [sym_location] = STATE(49),
    [sym_directive] = STATE(49),
    [sym_block] = STATE(49),
    [sym_map] = STATE(49),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(88),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(155),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(157),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(69),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(145),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_thread_pool] = ACTIONS(49),
    [anon_sym_user] = ACTIONS(51),
    [anon_sym_events] = ACTIONS(53),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [aux_sym__body] = STATE(2),
    [sym_attribute] = STATE(49),
    [sym_if] = STATE(49),
    [sym_location] = STATE(49),
    [sym_directive] = STATE(49),
    [sym_block] = STATE(49),
    [sym_map] = STATE(49),
    [sym__boolean_directive] = STATE(50),
    [sym__boolean_keyword] = STATE(88),
    [sym__time_directive] = STATE(50),
    [sym__time_keyword] = STATE(155),
    [sym__number_directive] = STATE(50),
    [sym__number_keyword] = STATE(157),
    [sym__file_directive] = STATE(50),
    [sym__file_keyword] = STATE(69),
    [sym__include_directive] = STATE(50),
    [sym__number_or_auto_directive] = STATE(50),
    [sym__debug_points_directive] = STATE(50),
    [sym__use_directive] = STATE(50),
    [sym__working_directory_directive] = STATE(50),
    [sym__working_core_directive] = STATE(50),
    [sym__affinity_directive] = STATE(50),
    [sym__abstract_directive] = STATE(50),
    [sym__return_directive] = STATE(50),
    [sym__env_directive] = STATE(50),
    [sym__error_log_directive] = STATE(50),
    [sym__thread_pool_directive] = STATE(50),
    [sym__user_directive] = STATE(50),
    [sym__events_directive] = STATE(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(7),
    [aux_sym_attribute_token1] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_location] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(145),
    [sym__word] = ACTIONS(15),
    [anon_sym_map] = ACTIONS(17),
    [anon_sym_accept_mutex] = ACTIONS(19),
    [anon_sym_daemon] = ACTIONS(19),
    [anon_sym_master_process] = ACTIONS(19),
    [anon_sym_multi_accept] = ACTIONS(19),
    [anon_sym_pcre_jit] = ACTIONS(19),
    [anon_sym_accept_mutex_delay] = ACTIONS(21),
    [anon_sym_worker_shutdown_timeout] = ACTIONS(21),
    [anon_sym_timer_resolution] = ACTIONS(21),
    [anon_sym_worker_aio_requests] = ACTIONS(23),
    [anon_sym_worker_connections] = ACTIONS(23),
    [anon_sym_worker_priority] = ACTIONS(23),
    [anon_sym_worker_rlimit_nofile] = ACTIONS(23),
    [anon_sym_load_module] = ACTIONS(25),
    [anon_sym_lock_file] = ACTIONS(25),
    [anon_sym_pid] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_worker_processes] = ACTIONS(29),
    [anon_sym_debug_points] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_working_directory] = ACTIONS(35),
    [anon_sym_worker_rlimit_core] = ACTIONS(37),
    [anon_sym_worker_cpu_affinity] = ACTIONS(39),
    [anon_sym_debug_connection] = ACTIONS(41),
    [anon_sym_ssl_engine] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_env] = ACTIONS(45),
    [anon_sym_error_log] = ACTIONS(47),
    [anon_sym_thread_pool] = ACTIONS(49),
    [anon_sym_user] = ACTIONS(51),
    [anon_sym_events] = ACTIONS(53),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(151), 1,
      sym__newline,
    STATE(12), 1,
      sym_comment,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(149), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [55] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(153), 5,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(155), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [108] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(157), 5,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(159), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [161] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(161), 5,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(163), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [214] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(163), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [266] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(155), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [318] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(167), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [370] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(171), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [422] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(173), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(175), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [474] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(159), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [526] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(177), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(179), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [578] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(183), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [630] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(185), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(187), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [682] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(189), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(191), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [734] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(193), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(195), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [786] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(197), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(199), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [838] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(201), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(203), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [890] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(205), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(207), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [942] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(209), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(211), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [994] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(213), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(215), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1046] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(219), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1098] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(223), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1150] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(225), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(227), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1202] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(229), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(231), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1254] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(233), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(235), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1306] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(237), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(239), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1358] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(241), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(243), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1410] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(245), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(247), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1462] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(249), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(251), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1514] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(253), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(255), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1566] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(257), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(259), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1618] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(261), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(263), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1670] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(265), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(267), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1722] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(269), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(271), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1774] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(273), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(275), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1826] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(277), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(279), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1878] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(281), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(283), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1930] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(285), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(287), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [1982] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(289), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(291), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [2034] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(293), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(295), 34,
      anon_sym_if,
      anon_sym_location,
      sym__word,
      anon_sym_map,
      anon_sym_accept_mutex,
      anon_sym_daemon,
      anon_sym_master_process,
      anon_sym_multi_accept,
      anon_sym_pcre_jit,
      anon_sym_accept_mutex_delay,
      anon_sym_worker_shutdown_timeout,
      anon_sym_timer_resolution,
      anon_sym_worker_aio_requests,
      anon_sym_worker_connections,
      anon_sym_worker_priority,
      anon_sym_worker_rlimit_nofile,
      anon_sym_load_module,
      anon_sym_lock_file,
      anon_sym_pid,
      anon_sym_include,
      anon_sym_worker_processes,
      anon_sym_debug_points,
      anon_sym_use,
      anon_sym_working_directory,
      anon_sym_worker_rlimit_core,
      anon_sym_worker_cpu_affinity,
      anon_sym_debug_connection,
      anon_sym_ssl_engine,
      anon_sym_return,
      anon_sym_env,
      anon_sym_error_log,
      anon_sym_thread_pool,
      anon_sym_user,
      anon_sym_events,
  [2086] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(52), 1,
      sym_comment,
    STATE(102), 1,
      sym__attribute_value,
    STATE(170), 1,
      sym_block,
    ACTIONS(301), 2,
      sym_on,
      sym_off,
    ACTIONS(297), 3,
      sym_random_value,
      sym_size,
      sym_numeric_literal,
    ACTIONS(303), 3,
      sym_auto,
      sym_time,
      sym_string_literal,
    STATE(163), 4,
      sym_boolean,
      sym_connection_method,
      sym_level,
      sym_quoted_string_literal,
    ACTIONS(305), 6,
      anon_sym_select,
      anon_sym_poll,
      anon_sym_kqueue,
      anon_sym_epoll,
      anon_sym_SLASHdev_SLASHpoll,
      anon_sym_eventport,
    ACTIONS(307), 8,
      anon_sym_debug,
      anon_sym_info,
      anon_sym_notice,
      anon_sym_warn,
      anon_sym_error,
      anon_sym_crit,
      anon_sym_alert,
      anon_sym_emerg,
  [2146] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(309), 1,
      aux_sym_quoted_string_literal_token1,
    STATE(53), 1,
      sym_comment,
    STATE(113), 1,
      sym__attribute_value,
    ACTIONS(301), 2,
      sym_on,
      sym_off,
    ACTIONS(297), 3,
      sym_random_value,
      sym_size,
      sym_numeric_literal,
    ACTIONS(303), 3,
      sym_auto,
      sym_time,
      sym_string_literal,
    STATE(163), 4,
      sym_boolean,
      sym_connection_method,
      sym_level,
      sym_quoted_string_literal,
    ACTIONS(305), 6,
      anon_sym_select,
      anon_sym_poll,
      anon_sym_kqueue,
      anon_sym_epoll,
      anon_sym_SLASHdev_SLASHpoll,
      anon_sym_eventport,
    ACTIONS(307), 8,
      anon_sym_debug,
      anon_sym_info,
      anon_sym_notice,
      anon_sym_warn,
      anon_sym_error,
      anon_sym_crit,
      anon_sym_alert,
      anon_sym_emerg,
  [2200] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(311), 1,
      anon_sym_SEMI,
    ACTIONS(316), 1,
      anon_sym_STAR,
    STATE(54), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_mask_repeat1,
    STATE(60), 1,
      aux_sym_file_repeat1,
    STATE(71), 1,
      sym__fileish,
    ACTIONS(314), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2233] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(318), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_mask_repeat1,
    STATE(68), 1,
      sym__fileish,
    ACTIONS(314), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2263] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_mask_repeat1,
    STATE(68), 1,
      sym__fileish,
    ACTIONS(314), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2293] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    ACTIONS(327), 1,
      anon_sym_STAR,
    STATE(68), 1,
      sym__fileish,
    STATE(57), 2,
      sym_comment,
      aux_sym_mask_repeat1,
    ACTIONS(324), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2321] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(330), 1,
      anon_sym_STAR,
    STATE(54), 1,
      sym__fileish,
    STATE(58), 1,
      sym_comment,
    STATE(122), 2,
      sym_file,
      sym_mask,
    ACTIONS(314), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2349] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(75), 1,
      sym__fileish,
    ACTIONS(332), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
    STATE(59), 2,
      sym_comment,
      aux_sym_file_repeat1,
    ACTIONS(334), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2372] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_file_repeat1,
    STATE(73), 1,
      sym__fileish,
    ACTIONS(314), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2399] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_file_repeat1,
    STATE(61), 1,
      sym_comment,
    STATE(73), 1,
      sym__fileish,
    ACTIONS(314), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2426] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(62), 1,
      sym_comment,
    STATE(135), 1,
      sym_level,
    ACTIONS(341), 8,
      anon_sym_debug,
      anon_sym_info,
      anon_sym_notice,
      anon_sym_warn,
      anon_sym_error,
      anon_sym_crit,
      anon_sym_alert,
      anon_sym_emerg,
  [2449] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(332), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym__fileish,
    STATE(63), 2,
      sym_comment,
      aux_sym_file_repeat1,
    ACTIONS(343), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2474] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_file_repeat1,
    STATE(75), 1,
      sym__fileish,
    ACTIONS(339), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
    ACTIONS(346), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2499] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(59), 1,
      aux_sym_file_repeat1,
    STATE(65), 1,
      sym_comment,
    STATE(75), 1,
      sym__fileish,
    ACTIONS(337), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
    ACTIONS(346), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2524] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(64), 1,
      sym__fileish,
    STATE(66), 1,
      sym_comment,
    STATE(138), 1,
      sym_file,
    ACTIONS(346), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2548] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(348), 8,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_STAR,
  [2568] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(350), 8,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
      anon_sym_STAR,
  [2588] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(61), 1,
      sym__fileish,
    STATE(69), 1,
      sym_comment,
    STATE(147), 1,
      sym_file,
    ACTIONS(314), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2612] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(61), 1,
      sym__fileish,
    STATE(70), 1,
      sym_comment,
    STATE(127), 1,
      sym_file,
    ACTIONS(314), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2636] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(350), 1,
      anon_sym_STAR,
    STATE(71), 1,
      sym_comment,
    ACTIONS(352), 7,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2658] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(72), 1,
      sym_comment,
    STATE(125), 1,
      sym_connection_method,
    ACTIONS(355), 6,
      anon_sym_select,
      anon_sym_poll,
      anon_sym_kqueue,
      anon_sym_epoll,
      anon_sym_SLASHdev_SLASHpoll,
      anon_sym_eventport,
  [2679] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(357), 7,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2698] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(348), 8,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2715] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(75), 1,
      sym_comment,
    ACTIONS(357), 8,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2732] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(359), 1,
      sym_location_route,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    STATE(76), 1,
      sym_comment,
    STATE(136), 1,
      sym_location_modifier,
    ACTIONS(361), 3,
      anon_sym_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_CARET_TILDE,
  [2756] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(77), 1,
      sym_comment,
    ACTIONS(365), 6,
      aux_sym__fileish_token1,
      aux_sym__fileish_token2,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym__,
  [2774] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
    STATE(78), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_map_repeat1,
    ACTIONS(367), 2,
      sym__word,
      sym_var,
  [2797] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(369), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym__affinity_directive_repeat1,
    ACTIONS(371), 2,
      sym_auto,
      sym_cpumask,
  [2817] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(373), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym__affinity_directive_repeat1,
    STATE(80), 1,
      sym_comment,
    ACTIONS(371), 2,
      sym_auto,
      sym_cpumask,
  [2837] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    ACTIONS(377), 2,
      sym_auto,
      sym_cpumask,
    STATE(81), 2,
      sym_comment,
      aux_sym__affinity_directive_repeat1,
  [2855] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(380), 1,
      anon_sym_LBRACE,
    ACTIONS(382), 2,
      sym__word,
      sym_var,
    STATE(82), 2,
      sym_comment,
      aux_sym_map_repeat1,
  [2873] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(83), 1,
      sym_comment,
    ACTIONS(385), 3,
      anon_sym_SEMI,
      sym_auto,
      sym_cpumask,
  [2888] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(84), 1,
      sym_comment,
    STATE(151), 1,
      sym__thread_poll_variable,
    ACTIONS(387), 2,
      anon_sym_threads,
      anon_sym_max_queue,
  [2905] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_comment,
    ACTIONS(391), 2,
      sym__word,
      sym_var,
  [2922] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(78), 1,
      aux_sym_map_repeat1,
    STATE(86), 1,
      sym_comment,
    ACTIONS(367), 2,
      sym__word,
      sym_var,
  [2939] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(87), 1,
      sym_comment,
    STATE(105), 1,
      sym__thread_poll_variable,
    ACTIONS(393), 2,
      anon_sym_threads,
      anon_sym_max_queue,
  [2956] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(88), 1,
      sym_comment,
    STATE(144), 1,
      sym_boolean,
    ACTIONS(395), 2,
      sym_on,
      sym_off,
  [2973] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(89), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_abort,
      anon_sym_stop,
  [2987] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
    STATE(90), 1,
      sym_comment,
  [3003] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_block,
    STATE(91), 1,
      sym_comment,
  [3019] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(92), 1,
      sym_comment,
    ACTIONS(399), 2,
      sym_auto,
      sym_cpumask,
  [3033] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      aux_sym_attribute_token1,
    ACTIONS(404), 1,
      anon_sym_SEMI,
    STATE(93), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [3047] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
    STATE(94), 1,
      sym_comment,
  [3063] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(406), 1,
      sym_random_value,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_comment,
  [3079] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(410), 1,
      anon_sym_SEMI,
    ACTIONS(412), 1,
      anon_sym_EQ,
    STATE(96), 1,
      sym_comment,
  [3095] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(414), 1,
      anon_sym_SEMI,
    ACTIONS(416), 1,
      sym__word,
    STATE(97), 1,
      sym_comment,
  [3111] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(98), 1,
      sym_comment,
    ACTIONS(418), 2,
      sym_auto,
      sym_numeric_literal,
  [3125] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    STATE(99), 1,
      sym_comment,
    ACTIONS(420), 2,
      sym_on,
      sym_off,
  [3139] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(422), 1,
      aux_sym_attribute_token1,
    ACTIONS(424), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      aux_sym_attribute_repeat1,
    STATE(100), 1,
      sym_comment,
  [3155] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
    STATE(101), 1,
      sym_comment,
  [3171] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(422), 1,
      aux_sym_attribute_token1,
    ACTIONS(426), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      aux_sym_attribute_repeat1,
    STATE(102), 1,
      sym_comment,
  [3187] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(428), 1,
      sym_numeric_literal,
    STATE(103), 1,
      sym_comment,
  [3200] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(430), 1,
      anon_sym_EQ,
    STATE(104), 1,
      sym_comment,
  [3213] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(432), 1,
      aux_sym_attribute_token1,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_comment,
  [3226] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(436), 1,
      sym__newline,
    STATE(106), 1,
      sym_comment,
  [3239] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(438), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      sym_comment,
  [3252] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(440), 1,
      sym__newline,
    STATE(108), 1,
      sym_comment,
  [3265] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(442), 1,
      sym__newline,
    STATE(109), 1,
      sym_comment,
  [3278] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(444), 1,
      sym__newline,
    STATE(110), 1,
      sym_comment,
  [3291] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(446), 1,
      sym__newline,
    STATE(111), 1,
      sym_comment,
  [3304] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(448), 1,
      sym__newline,
    STATE(112), 1,
      sym_comment,
  [3317] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(404), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3328] = 4,
    ACTIONS(450), 1,
      aux_sym_comment_token1,
    ACTIONS(452), 1,
      aux_sym_attribute_token1,
    ACTIONS(454), 1,
      aux_sym__abstract_directive_token1,
    STATE(114), 1,
      sym_comment,
  [3341] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(456), 1,
      sym__newline,
    STATE(115), 1,
      sym_comment,
  [3354] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(458), 1,
      sym__newline,
    STATE(116), 1,
      sym_comment,
  [3367] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(460), 1,
      sym_numeric_literal,
    STATE(117), 1,
      sym_comment,
  [3380] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(462), 1,
      aux_sym__env_directive_token1,
    STATE(118), 1,
      sym_comment,
  [3393] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(464), 1,
      sym_condition,
    STATE(119), 1,
      sym_comment,
  [3406] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(466), 1,
      sym__word,
    STATE(120), 1,
      sym_comment,
  [3419] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(468), 1,
      sym__word,
    STATE(121), 1,
      sym_comment,
  [3432] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(470), 1,
      anon_sym_SEMI,
    STATE(122), 1,
      sym_comment,
  [3445] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(472), 1,
      anon_sym_SEMI,
    STATE(123), 1,
      sym_comment,
  [3458] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    STATE(124), 1,
      sym_comment,
  [3471] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(125), 1,
      sym_comment,
  [3484] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(478), 1,
      sym__newline,
    STATE(126), 1,
      sym_comment,
  [3497] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(480), 1,
      anon_sym_SEMI,
    STATE(127), 1,
      sym_comment,
  [3510] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(482), 1,
      sym__newline,
    STATE(128), 1,
      sym_comment,
  [3523] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(484), 1,
      anon_sym_SEMI,
    STATE(129), 1,
      sym_comment,
  [3536] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
    STATE(130), 1,
      sym_comment,
  [3549] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(488), 1,
      sym__newline,
    STATE(131), 1,
      sym_comment,
  [3562] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(490), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_comment,
  [3575] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(492), 1,
      sym_location_route,
    STATE(133), 1,
      sym_comment,
  [3588] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(494), 1,
      anon_sym_SEMI,
    STATE(134), 1,
      sym_comment,
  [3601] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(496), 1,
      anon_sym_SEMI,
    STATE(135), 1,
      sym_comment,
  [3614] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(498), 1,
      sym_location_route,
    STATE(136), 1,
      sym_comment,
  [3627] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(500), 1,
      sym__newline,
    STATE(137), 1,
      sym_comment,
  [3640] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(502), 1,
      aux_sym_attribute_token1,
    ACTIONS(504), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      sym_comment,
  [3653] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(506), 1,
      sym__newline,
    STATE(139), 1,
      sym_comment,
  [3666] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(508), 1,
      sym__newline,
    STATE(140), 1,
      sym_comment,
  [3679] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(510), 1,
      sym__newline,
    STATE(141), 1,
      sym_comment,
  [3692] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(512), 1,
      sym__newline,
    STATE(142), 1,
      sym_comment,
  [3705] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(514), 1,
      sym__newline,
    STATE(143), 1,
      sym_comment,
  [3718] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(516), 1,
      anon_sym_SEMI,
    STATE(144), 1,
      sym_comment,
  [3731] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(518), 1,
      anon_sym_SEMI,
    STATE(145), 1,
      sym_comment,
  [3744] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(520), 1,
      anon_sym_SEMI,
    STATE(146), 1,
      sym_comment,
  [3757] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(522), 1,
      anon_sym_SEMI,
    STATE(147), 1,
      sym_comment,
  [3770] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(524), 1,
      sym__newline,
    STATE(148), 1,
      sym_comment,
  [3783] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(526), 1,
      sym__newline,
    STATE(149), 1,
      sym_comment,
  [3796] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(150), 1,
      sym_comment,
    ACTIONS(528), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3807] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(530), 1,
      anon_sym_SEMI,
    STATE(151), 1,
      sym_comment,
  [3820] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(532), 1,
      sym_time,
    STATE(152), 1,
      sym_comment,
  [3833] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(534), 1,
      sym__newline,
    STATE(153), 1,
      sym_comment,
  [3846] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(536), 1,
      sym__newline,
    STATE(154), 1,
      sym_comment,
  [3859] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(538), 1,
      sym_time,
    STATE(155), 1,
      sym_comment,
  [3872] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(540), 1,
      sym__newline,
    STATE(156), 1,
      sym_comment,
  [3885] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(542), 1,
      sym_numeric_literal,
    STATE(157), 1,
      sym_comment,
  [3898] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(544), 1,
      anon_sym_SEMI,
    STATE(158), 1,
      sym_comment,
  [3911] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(546), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      sym_comment,
  [3924] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(548), 1,
      anon_sym_SEMI,
    STATE(160), 1,
      sym_comment,
  [3937] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(550), 1,
      sym_numeric_literal,
    STATE(161), 1,
      sym_comment,
  [3950] = 4,
    ACTIONS(450), 1,
      aux_sym_comment_token1,
    ACTIONS(452), 1,
      aux_sym_attribute_token1,
    ACTIONS(552), 1,
      aux_sym__abstract_directive_token1,
    STATE(162), 1,
      sym_comment,
  [3963] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(163), 1,
      sym_comment,
    ACTIONS(554), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3974] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(164), 1,
      sym_comment,
    ACTIONS(544), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3985] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(165), 1,
      sym_comment,
    ACTIONS(546), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [3996] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(166), 1,
      sym_comment,
    ACTIONS(548), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [4007] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(167), 1,
      sym_comment,
    ACTIONS(556), 2,
      aux_sym_attribute_token1,
      anon_sym_SEMI,
  [4018] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(558), 1,
      sym_size,
    STATE(168), 1,
      sym_comment,
  [4031] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    STATE(169), 1,
      sym_comment,
  [4044] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(560), 1,
      sym__newline,
    STATE(170), 1,
      sym_comment,
  [4057] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(562), 1,
      sym__newline,
    STATE(171), 1,
      sym_comment,
  [4070] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(564), 1,
      sym__newline,
    STATE(172), 1,
      sym_comment,
  [4083] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(566), 1,
      sym__newline,
    STATE(173), 1,
      sym_comment,
  [4096] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(568), 1,
      sym_numeric_literal,
    STATE(174), 1,
      sym_comment,
  [4109] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(570), 1,
      anon_sym_EQ,
    STATE(175), 1,
      sym_comment,
  [4122] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_attribute_token1,
    ACTIONS(572), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      sym_comment,
  [4135] = 1,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 55,
  [SMALL_STATE(14)] = 108,
  [SMALL_STATE(15)] = 161,
  [SMALL_STATE(16)] = 214,
  [SMALL_STATE(17)] = 266,
  [SMALL_STATE(18)] = 318,
  [SMALL_STATE(19)] = 370,
  [SMALL_STATE(20)] = 422,
  [SMALL_STATE(21)] = 474,
  [SMALL_STATE(22)] = 526,
  [SMALL_STATE(23)] = 578,
  [SMALL_STATE(24)] = 630,
  [SMALL_STATE(25)] = 682,
  [SMALL_STATE(26)] = 734,
  [SMALL_STATE(27)] = 786,
  [SMALL_STATE(28)] = 838,
  [SMALL_STATE(29)] = 890,
  [SMALL_STATE(30)] = 942,
  [SMALL_STATE(31)] = 994,
  [SMALL_STATE(32)] = 1046,
  [SMALL_STATE(33)] = 1098,
  [SMALL_STATE(34)] = 1150,
  [SMALL_STATE(35)] = 1202,
  [SMALL_STATE(36)] = 1254,
  [SMALL_STATE(37)] = 1306,
  [SMALL_STATE(38)] = 1358,
  [SMALL_STATE(39)] = 1410,
  [SMALL_STATE(40)] = 1462,
  [SMALL_STATE(41)] = 1514,
  [SMALL_STATE(42)] = 1566,
  [SMALL_STATE(43)] = 1618,
  [SMALL_STATE(44)] = 1670,
  [SMALL_STATE(45)] = 1722,
  [SMALL_STATE(46)] = 1774,
  [SMALL_STATE(47)] = 1826,
  [SMALL_STATE(48)] = 1878,
  [SMALL_STATE(49)] = 1930,
  [SMALL_STATE(50)] = 1982,
  [SMALL_STATE(51)] = 2034,
  [SMALL_STATE(52)] = 2086,
  [SMALL_STATE(53)] = 2146,
  [SMALL_STATE(54)] = 2200,
  [SMALL_STATE(55)] = 2233,
  [SMALL_STATE(56)] = 2263,
  [SMALL_STATE(57)] = 2293,
  [SMALL_STATE(58)] = 2321,
  [SMALL_STATE(59)] = 2349,
  [SMALL_STATE(60)] = 2372,
  [SMALL_STATE(61)] = 2399,
  [SMALL_STATE(62)] = 2426,
  [SMALL_STATE(63)] = 2449,
  [SMALL_STATE(64)] = 2474,
  [SMALL_STATE(65)] = 2499,
  [SMALL_STATE(66)] = 2524,
  [SMALL_STATE(67)] = 2548,
  [SMALL_STATE(68)] = 2568,
  [SMALL_STATE(69)] = 2588,
  [SMALL_STATE(70)] = 2612,
  [SMALL_STATE(71)] = 2636,
  [SMALL_STATE(72)] = 2658,
  [SMALL_STATE(73)] = 2679,
  [SMALL_STATE(74)] = 2698,
  [SMALL_STATE(75)] = 2715,
  [SMALL_STATE(76)] = 2732,
  [SMALL_STATE(77)] = 2756,
  [SMALL_STATE(78)] = 2774,
  [SMALL_STATE(79)] = 2797,
  [SMALL_STATE(80)] = 2817,
  [SMALL_STATE(81)] = 2837,
  [SMALL_STATE(82)] = 2855,
  [SMALL_STATE(83)] = 2873,
  [SMALL_STATE(84)] = 2888,
  [SMALL_STATE(85)] = 2905,
  [SMALL_STATE(86)] = 2922,
  [SMALL_STATE(87)] = 2939,
  [SMALL_STATE(88)] = 2956,
  [SMALL_STATE(89)] = 2973,
  [SMALL_STATE(90)] = 2987,
  [SMALL_STATE(91)] = 3003,
  [SMALL_STATE(92)] = 3019,
  [SMALL_STATE(93)] = 3033,
  [SMALL_STATE(94)] = 3047,
  [SMALL_STATE(95)] = 3063,
  [SMALL_STATE(96)] = 3079,
  [SMALL_STATE(97)] = 3095,
  [SMALL_STATE(98)] = 3111,
  [SMALL_STATE(99)] = 3125,
  [SMALL_STATE(100)] = 3139,
  [SMALL_STATE(101)] = 3155,
  [SMALL_STATE(102)] = 3171,
  [SMALL_STATE(103)] = 3187,
  [SMALL_STATE(104)] = 3200,
  [SMALL_STATE(105)] = 3213,
  [SMALL_STATE(106)] = 3226,
  [SMALL_STATE(107)] = 3239,
  [SMALL_STATE(108)] = 3252,
  [SMALL_STATE(109)] = 3265,
  [SMALL_STATE(110)] = 3278,
  [SMALL_STATE(111)] = 3291,
  [SMALL_STATE(112)] = 3304,
  [SMALL_STATE(113)] = 3317,
  [SMALL_STATE(114)] = 3328,
  [SMALL_STATE(115)] = 3341,
  [SMALL_STATE(116)] = 3354,
  [SMALL_STATE(117)] = 3367,
  [SMALL_STATE(118)] = 3380,
  [SMALL_STATE(119)] = 3393,
  [SMALL_STATE(120)] = 3406,
  [SMALL_STATE(121)] = 3419,
  [SMALL_STATE(122)] = 3432,
  [SMALL_STATE(123)] = 3445,
  [SMALL_STATE(124)] = 3458,
  [SMALL_STATE(125)] = 3471,
  [SMALL_STATE(126)] = 3484,
  [SMALL_STATE(127)] = 3497,
  [SMALL_STATE(128)] = 3510,
  [SMALL_STATE(129)] = 3523,
  [SMALL_STATE(130)] = 3536,
  [SMALL_STATE(131)] = 3549,
  [SMALL_STATE(132)] = 3562,
  [SMALL_STATE(133)] = 3575,
  [SMALL_STATE(134)] = 3588,
  [SMALL_STATE(135)] = 3601,
  [SMALL_STATE(136)] = 3614,
  [SMALL_STATE(137)] = 3627,
  [SMALL_STATE(138)] = 3640,
  [SMALL_STATE(139)] = 3653,
  [SMALL_STATE(140)] = 3666,
  [SMALL_STATE(141)] = 3679,
  [SMALL_STATE(142)] = 3692,
  [SMALL_STATE(143)] = 3705,
  [SMALL_STATE(144)] = 3718,
  [SMALL_STATE(145)] = 3731,
  [SMALL_STATE(146)] = 3744,
  [SMALL_STATE(147)] = 3757,
  [SMALL_STATE(148)] = 3770,
  [SMALL_STATE(149)] = 3783,
  [SMALL_STATE(150)] = 3796,
  [SMALL_STATE(151)] = 3807,
  [SMALL_STATE(152)] = 3820,
  [SMALL_STATE(153)] = 3833,
  [SMALL_STATE(154)] = 3846,
  [SMALL_STATE(155)] = 3859,
  [SMALL_STATE(156)] = 3872,
  [SMALL_STATE(157)] = 3885,
  [SMALL_STATE(158)] = 3898,
  [SMALL_STATE(159)] = 3911,
  [SMALL_STATE(160)] = 3924,
  [SMALL_STATE(161)] = 3937,
  [SMALL_STATE(162)] = 3950,
  [SMALL_STATE(163)] = 3963,
  [SMALL_STATE(164)] = 3974,
  [SMALL_STATE(165)] = 3985,
  [SMALL_STATE(166)] = 3996,
  [SMALL_STATE(167)] = 4007,
  [SMALL_STATE(168)] = 4018,
  [SMALL_STATE(169)] = 4031,
  [SMALL_STATE(170)] = 4044,
  [SMALL_STATE(171)] = 4057,
  [SMALL_STATE(172)] = 4070,
  [SMALL_STATE(173)] = 4083,
  [SMALL_STATE(174)] = 4096,
  [SMALL_STATE(175)] = 4109,
  [SMALL_STATE(176)] = 4122,
  [SMALL_STATE(177)] = 4135,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(52),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(119),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(76),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(3),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(52),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(86),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(99),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(152),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(161),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(77),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(58),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(98),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(89),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(72),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(70),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(168),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(92),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(114),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(117),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(118),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(66),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(120),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(121),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(94),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__events_directive, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__events_directive, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3, 0, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3, 0, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__events_directive, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__events_directive, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include_directive, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__include_directive, 4, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_or_auto_directive, 4, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_or_auto_directive, 4, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_points_directive, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__debug_points_directive, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use_directive, 4, 0, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__use_directive, 4, 0, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__working_directory_directive, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__working_directory_directive, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__working_core_directive, 4, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__working_core_directive, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract_directive, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abstract_directive, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_directive, 4, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_directive, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_directive, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__env_directive, 4, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__error_log_directive, 4, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__error_log_directive, 4, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_directive, 4, 0, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_directive, 4, 0, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_directive, 4, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_directive, 4, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time_directive, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time_directive, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_directive, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_directive, 4, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_directive, 4, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__file_directive, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, 0, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 5, 0, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affinity_directive, 5, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__affinity_directive, 5, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_directive, 5, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_directive, 5, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__thread_pool_directive, 5, 0, 4),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__thread_pool_directive, 5, 0, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_directive, 5, 0, 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_directive, 5, 0, 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_directive, 6, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__env_directive, 6, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__error_log_directive, 6, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__error_log_directive, 6, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__thread_pool_directive, 7, 0, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__thread_pool_directive, 7, 0, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__body, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affinity_directive, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__affinity_directive, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_file, 1, 0, 0), REDUCE(sym_mask, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mask, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mask, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 2, 0, 0),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fileish, 1, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mask_repeat1, 1, 0, 0),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0), REDUCE(aux_sym_mask_repeat1, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_keyword, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__affinity_directive_repeat1, 2, 0, 0),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__affinity_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__affinity_directive_repeat1, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_keyword, 1, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [486] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location_modifier, 1, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__thread_poll_variable, 3, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time_keyword, 1, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection_method, 1, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 1, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_keyword, 1, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_value, 1, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_literal, 1, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_nginx_external_scanner_create(void);
void tree_sitter_nginx_external_scanner_destroy(void *);
bool tree_sitter_nginx_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_nginx_external_scanner_serialize(void *, char *);
void tree_sitter_nginx_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_nginx(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_nginx_external_scanner_create,
      tree_sitter_nginx_external_scanner_destroy,
      tree_sitter_nginx_external_scanner_scan,
      tree_sitter_nginx_external_scanner_serialize,
      tree_sitter_nginx_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
