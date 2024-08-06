#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_document_token1 = 1,
  aux_sym_document_token2 = 2,
  anon_sym_NULL = 3,
  anon_sym_POUND = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_name = 6,
  anon_sym_EQ = 7,
  anon_sym_author = 8,
  anon_sym_description = 9,
  anon_sym_version = 10,
  anon_sym_bundleID = 11,
  anon_sym_buildNumber = 12,
  anon_sym_imagePath = 13,
  anon_sym_launchSoundPath = 14,
  anon_sym_contentWarning = 15,
  anon_sym_contentWarning2 = 16,
  sym_integer = 17,
  sym_reverse_dns = 18,
  sym_document = 19,
  sym_comment = 20,
  sym_statement = 21,
  sym_name = 22,
  sym_author = 23,
  sym_description = 24,
  sym_version = 25,
  sym_bundleID = 26,
  sym_buildNumber = 27,
  sym_imagePath = 28,
  sym_launchSoundPath = 29,
  sym_contentWarning = 30,
  sym_contentWarning2 = 31,
  sym_string = 32,
  aux_sym_document_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [aux_sym_document_token2] = "document_token2",
  [anon_sym_NULL] = "\0",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_name] = "name",
  [anon_sym_EQ] = "=",
  [anon_sym_author] = "author",
  [anon_sym_description] = "description",
  [anon_sym_version] = "version",
  [anon_sym_bundleID] = "bundleID",
  [anon_sym_buildNumber] = "buildNumber",
  [anon_sym_imagePath] = "imagePath",
  [anon_sym_launchSoundPath] = "launchSoundPath",
  [anon_sym_contentWarning] = "contentWarning",
  [anon_sym_contentWarning2] = "contentWarning2",
  [sym_integer] = "integer",
  [sym_reverse_dns] = "reverse_dns",
  [sym_document] = "document",
  [sym_comment] = "comment",
  [sym_statement] = "statement",
  [sym_name] = "name",
  [sym_author] = "author",
  [sym_description] = "description",
  [sym_version] = "version",
  [sym_bundleID] = "bundleID",
  [sym_buildNumber] = "buildNumber",
  [sym_imagePath] = "imagePath",
  [sym_launchSoundPath] = "launchSoundPath",
  [sym_contentWarning] = "contentWarning",
  [sym_contentWarning2] = "contentWarning2",
  [sym_string] = "string",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [aux_sym_document_token2] = aux_sym_document_token2,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_author] = anon_sym_author,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_bundleID] = anon_sym_bundleID,
  [anon_sym_buildNumber] = anon_sym_buildNumber,
  [anon_sym_imagePath] = anon_sym_imagePath,
  [anon_sym_launchSoundPath] = anon_sym_launchSoundPath,
  [anon_sym_contentWarning] = anon_sym_contentWarning,
  [anon_sym_contentWarning2] = anon_sym_contentWarning2,
  [sym_integer] = sym_integer,
  [sym_reverse_dns] = sym_reverse_dns,
  [sym_document] = sym_document,
  [sym_comment] = sym_comment,
  [sym_statement] = sym_statement,
  [sym_name] = sym_name,
  [sym_author] = sym_author,
  [sym_description] = sym_description,
  [sym_version] = sym_version,
  [sym_bundleID] = sym_bundleID,
  [sym_buildNumber] = sym_buildNumber,
  [sym_imagePath] = sym_imagePath,
  [sym_launchSoundPath] = sym_launchSoundPath,
  [sym_contentWarning] = sym_contentWarning,
  [sym_contentWarning2] = sym_contentWarning2,
  [sym_string] = sym_string,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bundleID] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buildNumber] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imagePath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_launchSoundPath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contentWarning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contentWarning2] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_reverse_dns] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_author] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_bundleID] = {
    .visible = true,
    .named = true,
  },
  [sym_buildNumber] = {
    .visible = true,
    .named = true,
  },
  [sym_imagePath] = {
    .visible = true,
    .named = true,
  },
  [sym_launchSoundPath] = {
    .visible = true,
    .named = true,
  },
  [sym_contentWarning] = {
    .visible = true,
    .named = true,
  },
  [sym_contentWarning2] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (eof) ADVANCE(83);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(84);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'D') ADVANCE(174);
      END_STATE();
    case 5:
      if (lookahead == 'I') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'N') ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == 'P') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'P') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'S') ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == 'W') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(178);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 78:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 79:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 80:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 81:
      if (eof) ADVANCE(83);
      ADVANCE_MAP(
        0, 86,
        '\n', 85,
        '\r', 2,
        '#', 88,
        '=', 167,
        'a', 73,
        'b', 74,
        'c', 54,
        'd', 23,
        'i', 45,
        'l', 13,
        'n', 12,
        'v', 24,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 82:
      if (eof) ADVANCE(83);
      ADVANCE_MAP(
        0, 87,
        '\n', 85,
        '\r', 2,
        '#', 89,
        'a', 159,
        'b', 160,
        'c', 140,
        'd', 109,
        'i', 131,
        'l', 99,
        'n', 98,
        'v', 110,
      );
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_document_token2);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'D') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'N') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'P') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'P') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'S') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'W') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'g') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'g') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'h') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'h') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'u') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_author);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_author);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_bundleID);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_bundleID);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_buildNumber);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_buildNumber);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_imagePath);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_imagePath);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_launchSoundPath);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_launchSoundPath);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_contentWarning);
      if (lookahead == '2') ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_contentWarning);
      if (lookahead == '2') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_contentWarning2);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_contentWarning2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_reverse_dns);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 84},
  [2] = {.lex_state = 81},
  [3] = {.lex_state = 81},
  [4] = {.lex_state = 81},
  [5] = {.lex_state = 82},
  [6] = {.lex_state = 81},
  [7] = {.lex_state = 81},
  [8] = {.lex_state = 81},
  [9] = {.lex_state = 81},
  [10] = {.lex_state = 81},
  [11] = {.lex_state = 81},
  [12] = {.lex_state = 81},
  [13] = {.lex_state = 81},
  [14] = {.lex_state = 81},
  [15] = {.lex_state = 81},
  [16] = {.lex_state = 81},
  [17] = {.lex_state = 81},
  [18] = {.lex_state = 81},
  [19] = {.lex_state = 80},
  [20] = {.lex_state = 80},
  [21] = {.lex_state = 80},
  [22] = {.lex_state = 80},
  [23] = {.lex_state = 80},
  [24] = {.lex_state = 80},
  [25] = {.lex_state = 80},
  [26] = {.lex_state = 80},
  [27] = {.lex_state = 78},
  [28] = {.lex_state = 81},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 81},
  [31] = {.lex_state = 81},
  [32] = {.lex_state = 81},
  [33] = {.lex_state = 81},
  [34] = {.lex_state = 81},
  [35] = {.lex_state = 81},
  [36] = {.lex_state = 81},
  [37] = {.lex_state = 81},
  [38] = {.lex_state = 81},
  [39] = {.lex_state = 81},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [aux_sym_document_token2] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(29),
    [aux_sym_document_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_comment] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_name] = STATE(17),
    [sym_author] = STATE(17),
    [sym_description] = STATE(17),
    [sym_version] = STATE(17),
    [sym_bundleID] = STATE(17),
    [sym_buildNumber] = STATE(17),
    [sym_imagePath] = STATE(17),
    [sym_launchSoundPath] = STATE(17),
    [sym_contentWarning] = STATE(17),
    [sym_contentWarning2] = STATE(17),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_document_token2] = ACTIONS(7),
    [anon_sym_NULL] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_name] = ACTIONS(11),
    [anon_sym_author] = ACTIONS(13),
    [anon_sym_description] = ACTIONS(15),
    [anon_sym_version] = ACTIONS(17),
    [anon_sym_bundleID] = ACTIONS(19),
    [anon_sym_buildNumber] = ACTIONS(21),
    [anon_sym_imagePath] = ACTIONS(23),
    [anon_sym_launchSoundPath] = ACTIONS(25),
    [anon_sym_contentWarning] = ACTIONS(27),
    [anon_sym_contentWarning2] = ACTIONS(29),
  },
  [3] = {
    [sym_comment] = STATE(4),
    [sym_statement] = STATE(4),
    [sym_name] = STATE(17),
    [sym_author] = STATE(17),
    [sym_description] = STATE(17),
    [sym_version] = STATE(17),
    [sym_bundleID] = STATE(17),
    [sym_buildNumber] = STATE(17),
    [sym_imagePath] = STATE(17),
    [sym_launchSoundPath] = STATE(17),
    [sym_contentWarning] = STATE(17),
    [sym_contentWarning2] = STATE(17),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_document_token2] = ACTIONS(33),
    [anon_sym_NULL] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_name] = ACTIONS(11),
    [anon_sym_author] = ACTIONS(13),
    [anon_sym_description] = ACTIONS(15),
    [anon_sym_version] = ACTIONS(17),
    [anon_sym_bundleID] = ACTIONS(19),
    [anon_sym_buildNumber] = ACTIONS(21),
    [anon_sym_imagePath] = ACTIONS(23),
    [anon_sym_launchSoundPath] = ACTIONS(25),
    [anon_sym_contentWarning] = ACTIONS(27),
    [anon_sym_contentWarning2] = ACTIONS(29),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [sym_statement] = STATE(4),
    [sym_name] = STATE(17),
    [sym_author] = STATE(17),
    [sym_description] = STATE(17),
    [sym_version] = STATE(17),
    [sym_bundleID] = STATE(17),
    [sym_buildNumber] = STATE(17),
    [sym_imagePath] = STATE(17),
    [sym_launchSoundPath] = STATE(17),
    [sym_contentWarning] = STATE(17),
    [sym_contentWarning2] = STATE(17),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_document_token2] = ACTIONS(37),
    [anon_sym_NULL] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(40),
    [anon_sym_name] = ACTIONS(43),
    [anon_sym_author] = ACTIONS(46),
    [anon_sym_description] = ACTIONS(49),
    [anon_sym_version] = ACTIONS(52),
    [anon_sym_bundleID] = ACTIONS(55),
    [anon_sym_buildNumber] = ACTIONS(58),
    [anon_sym_imagePath] = ACTIONS(61),
    [anon_sym_launchSoundPath] = ACTIONS(64),
    [anon_sym_contentWarning] = ACTIONS(67),
    [anon_sym_contentWarning2] = ACTIONS(70),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(77), 1,
      aux_sym_comment_token1,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      aux_sym_document_token2,
    ACTIONS(75), 12,
      anon_sym_NULL,
      anon_sym_POUND,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
  [22] = 2,
    ACTIONS(81), 1,
      anon_sym_contentWarning,
    ACTIONS(79), 13,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_POUND,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [41] = 2,
    ACTIONS(85), 1,
      anon_sym_contentWarning,
    ACTIONS(83), 13,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_POUND,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [60] = 2,
    ACTIONS(89), 1,
      anon_sym_contentWarning,
    ACTIONS(87), 13,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_POUND,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [79] = 2,
    ACTIONS(93), 1,
      anon_sym_contentWarning,
    ACTIONS(91), 13,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_POUND,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [98] = 2,
    ACTIONS(97), 1,
      anon_sym_contentWarning,
    ACTIONS(95), 13,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_POUND,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [117] = 2,
    ACTIONS(101), 1,
      anon_sym_contentWarning,
    ACTIONS(99), 13,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_POUND,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [136] = 2,
    ACTIONS(105), 1,
      anon_sym_contentWarning,
    ACTIONS(103), 13,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_POUND,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [155] = 2,
    ACTIONS(109), 1,
      anon_sym_contentWarning,
    ACTIONS(107), 13,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_POUND,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [174] = 2,
    ACTIONS(113), 1,
      anon_sym_contentWarning,
    ACTIONS(111), 13,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_POUND,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [193] = 2,
    ACTIONS(117), 1,
      anon_sym_contentWarning,
    ACTIONS(115), 13,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_POUND,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [212] = 2,
    ACTIONS(121), 1,
      anon_sym_contentWarning,
    ACTIONS(119), 13,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_POUND,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [231] = 2,
    ACTIONS(125), 1,
      anon_sym_contentWarning,
    ACTIONS(123), 13,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_POUND,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [250] = 2,
    ACTIONS(129), 1,
      anon_sym_contentWarning,
    ACTIONS(127), 13,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_POUND,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning2,
  [269] = 2,
    ACTIONS(131), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_string,
  [276] = 2,
    ACTIONS(131), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_string,
  [283] = 2,
    ACTIONS(131), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_string,
  [290] = 2,
    ACTIONS(131), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_string,
  [297] = 2,
    ACTIONS(131), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_string,
  [304] = 2,
    ACTIONS(131), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_string,
  [311] = 2,
    ACTIONS(131), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_string,
  [318] = 2,
    ACTIONS(131), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_string,
  [325] = 1,
    ACTIONS(133), 1,
      sym_reverse_dns,
  [329] = 1,
    ACTIONS(135), 1,
      sym_integer,
  [333] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [337] = 1,
    ACTIONS(139), 1,
      anon_sym_EQ,
  [341] = 1,
    ACTIONS(141), 1,
      anon_sym_EQ,
  [345] = 1,
    ACTIONS(143), 1,
      anon_sym_EQ,
  [349] = 1,
    ACTIONS(145), 1,
      anon_sym_EQ,
  [353] = 1,
    ACTIONS(147), 1,
      anon_sym_EQ,
  [357] = 1,
    ACTIONS(149), 1,
      anon_sym_EQ,
  [361] = 1,
    ACTIONS(151), 1,
      anon_sym_EQ,
  [365] = 1,
    ACTIONS(153), 1,
      anon_sym_EQ,
  [369] = 1,
    ACTIONS(155), 1,
      anon_sym_EQ,
  [373] = 1,
    ACTIONS(157), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 41,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 79,
  [SMALL_STATE(10)] = 98,
  [SMALL_STATE(11)] = 117,
  [SMALL_STATE(12)] = 136,
  [SMALL_STATE(13)] = 155,
  [SMALL_STATE(14)] = 174,
  [SMALL_STATE(15)] = 193,
  [SMALL_STATE(16)] = 212,
  [SMALL_STATE(17)] = 231,
  [SMALL_STATE(18)] = 250,
  [SMALL_STATE(19)] = 269,
  [SMALL_STATE(20)] = 276,
  [SMALL_STATE(21)] = 283,
  [SMALL_STATE(22)] = 290,
  [SMALL_STATE(23)] = 297,
  [SMALL_STATE(24)] = 304,
  [SMALL_STATE(25)] = 311,
  [SMALL_STATE(26)] = 318,
  [SMALL_STATE(27)] = 325,
  [SMALL_STATE(28)] = 329,
  [SMALL_STATE(29)] = 333,
  [SMALL_STATE(30)] = 337,
  [SMALL_STATE(31)] = 341,
  [SMALL_STATE(32)] = 345,
  [SMALL_STATE(33)] = 349,
  [SMALL_STATE(34)] = 353,
  [SMALL_STATE(35)] = 357,
  [SMALL_STATE(36)] = 361,
  [SMALL_STATE(37)] = 365,
  [SMALL_STATE(38)] = 369,
  [SMALL_STATE(39)] = 373,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentWarning2, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contentWarning2, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentWarning, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contentWarning, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_launchSoundPath, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_launchSoundPath, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imagePath, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imagePath, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buildNumber, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buildNumber, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundleID, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundleID, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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

TS_PUBLIC const TSLanguage *tree_sitter_pdxinfo(void) {
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
