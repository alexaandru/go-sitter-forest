#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 3
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_DQUOTE = 1,
  sym_multiline_string = 2,
  sym__quoted_string_char = 3,
  sym_atom = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  sym_comment = 7,
  anon_sym_executable = 8,
  anon_sym_name = 9,
  anon_sym_public_name = 10,
  anon_sym_libraries = 11,
  anon_sym_modules = 12,
  anon_sym_re_export = 13,
  anon_sym_select = 14,
  anon_sym_rule = 15,
  anon_sym_mode = 16,
  anon_sym_target = 17,
  anon_sym_deps = 18,
  anon_sym_action = 19,
  anon_sym_bash = 20,
  anon_sym_cat = 21,
  anon_sym_chdir = 22,
  anon_sym_copy = 23,
  anon_sym_copy_POUND = 24,
  anon_sym_diff = 25,
  anon_sym_echo = 26,
  anon_sym_no_DASHinfer = 27,
  anon_sym_progn = 28,
  anon_sym_run = 29,
  anon_sym_system = 30,
  anon_sym_with_DASHoutputs_DASHto = 31,
  anon_sym_with_DASHstdout_DASHto = 32,
  anon_sym_write_DASHfile = 33,
  anon_sym_library = 34,
  anon_sym_synopsis = 35,
  anon_sym_instrumentation = 36,
  sym_source_file = 37,
  sym_sexp = 38,
  sym_sexps1 = 39,
  sym__atom_or_qs = 40,
  sym_quoted_string = 41,
  sym_list = 42,
  sym_stanza = 43,
  sym__stanza_executable = 44,
  sym__field_buildable = 45,
  sym__modules_osl = 46,
  sym__lib_dep = 47,
  sym_library_name = 48,
  sym_public_name = 49,
  sym_module_name = 50,
  sym__stanza_rule = 51,
  sym_action = 52,
  sym__stanza_library = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_sexps1_repeat1 = 55,
  aux_sym_quoted_string_repeat1 = 56,
  aux_sym__stanza_executable_repeat1 = 57,
  aux_sym__field_buildable_repeat1 = 58,
  aux_sym__modules_osl_repeat1 = 59,
  aux_sym__stanza_rule_repeat1 = 60,
  aux_sym__stanza_library_repeat1 = 61,
  anon_alias_sym_library_name = 62,
  anon_alias_sym_module_name = 63,
  anon_alias_sym_public_name = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DQUOTE] = "\"",
  [sym_multiline_string] = "multiline_string",
  [sym__quoted_string_char] = "_quoted_string_char",
  [sym_atom] = "atom",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_comment] = "comment",
  [anon_sym_executable] = "stanza_name",
  [anon_sym_name] = "field_name",
  [anon_sym_public_name] = "field_name",
  [anon_sym_libraries] = "field_name",
  [anon_sym_modules] = "field_name",
  [anon_sym_re_export] = "field_name",
  [anon_sym_select] = "field_name",
  [anon_sym_rule] = "stanza_name",
  [anon_sym_mode] = "field_name",
  [anon_sym_target] = "field_name",
  [anon_sym_deps] = "field_name",
  [anon_sym_action] = "field_name",
  [anon_sym_bash] = "action_name",
  [anon_sym_cat] = "action_name",
  [anon_sym_chdir] = "action_name",
  [anon_sym_copy] = "action_name",
  [anon_sym_copy_POUND] = "action_name",
  [anon_sym_diff] = "action_name",
  [anon_sym_echo] = "action_name",
  [anon_sym_no_DASHinfer] = "action_name",
  [anon_sym_progn] = "action_name",
  [anon_sym_run] = "action_name",
  [anon_sym_system] = "action_name",
  [anon_sym_with_DASHoutputs_DASHto] = "action_name",
  [anon_sym_with_DASHstdout_DASHto] = "action_name",
  [anon_sym_write_DASHfile] = "action_name",
  [anon_sym_library] = "stanza_name",
  [anon_sym_synopsis] = "field_name",
  [anon_sym_instrumentation] = "field_name",
  [sym_source_file] = "source_file",
  [sym_sexp] = "sexp",
  [sym_sexps1] = "sexps1",
  [sym__atom_or_qs] = "_atom_or_qs",
  [sym_quoted_string] = "quoted_string",
  [sym_list] = "list",
  [sym_stanza] = "stanza",
  [sym__stanza_executable] = "_stanza_executable",
  [sym__field_buildable] = "_field_buildable",
  [sym__modules_osl] = "_modules_osl",
  [sym__lib_dep] = "_lib_dep",
  [sym_library_name] = "library_name",
  [sym_public_name] = "public_name",
  [sym_module_name] = "module_name",
  [sym__stanza_rule] = "_stanza_rule",
  [sym_action] = "action",
  [sym__stanza_library] = "_stanza_library",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sexps1_repeat1] = "sexps1_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym__stanza_executable_repeat1] = "_stanza_executable_repeat1",
  [aux_sym__field_buildable_repeat1] = "_field_buildable_repeat1",
  [aux_sym__modules_osl_repeat1] = "_modules_osl_repeat1",
  [aux_sym__stanza_rule_repeat1] = "_stanza_rule_repeat1",
  [aux_sym__stanza_library_repeat1] = "_stanza_library_repeat1",
  [anon_alias_sym_library_name] = "library_name",
  [anon_alias_sym_module_name] = "module_name",
  [anon_alias_sym_public_name] = "public_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_multiline_string] = sym_multiline_string,
  [sym__quoted_string_char] = sym__quoted_string_char,
  [sym_atom] = sym_atom,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_comment] = sym_comment,
  [anon_sym_executable] = anon_sym_executable,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_public_name] = anon_sym_name,
  [anon_sym_libraries] = anon_sym_name,
  [anon_sym_modules] = anon_sym_name,
  [anon_sym_re_export] = anon_sym_name,
  [anon_sym_select] = anon_sym_name,
  [anon_sym_rule] = anon_sym_executable,
  [anon_sym_mode] = anon_sym_name,
  [anon_sym_target] = anon_sym_name,
  [anon_sym_deps] = anon_sym_name,
  [anon_sym_action] = anon_sym_name,
  [anon_sym_bash] = anon_sym_bash,
  [anon_sym_cat] = anon_sym_bash,
  [anon_sym_chdir] = anon_sym_bash,
  [anon_sym_copy] = anon_sym_bash,
  [anon_sym_copy_POUND] = anon_sym_bash,
  [anon_sym_diff] = anon_sym_bash,
  [anon_sym_echo] = anon_sym_bash,
  [anon_sym_no_DASHinfer] = anon_sym_bash,
  [anon_sym_progn] = anon_sym_bash,
  [anon_sym_run] = anon_sym_bash,
  [anon_sym_system] = anon_sym_bash,
  [anon_sym_with_DASHoutputs_DASHto] = anon_sym_bash,
  [anon_sym_with_DASHstdout_DASHto] = anon_sym_bash,
  [anon_sym_write_DASHfile] = anon_sym_bash,
  [anon_sym_library] = anon_sym_executable,
  [anon_sym_synopsis] = anon_sym_name,
  [anon_sym_instrumentation] = anon_sym_name,
  [sym_source_file] = sym_source_file,
  [sym_sexp] = sym_sexp,
  [sym_sexps1] = sym_sexps1,
  [sym__atom_or_qs] = sym__atom_or_qs,
  [sym_quoted_string] = sym_quoted_string,
  [sym_list] = sym_list,
  [sym_stanza] = sym_stanza,
  [sym__stanza_executable] = sym__stanza_executable,
  [sym__field_buildable] = sym__field_buildable,
  [sym__modules_osl] = sym__modules_osl,
  [sym__lib_dep] = sym__lib_dep,
  [sym_library_name] = sym_library_name,
  [sym_public_name] = sym_public_name,
  [sym_module_name] = sym_module_name,
  [sym__stanza_rule] = sym__stanza_rule,
  [sym_action] = sym_action,
  [sym__stanza_library] = sym__stanza_library,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sexps1_repeat1] = aux_sym_sexps1_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym__stanza_executable_repeat1] = aux_sym__stanza_executable_repeat1,
  [aux_sym__field_buildable_repeat1] = aux_sym__field_buildable_repeat1,
  [aux_sym__modules_osl_repeat1] = aux_sym__modules_osl_repeat1,
  [aux_sym__stanza_rule_repeat1] = aux_sym__stanza_rule_repeat1,
  [aux_sym__stanza_library_repeat1] = aux_sym__stanza_library_repeat1,
  [anon_alias_sym_library_name] = anon_alias_sym_library_name,
  [anon_alias_sym_module_name] = anon_alias_sym_module_name,
  [anon_alias_sym_public_name] = anon_alias_sym_public_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_deps] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = true,
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
  [anon_sym_echo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHinfer] = {
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
  [anon_sym_system] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHoutputs_DASHto] = {
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
  [sym__stanza_rule] = {
    .visible = false,
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
  [aux_sym_sexps1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
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
  [aux_sym__modules_osl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_rule_repeat1] = {
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
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__atom_or_qs, 4,
    sym__atom_or_qs,
    anon_alias_sym_library_name,
    anon_alias_sym_module_name,
    anon_alias_sym_public_name,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(150);
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'm') ADVANCE(206);
      if (lookahead == 't') ADVANCE(160);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(229);
      if (lookahead == 's') ADVANCE(236);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == ';') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(98);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(137);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(138);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(88);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(268);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(263);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(7);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(277);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 145:
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 146:
      if (lookahead == 'y') ADVANCE(266);
      END_STATE();
    case 147:
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(1);
      END_STATE();
    case 148:
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 149:
      if (eof) ADVANCE(150);
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == ';') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(149)
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\\') ADVANCE(147);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_multiline_string);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__quoted_string_char);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'd') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'g') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'p') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'x') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'y') ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'y') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_executable);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_public_name);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_public_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_libraries);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_libraries);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_modules);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_modules);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_re_export);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_target);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_target);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_deps);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_deps);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_bash);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_cat);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_chdir);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_copy);
      if (lookahead == '#') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_copy_POUND);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_no_DASHinfer);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_progn);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_with_DASHoutputs_DASHto);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_with_DASHstdout_DASHto);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_write_DASHfile);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_synopsis);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_synopsis);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_instrumentation);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_instrumentation);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(237);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 149},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 149},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 149},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 149},
  [10] = {.lex_state = 149},
  [11] = {.lex_state = 149},
  [12] = {.lex_state = 149},
  [13] = {.lex_state = 149},
  [14] = {.lex_state = 149},
  [15] = {.lex_state = 149},
  [16] = {.lex_state = 149},
  [17] = {.lex_state = 149},
  [18] = {.lex_state = 149},
  [19] = {.lex_state = 149},
  [20] = {.lex_state = 149},
  [21] = {.lex_state = 149},
  [22] = {.lex_state = 149},
  [23] = {.lex_state = 149},
  [24] = {.lex_state = 149},
  [25] = {.lex_state = 149},
  [26] = {.lex_state = 149},
  [27] = {.lex_state = 149},
  [28] = {.lex_state = 149},
  [29] = {.lex_state = 149},
  [30] = {.lex_state = 149},
  [31] = {.lex_state = 149},
  [32] = {.lex_state = 149},
  [33] = {.lex_state = 149},
  [34] = {.lex_state = 149},
  [35] = {.lex_state = 149},
  [36] = {.lex_state = 149},
  [37] = {.lex_state = 149},
  [38] = {.lex_state = 149},
  [39] = {.lex_state = 149},
  [40] = {.lex_state = 149},
  [41] = {.lex_state = 149},
  [42] = {.lex_state = 149},
  [43] = {.lex_state = 149},
  [44] = {.lex_state = 149},
  [45] = {.lex_state = 149},
  [46] = {.lex_state = 149},
  [47] = {.lex_state = 149},
  [48] = {.lex_state = 149},
  [49] = {.lex_state = 149},
  [50] = {.lex_state = 149},
  [51] = {.lex_state = 149},
  [52] = {.lex_state = 149},
  [53] = {.lex_state = 149},
  [54] = {.lex_state = 149},
  [55] = {.lex_state = 149},
  [56] = {.lex_state = 149},
  [57] = {.lex_state = 149},
  [58] = {.lex_state = 149},
  [59] = {.lex_state = 149},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_multiline_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_executable] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_public_name] = ACTIONS(1),
    [anon_sym_libraries] = ACTIONS(1),
    [anon_sym_modules] = ACTIONS(1),
    [anon_sym_re_export] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_target] = ACTIONS(1),
    [anon_sym_deps] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_bash] = ACTIONS(1),
    [anon_sym_cat] = ACTIONS(1),
    [anon_sym_chdir] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_copy_POUND] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
    [anon_sym_no_DASHinfer] = ACTIONS(1),
    [anon_sym_progn] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_with_DASHoutputs_DASHto] = ACTIONS(1),
    [anon_sym_with_DASHstdout_DASHto] = ACTIONS(1),
    [anon_sym_write_DASHfile] = ACTIONS(1),
    [anon_sym_library] = ACTIONS(1),
    [anon_sym_synopsis] = ACTIONS(1),
    [anon_sym_instrumentation] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(70),
    [sym_sexp] = STATE(56),
    [sym__atom_or_qs] = STATE(39),
    [sym_quoted_string] = STATE(35),
    [sym_list] = STATE(39),
    [sym_stanza] = STATE(5),
    [sym__stanza_executable] = STATE(56),
    [sym__stanza_rule] = STATE(56),
    [sym__stanza_library] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_multiline_string] = ACTIONS(9),
    [sym_atom] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      sym_multiline_string,
    ACTIONS(13), 1,
      sym_atom,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      anon_sym_name,
    ACTIONS(21), 1,
      anon_sym_public_name,
    ACTIONS(23), 1,
      anon_sym_libraries,
    ACTIONS(25), 1,
      anon_sym_modules,
    ACTIONS(27), 1,
      anon_sym_synopsis,
    ACTIONS(29), 1,
      anon_sym_instrumentation,
    STATE(35), 1,
      sym_quoted_string,
    STATE(16), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [48] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      sym_multiline_string,
    ACTIONS(13), 1,
      sym_atom,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 1,
      anon_sym_mode,
    ACTIONS(33), 1,
      anon_sym_target,
    ACTIONS(35), 1,
      anon_sym_deps,
    ACTIONS(37), 1,
      anon_sym_action,
    STATE(35), 1,
      sym_quoted_string,
    STATE(16), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [90] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_copy,
    ACTIONS(39), 13,
      anon_sym_bash,
      anon_sym_cat,
      anon_sym_chdir,
      anon_sym_copy_POUND,
      anon_sym_diff,
      anon_sym_echo,
      anon_sym_no_DASHinfer,
      anon_sym_progn,
      anon_sym_run,
      anon_sym_system,
      anon_sym_with_DASHoutputs_DASHto,
      anon_sym_with_DASHstdout_DASHto,
      anon_sym_write_DASHfile,
  [112] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(7), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(56), 4,
      sym_sexp,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [146] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      sym_multiline_string,
    ACTIONS(13), 1,
      sym_atom,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      anon_sym_name,
    ACTIONS(21), 1,
      anon_sym_public_name,
    ACTIONS(23), 1,
      anon_sym_libraries,
    ACTIONS(25), 1,
      anon_sym_modules,
    STATE(35), 1,
      sym_quoted_string,
    STATE(16), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [188] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(50), 2,
      sym_multiline_string,
      sym_atom,
    STATE(7), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(56), 4,
      sym_sexp,
      sym__stanza_executable,
      sym__stanza_rule,
      sym__stanza_library,
  [222] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      sym_multiline_string,
    ACTIONS(13), 1,
      sym_atom,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(56), 1,
      anon_sym_executable,
    ACTIONS(58), 1,
      anon_sym_rule,
    ACTIONS(60), 1,
      anon_sym_library,
    STATE(35), 1,
      sym_quoted_string,
    STATE(16), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [261] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(10), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
  [290] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(13), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
  [319] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(71), 2,
      sym_multiline_string,
      sym_atom,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(11), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
  [348] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(11), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
  [377] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(86), 2,
      sym_multiline_string,
      sym_atom,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(13), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_library_repeat1,
  [406] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
    STATE(12), 3,
      sym_sexp,
      sym__field_buildable,
      aux_sym__stanza_executable_repeat1,
  [435] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(25), 2,
      sym_sexp,
      aux_sym__stanza_rule_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [463] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(30), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [491] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(30), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [519] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    STATE(52), 1,
      sym__atom_or_qs,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(26), 3,
      sym__lib_dep,
      sym_library_name,
      aux_sym__field_buildable_repeat1,
  [547] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(111), 2,
      sym_multiline_string,
      sym_atom,
    STATE(19), 2,
      sym_sexp,
      aux_sym__stanza_rule_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [575] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(16), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [603] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_quoted_string,
    STATE(66), 1,
      sym_sexps1,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(23), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [631] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    STATE(59), 1,
      sym__atom_or_qs,
    STATE(68), 1,
      sym__modules_osl,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(34), 2,
      sym_module_name,
      aux_sym__modules_osl_repeat1,
  [661] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(30), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [689] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_quoted_string,
    STATE(72), 1,
      sym_sexps1,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(23), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [717] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(19), 2,
      sym_sexp,
      aux_sym__stanza_rule_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [745] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    STATE(52), 1,
      sym__atom_or_qs,
    ACTIONS(130), 2,
      sym_multiline_string,
      sym_atom,
    STATE(26), 3,
      sym__lib_dep,
      sym_library_name,
      aux_sym__field_buildable_repeat1,
  [773] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    STATE(52), 1,
      sym__atom_or_qs,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(18), 3,
      sym__lib_dep,
      sym_library_name,
      aux_sym__field_buildable_repeat1,
  [801] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(17), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [829] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    STATE(59), 1,
      sym__atom_or_qs,
    STATE(71), 1,
      sym__modules_osl,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(34), 2,
      sym_module_name,
      aux_sym__modules_osl_repeat1,
  [859] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    ACTIONS(145), 2,
      sym_multiline_string,
      sym_atom,
    STATE(30), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [887] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_quoted_string,
    STATE(66), 1,
      sym_sexp,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [911] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_quoted_string,
    STATE(65), 1,
      sym_sexp,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(39), 2,
      sym__atom_or_qs,
      sym_list,
  [935] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    STATE(59), 1,
      sym__atom_or_qs,
    ACTIONS(156), 2,
      sym_multiline_string,
      sym_atom,
    STATE(33), 2,
      sym_module_name,
      aux_sym__modules_osl_repeat1,
  [959] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_quoted_string,
    STATE(59), 1,
      sym__atom_or_qs,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
    STATE(33), 2,
      sym_module_name,
      aux_sym__modules_osl_repeat1,
  [983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1011] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_quoted_string,
    STATE(59), 1,
      sym__atom_or_qs,
    STATE(71), 1,
      sym_module_name,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
  [1031] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_quoted_string,
    STATE(69), 1,
      sym__atom_or_qs,
    STATE(71), 1,
      sym_public_name,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
  [1051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1065] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_quoted_string,
    STATE(52), 1,
      sym__atom_or_qs,
    STATE(72), 1,
      sym_library_name,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
  [1085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1127] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_quoted_string,
    STATE(65), 1,
      sym__atom_or_qs,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
  [1144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_quoted_string,
    STATE(66), 1,
      sym__atom_or_qs,
    ACTIONS(9), 2,
      sym_multiline_string,
      sym_atom,
  [1161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [1187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [1226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [1278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [1291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [1304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 4,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym_atom,
      anon_sym_LPAREN,
  [1330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 3,
      sym_multiline_string,
      sym_atom,
      anon_sym_RPAREN,
  [1342] = 4,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      sym__quoted_string_char,
    ACTIONS(247), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_quoted_string_repeat1,
  [1355] = 4,
    ACTIONS(247), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__quoted_string_char,
    STATE(60), 1,
      aux_sym_quoted_string_repeat1,
  [1368] = 4,
    ACTIONS(247), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      sym__quoted_string_char,
    STATE(62), 1,
      aux_sym_quoted_string_repeat1,
  [1381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_action,
  [1391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_re_export,
    ACTIONS(262), 1,
      anon_sym_select,
  [1401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
  [1408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
  [1415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
  [1422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
  [1429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
  [1436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
  [1443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
  [1450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
  [1457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
  [1464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
  [1471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 146,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 222,
  [SMALL_STATE(9)] = 261,
  [SMALL_STATE(10)] = 290,
  [SMALL_STATE(11)] = 319,
  [SMALL_STATE(12)] = 348,
  [SMALL_STATE(13)] = 377,
  [SMALL_STATE(14)] = 406,
  [SMALL_STATE(15)] = 435,
  [SMALL_STATE(16)] = 463,
  [SMALL_STATE(17)] = 491,
  [SMALL_STATE(18)] = 519,
  [SMALL_STATE(19)] = 547,
  [SMALL_STATE(20)] = 575,
  [SMALL_STATE(21)] = 603,
  [SMALL_STATE(22)] = 631,
  [SMALL_STATE(23)] = 661,
  [SMALL_STATE(24)] = 689,
  [SMALL_STATE(25)] = 717,
  [SMALL_STATE(26)] = 745,
  [SMALL_STATE(27)] = 773,
  [SMALL_STATE(28)] = 801,
  [SMALL_STATE(29)] = 829,
  [SMALL_STATE(30)] = 859,
  [SMALL_STATE(31)] = 887,
  [SMALL_STATE(32)] = 911,
  [SMALL_STATE(33)] = 935,
  [SMALL_STATE(34)] = 959,
  [SMALL_STATE(35)] = 983,
  [SMALL_STATE(36)] = 997,
  [SMALL_STATE(37)] = 1011,
  [SMALL_STATE(38)] = 1031,
  [SMALL_STATE(39)] = 1051,
  [SMALL_STATE(40)] = 1065,
  [SMALL_STATE(41)] = 1085,
  [SMALL_STATE(42)] = 1099,
  [SMALL_STATE(43)] = 1113,
  [SMALL_STATE(44)] = 1127,
  [SMALL_STATE(45)] = 1144,
  [SMALL_STATE(46)] = 1161,
  [SMALL_STATE(47)] = 1174,
  [SMALL_STATE(48)] = 1187,
  [SMALL_STATE(49)] = 1200,
  [SMALL_STATE(50)] = 1213,
  [SMALL_STATE(51)] = 1226,
  [SMALL_STATE(52)] = 1239,
  [SMALL_STATE(53)] = 1252,
  [SMALL_STATE(54)] = 1265,
  [SMALL_STATE(55)] = 1278,
  [SMALL_STATE(56)] = 1291,
  [SMALL_STATE(57)] = 1304,
  [SMALL_STATE(58)] = 1317,
  [SMALL_STATE(59)] = 1330,
  [SMALL_STATE(60)] = 1342,
  [SMALL_STATE(61)] = 1355,
  [SMALL_STATE(62)] = 1368,
  [SMALL_STATE(63)] = 1381,
  [SMALL_STATE(64)] = 1391,
  [SMALL_STATE(65)] = 1401,
  [SMALL_STATE(66)] = 1408,
  [SMALL_STATE(67)] = 1415,
  [SMALL_STATE(68)] = 1422,
  [SMALL_STATE(69)] = 1429,
  [SMALL_STATE(70)] = 1436,
  [SMALL_STATE(71)] = 1443,
  [SMALL_STATE(72)] = 1450,
  [SMALL_STATE(73)] = 1457,
  [SMALL_STATE(74)] = 1464,
  [SMALL_STATE(75)] = 1471,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_executable_repeat1, 2), SHIFT_REPEAT(61),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2), SHIFT_REPEAT(35),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2), SHIFT_REPEAT(6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 2), SHIFT_REPEAT(61),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2), SHIFT_REPEAT(35),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2), SHIFT_REPEAT(2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_rule_repeat1, 2), SHIFT_REPEAT(61),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2), SHIFT_REPEAT(35),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2), SHIFT_REPEAT(3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexps1, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_buildable_repeat1, 2), SHIFT_REPEAT(61),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_buildable_repeat1, 2), SHIFT_REPEAT(35),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_buildable_repeat1, 2), SHIFT_REPEAT(64),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_buildable_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sexps1_repeat1, 2), SHIFT_REPEAT(61),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2), SHIFT_REPEAT(35),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2), SHIFT_REPEAT(20),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__modules_osl_repeat1, 2), SHIFT_REPEAT(61),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__modules_osl_repeat1, 2), SHIFT_REPEAT(35),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__modules_osl_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom_or_qs, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom_or_qs, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lib_dep, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lib_dep, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executable, 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_executable, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_rule_repeat1, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_library, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_library, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_buildable, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_buildable, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library_name, 1, .production_id = 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_name, 1, .production_id = 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_library, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_library, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_rule, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_rule, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executable, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_executable, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_buildable, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_buildable, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_rule, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_rule, 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 1, .production_id = 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1, .production_id = 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(62),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_public_name, 1, .production_id = 2),
  [274] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4),
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
