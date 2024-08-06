#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  sym__inline_tag_false_positive = 3,
  sym_tag_name_with_argument = 4,
  sym_tag_name_with_type = 5,
  sym_tag_name = 6,
  anon_sym_COLON = 7,
  anon_sym_SLASH = 8,
  anon_sym_DOT = 9,
  anon_sym_POUND = 10,
  anon_sym_TILDE = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  sym_identifier = 14,
  sym__text = 15,
  sym__begin = 16,
  sym__end = 17,
  sym_type = 18,
  sym_document = 19,
  sym_description = 20,
  sym_tag = 21,
  sym_inline_tag = 22,
  sym__expression = 23,
  sym_qualified_expression = 24,
  sym_path_expression = 25,
  sym_member_expression = 26,
  sym_optional_identifier = 27,
  aux_sym_document_repeat1 = 28,
  aux_sym_description_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__inline_tag_false_positive] = "_inline_tag_false_positive",
  [sym_tag_name_with_argument] = "tag_name",
  [sym_tag_name_with_type] = "tag_name",
  [sym_tag_name] = "tag_name",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_identifier] = "identifier",
  [sym__text] = "_text",
  [sym__begin] = "_begin",
  [sym__end] = "_end",
  [sym_type] = "type",
  [sym_document] = "document",
  [sym_description] = "description",
  [sym_tag] = "tag",
  [sym_inline_tag] = "inline_tag",
  [sym__expression] = "_expression",
  [sym_qualified_expression] = "qualified_expression",
  [sym_path_expression] = "path_expression",
  [sym_member_expression] = "member_expression",
  [sym_optional_identifier] = "optional_identifier",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__inline_tag_false_positive] = sym__inline_tag_false_positive,
  [sym_tag_name_with_argument] = sym_tag_name,
  [sym_tag_name_with_type] = sym_tag_name,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_identifier] = sym_identifier,
  [sym__text] = sym__text,
  [sym__begin] = sym__begin,
  [sym__end] = sym__end,
  [sym_type] = sym_type,
  [sym_document] = sym_document,
  [sym_description] = sym_description,
  [sym_tag] = sym_tag,
  [sym_inline_tag] = sym_inline_tag,
  [sym__expression] = sym__expression,
  [sym_qualified_expression] = sym_qualified_expression,
  [sym_path_expression] = sym_path_expression,
  [sym_member_expression] = sym_member_expression,
  [sym_optional_identifier] = sym_optional_identifier,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__inline_tag_false_positive] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_name_with_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name_with_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__begin] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_path_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
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
  [22] = 6,
  [23] = 10,
  [24] = 7,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 16,
  [33] = 33,
  [34] = 34,
  [35] = 33,
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
  [48] = 39,
  [49] = 49,
  [50] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') SKIP(19);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == ']') ADVANCE(134);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(138);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '*') SKIP(1);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == ']') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == ']') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '*') SKIP(3);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(4);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == '{') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '*') SKIP(5);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '~') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(6);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(138);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '~') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(138);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '~') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(138);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '*') SKIP(8);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(9);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '{') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '*') SKIP(10);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '~') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(11);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(138);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '~') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(138);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '*') SKIP(12);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(13);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(138);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(138);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14);
      if (lookahead == '*') SKIP(14);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(15);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(14);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '{') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        'a', 43,
        'b', 86,
        'c', 33,
        'e', 121,
        'f', 66,
        'm', 64,
        'n', 34,
        'p', 38,
        'r', 50,
        's', 36,
        't', 63,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 18:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') SKIP(19);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '*') SKIP(19);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == ']') ADVANCE(134);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(20);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') SKIP(19);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == ']') ADVANCE(134);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(138);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__inline_tag_false_positive);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__inline_tag_false_positive);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (lookahead == 'e') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (lookahead == 's') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (lookahead == 'd') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (lookahead == 's') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'y') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(90);
      if (lookahead == 't') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(139);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(136);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(139);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 0, .external_lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__inline_tag_false_positive] = ACTIONS(1),
    [sym_tag_name_with_argument] = ACTIONS(1),
    [sym_tag_name_with_type] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(40),
    [sym__begin] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(15), 1,
      sym__end,
    STATE(31), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(8), 5,
      sym__expression,
      sym_qualified_expression,
      sym_path_expression,
      sym_member_expression,
      sym_optional_identifier,
  [31] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(19), 1,
      sym__end,
    STATE(29), 1,
      sym_description,
    ACTIONS(17), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(9), 5,
      sym__expression,
      sym_qualified_expression,
      sym_path_expression,
      sym_member_expression,
      sym_optional_identifier,
  [59] = 4,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym_SLASH,
    ACTIONS(27), 3,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
    ACTIONS(21), 5,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
      sym__end,
  [78] = 3,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(29), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(31), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [94] = 6,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym__inline_tag_false_positive,
    ACTIONS(39), 1,
      sym__text,
    ACTIONS(41), 1,
      sym__end,
    STATE(10), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(37), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [116] = 6,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      sym__inline_tag_false_positive,
    ACTIONS(51), 1,
      sym__text,
    ACTIONS(54), 1,
      sym__end,
    STATE(7), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(49), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [138] = 5,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(60), 1,
      sym__end,
    STATE(30), 1,
      sym_description,
    ACTIONS(56), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    ACTIONS(58), 3,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [158] = 5,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(64), 1,
      sym__end,
    STATE(28), 1,
      sym_description,
    ACTIONS(58), 3,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
    ACTIONS(62), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [178] = 6,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      sym__inline_tag_false_positive,
    ACTIONS(70), 1,
      sym__text,
    ACTIONS(72), 1,
      sym__end,
    STATE(7), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(68), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [200] = 7,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(74), 1,
      sym_tag_name_with_argument,
    ACTIONS(76), 1,
      sym_tag_name_with_type,
    ACTIONS(78), 1,
      sym_tag_name,
    ACTIONS(80), 1,
      sym__end,
    STATE(19), 1,
      sym_description,
    STATE(25), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [223] = 2,
    ACTIONS(29), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(31), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [236] = 2,
    ACTIONS(82), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(84), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [249] = 2,
    ACTIONS(86), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(88), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [262] = 2,
    ACTIONS(90), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(92), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [275] = 2,
    ACTIONS(96), 2,
      sym__inline_tag_false_positive,
      sym__end,
    ACTIONS(94), 5,
      anon_sym_LBRACE,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
  [287] = 5,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(15), 1,
      sym__end,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [305] = 3,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(14), 5,
      sym__expression,
      sym_qualified_expression,
      sym_path_expression,
      sym_member_expression,
      sym_optional_identifier,
  [319] = 5,
    ACTIONS(74), 1,
      sym_tag_name_with_argument,
    ACTIONS(76), 1,
      sym_tag_name_with_type,
    ACTIONS(78), 1,
      sym_tag_name,
    ACTIONS(100), 1,
      sym__end,
    STATE(20), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [336] = 5,
    ACTIONS(74), 1,
      sym_tag_name_with_argument,
    ACTIONS(76), 1,
      sym_tag_name_with_type,
    ACTIONS(78), 1,
      sym_tag_name,
    ACTIONS(102), 1,
      sym__end,
    STATE(21), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [353] = 5,
    ACTIONS(104), 1,
      sym_tag_name_with_argument,
    ACTIONS(107), 1,
      sym_tag_name_with_type,
    ACTIONS(110), 1,
      sym_tag_name,
    ACTIONS(113), 1,
      sym__end,
    STATE(21), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [370] = 4,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 2,
      sym__inline_tag_false_positive,
      sym__text,
    STATE(23), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [385] = 4,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 2,
      sym__inline_tag_false_positive,
      sym__text,
    STATE(24), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [400] = 4,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 2,
      sym__inline_tag_false_positive,
      sym__text,
    STATE(24), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [415] = 5,
    ACTIONS(74), 1,
      sym_tag_name_with_argument,
    ACTIONS(76), 1,
      sym_tag_name_with_type,
    ACTIONS(78), 1,
      sym_tag_name,
    ACTIONS(100), 1,
      sym__end,
    STATE(21), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [432] = 4,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(19), 1,
      sym__end,
    STATE(29), 1,
      sym_description,
    ACTIONS(17), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [447] = 4,
    ACTIONS(13), 1,
      sym__text,
    ACTIONS(15), 1,
      sym__end,
    STATE(31), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [462] = 2,
    ACTIONS(129), 1,
      sym__end,
    ACTIONS(127), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [471] = 2,
    ACTIONS(64), 1,
      sym__end,
    ACTIONS(62), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [480] = 2,
    ACTIONS(133), 1,
      sym__end,
    ACTIONS(131), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [489] = 2,
    ACTIONS(60), 1,
      sym__end,
    ACTIONS(56), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [498] = 2,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 3,
      anon_sym_RBRACE,
      sym__inline_tag_false_positive,
      sym__text,
  [507] = 2,
    ACTIONS(135), 1,
      sym__text,
    STATE(48), 1,
      sym_description,
  [514] = 2,
    ACTIONS(137), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qualified_expression,
  [521] = 2,
    ACTIONS(135), 1,
      sym__text,
    STATE(39), 1,
      sym_description,
  [528] = 1,
    ACTIONS(139), 1,
      sym_type,
  [532] = 1,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
  [536] = 1,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
  [540] = 1,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
  [544] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [548] = 1,
    ACTIONS(149), 1,
      sym_identifier,
  [552] = 1,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
  [556] = 1,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
  [560] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [564] = 1,
    ACTIONS(157), 1,
      sym_tag_name,
  [568] = 1,
    ACTIONS(159), 1,
      sym_type,
  [572] = 1,
    ACTIONS(161), 1,
      sym_identifier,
  [576] = 1,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
  [580] = 1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
  [584] = 1,
    ACTIONS(167), 1,
      sym_tag_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 178,
  [SMALL_STATE(11)] = 200,
  [SMALL_STATE(12)] = 223,
  [SMALL_STATE(13)] = 236,
  [SMALL_STATE(14)] = 249,
  [SMALL_STATE(15)] = 262,
  [SMALL_STATE(16)] = 275,
  [SMALL_STATE(17)] = 287,
  [SMALL_STATE(18)] = 305,
  [SMALL_STATE(19)] = 319,
  [SMALL_STATE(20)] = 336,
  [SMALL_STATE(21)] = 353,
  [SMALL_STATE(22)] = 370,
  [SMALL_STATE(23)] = 385,
  [SMALL_STATE(24)] = 400,
  [SMALL_STATE(25)] = 415,
  [SMALL_STATE(26)] = 432,
  [SMALL_STATE(27)] = 447,
  [SMALL_STATE(28)] = 462,
  [SMALL_STATE(29)] = 471,
  [SMALL_STATE(30)] = 480,
  [SMALL_STATE(31)] = 489,
  [SMALL_STATE(32)] = 498,
  [SMALL_STATE(33)] = 507,
  [SMALL_STATE(34)] = 514,
  [SMALL_STATE(35)] = 521,
  [SMALL_STATE(36)] = 528,
  [SMALL_STATE(37)] = 532,
  [SMALL_STATE(38)] = 536,
  [SMALL_STATE(39)] = 540,
  [SMALL_STATE(40)] = 544,
  [SMALL_STATE(41)] = 548,
  [SMALL_STATE(42)] = 552,
  [SMALL_STATE(43)] = 556,
  [SMALL_STATE(44)] = 560,
  [SMALL_STATE(45)] = 564,
  [SMALL_STATE(46)] = 568,
  [SMALL_STATE(47)] = 572,
  [SMALL_STATE(48)] = 576,
  [SMALL_STATE(49)] = 580,
  [SMALL_STATE(50)] = 584,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_expression, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_expression, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_identifier, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_identifier, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 4, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_type = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_type] = sym_type,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_type] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_jsdoc_external_scanner_create(void);
void tree_sitter_jsdoc_external_scanner_destroy(void *);
bool tree_sitter_jsdoc_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_jsdoc_external_scanner_serialize(void *, char *);
void tree_sitter_jsdoc_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_jsdoc(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_jsdoc_external_scanner_create,
      tree_sitter_jsdoc_external_scanner_destroy,
      tree_sitter_jsdoc_external_scanner_scan,
      tree_sitter_jsdoc_external_scanner_serialize,
      tree_sitter_jsdoc_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
