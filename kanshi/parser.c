#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  anon_sym_profile = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_output = 4,
  anon_sym_enable = 5,
  anon_sym_disable = 6,
  sym_comment = 7,
  anon_sym_mode = 8,
  aux_sym_mode_token1 = 9,
  anon_sym_position = 10,
  aux_sym_position_token1 = 11,
  anon_sym_scale = 12,
  aux_sym_scale_token1 = 13,
  sym_identifier = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_string_token1 = 16,
  anon_sym_SQUOTE = 17,
  aux_sym_string_token2 = 18,
  sym_source_file = 19,
  sym_profile = 20,
  sym_output = 21,
  sym_mode = 22,
  sym_position = 23,
  sym_scale = 24,
  sym_string = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_profile_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_profile] = "profile",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_output] = "output",
  [anon_sym_enable] = "enable",
  [anon_sym_disable] = "disable",
  [sym_comment] = "comment",
  [anon_sym_mode] = "mode",
  [aux_sym_mode_token1] = "string",
  [anon_sym_position] = "position",
  [aux_sym_position_token1] = "string",
  [anon_sym_scale] = "scale",
  [aux_sym_scale_token1] = "string",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_source_file] = "source_file",
  [sym_profile] = "profile",
  [sym_output] = "output",
  [sym_mode] = "mode",
  [sym_position] = "position",
  [sym_scale] = "scale",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_profile_repeat1] = "profile_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_profile] = anon_sym_profile,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_enable] = anon_sym_enable,
  [anon_sym_disable] = anon_sym_disable,
  [sym_comment] = sym_comment,
  [anon_sym_mode] = anon_sym_mode,
  [aux_sym_mode_token1] = sym_string,
  [anon_sym_position] = anon_sym_position,
  [aux_sym_position_token1] = sym_string,
  [anon_sym_scale] = anon_sym_scale,
  [aux_sym_scale_token1] = sym_string,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_source_file] = sym_source_file,
  [sym_profile] = sym_profile,
  [sym_output] = sym_output,
  [sym_mode] = sym_mode,
  [sym_position] = sym_position,
  [sym_scale] = sym_scale,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_profile_repeat1] = aux_sym_profile_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_profile] = {
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
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mode_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_position] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_position_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_scale] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_scale_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_profile] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_position] = {
    .visible = true,
    .named = true,
  },
  [sym_scale] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_profile_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_keyword = 1,
  field_mode = 2,
  field_name = 3,
  field_position = 4,
  field_scale = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_keyword] = "keyword",
  [field_mode] = "mode",
  [field_name] = "name",
  [field_position] = "position",
  [field_scale] = "scale",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 3},
  [9] = {.index = 18, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_mode, 2},
    {field_name, 1},
  [3] =
    {field_name, 1},
    {field_position, 2},
  [5] =
    {field_name, 1},
    {field_scale, 2},
  [7] =
    {field_keyword, 0},
    {field_value, 1},
  [9] =
    {field_mode, 2},
    {field_name, 1},
    {field_position, 3},
  [12] =
    {field_mode, 2},
    {field_name, 1},
    {field_scale, 3},
  [15] =
    {field_name, 1},
    {field_position, 2},
    {field_scale, 3},
  [18] =
    {field_mode, 2},
    {field_name, 1},
    {field_position, 3},
    {field_scale, 4},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '"', 67,
        '#', 55,
        '\'', 70,
        'd', 18,
        'e', 26,
        'm', 28,
        'o', 38,
        'p', 31,
        's', 10,
        '{', 48,
        '}', 49,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '{') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '@') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'z') ADVANCE(57);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_profile);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_enable);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_disable);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == 'H') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'H') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_position_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_scale_token1);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_scale_token1);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '#') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 71},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 68},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_profile] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_enable] = ACTIONS(1),
    [anon_sym_disable] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_mode] = ACTIONS(1),
    [aux_sym_mode_token1] = ACTIONS(1),
    [anon_sym_position] = ACTIONS(1),
    [aux_sym_position_token1] = ACTIONS(1),
    [anon_sym_scale] = ACTIONS(1),
    [aux_sym_scale_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym_profile] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_profile] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(13), 1,
      anon_sym_mode,
    ACTIONS(15), 1,
      anon_sym_position,
    ACTIONS(17), 1,
      anon_sym_scale,
    STATE(4), 1,
      sym_mode,
    STATE(13), 1,
      sym_position,
    STATE(21), 1,
      sym_scale,
    ACTIONS(11), 2,
      anon_sym_enable,
      anon_sym_disable,
    ACTIONS(9), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [28] = 1,
    ACTIONS(19), 8,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_enable,
      anon_sym_disable,
      sym_comment,
      anon_sym_mode,
      anon_sym_position,
      anon_sym_scale,
  [39] = 5,
    ACTIONS(15), 1,
      anon_sym_position,
    ACTIONS(17), 1,
      anon_sym_scale,
    STATE(14), 1,
      sym_position,
    STATE(24), 1,
      sym_scale,
    ACTIONS(21), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [57] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_profile,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym_profile,
      aux_sym_source_file_repeat1,
  [71] = 4,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_output,
    ACTIONS(29), 1,
      sym_comment,
    STATE(8), 2,
      sym_output,
      aux_sym_profile_repeat1,
  [85] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_profile,
    STATE(7), 2,
      sym_profile,
      aux_sym_source_file_repeat1,
  [99] = 4,
    ACTIONS(27), 1,
      anon_sym_output,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(38), 1,
      sym_comment,
    STATE(10), 2,
      sym_output,
      aux_sym_profile_repeat1,
  [113] = 4,
    ACTIONS(27), 1,
      anon_sym_output,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(40), 1,
      sym_comment,
    STATE(11), 2,
      sym_output,
      aux_sym_profile_repeat1,
  [127] = 4,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      anon_sym_output,
    ACTIONS(47), 1,
      sym_comment,
    STATE(10), 2,
      sym_output,
      aux_sym_profile_repeat1,
  [141] = 4,
    ACTIONS(27), 1,
      anon_sym_output,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_output,
      aux_sym_profile_repeat1,
  [155] = 1,
    ACTIONS(52), 5,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
      anon_sym_position,
      anon_sym_scale,
  [163] = 3,
    ACTIONS(17), 1,
      anon_sym_scale,
    STATE(25), 1,
      sym_scale,
    ACTIONS(54), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [175] = 3,
    ACTIONS(17), 1,
      anon_sym_scale,
    STATE(26), 1,
      sym_scale,
    ACTIONS(56), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DQUOTE,
    ACTIONS(60), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      sym_string,
  [200] = 1,
    ACTIONS(62), 4,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
      anon_sym_scale,
  [207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      sym_identifier,
  [217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_profile,
  [225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_profile,
  [233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_profile,
  [241] = 1,
    ACTIONS(74), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [247] = 1,
    ACTIONS(76), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [253] = 1,
    ACTIONS(78), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [259] = 1,
    ACTIONS(80), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [265] = 1,
    ACTIONS(82), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [271] = 1,
    ACTIONS(84), 3,
      anon_sym_RBRACE,
      anon_sym_output,
      sym_comment,
  [277] = 2,
    ACTIONS(86), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_string_token2,
  [284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
  [291] = 2,
    ACTIONS(86), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_string_token1,
  [298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
  [305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
  [312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym_scale_token1,
  [319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_position_token1,
  [326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
  [333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_mode_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 39,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 113,
  [SMALL_STATE(10)] = 127,
  [SMALL_STATE(11)] = 141,
  [SMALL_STATE(12)] = 155,
  [SMALL_STATE(13)] = 163,
  [SMALL_STATE(14)] = 175,
  [SMALL_STATE(15)] = 187,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 207,
  [SMALL_STATE(18)] = 217,
  [SMALL_STATE(19)] = 225,
  [SMALL_STATE(20)] = 233,
  [SMALL_STATE(21)] = 241,
  [SMALL_STATE(22)] = 247,
  [SMALL_STATE(23)] = 253,
  [SMALL_STATE(24)] = 259,
  [SMALL_STATE(25)] = 265,
  [SMALL_STATE(26)] = 271,
  [SMALL_STATE(27)] = 277,
  [SMALL_STATE(28)] = 284,
  [SMALL_STATE(29)] = 291,
  [SMALL_STATE(30)] = 298,
  [SMALL_STATE(31)] = 305,
  [SMALL_STATE(32)] = 312,
  [SMALL_STATE(33)] = 319,
  [SMALL_STATE(34)] = 326,
  [SMALL_STATE(35)] = 333,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3, 0, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 2, 0, 5),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3, 0, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 4, 0, 6),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3, 0, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale, 2, 0, 5),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3, 0, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 4, 0, 7),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 4, 0, 8),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 5, 0, 9),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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

TS_PUBLIC const TSLanguage *tree_sitter_kanshi(void) {
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
