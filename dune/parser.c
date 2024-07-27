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
#define STATE_COUNT 236
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN = 1,
  aux_sym_ocaml_syntax_token1 = 2,
  anon_sym_DQUOTE = 3,
  sym_multiline_string = 4,
  sym__quoted_string_char = 5,
  sym__atom = 6,
  sym_named_variable = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_comment = 10,
  anon_sym_vendored_dirs = 11,
  anon_sym_ocamllex = 12,
  anon_sym_ocamlyacc = 13,
  anon_sym_include_subdirs = 14,
  anon_sym_test = 15,
  anon_sym_data_only_dirs = 16,
  anon_sym_cram = 17,
  anon_sym_dirs = 18,
  anon_sym_toplevel = 19,
  anon_sym_install = 20,
  anon_sym_documentation = 21,
  anon_sym_env = 22,
  anon_sym_alias = 23,
  anon_sym_name = 24,
  anon_sym_action = 25,
  anon_sym_subdir = 26,
  anon_sym_executable = 27,
  anon_sym_public_name = 28,
  anon_sym_libraries = 29,
  anon_sym_modules = 30,
  anon_sym_enabled_if = 31,
  anon_sym_re_export = 32,
  anon_sym_select = 33,
  anon_sym_rule = 34,
  anon_sym_mode = 35,
  anon_sym_target = 36,
  anon_sym_targets = 37,
  anon_sym_package = 38,
  anon_sym_fallback = 39,
  anon_sym_locks = 40,
  anon_sym_deps = 41,
  anon_sym_universe = 42,
  anon_sym_sandbox = 43,
  anon_sym_env_var = 44,
  anon_sym_alias_rec = 45,
  anon_sym_source_tree = 46,
  anon_sym_glob_files = 47,
  anon_sym_dir = 48,
  anon_sym_true = 49,
  anon_sym_false = 50,
  anon_sym_promote = 51,
  anon_sym_promote_DASHinto = 52,
  anon_sym_only = 53,
  anon_sym_into = 54,
  anon_sym_EQ = 55,
  anon_sym_LT_GT = 56,
  anon_sym_GT = 57,
  anon_sym_LT_EQ = 58,
  anon_sym_or = 59,
  anon_sym_and = 60,
  anon_sym_bash = 61,
  anon_sym_cat = 62,
  anon_sym_cmp = 63,
  anon_sym_chdir = 64,
  anon_sym_copy = 65,
  anon_sym_copy_POUND = 66,
  anon_sym_diff = 67,
  anon_sym_diff_QMARK = 68,
  anon_sym_echo = 69,
  anon_sym_ignore_DASHstdout = 70,
  anon_sym_no_DASHinfer = 71,
  anon_sym_pipe_DASHoutputs = 72,
  anon_sym_progn = 73,
  anon_sym_run = 74,
  anon_sym_setenv = 75,
  anon_sym_system = 76,
  anon_sym_with_DASHoutputs_DASHto = 77,
  anon_sym_with_DASHstderr_DASHto = 78,
  anon_sym_with_DASHstdout_DASHto = 79,
  anon_sym_write_DASHfile = 80,
  anon_sym_library = 81,
  anon_sym_synopsis = 82,
  anon_sym_instrumentation = 83,
  anon_sym_wrapped = 84,
  anon_sym_transition = 85,
  anon_sym_kind = 86,
  anon_sym_ppx_DOTdriver = 87,
  sym_source_file = 88,
  sym_ocaml_syntax = 89,
  sym_sexp = 90,
  sym_sexps1 = 91,
  sym__atom_or_qs = 92,
  sym_quoted_string = 93,
  sym__list = 94,
  sym_stanza = 95,
  sym__stanza_alias = 96,
  sym__stanza_subdir = 97,
  sym__stanza_executable = 98,
  sym__field_buildable = 99,
  sym__modules_osl = 100,
  sym__lib_dep = 101,
  sym_library_name = 102,
  sym_public_name = 103,
  sym_module_name = 104,
  sym_file_name = 105,
  sym_file_name_dep = 106,
  sym_file_name_target = 107,
  sym_package_name = 108,
  sym_lock_name = 109,
  sym_shell_command = 110,
  sym__stanza_rule = 111,
  sym__deps_field = 112,
  sym__dep = 113,
  sym__target = 114,
  sym__bool = 115,
  sym__rule_mode = 116,
  sym__rule_mode_promote_field = 117,
  sym_blang = 118,
  sym_blang_op = 119,
  sym_alias_name = 120,
  sym_action = 121,
  sym__stanza_library = 122,
  aux_sym_source_file_repeat1 = 123,
  aux_sym_ocaml_syntax_repeat1 = 124,
  aux_sym_sexps1_repeat1 = 125,
  aux_sym_quoted_string_repeat1 = 126,
  aux_sym_stanza_repeat1 = 127,
  aux_sym_stanza_repeat2 = 128,
  aux_sym__stanza_alias_repeat1 = 129,
  aux_sym__stanza_executable_repeat1 = 130,
  aux_sym__field_buildable_repeat1 = 131,
  aux_sym__stanza_rule_repeat1 = 132,
  aux_sym__stanza_rule_repeat2 = 133,
  aux_sym__stanza_rule_repeat3 = 134,
  aux_sym__stanza_rule_repeat4 = 135,
  aux_sym__deps_field_repeat1 = 136,
  aux_sym__dep_repeat1 = 137,
  aux_sym_blang_repeat1 = 138,
  aux_sym_action_repeat1 = 139,
  aux_sym__stanza_library_repeat1 = 140,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = "(* -*- tuareg -*- *)",
  [aux_sym_ocaml_syntax_token1] = "ocaml_syntax_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym_multiline_string] = "multiline_string",
  [sym__quoted_string_char] = "_quoted_string_char",
  [sym__atom] = "_atom",
  [sym_named_variable] = "named_variable",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_comment] = "comment",
  [anon_sym_vendored_dirs] = "stanza_name",
  [anon_sym_ocamllex] = "stanza_name",
  [anon_sym_ocamlyacc] = "stanza_name",
  [anon_sym_include_subdirs] = "stanza_name",
  [anon_sym_test] = "stanza_name",
  [anon_sym_data_only_dirs] = "stanza_name",
  [anon_sym_cram] = "stanza_name",
  [anon_sym_dirs] = "stanza_name",
  [anon_sym_toplevel] = "stanza_name",
  [anon_sym_install] = "stanza_name",
  [anon_sym_documentation] = "stanza_name",
  [anon_sym_env] = "stanza_name",
  [anon_sym_alias] = "alias",
  [anon_sym_name] = "field_name",
  [anon_sym_action] = "field_name",
  [anon_sym_subdir] = "stanza_name",
  [anon_sym_executable] = "stanza_name",
  [anon_sym_public_name] = "field_name",
  [anon_sym_libraries] = "field_name",
  [anon_sym_modules] = "field_name",
  [anon_sym_enabled_if] = "field_name",
  [anon_sym_re_export] = "field_name",
  [anon_sym_select] = "field_name",
  [anon_sym_rule] = "stanza_name",
  [anon_sym_mode] = "field_name",
  [anon_sym_target] = "field_name",
  [anon_sym_targets] = "field_name",
  [anon_sym_package] = "package",
  [anon_sym_fallback] = "fallback",
  [anon_sym_locks] = "field_name",
  [anon_sym_deps] = "field_name",
  [anon_sym_universe] = "universe",
  [anon_sym_sandbox] = "sandbox",
  [anon_sym_env_var] = "env_var",
  [anon_sym_alias_rec] = "alias_rec",
  [anon_sym_source_tree] = "source_tree",
  [anon_sym_glob_files] = "glob_files",
  [anon_sym_dir] = "dir",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_promote] = "promote",
  [anon_sym_promote_DASHinto] = "field_name",
  [anon_sym_only] = "field_name",
  [anon_sym_into] = "field_name",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_bash] = "action_name",
  [anon_sym_cat] = "action_name",
  [anon_sym_cmp] = "action_name",
  [anon_sym_chdir] = "action_name",
  [anon_sym_copy] = "action_name",
  [anon_sym_copy_POUND] = "action_name",
  [anon_sym_diff] = "action_name",
  [anon_sym_diff_QMARK] = "action_name",
  [anon_sym_echo] = "action_name",
  [anon_sym_ignore_DASHstdout] = "action_name",
  [anon_sym_no_DASHinfer] = "action_name",
  [anon_sym_pipe_DASHoutputs] = "action_name",
  [anon_sym_progn] = "action_name",
  [anon_sym_run] = "action_name",
  [anon_sym_setenv] = "action_name",
  [anon_sym_system] = "action_name",
  [anon_sym_with_DASHoutputs_DASHto] = "action_name",
  [anon_sym_with_DASHstderr_DASHto] = "action_name",
  [anon_sym_with_DASHstdout_DASHto] = "action_name",
  [anon_sym_write_DASHfile] = "action_name",
  [anon_sym_library] = "stanza_name",
  [anon_sym_synopsis] = "field_name",
  [anon_sym_instrumentation] = "field_name",
  [anon_sym_wrapped] = "field_name",
  [anon_sym_transition] = "field_name",
  [anon_sym_kind] = "field_name",
  [anon_sym_ppx_DOTdriver] = "field_name",
  [sym_source_file] = "source_file",
  [sym_ocaml_syntax] = "ocaml_syntax",
  [sym_sexp] = "sexp",
  [sym_sexps1] = "sexps1",
  [sym__atom_or_qs] = "_atom_or_qs",
  [sym_quoted_string] = "quoted_string",
  [sym__list] = "_list",
  [sym_stanza] = "stanza",
  [sym__stanza_alias] = "_stanza_alias",
  [sym__stanza_subdir] = "_stanza_subdir",
  [sym__stanza_executable] = "_stanza_executable",
  [sym__field_buildable] = "_field_buildable",
  [sym__modules_osl] = "_modules_osl",
  [sym__lib_dep] = "_lib_dep",
  [sym_library_name] = "library_name",
  [sym_public_name] = "public_name",
  [sym_module_name] = "module_name",
  [sym_file_name] = "file_name",
  [sym_file_name_dep] = "file_name_dep",
  [sym_file_name_target] = "file_name_target",
  [sym_package_name] = "package_name",
  [sym_lock_name] = "lock_name",
  [sym_shell_command] = "shell_command",
  [sym__stanza_rule] = "_stanza_rule",
  [sym__deps_field] = "_deps_field",
  [sym__dep] = "_dep",
  [sym__target] = "_target",
  [sym__bool] = "_bool",
  [sym__rule_mode] = "_rule_mode",
  [sym__rule_mode_promote_field] = "_rule_mode_promote_field",
  [sym_blang] = "blang",
  [sym_blang_op] = "blang_op",
  [sym_alias_name] = "alias_name",
  [sym_action] = "action",
  [sym__stanza_library] = "_stanza_library",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_ocaml_syntax_repeat1] = "ocaml_syntax_repeat1",
  [aux_sym_sexps1_repeat1] = "sexps1_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_stanza_repeat1] = "stanza_repeat1",
  [aux_sym_stanza_repeat2] = "stanza_repeat2",
  [aux_sym__stanza_alias_repeat1] = "_stanza_alias_repeat1",
  [aux_sym__stanza_executable_repeat1] = "_stanza_executable_repeat1",
  [aux_sym__field_buildable_repeat1] = "_field_buildable_repeat1",
  [aux_sym__stanza_rule_repeat1] = "_stanza_rule_repeat1",
  [aux_sym__stanza_rule_repeat2] = "_stanza_rule_repeat2",
  [aux_sym__stanza_rule_repeat3] = "_stanza_rule_repeat3",
  [aux_sym__stanza_rule_repeat4] = "_stanza_rule_repeat4",
  [aux_sym__deps_field_repeat1] = "_deps_field_repeat1",
  [aux_sym__dep_repeat1] = "_dep_repeat1",
  [aux_sym_blang_repeat1] = "blang_repeat1",
  [aux_sym_action_repeat1] = "action_repeat1",
  [aux_sym__stanza_library_repeat1] = "_stanza_library_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN,
  [aux_sym_ocaml_syntax_token1] = aux_sym_ocaml_syntax_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_multiline_string] = sym_multiline_string,
  [sym__quoted_string_char] = sym__quoted_string_char,
  [sym__atom] = sym__atom,
  [sym_named_variable] = sym_named_variable,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_comment] = sym_comment,
  [anon_sym_vendored_dirs] = anon_sym_vendored_dirs,
  [anon_sym_ocamllex] = anon_sym_vendored_dirs,
  [anon_sym_ocamlyacc] = anon_sym_vendored_dirs,
  [anon_sym_include_subdirs] = anon_sym_vendored_dirs,
  [anon_sym_test] = anon_sym_vendored_dirs,
  [anon_sym_data_only_dirs] = anon_sym_vendored_dirs,
  [anon_sym_cram] = anon_sym_vendored_dirs,
  [anon_sym_dirs] = anon_sym_vendored_dirs,
  [anon_sym_toplevel] = anon_sym_vendored_dirs,
  [anon_sym_install] = anon_sym_vendored_dirs,
  [anon_sym_documentation] = anon_sym_vendored_dirs,
  [anon_sym_env] = anon_sym_vendored_dirs,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_action] = anon_sym_name,
  [anon_sym_subdir] = anon_sym_vendored_dirs,
  [anon_sym_executable] = anon_sym_vendored_dirs,
  [anon_sym_public_name] = anon_sym_name,
  [anon_sym_libraries] = anon_sym_name,
  [anon_sym_modules] = anon_sym_name,
  [anon_sym_enabled_if] = anon_sym_name,
  [anon_sym_re_export] = anon_sym_name,
  [anon_sym_select] = anon_sym_name,
  [anon_sym_rule] = anon_sym_vendored_dirs,
  [anon_sym_mode] = anon_sym_name,
  [anon_sym_target] = anon_sym_name,
  [anon_sym_targets] = anon_sym_name,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_fallback] = anon_sym_fallback,
  [anon_sym_locks] = anon_sym_name,
  [anon_sym_deps] = anon_sym_name,
  [anon_sym_universe] = anon_sym_universe,
  [anon_sym_sandbox] = anon_sym_sandbox,
  [anon_sym_env_var] = anon_sym_env_var,
  [anon_sym_alias_rec] = anon_sym_alias_rec,
  [anon_sym_source_tree] = anon_sym_source_tree,
  [anon_sym_glob_files] = anon_sym_glob_files,
  [anon_sym_dir] = anon_sym_dir,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_promote] = anon_sym_promote,
  [anon_sym_promote_DASHinto] = anon_sym_name,
  [anon_sym_only] = anon_sym_name,
  [anon_sym_into] = anon_sym_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_bash] = anon_sym_bash,
  [anon_sym_cat] = anon_sym_bash,
  [anon_sym_cmp] = anon_sym_bash,
  [anon_sym_chdir] = anon_sym_bash,
  [anon_sym_copy] = anon_sym_bash,
  [anon_sym_copy_POUND] = anon_sym_bash,
  [anon_sym_diff] = anon_sym_bash,
  [anon_sym_diff_QMARK] = anon_sym_bash,
  [anon_sym_echo] = anon_sym_bash,
  [anon_sym_ignore_DASHstdout] = anon_sym_bash,
  [anon_sym_no_DASHinfer] = anon_sym_bash,
  [anon_sym_pipe_DASHoutputs] = anon_sym_bash,
  [anon_sym_progn] = anon_sym_bash,
  [anon_sym_run] = anon_sym_bash,
  [anon_sym_setenv] = anon_sym_bash,
  [anon_sym_system] = anon_sym_bash,
  [anon_sym_with_DASHoutputs_DASHto] = anon_sym_bash,
  [anon_sym_with_DASHstderr_DASHto] = anon_sym_bash,
  [anon_sym_with_DASHstdout_DASHto] = anon_sym_bash,
  [anon_sym_write_DASHfile] = anon_sym_bash,
  [anon_sym_library] = anon_sym_vendored_dirs,
  [anon_sym_synopsis] = anon_sym_name,
  [anon_sym_instrumentation] = anon_sym_name,
  [anon_sym_wrapped] = anon_sym_name,
  [anon_sym_transition] = anon_sym_name,
  [anon_sym_kind] = anon_sym_name,
  [anon_sym_ppx_DOTdriver] = anon_sym_name,
  [sym_source_file] = sym_source_file,
  [sym_ocaml_syntax] = sym_ocaml_syntax,
  [sym_sexp] = sym_sexp,
  [sym_sexps1] = sym_sexps1,
  [sym__atom_or_qs] = sym__atom_or_qs,
  [sym_quoted_string] = sym_quoted_string,
  [sym__list] = sym__list,
  [sym_stanza] = sym_stanza,
  [sym__stanza_alias] = sym__stanza_alias,
  [sym__stanza_subdir] = sym__stanza_subdir,
  [sym__stanza_executable] = sym__stanza_executable,
  [sym__field_buildable] = sym__field_buildable,
  [sym__modules_osl] = sym__modules_osl,
  [sym__lib_dep] = sym__lib_dep,
  [sym_library_name] = sym_library_name,
  [sym_public_name] = sym_public_name,
  [sym_module_name] = sym_module_name,
  [sym_file_name] = sym_file_name,
  [sym_file_name_dep] = sym_file_name_dep,
  [sym_file_name_target] = sym_file_name_target,
  [sym_package_name] = sym_package_name,
  [sym_lock_name] = sym_lock_name,
  [sym_shell_command] = sym_shell_command,
  [sym__stanza_rule] = sym__stanza_rule,
  [sym__deps_field] = sym__deps_field,
  [sym__dep] = sym__dep,
  [sym__target] = sym__target,
  [sym__bool] = sym__bool,
  [sym__rule_mode] = sym__rule_mode,
  [sym__rule_mode_promote_field] = sym__rule_mode_promote_field,
  [sym_blang] = sym_blang,
  [sym_blang_op] = sym_blang_op,
  [sym_alias_name] = sym_alias_name,
  [sym_action] = sym_action,
  [sym__stanza_library] = sym__stanza_library,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_ocaml_syntax_repeat1] = aux_sym_ocaml_syntax_repeat1,
  [aux_sym_sexps1_repeat1] = aux_sym_sexps1_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_stanza_repeat1] = aux_sym_stanza_repeat1,
  [aux_sym_stanza_repeat2] = aux_sym_stanza_repeat2,
  [aux_sym__stanza_alias_repeat1] = aux_sym__stanza_alias_repeat1,
  [aux_sym__stanza_executable_repeat1] = aux_sym__stanza_executable_repeat1,
  [aux_sym__field_buildable_repeat1] = aux_sym__field_buildable_repeat1,
  [aux_sym__stanza_rule_repeat1] = aux_sym__stanza_rule_repeat1,
  [aux_sym__stanza_rule_repeat2] = aux_sym__stanza_rule_repeat2,
  [aux_sym__stanza_rule_repeat3] = aux_sym__stanza_rule_repeat3,
  [aux_sym__stanza_rule_repeat4] = aux_sym__stanza_rule_repeat4,
  [aux_sym__deps_field_repeat1] = aux_sym__deps_field_repeat1,
  [aux_sym__dep_repeat1] = aux_sym__dep_repeat1,
  [aux_sym_blang_repeat1] = aux_sym_blang_repeat1,
  [aux_sym_action_repeat1] = aux_sym_action_repeat1,
  [aux_sym__stanza_library_repeat1] = aux_sym__stanza_library_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ocaml_syntax_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string_char] = {
    .visible = false,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_named_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vendored_dirs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ocamllex] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ocamlyacc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include_subdirs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_data_only_dirs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cram] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dirs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_toplevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_install] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_documentation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_subdir] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_executable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_public_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_libraries] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_modules] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_enabled_if] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_re_export] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_target] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_targets] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_locks] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_deps] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_universe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sandbox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias_rec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_tree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_glob_files] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_promote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_promote_DASHinto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_into] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bash] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cat] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cmp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_chdir] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_copy] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_copy_POUND] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_diff] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_diff_QMARK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_echo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ignore_DASHstdout] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHinfer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pipe_DASHoutputs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_progn] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_setenv] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHoutputs_DASHto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHstderr_DASHto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHstdout_DASHto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_write_DASHfile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_library] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_synopsis] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_instrumentation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_wrapped] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_transition] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_kind] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ppx_DOTdriver] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_ocaml_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_sexp] = {
    .visible = true,
    .named = true,
  },
  [sym_sexps1] = {
    .visible = true,
    .named = true,
  },
  [sym__atom_or_qs] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym__list] = {
    .visible = false,
    .named = true,
  },
  [sym_stanza] = {
    .visible = true,
    .named = true,
  },
  [sym__stanza_alias] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_subdir] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_executable] = {
    .visible = false,
    .named = true,
  },
  [sym__field_buildable] = {
    .visible = false,
    .named = true,
  },
  [sym__modules_osl] = {
    .visible = false,
    .named = true,
  },
  [sym__lib_dep] = {
    .visible = false,
    .named = true,
  },
  [sym_library_name] = {
    .visible = true,
    .named = true,
  },
  [sym_public_name] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_file_name] = {
    .visible = true,
    .named = true,
  },
  [sym_file_name_dep] = {
    .visible = true,
    .named = true,
  },
  [sym_file_name_target] = {
    .visible = true,
    .named = true,
  },
  [sym_package_name] = {
    .visible = true,
    .named = true,
  },
  [sym_lock_name] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym__stanza_rule] = {
    .visible = false,
    .named = true,
  },
  [sym__deps_field] = {
    .visible = false,
    .named = true,
  },
  [sym__dep] = {
    .visible = false,
    .named = true,
  },
  [sym__target] = {
    .visible = false,
    .named = true,
  },
  [sym__bool] = {
    .visible = false,
    .named = true,
  },
  [sym__rule_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__rule_mode_promote_field] = {
    .visible = false,
    .named = true,
  },
  [sym_blang] = {
    .visible = true,
    .named = true,
  },
  [sym_blang_op] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_name] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym__stanza_library] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ocaml_syntax_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sexps1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stanza_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stanza_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_executable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__field_buildable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_rule_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_rule_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_rule_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__deps_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__dep_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_blang_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_library_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_sym_vendored_dirs,
  },
  [2] = {
    [1] = anon_sym_name,
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
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 20,
  [21] = 18,
  [22] = 22,
  [23] = 20,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 29,
  [30] = 16,
  [31] = 31,
  [32] = 25,
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
  [46] = 34,
  [47] = 47,
  [48] = 48,
  [49] = 40,
  [50] = 50,
  [51] = 51,
  [52] = 38,
  [53] = 36,
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
  [69] = 61,
  [70] = 68,
  [71] = 67,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 59,
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
  [113] = 102,
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
  [132] = 118,
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
  [144] = 135,
  [145] = 145,
  [146] = 143,
  [147] = 121,
  [148] = 115,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 120,
  [156] = 122,
  [157] = 157,
  [158] = 158,
  [159] = 116,
  [160] = 160,
  [161] = 131,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 98,
  [166] = 100,
  [167] = 101,
  [168] = 164,
  [169] = 105,
  [170] = 141,
  [171] = 137,
  [172] = 130,
  [173] = 128,
  [174] = 119,
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
  [191] = 187,
  [192] = 185,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(412);
      if (lookahead == '"') ADVANCE(417);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(613);
      if (lookahead == ':') ADVANCE(408);
      if (lookahead == ';') ADVANCE(614);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '=') ADVANCE(683);
      if (lookahead == '>') ADVANCE(685);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'g') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'k') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(271);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead == 'v') ADVANCE(164);
      if (lookahead == 'w') ADVANCE(186);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(354);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(417);
      if (lookahead == '(') ADVANCE(611);
      if (lookahead == ')') ADVANCE(613);
      if (lookahead == ';') ADVANCE(614);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == 'c') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(528);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(592);
      if (lookahead == 's') ADVANCE(593);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == 'v') ADVANCE(476);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(417);
      if (lookahead == '(') ADVANCE(611);
      if (lookahead == ')') ADVANCE(613);
      if (lookahead == ';') ADVANCE(614);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'd') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(437);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(417);
      if (lookahead == '(') ADVANCE(611);
      if (lookahead == ')') ADVANCE(613);
      if (lookahead == ';') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(539);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'k') ADVANCE(499);
      if (lookahead == 'l') ADVANCE(506);
      if (lookahead == 'm') ADVANCE(545);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead == 'p') ADVANCE(548);
      if (lookahead == 's') ADVANCE(607);
      if (lookahead == 'w') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(417);
      if (lookahead == '(') ADVANCE(611);
      if (lookahead == ')') ADVANCE(613);
      if (lookahead == ';') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(539);
      if (lookahead == 'l') ADVANCE(506);
      if (lookahead == 'm') ADVANCE(545);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead == 'p') ADVANCE(596);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == ';') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(407);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(419);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(611);
      if (lookahead == ')') ADVANCE(613);
      if (lookahead == ';') ADVANCE(614);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'm') ADVANCE(284);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(187);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(413);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(289);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(274);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(361);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(364);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(367);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(190);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(342);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(172);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(110);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(408);
      if (lookahead == ';') ADVANCE(614);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'g') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(248);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(686);
      if (lookahead == '>') ADVANCE(684);
      END_STATE();
    case 31:
      if (lookahead == '\\') ADVANCE(406);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(170);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(398);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(134);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(338);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(189);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(258);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(372);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(278);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(114);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(116);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(399);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'v') ADVANCE(636);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == 'u') ADVANCE(80);
      if (lookahead == 'y') ADVANCE(256);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(309);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(223);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(272);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(228);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(117);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(232);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(162);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(672);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(619);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(379);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(687);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(688);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(718);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(715);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(661);
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 166:
      if (lookahead == 'f') ADVANCE(168);
      END_STATE();
    case 167:
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 168:
      if (lookahead == 'f') ADVANCE(695);
      END_STATE();
    case 169:
      if (lookahead == 'f') ADVANCE(655);
      END_STATE();
    case 170:
      if (lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 171:
      if (lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 172:
      if (lookahead == 'f') ADVANCE(208);
      END_STATE();
    case 173:
      if (lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 174:
      if (lookahead == 'g') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 175:
      if (lookahead == 'g') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 176:
      if (lookahead == 'g') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 177:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 178:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 179:
      if (lookahead == 'g') ADVANCE(5);
      END_STATE();
    case 180:
      if (lookahead == 'h') ADVANCE(689);
      END_STATE();
    case 181:
      if (lookahead == 'h') ADVANCE(264);
      END_STATE();
    case 182:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(709);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(397);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 210:
      if (lookahead == 'k') ADVANCE(665);
      END_STATE();
    case 211:
      if (lookahead == 'k') ADVANCE(325);
      END_STATE();
    case 212:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(632);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(630);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(702);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 228:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 231:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 234:
      if (lookahead == 'm') ADVANCE(627);
      END_STATE();
    case 235:
      if (lookahead == 'm') ADVANCE(704);
      END_STATE();
    case 236:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 237:
      if (lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 238:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 239:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 240:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(702);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(701);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(643);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(717);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(634);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(697);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(682);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(705);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(391);
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 290:
      if (lookahead == 'p') ADVANCE(691);
      END_STATE();
    case 291:
      if (lookahead == 'p') ADVANCE(403);
      END_STATE();
    case 292:
      if (lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 293:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 294:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 295:
      if (lookahead == 'p') ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 297:
      if (lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 298:
      if (lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 299:
      if (lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 300:
      if (lookahead == 'p') ADVANCE(386);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(692);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(645);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(699);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(671);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 323:
      if (lookahead == 's') ADVANCE(667);
      END_STATE();
    case 324:
      if (lookahead == 's') ADVANCE(639);
      END_STATE();
    case 325:
      if (lookahead == 's') ADVANCE(666);
      END_STATE();
    case 326:
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 327:
      if (lookahead == 's') ADVANCE(711);
      END_STATE();
    case 328:
      if (lookahead == 's') ADVANCE(651);
      END_STATE();
    case 329:
      if (lookahead == 's') ADVANCE(674);
      END_STATE();
    case 330:
      if (lookahead == 's') ADVANCE(700);
      END_STATE();
    case 331:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(621);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(638);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 342:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(690);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(662);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(698);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 368:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 369:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 370:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 372:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 373:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 374:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 375:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 376:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 377:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 378:
      if (lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 379:
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 380:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 381:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 382:
      if (lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 383:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 384:
      if (lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 385:
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 386:
      if (lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 387:
      if (lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 388:
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 389:
      if (lookahead == 'u') ADVANCE(355);
      END_STATE();
    case 390:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 391:
      if (lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 392:
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 393:
      if (lookahead == 'v') ADVANCE(703);
      END_STATE();
    case 394:
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 395:
      if (lookahead == 'v') ADVANCE(150);
      END_STATE();
    case 396:
      if (lookahead == 'v') ADVANCE(154);
      END_STATE();
    case 397:
      if (lookahead == 'v') ADVANCE(158);
      END_STATE();
    case 398:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 399:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 400:
      if (lookahead == 'x') ADVANCE(670);
      END_STATE();
    case 401:
      if (lookahead == 'x') ADVANCE(617);
      END_STATE();
    case 402:
      if (lookahead == 'x') ADVANCE(297);
      END_STATE();
    case 403:
      if (lookahead == 'y') ADVANCE(693);
      END_STATE();
    case 404:
      if (lookahead == 'y') ADVANCE(681);
      END_STATE();
    case 405:
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 406:
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(1);
      END_STATE();
    case 407:
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 408:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(610);
      END_STATE();
    case 409:
      if (eof) ADVANCE(412);
      if (lookahead == '\n') SKIP(409)
      if (lookahead == ';') ADVANCE(415);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 410:
      if (eof) ADVANCE(412);
      if (lookahead == '"') ADVANCE(417);
      if (lookahead == '(') ADVANCE(612);
      if (lookahead == ')') ADVANCE(613);
      if (lookahead == ';') ADVANCE(614);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(410)
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 411:
      if (eof) ADVANCE(412);
      if (lookahead == '"') ADVANCE(417);
      if (lookahead == '(') ADVANCE(611);
      if (lookahead == ')') ADVANCE(613);
      if (lookahead == ';') ADVANCE(614);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(411)
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_ocaml_syntax_token1);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_ocaml_syntax_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\\') ADVANCE(406);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_multiline_string);
      if (lookahead == '"') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__quoted_string_char);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(581);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(537);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(463);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(584);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(570);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(519);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(620);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(514);
      if (lookahead == 's') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(594);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(598);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(590);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(719);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(716);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(425);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(565);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(599);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead == 'o') ADVANCE(553);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(660);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(604);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(648);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(560);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(534);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(603);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(561);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(633);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(631);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(595);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == 'y') ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(475);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(601);
      if (lookahead == 'x') ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(635);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(644);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(579);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(588);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(591);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(605);
      if (lookahead == 'u') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(580);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(606);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(646);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(721);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(571);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(573);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(480);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(600);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(629);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(640);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(616);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(622);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(654);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(652);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(668);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(582);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(586);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(597);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(587);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(526);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'v') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'v') ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'v') ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'x') ADVANCE(618);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'x') ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(710);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(533);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_named_variable);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(610);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(2);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(614);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_vendored_dirs);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_vendored_dirs);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_ocamllex);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_ocamllex);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_ocamlyacc);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_ocamlyacc);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_include_subdirs);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_include_subdirs);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_data_only_dirs);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_data_only_dirs);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_cram);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_cram);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_dirs);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_toplevel);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_toplevel);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_install);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_install);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_documentation);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_documentation);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '_') ADVANCE(319);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_subdir);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_subdir);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_executable);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_public_name);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_public_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_libraries);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_libraries);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_modules);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_modules);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_enabled_if);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_enabled_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_re_export);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_target);
      if (lookahead == 's') ADVANCE(663);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_targets);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_locks);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_deps);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_deps);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_universe);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_sandbox);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_env_var);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_alias_rec);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_source_tree);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_glob_files);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_dir);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_promote);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_promote);
      if (lookahead == '-') ADVANCE(195);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_promote_DASHinto);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_into);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_bash);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_cat);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_cmp);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_chdir);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_copy);
      if (lookahead == '#') ADVANCE(694);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_copy_POUND);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_diff);
      if (lookahead == '?') ADVANCE(696);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_diff_QMARK);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_ignore_DASHstdout);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_no_DASHinfer);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_pipe_DASHoutputs);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_progn);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_setenv);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_with_DASHoutputs_DASHto);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_with_DASHstderr_DASHto);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_with_DASHstdout_DASHto);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_write_DASHfile);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_synopsis);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_synopsis);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_instrumentation);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_instrumentation);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_wrapped);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_wrapped);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_transition);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_kind);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_kind);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_ppx_DOTdriver);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_ppx_DOTdriver);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(609);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 410},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 411},
  [8] = {.lex_state = 411},
  [9] = {.lex_state = 411},
  [10] = {.lex_state = 411},
  [11] = {.lex_state = 411},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 411},
  [14] = {.lex_state = 411},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 411},
  [17] = {.lex_state = 411},
  [18] = {.lex_state = 411},
  [19] = {.lex_state = 411},
  [20] = {.lex_state = 411},
  [21] = {.lex_state = 411},
  [22] = {.lex_state = 411},
  [23] = {.lex_state = 411},
  [24] = {.lex_state = 411},
  [25] = {.lex_state = 411},
  [26] = {.lex_state = 411},
  [27] = {.lex_state = 411},
  [28] = {.lex_state = 411},
  [29] = {.lex_state = 411},
  [30] = {.lex_state = 411},
  [31] = {.lex_state = 411},
  [32] = {.lex_state = 411},
  [33] = {.lex_state = 411},
  [34] = {.lex_state = 411},
  [35] = {.lex_state = 411},
  [36] = {.lex_state = 411},
  [37] = {.lex_state = 411},
  [38] = {.lex_state = 411},
  [39] = {.lex_state = 411},
  [40] = {.lex_state = 411},
  [41] = {.lex_state = 411},
  [42] = {.lex_state = 411},
  [43] = {.lex_state = 411},
  [44] = {.lex_state = 411},
  [45] = {.lex_state = 411},
  [46] = {.lex_state = 411},
  [47] = {.lex_state = 411},
  [48] = {.lex_state = 411},
  [49] = {.lex_state = 411},
  [50] = {.lex_state = 411},
  [51] = {.lex_state = 411},
  [52] = {.lex_state = 411},
  [53] = {.lex_state = 411},
  [54] = {.lex_state = 411},
  [55] = {.lex_state = 411},
  [56] = {.lex_state = 411},
  [57] = {.lex_state = 29},
  [58] = {.lex_state = 411},
  [59] = {.lex_state = 410},
  [60] = {.lex_state = 410},
  [61] = {.lex_state = 410},
  [62] = {.lex_state = 410},
  [63] = {.lex_state = 410},
  [64] = {.lex_state = 410},
  [65] = {.lex_state = 410},
  [66] = {.lex_state = 410},
  [67] = {.lex_state = 410},
  [68] = {.lex_state = 410},
  [69] = {.lex_state = 410},
  [70] = {.lex_state = 410},
  [71] = {.lex_state = 410},
  [72] = {.lex_state = 411},
  [73] = {.lex_state = 411},
  [74] = {.lex_state = 410},
  [75] = {.lex_state = 410},
  [76] = {.lex_state = 410},
  [77] = {.lex_state = 411},
  [78] = {.lex_state = 410},
  [79] = {.lex_state = 410},
  [80] = {.lex_state = 410},
  [81] = {.lex_state = 410},
  [82] = {.lex_state = 410},
  [83] = {.lex_state = 410},
  [84] = {.lex_state = 410},
  [85] = {.lex_state = 410},
  [86] = {.lex_state = 410},
  [87] = {.lex_state = 410},
  [88] = {.lex_state = 410},
  [89] = {.lex_state = 410},
  [90] = {.lex_state = 410},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 410},
  [93] = {.lex_state = 411},
  [94] = {.lex_state = 410},
  [95] = {.lex_state = 410},
  [96] = {.lex_state = 410},
  [97] = {.lex_state = 410},
  [98] = {.lex_state = 411},
  [99] = {.lex_state = 410},
  [100] = {.lex_state = 411},
  [101] = {.lex_state = 411},
  [102] = {.lex_state = 410},
  [103] = {.lex_state = 410},
  [104] = {.lex_state = 410},
  [105] = {.lex_state = 411},
  [106] = {.lex_state = 410},
  [107] = {.lex_state = 410},
  [108] = {.lex_state = 410},
  [109] = {.lex_state = 410},
  [110] = {.lex_state = 410},
  [111] = {.lex_state = 410},
  [112] = {.lex_state = 410},
  [113] = {.lex_state = 410},
  [114] = {.lex_state = 410},
  [115] = {.lex_state = 411},
  [116] = {.lex_state = 411},
  [117] = {.lex_state = 411},
  [118] = {.lex_state = 411},
  [119] = {.lex_state = 411},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 411},
  [122] = {.lex_state = 411},
  [123] = {.lex_state = 410},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 410},
  [126] = {.lex_state = 410},
  [127] = {.lex_state = 411},
  [128] = {.lex_state = 411},
  [129] = {.lex_state = 411},
  [130] = {.lex_state = 411},
  [131] = {.lex_state = 411},
  [132] = {.lex_state = 411},
  [133] = {.lex_state = 410},
  [134] = {.lex_state = 411},
  [135] = {.lex_state = 411},
  [136] = {.lex_state = 411},
  [137] = {.lex_state = 411},
  [138] = {.lex_state = 411},
  [139] = {.lex_state = 411},
  [140] = {.lex_state = 411},
  [141] = {.lex_state = 411},
  [142] = {.lex_state = 411},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 411},
  [145] = {.lex_state = 411},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 411},
  [148] = {.lex_state = 411},
  [149] = {.lex_state = 410},
  [150] = {.lex_state = 411},
  [151] = {.lex_state = 410},
  [152] = {.lex_state = 410},
  [153] = {.lex_state = 411},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 411},
  [157] = {.lex_state = 411},
  [158] = {.lex_state = 411},
  [159] = {.lex_state = 411},
  [160] = {.lex_state = 410},
  [161] = {.lex_state = 411},
  [162] = {.lex_state = 411},
  [163] = {.lex_state = 411},
  [164] = {.lex_state = 411},
  [165] = {.lex_state = 411},
  [166] = {.lex_state = 411},
  [167] = {.lex_state = 411},
  [168] = {.lex_state = 411},
  [169] = {.lex_state = 411},
  [170] = {.lex_state = 411},
  [171] = {.lex_state = 411},
  [172] = {.lex_state = 411},
  [173] = {.lex_state = 411},
  [174] = {.lex_state = 411},
  [175] = {.lex_state = 410},
  [176] = {.lex_state = 411},
  [177] = {.lex_state = 410},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 410},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 410},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 409},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 409},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 409},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 11},
  [196] = {.lex_state = 11},
  [197] = {.lex_state = 11},
  [198] = {.lex_state = 11},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 11},
  [201] = {.lex_state = 11},
  [202] = {.lex_state = 11},
  [203] = {.lex_state = 11},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_multiline_string] = ACTIONS(1),
    [sym_named_variable] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_vendored_dirs] = ACTIONS(1),
    [anon_sym_ocamllex] = ACTIONS(1),
    [anon_sym_ocamlyacc] = ACTIONS(1),
    [anon_sym_include_subdirs] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_data_only_dirs] = ACTIONS(1),
    [anon_sym_cram] = ACTIONS(1),
    [anon_sym_toplevel] = ACTIONS(1),
    [anon_sym_install] = ACTIONS(1),
    [anon_sym_documentation] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_subdir] = ACTIONS(1),
    [anon_sym_executable] = ACTIONS(1),
    [anon_sym_public_name] = ACTIONS(1),
    [anon_sym_libraries] = ACTIONS(1),
    [anon_sym_modules] = ACTIONS(1),
    [anon_sym_enabled_if] = ACTIONS(1),
    [anon_sym_re_export] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_target] = ACTIONS(1),
    [anon_sym_targets] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_fallback] = ACTIONS(1),
    [anon_sym_locks] = ACTIONS(1),
    [anon_sym_deps] = ACTIONS(1),
    [anon_sym_universe] = ACTIONS(1),
    [anon_sym_sandbox] = ACTIONS(1),
    [anon_sym_alias_rec] = ACTIONS(1),
    [anon_sym_source_tree] = ACTIONS(1),
    [anon_sym_glob_files] = ACTIONS(1),
    [anon_sym_dir] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_promote] = ACTIONS(1),
    [anon_sym_promote_DASHinto] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_into] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_bash] = ACTIONS(1),
    [anon_sym_cat] = ACTIONS(1),
    [anon_sym_cmp] = ACTIONS(1),
    [anon_sym_chdir] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_copy_POUND] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [anon_sym_diff_QMARK] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
    [anon_sym_ignore_DASHstdout] = ACTIONS(1),
    [anon_sym_no_DASHinfer] = ACTIONS(1),
    [anon_sym_pipe_DASHoutputs] = ACTIONS(1),
    [anon_sym_progn] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_setenv] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_with_DASHoutputs_DASHto] = ACTIONS(1),
    [anon_sym_with_DASHstderr_DASHto] = ACTIONS(1),
    [anon_sym_with_DASHstdout_DASHto] = ACTIONS(1),
    [anon_sym_write_DASHfile] = ACTIONS(1),
    [anon_sym_library] = ACTIONS(1),
    [anon_sym_synopsis] = ACTIONS(1),
    [anon_sym_instrumentation] = ACTIONS(1),
    [anon_sym_wrapped] = ACTIONS(1),
    [anon_sym_transition] = ACTIONS(1),
    [anon_sym_kind] = ACTIONS(1),
    [anon_sym_ppx_DOTdriver] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(234),
    [sym_ocaml_syntax] = STATE(210),
    [sym_sexp] = STATE(168),
    [sym__atom_or_qs] = STATE(98),
    [sym_quoted_string] = STATE(98),
    [sym__list] = STATE(98),
    [sym_stanza] = STATE(11),
    [sym__stanza_alias] = STATE(168),
    [sym__stanza_subdir] = STATE(168),
    [sym__stanza_executable] = STATE(168),
    [sym__stanza_rule] = STATE(168),
    [sym__stanza_library] = STATE(168),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_multiline_string] = ACTIONS(11),
    [sym__atom] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_alias,
    ACTIONS(17), 1,
      anon_sym_action,
    ACTIONS(19), 1,
      anon_sym_enabled_if,
    ACTIONS(21), 1,
      anon_sym_mode,
    ACTIONS(23), 1,
      anon_sym_target,
    ACTIONS(25), 1,
      anon_sym_targets,
    ACTIONS(27), 1,
      anon_sym_package,
    ACTIONS(29), 1,
      anon_sym_fallback,
    ACTIONS(31), 1,
      anon_sym_locks,
    ACTIONS(33), 1,
      anon_sym_deps,
    ACTIONS(37), 1,
      anon_sym_cat,
    ACTIONS(41), 1,
      anon_sym_chdir,
    ACTIONS(43), 1,
      anon_sym_copy,
    ACTIONS(45), 1,
      anon_sym_copy_POUND,
    ACTIONS(47), 1,
      anon_sym_diff,
    ACTIONS(49), 1,
      anon_sym_echo,
    ACTIONS(53), 1,
      anon_sym_pipe_DASHoutputs,
    ACTIONS(55), 1,
      anon_sym_progn,
    ACTIONS(57), 1,
      anon_sym_run,
    ACTIONS(59), 1,
      anon_sym_setenv,
    ACTIONS(63), 1,
      anon_sym_write_DASHfile,
    ACTIONS(35), 2,
      anon_sym_bash,
      anon_sym_system,
    ACTIONS(39), 2,
      anon_sym_cmp,
      anon_sym_diff_QMARK,
    ACTIONS(51), 2,
      anon_sym_ignore_DASHstdout,
      anon_sym_no_DASHinfer,
    ACTIONS(61), 3,
      anon_sym_with_DASHoutputs_DASHto,
      anon_sym_with_DASHstderr_DASHto,
      anon_sym_with_DASHstdout_DASHto,
  [84] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_multiline_string,
    ACTIONS(69), 1,
      sym__atom,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_data_only_dirs,
    ACTIONS(81), 1,
      anon_sym_alias,
    ACTIONS(83), 1,
      anon_sym_subdir,
    ACTIONS(85), 1,
      anon_sym_executable,
    ACTIONS(87), 1,
      anon_sym_rule,
    ACTIONS(89), 1,
      anon_sym_library,
    ACTIONS(77), 2,
      anon_sym_ocamllex,
      anon_sym_ocamlyacc,
    STATE(46), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    ACTIONS(75), 9,
      anon_sym_vendored_dirs,
      anon_sym_include_subdirs,
      anon_sym_test,
      anon_sym_cram,
      anon_sym_dirs,
      anon_sym_toplevel,
      anon_sym_install,
      anon_sym_documentation,
      anon_sym_env,
  [145] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_multiline_string,
    ACTIONS(69), 1,
      sym__atom,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_data_only_dirs,
    ACTIONS(99), 1,
      anon_sym_alias,
    ACTIONS(101), 1,
      anon_sym_subdir,
    ACTIONS(103), 1,
      anon_sym_executable,
    ACTIONS(105), 1,
      anon_sym_rule,
    ACTIONS(107), 1,
      anon_sym_library,
    ACTIONS(95), 2,
      anon_sym_ocamllex,
      anon_sym_ocamlyacc,
    STATE(34), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    ACTIONS(93), 9,
      anon_sym_vendored_dirs,
      anon_sym_include_subdirs,
      anon_sym_test,
      anon_sym_cram,
      anon_sym_dirs,
      anon_sym_toplevel,
      anon_sym_install,
      anon_sym_documentation,
      anon_sym_env,
  [206] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_cat,
    ACTIONS(41), 1,
      anon_sym_chdir,
    ACTIONS(43), 1,
      anon_sym_copy,
    ACTIONS(45), 1,
      anon_sym_copy_POUND,
    ACTIONS(47), 1,
      anon_sym_diff,
    ACTIONS(49), 1,
      anon_sym_echo,
    ACTIONS(53), 1,
      anon_sym_pipe_DASHoutputs,
    ACTIONS(55), 1,
      anon_sym_progn,
    ACTIONS(57), 1,
      anon_sym_run,
    ACTIONS(59), 1,
      anon_sym_setenv,
    ACTIONS(63), 1,
      anon_sym_write_DASHfile,
    ACTIONS(35), 2,
      anon_sym_bash,
      anon_sym_system,
    ACTIONS(39), 2,
      anon_sym_cmp,
      anon_sym_diff_QMARK,
    ACTIONS(51), 2,
      anon_sym_ignore_DASHstdout,
      anon_sym_no_DASHinfer,
    ACTIONS(61), 3,
      anon_sym_with_DASHoutputs_DASHto,
      anon_sym_with_DASHstderr_DASHto,
      anon_sym_with_DASHstdout_DASHto,
  [260] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_multiline_string,
    ACTIONS(69), 1,
      sym__atom,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(109), 1,
      anon_sym_name,
    ACTIONS(111), 1,
      anon_sym_public_name,
    ACTIONS(113), 1,
      anon_sym_libraries,
    ACTIONS(115), 1,
      anon_sym_modules,
    ACTIONS(117), 1,
      anon_sym_enabled_if,
    ACTIONS(119), 1,
      anon_sym_synopsis,
    ACTIONS(123), 1,
      anon_sym_wrapped,
    ACTIONS(125), 1,
      anon_sym_ppx_DOTdriver,
    ACTIONS(121), 2,
      anon_sym_instrumentation,
      anon_sym_kind,
    STATE(34), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [316] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 2,
      sym_multiline_string,
      sym__atom,
    STATE(7), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(98), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    STATE(168), 6,
      sym_sexp,
      sym__stanza_alias,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [350] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 2,
      sym_multiline_string,
      sym__atom,
    STATE(8), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    STATE(164), 6,
      sym_sexp,
      sym__stanza_alias,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [384] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(8), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    STATE(164), 6,
      sym_sexp,
      sym__stanza_alias,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [418] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(8), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    STATE(164), 6,
      sym_sexp,
      sym__stanza_alias,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [452] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym__atom,
    STATE(7), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(98), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    STATE(168), 6,
      sym_sexp,
      sym__stanza_alias,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [486] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_multiline_string,
    ACTIONS(69), 1,
      sym__atom,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(109), 1,
      anon_sym_name,
    ACTIONS(111), 1,
      anon_sym_public_name,
    ACTIONS(113), 1,
      anon_sym_libraries,
    ACTIONS(115), 1,
      anon_sym_modules,
    ACTIONS(117), 1,
      anon_sym_enabled_if,
    STATE(34), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [529] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(9), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    STATE(164), 6,
      sym_sexp,
      sym__stanza_alias,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [560] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(10), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
    STATE(164), 6,
      sym_sexp,
      sym__stanza_alias,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [591] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_multiline_string,
    ACTIONS(69), 1,
      sym__atom,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      anon_sym_name,
    ACTIONS(159), 1,
      anon_sym_action,
    ACTIONS(161), 1,
      anon_sym_deps,
    STATE(34), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [628] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(20), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [655] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(25), 3,
      sym_sexp,
      sym__deps_field,
      aux_sym__stanza_alias_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [682] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(26), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [709] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(32), 3,
      sym_sexp,
      sym__deps_field,
      aux_sym__stanza_alias_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [736] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(22), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [763] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(28), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [790] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    ACTIONS(184), 2,
      sym_multiline_string,
      sym__atom,
    STATE(22), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [817] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(22), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [844] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_file_name,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(33), 3,
      sym_file_name_target,
      sym__target,
      aux_sym__stanza_rule_repeat1,
  [873] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(31), 3,
      sym_sexp,
      sym__deps_field,
      aux_sym__stanza_alias_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [900] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(29), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [927] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_file_name,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(24), 3,
      sym_file_name_target,
      sym__target,
      aux_sym__stanza_rule_repeat1,
  [956] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(29), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [983] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 2,
      sym_multiline_string,
      sym__atom,
    STATE(29), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1010] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(23), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1037] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    ACTIONS(224), 2,
      sym_multiline_string,
      sym__atom,
    STATE(31), 3,
      sym_sexp,
      sym__deps_field,
      aux_sym__stanza_alias_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1064] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(31), 3,
      sym_sexp,
      sym__deps_field,
      aux_sym__stanza_alias_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1091] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_file_name,
    ACTIONS(237), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(33), 3,
      sym_file_name_target,
      sym__target,
      aux_sym__stanza_rule_repeat1,
  [1120] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(47), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1146] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 2,
      sym_multiline_string,
      sym__atom,
    STATE(139), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(50), 3,
      sym__lib_dep,
      sym_library_name,
      aux_sym__field_buildable_repeat1,
  [1172] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(34), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1198] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    ACTIONS(256), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(37), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [1224] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(49), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1250] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(47), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1276] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(47), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1302] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(212), 1,
      sym_sexps1,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(39), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1328] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(37), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [1354] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    STATE(218), 1,
      sym__modules_osl,
    ACTIONS(274), 2,
      sym_multiline_string,
      sym__atom,
    STATE(60), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
    STATE(177), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1382] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(37), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [1408] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 2,
      sym_multiline_string,
      sym__atom,
    STATE(139), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(45), 3,
      sym__lib_dep,
      sym_library_name,
      aux_sym__field_buildable_repeat1,
  [1434] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(47), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1460] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    ACTIONS(296), 2,
      sym_multiline_string,
      sym__atom,
    STATE(47), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1486] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      sym__modules_osl,
    ACTIONS(274), 2,
      sym_multiline_string,
      sym__atom,
    STATE(60), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
    STATE(177), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1514] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(47), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1540] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 2,
      sym_multiline_string,
      sym__atom,
    STATE(139), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(45), 3,
      sym__lib_dep,
      sym_library_name,
      aux_sym__field_buildable_repeat1,
  [1566] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(215), 1,
      sym_sexps1,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(39), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1592] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(40), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1618] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym__atom,
    STATE(46), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(165), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1644] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    ACTIONS(312), 2,
      sym_multiline_string,
      sym__atom,
    STATE(58), 2,
      sym_blang,
      aux_sym_blang_repeat1,
    STATE(134), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1669] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(42), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [1692] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(44), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [1715] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_named_variable,
    ACTIONS(320), 1,
      anon_sym_alias,
    ACTIONS(322), 1,
      anon_sym_package,
    ACTIONS(324), 1,
      anon_sym_universe,
    ACTIONS(328), 1,
      anon_sym_alias_rec,
    ACTIONS(330), 1,
      anon_sym_source_tree,
    ACTIONS(332), 1,
      anon_sym_glob_files,
    ACTIONS(326), 2,
      anon_sym_sandbox,
      anon_sym_env_var,
  [1744] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    ACTIONS(337), 2,
      sym_multiline_string,
      sym__atom,
    STATE(58), 2,
      sym_blang,
      aux_sym_blang_repeat1,
    STATE(134), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1769] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(71), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1791] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(274), 2,
      sym_multiline_string,
      sym__atom,
    STATE(65), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
    STATE(177), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1813] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    ACTIONS(274), 2,
      sym_multiline_string,
      sym__atom,
    STATE(68), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
    STATE(177), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1835] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(350), 2,
      sym_multiline_string,
      sym__atom,
    STATE(62), 2,
      sym_lock_name,
      aux_sym__stanza_rule_repeat3,
    STATE(175), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1857] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(358), 2,
      sym_multiline_string,
      sym__atom,
    STATE(63), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1879] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 2,
      sym_multiline_string,
      sym__atom,
    STATE(62), 2,
      sym_lock_name,
      aux_sym__stanza_rule_repeat3,
    STATE(175), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1901] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 2,
      sym_multiline_string,
      sym__atom,
    STATE(65), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
    STATE(177), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1923] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(373), 2,
      sym_multiline_string,
      sym__atom,
    STATE(74), 2,
      sym_alias_name,
      aux_sym__stanza_rule_repeat2,
    STATE(183), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(63), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1967] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(274), 2,
      sym_multiline_string,
      sym__atom,
    STATE(65), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
    STATE(177), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [1989] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    ACTIONS(274), 2,
      sym_multiline_string,
      sym__atom,
    STATE(70), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
    STATE(177), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2011] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(274), 2,
      sym_multiline_string,
      sym__atom,
    STATE(65), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
    STATE(177), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2033] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(63), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2055] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 2,
      sym_multiline_string,
      sym__atom,
    STATE(54), 2,
      sym_blang,
      aux_sym_blang_repeat1,
    STATE(134), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2077] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    STATE(215), 1,
      sym_sexp,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym__atom,
    STATE(98), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2099] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(380), 2,
      sym_multiline_string,
      sym__atom,
    STATE(74), 2,
      sym_alias_name,
      aux_sym__stanza_rule_repeat2,
    STATE(183), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2121] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(67), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2143] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      sym_file_name_target,
    STATE(145), 1,
      sym_file_name,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2164] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(218), 1,
      sym_blang,
    ACTIONS(312), 2,
      sym_multiline_string,
      sym__atom,
    STATE(134), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2185] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      sym_file_name,
    STATE(226), 1,
      sym_file_name_dep,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2206] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_file_name_dep,
    STATE(180), 1,
      sym_file_name,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2227] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 2,
      sym_multiline_string,
      sym__atom,
    STATE(84), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [2246] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym_file_name_dep,
    STATE(180), 1,
      sym_file_name,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2267] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 2,
      sym_multiline_string,
      sym__atom,
    STATE(84), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [2286] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_file_name_dep,
    STATE(180), 1,
      sym_file_name,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(392), 2,
      sym_multiline_string,
      sym__atom,
    STATE(84), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [2326] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      sym_file_name,
    STATE(198), 1,
      sym_file_name_target,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2347] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      sym_file_name,
    STATE(232), 1,
      sym_file_name_target,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2368] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    ACTIONS(397), 2,
      sym_multiline_string,
      sym__atom,
    STATE(82), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [2387] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 2,
      sym_multiline_string,
      sym__atom,
    STATE(84), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [2406] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      sym_file_name,
    STATE(231), 1,
      sym_file_name_target,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2427] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      sym_file_name,
    STATE(231), 1,
      sym_file_name_dep,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(72), 1,
      sym_blang_op,
    ACTIONS(401), 6,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [2463] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 2,
      sym_multiline_string,
      sym__atom,
    STATE(64), 2,
      sym_lock_name,
      aux_sym__stanza_rule_repeat3,
    STATE(175), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2482] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(213), 1,
      sym_blang,
    ACTIONS(312), 2,
      sym_multiline_string,
      sym__atom,
    STATE(134), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2503] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 2,
      sym_multiline_string,
      sym__atom,
    STATE(66), 2,
      sym_alias_name,
      aux_sym__stanza_rule_repeat2,
    STATE(183), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2522] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(218), 1,
      sym_public_name,
    ACTIONS(403), 2,
      sym_multiline_string,
      sym__atom,
    STATE(217), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 2,
      sym_multiline_string,
      sym__atom,
    STATE(88), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [2556] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      sym_file_name,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2588] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(213), 1,
      sym_package_name,
    ACTIONS(411), 2,
      sym_multiline_string,
      sym__atom,
    STATE(222), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2634] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_file_name,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2652] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(226), 1,
      sym_shell_command,
    ACTIONS(421), 2,
      sym_multiline_string,
      sym__atom,
    STATE(233), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(235), 1,
      sym_file_name,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(423), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2702] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      sym_library_name,
    ACTIONS(247), 2,
      sym_multiline_string,
      sym__atom,
    STATE(139), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2720] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(218), 1,
      sym_module_name,
    ACTIONS(274), 2,
      sym_multiline_string,
      sym__atom,
    STATE(177), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 2,
      sym_multiline_string,
      sym__atom,
    STATE(80), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [2754] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(219), 1,
      sym_alias_name,
    ACTIONS(373), 2,
      sym_multiline_string,
      sym__atom,
    STATE(183), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2772] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(216), 1,
      sym_file_name,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2790] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(216), 1,
      sym_package_name,
    ACTIONS(411), 2,
      sym_multiline_string,
      sym__atom,
    STATE(222), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2808] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(216), 1,
      sym_alias_name,
    ACTIONS(373), 2,
      sym_multiline_string,
      sym__atom,
    STATE(183), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_file_name,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2844] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      sym_file_name,
    ACTIONS(194), 2,
      sym_multiline_string,
      sym__atom,
    STATE(140), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DQUOTE,
    ACTIONS(439), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(445), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [2928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(124), 3,
      sym__deps_field,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [2943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_DQUOTE,
    ACTIONS(459), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 2,
      sym_multiline_string,
      sym__atom,
    STATE(215), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(124), 3,
      sym__deps_field,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [2999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(468), 2,
      sym_multiline_string,
      sym__atom,
    STATE(200), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(470), 2,
      sym_multiline_string,
      sym__atom,
    STATE(231), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_DQUOTE,
    ACTIONS(476), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(482), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(484), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_DQUOTE,
    ACTIONS(490), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(492), 2,
      sym_multiline_string,
      sym__atom,
    STATE(216), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
    ACTIONS(506), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_DQUOTE,
    ACTIONS(516), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_DQUOTE,
    ACTIONS(522), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_DQUOTE,
    ACTIONS(528), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(120), 3,
      sym__deps_field,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [3254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_DQUOTE,
    ACTIONS(534), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(155), 3,
      sym__deps_field,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [3295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(538), 2,
      sym_multiline_string,
      sym__atom,
    STATE(125), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(544), 2,
      sym_multiline_string,
      sym__atom,
    STATE(229), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(546), 2,
      sym_multiline_string,
      sym__atom,
    STATE(213), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DQUOTE,
    ACTIONS(550), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3392] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__bool,
    ACTIONS(461), 2,
      anon_sym_true,
      anon_sym_false,
  [3409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(124), 3,
      sym__deps_field,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [3424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_DQUOTE,
    ACTIONS(459), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_DQUOTE,
    ACTIONS(560), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_DQUOTE,
    ACTIONS(564), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(566), 2,
      sym_multiline_string,
      sym__atom,
    STATE(225), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_DQUOTE,
    ACTIONS(490), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_DQUOTE,
    ACTIONS(574), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_DQUOTE,
    ACTIONS(578), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_DQUOTE,
    ACTIONS(578), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(423), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_DQUOTE,
    ACTIONS(522), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
    ACTIONS(506), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(484), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_DQUOTE,
    ACTIONS(476), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(445), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_DQUOTE,
    ACTIONS(582), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_RPAREN,
  [3685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(586), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [3697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    ACTIONS(590), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_RPAREN,
  [3709] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    STATE(213), 1,
      sym__rule_mode,
    ACTIONS(546), 2,
      anon_sym_fallback,
      anon_sym_promote,
  [3723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      sym__bool,
    ACTIONS(546), 2,
      anon_sym_true,
      anon_sym_false,
  [3737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_DQUOTE,
    ACTIONS(596), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_RPAREN,
  [3749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(184), 2,
      sym_action,
      aux_sym_action_repeat1,
  [3763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    STATE(181), 2,
      sym_action,
      aux_sym_action_repeat1,
  [3777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_DQUOTE,
    ACTIONS(604), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_RPAREN,
  [3789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    STATE(184), 2,
      sym_action,
      aux_sym_action_repeat1,
  [3803] = 4,
    ACTIONS(611), 1,
      anon_sym_DQUOTE,
    ACTIONS(613), 1,
      sym__quoted_string_char,
    ACTIONS(615), 1,
      sym_comment,
    STATE(187), 1,
      aux_sym_quoted_string_repeat1,
  [3816] = 4,
    ACTIONS(615), 1,
      sym_comment,
    ACTIONS(617), 1,
      ts_builtin_sym_end,
    ACTIONS(619), 1,
      aux_sym_ocaml_syntax_token1,
    STATE(188), 1,
      aux_sym_ocaml_syntax_repeat1,
  [3829] = 4,
    ACTIONS(615), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DQUOTE,
    ACTIONS(623), 1,
      sym__quoted_string_char,
    STATE(189), 1,
      aux_sym_quoted_string_repeat1,
  [3842] = 4,
    ACTIONS(615), 1,
      sym_comment,
    ACTIONS(625), 1,
      ts_builtin_sym_end,
    ACTIONS(627), 1,
      aux_sym_ocaml_syntax_token1,
    STATE(188), 1,
      aux_sym_ocaml_syntax_repeat1,
  [3855] = 4,
    ACTIONS(615), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__quoted_string_char,
    STATE(189), 1,
      aux_sym_quoted_string_repeat1,
  [3868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(181), 2,
      sym_action,
      aux_sym_action_repeat1,
  [3879] = 4,
    ACTIONS(615), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym__quoted_string_char,
    ACTIONS(635), 1,
      anon_sym_DQUOTE,
    STATE(189), 1,
      aux_sym_quoted_string_repeat1,
  [3892] = 4,
    ACTIONS(615), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_DQUOTE,
    ACTIONS(639), 1,
      sym__quoted_string_char,
    STATE(191), 1,
      aux_sym_quoted_string_repeat1,
  [3905] = 4,
    ACTIONS(615), 1,
      sym_comment,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    ACTIONS(643), 1,
      aux_sym_ocaml_syntax_token1,
    STATE(186), 1,
      aux_sym_ocaml_syntax_repeat1,
  [3918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_LPAREN,
    STATE(235), 1,
      sym__rule_mode_promote_field,
  [3936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(219), 1,
      sym_action,
  [3954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(231), 1,
      sym_action,
  [3964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(213), 1,
      sym_action,
  [3974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(230), 1,
      sym_action,
  [3984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(226), 1,
      sym_action,
  [4002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_re_export,
    ACTIONS(659), 1,
      anon_sym_select,
  [4028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_promote,
    ACTIONS(663), 1,
      anon_sym_promote_DASHinto,
  [4038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_only,
    ACTIONS(669), 1,
      anon_sym_into,
  [4056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
  [4063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [4070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_dir,
  [4077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
  [4084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
  [4091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
  [4098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
  [4105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
  [4112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
  [4119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
  [4126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
  [4133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
  [4140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
  [4147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
  [4154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
  [4161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
  [4168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
  [4175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
  [4182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
  [4189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_transition,
  [4196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
  [4203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
  [4210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
  [4217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
  [4224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [4231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      ts_builtin_sym_end,
  [4238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 84,
  [SMALL_STATE(4)] = 145,
  [SMALL_STATE(5)] = 206,
  [SMALL_STATE(6)] = 260,
  [SMALL_STATE(7)] = 316,
  [SMALL_STATE(8)] = 350,
  [SMALL_STATE(9)] = 384,
  [SMALL_STATE(10)] = 418,
  [SMALL_STATE(11)] = 452,
  [SMALL_STATE(12)] = 486,
  [SMALL_STATE(13)] = 529,
  [SMALL_STATE(14)] = 560,
  [SMALL_STATE(15)] = 591,
  [SMALL_STATE(16)] = 628,
  [SMALL_STATE(17)] = 655,
  [SMALL_STATE(18)] = 682,
  [SMALL_STATE(19)] = 709,
  [SMALL_STATE(20)] = 736,
  [SMALL_STATE(21)] = 763,
  [SMALL_STATE(22)] = 790,
  [SMALL_STATE(23)] = 817,
  [SMALL_STATE(24)] = 844,
  [SMALL_STATE(25)] = 873,
  [SMALL_STATE(26)] = 900,
  [SMALL_STATE(27)] = 927,
  [SMALL_STATE(28)] = 956,
  [SMALL_STATE(29)] = 983,
  [SMALL_STATE(30)] = 1010,
  [SMALL_STATE(31)] = 1037,
  [SMALL_STATE(32)] = 1064,
  [SMALL_STATE(33)] = 1091,
  [SMALL_STATE(34)] = 1120,
  [SMALL_STATE(35)] = 1146,
  [SMALL_STATE(36)] = 1172,
  [SMALL_STATE(37)] = 1198,
  [SMALL_STATE(38)] = 1224,
  [SMALL_STATE(39)] = 1250,
  [SMALL_STATE(40)] = 1276,
  [SMALL_STATE(41)] = 1302,
  [SMALL_STATE(42)] = 1328,
  [SMALL_STATE(43)] = 1354,
  [SMALL_STATE(44)] = 1382,
  [SMALL_STATE(45)] = 1408,
  [SMALL_STATE(46)] = 1434,
  [SMALL_STATE(47)] = 1460,
  [SMALL_STATE(48)] = 1486,
  [SMALL_STATE(49)] = 1514,
  [SMALL_STATE(50)] = 1540,
  [SMALL_STATE(51)] = 1566,
  [SMALL_STATE(52)] = 1592,
  [SMALL_STATE(53)] = 1618,
  [SMALL_STATE(54)] = 1644,
  [SMALL_STATE(55)] = 1669,
  [SMALL_STATE(56)] = 1692,
  [SMALL_STATE(57)] = 1715,
  [SMALL_STATE(58)] = 1744,
  [SMALL_STATE(59)] = 1769,
  [SMALL_STATE(60)] = 1791,
  [SMALL_STATE(61)] = 1813,
  [SMALL_STATE(62)] = 1835,
  [SMALL_STATE(63)] = 1857,
  [SMALL_STATE(64)] = 1879,
  [SMALL_STATE(65)] = 1901,
  [SMALL_STATE(66)] = 1923,
  [SMALL_STATE(67)] = 1945,
  [SMALL_STATE(68)] = 1967,
  [SMALL_STATE(69)] = 1989,
  [SMALL_STATE(70)] = 2011,
  [SMALL_STATE(71)] = 2033,
  [SMALL_STATE(72)] = 2055,
  [SMALL_STATE(73)] = 2077,
  [SMALL_STATE(74)] = 2099,
  [SMALL_STATE(75)] = 2121,
  [SMALL_STATE(76)] = 2143,
  [SMALL_STATE(77)] = 2164,
  [SMALL_STATE(78)] = 2185,
  [SMALL_STATE(79)] = 2206,
  [SMALL_STATE(80)] = 2227,
  [SMALL_STATE(81)] = 2246,
  [SMALL_STATE(82)] = 2267,
  [SMALL_STATE(83)] = 2286,
  [SMALL_STATE(84)] = 2307,
  [SMALL_STATE(85)] = 2326,
  [SMALL_STATE(86)] = 2347,
  [SMALL_STATE(87)] = 2368,
  [SMALL_STATE(88)] = 2387,
  [SMALL_STATE(89)] = 2406,
  [SMALL_STATE(90)] = 2427,
  [SMALL_STATE(91)] = 2448,
  [SMALL_STATE(92)] = 2463,
  [SMALL_STATE(93)] = 2482,
  [SMALL_STATE(94)] = 2503,
  [SMALL_STATE(95)] = 2522,
  [SMALL_STATE(96)] = 2540,
  [SMALL_STATE(97)] = 2556,
  [SMALL_STATE(98)] = 2574,
  [SMALL_STATE(99)] = 2588,
  [SMALL_STATE(100)] = 2606,
  [SMALL_STATE(101)] = 2620,
  [SMALL_STATE(102)] = 2634,
  [SMALL_STATE(103)] = 2652,
  [SMALL_STATE(104)] = 2670,
  [SMALL_STATE(105)] = 2688,
  [SMALL_STATE(106)] = 2702,
  [SMALL_STATE(107)] = 2720,
  [SMALL_STATE(108)] = 2738,
  [SMALL_STATE(109)] = 2754,
  [SMALL_STATE(110)] = 2772,
  [SMALL_STATE(111)] = 2790,
  [SMALL_STATE(112)] = 2808,
  [SMALL_STATE(113)] = 2826,
  [SMALL_STATE(114)] = 2844,
  [SMALL_STATE(115)] = 2862,
  [SMALL_STATE(116)] = 2876,
  [SMALL_STATE(117)] = 2889,
  [SMALL_STATE(118)] = 2902,
  [SMALL_STATE(119)] = 2915,
  [SMALL_STATE(120)] = 2928,
  [SMALL_STATE(121)] = 2943,
  [SMALL_STATE(122)] = 2956,
  [SMALL_STATE(123)] = 2969,
  [SMALL_STATE(124)] = 2984,
  [SMALL_STATE(125)] = 2999,
  [SMALL_STATE(126)] = 3014,
  [SMALL_STATE(127)] = 3029,
  [SMALL_STATE(128)] = 3042,
  [SMALL_STATE(129)] = 3055,
  [SMALL_STATE(130)] = 3068,
  [SMALL_STATE(131)] = 3081,
  [SMALL_STATE(132)] = 3094,
  [SMALL_STATE(133)] = 3107,
  [SMALL_STATE(134)] = 3122,
  [SMALL_STATE(135)] = 3135,
  [SMALL_STATE(136)] = 3148,
  [SMALL_STATE(137)] = 3161,
  [SMALL_STATE(138)] = 3174,
  [SMALL_STATE(139)] = 3187,
  [SMALL_STATE(140)] = 3200,
  [SMALL_STATE(141)] = 3213,
  [SMALL_STATE(142)] = 3226,
  [SMALL_STATE(143)] = 3239,
  [SMALL_STATE(144)] = 3254,
  [SMALL_STATE(145)] = 3267,
  [SMALL_STATE(146)] = 3280,
  [SMALL_STATE(147)] = 3295,
  [SMALL_STATE(148)] = 3308,
  [SMALL_STATE(149)] = 3321,
  [SMALL_STATE(150)] = 3336,
  [SMALL_STATE(151)] = 3349,
  [SMALL_STATE(152)] = 3364,
  [SMALL_STATE(153)] = 3379,
  [SMALL_STATE(154)] = 3392,
  [SMALL_STATE(155)] = 3409,
  [SMALL_STATE(156)] = 3424,
  [SMALL_STATE(157)] = 3437,
  [SMALL_STATE(158)] = 3450,
  [SMALL_STATE(159)] = 3463,
  [SMALL_STATE(160)] = 3476,
  [SMALL_STATE(161)] = 3491,
  [SMALL_STATE(162)] = 3504,
  [SMALL_STATE(163)] = 3517,
  [SMALL_STATE(164)] = 3530,
  [SMALL_STATE(165)] = 3543,
  [SMALL_STATE(166)] = 3556,
  [SMALL_STATE(167)] = 3569,
  [SMALL_STATE(168)] = 3582,
  [SMALL_STATE(169)] = 3595,
  [SMALL_STATE(170)] = 3608,
  [SMALL_STATE(171)] = 3621,
  [SMALL_STATE(172)] = 3634,
  [SMALL_STATE(173)] = 3647,
  [SMALL_STATE(174)] = 3660,
  [SMALL_STATE(175)] = 3673,
  [SMALL_STATE(176)] = 3685,
  [SMALL_STATE(177)] = 3697,
  [SMALL_STATE(178)] = 3709,
  [SMALL_STATE(179)] = 3723,
  [SMALL_STATE(180)] = 3737,
  [SMALL_STATE(181)] = 3749,
  [SMALL_STATE(182)] = 3763,
  [SMALL_STATE(183)] = 3777,
  [SMALL_STATE(184)] = 3789,
  [SMALL_STATE(185)] = 3803,
  [SMALL_STATE(186)] = 3816,
  [SMALL_STATE(187)] = 3829,
  [SMALL_STATE(188)] = 3842,
  [SMALL_STATE(189)] = 3855,
  [SMALL_STATE(190)] = 3868,
  [SMALL_STATE(191)] = 3879,
  [SMALL_STATE(192)] = 3892,
  [SMALL_STATE(193)] = 3905,
  [SMALL_STATE(194)] = 3918,
  [SMALL_STATE(195)] = 3926,
  [SMALL_STATE(196)] = 3936,
  [SMALL_STATE(197)] = 3944,
  [SMALL_STATE(198)] = 3954,
  [SMALL_STATE(199)] = 3964,
  [SMALL_STATE(200)] = 3974,
  [SMALL_STATE(201)] = 3984,
  [SMALL_STATE(202)] = 3992,
  [SMALL_STATE(203)] = 4002,
  [SMALL_STATE(204)] = 4010,
  [SMALL_STATE(205)] = 4018,
  [SMALL_STATE(206)] = 4028,
  [SMALL_STATE(207)] = 4038,
  [SMALL_STATE(208)] = 4046,
  [SMALL_STATE(209)] = 4056,
  [SMALL_STATE(210)] = 4063,
  [SMALL_STATE(211)] = 4070,
  [SMALL_STATE(212)] = 4077,
  [SMALL_STATE(213)] = 4084,
  [SMALL_STATE(214)] = 4091,
  [SMALL_STATE(215)] = 4098,
  [SMALL_STATE(216)] = 4105,
  [SMALL_STATE(217)] = 4112,
  [SMALL_STATE(218)] = 4119,
  [SMALL_STATE(219)] = 4126,
  [SMALL_STATE(220)] = 4133,
  [SMALL_STATE(221)] = 4140,
  [SMALL_STATE(222)] = 4147,
  [SMALL_STATE(223)] = 4154,
  [SMALL_STATE(224)] = 4161,
  [SMALL_STATE(225)] = 4168,
  [SMALL_STATE(226)] = 4175,
  [SMALL_STATE(227)] = 4182,
  [SMALL_STATE(228)] = 4189,
  [SMALL_STATE(229)] = 4196,
  [SMALL_STATE(230)] = 4203,
  [SMALL_STATE(231)] = 4210,
  [SMALL_STATE(232)] = 4217,
  [SMALL_STATE(233)] = 4224,
  [SMALL_STATE(234)] = 4231,
  [SMALL_STATE(235)] = 4238,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 2), SHIFT_REPEAT(192),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2), SHIFT_REPEAT(165),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2), SHIFT_REPEAT(6),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_executable_repeat1, 2), SHIFT_REPEAT(192),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2), SHIFT_REPEAT(165),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2), SHIFT_REPEAT(12),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_alias_repeat1, 2), SHIFT_REPEAT(192),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_alias_repeat1, 2), SHIFT_REPEAT(165),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_alias_repeat1, 2), SHIFT_REPEAT(15),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_alias_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_rule_repeat1, 2), SHIFT_REPEAT(192),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2), SHIFT_REPEAT(140),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2), SHIFT_REPEAT(211),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__deps_field_repeat1, 2), SHIFT_REPEAT(192),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deps_field_repeat1, 2), SHIFT_REPEAT(140),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deps_field_repeat1, 2), SHIFT_REPEAT(57),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__deps_field_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexps1, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_buildable_repeat1, 2), SHIFT_REPEAT(192),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_buildable_repeat1, 2), SHIFT_REPEAT(139),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_buildable_repeat1, 2), SHIFT_REPEAT(205),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_buildable_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sexps1_repeat1, 2), SHIFT_REPEAT(192),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2), SHIFT_REPEAT(165),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2), SHIFT_REPEAT(36),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blang_repeat1, 2), SHIFT_REPEAT(192),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blang_repeat1, 2), SHIFT_REPEAT(134),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blang_repeat1, 2), SHIFT_REPEAT(91),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_blang_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 1),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_rule_repeat3, 2), SHIFT_REPEAT(185),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat3, 2), SHIFT_REPEAT(175),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat3, 2),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stanza_repeat2, 2), SHIFT_REPEAT(185),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stanza_repeat2, 2), SHIFT_REPEAT(140),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stanza_repeat2, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stanza_repeat1, 2), SHIFT_REPEAT(185),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stanza_repeat1, 2), SHIFT_REPEAT(177),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stanza_repeat1, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_rule_repeat2, 2), SHIFT_REPEAT(185),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat2, 2), SHIFT_REPEAT(183),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat2, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dep_repeat1, 2), SHIFT_REPEAT(185),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dep_repeat1, 2), SHIFT_REPEAT(84),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dep_repeat1, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_subdir, 5),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_subdir, 5),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dep, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dep, 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_library, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_library, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_executable, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executable, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_rule, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_rule, 4),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 2), SHIFT_REPEAT(2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_rule, 3),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_rule, 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_alias_repeat1, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_alias_repeat1, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executable, 3),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_executable, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_library, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_library, 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blang, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blang, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_alias, 4, .production_id = 1),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_alias, 4, .production_id = 1),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deps_field, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deps_field, 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_alias, 3, .production_id = 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_alias, 3, .production_id = 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_buildable, 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_buildable, 4),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library_name, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_name, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_name, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 3),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_buildable, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_buildable, 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_name_target, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name_target, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 4),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dep, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dep, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lib_dep, 4),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lib_dep, 4),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blang, 4),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blang, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__target, 4),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 4),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 7),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 7),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lock_name, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_name, 1),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blang_op, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blang_op, 1),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_name_dep, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name_dep, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_name, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 1),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(5),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ocaml_syntax, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ocaml_syntax_repeat1, 2),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ocaml_syntax_repeat1, 2), SHIFT_REPEAT(188),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(189),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ocaml_syntax, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 4, .production_id = 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 3, .production_id = 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_mode, 4, .production_id = 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_public_name, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_name, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_mode_promote_field, 4),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [709] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
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

TS_PUBLIC const TSLanguage *tree_sitter_dune() {
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
