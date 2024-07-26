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
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 4
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN = 1,
  aux_sym_ocaml_syntax_token1 = 2,
  anon_sym_DQUOTE = 3,
  sym_multiline_string = 4,
  sym__quoted_string_char = 5,
  sym_atom = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_comment = 9,
  anon_sym_vendored_dirs = 10,
  anon_sym_alias = 11,
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
  anon_sym_subdir = 23,
  anon_sym_executable = 24,
  anon_sym_name = 25,
  anon_sym_public_name = 26,
  anon_sym_libraries = 27,
  anon_sym_modules = 28,
  anon_sym_enabled_if = 29,
  anon_sym_re_export = 30,
  anon_sym_select = 31,
  anon_sym_rule = 32,
  anon_sym_mode = 33,
  anon_sym_target = 34,
  anon_sym_targets = 35,
  anon_sym_deps = 36,
  anon_sym_action = 37,
  anon_sym_package = 38,
  anon_sym_fallback = 39,
  anon_sym_locks = 40,
  anon_sym_dir = 41,
  anon_sym_true = 42,
  anon_sym_false = 43,
  anon_sym_EQ = 44,
  anon_sym_LT_GT = 45,
  anon_sym_GT = 46,
  anon_sym_LT_EQ = 47,
  anon_sym_or = 48,
  anon_sym_and = 49,
  anon_sym_bash = 50,
  anon_sym_cat = 51,
  anon_sym_chdir = 52,
  anon_sym_copy = 53,
  anon_sym_copy_POUND = 54,
  anon_sym_diff = 55,
  anon_sym_diff_QMARK = 56,
  anon_sym_echo = 57,
  anon_sym_no_DASHinfer = 58,
  anon_sym_pipe_DASHoutputs = 59,
  anon_sym_progn = 60,
  anon_sym_run = 61,
  anon_sym_setenv = 62,
  anon_sym_system = 63,
  anon_sym_with_DASHoutputs_DASHto = 64,
  anon_sym_with_DASHstderr_DASHto = 65,
  anon_sym_with_DASHstdout_DASHto = 66,
  anon_sym_write_DASHfile = 67,
  anon_sym_library = 68,
  anon_sym_synopsis = 69,
  anon_sym_instrumentation = 70,
  sym_source_file = 71,
  sym_ocaml_syntax = 72,
  sym_sexp = 73,
  sym_sexps1 = 74,
  sym__atom_or_qs = 75,
  sym_quoted_string = 76,
  sym_list = 77,
  sym_stanza = 78,
  sym__stanza_subdir = 79,
  sym__stanza_executable = 80,
  sym__field_buildable = 81,
  sym__modules_osl = 82,
  sym__lib_dep = 83,
  sym_library_name = 84,
  sym_public_name = 85,
  sym_module_name = 86,
  sym_file_name = 87,
  sym_file_name_dep = 88,
  sym_file_name_target = 89,
  sym_package_name = 90,
  sym_lock_name = 91,
  sym_shell_command = 92,
  sym__stanza_rule = 93,
  sym__target = 94,
  sym__bool = 95,
  sym_blang = 96,
  sym_blang_op = 97,
  sym_alias_name = 98,
  sym_action = 99,
  sym__stanza_library = 100,
  aux_sym_source_file_repeat1 = 101,
  aux_sym_ocaml_syntax_repeat1 = 102,
  aux_sym_sexps1_repeat1 = 103,
  aux_sym_quoted_string_repeat1 = 104,
  aux_sym_stanza_repeat1 = 105,
  aux_sym_stanza_repeat2 = 106,
  aux_sym__stanza_executable_repeat1 = 107,
  aux_sym__field_buildable_repeat1 = 108,
  aux_sym__stanza_rule_repeat1 = 109,
  aux_sym__stanza_rule_repeat2 = 110,
  aux_sym__stanza_rule_repeat3 = 111,
  aux_sym__stanza_rule_repeat4 = 112,
  aux_sym_blang_repeat1 = 113,
  aux_sym_action_repeat1 = 114,
  aux_sym_action_repeat2 = 115,
  aux_sym__stanza_library_repeat1 = 116,
  anon_alias_sym_library_name = 117,
  anon_alias_sym_module_name = 118,
  anon_alias_sym_public_name = 119,
  anon_alias_sym_shell_command = 120,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = "(* -*- tuareg -*- *)",
  [aux_sym_ocaml_syntax_token1] = "ocaml_syntax_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym_multiline_string] = "multiline_string",
  [sym__quoted_string_char] = "_quoted_string_char",
  [sym_atom] = "atom",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_comment] = "comment",
  [anon_sym_vendored_dirs] = "stanza_name",
  [anon_sym_alias] = "stanza_name",
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
  [anon_sym_subdir] = "stanza_name",
  [anon_sym_executable] = "stanza_name",
  [anon_sym_name] = "field_name",
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
  [anon_sym_deps] = "field_name",
  [anon_sym_action] = "field_name",
  [anon_sym_package] = "field_name",
  [anon_sym_fallback] = "field_name",
  [anon_sym_locks] = "field_name",
  [anon_sym_dir] = "dir",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_bash] = "action_name",
  [anon_sym_cat] = "action_name",
  [anon_sym_chdir] = "action_name",
  [anon_sym_copy] = "action_name",
  [anon_sym_copy_POUND] = "action_name",
  [anon_sym_diff] = "action_name",
  [anon_sym_diff_QMARK] = "action_name",
  [anon_sym_echo] = "action_name",
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
  [sym_source_file] = "source_file",
  [sym_ocaml_syntax] = "ocaml_syntax",
  [sym_sexp] = "sexp",
  [sym_sexps1] = "sexps1",
  [sym__atom_or_qs] = "_atom_or_qs",
  [sym_quoted_string] = "quoted_string",
  [sym_list] = "list",
  [sym_stanza] = "stanza",
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
  [sym__target] = "_target",
  [sym__bool] = "_bool",
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
  [aux_sym__stanza_executable_repeat1] = "_stanza_executable_repeat1",
  [aux_sym__field_buildable_repeat1] = "_field_buildable_repeat1",
  [aux_sym__stanza_rule_repeat1] = "_stanza_rule_repeat1",
  [aux_sym__stanza_rule_repeat2] = "_stanza_rule_repeat2",
  [aux_sym__stanza_rule_repeat3] = "_stanza_rule_repeat3",
  [aux_sym__stanza_rule_repeat4] = "_stanza_rule_repeat4",
  [aux_sym_blang_repeat1] = "blang_repeat1",
  [aux_sym_action_repeat1] = "action_repeat1",
  [aux_sym_action_repeat2] = "action_repeat2",
  [aux_sym__stanza_library_repeat1] = "_stanza_library_repeat1",
  [anon_alias_sym_library_name] = "library_name",
  [anon_alias_sym_module_name] = "module_name",
  [anon_alias_sym_public_name] = "public_name",
  [anon_alias_sym_shell_command] = "shell_command",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN,
  [aux_sym_ocaml_syntax_token1] = aux_sym_ocaml_syntax_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_multiline_string] = sym_multiline_string,
  [sym__quoted_string_char] = sym__quoted_string_char,
  [sym_atom] = sym_atom,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_comment] = sym_comment,
  [anon_sym_vendored_dirs] = anon_sym_vendored_dirs,
  [anon_sym_alias] = anon_sym_vendored_dirs,
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
  [anon_sym_subdir] = anon_sym_vendored_dirs,
  [anon_sym_executable] = anon_sym_vendored_dirs,
  [anon_sym_name] = anon_sym_name,
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
  [anon_sym_deps] = anon_sym_name,
  [anon_sym_action] = anon_sym_name,
  [anon_sym_package] = anon_sym_name,
  [anon_sym_fallback] = anon_sym_name,
  [anon_sym_locks] = anon_sym_name,
  [anon_sym_dir] = anon_sym_dir,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_bash] = anon_sym_bash,
  [anon_sym_cat] = anon_sym_bash,
  [anon_sym_chdir] = anon_sym_bash,
  [anon_sym_copy] = anon_sym_bash,
  [anon_sym_copy_POUND] = anon_sym_bash,
  [anon_sym_diff] = anon_sym_bash,
  [anon_sym_diff_QMARK] = anon_sym_bash,
  [anon_sym_echo] = anon_sym_bash,
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
  [sym_source_file] = sym_source_file,
  [sym_ocaml_syntax] = sym_ocaml_syntax,
  [sym_sexp] = sym_sexp,
  [sym_sexps1] = sym_sexps1,
  [sym__atom_or_qs] = sym__atom_or_qs,
  [sym_quoted_string] = sym_quoted_string,
  [sym_list] = sym_list,
  [sym_stanza] = sym_stanza,
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
  [sym__target] = sym__target,
  [sym__bool] = sym__bool,
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
  [aux_sym__stanza_executable_repeat1] = aux_sym__stanza_executable_repeat1,
  [aux_sym__field_buildable_repeat1] = aux_sym__field_buildable_repeat1,
  [aux_sym__stanza_rule_repeat1] = aux_sym__stanza_rule_repeat1,
  [aux_sym__stanza_rule_repeat2] = aux_sym__stanza_rule_repeat2,
  [aux_sym__stanza_rule_repeat3] = aux_sym__stanza_rule_repeat3,
  [aux_sym__stanza_rule_repeat4] = aux_sym__stanza_rule_repeat4,
  [aux_sym_blang_repeat1] = aux_sym_blang_repeat1,
  [aux_sym_action_repeat1] = aux_sym_action_repeat1,
  [aux_sym_action_repeat2] = aux_sym_action_repeat2,
  [aux_sym__stanza_library_repeat1] = aux_sym__stanza_library_repeat1,
  [anon_alias_sym_library_name] = anon_alias_sym_library_name,
  [anon_alias_sym_module_name] = anon_alias_sym_module_name,
  [anon_alias_sym_public_name] = anon_alias_sym_public_name,
  [anon_alias_sym_shell_command] = anon_alias_sym_shell_command,
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
  [sym_atom] = {
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
  [anon_sym_alias] = {
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
  [anon_sym_subdir] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_executable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_name] = {
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
  [anon_sym_deps] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fallback] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_locks] = {
    .visible = true,
    .named = true,
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
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_stanza] = {
    .visible = true,
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
  [sym__target] = {
    .visible = false,
    .named = true,
  },
  [sym__bool] = {
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
  [aux_sym_blang_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_library_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_library_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_module_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_public_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_shell_command] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_module_name,
  },
  [2] = {
    [0] = anon_alias_sym_public_name,
  },
  [3] = {
    [0] = anon_alias_sym_library_name,
  },
  [4] = {
    [1] = anon_sym_name,
  },
  [5] = {
    [0] = anon_alias_sym_shell_command,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__atom_or_qs, 5,
    sym__atom_or_qs,
    anon_alias_sym_library_name,
    anon_alias_sym_module_name,
    anon_alias_sym_public_name,
    anon_alias_sym_shell_command,
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
  [8] = 8,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 16,
  [23] = 15,
  [24] = 18,
  [25] = 25,
  [26] = 20,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 30,
  [38] = 29,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 31,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 53,
  [60] = 60,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 63,
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
  [93] = 92,
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
  [113] = 106,
  [114] = 105,
  [115] = 87,
  [116] = 103,
  [117] = 99,
  [118] = 98,
  [119] = 119,
  [120] = 110,
  [121] = 121,
  [122] = 122,
  [123] = 88,
  [124] = 111,
  [125] = 83,
  [126] = 86,
  [127] = 90,
  [128] = 112,
  [129] = 104,
  [130] = 130,
  [131] = 91,
  [132] = 132,
  [133] = 97,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 140,
  [142] = 142,
  [143] = 143,
  [144] = 142,
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
  [158] = 157,
  [159] = 159,
  [160] = 154,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(291);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '(') ADVANCE(464);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == ';') ADVANCE(466);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(521);
      if (lookahead == '>') ADVANCE(523);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 'm') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(99);
      if (lookahead == 'w') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(252);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == ';') ADVANCE(466);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == 'd') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == 'i') ADVANCE(395);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead == 'v') ADVANCE(349);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == ';') ADVANCE(466);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead == 'm') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 'p') ADVANCE(451);
      if (lookahead == 's') ADVANCE(460);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == ';') ADVANCE(466);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead == 'm') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 'p') ADVANCE(451);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(292);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(204);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(123);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(133);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(196);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(256);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(257);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(524);
      if (lookahead == '>') ADVANCE(522);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(91);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(187);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(239);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(136);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(199);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'v') ADVANCE(490);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(218);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(168);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(118);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(473);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(526);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == 'y') ADVANCE(184);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(532);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(504);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(5);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(527);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(191);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'y') ADVANCE(545);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 150:
      if (lookahead == 'k') ADVANCE(516);
      END_STATE();
    case 151:
      if (lookahead == 'k') ADVANCE(229);
      END_STATE();
    case 152:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(486);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(538);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(481);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(540);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(514);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(549);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(541);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(284);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(274);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(492);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(517);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(547);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(536);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(479);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(477);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(506);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 280:
      if (lookahead == 'v') ADVANCE(539);
      END_STATE();
    case 281:
      if (lookahead == 'v') ADVANCE(115);
      END_STATE();
    case 282:
      if (lookahead == 'x') ADVANCE(471);
      END_STATE();
    case 283:
      if (lookahead == 'x') ADVANCE(211);
      END_STATE();
    case 284:
      if (lookahead == 'y') ADVANCE(530);
      END_STATE();
    case 285:
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 286:
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(1);
      END_STATE();
    case 287:
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 288:
      if (eof) ADVANCE(291);
      if (lookahead == '\n') SKIP(288)
      if (lookahead == ';') ADVANCE(294);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 289:
      if (eof) ADVANCE(291);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '(') ADVANCE(464);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == ';') ADVANCE(466);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(289)
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 290:
      if (eof) ADVANCE(291);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == ';') ADVANCE(466);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(290)
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_ocaml_syntax_token1);
      if (lookahead == ';') ADVANCE(294);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_ocaml_syntax_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\\') ADVANCE(286);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_multiline_string);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__quoted_string_char);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_') ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(418);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(381);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'd') ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'd') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'd') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'd') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'd') ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'd') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(403);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'f') ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead == 'y') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'm') ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'm') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'm') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'm') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'm') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'm') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == 'x') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'p') ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(429);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(480);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(321);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'v') ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'v') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'x') ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'y') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'y') ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'y') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(2);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_vendored_dirs);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_vendored_dirs);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_ocamllex);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_ocamllex);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_ocamlyacc);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_ocamlyacc);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_include_subdirs);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_include_subdirs);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_data_only_dirs);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_data_only_dirs);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_cram);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_cram);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_dirs);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_toplevel);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_toplevel);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_install);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_install);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_documentation);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_documentation);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_subdir);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_subdir);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_executable);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_public_name);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_public_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_libraries);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_libraries);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_modules);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_modules);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_enabled_if);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_enabled_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_re_export);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_target);
      if (lookahead == 's') ADVANCE(512);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_targets);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_deps);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_locks);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_dir);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_bash);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_cat);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_chdir);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_copy);
      if (lookahead == '#') ADVANCE(531);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_copy_POUND);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_diff);
      if (lookahead == '?') ADVANCE(533);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_diff_QMARK);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_no_DASHinfer);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_pipe_DASHoutputs);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_progn);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_setenv);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_with_DASHoutputs_DASHto);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_with_DASHstderr_DASHto);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_with_DASHstdout_DASHto);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_write_DASHfile);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_synopsis);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_synopsis);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_instrumentation);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_instrumentation);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(462);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 289},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 290},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 290},
  [10] = {.lex_state = 290},
  [11] = {.lex_state = 290},
  [12] = {.lex_state = 290},
  [13] = {.lex_state = 290},
  [14] = {.lex_state = 290},
  [15] = {.lex_state = 290},
  [16] = {.lex_state = 290},
  [17] = {.lex_state = 290},
  [18] = {.lex_state = 290},
  [19] = {.lex_state = 290},
  [20] = {.lex_state = 290},
  [21] = {.lex_state = 290},
  [22] = {.lex_state = 290},
  [23] = {.lex_state = 290},
  [24] = {.lex_state = 290},
  [25] = {.lex_state = 290},
  [26] = {.lex_state = 290},
  [27] = {.lex_state = 290},
  [28] = {.lex_state = 290},
  [29] = {.lex_state = 290},
  [30] = {.lex_state = 290},
  [31] = {.lex_state = 290},
  [32] = {.lex_state = 290},
  [33] = {.lex_state = 290},
  [34] = {.lex_state = 290},
  [35] = {.lex_state = 290},
  [36] = {.lex_state = 290},
  [37] = {.lex_state = 290},
  [38] = {.lex_state = 290},
  [39] = {.lex_state = 290},
  [40] = {.lex_state = 290},
  [41] = {.lex_state = 290},
  [42] = {.lex_state = 290},
  [43] = {.lex_state = 290},
  [44] = {.lex_state = 290},
  [45] = {.lex_state = 290},
  [46] = {.lex_state = 290},
  [47] = {.lex_state = 289},
  [48] = {.lex_state = 290},
  [49] = {.lex_state = 289},
  [50] = {.lex_state = 289},
  [51] = {.lex_state = 289},
  [52] = {.lex_state = 289},
  [53] = {.lex_state = 289},
  [54] = {.lex_state = 290},
  [55] = {.lex_state = 290},
  [56] = {.lex_state = 289},
  [57] = {.lex_state = 289},
  [58] = {.lex_state = 289},
  [59] = {.lex_state = 289},
  [60] = {.lex_state = 289},
  [61] = {.lex_state = 289},
  [62] = {.lex_state = 289},
  [63] = {.lex_state = 289},
  [64] = {.lex_state = 289},
  [65] = {.lex_state = 289},
  [66] = {.lex_state = 289},
  [67] = {.lex_state = 290},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 289},
  [70] = {.lex_state = 289},
  [71] = {.lex_state = 289},
  [72] = {.lex_state = 289},
  [73] = {.lex_state = 289},
  [74] = {.lex_state = 289},
  [75] = {.lex_state = 289},
  [76] = {.lex_state = 289},
  [77] = {.lex_state = 289},
  [78] = {.lex_state = 289},
  [79] = {.lex_state = 289},
  [80] = {.lex_state = 289},
  [81] = {.lex_state = 290},
  [82] = {.lex_state = 289},
  [83] = {.lex_state = 290},
  [84] = {.lex_state = 289},
  [85] = {.lex_state = 289},
  [86] = {.lex_state = 290},
  [87] = {.lex_state = 290},
  [88] = {.lex_state = 290},
  [89] = {.lex_state = 289},
  [90] = {.lex_state = 290},
  [91] = {.lex_state = 290},
  [92] = {.lex_state = 289},
  [93] = {.lex_state = 289},
  [94] = {.lex_state = 289},
  [95] = {.lex_state = 289},
  [96] = {.lex_state = 289},
  [97] = {.lex_state = 290},
  [98] = {.lex_state = 290},
  [99] = {.lex_state = 290},
  [100] = {.lex_state = 290},
  [101] = {.lex_state = 290},
  [102] = {.lex_state = 290},
  [103] = {.lex_state = 290},
  [104] = {.lex_state = 290},
  [105] = {.lex_state = 290},
  [106] = {.lex_state = 290},
  [107] = {.lex_state = 290},
  [108] = {.lex_state = 289},
  [109] = {.lex_state = 289},
  [110] = {.lex_state = 290},
  [111] = {.lex_state = 290},
  [112] = {.lex_state = 290},
  [113] = {.lex_state = 290},
  [114] = {.lex_state = 290},
  [115] = {.lex_state = 290},
  [116] = {.lex_state = 290},
  [117] = {.lex_state = 290},
  [118] = {.lex_state = 290},
  [119] = {.lex_state = 289},
  [120] = {.lex_state = 290},
  [121] = {.lex_state = 290},
  [122] = {.lex_state = 290},
  [123] = {.lex_state = 290},
  [124] = {.lex_state = 290},
  [125] = {.lex_state = 290},
  [126] = {.lex_state = 290},
  [127] = {.lex_state = 290},
  [128] = {.lex_state = 290},
  [129] = {.lex_state = 290},
  [130] = {.lex_state = 289},
  [131] = {.lex_state = 290},
  [132] = {.lex_state = 290},
  [133] = {.lex_state = 290},
  [134] = {.lex_state = 290},
  [135] = {.lex_state = 290},
  [136] = {.lex_state = 290},
  [137] = {.lex_state = 289},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 289},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 289},
  [148] = {.lex_state = 289},
  [149] = {.lex_state = 289},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 290},
  [152] = {.lex_state = 288},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 288},
  [156] = {.lex_state = 288},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_multiline_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_vendored_dirs] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
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
    [anon_sym_subdir] = ACTIONS(1),
    [anon_sym_executable] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
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
    [anon_sym_deps] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_fallback] = ACTIONS(1),
    [anon_sym_locks] = ACTIONS(1),
    [anon_sym_dir] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_bash] = ACTIONS(1),
    [anon_sym_cat] = ACTIONS(1),
    [anon_sym_chdir] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_copy_POUND] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [anon_sym_diff_QMARK] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(185),
    [sym_ocaml_syntax] = STATE(183),
    [sym_sexp] = STATE(104),
    [sym__atom_or_qs] = STATE(90),
    [sym_quoted_string] = STATE(91),
    [sym_list] = STATE(90),
    [sym_stanza] = STATE(10),
    [sym__stanza_subdir] = STATE(104),
    [sym__stanza_executable] = STATE(104),
    [sym__stanza_rule] = STATE(104),
    [sym__stanza_library] = STATE(104),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_multiline_string] = ACTIONS(11),
    [sym_atom] = ACTIONS(11),
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
      anon_sym_enabled_if,
    ACTIONS(19), 1,
      anon_sym_mode,
    ACTIONS(21), 1,
      anon_sym_target,
    ACTIONS(23), 1,
      anon_sym_targets,
    ACTIONS(25), 1,
      anon_sym_deps,
    ACTIONS(27), 1,
      anon_sym_action,
    ACTIONS(29), 1,
      anon_sym_package,
    ACTIONS(31), 1,
      anon_sym_fallback,
    ACTIONS(33), 1,
      anon_sym_locks,
    ACTIONS(37), 1,
      anon_sym_cat,
    ACTIONS(39), 1,
      anon_sym_chdir,
    ACTIONS(41), 1,
      anon_sym_copy,
    ACTIONS(43), 1,
      anon_sym_copy_POUND,
    ACTIONS(45), 1,
      anon_sym_diff,
    ACTIONS(47), 1,
      anon_sym_diff_QMARK,
    ACTIONS(49), 1,
      anon_sym_echo,
    ACTIONS(51), 1,
      anon_sym_no_DASHinfer,
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
    ACTIONS(61), 3,
      anon_sym_with_DASHoutputs_DASHto,
      anon_sym_with_DASHstderr_DASHto,
      anon_sym_with_DASHstdout_DASHto,
  [82] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_multiline_string,
    ACTIONS(69), 1,
      sym_atom,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_data_only_dirs,
    ACTIONS(81), 1,
      anon_sym_subdir,
    ACTIONS(83), 1,
      anon_sym_executable,
    ACTIONS(85), 1,
      anon_sym_rule,
    ACTIONS(87), 1,
      anon_sym_library,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(77), 2,
      anon_sym_ocamllex,
      anon_sym_ocamlyacc,
    STATE(35), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    ACTIONS(75), 10,
      anon_sym_vendored_dirs,
      anon_sym_alias,
      anon_sym_include_subdirs,
      anon_sym_test,
      anon_sym_cram,
      anon_sym_dirs,
      anon_sym_toplevel,
      anon_sym_install,
      anon_sym_documentation,
      anon_sym_env,
  [143] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_multiline_string,
    ACTIONS(69), 1,
      sym_atom,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_data_only_dirs,
    ACTIONS(97), 1,
      anon_sym_subdir,
    ACTIONS(99), 1,
      anon_sym_executable,
    ACTIONS(101), 1,
      anon_sym_rule,
    ACTIONS(103), 1,
      anon_sym_library,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(93), 2,
      anon_sym_ocamllex,
      anon_sym_ocamlyacc,
    STATE(34), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    ACTIONS(91), 10,
      anon_sym_vendored_dirs,
      anon_sym_alias,
      anon_sym_include_subdirs,
      anon_sym_test,
      anon_sym_cram,
      anon_sym_dirs,
      anon_sym_toplevel,
      anon_sym_install,
      anon_sym_documentation,
      anon_sym_env,
  [204] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_cat,
    ACTIONS(39), 1,
      anon_sym_chdir,
    ACTIONS(41), 1,
      anon_sym_copy,
    ACTIONS(43), 1,
      anon_sym_copy_POUND,
    ACTIONS(45), 1,
      anon_sym_diff,
    ACTIONS(47), 1,
      anon_sym_diff_QMARK,
    ACTIONS(49), 1,
      anon_sym_echo,
    ACTIONS(51), 1,
      anon_sym_no_DASHinfer,
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
    ACTIONS(61), 3,
      anon_sym_with_DASHoutputs_DASHto,
      anon_sym_with_DASHstderr_DASHto,
      anon_sym_with_DASHstdout_DASHto,
  [256] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_multiline_string,
    ACTIONS(69), 1,
      sym_atom,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      anon_sym_name,
    ACTIONS(107), 1,
      anon_sym_public_name,
    ACTIONS(109), 1,
      anon_sym_libraries,
    ACTIONS(111), 1,
      anon_sym_modules,
    ACTIONS(113), 1,
      anon_sym_enabled_if,
    ACTIONS(115), 1,
      anon_sym_synopsis,
    ACTIONS(117), 1,
      anon_sym_instrumentation,
    STATE(131), 1,
      sym_quoted_string,
    STATE(35), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
  [307] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(12), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(129), 5,
      sym_sexp,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [342] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_multiline_string,
    ACTIONS(69), 1,
      sym_atom,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      anon_sym_name,
    ACTIONS(107), 1,
      anon_sym_public_name,
    ACTIONS(109), 1,
      anon_sym_libraries,
    ACTIONS(111), 1,
      anon_sym_modules,
    ACTIONS(113), 1,
      anon_sym_enabled_if,
    STATE(131), 1,
      sym_quoted_string,
    STATE(35), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
  [387] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(12), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(129), 5,
      sym_sexp,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [422] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_quoted_string,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(11), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(90), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(104), 5,
      sym_sexp,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [457] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_quoted_string,
    ACTIONS(134), 2,
      sym_multiline_string,
      sym_atom,
    STATE(11), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(90), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(104), 5,
      sym_sexp,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [492] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(143), 2,
      sym_multiline_string,
      sym_atom,
    STATE(12), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(129), 5,
      sym_sexp,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [527] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(7), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(129), 5,
      sym_sexp,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [559] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(9), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(129), 5,
      sym_sexp,
      sym__stanza_subdir,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [591] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(18), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
  [620] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(17), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
  [649] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(160), 2,
      sym_multiline_string,
      sym_atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(17), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
  [678] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(25), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
  [707] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_file_name,
    STATE(122), 1,
      sym__atom_or_qs,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(27), 3,
      sym_file_name_target,
      sym__target,
      aux_sym__stanza_rule_repeat1,
  [738] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(16), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
  [767] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_file_name,
    STATE(122), 1,
      sym__atom_or_qs,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(179), 2,
      sym_multiline_string,
      sym_atom,
    STATE(21), 3,
      sym_file_name_target,
      sym__target,
      aux_sym__stanza_rule_repeat1,
  [798] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(17), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
  [827] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(24), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
  [856] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(25), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
  [885] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(196), 2,
      sym_multiline_string,
      sym_atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(25), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
  [914] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(22), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
  [943] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_file_name,
    STATE(122), 1,
      sym__atom_or_qs,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(21), 3,
      sym_file_name_target,
      sym__target,
      aux_sym__stanza_rule_repeat1,
  [974] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(43), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
  [1002] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(43), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
  [1030] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(34), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
  [1058] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(38), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
  [1086] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_quoted_string,
    STATE(176), 1,
      sym_sexps1,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(28), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
  [1114] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym__atom_or_qs,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(217), 2,
      sym_multiline_string,
      sym_atom,
    STATE(33), 3,
      sym__lib_dep,
      sym_library_name,
      aux_sym__field_buildable_repeat1,
  [1142] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(43), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
  [1170] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(43), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
  [1198] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym__atom_or_qs,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(33), 3,
      sym__lib_dep,
      sym_library_name,
      aux_sym__field_buildable_repeat1,
  [1226] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(35), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
  [1254] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(43), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
  [1282] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym__atom_or_qs,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(36), 3,
      sym__lib_dep,
      sym_library_name,
      aux_sym__field_buildable_repeat1,
  [1310] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(147), 1,
      sym__atom_or_qs,
    STATE(172), 1,
      sym__modules_osl,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(47), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
  [1340] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(147), 1,
      sym__atom_or_qs,
    STATE(178), 1,
      sym__modules_osl,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(47), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
  [1370] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_quoted_string,
    STATE(180), 1,
      sym_sexps1,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(28), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
  [1398] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(244), 2,
      sym_multiline_string,
      sym_atom,
    STATE(43), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
  [1426] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(29), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(127), 2,
      sym__atom_or_qs,
      sym_list,
  [1454] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym__atom_or_qs,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(46), 2,
      sym_blang,
      aux_sym_blang_repeat1,
  [1481] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym__atom_or_qs,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(261), 2,
      sym_multiline_string,
      sym_atom,
    STATE(46), 2,
      sym_blang,
      aux_sym_blang_repeat1,
  [1508] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(147), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(57), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
  [1532] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(180), 1,
      sym_sexp,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(90), 2,
      sym__atom_or_qs,
      sym_list,
  [1556] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(143), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(56), 2,
      sym_alias_name,
      aux_sym__stanza_rule_repeat2,
  [1580] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(122), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(58), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
  [1604] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(148), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(60), 2,
      sym_lock_name,
      aux_sym__stanza_rule_repeat3,
  [1628] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(122), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(58), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
  [1652] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(147), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(57), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
  [1676] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(181), 1,
      sym_sexp,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(90), 2,
      sym__atom_or_qs,
      sym_list,
  [1700] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym__atom_or_qs,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
    STATE(45), 2,
      sym_blang,
      aux_sym_blang_repeat1,
  [1724] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(143), 1,
      sym__atom_or_qs,
    ACTIONS(276), 2,
      sym_multiline_string,
      sym_atom,
    STATE(56), 2,
      sym_alias_name,
      aux_sym__stanza_rule_repeat2,
  [1748] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(147), 1,
      sym__atom_or_qs,
    ACTIONS(284), 2,
      sym_multiline_string,
      sym_atom,
    STATE(57), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
  [1772] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(122), 1,
      sym__atom_or_qs,
    ACTIONS(292), 2,
      sym_multiline_string,
      sym_atom,
    STATE(58), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
  [1796] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(147), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(57), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
  [1820] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(148), 1,
      sym__atom_or_qs,
    ACTIONS(300), 2,
      sym_multiline_string,
      sym_atom,
    STATE(60), 2,
      sym_lock_name,
      aux_sym__stanza_rule_repeat3,
  [1844] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(122), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(50), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
  [1868] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(122), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(52), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
  [1892] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(147), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(53), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
  [1916] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(147), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(59), 2,
      sym_module_name,
      aux_sym_stanza_repeat1,
  [1940] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(107), 1,
      sym_file_name,
    STATE(122), 1,
      sym__atom_or_qs,
    STATE(182), 1,
      sym_file_name_target,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [1963] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_file_name,
    STATE(122), 1,
      sym__atom_or_qs,
    STATE(131), 1,
      sym_quoted_string,
    STATE(161), 1,
      sym_file_name_target,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
  [1986] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(102), 1,
      sym__atom_or_qs,
    STATE(180), 1,
      sym_blang,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym_blang_op,
    ACTIONS(305), 6,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [2024] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(79), 2,
      sym__atom_or_qs,
      aux_sym_action_repeat2,
  [2045] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(148), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(51), 2,
      sym_lock_name,
      aux_sym__stanza_rule_repeat3,
  [2066] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(122), 1,
      sym__atom_or_qs,
    STATE(149), 1,
      sym_file_name,
    STATE(174), 1,
      sym_file_name_dep,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2089] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(122), 1,
      sym__atom_or_qs,
    STATE(149), 1,
      sym_file_name,
    STATE(187), 1,
      sym_file_name_dep,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2112] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(143), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(49), 2,
      sym_alias_name,
      aux_sym__stanza_rule_repeat2,
  [2133] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_file_name_dep,
    STATE(91), 1,
      sym_quoted_string,
    STATE(122), 1,
      sym__atom_or_qs,
    STATE(149), 1,
      sym_file_name,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2156] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_file_name_dep,
    STATE(91), 1,
      sym_quoted_string,
    STATE(122), 1,
      sym__atom_or_qs,
    STATE(149), 1,
      sym_file_name,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2179] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(107), 1,
      sym_file_name,
    STATE(122), 1,
      sym__atom_or_qs,
    STATE(174), 1,
      sym_file_name_target,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2202] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(107), 1,
      sym_file_name,
    STATE(119), 1,
      sym_file_name_target,
    STATE(122), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2225] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    ACTIONS(312), 2,
      sym_multiline_string,
      sym_atom,
    STATE(78), 2,
      sym__atom_or_qs,
      aux_sym_action_repeat2,
  [2246] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_quoted_string,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
    STATE(78), 2,
      sym__atom_or_qs,
      aux_sym_action_repeat2,
  [2267] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      sym_file_name_dep,
    STATE(91), 1,
      sym_quoted_string,
    STATE(122), 1,
      sym__atom_or_qs,
    STATE(149), 1,
      sym_file_name,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2290] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_quoted_string,
    STATE(102), 1,
      sym__atom_or_qs,
    STATE(172), 1,
      sym_blang,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2313] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym__atom_or_qs,
    STATE(131), 1,
      sym_quoted_string,
    STATE(161), 1,
      sym_file_name,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
  [2333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2347] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(172), 1,
      sym_public_name,
    STATE(188), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2367] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(147), 1,
      sym__atom_or_qs,
    STATE(172), 1,
      sym_module_name,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2429] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(101), 1,
      sym__atom_or_qs,
    STATE(176), 1,
      sym_library_name,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2477] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_file_name,
    STATE(122), 1,
      sym__atom_or_qs,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
  [2497] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_file_name,
    STATE(122), 1,
      sym__atom_or_qs,
    STATE(131), 1,
      sym_quoted_string,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
  [2517] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(186), 1,
      sym__atom_or_qs,
    STATE(187), 1,
      sym_shell_command,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2537] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(173), 1,
      sym__atom_or_qs,
    STATE(180), 1,
      sym_package_name,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      sym_quoted_string,
    STATE(164), 1,
      sym__atom_or_qs,
    ACTIONS(67), 2,
      sym_multiline_string,
      sym_atom,
  [2574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [2600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [2613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(361), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    ACTIONS(365), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [2665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [2678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_DQUOTE,
    ACTIONS(375), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [2691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(379), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [2704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2717] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(180), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2734] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(187), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(387), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [2764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(379), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_DQUOTE,
    ACTIONS(375), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2868] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(174), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [2885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(387), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [2950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [3002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3015] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(181), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [3032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [3071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3110] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_string,
    STATE(96), 1,
      sym__atom_or_qs,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym_atom,
  [3127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(138), 2,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [3141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(139), 2,
      sym_action,
      aux_sym_action_repeat1,
  [3155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(138), 2,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [3169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(138), 2,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [3183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    STATE(141), 2,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [3197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 3,
      sym_multiline_string,
      sym_atom,
      anon_sym_RPAREN,
  [3209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(140), 2,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [3223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(150), 2,
      sym_action,
      aux_sym_action_repeat1,
  [3237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      sym__bool,
    ACTIONS(451), 2,
      anon_sym_true,
      anon_sym_false,
  [3251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 3,
      sym_multiline_string,
      sym_atom,
      anon_sym_RPAREN,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_DQUOTE,
    ACTIONS(459), 3,
      sym_multiline_string,
      sym_atom,
      anon_sym_RPAREN,
  [3275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
    ACTIONS(463), 3,
      sym_multiline_string,
      sym_atom,
      anon_sym_RPAREN,
  [3287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(139), 2,
      sym_action,
      aux_sym_action_repeat1,
  [3301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 3,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [3313] = 4,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 1,
      aux_sym_ocaml_syntax_token1,
    ACTIONS(474), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym_ocaml_syntax_repeat1,
  [3326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(150), 2,
      sym_action,
      aux_sym_action_repeat1,
  [3337] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_DQUOTE,
    ACTIONS(478), 1,
      sym__quoted_string_char,
    STATE(157), 1,
      aux_sym_quoted_string_repeat1,
  [3350] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
    ACTIONS(482), 1,
      aux_sym_ocaml_syntax_token1,
    STATE(152), 1,
      aux_sym_ocaml_syntax_repeat1,
  [3363] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
    ACTIONS(486), 1,
      aux_sym_ocaml_syntax_token1,
    STATE(155), 1,
      aux_sym_ocaml_syntax_repeat1,
  [3376] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_DQUOTE,
    ACTIONS(490), 1,
      sym__quoted_string_char,
    STATE(159), 1,
      aux_sym_quoted_string_repeat1,
  [3389] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym__quoted_string_char,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      aux_sym_quoted_string_repeat1,
  [3402] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 1,
      sym__quoted_string_char,
    STATE(159), 1,
      aux_sym_quoted_string_repeat1,
  [3415] = 4,
    ACTIONS(474), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_DQUOTE,
    ACTIONS(501), 1,
      sym__quoted_string_char,
    STATE(158), 1,
      aux_sym_quoted_string_repeat1,
  [3428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_action,
  [3438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_action,
  [3448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_action,
  [3466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_re_export,
    ACTIONS(509), 1,
      anon_sym_select,
  [3484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_action,
  [3510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
  [3533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
  [3540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
  [3547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
  [3554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
  [3561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
  [3568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [3575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_dir,
  [3582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
  [3589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
  [3596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
  [3603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [3610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
  [3617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      ts_builtin_sym_end,
  [3624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
  [3631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
  [3638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 143,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 307,
  [SMALL_STATE(8)] = 342,
  [SMALL_STATE(9)] = 387,
  [SMALL_STATE(10)] = 422,
  [SMALL_STATE(11)] = 457,
  [SMALL_STATE(12)] = 492,
  [SMALL_STATE(13)] = 527,
  [SMALL_STATE(14)] = 559,
  [SMALL_STATE(15)] = 591,
  [SMALL_STATE(16)] = 620,
  [SMALL_STATE(17)] = 649,
  [SMALL_STATE(18)] = 678,
  [SMALL_STATE(19)] = 707,
  [SMALL_STATE(20)] = 738,
  [SMALL_STATE(21)] = 767,
  [SMALL_STATE(22)] = 798,
  [SMALL_STATE(23)] = 827,
  [SMALL_STATE(24)] = 856,
  [SMALL_STATE(25)] = 885,
  [SMALL_STATE(26)] = 914,
  [SMALL_STATE(27)] = 943,
  [SMALL_STATE(28)] = 974,
  [SMALL_STATE(29)] = 1002,
  [SMALL_STATE(30)] = 1030,
  [SMALL_STATE(31)] = 1058,
  [SMALL_STATE(32)] = 1086,
  [SMALL_STATE(33)] = 1114,
  [SMALL_STATE(34)] = 1142,
  [SMALL_STATE(35)] = 1170,
  [SMALL_STATE(36)] = 1198,
  [SMALL_STATE(37)] = 1226,
  [SMALL_STATE(38)] = 1254,
  [SMALL_STATE(39)] = 1282,
  [SMALL_STATE(40)] = 1310,
  [SMALL_STATE(41)] = 1340,
  [SMALL_STATE(42)] = 1370,
  [SMALL_STATE(43)] = 1398,
  [SMALL_STATE(44)] = 1426,
  [SMALL_STATE(45)] = 1454,
  [SMALL_STATE(46)] = 1481,
  [SMALL_STATE(47)] = 1508,
  [SMALL_STATE(48)] = 1532,
  [SMALL_STATE(49)] = 1556,
  [SMALL_STATE(50)] = 1580,
  [SMALL_STATE(51)] = 1604,
  [SMALL_STATE(52)] = 1628,
  [SMALL_STATE(53)] = 1652,
  [SMALL_STATE(54)] = 1676,
  [SMALL_STATE(55)] = 1700,
  [SMALL_STATE(56)] = 1724,
  [SMALL_STATE(57)] = 1748,
  [SMALL_STATE(58)] = 1772,
  [SMALL_STATE(59)] = 1796,
  [SMALL_STATE(60)] = 1820,
  [SMALL_STATE(61)] = 1844,
  [SMALL_STATE(62)] = 1868,
  [SMALL_STATE(63)] = 1892,
  [SMALL_STATE(64)] = 1916,
  [SMALL_STATE(65)] = 1940,
  [SMALL_STATE(66)] = 1963,
  [SMALL_STATE(67)] = 1986,
  [SMALL_STATE(68)] = 2009,
  [SMALL_STATE(69)] = 2024,
  [SMALL_STATE(70)] = 2045,
  [SMALL_STATE(71)] = 2066,
  [SMALL_STATE(72)] = 2089,
  [SMALL_STATE(73)] = 2112,
  [SMALL_STATE(74)] = 2133,
  [SMALL_STATE(75)] = 2156,
  [SMALL_STATE(76)] = 2179,
  [SMALL_STATE(77)] = 2202,
  [SMALL_STATE(78)] = 2225,
  [SMALL_STATE(79)] = 2246,
  [SMALL_STATE(80)] = 2267,
  [SMALL_STATE(81)] = 2290,
  [SMALL_STATE(82)] = 2313,
  [SMALL_STATE(83)] = 2333,
  [SMALL_STATE(84)] = 2347,
  [SMALL_STATE(85)] = 2367,
  [SMALL_STATE(86)] = 2387,
  [SMALL_STATE(87)] = 2401,
  [SMALL_STATE(88)] = 2415,
  [SMALL_STATE(89)] = 2429,
  [SMALL_STATE(90)] = 2449,
  [SMALL_STATE(91)] = 2463,
  [SMALL_STATE(92)] = 2477,
  [SMALL_STATE(93)] = 2497,
  [SMALL_STATE(94)] = 2517,
  [SMALL_STATE(95)] = 2537,
  [SMALL_STATE(96)] = 2557,
  [SMALL_STATE(97)] = 2574,
  [SMALL_STATE(98)] = 2587,
  [SMALL_STATE(99)] = 2600,
  [SMALL_STATE(100)] = 2613,
  [SMALL_STATE(101)] = 2626,
  [SMALL_STATE(102)] = 2639,
  [SMALL_STATE(103)] = 2652,
  [SMALL_STATE(104)] = 2665,
  [SMALL_STATE(105)] = 2678,
  [SMALL_STATE(106)] = 2691,
  [SMALL_STATE(107)] = 2704,
  [SMALL_STATE(108)] = 2717,
  [SMALL_STATE(109)] = 2734,
  [SMALL_STATE(110)] = 2751,
  [SMALL_STATE(111)] = 2764,
  [SMALL_STATE(112)] = 2777,
  [SMALL_STATE(113)] = 2790,
  [SMALL_STATE(114)] = 2803,
  [SMALL_STATE(115)] = 2816,
  [SMALL_STATE(116)] = 2829,
  [SMALL_STATE(117)] = 2842,
  [SMALL_STATE(118)] = 2855,
  [SMALL_STATE(119)] = 2868,
  [SMALL_STATE(120)] = 2885,
  [SMALL_STATE(121)] = 2898,
  [SMALL_STATE(122)] = 2911,
  [SMALL_STATE(123)] = 2924,
  [SMALL_STATE(124)] = 2937,
  [SMALL_STATE(125)] = 2950,
  [SMALL_STATE(126)] = 2963,
  [SMALL_STATE(127)] = 2976,
  [SMALL_STATE(128)] = 2989,
  [SMALL_STATE(129)] = 3002,
  [SMALL_STATE(130)] = 3015,
  [SMALL_STATE(131)] = 3032,
  [SMALL_STATE(132)] = 3045,
  [SMALL_STATE(133)] = 3058,
  [SMALL_STATE(134)] = 3071,
  [SMALL_STATE(135)] = 3084,
  [SMALL_STATE(136)] = 3097,
  [SMALL_STATE(137)] = 3110,
  [SMALL_STATE(138)] = 3127,
  [SMALL_STATE(139)] = 3141,
  [SMALL_STATE(140)] = 3155,
  [SMALL_STATE(141)] = 3169,
  [SMALL_STATE(142)] = 3183,
  [SMALL_STATE(143)] = 3197,
  [SMALL_STATE(144)] = 3209,
  [SMALL_STATE(145)] = 3223,
  [SMALL_STATE(146)] = 3237,
  [SMALL_STATE(147)] = 3251,
  [SMALL_STATE(148)] = 3263,
  [SMALL_STATE(149)] = 3275,
  [SMALL_STATE(150)] = 3287,
  [SMALL_STATE(151)] = 3301,
  [SMALL_STATE(152)] = 3313,
  [SMALL_STATE(153)] = 3326,
  [SMALL_STATE(154)] = 3337,
  [SMALL_STATE(155)] = 3350,
  [SMALL_STATE(156)] = 3363,
  [SMALL_STATE(157)] = 3376,
  [SMALL_STATE(158)] = 3389,
  [SMALL_STATE(159)] = 3402,
  [SMALL_STATE(160)] = 3415,
  [SMALL_STATE(161)] = 3428,
  [SMALL_STATE(162)] = 3438,
  [SMALL_STATE(163)] = 3448,
  [SMALL_STATE(164)] = 3456,
  [SMALL_STATE(165)] = 3466,
  [SMALL_STATE(166)] = 3474,
  [SMALL_STATE(167)] = 3484,
  [SMALL_STATE(168)] = 3492,
  [SMALL_STATE(169)] = 3500,
  [SMALL_STATE(170)] = 3510,
  [SMALL_STATE(171)] = 3518,
  [SMALL_STATE(172)] = 3526,
  [SMALL_STATE(173)] = 3533,
  [SMALL_STATE(174)] = 3540,
  [SMALL_STATE(175)] = 3547,
  [SMALL_STATE(176)] = 3554,
  [SMALL_STATE(177)] = 3561,
  [SMALL_STATE(178)] = 3568,
  [SMALL_STATE(179)] = 3575,
  [SMALL_STATE(180)] = 3582,
  [SMALL_STATE(181)] = 3589,
  [SMALL_STATE(182)] = 3596,
  [SMALL_STATE(183)] = 3603,
  [SMALL_STATE(184)] = 3610,
  [SMALL_STATE(185)] = 3617,
  [SMALL_STATE(186)] = 3624,
  [SMALL_STATE(187)] = 3631,
  [SMALL_STATE(188)] = 3638,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_executable_repeat1, 2), SHIFT_REPEAT(160),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2), SHIFT_REPEAT(131),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2), SHIFT_REPEAT(8),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_rule_repeat1, 2), SHIFT_REPEAT(160),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2), SHIFT_REPEAT(131),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2), SHIFT_REPEAT(179),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 2), SHIFT_REPEAT(160),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2), SHIFT_REPEAT(131),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2), SHIFT_REPEAT(6),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexps1, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_buildable_repeat1, 2), SHIFT_REPEAT(160),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_buildable_repeat1, 2), SHIFT_REPEAT(131),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_buildable_repeat1, 2), SHIFT_REPEAT(166),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_buildable_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sexps1_repeat1, 2), SHIFT_REPEAT(160),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2), SHIFT_REPEAT(131),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2), SHIFT_REPEAT(37),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blang_repeat1, 2), SHIFT_REPEAT(160),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blang_repeat1, 2), SHIFT_REPEAT(131),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blang_repeat1, 2), SHIFT_REPEAT(68),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_blang_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_rule_repeat2, 2), SHIFT_REPEAT(154),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat2, 2), SHIFT_REPEAT(91),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat2, 2),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stanza_repeat1, 2), SHIFT_REPEAT(154),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stanza_repeat1, 2), SHIFT_REPEAT(91),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stanza_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stanza_repeat2, 2), SHIFT_REPEAT(154),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stanza_repeat2, 2), SHIFT_REPEAT(91),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stanza_repeat2, 2),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_rule_repeat3, 2), SHIFT_REPEAT(154),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat3, 2), SHIFT_REPEAT(91),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat3, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat2, 2), SHIFT_REPEAT(154),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat2, 2), SHIFT_REPEAT(91),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat2, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_or_qs, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom_or_qs, 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_rule, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_rule, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executable, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_executable, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_rule, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_rule, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_buildable, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_buildable, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library_name, 1, .production_id = 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_name, 1, .production_id = 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blang, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blang, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_library, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_library, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executable, 4),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_executable, 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_name_target, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name_target, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_subdir, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_subdir, 5),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_library, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_library, 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_buildable, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_buildable, 4),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_name, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__target, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 4),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blang, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blang, 4),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lib_dep, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lib_dep, 4),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 4),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 2), SHIFT_REPEAT(2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 2),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_name, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 1, .production_id = 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1, .production_id = 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lock_name, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_name, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_name_dep, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name_dep, 1),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blang_op, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blang_op, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ocaml_syntax_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ocaml_syntax_repeat1, 2), SHIFT_REPEAT(152),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ocaml_syntax, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ocaml_syntax, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(159),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 4, .production_id = 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 3, .production_id = 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_name, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 3),
  [537] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1, .production_id = 5),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_public_name, 1, .production_id = 2),
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
