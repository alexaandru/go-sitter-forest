#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 3
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_atom = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_executable = 4,
  anon_sym_name = 5,
  anon_sym_public_name = 6,
  anon_sym_libraries = 7,
  anon_sym_rule = 8,
  anon_sym_mode = 9,
  anon_sym_target = 10,
  anon_sym_deps = 11,
  anon_sym_action = 12,
  sym_source_file = 13,
  sym_sexp = 14,
  sym_list = 15,
  sym_stanza = 16,
  sym__stanza_executable = 17,
  sym__field_executable = 18,
  sym__field_executable_name = 19,
  sym__field_executable_public_name = 20,
  sym__field_executable_libraries = 21,
  sym_library_name = 22,
  sym_public_name = 23,
  sym_module_name = 24,
  sym__stanza_rule = 25,
  sym_field_rule = 26,
  sym_field_rule_mode = 27,
  sym_field_rule_target = 28,
  sym_field_rule_deps = 29,
  sym_field_rule_action = 30,
  sym_action = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_list_repeat1 = 33,
  aux_sym__stanza_executable_repeat1 = 34,
  aux_sym__field_executable_libraries_repeat1 = 35,
  aux_sym__stanza_rule_repeat1 = 36,
  anon_alias_sym_library_name = 37,
  anon_alias_sym_module_name = 38,
  anon_alias_sym_public_name = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_atom] = "atom",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_executable] = "stanza_name",
  [anon_sym_name] = "field_name",
  [anon_sym_public_name] = "field_name",
  [anon_sym_libraries] = "field_name",
  [anon_sym_rule] = "stanza_name",
  [anon_sym_mode] = "field_name",
  [anon_sym_target] = "field_name",
  [anon_sym_deps] = "field_name",
  [anon_sym_action] = "field_name",
  [sym_source_file] = "source_file",
  [sym_sexp] = "sexp",
  [sym_list] = "list",
  [sym_stanza] = "stanza",
  [sym__stanza_executable] = "_stanza_executable",
  [sym__field_executable] = "_field_executable",
  [sym__field_executable_name] = "_field_executable_name",
  [sym__field_executable_public_name] = "_field_executable_public_name",
  [sym__field_executable_libraries] = "_field_executable_libraries",
  [sym_library_name] = "library_name",
  [sym_public_name] = "public_name",
  [sym_module_name] = "module_name",
  [sym__stanza_rule] = "_stanza_rule",
  [sym_field_rule] = "field_rule",
  [sym_field_rule_mode] = "field_rule_mode",
  [sym_field_rule_target] = "field_rule_target",
  [sym_field_rule_deps] = "field_rule_deps",
  [sym_field_rule_action] = "field_rule_action",
  [sym_action] = "action",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym__stanza_executable_repeat1] = "_stanza_executable_repeat1",
  [aux_sym__field_executable_libraries_repeat1] = "_field_executable_libraries_repeat1",
  [aux_sym__stanza_rule_repeat1] = "_stanza_rule_repeat1",
  [anon_alias_sym_library_name] = "library_name",
  [anon_alias_sym_module_name] = "module_name",
  [anon_alias_sym_public_name] = "public_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_atom] = sym_atom,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_executable] = anon_sym_executable,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_public_name] = anon_sym_name,
  [anon_sym_libraries] = anon_sym_name,
  [anon_sym_rule] = anon_sym_executable,
  [anon_sym_mode] = anon_sym_name,
  [anon_sym_target] = anon_sym_name,
  [anon_sym_deps] = anon_sym_name,
  [anon_sym_action] = anon_sym_name,
  [sym_source_file] = sym_source_file,
  [sym_sexp] = sym_sexp,
  [sym_list] = sym_list,
  [sym_stanza] = sym_stanza,
  [sym__stanza_executable] = sym__stanza_executable,
  [sym__field_executable] = sym__field_executable,
  [sym__field_executable_name] = sym__field_executable_name,
  [sym__field_executable_public_name] = sym__field_executable_public_name,
  [sym__field_executable_libraries] = sym__field_executable_libraries,
  [sym_library_name] = sym_library_name,
  [sym_public_name] = sym_public_name,
  [sym_module_name] = sym_module_name,
  [sym__stanza_rule] = sym__stanza_rule,
  [sym_field_rule] = sym_field_rule,
  [sym_field_rule_mode] = sym_field_rule_mode,
  [sym_field_rule_target] = sym_field_rule_target,
  [sym_field_rule_deps] = sym_field_rule_deps,
  [sym_field_rule_action] = sym_field_rule_action,
  [sym_action] = sym_action,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym__stanza_executable_repeat1] = aux_sym__stanza_executable_repeat1,
  [aux_sym__field_executable_libraries_repeat1] = aux_sym__field_executable_libraries_repeat1,
  [aux_sym__stanza_rule_repeat1] = aux_sym__stanza_rule_repeat1,
  [anon_alias_sym_library_name] = anon_alias_sym_library_name,
  [anon_alias_sym_module_name] = anon_alias_sym_module_name,
  [anon_alias_sym_public_name] = anon_alias_sym_public_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_sexp] = {
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
  [sym__field_executable] = {
    .visible = false,
    .named = true,
  },
  [sym__field_executable_name] = {
    .visible = false,
    .named = true,
  },
  [sym__field_executable_public_name] = {
    .visible = false,
    .named = true,
  },
  [sym__field_executable_libraries] = {
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
  [sym_field_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_field_rule_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_field_rule_target] = {
    .visible = true,
    .named = true,
  },
  [sym_field_rule_deps] = {
    .visible = true,
    .named = true,
  },
  [sym_field_rule_action] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_executable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__field_executable_libraries_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_rule_repeat1] = {
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
};

static inline bool sym_atom_character_set_1(int32_t c) {
  return (c < '='
    ? (c < ','
      ? (c < '%'
        ? (c >= '!' && c <= '#')
        : c <= '%')
      : (c <= '/' || c == ':'))
    : (c <= '=' || (c < '_'
      ? (c < '\\'
        ? (c >= 'A' && c <= 'Z')
        : c <= '\\')
      : (c <= '_' || (c >= 'b' && c <= '}')))));
}

static inline bool sym_atom_character_set_2(int32_t c) {
  return (c < '='
    ? (c < ','
      ? (c < '%'
        ? (c >= '!' && c <= '#')
        : c <= '%')
      : (c <= '/' || c == ':'))
    : (c <= '=' || (c < '_'
      ? (c < '\\'
        ? (c >= 'A' && c <= 'Z')
        : c <= '\\')
      : (c <= '_' || (c >= 'a' && c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 't') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 't') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (sym_atom_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(3);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 51:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(74);
      if (sym_atom_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(56);
      if (sym_atom_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(69);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(76);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(80);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'd') ADVANCE(61);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(73);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(93);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(91);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(86);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(58);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(77);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'g') ADVANCE(65);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'i') ADVANCE(72);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(62);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(63);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'n') ADVANCE(99);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(59);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(70);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'p') ADVANCE(75);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(66);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(97);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(67);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(95);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(55);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(68);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(78);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'x') ADVANCE(64);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_atom);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_executable);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_public_name);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_libraries);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_rule);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_mode);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_target);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_target);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_deps);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_deps);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_action);
      if (sym_atom_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 52},
  [13] = {.lex_state = 52},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 52},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 52},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 52},
  [31] = {.lex_state = 52},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 52},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 52},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 52},
  [52] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_executable] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_public_name] = ACTIONS(1),
    [anon_sym_libraries] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_target] = ACTIONS(1),
    [anon_sym_deps] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(52),
    [sym_sexp] = STATE(33),
    [sym_list] = STATE(18),
    [sym_stanza] = STATE(7),
    [sym__stanza_executable] = STATE(33),
    [sym__stanza_rule] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_atom] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      sym_atom,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_list,
    STATE(3), 2,
      sym_field_rule,
      aux_sym__stanza_rule_repeat1,
    STATE(30), 5,
      sym_sexp,
      sym_field_rule_mode,
      sym_field_rule_target,
      sym_field_rule_deps,
      sym_field_rule_action,
  [24] = 6,
    ACTIONS(5), 1,
      sym_atom,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_list,
    STATE(4), 2,
      sym_field_rule,
      aux_sym__stanza_rule_repeat1,
    STATE(30), 5,
      sym_sexp,
      sym_field_rule_mode,
      sym_field_rule_target,
      sym_field_rule_deps,
      sym_field_rule_action,
  [48] = 6,
    ACTIONS(15), 1,
      sym_atom,
    ACTIONS(18), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_list,
    STATE(4), 2,
      sym_field_rule,
      aux_sym__stanza_rule_repeat1,
    STATE(30), 5,
      sym_sexp,
      sym_field_rule_mode,
      sym_field_rule_target,
      sym_field_rule_deps,
      sym_field_rule_action,
  [72] = 9,
    ACTIONS(23), 1,
      sym_atom,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 1,
      anon_sym_mode,
    ACTIONS(31), 1,
      anon_sym_target,
    ACTIONS(33), 1,
      anon_sym_deps,
    ACTIONS(35), 1,
      anon_sym_action,
    STATE(18), 1,
      sym_list,
    STATE(13), 2,
      sym_sexp,
      aux_sym_list_repeat1,
  [101] = 6,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_atom,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_list,
    STATE(6), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(33), 3,
      sym_sexp,
      sym__stanza_executable,
      sym__stanza_rule,
  [123] = 6,
    ACTIONS(5), 1,
      sym_atom,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_list,
    STATE(6), 2,
      sym_stanza,
      aux_sym_source_file_repeat1,
    STATE(33), 3,
      sym_sexp,
      sym__stanza_executable,
      sym__stanza_rule,
  [145] = 7,
    ACTIONS(23), 1,
      sym_atom,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 1,
      anon_sym_executable,
    ACTIONS(49), 1,
      anon_sym_rule,
    STATE(18), 1,
      sym_list,
    STATE(13), 2,
      sym_sexp,
      aux_sym_list_repeat1,
  [168] = 3,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(10), 5,
      sym__field_executable,
      sym__field_executable_name,
      sym__field_executable_public_name,
      sym__field_executable_libraries,
      aux_sym__stanza_executable_repeat1,
  [182] = 3,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(11), 5,
      sym__field_executable,
      sym__field_executable_name,
      sym__field_executable_public_name,
      sym__field_executable_libraries,
      aux_sym__stanza_executable_repeat1,
  [196] = 3,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(11), 5,
      sym__field_executable,
      sym__field_executable_name,
      sym__field_executable_public_name,
      sym__field_executable_libraries,
      aux_sym__stanza_executable_repeat1,
  [210] = 5,
    ACTIONS(5), 1,
      sym_atom,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_list,
    STATE(13), 2,
      sym_sexp,
      aux_sym_list_repeat1,
  [227] = 5,
    ACTIONS(5), 1,
      sym_atom,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_list,
    STATE(14), 2,
      sym_sexp,
      aux_sym_list_repeat1,
  [244] = 5,
    ACTIONS(64), 1,
      sym_atom,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_list,
    STATE(14), 2,
      sym_sexp,
      aux_sym_list_repeat1,
  [261] = 5,
    ACTIONS(5), 1,
      sym_atom,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_list,
    STATE(48), 1,
      sym_sexp,
    STATE(49), 1,
      sym_action,
  [277] = 1,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [284] = 3,
    ACTIONS(74), 1,
      sym_atom,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    STATE(19), 2,
      sym_library_name,
      aux_sym__field_executable_libraries_repeat1,
  [295] = 1,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [302] = 3,
    ACTIONS(74), 1,
      sym_atom,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(20), 2,
      sym_library_name,
      aux_sym__field_executable_libraries_repeat1,
  [313] = 3,
    ACTIONS(82), 1,
      sym_atom,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(20), 2,
      sym_library_name,
      aux_sym__field_executable_libraries_repeat1,
  [324] = 4,
    ACTIONS(5), 1,
      sym_atom,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_list,
    STATE(47), 1,
      sym_sexp,
  [337] = 1,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [344] = 4,
    ACTIONS(5), 1,
      sym_atom,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_list,
    STATE(45), 1,
      sym_sexp,
  [357] = 3,
    ACTIONS(89), 1,
      anon_sym_name,
    ACTIONS(91), 1,
      anon_sym_public_name,
    ACTIONS(93), 1,
      anon_sym_libraries,
  [367] = 1,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_LPAREN,
  [373] = 1,
    ACTIONS(97), 3,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [379] = 1,
    ACTIONS(99), 3,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [385] = 1,
    ACTIONS(101), 3,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [391] = 1,
    ACTIONS(103), 3,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [397] = 1,
    ACTIONS(105), 3,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [403] = 1,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_LPAREN,
  [409] = 1,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_LPAREN,
  [415] = 1,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_LPAREN,
  [421] = 1,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_LPAREN,
  [427] = 1,
    ACTIONS(115), 2,
      sym_atom,
      anon_sym_RPAREN,
  [432] = 1,
    ACTIONS(117), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [437] = 1,
    ACTIONS(119), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [442] = 1,
    ACTIONS(121), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [447] = 1,
    ACTIONS(123), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [452] = 2,
    ACTIONS(125), 1,
      sym_atom,
    STATE(44), 1,
      sym_module_name,
  [459] = 2,
    ACTIONS(127), 1,
      sym_atom,
    STATE(43), 1,
      sym_public_name,
  [466] = 1,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
  [470] = 1,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
  [474] = 1,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
  [478] = 1,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
  [482] = 1,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
  [486] = 1,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
  [490] = 1,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
  [494] = 1,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
  [498] = 1,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
  [502] = 1,
    ACTIONS(147), 1,
      sym_atom,
  [506] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 101,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 145,
  [SMALL_STATE(9)] = 168,
  [SMALL_STATE(10)] = 182,
  [SMALL_STATE(11)] = 196,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 227,
  [SMALL_STATE(14)] = 244,
  [SMALL_STATE(15)] = 261,
  [SMALL_STATE(16)] = 277,
  [SMALL_STATE(17)] = 284,
  [SMALL_STATE(18)] = 295,
  [SMALL_STATE(19)] = 302,
  [SMALL_STATE(20)] = 313,
  [SMALL_STATE(21)] = 324,
  [SMALL_STATE(22)] = 337,
  [SMALL_STATE(23)] = 344,
  [SMALL_STATE(24)] = 357,
  [SMALL_STATE(25)] = 367,
  [SMALL_STATE(26)] = 373,
  [SMALL_STATE(27)] = 379,
  [SMALL_STATE(28)] = 385,
  [SMALL_STATE(29)] = 391,
  [SMALL_STATE(30)] = 397,
  [SMALL_STATE(31)] = 403,
  [SMALL_STATE(32)] = 409,
  [SMALL_STATE(33)] = 415,
  [SMALL_STATE(34)] = 421,
  [SMALL_STATE(35)] = 427,
  [SMALL_STATE(36)] = 432,
  [SMALL_STATE(37)] = 437,
  [SMALL_STATE(38)] = 442,
  [SMALL_STATE(39)] = 447,
  [SMALL_STATE(40)] = 452,
  [SMALL_STATE(41)] = 459,
  [SMALL_STATE(42)] = 466,
  [SMALL_STATE(43)] = 470,
  [SMALL_STATE(44)] = 474,
  [SMALL_STATE(45)] = 478,
  [SMALL_STATE(46)] = 482,
  [SMALL_STATE(47)] = 486,
  [SMALL_STATE(48)] = 490,
  [SMALL_STATE(49)] = 494,
  [SMALL_STATE(50)] = 498,
  [SMALL_STATE(51)] = 502,
  [SMALL_STATE(52)] = 506,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2), SHIFT_REPEAT(18),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2), SHIFT_REPEAT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2), SHIFT_REPEAT(24),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_executable_libraries_repeat1, 2), SHIFT_REPEAT(35),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_executable_libraries_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executable, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_rule_action, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_rule_deps, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_rule_target, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_rule_mode, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_rule, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_rule, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_rule, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executable, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_name, 1, .production_id = 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_executable_libraries, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_executable_name, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_executable_public_name, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_executable_libraries, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_public_name, 1, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
