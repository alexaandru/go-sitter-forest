#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  aux_sym__quoted_string_token1 = 16,
  sym__unquoted_string = 17,
  sym_escape_sequence = 18,
  anon_sym_BSLASH = 19,
  aux_sym_comment_token1 = 20,
  aux_sym_comment_token2 = 21,
  sym_config = 22,
  sym_section = 23,
  sym_section_header = 24,
  sym__section_body = 25,
  sym_subsection_name = 26,
  sym_variable = 27,
  sym__value = 28,
  sym__boolean = 29,
  sym_string = 30,
  sym__quoted_string = 31,
  sym__line_continuation = 32,
  sym_comment = 33,
  aux_sym_config_repeat1 = 34,
  aux_sym__section_body_repeat1 = 35,
  aux_sym_subsection_name_repeat1 = 36,
  aux_sym_string_repeat1 = 37,
  aux_sym__quoted_string_repeat1 = 38,
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
  [aux_sym__quoted_string_token1] = "_quoted_string_token1",
  [sym__unquoted_string] = "_unquoted_string",
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
  [sym__quoted_string] = "_quoted_string",
  [sym__line_continuation] = "_line_continuation",
  [sym_comment] = "comment",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym__section_body_repeat1] = "_section_body_repeat1",
  [aux_sym_subsection_name_repeat1] = "subsection_name_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
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
  [aux_sym__quoted_string_token1] = aux_sym__quoted_string_token1,
  [sym__unquoted_string] = sym__unquoted_string,
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
  [sym__quoted_string] = sym__quoted_string,
  [sym__line_continuation] = sym__line_continuation,
  [sym_comment] = sym_comment,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym__section_body_repeat1] = aux_sym__section_body_repeat1,
  [aux_sym_subsection_name_repeat1] = aux_sym_subsection_name_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__quoted_string_repeat1] = aux_sym__quoted_string_repeat1,
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
  [aux_sym__quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
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
  [sym__quoted_string] = {
    .visible = false,
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
  [aux_sym__quoted_string_repeat1] = {
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
  [23] = 15,
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
  [41] = 37,
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
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 19,
        '\r', 1,
        '"', 21,
        '=', 40,
        '[', 20,
        '\\', 73,
        ']', 22,
        'f', 23,
        'n', 30,
        'o', 27,
        't', 31,
        'y', 24,
        '#', 74,
        ';', 74,
        '.', 37,
        '_', 37,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == 'y') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(39);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        'U', 16,
        'u', 12,
        '"', 71,
        '\\', 71,
        'b', 71,
        'f', 71,
        'n', 71,
        'r', 71,
        't', 71,
      );
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
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
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 's') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_section_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (set_contains(sym_integer_character_set_1, 15, lookahead)) ADVANCE(37);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_subsection_name_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_subsection_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (set_contains(sym_integer_character_set_1, 15, lookahead)) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      ADVANCE_MAP(
        'U', 16,
        'u', 12,
        '"', 71,
        '\\', 71,
        'b', 71,
        'f', 71,
        'n', 71,
        'r', 71,
        't', 71,
      );
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(76);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
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
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(31),
    [sym_section] = STATE(4),
    [sym_section_header] = STATE(26),
    [sym_comment] = STATE(34),
    [aux_sym_config_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_config_token1] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym__unquoted_string,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    STATE(7), 3,
      sym__quoted_string,
      sym__line_continuation,
      aux_sym_string_repeat1,
    STATE(28), 3,
      sym__value,
      sym__boolean,
      sym_string,
    ACTIONS(13), 7,
      anon_sym_yes,
      anon_sym_on,
      anon_sym_no,
      anon_sym_off,
      sym_true,
      sym_false,
      sym_integer,
  [29] = 7,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym_config_token1,
    ACTIONS(24), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_section_header,
    STATE(34), 1,
      sym_comment,
    STATE(3), 2,
      sym_section,
      aux_sym_config_repeat1,
  [52] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      aux_sym_config_token1,
    STATE(26), 1,
      sym_section_header,
    STATE(34), 1,
      sym_comment,
    STATE(3), 2,
      sym_section,
      aux_sym_config_repeat1,
  [75] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(36), 1,
      aux_sym_config_token1,
    ACTIONS(38), 1,
      sym_name,
    STATE(8), 1,
      aux_sym__section_body_repeat1,
    STATE(25), 1,
      sym_variable,
    STATE(33), 1,
      sym_comment,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [98] = 7,
    ACTIONS(42), 1,
      aux_sym_config_token1,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(48), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      aux_sym__section_body_repeat1,
    STATE(25), 1,
      sym_variable,
    STATE(33), 1,
      sym_comment,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [121] = 5,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      sym__unquoted_string,
    ACTIONS(51), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
    STATE(9), 3,
      sym__quoted_string,
      sym__line_continuation,
      aux_sym_string_repeat1,
  [140] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(38), 1,
      sym_name,
    ACTIONS(57), 1,
      aux_sym_config_token1,
    STATE(6), 1,
      aux_sym__section_body_repeat1,
    STATE(25), 1,
      sym_variable,
    STATE(33), 1,
      sym_comment,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [163] = 5,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      sym__unquoted_string,
    ACTIONS(67), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
    STATE(9), 3,
      sym__quoted_string,
      sym__line_continuation,
      aux_sym_string_repeat1,
  [182] = 4,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(72), 2,
      aux_sym__quoted_string_token1,
      sym_escape_sequence,
    STATE(12), 2,
      sym__line_continuation,
      aux_sym__quoted_string_repeat1,
  [197] = 4,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 2,
      aux_sym__quoted_string_token1,
      sym_escape_sequence,
    STATE(10), 2,
      sym__line_continuation,
      aux_sym__quoted_string_repeat1,
  [212] = 4,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      aux_sym__quoted_string_token1,
      sym_escape_sequence,
    STATE(12), 2,
      sym__line_continuation,
      aux_sym__quoted_string_repeat1,
  [227] = 1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      anon_sym_LBRACK,
      sym_name,
      aux_sym_comment_token1,
  [235] = 1,
    ACTIONS(88), 5,
      aux_sym_config_token1,
      anon_sym_DQUOTE,
      sym__unquoted_string,
      anon_sym_BSLASH,
      aux_sym_comment_token1,
  [243] = 1,
    ACTIONS(90), 5,
      aux_sym_config_token1,
      anon_sym_DQUOTE,
      sym__unquoted_string,
      anon_sym_BSLASH,
      aux_sym_comment_token1,
  [251] = 1,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      anon_sym_LBRACK,
      sym_name,
      aux_sym_comment_token1,
  [259] = 1,
    ACTIONS(94), 5,
      aux_sym_config_token1,
      anon_sym_DQUOTE,
      sym__unquoted_string,
      anon_sym_BSLASH,
      aux_sym_comment_token1,
  [267] = 1,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      anon_sym_LBRACK,
      aux_sym_comment_token1,
  [274] = 4,
    ACTIONS(96), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(98), 1,
      sym_escape_sequence,
    STATE(21), 1,
      aux_sym_subsection_name_repeat1,
    STATE(32), 1,
      sym_subsection_name,
  [287] = 1,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      anon_sym_LBRACK,
      aux_sym_comment_token1,
  [294] = 4,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(106), 1,
      sym_escape_sequence,
    STATE(22), 1,
      aux_sym_subsection_name_repeat1,
  [307] = 4,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(113), 1,
      sym_escape_sequence,
    STATE(22), 1,
      aux_sym_subsection_name_repeat1,
  [320] = 1,
    ACTIONS(116), 4,
      anon_sym_DQUOTE,
      aux_sym__quoted_string_token1,
      sym_escape_sequence,
      anon_sym_BSLASH,
  [327] = 2,
    ACTIONS(120), 1,
      anon_sym_EQ,
    ACTIONS(118), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
  [335] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(122), 1,
      aux_sym_config_token1,
    STATE(35), 1,
      sym_comment,
  [345] = 2,
    ACTIONS(124), 1,
      aux_sym_config_token1,
    STATE(20), 1,
      sym__section_body,
  [352] = 2,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
  [359] = 1,
    ACTIONS(130), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
  [364] = 2,
    ACTIONS(132), 1,
      aux_sym_config_token1,
    ACTIONS(134), 1,
      aux_sym_comment_token2,
  [371] = 1,
    ACTIONS(136), 1,
      aux_sym_config_token1,
  [375] = 1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
  [379] = 1,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
  [383] = 1,
    ACTIONS(122), 1,
      aux_sym_config_token1,
  [387] = 1,
    ACTIONS(142), 1,
      aux_sym_config_token1,
  [391] = 1,
    ACTIONS(144), 1,
      aux_sym_config_token1,
  [395] = 1,
    ACTIONS(146), 1,
      sym_section_name,
  [399] = 1,
    ACTIONS(148), 1,
      aux_sym_config_token1,
  [403] = 1,
    ACTIONS(150), 1,
      aux_sym_config_token1,
  [407] = 1,
    ACTIONS(152), 1,
      aux_sym_config_token1,
  [411] = 1,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
  [415] = 1,
    ACTIONS(156), 1,
      aux_sym_config_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 163,
  [SMALL_STATE(10)] = 182,
  [SMALL_STATE(11)] = 197,
  [SMALL_STATE(12)] = 212,
  [SMALL_STATE(13)] = 227,
  [SMALL_STATE(14)] = 235,
  [SMALL_STATE(15)] = 243,
  [SMALL_STATE(16)] = 251,
  [SMALL_STATE(17)] = 259,
  [SMALL_STATE(18)] = 267,
  [SMALL_STATE(19)] = 274,
  [SMALL_STATE(20)] = 287,
  [SMALL_STATE(21)] = 294,
  [SMALL_STATE(22)] = 307,
  [SMALL_STATE(23)] = 320,
  [SMALL_STATE(24)] = 327,
  [SMALL_STATE(25)] = 335,
  [SMALL_STATE(26)] = 345,
  [SMALL_STATE(27)] = 352,
  [SMALL_STATE(28)] = 359,
  [SMALL_STATE(29)] = 364,
  [SMALL_STATE(30)] = 371,
  [SMALL_STATE(31)] = 375,
  [SMALL_STATE(32)] = 379,
  [SMALL_STATE(33)] = 383,
  [SMALL_STATE(34)] = 387,
  [SMALL_STATE(35)] = 391,
  [SMALL_STATE(36)] = 395,
  [SMALL_STATE(37)] = 399,
  [SMALL_STATE(38)] = 403,
  [SMALL_STATE(39)] = 407,
  [SMALL_STATE(40)] = 411,
  [SMALL_STATE(41)] = 415,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_body, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section_body_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_body_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_body_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_body_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_body, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_continuation, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section_body_repeat1, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_name, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_name_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_continuation, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 6, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
