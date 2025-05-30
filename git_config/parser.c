#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym_config_token1 = 1,
  anon_sym_LBRACK = 2,
  anon_sym_DQUOTE = 3,
  anon_sym_RBRACK = 4,
  sym_section_name = 5,
  aux_sym_subsection_name_token1 = 6,
  anon_sym_EQ = 7,
  sym_name = 8,
  anon_sym_yes = 9,
  anon_sym_on = 10,
  anon_sym_no = 11,
  anon_sym_off = 12,
  sym_true = 13,
  sym_false = 14,
  sym_integer = 15,
  aux_sym__quoted_string_content_token1 = 16,
  aux_sym__unquoted_string_token1 = 17,
  anon_sym_BANG = 18,
  sym_escape_sequence = 19,
  anon_sym_BSLASH = 20,
  aux_sym_comment_token1 = 21,
  aux_sym_comment_token2 = 22,
  sym_config = 23,
  sym_section = 24,
  sym_section_header = 25,
  sym__section_body = 26,
  sym_subsection_name = 27,
  sym_variable = 28,
  sym__value = 29,
  sym__boolean = 30,
  sym_string = 31,
  sym__shell_command_string = 32,
  sym__string_fragment = 33,
  sym__quoted_string = 34,
  aux_sym__quoted_string_content = 35,
  sym__unquoted_string = 36,
  sym_shell_command = 37,
  sym__line_continuation = 38,
  sym_comment = 39,
  aux_sym_config_repeat1 = 40,
  aux_sym__section_body_repeat1 = 41,
  aux_sym_subsection_name_repeat1 = 42,
  aux_sym_string_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_config_token1] = "config_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_RBRACK] = "]",
  [sym_section_name] = "section_name",
  [aux_sym_subsection_name_token1] = "subsection_name_token1",
  [anon_sym_EQ] = "=",
  [sym_name] = "name",
  [anon_sym_yes] = "true",
  [anon_sym_on] = "true",
  [anon_sym_no] = "false",
  [anon_sym_off] = "false",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_integer] = "integer",
  [aux_sym__quoted_string_content_token1] = "_quoted_string_content_token1",
  [aux_sym__unquoted_string_token1] = "_unquoted_string_token1",
  [anon_sym_BANG] = "!",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_config] = "config",
  [sym_section] = "section",
  [sym_section_header] = "section_header",
  [sym__section_body] = "_section_body",
  [sym_subsection_name] = "subsection_name",
  [sym_variable] = "variable",
  [sym__value] = "_value",
  [sym__boolean] = "_boolean",
  [sym_string] = "string",
  [sym__shell_command_string] = "_shell_command_string",
  [sym__string_fragment] = "_string_fragment",
  [sym__quoted_string] = "_quoted_string",
  [aux_sym__quoted_string_content] = "_quoted_string_content",
  [sym__unquoted_string] = "_unquoted_string",
  [sym_shell_command] = "shell_command",
  [sym__line_continuation] = "_line_continuation",
  [sym_comment] = "comment",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym__section_body_repeat1] = "_section_body_repeat1",
  [aux_sym_subsection_name_repeat1] = "subsection_name_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_config_token1] = aux_sym_config_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_section_name] = sym_section_name,
  [aux_sym_subsection_name_token1] = aux_sym_subsection_name_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_name] = sym_name,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_on] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_off] = anon_sym_no,
  [sym_true] = anon_sym_yes,
  [sym_false] = anon_sym_no,
  [sym_integer] = sym_integer,
  [aux_sym__quoted_string_content_token1] = aux_sym__quoted_string_content_token1,
  [aux_sym__unquoted_string_token1] = aux_sym__unquoted_string_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_config] = sym_config,
  [sym_section] = sym_section,
  [sym_section_header] = sym_section_header,
  [sym__section_body] = sym__section_body,
  [sym_subsection_name] = sym_subsection_name,
  [sym_variable] = sym_variable,
  [sym__value] = sym__value,
  [sym__boolean] = sym__boolean,
  [sym_string] = sym_string,
  [sym__shell_command_string] = sym__shell_command_string,
  [sym__string_fragment] = sym__string_fragment,
  [sym__quoted_string] = sym__quoted_string,
  [aux_sym__quoted_string_content] = aux_sym__quoted_string_content,
  [sym__unquoted_string] = sym__unquoted_string,
  [sym_shell_command] = sym_shell_command,
  [sym__line_continuation] = sym__line_continuation,
  [sym_comment] = sym_comment,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym__section_body_repeat1] = aux_sym__section_body_repeat1,
  [aux_sym_subsection_name_repeat1] = aux_sym_subsection_name_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_subsection_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quoted_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym__section_body] = {
    .visible = false,
    .named = true,
  },
  [sym_subsection_name] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__shell_command_string] = {
    .visible = false,
    .named = true,
  },
  [sym__string_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__quoted_string_content] = {
    .visible = false,
    .named = false,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym__line_continuation] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__section_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subsection_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_value = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 2},
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
  [27] = 17,
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
  [52] = 47,
};

static TSCharacterRange sym_integer_character_set_1[] = {
  {'0', '9'}, {'E', 'E'}, {'G', 'G'}, {'K', 'K'}, {'M', 'M'}, {'P', 'P'}, {'T', 'T'}, {'Y', 'Z'},
  {'e', 'e'}, {'g', 'g'}, {'k', 'k'}, {'m', 'm'}, {'p', 'p'}, {'t', 't'}, {'y', 'z'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '\n', 20,
        '\r', 1,
        '!', 73,
        '"', 22,
        '=', 41,
        '[', 21,
        '\\', 76,
        ']', 23,
        'f', 24,
        'n', 31,
        'o', 28,
        't', 32,
        'y', 25,
        '#', 77,
        ';', 77,
        '.', 38,
        '_', 38,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(73);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(73);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 73,
        '"', 22,
        '\\', 75,
        'f', 60,
        'n', 67,
        'o', 64,
        't', 68,
        'y', 61,
      );
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(40);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        'U', 17,
        'u', 13,
        '"', 74,
        '\\', 74,
        'b', 74,
        'f', 74,
        'n', 74,
        'r', 74,
        't', 74,
      );
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 's') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 's') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_section_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (set_contains(sym_integer_character_set_1, 15, lookahead)) ADVANCE(38);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_subsection_name_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_subsection_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (set_contains(sym_integer_character_set_1, 15, lookahead)) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '!') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < ' ' || '"' < lookahead)) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      ADVANCE_MAP(
        'U', 17,
        'u', 13,
        '"', 74,
        '\\', 74,
        'b', 74,
        'f', 74,
        'n', 74,
        'r', 74,
        't', 74,
      );
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(79);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 9},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_config_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_section_name] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(48),
    [sym_section] = STATE(12),
    [sym_section_header] = STATE(36),
    [sym_comment] = STATE(49),
    [aux_sym_config_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_config_token1] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    STATE(24), 1,
      sym_shell_command,
    STATE(40), 1,
      sym__shell_command_string,
    STATE(39), 3,
      sym__value,
      sym__boolean,
      sym_string,
    STATE(3), 5,
      sym__string_fragment,
      sym__quoted_string,
      sym__unquoted_string,
      sym__line_continuation,
      aux_sym_string_repeat1,
    ACTIONS(13), 7,
      anon_sym_yes,
      anon_sym_on,
      anon_sym_no,
      anon_sym_off,
      sym_true,
      sym_false,
      sym_integer,
  [40] = 5,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
    ACTIONS(25), 2,
      aux_sym__unquoted_string_token1,
      anon_sym_BANG,
    STATE(4), 5,
      sym__string_fragment,
      sym__quoted_string,
      sym__unquoted_string,
      sym__line_continuation,
      aux_sym_string_repeat1,
  [62] = 5,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
    ACTIONS(32), 2,
      aux_sym__unquoted_string_token1,
      anon_sym_BANG,
    STATE(4), 5,
      sym__string_fragment,
      sym__quoted_string,
      sym__unquoted_string,
      sym__line_continuation,
      aux_sym_string_repeat1,
  [84] = 5,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
    ACTIONS(40), 2,
      aux_sym__unquoted_string_token1,
      anon_sym_BANG,
    STATE(6), 5,
      sym__string_fragment,
      sym__quoted_string,
      sym__unquoted_string,
      sym__line_continuation,
      aux_sym_string_repeat1,
  [106] = 5,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 2,
      aux_sym__unquoted_string_token1,
      anon_sym_BANG,
    ACTIONS(42), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
    STATE(4), 5,
      sym__string_fragment,
      sym__quoted_string,
      sym__unquoted_string,
      sym__line_continuation,
      aux_sym_string_repeat1,
  [128] = 5,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
    ACTIONS(46), 2,
      aux_sym__unquoted_string_token1,
      anon_sym_BANG,
    STATE(8), 5,
      sym__string_fragment,
      sym__quoted_string,
      sym__unquoted_string,
      sym__line_continuation,
      aux_sym_string_repeat1,
  [150] = 5,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 2,
      aux_sym__unquoted_string_token1,
      anon_sym_BANG,
    ACTIONS(48), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
    STATE(4), 5,
      sym__string_fragment,
      sym__quoted_string,
      sym__unquoted_string,
      sym__line_continuation,
      aux_sym_string_repeat1,
  [172] = 7,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      aux_sym_config_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_section_header,
    STATE(49), 1,
      sym_comment,
    STATE(9), 2,
      sym_section,
      aux_sym_config_repeat1,
  [195] = 6,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_BANG,
    ACTIONS(67), 1,
      anon_sym_BSLASH,
    STATE(26), 1,
      sym_shell_command,
    ACTIONS(63), 2,
      aux_sym__quoted_string_content_token1,
      sym_escape_sequence,
    STATE(19), 2,
      aux_sym__quoted_string_content,
      sym__line_continuation,
  [216] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(71), 1,
      aux_sym_config_token1,
    ACTIONS(73), 1,
      sym_name,
    STATE(14), 1,
      aux_sym__section_body_repeat1,
    STATE(34), 1,
      sym_variable,
    STATE(46), 1,
      sym_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [239] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      aux_sym_config_token1,
    STATE(36), 1,
      sym_section_header,
    STATE(49), 1,
      sym_comment,
    STATE(9), 2,
      sym_section,
      aux_sym_config_repeat1,
  [262] = 7,
    ACTIONS(81), 1,
      aux_sym_config_token1,
    ACTIONS(84), 1,
      sym_name,
    ACTIONS(87), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      aux_sym__section_body_repeat1,
    STATE(34), 1,
      sym_variable,
    STATE(46), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [285] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(73), 1,
      sym_name,
    ACTIONS(92), 1,
      aux_sym_config_token1,
    STATE(13), 1,
      aux_sym__section_body_repeat1,
    STATE(34), 1,
      sym_variable,
    STATE(46), 1,
      sym_comment,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [308] = 4,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 2,
      aux_sym__quoted_string_content_token1,
      sym_escape_sequence,
    STATE(19), 2,
      aux_sym__quoted_string_content,
      sym__line_continuation,
  [323] = 2,
    ACTIONS(94), 3,
      aux_sym_config_token1,
      anon_sym_BSLASH,
      aux_sym_comment_token1,
    ACTIONS(96), 3,
      anon_sym_DQUOTE,
      aux_sym__unquoted_string_token1,
      anon_sym_BANG,
  [334] = 1,
    ACTIONS(98), 6,
      aux_sym_config_token1,
      anon_sym_DQUOTE,
      aux_sym__unquoted_string_token1,
      anon_sym_BANG,
      anon_sym_BSLASH,
      aux_sym_comment_token1,
  [343] = 1,
    ACTIONS(100), 6,
      aux_sym_config_token1,
      anon_sym_DQUOTE,
      aux_sym__unquoted_string_token1,
      anon_sym_BANG,
      anon_sym_BSLASH,
      aux_sym_comment_token1,
  [352] = 4,
    ACTIONS(67), 1,
      anon_sym_BSLASH,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 2,
      aux_sym__quoted_string_content_token1,
      sym_escape_sequence,
    STATE(21), 2,
      aux_sym__quoted_string_content,
      sym__line_continuation,
  [367] = 1,
    ACTIONS(106), 6,
      aux_sym_config_token1,
      anon_sym_DQUOTE,
      aux_sym__unquoted_string_token1,
      anon_sym_BANG,
      anon_sym_BSLASH,
      aux_sym_comment_token1,
  [376] = 4,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    ACTIONS(110), 2,
      aux_sym__quoted_string_content_token1,
      sym_escape_sequence,
    STATE(21), 2,
      aux_sym__quoted_string_content,
      sym__line_continuation,
  [391] = 4,
    ACTIONS(67), 1,
      anon_sym_BSLASH,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 2,
      aux_sym__quoted_string_content_token1,
      sym_escape_sequence,
    STATE(21), 2,
      aux_sym__quoted_string_content,
      sym__line_continuation,
  [406] = 1,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      anon_sym_LBRACK,
      sym_name,
      aux_sym_comment_token1,
  [414] = 3,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 2,
      aux_sym__unquoted_string_token1,
      anon_sym_BANG,
    STATE(5), 2,
      sym__quoted_string,
      sym__unquoted_string,
  [426] = 1,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      anon_sym_LBRACK,
      sym_name,
      aux_sym_comment_token1,
  [434] = 3,
    ACTIONS(67), 1,
      anon_sym_BSLASH,
    ACTIONS(122), 2,
      aux_sym__quoted_string_content_token1,
      sym_escape_sequence,
    STATE(22), 2,
      aux_sym__quoted_string_content,
      sym__line_continuation,
  [446] = 1,
    ACTIONS(124), 4,
      anon_sym_DQUOTE,
      aux_sym__quoted_string_content_token1,
      sym_escape_sequence,
      anon_sym_BSLASH,
  [453] = 4,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(131), 1,
      sym_escape_sequence,
    STATE(28), 1,
      aux_sym_subsection_name_repeat1,
  [466] = 4,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(138), 1,
      sym_escape_sequence,
    STATE(28), 1,
      aux_sym_subsection_name_repeat1,
  [479] = 1,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      anon_sym_LBRACK,
      aux_sym_comment_token1,
  [486] = 1,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      anon_sym_LBRACK,
      aux_sym_comment_token1,
  [493] = 4,
    ACTIONS(142), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(144), 1,
      sym_escape_sequence,
    STATE(29), 1,
      aux_sym_subsection_name_repeat1,
    STATE(44), 1,
      sym_subsection_name,
  [506] = 2,
    ACTIONS(148), 1,
      anon_sym_EQ,
    ACTIONS(146), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
  [514] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(150), 1,
      aux_sym_config_token1,
    STATE(45), 1,
      sym_comment,
  [524] = 1,
    ACTIONS(152), 3,
      aux_sym__quoted_string_content_token1,
      sym_escape_sequence,
      anon_sym_BSLASH,
  [530] = 2,
    ACTIONS(154), 1,
      aux_sym_config_token1,
    STATE(30), 1,
      sym__section_body,
  [537] = 2,
    ACTIONS(156), 1,
      aux_sym_config_token1,
    ACTIONS(158), 1,
      aux_sym_comment_token2,
  [544] = 2,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
  [551] = 1,
    ACTIONS(164), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
  [556] = 1,
    ACTIONS(21), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
  [561] = 1,
    ACTIONS(166), 1,
      aux_sym_config_token1,
  [565] = 1,
    ACTIONS(168), 1,
      sym_section_name,
  [569] = 1,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
  [573] = 1,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
  [577] = 1,
    ACTIONS(174), 1,
      aux_sym_config_token1,
  [581] = 1,
    ACTIONS(150), 1,
      aux_sym_config_token1,
  [585] = 1,
    ACTIONS(176), 1,
      aux_sym_config_token1,
  [589] = 1,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
  [593] = 1,
    ACTIONS(180), 1,
      aux_sym_config_token1,
  [597] = 1,
    ACTIONS(182), 1,
      aux_sym_config_token1,
  [601] = 1,
    ACTIONS(184), 1,
      aux_sym_config_token1,
  [605] = 1,
    ACTIONS(186), 1,
      aux_sym_config_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 150,
  [SMALL_STATE(9)] = 172,
  [SMALL_STATE(10)] = 195,
  [SMALL_STATE(11)] = 216,
  [SMALL_STATE(12)] = 239,
  [SMALL_STATE(13)] = 262,
  [SMALL_STATE(14)] = 285,
  [SMALL_STATE(15)] = 308,
  [SMALL_STATE(16)] = 323,
  [SMALL_STATE(17)] = 334,
  [SMALL_STATE(18)] = 343,
  [SMALL_STATE(19)] = 352,
  [SMALL_STATE(20)] = 367,
  [SMALL_STATE(21)] = 376,
  [SMALL_STATE(22)] = 391,
  [SMALL_STATE(23)] = 406,
  [SMALL_STATE(24)] = 414,
  [SMALL_STATE(25)] = 426,
  [SMALL_STATE(26)] = 434,
  [SMALL_STATE(27)] = 446,
  [SMALL_STATE(28)] = 453,
  [SMALL_STATE(29)] = 466,
  [SMALL_STATE(30)] = 479,
  [SMALL_STATE(31)] = 486,
  [SMALL_STATE(32)] = 493,
  [SMALL_STATE(33)] = 506,
  [SMALL_STATE(34)] = 514,
  [SMALL_STATE(35)] = 524,
  [SMALL_STATE(36)] = 530,
  [SMALL_STATE(37)] = 537,
  [SMALL_STATE(38)] = 544,
  [SMALL_STATE(39)] = 551,
  [SMALL_STATE(40)] = 556,
  [SMALL_STATE(41)] = 561,
  [SMALL_STATE(42)] = 565,
  [SMALL_STATE(43)] = 569,
  [SMALL_STATE(44)] = 573,
  [SMALL_STATE(45)] = 577,
  [SMALL_STATE(46)] = 581,
  [SMALL_STATE(47)] = 585,
  [SMALL_STATE(48)] = 589,
  [SMALL_STATE(49)] = 593,
  [SMALL_STATE(50)] = 597,
  [SMALL_STATE(51)] = 601,
  [SMALL_STATE(52)] = 605,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_command_string, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_command_string, 3, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_command_string, 4, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shell_command_string, 5, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_body, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section_body_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_body_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_body_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_body_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_body, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unquoted_string, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_continuation, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content, 2, 0, 0), SHIFT_REPEAT(21),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content, 2, 0, 0), SHIFT_REPEAT(52),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section_body_repeat1, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_continuation, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_name_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_name, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_command, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 6, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [178] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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

TS_PUBLIC const TSLanguage *tree_sitter_git_config(void) {
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
