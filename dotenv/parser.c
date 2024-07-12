#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_EQ = 2,
  anon_sym_DOLLAR = 3,
  sym_identifier = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  sym_integer = 7,
  anon_sym_DQUOTE = 8,
  aux_sym__interpolated_content_token1 = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_string_literal_token1 = 11,
  sym_escape_sequence = 12,
  sym_url = 13,
  sym_raw_value = 14,
  sym_source_file = 15,
  sym_variable = 16,
  sym_interpolated_variable = 17,
  sym_value = 18,
  sym_bool = 19,
  sym_string_interpolated = 20,
  sym__interpolated_content = 21,
  sym_string_literal = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_string_interpolated_repeat1 = 24,
  aux_sym_string_literal_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [anon_sym_DOLLAR] = "$",
  [sym_identifier] = "identifier",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__interpolated_content_token1] = "_interpolated_content_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_url] = "url",
  [sym_raw_value] = "raw_value",
  [sym_source_file] = "source_file",
  [sym_variable] = "variable",
  [sym_interpolated_variable] = "interpolated_variable",
  [sym_value] = "value",
  [sym_bool] = "bool",
  [sym_string_interpolated] = "string_interpolated",
  [sym__interpolated_content] = "_interpolated_content",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_interpolated_repeat1] = "string_interpolated_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_identifier] = sym_identifier,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__interpolated_content_token1] = aux_sym__interpolated_content_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_url] = sym_url,
  [sym_raw_value] = sym_raw_value,
  [sym_source_file] = sym_source_file,
  [sym_variable] = sym_variable,
  [sym_interpolated_variable] = sym_interpolated_variable,
  [sym_value] = sym_value,
  [sym_bool] = sym_bool,
  [sym_string_interpolated] = sym_string_interpolated,
  [sym__interpolated_content] = sym__interpolated_content,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_interpolated_repeat1] = aux_sym_string_interpolated_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__interpolated_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_value] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolated] = {
    .visible = true,
    .named = true,
  },
  [sym__interpolated_content] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolated_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
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
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'b'
    ? (c < '\''
      ? (c < '$'
        ? c == '"'
        : c <= '$')
      : (c <= '\'' || c == '\\'))
    : (c <= 'b' || (c < 'r'
      ? (c < 'n'
        ? c == 'f'
        : c <= 'n')
      : (c <= 'r' || c == 't'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 't') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 't') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 18:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(38);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 't') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__interpolated_content_token1);
      if (lookahead == '#') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__interpolated_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ':') ADVANCE(19);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '/') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(61);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '/') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 't') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_raw_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym_variable] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
  [2] = {
    [sym_value] = STATE(14),
    [sym_bool] = STATE(13),
    [sym_string_interpolated] = STATE(13),
    [sym_string_literal] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_url] = ACTIONS(17),
    [sym_raw_value] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 2,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
    STATE(3), 3,
      sym_interpolated_variable,
      sym__interpolated_content,
      aux_sym_string_interpolated_repeat1,
  [19] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 2,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
    STATE(3), 3,
      sym_interpolated_variable,
      sym__interpolated_content,
      aux_sym_string_interpolated_repeat1,
  [38] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 2,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
    STATE(4), 3,
      sym_interpolated_variable,
      sym__interpolated_content,
      aux_sym_string_interpolated_repeat1,
  [57] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(45), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [71] = 4,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_comment,
    STATE(8), 2,
      sym_variable,
      aux_sym_source_file_repeat1,
  [85] = 4,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym_identifier,
    STATE(8), 2,
      sym_variable,
      aux_sym_source_file_repeat1,
  [99] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(61), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [113] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(63), 4,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
  [123] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(67), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [137] = 1,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [143] = 1,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [149] = 1,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [155] = 1,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [161] = 1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [167] = 1,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [173] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_identifier,
  [186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_EQ,
  [193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 19,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 57,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 85,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 113,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 143,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 155,
  [SMALL_STATE(16)] = 161,
  [SMALL_STATE(17)] = 167,
  [SMALL_STATE(18)] = 173,
  [SMALL_STATE(19)] = 179,
  [SMALL_STATE(20)] = 186,
  [SMALL_STATE(21)] = 193,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2), SHIFT_REPEAT(19),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2), SHIFT_REPEAT(3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_variable, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(11),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolated, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolated, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [88] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_env() {
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
