#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 3
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_let = 1,
  anon_sym_EQ = 2,
  anon_sym_eval = 3,
  anon_sym_COLON = 4,
  anon_sym_BSLASH = 5,
  anon_sym_DASH_GT = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_EQa_GT = 9,
  anon_sym_EQb_GT = 10,
  anon_sym_EQd_GT = 11,
  anon_sym_EQ_STAR_GT = 12,
  anon_sym_EQ_TILDE_GT = 13,
  sym_identifier = 14,
  sym_comment = 15,
  sym_source_file = 16,
  sym_definition = 17,
  sym_reduction = 18,
  sym_abstraction = 19,
  sym_application = 20,
  sym_term = 21,
  sym_step = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_source_file_repeat2 = 24,
  aux_sym_reduction_repeat1 = 25,
  aux_sym_abstraction_repeat1 = 26,
  alias_sym_function = 27,
  alias_sym_method = 28,
  alias_sym_parameter = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_eval] = "eval",
  [anon_sym_COLON] = ":",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQa_GT] = "=a>",
  [anon_sym_EQb_GT] = "=b>",
  [anon_sym_EQd_GT] = "=d>",
  [anon_sym_EQ_STAR_GT] = "=*>",
  [anon_sym_EQ_TILDE_GT] = "=~>",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_definition] = "definition",
  [sym_reduction] = "reduction",
  [sym_abstraction] = "abstraction",
  [sym_application] = "application",
  [sym_term] = "term",
  [sym_step] = "step",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_reduction_repeat1] = "reduction_repeat1",
  [aux_sym_abstraction_repeat1] = "abstraction_repeat1",
  [alias_sym_function] = "function",
  [alias_sym_method] = "method",
  [alias_sym_parameter] = "parameter",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_eval] = anon_sym_eval,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQa_GT] = anon_sym_EQa_GT,
  [anon_sym_EQb_GT] = anon_sym_EQb_GT,
  [anon_sym_EQd_GT] = anon_sym_EQd_GT,
  [anon_sym_EQ_STAR_GT] = anon_sym_EQ_STAR_GT,
  [anon_sym_EQ_TILDE_GT] = anon_sym_EQ_TILDE_GT,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_definition] = sym_definition,
  [sym_reduction] = sym_reduction,
  [sym_abstraction] = sym_abstraction,
  [sym_application] = sym_application,
  [sym_term] = sym_term,
  [sym_step] = sym_step,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_reduction_repeat1] = aux_sym_reduction_repeat1,
  [aux_sym_abstraction_repeat1] = aux_sym_abstraction_repeat1,
  [alias_sym_function] = alias_sym_function,
  [alias_sym_method] = alias_sym_method,
  [alias_sym_parameter] = alias_sym_parameter,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
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
  [anon_sym_EQa_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQb_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQd_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_STAR_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_TILDE_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_reduction] = {
    .visible = true,
    .named = true,
  },
  [sym_abstraction] = {
    .visible = true,
    .named = true,
  },
  [sym_application] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reduction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abstraction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_function] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_method] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_parameter] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_abstraction = 1,
  field_argument = 2,
  field_body = 3,
  field_parameters = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_abstraction] = "abstraction",
  [field_argument] = "argument",
  [field_body] = "body",
  [field_parameters] = "parameters",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [4] = {.index = 0, .length = 2},
  [5] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_abstraction, 0},
    {field_argument, 1},
  [2] =
    {field_body, 3},
    {field_parameters, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_function,
  },
  [2] = {
    [1] = alias_sym_method,
  },
  [3] = {
    [0] = alias_sym_parameter,
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
  [10] = 4,
  [11] = 5,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 4,
  [16] = 5,
  [17] = 14,
  [18] = 14,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 6,
  [23] = 23,
  [24] = 21,
  [25] = 25,
  [26] = 25,
  [27] = 7,
  [28] = 21,
  [29] = 25,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 7,
  [35] = 6,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 36,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 42,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '(', 28,
        ')', 29,
        '-', 5,
        ':', 25,
        '=', 22,
        '\\', 26,
        'e', 39,
        'l', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(43);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == '~') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '~') ADVANCE(7);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_eval);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQa_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQb_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQd_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ_STAR_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_STAR_GT] = ACTIONS(1),
    [anon_sym_EQ_TILDE_GT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym_definition] = STATE(13),
    [sym_reduction] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym_source_file_repeat2] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_eval] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_abstraction] = STATE(7),
    [sym_application] = STATE(7),
    [sym_term] = STATE(4),
    [sym_step] = STATE(19),
    [aux_sym_reduction_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_eval] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_EQa_GT] = ACTIONS(19),
    [anon_sym_EQb_GT] = ACTIONS(19),
    [anon_sym_EQd_GT] = ACTIONS(19),
    [anon_sym_EQ_STAR_GT] = ACTIONS(19),
    [anon_sym_EQ_TILDE_GT] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_abstraction] = STATE(7),
    [sym_application] = STATE(7),
    [sym_term] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_eval] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_EQa_GT] = ACTIONS(23),
    [anon_sym_EQb_GT] = ACTIONS(23),
    [anon_sym_EQd_GT] = ACTIONS(23),
    [anon_sym_EQ_STAR_GT] = ACTIONS(23),
    [anon_sym_EQ_TILDE_GT] = ACTIONS(23),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_abstraction] = STATE(7),
    [sym_application] = STATE(7),
    [sym_term] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_eval] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_EQa_GT] = ACTIONS(27),
    [anon_sym_EQb_GT] = ACTIONS(27),
    [anon_sym_EQd_GT] = ACTIONS(27),
    [anon_sym_EQ_STAR_GT] = ACTIONS(27),
    [anon_sym_EQ_TILDE_GT] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_abstraction] = STATE(7),
    [sym_application] = STATE(7),
    [sym_term] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_eval] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_EQa_GT] = ACTIONS(31),
    [anon_sym_EQb_GT] = ACTIONS(31),
    [anon_sym_EQd_GT] = ACTIONS(31),
    [anon_sym_EQ_STAR_GT] = ACTIONS(31),
    [anon_sym_EQ_TILDE_GT] = ACTIONS(31),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 2,
      anon_sym_eval,
      sym_identifier,
    ACTIONS(35), 8,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_EQa_GT,
      anon_sym_EQb_GT,
      anon_sym_EQd_GT,
      anon_sym_EQ_STAR_GT,
      anon_sym_EQ_TILDE_GT,
  [18] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_eval,
      sym_identifier,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_EQa_GT,
      anon_sym_EQb_GT,
      anon_sym_EQd_GT,
      anon_sym_EQ_STAR_GT,
      anon_sym_EQ_TILDE_GT,
  [36] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_reduction_repeat1,
    STATE(19), 1,
      sym_step,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_eval,
    ACTIONS(19), 5,
      anon_sym_EQa_GT,
      anon_sym_EQb_GT,
      anon_sym_EQd_GT,
      anon_sym_EQ_STAR_GT,
      anon_sym_EQ_TILDE_GT,
  [57] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(10), 1,
      sym_term,
    ACTIONS(47), 2,
      anon_sym_let,
      anon_sym_eval,
    STATE(27), 2,
      sym_abstraction,
      sym_application,
  [84] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(10), 1,
      sym_term,
    STATE(27), 2,
      sym_abstraction,
      sym_application,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
    ACTIONS(29), 3,
      anon_sym_let,
      anon_sym_eval,
      sym_identifier,
  [105] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(10), 1,
      sym_term,
    ACTIONS(33), 2,
      anon_sym_let,
      anon_sym_eval,
    STATE(27), 2,
      sym_abstraction,
      sym_application,
  [132] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_reduction_repeat1,
    STATE(19), 1,
      sym_step,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_eval,
    ACTIONS(55), 5,
      anon_sym_EQa_GT,
      anon_sym_EQb_GT,
      anon_sym_EQd_GT,
      anon_sym_EQ_STAR_GT,
      anon_sym_EQ_TILDE_GT,
  [153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_eval,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(31), 2,
      sym_reduction,
      aux_sym_source_file_repeat2,
  [174] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(15), 1,
      sym_term,
    STATE(34), 2,
      sym_abstraction,
      sym_application,
  [197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_term,
    STATE(34), 2,
      sym_abstraction,
      sym_application,
    ACTIONS(27), 4,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [214] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(15), 1,
      sym_term,
    STATE(34), 2,
      sym_abstraction,
      sym_application,
  [237] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_term,
    STATE(34), 2,
      sym_abstraction,
      sym_application,
  [260] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_term,
    STATE(34), 2,
      sym_abstraction,
      sym_application,
  [283] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(3), 1,
      sym_term,
    STATE(7), 2,
      sym_abstraction,
      sym_application,
  [303] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      sym_identifier,
    STATE(9), 1,
      sym_term,
    STATE(27), 2,
      sym_abstraction,
      sym_application,
  [323] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      sym_identifier,
    STATE(11), 1,
      sym_term,
    STATE(27), 2,
      sym_abstraction,
      sym_application,
  [343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
    ACTIONS(37), 3,
      anon_sym_let,
      anon_sym_eval,
      sym_identifier,
  [357] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(2), 1,
      sym_term,
    STATE(7), 2,
      sym_abstraction,
      sym_application,
  [377] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(5), 1,
      sym_term,
    STATE(7), 2,
      sym_abstraction,
      sym_application,
  [397] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(17), 1,
      sym_term,
    STATE(34), 2,
      sym_abstraction,
      sym_application,
  [417] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(14), 1,
      sym_term,
    STATE(34), 2,
      sym_abstraction,
      sym_application,
  [437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
    ACTIONS(41), 3,
      anon_sym_let,
      anon_sym_eval,
      sym_identifier,
  [451] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(16), 1,
      sym_term,
    STATE(34), 2,
      sym_abstraction,
      sym_application,
  [471] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(18), 1,
      sym_term,
    STATE(34), 2,
      sym_abstraction,
      sym_application,
  [491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_eval,
    STATE(30), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
  [506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_eval,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(32), 2,
      sym_reduction,
      aux_sym_source_file_repeat2,
  [520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_eval,
    STATE(32), 2,
      sym_reduction,
      aux_sym_source_file_repeat2,
  [534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_eval,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(32), 2,
      sym_reduction,
      aux_sym_source_file_repeat2,
  [548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 4,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 4,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_DASH_GT,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(38), 1,
      aux_sym_abstraction_repeat1,
  [581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      sym_identifier,
  [590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DASH_GT,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(38), 1,
      aux_sym_abstraction_repeat1,
  [603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_DASH_GT,
    STATE(38), 1,
      aux_sym_abstraction_repeat1,
  [616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DASH_GT,
    STATE(38), 1,
      aux_sym_abstraction_repeat1,
  [629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(40), 1,
      aux_sym_abstraction_repeat1,
  [647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(36), 1,
      aux_sym_abstraction_repeat1,
  [657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym_abstraction_repeat1,
  [667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_identifier,
  [674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_EQ,
  [681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_COLON,
  [688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_identifier,
  [695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 18,
  [SMALL_STATE(8)] = 36,
  [SMALL_STATE(9)] = 57,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 105,
  [SMALL_STATE(12)] = 132,
  [SMALL_STATE(13)] = 153,
  [SMALL_STATE(14)] = 174,
  [SMALL_STATE(15)] = 197,
  [SMALL_STATE(16)] = 214,
  [SMALL_STATE(17)] = 237,
  [SMALL_STATE(18)] = 260,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 303,
  [SMALL_STATE(21)] = 323,
  [SMALL_STATE(22)] = 343,
  [SMALL_STATE(23)] = 357,
  [SMALL_STATE(24)] = 377,
  [SMALL_STATE(25)] = 397,
  [SMALL_STATE(26)] = 417,
  [SMALL_STATE(27)] = 437,
  [SMALL_STATE(28)] = 451,
  [SMALL_STATE(29)] = 471,
  [SMALL_STATE(30)] = 491,
  [SMALL_STATE(31)] = 506,
  [SMALL_STATE(32)] = 520,
  [SMALL_STATE(33)] = 534,
  [SMALL_STATE(34)] = 548,
  [SMALL_STATE(35)] = 558,
  [SMALL_STATE(36)] = 568,
  [SMALL_STATE(37)] = 581,
  [SMALL_STATE(38)] = 590,
  [SMALL_STATE(39)] = 603,
  [SMALL_STATE(40)] = 616,
  [SMALL_STATE(41)] = 629,
  [SMALL_STATE(42)] = 637,
  [SMALL_STATE(43)] = 647,
  [SMALL_STATE(44)] = 657,
  [SMALL_STATE(45)] = 667,
  [SMALL_STATE(46)] = 674,
  [SMALL_STATE(47)] = 681,
  [SMALL_STATE(48)] = 688,
  [SMALL_STATE(49)] = 695,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduction, 4, 0, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reduction, 4, 0, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduction_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduction_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 2, 0, 4),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 2, 0, 4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstraction, 4, 0, 5),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstraction, 4, 0, 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 3, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 3, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduction, 5, 0, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, 0, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4, 0, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduction_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(48),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstraction_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstraction_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstraction_repeat1, 1, 0, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [113] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_elsa(void) {
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
