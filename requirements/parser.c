#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 228
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym_package = 1,
  aux_sym_file_token1 = 2,
  aux_sym_file_token2 = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_COMMA = 6,
  anon_sym_AT = 7,
  aux_sym_url_token1 = 8,
  aux_sym_url_token2 = 9,
  aux_sym_url_token3 = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  sym_version = 13,
  sym_version_cmp = 14,
  anon_sym_SEMI = 15,
  anon_sym_in = 16,
  anon_sym_not = 17,
  anon_sym_python_version = 18,
  anon_sym_python_full_version = 19,
  anon_sym_os_name = 20,
  anon_sym_sys_platform = 21,
  anon_sym_platform_release = 22,
  anon_sym_platform_system = 23,
  anon_sym_platform_version = 24,
  anon_sym_platform_machine = 25,
  anon_sym_platform_python_implementation = 26,
  anon_sym_implementation_name = 27,
  anon_sym_implementation_version = 28,
  anon_sym_extra = 29,
  anon_sym_and = 30,
  anon_sym_or = 31,
  anon_sym_DASH_DASHno_DASHbinary = 32,
  anon_sym_DASH_DASHonly_DASHbinary = 33,
  anon_sym_DASH_DASHtrusted_DASHhost = 34,
  anon_sym_DASH_DASHuse_DASHfeature = 35,
  anon_sym_EQ = 36,
  anon_sym_DASH_DASHno_DASHindex = 37,
  anon_sym_DASH_DASHprefer_DASHbinary = 38,
  anon_sym_DASH_DASHrequire_DASHhashes = 39,
  anon_sym_DASH_DASHpre = 40,
  anon_sym_DASHi = 41,
  anon_sym_DASH_DASHindex_DASHurl = 42,
  anon_sym_DASH_DASHextra_DASHindex_DASHurl = 43,
  anon_sym_DASHc = 44,
  anon_sym_DASHr = 45,
  anon_sym_DASH_DASHconstraint = 46,
  anon_sym_DASH_DASHrequirement = 47,
  anon_sym_DASHe = 48,
  anon_sym_DASHf = 49,
  anon_sym_DASH_DASHeditable = 50,
  anon_sym_DASH_DASHfind_DASHlinks = 51,
  anon_sym_DASH_DASHglobal_DASHoption = 52,
  anon_sym_DASH_DASHconfig_DASHsettings = 53,
  anon_sym_DASH_DASHhash = 54,
  aux_sym_argument_token1 = 55,
  anon_sym_DQUOTE = 56,
  aux_sym_quoted_string_token1 = 57,
  anon_sym_SQUOTE = 58,
  aux_sym_quoted_string_token2 = 59,
  anon_sym_DOLLAR_LBRACE = 60,
  aux_sym_env_var_token1 = 61,
  anon_sym_RBRACE = 62,
  anon_sym_BSLASH = 63,
  sym_comment = 64,
  aux_sym__space_token1 = 65,
  sym_file = 66,
  sym_requirement = 67,
  sym_extras = 68,
  sym_url_spec = 69,
  sym_url = 70,
  sym_version_spec = 71,
  sym__version_list = 72,
  sym_marker_spec = 73,
  sym_marker_op = 74,
  sym_marker_var = 75,
  sym__marker = 76,
  sym__marker_expr = 77,
  sym__marker_paren = 78,
  sym__marker_and = 79,
  sym__marker_or = 80,
  sym_global_opt = 81,
  sym_requirement_opt = 82,
  sym_argument = 83,
  sym_quoted_string = 84,
  sym_env_var = 85,
  sym_linebreak = 86,
  sym__space = 87,
  aux_sym_file_repeat1 = 88,
  aux_sym_requirement_repeat1 = 89,
  aux_sym__package_list_repeat1 = 90,
  aux_sym_url_repeat1 = 91,
  aux_sym__version_list_repeat1 = 92,
  aux_sym_argument_repeat1 = 93,
  aux_sym__space_repeat1 = 94,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_package] = "package",
  [aux_sym_file_token1] = "file_token1",
  [aux_sym_file_token2] = "path",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_AT] = "@",
  [aux_sym_url_token1] = "url_token1",
  [aux_sym_url_token2] = "url_token2",
  [aux_sym_url_token3] = "url_token3",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_version] = "version",
  [sym_version_cmp] = "version_cmp",
  [anon_sym_SEMI] = ";",
  [anon_sym_in] = "in",
  [anon_sym_not] = "not",
  [anon_sym_python_version] = "python_version",
  [anon_sym_python_full_version] = "python_full_version",
  [anon_sym_os_name] = "os_name",
  [anon_sym_sys_platform] = "sys_platform",
  [anon_sym_platform_release] = "platform_release",
  [anon_sym_platform_system] = "platform_system",
  [anon_sym_platform_version] = "platform_version",
  [anon_sym_platform_machine] = "platform_machine",
  [anon_sym_platform_python_implementation] = "platform_python_implementation",
  [anon_sym_implementation_name] = "implementation_name",
  [anon_sym_implementation_version] = "implementation_version",
  [anon_sym_extra] = "extra",
  [anon_sym_and] = "marker_op",
  [anon_sym_or] = "marker_op",
  [anon_sym_DASH_DASHno_DASHbinary] = "option",
  [anon_sym_DASH_DASHonly_DASHbinary] = "option",
  [anon_sym_DASH_DASHtrusted_DASHhost] = "option",
  [anon_sym_DASH_DASHuse_DASHfeature] = "option",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_DASHno_DASHindex] = "option",
  [anon_sym_DASH_DASHprefer_DASHbinary] = "option",
  [anon_sym_DASH_DASHrequire_DASHhashes] = "option",
  [anon_sym_DASH_DASHpre] = "option",
  [anon_sym_DASHi] = "option",
  [anon_sym_DASH_DASHindex_DASHurl] = "option",
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = "option",
  [anon_sym_DASHc] = "option",
  [anon_sym_DASHr] = "option",
  [anon_sym_DASH_DASHconstraint] = "option",
  [anon_sym_DASH_DASHrequirement] = "option",
  [anon_sym_DASHe] = "option",
  [anon_sym_DASHf] = "option",
  [anon_sym_DASH_DASHeditable] = "option",
  [anon_sym_DASH_DASHfind_DASHlinks] = "option",
  [anon_sym_DASH_DASHglobal_DASHoption] = "option",
  [anon_sym_DASH_DASHconfig_DASHsettings] = "option",
  [anon_sym_DASH_DASHhash] = "option",
  [aux_sym_argument_token1] = "argument_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_string_token2] = "quoted_string_token2",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [aux_sym_env_var_token1] = "env_var_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BSLASH] = "\\",
  [sym_comment] = "comment",
  [aux_sym__space_token1] = "_space_token1",
  [sym_file] = "file",
  [sym_requirement] = "requirement",
  [sym_extras] = "extras",
  [sym_url_spec] = "url_spec",
  [sym_url] = "url",
  [sym_version_spec] = "version_spec",
  [sym__version_list] = "_version_list",
  [sym_marker_spec] = "marker_spec",
  [sym_marker_op] = "marker_op",
  [sym_marker_var] = "marker_var",
  [sym__marker] = "_marker",
  [sym__marker_expr] = "_marker_expr",
  [sym__marker_paren] = "_marker_paren",
  [sym__marker_and] = "_marker_and",
  [sym__marker_or] = "_marker_or",
  [sym_global_opt] = "global_opt",
  [sym_requirement_opt] = "requirement_opt",
  [sym_argument] = "argument",
  [sym_quoted_string] = "quoted_string",
  [sym_env_var] = "env_var",
  [sym_linebreak] = "linebreak",
  [sym__space] = "_space",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_requirement_repeat1] = "requirement_repeat1",
  [aux_sym__package_list_repeat1] = "_package_list_repeat1",
  [aux_sym_url_repeat1] = "url_repeat1",
  [aux_sym__version_list_repeat1] = "_version_list_repeat1",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym__space_repeat1] = "_space_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_package] = sym_package,
  [aux_sym_file_token1] = aux_sym_file_token1,
  [aux_sym_file_token2] = aux_sym_file_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_url_token1] = aux_sym_url_token1,
  [aux_sym_url_token2] = aux_sym_url_token2,
  [aux_sym_url_token3] = aux_sym_url_token3,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_version] = sym_version,
  [sym_version_cmp] = sym_version_cmp,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_python_version] = anon_sym_python_version,
  [anon_sym_python_full_version] = anon_sym_python_full_version,
  [anon_sym_os_name] = anon_sym_os_name,
  [anon_sym_sys_platform] = anon_sym_sys_platform,
  [anon_sym_platform_release] = anon_sym_platform_release,
  [anon_sym_platform_system] = anon_sym_platform_system,
  [anon_sym_platform_version] = anon_sym_platform_version,
  [anon_sym_platform_machine] = anon_sym_platform_machine,
  [anon_sym_platform_python_implementation] = anon_sym_platform_python_implementation,
  [anon_sym_implementation_name] = anon_sym_implementation_name,
  [anon_sym_implementation_version] = anon_sym_implementation_version,
  [anon_sym_extra] = anon_sym_extra,
  [anon_sym_and] = sym_marker_op,
  [anon_sym_or] = sym_marker_op,
  [anon_sym_DASH_DASHno_DASHbinary] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHonly_DASHbinary] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHtrusted_DASHhost] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHuse_DASHfeature] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_DASHno_DASHindex] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHprefer_DASHbinary] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHrequire_DASHhashes] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHpre] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASHi] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHindex_DASHurl] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASHc] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASHr] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHconstraint] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHrequirement] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASHe] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASHf] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHeditable] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHfind_DASHlinks] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHglobal_DASHoption] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHconfig_DASHsettings] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHhash] = anon_sym_DASH_DASHno_DASHbinary,
  [aux_sym_argument_token1] = aux_sym_argument_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_string_token2] = aux_sym_quoted_string_token2,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [aux_sym_env_var_token1] = aux_sym_env_var_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_comment] = sym_comment,
  [aux_sym__space_token1] = aux_sym__space_token1,
  [sym_file] = sym_file,
  [sym_requirement] = sym_requirement,
  [sym_extras] = sym_extras,
  [sym_url_spec] = sym_url_spec,
  [sym_url] = sym_url,
  [sym_version_spec] = sym_version_spec,
  [sym__version_list] = sym__version_list,
  [sym_marker_spec] = sym_marker_spec,
  [sym_marker_op] = sym_marker_op,
  [sym_marker_var] = sym_marker_var,
  [sym__marker] = sym__marker,
  [sym__marker_expr] = sym__marker_expr,
  [sym__marker_paren] = sym__marker_paren,
  [sym__marker_and] = sym__marker_and,
  [sym__marker_or] = sym__marker_or,
  [sym_global_opt] = sym_global_opt,
  [sym_requirement_opt] = sym_requirement_opt,
  [sym_argument] = sym_argument,
  [sym_quoted_string] = sym_quoted_string,
  [sym_env_var] = sym_env_var,
  [sym_linebreak] = sym_linebreak,
  [sym__space] = sym__space,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_requirement_repeat1] = aux_sym_requirement_repeat1,
  [aux_sym__package_list_repeat1] = aux_sym__package_list_repeat1,
  [aux_sym_url_repeat1] = aux_sym_url_repeat1,
  [aux_sym__version_list_repeat1] = aux_sym__version_list_repeat1,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym__space_repeat1] = aux_sym__space_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_url_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_token3] = {
    .visible = false,
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
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_version_cmp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_python_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_python_full_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_os_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_platform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_release] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_machine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_python_implementation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implementation_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implementation_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHno_DASHbinary] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHonly_DASHbinary] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHtrusted_DASHhost] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHuse_DASHfeature] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHno_DASHindex] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHprefer_DASHbinary] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHrequire_DASHhashes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHpre] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHi] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHindex_DASHurl] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHconstraint] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHrequirement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHe] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHf] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHeditable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHfind_DASHlinks] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHglobal_DASHoption] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHconfig_DASHsettings] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHhash] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_env_var_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__space_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_requirement] = {
    .visible = true,
    .named = true,
  },
  [sym_extras] = {
    .visible = true,
    .named = true,
  },
  [sym_url_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_version_spec] = {
    .visible = true,
    .named = true,
  },
  [sym__version_list] = {
    .visible = false,
    .named = true,
  },
  [sym_marker_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_op] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_var] = {
    .visible = true,
    .named = true,
  },
  [sym__marker] = {
    .visible = false,
    .named = true,
  },
  [sym__marker_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__marker_paren] = {
    .visible = false,
    .named = true,
  },
  [sym__marker_and] = {
    .visible = false,
    .named = true,
  },
  [sym__marker_or] = {
    .visible = false,
    .named = true,
  },
  [sym_global_opt] = {
    .visible = true,
    .named = true,
  },
  [sym_requirement_opt] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_env_var] = {
    .visible = true,
    .named = true,
  },
  [sym_linebreak] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_requirement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__package_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__version_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__space_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_content = 1,
  field_name = 2,
  field_scheme = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_name] = "name",
  [field_scheme] = "scheme",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_scheme, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = aux_sym_file_token2,
  },
  [3] = {
    [2] = aux_sym_file_token2,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_argument, 2,
    sym_argument,
    aux_sym_file_token2,
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
  [28] = 3,
  [29] = 2,
  [30] = 4,
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
  [88] = 2,
  [89] = 3,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 42,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 49,
  [106] = 106,
  [107] = 107,
  [108] = 4,
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
  [123] = 3,
  [124] = 124,
  [125] = 2,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 74,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 87,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 90,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 4,
  [145] = 145,
  [146] = 141,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 77,
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
  [164] = 2,
  [165] = 165,
  [166] = 3,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 118,
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
  [183] = 4,
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
  [213] = 208,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 200,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(172);
      ADVANCE_MAP(
        '\n', 173,
        '\r', 1,
        '"', 222,
        '$', 188,
        '\'', 225,
        '(', 189,
        ')', 190,
        ',', 182,
        '-', 187,
        ';', 194,
        '=', 199,
        '@', 183,
        '[', 180,
        '\\', 231,
        ']', 181,
        '}', 230,
        '\t', 236,
        ' ', 236,
        '.', 174,
        '/', 174,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(186);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(173);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 173,
        '\r', 1,
        '$', 188,
        '-', 187,
        ';', 194,
        '\\', 231,
        '\t', 236,
        ' ', 236,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(186);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(186);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(218);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(218);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(220);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(218);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(218);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(119);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(159);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(101);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(184);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(28);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(8);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 32:
      if (lookahead == '\\') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(229);
      END_STATE();
    case 33:
      if (lookahead == '\\') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(226);
      END_STATE();
    case 34:
      if (lookahead == '\\') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 51:
      ADVANCE_MAP(
        'c', 122,
        'e', 52,
        'f', 85,
        'g', 98,
        'h', 35,
        'i', 104,
        'n', 121,
        'o', 109,
        'p', 128,
        'r', 59,
        't', 126,
        'u', 144,
      );
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(11);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 94:
      if (lookahead == 'k') ADVANCE(141);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 125:
      if (lookahead == 'q') ADVANCE(160);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 163:
      if (lookahead == 'x') ADVANCE(200);
      END_STATE();
    case 164:
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 165:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(195);
      END_STATE();
    case 167:
      if (lookahead == 'y') ADVANCE(196);
      END_STATE();
    case 168:
      if (lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 169:
      if (lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 170:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 171:
      if (eof) ADVANCE(172);
      ADVANCE_MAP(
        '\n', 173,
        '\r', 1,
        '!', 31,
        '"', 222,
        '#', 235,
        '\'', 225,
        '(', 189,
        ')', 190,
        '+', 27,
        ',', 182,
        '-', 9,
        ';', 194,
        '<', 193,
        '=', 30,
        '>', 193,
        '@', 183,
        '[', 180,
        '\\', 231,
        ']', 181,
        '}', 230,
        '~', 31,
        '\t', 236,
        ' ', 236,
        'B', 176,
        'b', 176,
        '.', 174,
        '/', 174,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_file_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_file_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_url_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_url_token2);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_url_token3);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_url_token3);
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_url_token3);
      if (lookahead == '{') ADVANCE(228);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_version_cmp);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_version_cmp);
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHbinary);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DASH_DASHonly_DASHbinary);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtrusted_DASHhost);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DASH_DASHuse_DASHfeature);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHindex);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DASH_DASHprefer_DASHbinary);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequire_DASHhashes);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpre);
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DASHi);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DASH_DASHindex_DASHurl);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DASH_DASHextra_DASHindex_DASHurl);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DASHc);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DASHr);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH_DASHconstraint);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequirement);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DASHe);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH_DASHeditable);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DASH_DASHfind_DASHlinks);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DASH_DASHglobal_DASHoption);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH_DASHconfig_DASHsettings);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DASH_DASHhash);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(26);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(27);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_env_var_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__space_token1);
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
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_extra);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_os_name);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_sys_platform);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(101);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_python_version);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_platform_system);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_platform_machine);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_platform_release);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_platform_version);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_implementation_name);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_python_full_version);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_implementation_version);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_platform_python_implementation);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 171},
  [2] = {.lex_state = 171},
  [3] = {.lex_state = 171},
  [4] = {.lex_state = 171},
  [5] = {.lex_state = 171},
  [6] = {.lex_state = 171},
  [7] = {.lex_state = 171},
  [8] = {.lex_state = 171},
  [9] = {.lex_state = 171},
  [10] = {.lex_state = 171},
  [11] = {.lex_state = 171},
  [12] = {.lex_state = 171},
  [13] = {.lex_state = 171},
  [14] = {.lex_state = 171},
  [15] = {.lex_state = 171},
  [16] = {.lex_state = 171},
  [17] = {.lex_state = 171},
  [18] = {.lex_state = 171},
  [19] = {.lex_state = 171},
  [20] = {.lex_state = 171},
  [21] = {.lex_state = 171},
  [22] = {.lex_state = 171},
  [23] = {.lex_state = 171},
  [24] = {.lex_state = 171},
  [25] = {.lex_state = 171},
  [26] = {.lex_state = 171},
  [27] = {.lex_state = 171},
  [28] = {.lex_state = 171},
  [29] = {.lex_state = 171},
  [30] = {.lex_state = 171},
  [31] = {.lex_state = 171},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 171},
  [34] = {.lex_state = 171},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 171},
  [37] = {.lex_state = 171},
  [38] = {.lex_state = 171},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 171},
  [41] = {.lex_state = 171},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 171},
  [44] = {.lex_state = 171},
  [45] = {.lex_state = 171},
  [46] = {.lex_state = 171},
  [47] = {.lex_state = 171},
  [48] = {.lex_state = 171},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 171},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 171},
  [54] = {.lex_state = 171},
  [55] = {.lex_state = 171},
  [56] = {.lex_state = 171},
  [57] = {.lex_state = 171},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 171},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 171},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 171},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 171},
  [70] = {.lex_state = 171},
  [71] = {.lex_state = 171},
  [72] = {.lex_state = 171},
  [73] = {.lex_state = 171},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 171},
  [76] = {.lex_state = 171},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 171},
  [79] = {.lex_state = 171},
  [80] = {.lex_state = 171},
  [81] = {.lex_state = 171},
  [82] = {.lex_state = 171},
  [83] = {.lex_state = 171},
  [84] = {.lex_state = 171},
  [85] = {.lex_state = 171},
  [86] = {.lex_state = 171},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 171},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 171},
  [95] = {.lex_state = 171},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 171},
  [98] = {.lex_state = 171},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 171},
  [101] = {.lex_state = 171},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 171},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 171},
  [110] = {.lex_state = 171},
  [111] = {.lex_state = 171},
  [112] = {.lex_state = 171},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 171},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 171},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 171},
  [120] = {.lex_state = 171},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 171},
  [127] = {.lex_state = 171},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 171},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 171},
  [134] = {.lex_state = 29},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 171},
  [137] = {.lex_state = 29},
  [138] = {.lex_state = 171},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 171},
  [143] = {.lex_state = 29},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 171},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 29},
  [149] = {.lex_state = 171},
  [150] = {.lex_state = 171},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 29},
  [153] = {.lex_state = 171},
  [154] = {.lex_state = 171},
  [155] = {.lex_state = 29},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 29},
  [158] = {.lex_state = 29},
  [159] = {.lex_state = 29},
  [160] = {.lex_state = 29},
  [161] = {.lex_state = 171},
  [162] = {.lex_state = 171},
  [163] = {.lex_state = 171},
  [164] = {.lex_state = 29},
  [165] = {.lex_state = 171},
  [166] = {.lex_state = 29},
  [167] = {.lex_state = 171},
  [168] = {.lex_state = 171},
  [169] = {.lex_state = 171},
  [170] = {.lex_state = 171},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 171},
  [174] = {.lex_state = 171},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 171},
  [177] = {.lex_state = 171},
  [178] = {.lex_state = 171},
  [179] = {.lex_state = 171},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 171},
  [182] = {.lex_state = 171},
  [183] = {.lex_state = 29},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 171},
  [188] = {.lex_state = 171},
  [189] = {.lex_state = 171},
  [190] = {.lex_state = 171},
  [191] = {.lex_state = 171},
  [192] = {.lex_state = 171},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 171},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 171},
  [197] = {.lex_state = 171},
  [198] = {.lex_state = 171},
  [199] = {.lex_state = 171},
  [200] = {.lex_state = 32},
  [201] = {.lex_state = 171},
  [202] = {.lex_state = 29},
  [203] = {.lex_state = 29},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 171},
  [206] = {.lex_state = 171},
  [207] = {.lex_state = 171},
  [208] = {.lex_state = 171},
  [209] = {.lex_state = 29},
  [210] = {.lex_state = 29},
  [211] = {.lex_state = 171},
  [212] = {.lex_state = 171},
  [213] = {.lex_state = 171},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 171},
  [217] = {.lex_state = 33},
  [218] = {.lex_state = 34},
  [219] = {.lex_state = 171},
  [220] = {.lex_state = 32},
  [221] = {.lex_state = 29},
  [222] = {.lex_state = 171},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {(TSStateId)(-1)},
  [226] = {(TSStateId)(-1)},
  [227] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_linebreak] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_package] = ACTIONS(1),
    [aux_sym_file_token1] = ACTIONS(1),
    [aux_sym_file_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_url_token3] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_python_version] = ACTIONS(1),
    [anon_sym_python_full_version] = ACTIONS(1),
    [anon_sym_os_name] = ACTIONS(1),
    [anon_sym_sys_platform] = ACTIONS(1),
    [anon_sym_platform_release] = ACTIONS(1),
    [anon_sym_platform_system] = ACTIONS(1),
    [anon_sym_platform_version] = ACTIONS(1),
    [anon_sym_platform_machine] = ACTIONS(1),
    [anon_sym_platform_python_implementation] = ACTIONS(1),
    [anon_sym_implementation_name] = ACTIONS(1),
    [anon_sym_implementation_version] = ACTIONS(1),
    [anon_sym_extra] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_DASHglobal_DASHoption] = ACTIONS(1),
    [anon_sym_DASH_DASHconfig_DASHsettings] = ACTIONS(1),
    [anon_sym_DASH_DASHhash] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(3),
    [aux_sym__space_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(224),
    [sym_requirement] = STATE(132),
    [sym_url] = STATE(132),
    [sym_global_opt] = STATE(132),
    [sym_linebreak] = STATE(1),
    [sym__space] = STATE(7),
    [aux_sym_file_repeat1] = STATE(6),
    [aux_sym__space_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_package] = ACTIONS(7),
    [aux_sym_file_token1] = ACTIONS(9),
    [aux_sym_file_token2] = ACTIONS(11),
    [aux_sym_url_token1] = ACTIONS(13),
    [aux_sym_url_token2] = ACTIONS(15),
    [anon_sym_DASH_DASHno_DASHbinary] = ACTIONS(17),
    [anon_sym_DASH_DASHonly_DASHbinary] = ACTIONS(17),
    [anon_sym_DASH_DASHtrusted_DASHhost] = ACTIONS(17),
    [anon_sym_DASH_DASHuse_DASHfeature] = ACTIONS(17),
    [anon_sym_DASH_DASHno_DASHindex] = ACTIONS(19),
    [anon_sym_DASH_DASHprefer_DASHbinary] = ACTIONS(19),
    [anon_sym_DASH_DASHrequire_DASHhashes] = ACTIONS(19),
    [anon_sym_DASH_DASHpre] = ACTIONS(21),
    [anon_sym_DASHi] = ACTIONS(23),
    [anon_sym_DASH_DASHindex_DASHurl] = ACTIONS(25),
    [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = ACTIONS(25),
    [anon_sym_DASHc] = ACTIONS(27),
    [anon_sym_DASHr] = ACTIONS(27),
    [anon_sym_DASH_DASHconstraint] = ACTIONS(29),
    [anon_sym_DASH_DASHrequirement] = ACTIONS(29),
    [anon_sym_DASHe] = ACTIONS(31),
    [anon_sym_DASHf] = ACTIONS(31),
    [anon_sym_DASH_DASHeditable] = ACTIONS(33),
    [anon_sym_DASH_DASHfind_DASHlinks] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(3),
    [sym_comment] = ACTIONS(35),
    [aux_sym__space_token1] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      sym_linebreak,
    STATE(3), 1,
      aux_sym__space_repeat1,
    ACTIONS(39), 5,
      sym_package,
      aux_sym_url_token2,
      anon_sym_in,
      anon_sym_not,
      anon_sym_DASH_DASHpre,
    ACTIONS(41), 35,
      aux_sym_file_token1,
      aux_sym_file_token2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_AT,
      aux_sym_url_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [57] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(47), 1,
      aux_sym__space_token1,
    STATE(3), 2,
      sym_linebreak,
      aux_sym__space_repeat1,
    ACTIONS(43), 5,
      sym_package,
      aux_sym_url_token2,
      anon_sym_in,
      anon_sym_not,
      anon_sym_DASH_DASHpre,
    ACTIONS(45), 35,
      aux_sym_file_token1,
      aux_sym_file_token2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_AT,
      aux_sym_url_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [112] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(4), 1,
      sym_linebreak,
    ACTIONS(50), 5,
      sym_package,
      aux_sym_url_token2,
      anon_sym_in,
      anon_sym_not,
      anon_sym_DASH_DASHpre,
    ACTIONS(52), 36,
      aux_sym_file_token1,
      aux_sym_file_token2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_AT,
      aux_sym_url_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym__space_token1,
  [164] = 22,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym_package,
    ACTIONS(59), 1,
      aux_sym_file_token1,
    ACTIONS(62), 1,
      aux_sym_file_token2,
    ACTIONS(65), 1,
      aux_sym_url_token1,
    ACTIONS(68), 1,
      aux_sym_url_token2,
    ACTIONS(77), 1,
      anon_sym_DASH_DASHpre,
    ACTIONS(80), 1,
      anon_sym_DASHi,
    ACTIONS(98), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(7), 1,
      sym__space,
    ACTIONS(83), 2,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
    ACTIONS(86), 2,
      anon_sym_DASHc,
      anon_sym_DASHr,
    ACTIONS(89), 2,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
    ACTIONS(92), 2,
      anon_sym_DASHe,
      anon_sym_DASHf,
    ACTIONS(95), 2,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
    STATE(5), 2,
      sym_linebreak,
      aux_sym_file_repeat1,
    ACTIONS(74), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(132), 3,
      sym_requirement,
      sym_url,
      sym_global_opt,
    ACTIONS(71), 4,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
  [244] = 23,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(7), 1,
      sym_package,
    ACTIONS(9), 1,
      aux_sym_file_token1,
    ACTIONS(11), 1,
      aux_sym_file_token2,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(21), 1,
      anon_sym_DASH_DASHpre,
    ACTIONS(23), 1,
      anon_sym_DASHi,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(5), 1,
      aux_sym_file_repeat1,
    STATE(6), 1,
      sym_linebreak,
    STATE(7), 1,
      sym__space,
    ACTIONS(25), 2,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
    ACTIONS(27), 2,
      anon_sym_DASHc,
      anon_sym_DASHr,
    ACTIONS(29), 2,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
    ACTIONS(31), 2,
      anon_sym_DASHe,
      anon_sym_DASHf,
    ACTIONS(33), 2,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
    ACTIONS(19), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(132), 3,
      sym_requirement,
      sym_url,
      sym_global_opt,
    ACTIONS(17), 4,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
  [326] = 18,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(7), 1,
      sym_package,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(21), 1,
      anon_sym_DASH_DASHpre,
    ACTIONS(23), 1,
      anon_sym_DASHi,
    ACTIONS(106), 1,
      aux_sym_file_token1,
    ACTIONS(108), 1,
      aux_sym_file_token2,
    ACTIONS(110), 1,
      sym_comment,
    STATE(7), 1,
      sym_linebreak,
    ACTIONS(25), 2,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
    ACTIONS(27), 2,
      anon_sym_DASHc,
      anon_sym_DASHr,
    ACTIONS(29), 2,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
    ACTIONS(31), 2,
      anon_sym_DASHe,
      anon_sym_DASHf,
    ACTIONS(33), 2,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
    ACTIONS(19), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(139), 3,
      sym_requirement,
      sym_url,
      sym_global_opt,
    ACTIONS(17), 4,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
  [393] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(8), 1,
      sym_linebreak,
    ACTIONS(114), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(112), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym__space_token1,
  [431] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(9), 1,
      sym_linebreak,
    ACTIONS(118), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(116), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym__space_token1,
  [469] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      sym_linebreak,
    ACTIONS(122), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(120), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym__space_token1,
  [507] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(11), 1,
      sym_linebreak,
    ACTIONS(124), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(54), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym__space_token1,
  [545] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      sym_linebreak,
    ACTIONS(128), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(126), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym__space_token1,
  [583] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(13), 1,
      sym_linebreak,
    STATE(26), 1,
      sym__space,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(48), 1,
      sym__marker,
    STATE(85), 1,
      sym_marker_var,
    STATE(70), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [628] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(14), 1,
      sym_linebreak,
    STATE(21), 1,
      sym__space,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(45), 1,
      sym__marker,
    STATE(85), 1,
      sym_marker_var,
    STATE(70), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [673] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(15), 1,
      sym_linebreak,
    STATE(20), 1,
      sym__space,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(62), 1,
      sym__marker,
    STATE(85), 1,
      sym_marker_var,
    STATE(70), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [718] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(16), 1,
      sym_linebreak,
    STATE(22), 1,
      sym__space,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(85), 1,
      sym_marker_var,
    STATE(110), 1,
      sym__marker,
    STATE(70), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [763] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(17), 1,
      sym_linebreak,
    STATE(27), 1,
      sym__space,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(47), 1,
      sym__marker,
    STATE(85), 1,
      sym_marker_var,
    STATE(70), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [808] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(18), 1,
      sym_linebreak,
    STATE(23), 1,
      sym__space,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(51), 1,
      sym__marker,
    STATE(85), 1,
      sym_marker_var,
    STATE(70), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [853] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(19), 1,
      sym_linebreak,
    STATE(24), 1,
      sym__space,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(46), 1,
      sym__marker,
    STATE(85), 1,
      sym_marker_var,
    STATE(70), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [898] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_linebreak,
    STATE(66), 1,
      sym__marker,
    STATE(85), 1,
      sym_marker_var,
    STATE(70), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [934] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_linebreak,
    STATE(46), 1,
      sym__marker,
    STATE(85), 1,
      sym_marker_var,
    STATE(70), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [970] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_linebreak,
    STATE(85), 1,
      sym_marker_var,
    STATE(114), 1,
      sym__marker,
    STATE(70), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1006] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_linebreak,
    STATE(62), 1,
      sym__marker,
    STATE(85), 1,
      sym_marker_var,
    STATE(70), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1042] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_linebreak,
    STATE(43), 1,
      sym__marker,
    STATE(85), 1,
      sym_marker_var,
    STATE(70), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1078] = 18,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(136), 1,
      aux_sym_file_token1,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 1,
      anon_sym_AT,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      sym_version_cmp,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(150), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(25), 1,
      sym_linebreak,
    STATE(31), 1,
      sym_extras,
    STATE(63), 1,
      sym_marker_spec,
    STATE(65), 1,
      aux_sym_requirement_repeat1,
    STATE(78), 1,
      sym__space,
    STATE(99), 1,
      sym__version_list,
    STATE(128), 1,
      sym_requirement_opt,
    STATE(35), 2,
      sym_url_spec,
      sym_version_spec,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1136] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_linebreak,
    STATE(44), 1,
      sym__marker,
    STATE(85), 1,
      sym_marker_var,
    STATE(70), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1172] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_linebreak,
    STATE(48), 1,
      sym__marker,
    STATE(85), 1,
      sym_marker_var,
    STATE(70), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1208] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(153), 1,
      aux_sym__space_token1,
    STATE(28), 2,
      sym_linebreak,
      aux_sym__space_repeat1,
    ACTIONS(45), 16,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
      anon_sym_and,
      anon_sym_or,
  [1237] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(29), 1,
      sym_linebreak,
    ACTIONS(41), 16,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
      anon_sym_and,
      anon_sym_or,
  [1268] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(30), 1,
      sym_linebreak,
    ACTIONS(52), 17,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [1294] = 16,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(140), 1,
      anon_sym_AT,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      sym_version_cmp,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(156), 1,
      aux_sym_file_token1,
    ACTIONS(158), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(31), 1,
      sym_linebreak,
    STATE(50), 1,
      aux_sym_requirement_repeat1,
    STATE(67), 1,
      sym_marker_spec,
    STATE(86), 1,
      sym__space,
    STATE(99), 1,
      sym__version_list,
    STATE(128), 1,
      sym_requirement_opt,
    STATE(39), 2,
      sym_url_spec,
      sym_version_spec,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1346] = 13,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(161), 1,
      aux_sym_argument_token1,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(169), 1,
      aux_sym__space_token1,
    STATE(32), 1,
      sym_linebreak,
    STATE(52), 1,
      sym__space,
    STATE(88), 1,
      aux_sym__space_repeat1,
    STATE(140), 1,
      aux_sym_argument_repeat1,
    STATE(185), 1,
      sym_argument,
    STATE(184), 2,
      sym_url,
      sym_quoted_string,
  [1387] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(33), 1,
      sym_linebreak,
    STATE(37), 1,
      aux_sym__version_list_repeat1,
    STATE(196), 1,
      sym__space,
    ACTIONS(171), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1415] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(34), 1,
      sym_linebreak,
    STATE(36), 1,
      aux_sym__version_list_repeat1,
    STATE(196), 1,
      sym__space,
    ACTIONS(175), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1443] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(156), 1,
      aux_sym_file_token1,
    ACTIONS(158), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(35), 1,
      sym_linebreak,
    STATE(50), 1,
      aux_sym_requirement_repeat1,
    STATE(67), 1,
      sym_marker_spec,
    STATE(128), 1,
      sym_requirement_opt,
    STATE(147), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1479] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(36), 1,
      sym_linebreak,
    STATE(40), 1,
      aux_sym__version_list_repeat1,
    STATE(196), 1,
      sym__space,
    ACTIONS(177), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1507] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(37), 1,
      sym_linebreak,
    STATE(40), 1,
      aux_sym__version_list_repeat1,
    STATE(196), 1,
      sym__space,
    ACTIONS(179), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1535] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(38), 1,
      sym_linebreak,
    STATE(41), 1,
      aux_sym__version_list_repeat1,
    STATE(196), 1,
      sym__space,
    ACTIONS(179), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1563] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(181), 1,
      aux_sym_file_token1,
    ACTIONS(183), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(39), 1,
      sym_linebreak,
    STATE(60), 1,
      aux_sym_requirement_repeat1,
    STATE(61), 1,
      sym_marker_spec,
    STATE(128), 1,
      sym_requirement_opt,
    STATE(147), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1599] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(196), 1,
      sym__space,
    STATE(40), 2,
      sym_linebreak,
      aux_sym__version_list_repeat1,
    ACTIONS(186), 6,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1627] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(40), 1,
      aux_sym__version_list_repeat1,
    STATE(41), 1,
      sym_linebreak,
    STATE(196), 1,
      sym__space,
    ACTIONS(175), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1655] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(196), 1,
      aux_sym_url_token3,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(77), 1,
      sym_env_var,
    STATE(42), 2,
      sym_linebreak,
      aux_sym_url_repeat1,
    ACTIONS(194), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1680] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(43), 1,
      sym_linebreak,
    STATE(192), 1,
      sym__space,
    ACTIONS(202), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1703] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(44), 1,
      sym_linebreak,
    STATE(192), 1,
      sym__space,
    ACTIONS(204), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1726] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(45), 1,
      sym_linebreak,
    STATE(192), 1,
      sym__space,
    ACTIONS(206), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1749] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(46), 1,
      sym_linebreak,
    STATE(192), 1,
      sym__space,
    ACTIONS(208), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1772] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(47), 1,
      sym_linebreak,
    STATE(192), 1,
      sym__space,
    ACTIONS(210), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1795] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(48), 1,
      sym_linebreak,
    STATE(192), 1,
      sym__space,
    ACTIONS(212), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1818] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(216), 1,
      aux_sym_url_token3,
    ACTIONS(218), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(42), 1,
      aux_sym_url_repeat1,
    STATE(49), 1,
      sym_linebreak,
    STATE(77), 1,
      sym_env_var,
    ACTIONS(214), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1845] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      aux_sym_file_token1,
    ACTIONS(183), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(50), 1,
      sym_linebreak,
    STATE(58), 1,
      aux_sym_requirement_repeat1,
    STATE(128), 1,
      sym_requirement_opt,
    STATE(171), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1875] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    ACTIONS(222), 1,
      anon_sym_and,
    ACTIONS(224), 1,
      anon_sym_or,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(51), 1,
      sym_linebreak,
    STATE(192), 1,
      sym__space,
    ACTIONS(220), 4,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1903] = 10,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(161), 1,
      aux_sym_argument_token1,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym_linebreak,
    STATE(140), 1,
      aux_sym_argument_repeat1,
    STATE(180), 1,
      sym_argument,
    STATE(186), 2,
      sym_url,
      sym_quoted_string,
  [1935] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      sym_linebreak,
    ACTIONS(226), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1953] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(54), 1,
      sym_linebreak,
    ACTIONS(228), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1971] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(55), 1,
      sym_linebreak,
    ACTIONS(230), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1989] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(56), 1,
      sym_linebreak,
    ACTIONS(232), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2007] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(57), 1,
      sym_linebreak,
    ACTIONS(234), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2025] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(236), 1,
      aux_sym_file_token1,
    ACTIONS(241), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(128), 1,
      sym_requirement_opt,
    STATE(171), 1,
      sym__space,
    STATE(58), 2,
      sym_linebreak,
      aux_sym_requirement_repeat1,
    ACTIONS(238), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2053] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(59), 1,
      sym_linebreak,
    ACTIONS(244), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2071] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(246), 1,
      aux_sym_file_token1,
    ACTIONS(248), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(58), 1,
      aux_sym_requirement_repeat1,
    STATE(60), 1,
      sym_linebreak,
    STATE(128), 1,
      sym_requirement_opt,
    STATE(171), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2101] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(246), 1,
      aux_sym_file_token1,
    ACTIONS(248), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(61), 1,
      sym_linebreak,
    STATE(64), 1,
      aux_sym_requirement_repeat1,
    STATE(128), 1,
      sym_requirement_opt,
    STATE(171), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2131] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    ACTIONS(222), 1,
      anon_sym_and,
    ACTIONS(224), 1,
      anon_sym_or,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(62), 1,
      sym_linebreak,
    STATE(192), 1,
      sym__space,
    ACTIONS(251), 4,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2159] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(156), 1,
      aux_sym_file_token1,
    ACTIONS(158), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(50), 1,
      aux_sym_requirement_repeat1,
    STATE(63), 1,
      sym_linebreak,
    STATE(128), 1,
      sym_requirement_opt,
    STATE(171), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2189] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(253), 1,
      aux_sym_file_token1,
    ACTIONS(255), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(58), 1,
      aux_sym_requirement_repeat1,
    STATE(64), 1,
      sym_linebreak,
    STATE(128), 1,
      sym_requirement_opt,
    STATE(171), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2219] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(156), 1,
      aux_sym_file_token1,
    ACTIONS(158), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(58), 1,
      aux_sym_requirement_repeat1,
    STATE(65), 1,
      sym_linebreak,
    STATE(128), 1,
      sym_requirement_opt,
    STATE(171), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2249] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    ACTIONS(222), 1,
      anon_sym_and,
    ACTIONS(224), 1,
      anon_sym_or,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(66), 1,
      sym_linebreak,
    STATE(192), 1,
      sym__space,
    ACTIONS(258), 4,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2277] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      aux_sym_file_token1,
    ACTIONS(183), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(60), 1,
      aux_sym_requirement_repeat1,
    STATE(67), 1,
      sym_linebreak,
    STATE(128), 1,
      sym_requirement_opt,
    STATE(171), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2307] = 11,
    ACTIONS(161), 1,
      aux_sym_argument_token1,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(260), 1,
      aux_sym__space_token1,
    STATE(68), 1,
      sym_linebreak,
    STATE(113), 1,
      sym__space,
    STATE(125), 1,
      aux_sym__space_repeat1,
    STATE(140), 1,
      aux_sym_argument_repeat1,
    STATE(184), 1,
      sym_quoted_string,
    STATE(185), 1,
      sym_argument,
  [2341] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(69), 1,
      sym_linebreak,
    STATE(109), 1,
      sym__space,
    STATE(184), 2,
      sym_url,
      sym_quoted_string,
  [2373] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(70), 1,
      sym_linebreak,
    ACTIONS(262), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2390] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(71), 1,
      sym_linebreak,
    ACTIONS(264), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2407] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(72), 1,
      sym_linebreak,
    ACTIONS(266), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2424] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(73), 1,
      sym_linebreak,
    ACTIONS(268), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2441] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(272), 1,
      aux_sym_url_token3,
    STATE(74), 1,
      sym_linebreak,
    ACTIONS(270), 7,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [2460] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(75), 1,
      sym_linebreak,
    ACTIONS(274), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2477] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(76), 1,
      sym_linebreak,
    ACTIONS(276), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2494] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(280), 1,
      aux_sym_url_token3,
    STATE(77), 1,
      sym_linebreak,
    ACTIONS(278), 7,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [2513] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      sym_version_cmp,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      sym_linebreak,
    ACTIONS(292), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2540] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(79), 1,
      sym_linebreak,
    ACTIONS(294), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2557] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(80), 1,
      sym_linebreak,
    ACTIONS(296), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2574] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(81), 1,
      sym_linebreak,
    ACTIONS(298), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2591] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(82), 1,
      sym_linebreak,
    ACTIONS(300), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2608] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(83), 1,
      sym_linebreak,
    ACTIONS(302), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2625] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(84), 1,
      sym_linebreak,
    ACTIONS(304), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2642] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(306), 1,
      sym_version_cmp,
    ACTIONS(308), 1,
      anon_sym_in,
    ACTIONS(310), 1,
      anon_sym_not,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(85), 1,
      sym_linebreak,
    STATE(112), 1,
      sym_marker_op,
    STATE(142), 1,
      sym__space,
  [2670] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      sym_version_cmp,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      sym_linebreak,
    ACTIONS(292), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2694] = 4,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(314), 1,
      aux_sym_argument_token1,
    STATE(87), 2,
      sym_linebreak,
      aux_sym_argument_repeat1,
    ACTIONS(312), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2712] = 6,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(169), 1,
      aux_sym__space_token1,
    STATE(88), 1,
      sym_linebreak,
    STATE(89), 1,
      aux_sym__space_repeat1,
    ACTIONS(39), 2,
      aux_sym_url_token2,
      aux_sym_argument_token1,
    ACTIONS(41), 3,
      aux_sym_url_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2734] = 5,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(317), 1,
      aux_sym__space_token1,
    ACTIONS(43), 2,
      aux_sym_url_token2,
      aux_sym_argument_token1,
    STATE(89), 2,
      sym_linebreak,
      aux_sym__space_repeat1,
    ACTIONS(45), 3,
      aux_sym_url_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2754] = 5,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(322), 1,
      aux_sym_argument_token1,
    STATE(87), 1,
      aux_sym_argument_repeat1,
    STATE(90), 1,
      sym_linebreak,
    ACTIONS(320), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2774] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(91), 1,
      sym_linebreak,
    STATE(120), 1,
      aux_sym__package_list_repeat1,
    STATE(179), 1,
      sym__space,
  [2799] = 7,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(322), 1,
      aux_sym_argument_token1,
    STATE(90), 1,
      aux_sym_argument_repeat1,
    STATE(92), 1,
      sym_linebreak,
    STATE(122), 2,
      sym_argument,
      sym_quoted_string,
  [2822] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(93), 1,
      sym_linebreak,
    ACTIONS(328), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2837] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(94), 1,
      sym_linebreak,
    STATE(95), 1,
      aux_sym__package_list_repeat1,
    STATE(191), 1,
      sym__space,
  [2862] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(95), 1,
      sym_linebreak,
    STATE(120), 1,
      aux_sym__package_list_repeat1,
    STATE(187), 1,
      sym__space,
  [2887] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(334), 1,
      aux_sym_url_token3,
    ACTIONS(337), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(151), 1,
      sym_env_var,
    ACTIONS(194), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
    STATE(96), 2,
      sym_linebreak,
      aux_sym_url_repeat1,
  [2908] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(97), 1,
      sym_linebreak,
    STATE(120), 1,
      aux_sym__package_list_repeat1,
    STATE(191), 1,
      sym__space,
  [2933] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(340), 1,
      aux_sym_url_token1,
    ACTIONS(342), 1,
      aux_sym_url_token2,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(98), 1,
      sym_linebreak,
    STATE(121), 1,
      sym_url,
    STATE(170), 1,
      sym__space,
  [2958] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(99), 1,
      sym_linebreak,
    ACTIONS(344), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2973] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(100), 1,
      sym_linebreak,
    STATE(120), 1,
      aux_sym__package_list_repeat1,
    STATE(188), 1,
      sym__space,
  [2998] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(91), 1,
      aux_sym__package_list_repeat1,
    STATE(101), 1,
      sym_linebreak,
    STATE(188), 1,
      sym__space,
  [3023] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(102), 1,
      sym_linebreak,
    ACTIONS(348), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3038] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(103), 1,
      sym_linebreak,
    ACTIONS(350), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3053] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(104), 1,
      sym_linebreak,
    ACTIONS(352), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3068] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(354), 1,
      aux_sym_url_token3,
    ACTIONS(356), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(96), 1,
      aux_sym_url_repeat1,
    STATE(105), 1,
      sym_linebreak,
    STATE(151), 1,
      sym_env_var,
    ACTIONS(214), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3091] = 7,
    ACTIONS(161), 1,
      aux_sym_argument_token1,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    STATE(106), 1,
      sym_linebreak,
    STATE(140), 1,
      aux_sym_argument_repeat1,
    STATE(186), 2,
      sym_argument,
      sym_quoted_string,
  [3114] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(340), 1,
      aux_sym_url_token1,
    ACTIONS(342), 1,
      aux_sym_url_token2,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(103), 1,
      sym_url,
    STATE(107), 1,
      sym_linebreak,
    STATE(163), 1,
      sym__space,
  [3139] = 4,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    STATE(108), 1,
      sym_linebreak,
    ACTIONS(50), 2,
      aux_sym_url_token2,
      aux_sym_argument_token1,
    ACTIONS(52), 4,
      aux_sym_url_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [3156] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    STATE(109), 1,
      sym_linebreak,
    STATE(186), 2,
      sym_url,
      sym_quoted_string,
  [3179] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    ACTIONS(222), 1,
      anon_sym_and,
    ACTIONS(224), 1,
      anon_sym_or,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(110), 1,
      sym_linebreak,
    STATE(177), 1,
      sym__space,
  [3204] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(80), 1,
      sym_quoted_string,
    STATE(111), 1,
      sym_linebreak,
    STATE(168), 1,
      sym__space,
  [3229] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(72), 1,
      sym_quoted_string,
    STATE(112), 1,
      sym_linebreak,
    STATE(174), 1,
      sym__space,
  [3254] = 8,
    ACTIONS(161), 1,
      aux_sym_argument_token1,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    STATE(113), 1,
      sym_linebreak,
    STATE(140), 1,
      aux_sym_argument_repeat1,
    STATE(180), 1,
      sym_argument,
    STATE(186), 1,
      sym_quoted_string,
  [3279] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    ACTIONS(222), 1,
      anon_sym_and,
    ACTIONS(224), 1,
      anon_sym_or,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(114), 1,
      sym_linebreak,
    STATE(165), 1,
      sym__space,
  [3304] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(115), 1,
      sym_linebreak,
    ACTIONS(362), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3319] = 7,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(322), 1,
      aux_sym_argument_token1,
    STATE(90), 1,
      aux_sym_argument_repeat1,
    STATE(116), 1,
      sym_linebreak,
    STATE(124), 2,
      sym_argument,
      sym_quoted_string,
  [3342] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(97), 1,
      aux_sym__package_list_repeat1,
    STATE(117), 1,
      sym_linebreak,
    STATE(179), 1,
      sym__space,
  [3367] = 4,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(366), 1,
      aux_sym_argument_token1,
    STATE(118), 1,
      sym_linebreak,
    ACTIONS(364), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3384] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(100), 1,
      aux_sym__package_list_repeat1,
    STATE(119), 1,
      sym_linebreak,
    STATE(190), 1,
      sym__space,
  [3409] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(219), 1,
      sym__space,
    STATE(120), 2,
      sym_linebreak,
      aux_sym__package_list_repeat1,
  [3432] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(121), 1,
      sym_linebreak,
    ACTIONS(378), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3447] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(122), 1,
      sym_linebreak,
    ACTIONS(380), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3461] = 5,
    ACTIONS(43), 1,
      aux_sym_argument_token1,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(382), 1,
      aux_sym__space_token1,
    ACTIONS(45), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(123), 2,
      sym_linebreak,
      aux_sym__space_repeat1,
  [3479] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(124), 1,
      sym_linebreak,
    ACTIONS(385), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3493] = 6,
    ACTIONS(39), 1,
      aux_sym_argument_token1,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(260), 1,
      aux_sym__space_token1,
    STATE(123), 1,
      aux_sym__space_repeat1,
    STATE(125), 1,
      sym_linebreak,
    ACTIONS(41), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3513] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(144), 1,
      sym_version_cmp,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(126), 1,
      sym_linebreak,
    STATE(150), 1,
      sym__version_list,
    STATE(194), 1,
      sym__space,
  [3535] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(144), 1,
      sym_version_cmp,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(127), 1,
      sym_linebreak,
    STATE(154), 1,
      sym__version_list,
    STATE(194), 1,
      sym__space,
  [3557] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(128), 1,
      sym_linebreak,
    ACTIONS(387), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3571] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(389), 1,
      sym_version_cmp,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(129), 1,
      sym_linebreak,
    STATE(199), 1,
      sym__space,
  [3590] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(391), 1,
      anon_sym_EQ,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(109), 1,
      sym__space,
    STATE(130), 1,
      sym_linebreak,
  [3609] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(272), 1,
      aux_sym_url_token3,
    STATE(131), 1,
      sym_linebreak,
    ACTIONS(270), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [3624] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(106), 1,
      aux_sym_file_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(132), 1,
      sym_linebreak,
    STATE(182), 1,
      sym__space,
  [3643] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(393), 1,
      sym_package,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(133), 1,
      sym_linebreak,
    STATE(222), 1,
      sym__space,
  [3662] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(395), 1,
      sym_version,
    ACTIONS(397), 1,
      aux_sym__space_token1,
    STATE(134), 1,
      sym_linebreak,
    STATE(164), 1,
      aux_sym__space_repeat1,
    STATE(202), 1,
      sym__space,
  [3681] = 4,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(399), 1,
      aux_sym_argument_token1,
    ACTIONS(312), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
    STATE(135), 2,
      sym_linebreak,
      aux_sym_argument_repeat1,
  [3696] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(136), 1,
      sym_linebreak,
    ACTIONS(402), 4,
      sym_version_cmp,
      anon_sym_in,
      anon_sym_not,
      aux_sym__space_token1,
  [3709] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(397), 1,
      aux_sym__space_token1,
    ACTIONS(404), 1,
      sym_version,
    STATE(137), 1,
      sym_linebreak,
    STATE(164), 1,
      aux_sym__space_repeat1,
    STATE(203), 1,
      sym__space,
  [3728] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(406), 1,
      sym_version_cmp,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(138), 1,
      sym_linebreak,
    STATE(201), 1,
      sym__space,
  [3747] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(408), 1,
      aux_sym_file_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(139), 1,
      sym_linebreak,
    STATE(189), 1,
      sym__space,
  [3766] = 5,
    ACTIONS(161), 1,
      aux_sym_argument_token1,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    STATE(135), 1,
      aux_sym_argument_repeat1,
    STATE(140), 1,
      sym_linebreak,
    ACTIONS(320), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3783] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(354), 1,
      aux_sym_url_token3,
    ACTIONS(356), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(105), 1,
      aux_sym_url_repeat1,
    STATE(141), 1,
      sym_linebreak,
    STATE(151), 1,
      sym_env_var,
  [3802] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(308), 1,
      anon_sym_in,
    ACTIONS(310), 1,
      anon_sym_not,
    ACTIONS(410), 1,
      sym_version_cmp,
    STATE(111), 1,
      sym_marker_op,
    STATE(142), 1,
      sym_linebreak,
  [3821] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(260), 1,
      aux_sym__space_token1,
    ACTIONS(412), 1,
      anon_sym_EQ,
    STATE(106), 1,
      sym__space,
    STATE(125), 1,
      aux_sym__space_repeat1,
    STATE(143), 1,
      sym_linebreak,
  [3840] = 4,
    ACTIONS(50), 1,
      aux_sym_argument_token1,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    STATE(144), 1,
      sym_linebreak,
    ACTIONS(52), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [3855] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(414), 1,
      sym_package,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(145), 1,
      sym_linebreak,
    STATE(216), 1,
      sym__space,
  [3874] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(216), 1,
      aux_sym_url_token3,
    ACTIONS(218), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(49), 1,
      aux_sym_url_repeat1,
    STATE(77), 1,
      sym_env_var,
    STATE(146), 1,
      sym_linebreak,
  [3893] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    STATE(147), 1,
      sym_linebreak,
    ACTIONS(292), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [3908] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(397), 1,
      aux_sym__space_token1,
    ACTIONS(416), 1,
      sym_version,
    STATE(148), 1,
      sym_linebreak,
    STATE(164), 1,
      aux_sym__space_repeat1,
    STATE(221), 1,
      sym__space,
  [3927] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(418), 1,
      sym_package,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(145), 1,
      sym__space,
    STATE(149), 1,
      sym_linebreak,
  [3946] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(150), 1,
      sym_linebreak,
    STATE(197), 1,
      sym__space,
  [3965] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(280), 1,
      aux_sym_url_token3,
    STATE(151), 1,
      sym_linebreak,
    ACTIONS(278), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [3980] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(260), 1,
      aux_sym__space_token1,
    ACTIONS(422), 1,
      anon_sym_EQ,
    STATE(113), 1,
      sym__space,
    STATE(125), 1,
      aux_sym__space_repeat1,
    STATE(152), 1,
      sym_linebreak,
  [3999] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(418), 1,
      sym_package,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(153), 1,
      sym_linebreak,
    STATE(198), 1,
      sym__space,
  [4018] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(154), 1,
      sym_linebreak,
    STATE(207), 1,
      sym__space,
  [4037] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(260), 1,
      aux_sym__space_token1,
    ACTIONS(426), 1,
      anon_sym_EQ,
    STATE(116), 1,
      sym__space,
    STATE(125), 1,
      aux_sym__space_repeat1,
    STATE(155), 1,
      sym_linebreak,
  [4056] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(428), 1,
      aux_sym_file_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(156), 1,
      sym_linebreak,
    STATE(181), 1,
      sym__space,
  [4075] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(397), 1,
      aux_sym__space_token1,
    ACTIONS(430), 1,
      sym_version,
    STATE(157), 1,
      sym_linebreak,
    STATE(164), 1,
      aux_sym__space_repeat1,
    STATE(209), 1,
      sym__space,
  [4094] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(169), 1,
      aux_sym__space_token1,
    ACTIONS(432), 1,
      anon_sym_EQ,
    STATE(52), 1,
      sym__space,
    STATE(88), 1,
      aux_sym__space_repeat1,
    STATE(158), 1,
      sym_linebreak,
  [4113] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(397), 1,
      aux_sym__space_token1,
    ACTIONS(434), 1,
      sym_version,
    STATE(159), 1,
      sym_linebreak,
    STATE(164), 1,
      aux_sym__space_repeat1,
    STATE(210), 1,
      sym__space,
  [4132] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(260), 1,
      aux_sym__space_token1,
    ACTIONS(436), 1,
      anon_sym_EQ,
    STATE(92), 1,
      sym__space,
    STATE(125), 1,
      aux_sym__space_repeat1,
    STATE(160), 1,
      sym_linebreak,
  [4151] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(438), 1,
      sym_package,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(161), 1,
      sym_linebreak,
    STATE(211), 1,
      sym__space,
  [4170] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(440), 1,
      sym_package,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(153), 1,
      sym__space,
    STATE(162), 1,
      sym_linebreak,
  [4189] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(340), 1,
      aux_sym_url_token1,
    ACTIONS(342), 1,
      aux_sym_url_token2,
    STATE(102), 1,
      sym_url,
    STATE(163), 1,
      sym_linebreak,
  [4205] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(41), 1,
      sym_version,
    ACTIONS(397), 1,
      aux_sym__space_token1,
    STATE(164), 1,
      sym_linebreak,
    STATE(166), 1,
      aux_sym__space_repeat1,
  [4221] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    ACTIONS(444), 1,
      anon_sym_and,
    ACTIONS(446), 1,
      anon_sym_or,
    STATE(165), 1,
      sym_linebreak,
  [4237] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(45), 1,
      sym_version,
    ACTIONS(448), 1,
      aux_sym__space_token1,
    STATE(166), 2,
      sym_linebreak,
      aux_sym__space_repeat1,
  [4251] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(167), 1,
      sym_linebreak,
    ACTIONS(451), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [4263] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    STATE(76), 1,
      sym_quoted_string,
    STATE(168), 1,
      sym_linebreak,
  [4279] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(169), 1,
      sym_linebreak,
    ACTIONS(453), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [4291] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(340), 1,
      aux_sym_url_token1,
    ACTIONS(342), 1,
      aux_sym_url_token2,
    STATE(103), 1,
      sym_url,
    STATE(170), 1,
      sym_linebreak,
  [4307] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(171), 1,
      sym_linebreak,
    ACTIONS(292), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [4319] = 4,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(366), 1,
      aux_sym_argument_token1,
    STATE(172), 1,
      sym_linebreak,
    ACTIONS(364), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4333] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(173), 1,
      sym_linebreak,
    ACTIONS(455), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [4345] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    STATE(80), 1,
      sym_quoted_string,
    STATE(174), 1,
      sym_linebreak,
  [4361] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(175), 1,
      sym_linebreak,
    STATE(212), 1,
      sym__space,
  [4377] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(176), 1,
      sym_linebreak,
    ACTIONS(457), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [4389] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(444), 1,
      anon_sym_and,
    ACTIONS(446), 1,
      anon_sym_or,
    STATE(177), 1,
      sym_linebreak,
  [4405] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(178), 1,
      sym_linebreak,
    ACTIONS(370), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [4417] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      sym_linebreak,
  [4430] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(180), 1,
      sym_linebreak,
    ACTIONS(461), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4441] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(463), 1,
      aux_sym_file_token1,
    ACTIONS(465), 1,
      sym_comment,
    STATE(181), 1,
      sym_linebreak,
  [4454] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(408), 1,
      aux_sym_file_token1,
    ACTIONS(467), 1,
      sym_comment,
    STATE(182), 1,
      sym_linebreak,
  [4467] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(183), 1,
      sym_linebreak,
    ACTIONS(52), 2,
      sym_version,
      aux_sym__space_token1,
  [4478] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(184), 1,
      sym_linebreak,
    ACTIONS(469), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4489] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(185), 1,
      sym_linebreak,
    ACTIONS(471), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4500] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(186), 1,
      sym_linebreak,
    ACTIONS(473), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4511] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      sym_linebreak,
  [4524] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      sym_linebreak,
  [4537] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      aux_sym_file_token1,
    ACTIONS(479), 1,
      sym_comment,
    STATE(189), 1,
      sym_linebreak,
  [4550] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      sym_linebreak,
  [4563] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      sym_linebreak,
  [4576] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(444), 1,
      anon_sym_and,
    ACTIONS(446), 1,
      anon_sym_or,
    STATE(192), 1,
      sym_linebreak,
  [4589] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(193), 1,
      sym_linebreak,
    ACTIONS(481), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4600] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(288), 1,
      sym_version_cmp,
    STATE(194), 1,
      sym_linebreak,
  [4610] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      aux_sym_file_token1,
    STATE(195), 1,
      sym_linebreak,
  [4620] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      sym_linebreak,
  [4630] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      sym_linebreak,
  [4640] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(414), 1,
      sym_package,
    STATE(198), 1,
      sym_linebreak,
  [4650] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(406), 1,
      sym_version_cmp,
    STATE(199), 1,
      sym_linebreak,
  [4660] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(485), 1,
      aux_sym_env_var_token1,
    STATE(200), 1,
      sym_linebreak,
  [4670] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(487), 1,
      sym_version_cmp,
    STATE(201), 1,
      sym_linebreak,
  [4680] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(489), 1,
      sym_version,
    STATE(202), 1,
      sym_linebreak,
  [4690] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(434), 1,
      sym_version,
    STATE(203), 1,
      sym_linebreak,
  [4700] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(491), 1,
      aux_sym_file_token1,
    STATE(204), 1,
      sym_linebreak,
  [4710] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(493), 1,
      anon_sym_SQUOTE,
    STATE(205), 1,
      sym_linebreak,
  [4720] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(493), 1,
      anon_sym_DQUOTE,
    STATE(206), 1,
      sym_linebreak,
  [4730] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_linebreak,
  [4740] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym_linebreak,
  [4750] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(416), 1,
      sym_version,
    STATE(209), 1,
      sym_linebreak,
  [4760] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(395), 1,
      sym_version,
    STATE(210), 1,
      sym_linebreak,
  [4770] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(393), 1,
      sym_package,
    STATE(211), 1,
      sym_linebreak,
  [4780] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(499), 1,
      anon_sym_in,
    STATE(212), 1,
      sym_linebreak,
  [4790] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      sym_linebreak,
  [4800] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(408), 1,
      aux_sym_file_token1,
    STATE(214), 1,
      sym_linebreak,
  [4810] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(503), 1,
      aux_sym_file_token1,
    STATE(215), 1,
      sym_linebreak,
  [4820] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(505), 1,
      sym_package,
    STATE(216), 1,
      sym_linebreak,
  [4830] = 3,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(507), 1,
      aux_sym_quoted_string_token2,
    STATE(217), 1,
      sym_linebreak,
  [4840] = 3,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    ACTIONS(509), 1,
      aux_sym_quoted_string_token1,
    STATE(218), 1,
      sym_linebreak,
  [4850] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      sym_linebreak,
  [4860] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(511), 1,
      aux_sym_env_var_token1,
    STATE(220), 1,
      sym_linebreak,
  [4870] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(513), 1,
      sym_version,
    STATE(221), 1,
      sym_linebreak,
  [4880] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(515), 1,
      sym_package,
    STATE(222), 1,
      sym_linebreak,
  [4890] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(106), 1,
      aux_sym_file_token1,
    STATE(223), 1,
      sym_linebreak,
  [4900] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
    STATE(224), 1,
      sym_linebreak,
  [4910] = 1,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
  [4914] = 1,
    ACTIONS(521), 1,
      ts_builtin_sym_end,
  [4918] = 1,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 326,
  [SMALL_STATE(8)] = 393,
  [SMALL_STATE(9)] = 431,
  [SMALL_STATE(10)] = 469,
  [SMALL_STATE(11)] = 507,
  [SMALL_STATE(12)] = 545,
  [SMALL_STATE(13)] = 583,
  [SMALL_STATE(14)] = 628,
  [SMALL_STATE(15)] = 673,
  [SMALL_STATE(16)] = 718,
  [SMALL_STATE(17)] = 763,
  [SMALL_STATE(18)] = 808,
  [SMALL_STATE(19)] = 853,
  [SMALL_STATE(20)] = 898,
  [SMALL_STATE(21)] = 934,
  [SMALL_STATE(22)] = 970,
  [SMALL_STATE(23)] = 1006,
  [SMALL_STATE(24)] = 1042,
  [SMALL_STATE(25)] = 1078,
  [SMALL_STATE(26)] = 1136,
  [SMALL_STATE(27)] = 1172,
  [SMALL_STATE(28)] = 1208,
  [SMALL_STATE(29)] = 1237,
  [SMALL_STATE(30)] = 1268,
  [SMALL_STATE(31)] = 1294,
  [SMALL_STATE(32)] = 1346,
  [SMALL_STATE(33)] = 1387,
  [SMALL_STATE(34)] = 1415,
  [SMALL_STATE(35)] = 1443,
  [SMALL_STATE(36)] = 1479,
  [SMALL_STATE(37)] = 1507,
  [SMALL_STATE(38)] = 1535,
  [SMALL_STATE(39)] = 1563,
  [SMALL_STATE(40)] = 1599,
  [SMALL_STATE(41)] = 1627,
  [SMALL_STATE(42)] = 1655,
  [SMALL_STATE(43)] = 1680,
  [SMALL_STATE(44)] = 1703,
  [SMALL_STATE(45)] = 1726,
  [SMALL_STATE(46)] = 1749,
  [SMALL_STATE(47)] = 1772,
  [SMALL_STATE(48)] = 1795,
  [SMALL_STATE(49)] = 1818,
  [SMALL_STATE(50)] = 1845,
  [SMALL_STATE(51)] = 1875,
  [SMALL_STATE(52)] = 1903,
  [SMALL_STATE(53)] = 1935,
  [SMALL_STATE(54)] = 1953,
  [SMALL_STATE(55)] = 1971,
  [SMALL_STATE(56)] = 1989,
  [SMALL_STATE(57)] = 2007,
  [SMALL_STATE(58)] = 2025,
  [SMALL_STATE(59)] = 2053,
  [SMALL_STATE(60)] = 2071,
  [SMALL_STATE(61)] = 2101,
  [SMALL_STATE(62)] = 2131,
  [SMALL_STATE(63)] = 2159,
  [SMALL_STATE(64)] = 2189,
  [SMALL_STATE(65)] = 2219,
  [SMALL_STATE(66)] = 2249,
  [SMALL_STATE(67)] = 2277,
  [SMALL_STATE(68)] = 2307,
  [SMALL_STATE(69)] = 2341,
  [SMALL_STATE(70)] = 2373,
  [SMALL_STATE(71)] = 2390,
  [SMALL_STATE(72)] = 2407,
  [SMALL_STATE(73)] = 2424,
  [SMALL_STATE(74)] = 2441,
  [SMALL_STATE(75)] = 2460,
  [SMALL_STATE(76)] = 2477,
  [SMALL_STATE(77)] = 2494,
  [SMALL_STATE(78)] = 2513,
  [SMALL_STATE(79)] = 2540,
  [SMALL_STATE(80)] = 2557,
  [SMALL_STATE(81)] = 2574,
  [SMALL_STATE(82)] = 2591,
  [SMALL_STATE(83)] = 2608,
  [SMALL_STATE(84)] = 2625,
  [SMALL_STATE(85)] = 2642,
  [SMALL_STATE(86)] = 2670,
  [SMALL_STATE(87)] = 2694,
  [SMALL_STATE(88)] = 2712,
  [SMALL_STATE(89)] = 2734,
  [SMALL_STATE(90)] = 2754,
  [SMALL_STATE(91)] = 2774,
  [SMALL_STATE(92)] = 2799,
  [SMALL_STATE(93)] = 2822,
  [SMALL_STATE(94)] = 2837,
  [SMALL_STATE(95)] = 2862,
  [SMALL_STATE(96)] = 2887,
  [SMALL_STATE(97)] = 2908,
  [SMALL_STATE(98)] = 2933,
  [SMALL_STATE(99)] = 2958,
  [SMALL_STATE(100)] = 2973,
  [SMALL_STATE(101)] = 2998,
  [SMALL_STATE(102)] = 3023,
  [SMALL_STATE(103)] = 3038,
  [SMALL_STATE(104)] = 3053,
  [SMALL_STATE(105)] = 3068,
  [SMALL_STATE(106)] = 3091,
  [SMALL_STATE(107)] = 3114,
  [SMALL_STATE(108)] = 3139,
  [SMALL_STATE(109)] = 3156,
  [SMALL_STATE(110)] = 3179,
  [SMALL_STATE(111)] = 3204,
  [SMALL_STATE(112)] = 3229,
  [SMALL_STATE(113)] = 3254,
  [SMALL_STATE(114)] = 3279,
  [SMALL_STATE(115)] = 3304,
  [SMALL_STATE(116)] = 3319,
  [SMALL_STATE(117)] = 3342,
  [SMALL_STATE(118)] = 3367,
  [SMALL_STATE(119)] = 3384,
  [SMALL_STATE(120)] = 3409,
  [SMALL_STATE(121)] = 3432,
  [SMALL_STATE(122)] = 3447,
  [SMALL_STATE(123)] = 3461,
  [SMALL_STATE(124)] = 3479,
  [SMALL_STATE(125)] = 3493,
  [SMALL_STATE(126)] = 3513,
  [SMALL_STATE(127)] = 3535,
  [SMALL_STATE(128)] = 3557,
  [SMALL_STATE(129)] = 3571,
  [SMALL_STATE(130)] = 3590,
  [SMALL_STATE(131)] = 3609,
  [SMALL_STATE(132)] = 3624,
  [SMALL_STATE(133)] = 3643,
  [SMALL_STATE(134)] = 3662,
  [SMALL_STATE(135)] = 3681,
  [SMALL_STATE(136)] = 3696,
  [SMALL_STATE(137)] = 3709,
  [SMALL_STATE(138)] = 3728,
  [SMALL_STATE(139)] = 3747,
  [SMALL_STATE(140)] = 3766,
  [SMALL_STATE(141)] = 3783,
  [SMALL_STATE(142)] = 3802,
  [SMALL_STATE(143)] = 3821,
  [SMALL_STATE(144)] = 3840,
  [SMALL_STATE(145)] = 3855,
  [SMALL_STATE(146)] = 3874,
  [SMALL_STATE(147)] = 3893,
  [SMALL_STATE(148)] = 3908,
  [SMALL_STATE(149)] = 3927,
  [SMALL_STATE(150)] = 3946,
  [SMALL_STATE(151)] = 3965,
  [SMALL_STATE(152)] = 3980,
  [SMALL_STATE(153)] = 3999,
  [SMALL_STATE(154)] = 4018,
  [SMALL_STATE(155)] = 4037,
  [SMALL_STATE(156)] = 4056,
  [SMALL_STATE(157)] = 4075,
  [SMALL_STATE(158)] = 4094,
  [SMALL_STATE(159)] = 4113,
  [SMALL_STATE(160)] = 4132,
  [SMALL_STATE(161)] = 4151,
  [SMALL_STATE(162)] = 4170,
  [SMALL_STATE(163)] = 4189,
  [SMALL_STATE(164)] = 4205,
  [SMALL_STATE(165)] = 4221,
  [SMALL_STATE(166)] = 4237,
  [SMALL_STATE(167)] = 4251,
  [SMALL_STATE(168)] = 4263,
  [SMALL_STATE(169)] = 4279,
  [SMALL_STATE(170)] = 4291,
  [SMALL_STATE(171)] = 4307,
  [SMALL_STATE(172)] = 4319,
  [SMALL_STATE(173)] = 4333,
  [SMALL_STATE(174)] = 4345,
  [SMALL_STATE(175)] = 4361,
  [SMALL_STATE(176)] = 4377,
  [SMALL_STATE(177)] = 4389,
  [SMALL_STATE(178)] = 4405,
  [SMALL_STATE(179)] = 4417,
  [SMALL_STATE(180)] = 4430,
  [SMALL_STATE(181)] = 4441,
  [SMALL_STATE(182)] = 4454,
  [SMALL_STATE(183)] = 4467,
  [SMALL_STATE(184)] = 4478,
  [SMALL_STATE(185)] = 4489,
  [SMALL_STATE(186)] = 4500,
  [SMALL_STATE(187)] = 4511,
  [SMALL_STATE(188)] = 4524,
  [SMALL_STATE(189)] = 4537,
  [SMALL_STATE(190)] = 4550,
  [SMALL_STATE(191)] = 4563,
  [SMALL_STATE(192)] = 4576,
  [SMALL_STATE(193)] = 4589,
  [SMALL_STATE(194)] = 4600,
  [SMALL_STATE(195)] = 4610,
  [SMALL_STATE(196)] = 4620,
  [SMALL_STATE(197)] = 4630,
  [SMALL_STATE(198)] = 4640,
  [SMALL_STATE(199)] = 4650,
  [SMALL_STATE(200)] = 4660,
  [SMALL_STATE(201)] = 4670,
  [SMALL_STATE(202)] = 4680,
  [SMALL_STATE(203)] = 4690,
  [SMALL_STATE(204)] = 4700,
  [SMALL_STATE(205)] = 4710,
  [SMALL_STATE(206)] = 4720,
  [SMALL_STATE(207)] = 4730,
  [SMALL_STATE(208)] = 4740,
  [SMALL_STATE(209)] = 4750,
  [SMALL_STATE(210)] = 4760,
  [SMALL_STATE(211)] = 4770,
  [SMALL_STATE(212)] = 4780,
  [SMALL_STATE(213)] = 4790,
  [SMALL_STATE(214)] = 4800,
  [SMALL_STATE(215)] = 4810,
  [SMALL_STATE(216)] = 4820,
  [SMALL_STATE(217)] = 4830,
  [SMALL_STATE(218)] = 4840,
  [SMALL_STATE(219)] = 4850,
  [SMALL_STATE(220)] = 4860,
  [SMALL_STATE(221)] = 4870,
  [SMALL_STATE(222)] = 4880,
  [SMALL_STATE(223)] = 4890,
  [SMALL_STATE(224)] = 4900,
  [SMALL_STATE(225)] = 4910,
  [SMALL_STATE(226)] = 4914,
  [SMALL_STATE(227)] = 4918,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__space, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__space, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 5, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 5, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_requirement, 1, 0, 0), SHIFT(4),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_requirement, 2, 0, 0), SHIFT(4),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 4, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 5, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 3, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_requirement, 3, 0, 0), SHIFT(4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2, 0, 0),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 5, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 5, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 4, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2, 0, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 8, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 5, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 4, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 7, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 6, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 4, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_requirement, 4, 0, 0), SHIFT(4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 5, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_requirement, 5, 0, 0), SHIFT(4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 4, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 4, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var, 3, 0, 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3, 0, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 5, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 5, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 6, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 4, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 4, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 5, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 5, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 4, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 3, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 1, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 1, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2, 0, 0),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 2, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement_opt, 4, 0, 0),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement_opt, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_var, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 3, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 3, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 1, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 4, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 3, 0, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 2, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 2, 0, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 3, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [517] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 2, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 3, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 4, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_requirements(void) {
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
    .keyword_capture_token = sym_package,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
