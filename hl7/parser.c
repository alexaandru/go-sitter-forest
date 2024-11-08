#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_msh_name = 1,
  sym_segment_name = 2,
  sym_field_separator = 3,
  sym_component_separator = 4,
  sym_repetition_separator = 5,
  sym_escape_character = 6,
  sym_subcomponent_separator = 7,
  anon_sym_CR = 8,
  anon_sym_LF = 9,
  anon_sym_CR_LF = 10,
  sym_number = 11,
  sym_string = 12,
  sym_message = 13,
  sym_msh = 14,
  sym_msh_controls = 15,
  sym_segment_separator = 16,
  sym_segment = 17,
  sym_field = 18,
  sym_repeat = 19,
  sym_component = 20,
  sym_subcomponent = 21,
  aux_sym_message_repeat1 = 22,
  aux_sym_message_repeat2 = 23,
  aux_sym_field_repeat1 = 24,
  aux_sym_repeat_repeat1 = 25,
  aux_sym_component_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_msh_name] = "msh_name",
  [sym_segment_name] = "segment_name",
  [sym_field_separator] = "field_separator",
  [sym_component_separator] = "component_separator",
  [sym_repetition_separator] = "repetition_separator",
  [sym_escape_character] = "escape_character",
  [sym_subcomponent_separator] = "subcomponent_separator",
  [anon_sym_CR] = "\r",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_message] = "message",
  [sym_msh] = "msh",
  [sym_msh_controls] = "msh_controls",
  [sym_segment_separator] = "segment_separator",
  [sym_segment] = "segment",
  [sym_field] = "field",
  [sym_repeat] = "repeat",
  [sym_component] = "component",
  [sym_subcomponent] = "subcomponent",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym_message_repeat2] = "message_repeat2",
  [aux_sym_field_repeat1] = "field_repeat1",
  [aux_sym_repeat_repeat1] = "repeat_repeat1",
  [aux_sym_component_repeat1] = "component_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_msh_name] = sym_msh_name,
  [sym_segment_name] = sym_segment_name,
  [sym_field_separator] = sym_field_separator,
  [sym_component_separator] = sym_component_separator,
  [sym_repetition_separator] = sym_repetition_separator,
  [sym_escape_character] = sym_escape_character,
  [sym_subcomponent_separator] = sym_subcomponent_separator,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_message] = sym_message,
  [sym_msh] = sym_msh,
  [sym_msh_controls] = sym_msh_controls,
  [sym_segment_separator] = sym_segment_separator,
  [sym_segment] = sym_segment,
  [sym_field] = sym_field,
  [sym_repeat] = sym_repeat,
  [sym_component] = sym_component,
  [sym_subcomponent] = sym_subcomponent,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym_message_repeat2] = aux_sym_message_repeat2,
  [aux_sym_field_repeat1] = aux_sym_field_repeat1,
  [aux_sym_repeat_repeat1] = aux_sym_repeat_repeat1,
  [aux_sym_component_repeat1] = aux_sym_component_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_msh_name] = {
    .visible = true,
    .named = true,
  },
  [sym_segment_name] = {
    .visible = true,
    .named = true,
  },
  [sym_field_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_component_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_repetition_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_character] = {
    .visible = true,
    .named = true,
  },
  [sym_subcomponent_separator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_msh] = {
    .visible = true,
    .named = true,
  },
  [sym_msh_controls] = {
    .visible = true,
    .named = true,
  },
  [sym_segment_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_subcomponent] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_repeat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [39] = 39,
  [40] = 40,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == 'M') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '^') ADVANCE(15);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '~') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '^') ADVANCE(15);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '~') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == 'H') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'H') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'M') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == 'S') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'S') ADVANCE(2);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(8);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_msh_name);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_segment_name);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_segment_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_field_separator);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_component_separator);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_repetition_separator);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_escape_character);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_subcomponent_separator);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '&' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '&' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '&' &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(29);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_msh_name] = ACTIONS(1),
    [sym_segment_name] = ACTIONS(1),
    [sym_field_separator] = ACTIONS(1),
    [sym_component_separator] = ACTIONS(1),
    [sym_repetition_separator] = ACTIONS(1),
    [sym_escape_character] = ACTIONS(1),
    [sym_subcomponent_separator] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_message] = STATE(38),
    [sym_msh] = STATE(15),
    [sym_msh_name] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    STATE(3), 1,
      sym_subcomponent,
    STATE(6), 1,
      sym_component,
    STATE(13), 1,
      sym_repeat,
    STATE(25), 1,
      sym_field,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(5), 4,
      sym_field_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [23] = 3,
    ACTIONS(11), 1,
      sym_subcomponent_separator,
    STATE(4), 1,
      aux_sym_component_repeat1,
    ACTIONS(9), 6,
      sym_field_separator,
      sym_component_separator,
      sym_repetition_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [38] = 3,
    ACTIONS(11), 1,
      sym_subcomponent_separator,
    STATE(5), 1,
      aux_sym_component_repeat1,
    ACTIONS(13), 6,
      sym_field_separator,
      sym_component_separator,
      sym_repetition_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [53] = 3,
    ACTIONS(17), 1,
      sym_subcomponent_separator,
    STATE(5), 1,
      aux_sym_component_repeat1,
    ACTIONS(15), 6,
      sym_field_separator,
      sym_component_separator,
      sym_repetition_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [68] = 3,
    ACTIONS(22), 1,
      sym_component_separator,
    STATE(7), 1,
      aux_sym_repeat_repeat1,
    ACTIONS(20), 5,
      sym_field_separator,
      sym_repetition_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [82] = 3,
    ACTIONS(22), 1,
      sym_component_separator,
    STATE(9), 1,
      aux_sym_repeat_repeat1,
    ACTIONS(24), 5,
      sym_field_separator,
      sym_repetition_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [96] = 1,
    ACTIONS(26), 7,
      sym_field_separator,
      sym_component_separator,
      sym_repetition_separator,
      sym_subcomponent_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [106] = 3,
    ACTIONS(30), 1,
      sym_component_separator,
    STATE(9), 1,
      aux_sym_repeat_repeat1,
    ACTIONS(28), 5,
      sym_field_separator,
      sym_repetition_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [120] = 1,
    ACTIONS(15), 7,
      sym_field_separator,
      sym_component_separator,
      sym_repetition_separator,
      sym_subcomponent_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [130] = 1,
    ACTIONS(28), 6,
      sym_field_separator,
      sym_component_separator,
      sym_repetition_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [139] = 3,
    ACTIONS(35), 1,
      sym_repetition_separator,
    STATE(17), 1,
      aux_sym_field_repeat1,
    ACTIONS(33), 4,
      sym_field_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [152] = 3,
    ACTIONS(35), 1,
      sym_repetition_separator,
    STATE(12), 1,
      aux_sym_field_repeat1,
    ACTIONS(37), 4,
      sym_field_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [165] = 4,
    ACTIONS(39), 1,
      sym_field_separator,
    STATE(18), 1,
      aux_sym_message_repeat1,
    STATE(32), 1,
      sym_segment_separator,
    ACTIONS(41), 3,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [180] = 4,
    ACTIONS(39), 1,
      sym_field_separator,
    STATE(16), 1,
      aux_sym_message_repeat1,
    STATE(27), 1,
      sym_segment_separator,
    ACTIONS(41), 3,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [195] = 4,
    ACTIONS(39), 1,
      sym_field_separator,
    STATE(19), 1,
      aux_sym_message_repeat1,
    STATE(23), 1,
      sym_segment_separator,
    ACTIONS(41), 3,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [210] = 3,
    ACTIONS(45), 1,
      sym_repetition_separator,
    STATE(17), 1,
      aux_sym_field_repeat1,
    ACTIONS(43), 4,
      sym_field_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [223] = 4,
    ACTIONS(39), 1,
      sym_field_separator,
    STATE(19), 1,
      aux_sym_message_repeat1,
    STATE(35), 1,
      sym_segment_separator,
    ACTIONS(41), 3,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [238] = 3,
    ACTIONS(48), 1,
      sym_field_separator,
    STATE(19), 1,
      aux_sym_message_repeat1,
    ACTIONS(51), 3,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [250] = 4,
    STATE(3), 1,
      sym_subcomponent,
    STATE(6), 1,
      sym_component,
    STATE(21), 1,
      sym_repeat,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
  [264] = 1,
    ACTIONS(43), 5,
      sym_field_separator,
      sym_repetition_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [272] = 3,
    STATE(3), 1,
      sym_subcomponent,
    STATE(11), 1,
      sym_component,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
  [283] = 3,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_segment_name,
    STATE(29), 2,
      sym_segment,
      aux_sym_message_repeat2,
  [294] = 3,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_segment_name,
    STATE(28), 2,
      sym_segment,
      aux_sym_message_repeat2,
  [305] = 1,
    ACTIONS(51), 4,
      sym_field_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [312] = 1,
    ACTIONS(57), 4,
      sym_field_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [319] = 3,
    ACTIONS(55), 1,
      sym_segment_name,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_segment,
      aux_sym_message_repeat2,
  [330] = 3,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym_segment_name,
    STATE(28), 2,
      sym_segment,
      aux_sym_message_repeat2,
  [341] = 3,
    ACTIONS(55), 1,
      sym_segment_name,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_segment,
      aux_sym_message_repeat2,
  [352] = 1,
    ACTIONS(68), 4,
      sym_field_separator,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_CR_LF,
  [359] = 2,
    STATE(10), 1,
      sym_subcomponent,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
  [367] = 1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym_segment_name,
  [372] = 1,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym_segment_name,
  [377] = 2,
    ACTIONS(74), 1,
      sym_field_separator,
    STATE(26), 1,
      sym_msh_controls,
  [384] = 1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_segment_name,
  [389] = 1,
    ACTIONS(78), 1,
      sym_escape_character,
  [393] = 1,
    ACTIONS(80), 1,
      sym_component_separator,
  [397] = 1,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
  [401] = 1,
    ACTIONS(84), 1,
      sym_subcomponent_separator,
  [405] = 1,
    ACTIONS(86), 1,
      sym_repetition_separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 106,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 130,
  [SMALL_STATE(12)] = 139,
  [SMALL_STATE(13)] = 152,
  [SMALL_STATE(14)] = 165,
  [SMALL_STATE(15)] = 180,
  [SMALL_STATE(16)] = 195,
  [SMALL_STATE(17)] = 210,
  [SMALL_STATE(18)] = 223,
  [SMALL_STATE(19)] = 238,
  [SMALL_STATE(20)] = 250,
  [SMALL_STATE(21)] = 264,
  [SMALL_STATE(22)] = 272,
  [SMALL_STATE(23)] = 283,
  [SMALL_STATE(24)] = 294,
  [SMALL_STATE(25)] = 305,
  [SMALL_STATE(26)] = 312,
  [SMALL_STATE(27)] = 319,
  [SMALL_STATE(28)] = 330,
  [SMALL_STATE(29)] = 341,
  [SMALL_STATE(30)] = 352,
  [SMALL_STATE(31)] = 359,
  [SMALL_STATE(32)] = 367,
  [SMALL_STATE(33)] = 372,
  [SMALL_STATE(34)] = 377,
  [SMALL_STATE(35)] = 384,
  [SMALL_STATE(36)] = 389,
  [SMALL_STATE(37)] = 393,
  [SMALL_STATE(38)] = 397,
  [SMALL_STATE(39)] = 401,
  [SMALL_STATE(40)] = 405,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [5] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subcomponent, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_repeat_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_repeat_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msh, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat2, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat2, 2, 0, 0), SHIFT_REPEAT(14),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msh_controls, 5, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment_separator, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [82] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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

TS_PUBLIC const TSLanguage *tree_sitter_hl7(void) {
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
