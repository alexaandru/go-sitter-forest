#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 3
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  sym__line = 1,
  anon_sym_COLONskip = 2,
  anon_sym_COLONerror = 3,
  anon_sym_COLONfail_DASHfast = 4,
  anon_sym_COLONlanguage = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_COLONplatform = 8,
  sym__lang = 9,
  sym__os = 10,
  sym__eol = 11,
  sym__equals_begin = 12,
  sym__equals_end = 13,
  sym__dashes = 14,
  sym_file = 15,
  sym_test = 16,
  aux_sym__body = 17,
  sym_header = 18,
  sym_attributes = 19,
  sym_attribute = 20,
  sym__language = 21,
  sym__platform = 22,
  aux_sym_file_repeat1 = 23,
  aux_sym_attributes_repeat1 = 24,
  alias_sym_input = 25,
  alias_sym_name = 26,
  alias_sym_output = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__line] = "_line",
  [anon_sym_COLONskip] = ":skip",
  [anon_sym_COLONerror] = ":error",
  [anon_sym_COLONfail_DASHfast] = ":fail-fast",
  [anon_sym_COLONlanguage] = ":language",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLONplatform] = ":platform",
  [sym__lang] = "parameter",
  [sym__os] = "parameter",
  [sym__eol] = "_eol",
  [sym__equals_begin] = "separator",
  [sym__equals_end] = "separator",
  [sym__dashes] = "separator",
  [sym_file] = "file",
  [sym_test] = "test",
  [aux_sym__body] = "_body",
  [sym_header] = "header",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym__language] = "_language",
  [sym__platform] = "_platform",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [alias_sym_input] = "input",
  [alias_sym_name] = "name",
  [alias_sym_output] = "output",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__line] = sym__line,
  [anon_sym_COLONskip] = anon_sym_COLONskip,
  [anon_sym_COLONerror] = anon_sym_COLONerror,
  [anon_sym_COLONfail_DASHfast] = anon_sym_COLONfail_DASHfast,
  [anon_sym_COLONlanguage] = anon_sym_COLONlanguage,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLONplatform] = anon_sym_COLONplatform,
  [sym__lang] = sym__lang,
  [sym__os] = sym__lang,
  [sym__eol] = sym__eol,
  [sym__equals_begin] = sym__equals_begin,
  [sym__equals_end] = sym__equals_begin,
  [sym__dashes] = sym__equals_begin,
  [sym_file] = sym_file,
  [sym_test] = sym_test,
  [aux_sym__body] = aux_sym__body,
  [sym_header] = sym_header,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym__language] = sym__language,
  [sym__platform] = sym__platform,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [alias_sym_input] = alias_sym_input,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_output] = alias_sym_output,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLONskip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONfail_DASHfast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONlanguage] = {
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
  [anon_sym_COLONplatform] = {
    .visible = true,
    .named = false,
  },
  [sym__lang] = {
    .visible = true,
    .named = true,
  },
  [sym__os] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__equals_begin] = {
    .visible = true,
    .named = true,
  },
  [sym__equals_end] = {
    .visible = true,
    .named = true,
  },
  [sym__dashes] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__body] = {
    .visible = false,
    .named = false,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__language] = {
    .visible = false,
    .named = true,
  },
  [sym__platform] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_input] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_output] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_language = 1,
  field_platform = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_language] = "language",
  [field_platform] = "platform",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [6] = {.index = 2, .length = 1},
  [7] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_language, 0, .inherited = true},
  [1] =
    {field_platform, 0, .inherited = true},
  [2] =
    {field_language, 2},
  [3] =
    {field_platform, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_input,
  },
  [2] = {
    [1] = alias_sym_name,
  },
  [5] = {
    [1] = alias_sym_input,
    [3] = alias_sym_output,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__body, 3,
    aux_sym__body,
    alias_sym_input,
    alias_sym_output,
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
  [16] = 14,
  [17] = 17,
  [18] = 17,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      ADVANCE_MAP(
        '\n', 129,
        '\r', 130,
        '(', 82,
        ')', 83,
        ':', 16,
        'a', 105,
        'd', 116,
        'f', 117,
        'i', 110,
        'l', 100,
        'm', 85,
        'n', 93,
        'o', 115,
        's', 111,
        'w', 102,
      );
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        'a', 41,
        'd', 62,
        'f', 59,
        'i', 47,
        'l', 31,
        'm', 6,
        'n', 19,
        'o', 54,
        's', 52,
        'w', 33,
      );
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'l') ADVANCE(3);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(5);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(1);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 71:
      if (lookahead == 'w') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'x') ADVANCE(128);
      END_STATE();
    case 73:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLONskip);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLONerror);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLONfail_DASHfast);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLONlanguage);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLONplatform);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'g') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'u') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'w') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'x') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == 'y') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__os);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(129);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 75, .external_lex_state = 2},
  [13] = {.lex_state = 75, .external_lex_state = 2},
  [14] = {.lex_state = 75, .external_lex_state = 2},
  [15] = {.lex_state = 75, .external_lex_state = 4},
  [16] = {.lex_state = 75, .external_lex_state = 4},
  [17] = {.lex_state = 75, .external_lex_state = 2},
  [18] = {.lex_state = 75, .external_lex_state = 4},
  [19] = {.lex_state = 75},
  [20] = {.lex_state = 75},
  [21] = {.lex_state = 75},
  [22] = {.lex_state = 75},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 74},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLONskip] = ACTIONS(1),
    [anon_sym_COLONerror] = ACTIONS(1),
    [anon_sym_COLONfail_DASHfast] = ACTIONS(1),
    [anon_sym_COLONlanguage] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLONplatform] = ACTIONS(1),
    [sym__lang] = ACTIONS(1),
    [sym__os] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym__equals_begin] = ACTIONS(1),
    [sym__equals_end] = ACTIONS(1),
    [sym__dashes] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(23),
    [sym_test] = STATE(11),
    [sym_header] = STATE(19),
    [aux_sym_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__eol] = ACTIONS(5),
    [sym__equals_begin] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      anon_sym_COLONlanguage,
    ACTIONS(13), 1,
      anon_sym_COLONplatform,
    ACTIONS(15), 1,
      sym__eol,
    ACTIONS(17), 1,
      sym__equals_end,
    STATE(7), 1,
      sym__platform,
    STATE(8), 1,
      sym__language,
    STATE(26), 1,
      sym_attributes,
    STATE(3), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(9), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [31] = 8,
    ACTIONS(11), 1,
      anon_sym_COLONlanguage,
    ACTIONS(13), 1,
      anon_sym_COLONplatform,
    ACTIONS(19), 1,
      sym__eol,
    ACTIONS(21), 1,
      sym__equals_end,
    STATE(7), 1,
      sym__platform,
    STATE(8), 1,
      sym__language,
    STATE(4), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(9), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [59] = 8,
    ACTIONS(26), 1,
      anon_sym_COLONlanguage,
    ACTIONS(29), 1,
      anon_sym_COLONplatform,
    ACTIONS(32), 1,
      sym__eol,
    ACTIONS(35), 1,
      sym__equals_end,
    STATE(7), 1,
      sym__platform,
    STATE(8), 1,
      sym__language,
    STATE(4), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(23), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [87] = 1,
    ACTIONS(37), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [97] = 1,
    ACTIONS(39), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [107] = 1,
    ACTIONS(41), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [117] = 1,
    ACTIONS(43), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [127] = 1,
    ACTIONS(45), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [137] = 5,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym__eol,
    ACTIONS(52), 1,
      sym__equals_begin,
    STATE(19), 1,
      sym_header,
    STATE(10), 2,
      sym_test,
      aux_sym_file_repeat1,
  [154] = 5,
    ACTIONS(7), 1,
      sym__equals_begin,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym__eol,
    STATE(19), 1,
      sym_header,
    STATE(10), 2,
      sym_test,
      aux_sym_file_repeat1,
  [171] = 3,
    STATE(13), 1,
      aux_sym__body,
    ACTIONS(59), 2,
      sym__equals_begin,
      ts_builtin_sym_end,
    ACTIONS(61), 2,
      sym__line,
      sym__eol,
  [183] = 3,
    STATE(14), 1,
      aux_sym__body,
    ACTIONS(61), 2,
      sym__line,
      sym__eol,
    ACTIONS(63), 2,
      sym__equals_begin,
      ts_builtin_sym_end,
  [195] = 3,
    STATE(14), 1,
      aux_sym__body,
    ACTIONS(65), 2,
      sym__equals_begin,
      ts_builtin_sym_end,
    ACTIONS(67), 2,
      sym__line,
      sym__eol,
  [207] = 3,
    ACTIONS(72), 1,
      sym__dashes,
    STATE(16), 1,
      aux_sym__body,
    ACTIONS(70), 2,
      sym__line,
      sym__eol,
  [218] = 3,
    ACTIONS(65), 1,
      sym__dashes,
    STATE(16), 1,
      aux_sym__body,
    ACTIONS(74), 2,
      sym__line,
      sym__eol,
  [229] = 1,
    ACTIONS(77), 4,
      sym__equals_begin,
      ts_builtin_sym_end,
      sym__line,
      sym__eol,
  [236] = 1,
    ACTIONS(77), 3,
      sym__dashes,
      sym__line,
      sym__eol,
  [242] = 2,
    STATE(15), 1,
      aux_sym__body,
    ACTIONS(70), 2,
      sym__line,
      sym__eol,
  [250] = 1,
    ACTIONS(79), 2,
      sym__line,
      sym__eol,
  [255] = 1,
    ACTIONS(81), 2,
      sym__line,
      sym__eol,
  [260] = 1,
    ACTIONS(83), 1,
      sym__line,
  [264] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [268] = 1,
    ACTIONS(87), 1,
      sym__eol,
  [272] = 1,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
  [276] = 1,
    ACTIONS(91), 1,
      sym__equals_end,
  [280] = 1,
    ACTIONS(93), 1,
      sym__lang,
  [284] = 1,
    ACTIONS(95), 1,
      sym__os,
  [288] = 1,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
  [292] = 1,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
  [296] = 1,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 127,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 154,
  [SMALL_STATE(12)] = 171,
  [SMALL_STATE(13)] = 183,
  [SMALL_STATE(14)] = 195,
  [SMALL_STATE(15)] = 207,
  [SMALL_STATE(16)] = 218,
  [SMALL_STATE(17)] = 229,
  [SMALL_STATE(18)] = 236,
  [SMALL_STATE(19)] = 242,
  [SMALL_STATE(20)] = 250,
  [SMALL_STATE(21)] = 255,
  [SMALL_STATE(22)] = 260,
  [SMALL_STATE(23)] = 264,
  [SMALL_STATE(24)] = 268,
  [SMALL_STATE(25)] = 272,
  [SMALL_STATE(26)] = 276,
  [SMALL_STATE(27)] = 280,
  [SMALL_STATE(28)] = 284,
  [SMALL_STATE(29)] = 288,
  [SMALL_STATE(30)] = 292,
  [SMALL_STATE(31)] = 296,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__language, 4, 0, 6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__platform, 4, 0, 7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3, 0, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4, 0, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(18),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__equals_begin = 0,
  ts_external_token__equals_end = 1,
  ts_external_token__dashes = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__equals_begin] = sym__equals_begin,
  [ts_external_token__equals_end] = sym__equals_end,
  [ts_external_token__dashes] = sym__dashes,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__equals_begin] = true,
    [ts_external_token__equals_end] = true,
    [ts_external_token__dashes] = true,
  },
  [2] = {
    [ts_external_token__equals_begin] = true,
  },
  [3] = {
    [ts_external_token__equals_end] = true,
  },
  [4] = {
    [ts_external_token__dashes] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_test_external_scanner_create(void);
void tree_sitter_test_external_scanner_destroy(void *);
bool tree_sitter_test_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_test_external_scanner_serialize(void *, char *);
void tree_sitter_test_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_test(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_test_external_scanner_create,
      tree_sitter_test_external_scanner_destroy,
      tree_sitter_test_external_scanner_scan,
      tree_sitter_test_external_scanner_serialize,
      tree_sitter_test_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
