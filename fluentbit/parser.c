#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_AT = 3,
  anon_sym_SET = 4,
  anon_sym_INCLUDE = 5,
  anon_sym_EQ = 6,
  sym_section_header_type = 7,
  sym_key_type = 8,
  sym_value_type = 9,
  sym__newline = 10,
  sym__line_only_spaces = 11,
  sym__INDENT = 12,
  sym__WS = 13,
  sym_comment = 14,
  sym_config = 15,
  sym__config_block = 16,
  sym_section = 17,
  sym_section_header = 18,
  sym_section_body = 19,
  sym_directive = 20,
  sym_directive_set = 21,
  sym_directive_include = 22,
  sym__assign_expr = 23,
  sym_entry = 24,
  aux_sym_config_repeat1 = 25,
  aux_sym_section_body_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [anon_sym_SET] = "SET",
  [anon_sym_INCLUDE] = "INCLUDE",
  [anon_sym_EQ] = "=",
  [sym_section_header_type] = "section_header_type",
  [sym_key_type] = "key_type",
  [sym_value_type] = "value_type",
  [sym__newline] = "_newline",
  [sym__line_only_spaces] = "_line_only_spaces",
  [sym__INDENT] = "_INDENT",
  [sym__WS] = "_WS",
  [sym_comment] = "comment",
  [sym_config] = "config",
  [sym__config_block] = "_config_block",
  [sym_section] = "section",
  [sym_section_header] = "section_header",
  [sym_section_body] = "section_body",
  [sym_directive] = "directive",
  [sym_directive_set] = "directive_set",
  [sym_directive_include] = "directive_include",
  [sym__assign_expr] = "_assign_expr",
  [sym_entry] = "entry",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_section_body_repeat1] = "section_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_INCLUDE] = anon_sym_INCLUDE,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_section_header_type] = sym_section_header_type,
  [sym_key_type] = sym_key_type,
  [sym_value_type] = sym_value_type,
  [sym__newline] = sym__newline,
  [sym__line_only_spaces] = sym__line_only_spaces,
  [sym__INDENT] = sym__INDENT,
  [sym__WS] = sym__WS,
  [sym_comment] = sym_comment,
  [sym_config] = sym_config,
  [sym__config_block] = sym__config_block,
  [sym_section] = sym_section,
  [sym_section_header] = sym_section_header,
  [sym_section_body] = sym_section_body,
  [sym_directive] = sym_directive,
  [sym_directive_set] = sym_directive_set,
  [sym_directive_include] = sym_directive_include,
  [sym__assign_expr] = sym__assign_expr,
  [sym_entry] = sym_entry,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_section_body_repeat1] = aux_sym_section_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INCLUDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_section_header_type] = {
    .visible = true,
    .named = true,
  },
  [sym_key_type] = {
    .visible = true,
    .named = true,
  },
  [sym_value_type] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__line_only_spaces] = {
    .visible = false,
    .named = true,
  },
  [sym__INDENT] = {
    .visible = false,
    .named = true,
  },
  [sym__WS] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym__config_block] = {
    .visible = false,
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
  [sym_section_body] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_set] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_include] = {
    .visible = true,
    .named = true,
  },
  [sym__assign_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_header = 2,
  field_key = 3,
  field_name = 4,
  field_pattern = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_header] = "header",
  [field_key] = "key",
  [field_name] = "name",
  [field_pattern] = "pattern",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
    {field_header, 0},
  [2] =
    {field_name, 1},
  [3] =
    {field_key, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [5] =
    {field_pattern, 2},
  [6] =
    {field_key, 0},
    {field_value, 2},
  [8] =
    {field_key, 0},
    {field_value, 3},
  [10] =
    {field_key, 0},
    {field_value, 4},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(33);
      if (lookahead == 'S') ADVANCE(30);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'U') ADVANCE(10);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(14);
      if (lookahead == 'S') ADVANCE(11);
      if (lookahead == '[') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_section_header_type);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'C') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_section_header_type);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'D') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_section_header_type);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'E') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_section_header_type);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'E') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_section_header_type);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'L') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_section_header_type);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_section_header_type);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'T') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_section_header_type);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'U') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_section_header_type);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_section_header_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_key_type);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_value_type);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_value_type);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__line_only_spaces);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__INDENT);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__INDENT);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__WS);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__WS);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__WS);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__WS);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__WS);
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_INCLUDE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_section_header_type] = ACTIONS(1),
    [sym_key_type] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__line_only_spaces] = ACTIONS(1),
    [sym__INDENT] = ACTIONS(1),
    [sym__WS] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(30),
    [sym__config_block] = STATE(2),
    [sym_section] = STATE(2),
    [sym_section_header] = STATE(8),
    [sym_directive] = STATE(2),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_section_header,
    STATE(3), 4,
      sym__config_block,
      sym_section,
      sym_directive,
      aux_sym_config_repeat1,
  [22] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(18), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      sym_comment,
    STATE(8), 1,
      sym_section_header,
    STATE(3), 4,
      sym__config_block,
      sym_section,
      sym_directive,
      aux_sym_config_repeat1,
  [44] = 4,
    ACTIONS(26), 1,
      sym__line_only_spaces,
    ACTIONS(29), 1,
      sym__INDENT,
    STATE(4), 1,
      aux_sym_section_body_repeat1,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_comment,
  [60] = 4,
    ACTIONS(34), 1,
      sym__line_only_spaces,
    ACTIONS(36), 1,
      sym__INDENT,
    STATE(4), 1,
      aux_sym_section_body_repeat1,
    ACTIONS(32), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_comment,
  [76] = 2,
    ACTIONS(40), 1,
      sym__INDENT,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym__line_only_spaces,
      sym_comment,
  [87] = 3,
    ACTIONS(42), 1,
      anon_sym_SET,
    ACTIONS(44), 1,
      anon_sym_INCLUDE,
    STATE(24), 2,
      sym_directive_set,
      sym_directive_include,
  [98] = 4,
    ACTIONS(36), 1,
      sym__INDENT,
    ACTIONS(46), 1,
      sym__line_only_spaces,
    STATE(5), 1,
      aux_sym_section_body_repeat1,
    STATE(10), 1,
      sym_section_body,
  [111] = 1,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_comment,
  [118] = 1,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_comment,
  [125] = 1,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_comment,
  [132] = 3,
    ACTIONS(52), 1,
      sym_key_type,
    ACTIONS(54), 1,
      sym_comment,
    STATE(22), 1,
      sym_entry,
  [142] = 2,
    ACTIONS(56), 1,
      sym_key_type,
    STATE(26), 1,
      sym__assign_expr,
  [149] = 2,
    ACTIONS(58), 1,
      sym_value_type,
    ACTIONS(60), 1,
      sym__WS,
  [156] = 2,
    ACTIONS(62), 1,
      sym_value_type,
    ACTIONS(64), 1,
      sym__WS,
  [163] = 2,
    ACTIONS(66), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      sym__WS,
  [170] = 2,
    ACTIONS(70), 1,
      sym__line_only_spaces,
    ACTIONS(72), 1,
      sym__INDENT,
  [177] = 1,
    ACTIONS(74), 1,
      sym__WS,
  [181] = 1,
    ACTIONS(76), 1,
      sym_value_type,
  [185] = 1,
    ACTIONS(78), 1,
      sym_section_header_type,
  [189] = 1,
    ACTIONS(80), 1,
      sym__WS,
  [193] = 1,
    ACTIONS(82), 1,
      sym__newline,
  [197] = 1,
    ACTIONS(84), 1,
      sym__newline,
  [201] = 1,
    ACTIONS(86), 1,
      sym__newline,
  [205] = 1,
    ACTIONS(88), 1,
      sym__WS,
  [209] = 1,
    ACTIONS(90), 1,
      sym__newline,
  [213] = 1,
    ACTIONS(92), 1,
      sym__newline,
  [217] = 1,
    ACTIONS(94), 1,
      sym_value_type,
  [221] = 1,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
  [225] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [229] = 1,
    ACTIONS(100), 1,
      anon_sym_EQ,
  [233] = 1,
    ACTIONS(102), 1,
      sym__newline,
  [237] = 1,
    ACTIONS(104), 1,
      sym__newline,
  [241] = 1,
    ACTIONS(58), 1,
      sym_value_type,
  [245] = 1,
    ACTIONS(106), 1,
      sym__newline,
  [249] = 1,
    ACTIONS(108), 1,
      sym__newline,
  [253] = 1,
    ACTIONS(110), 1,
      sym_value_type,
  [257] = 1,
    ACTIONS(112), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 125,
  [SMALL_STATE(12)] = 132,
  [SMALL_STATE(13)] = 142,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 156,
  [SMALL_STATE(16)] = 163,
  [SMALL_STATE(17)] = 170,
  [SMALL_STATE(18)] = 177,
  [SMALL_STATE(19)] = 181,
  [SMALL_STATE(20)] = 185,
  [SMALL_STATE(21)] = 189,
  [SMALL_STATE(22)] = 193,
  [SMALL_STATE(23)] = 197,
  [SMALL_STATE(24)] = 201,
  [SMALL_STATE(25)] = 205,
  [SMALL_STATE(26)] = 209,
  [SMALL_STATE(27)] = 213,
  [SMALL_STATE(28)] = 217,
  [SMALL_STATE(29)] = 221,
  [SMALL_STATE(30)] = 225,
  [SMALL_STATE(31)] = 229,
  [SMALL_STATE(32)] = 233,
  [SMALL_STATE(33)] = 237,
  [SMALL_STATE(34)] = 241,
  [SMALL_STATE(35)] = 245,
  [SMALL_STATE(36)] = 249,
  [SMALL_STATE(37)] = 253,
  [SMALL_STATE(38)] = 257,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(20),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(7),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(35),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_body_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_body_repeat1, 2), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_body_repeat1, 2), SHIFT_REPEAT(12),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_body, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_body_repeat1, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_body_repeat1, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4, .production_id = 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 4, .production_id = 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_set, 3, .production_id = 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_include, 3, .production_id = 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, .production_id = 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assign_expr, 3, .production_id = 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assign_expr, 4, .production_id = 6),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assign_expr, 5, .production_id = 7),
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

TS_PUBLIC const TSLanguage *tree_sitter_fluentbit() {
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
