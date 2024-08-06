#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_shebang = 1,
  aux_sym__intertoken_token1 = 2,
  sym_comment = 3,
  anon_sym_POUND_PIPE = 4,
  aux_sym_block_comment_token1 = 5,
  anon_sym_PIPE_POUND = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  aux_sym_number_token1 = 9,
  aux_sym_number_token2 = 10,
  sym_character = 11,
  sym_string = 12,
  sym_symbol = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  sym_source_file = 16,
  sym__token = 17,
  sym__intertoken = 18,
  sym_block_comment = 19,
  sym__datum = 20,
  sym_boolean = 21,
  sym_number = 22,
  sym_list = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_block_comment_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_shebang] = "shebang",
  [aux_sym__intertoken_token1] = "_intertoken_token1",
  [sym_comment] = "comment",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [sym_character] = "character",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym__token] = "_token",
  [sym__intertoken] = "_intertoken",
  [sym_block_comment] = "block_comment",
  [sym__datum] = "_datum",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym_list] = "list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_shebang] = sym_shebang,
  [aux_sym__intertoken_token1] = aux_sym__intertoken_token1,
  [sym_comment] = sym_comment,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [sym_character] = sym_character,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym__token] = sym__token,
  [sym__intertoken] = sym__intertoken,
  [sym_block_comment] = sym_block_comment,
  [sym__datum] = sym__datum,
  [sym_boolean] = sym_boolean,
  [sym_number] = sym_number,
  [sym_list] = sym_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__intertoken_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym__intertoken] = {
    .visible = false,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__datum] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
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
  [4] = 2,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 11,
  [18] = 13,
  [19] = 16,
  [20] = 15,
  [21] = 14,
  [22] = 12,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 24,
  [27] = 27,
  [28] = 23,
  [29] = 24,
  [30] = 15,
  [31] = 12,
  [32] = 32,
};

static TSCharacterRange aux_sym__intertoken_token1_character_set_1[] = {
  {'\t', '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2029}, {0x202f, 0x202f}, {0x205f, 0x205f},
  {0x3000, 0x3000},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '"', 2,
        '#', 1,
        '(', 80,
        ')', 81,
        '-', 5,
        '0', 54,
        ';', 40,
        'f', 23,
        't', 27,
        '|', 3,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '|') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '|') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'B') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead == 'N') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == 'F') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'G') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'I') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(7);
      END_STATE();
    case 16:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'W') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '"', 2,
        '#', 67,
        '(', 80,
        '-', 68,
        '0', 54,
        ';', 40,
        'f', 70,
        't', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(39);
      if (('!' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '"', 2,
        '#', 69,
        '(', 80,
        ')', 81,
        '-', 68,
        '0', 54,
        ';', 40,
        'f', 70,
        't', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(39);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__intertoken_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__intertoken_token1);
      if (set_contains(aux_sym__intertoken_token1_character_set_1, 9, lookahead)) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '|') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(41);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'x') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'A') ADVANCE(21);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'A') ADVANCE(8);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'U') ADVANCE(18);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'O') ADVANCE(12);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'P') ADVANCE(6);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '|') ADVANCE(42);
      if (('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(56);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym__token] = STATE(8),
    [sym__intertoken] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym__datum] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_number] = STATE(8),
    [sym_list] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_shebang] = ACTIONS(5),
    [aux_sym__intertoken_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_POUND_PIPE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [aux_sym_number_token1] = ACTIONS(15),
    [aux_sym_number_token2] = ACTIONS(15),
    [sym_character] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [sym_symbol] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [2] = {
    [sym__token] = STATE(7),
    [sym__intertoken] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym__datum] = STATE(7),
    [sym_boolean] = STATE(7),
    [sym_number] = STATE(7),
    [sym_list] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym__intertoken_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
    [anon_sym_POUND_PIPE] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [aux_sym_number_token1] = ACTIONS(27),
    [aux_sym_number_token2] = ACTIONS(27),
    [sym_character] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym_symbol] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [3] = {
    [sym__token] = STATE(9),
    [sym__intertoken] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym__datum] = STATE(9),
    [sym_boolean] = STATE(9),
    [sym_number] = STATE(9),
    [sym_list] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym__intertoken_token1] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
    [anon_sym_POUND_PIPE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [aux_sym_number_token1] = ACTIONS(15),
    [aux_sym_number_token2] = ACTIONS(15),
    [sym_character] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
    [sym_symbol] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [4] = {
    [sym__token] = STATE(7),
    [sym__intertoken] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym__datum] = STATE(7),
    [sym_boolean] = STATE(7),
    [sym_number] = STATE(7),
    [sym_list] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym__intertoken_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
    [anon_sym_POUND_PIPE] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [aux_sym_number_token1] = ACTIONS(27),
    [aux_sym_number_token2] = ACTIONS(27),
    [sym_character] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym_symbol] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(39),
  },
  [5] = {
    [sym__token] = STATE(4),
    [sym__intertoken] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym__datum] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_number] = STATE(4),
    [sym_list] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym__intertoken_token1] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
    [anon_sym_POUND_PIPE] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [aux_sym_number_token1] = ACTIONS(27),
    [aux_sym_number_token2] = ACTIONS(27),
    [sym_character] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [sym_symbol] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(45),
  },
  [6] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_number] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
    [anon_sym_POUND_PIPE] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [aux_sym_number_token1] = ACTIONS(27),
    [aux_sym_number_token2] = ACTIONS(27),
    [sym_character] = ACTIONS(49),
    [sym_string] = ACTIONS(49),
    [sym_symbol] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(51),
  },
  [7] = {
    [sym__token] = STATE(7),
    [sym__intertoken] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym__datum] = STATE(7),
    [sym_boolean] = STATE(7),
    [sym_number] = STATE(7),
    [sym_list] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym__intertoken_token1] = ACTIONS(53),
    [sym_comment] = ACTIONS(56),
    [anon_sym_POUND_PIPE] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(62),
    [anon_sym_false] = ACTIONS(62),
    [aux_sym_number_token1] = ACTIONS(65),
    [aux_sym_number_token2] = ACTIONS(65),
    [sym_character] = ACTIONS(56),
    [sym_string] = ACTIONS(56),
    [sym_symbol] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(71),
  },
  [8] = {
    [sym__token] = STATE(10),
    [sym__intertoken] = STATE(10),
    [sym_block_comment] = STATE(10),
    [sym__datum] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym_number] = STATE(10),
    [sym_list] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym__intertoken_token1] = ACTIONS(73),
    [sym_comment] = ACTIONS(75),
    [anon_sym_POUND_PIPE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [aux_sym_number_token1] = ACTIONS(15),
    [aux_sym_number_token2] = ACTIONS(15),
    [sym_character] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_symbol] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [9] = {
    [sym__token] = STATE(10),
    [sym__intertoken] = STATE(10),
    [sym_block_comment] = STATE(10),
    [sym__datum] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym_number] = STATE(10),
    [sym_list] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym__intertoken_token1] = ACTIONS(73),
    [sym_comment] = ACTIONS(75),
    [anon_sym_POUND_PIPE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [aux_sym_number_token1] = ACTIONS(15),
    [aux_sym_number_token2] = ACTIONS(15),
    [sym_character] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_symbol] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [10] = {
    [sym__token] = STATE(10),
    [sym__intertoken] = STATE(10),
    [sym_block_comment] = STATE(10),
    [sym__datum] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym_number] = STATE(10),
    [sym_list] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(79),
    [aux_sym__intertoken_token1] = ACTIONS(81),
    [sym_comment] = ACTIONS(84),
    [anon_sym_POUND_PIPE] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(90),
    [anon_sym_false] = ACTIONS(90),
    [aux_sym_number_token1] = ACTIONS(93),
    [aux_sym_number_token2] = ACTIONS(93),
    [sym_character] = ACTIONS(84),
    [sym_string] = ACTIONS(84),
    [sym_symbol] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(96),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(99), 1,
      aux_sym__intertoken_token1,
    ACTIONS(101), 11,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_number_token1,
      aux_sym_number_token2,
      sym_character,
      sym_string,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [17] = 2,
    ACTIONS(103), 1,
      aux_sym__intertoken_token1,
    ACTIONS(105), 11,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_number_token1,
      aux_sym_number_token2,
      sym_character,
      sym_string,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [34] = 2,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
    ACTIONS(109), 10,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_number_token1,
      aux_sym_number_token2,
      sym_character,
      sym_string,
      sym_symbol,
      anon_sym_LPAREN,
  [51] = 2,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
    ACTIONS(113), 10,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_number_token1,
      aux_sym_number_token2,
      sym_character,
      sym_string,
      sym_symbol,
      anon_sym_LPAREN,
  [68] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
    ACTIONS(117), 10,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_number_token1,
      aux_sym_number_token2,
      sym_character,
      sym_string,
      sym_symbol,
      anon_sym_LPAREN,
  [85] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
    ACTIONS(121), 10,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_number_token1,
      aux_sym_number_token2,
      sym_character,
      sym_string,
      sym_symbol,
      anon_sym_LPAREN,
  [102] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
    ACTIONS(101), 10,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_number_token1,
      aux_sym_number_token2,
      sym_character,
      sym_string,
      sym_symbol,
      anon_sym_LPAREN,
  [119] = 2,
    ACTIONS(107), 1,
      aux_sym__intertoken_token1,
    ACTIONS(109), 11,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_number_token1,
      aux_sym_number_token2,
      sym_character,
      sym_string,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [136] = 2,
    ACTIONS(119), 1,
      aux_sym__intertoken_token1,
    ACTIONS(121), 11,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_number_token1,
      aux_sym_number_token2,
      sym_character,
      sym_string,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [153] = 2,
    ACTIONS(115), 1,
      aux_sym__intertoken_token1,
    ACTIONS(117), 11,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_number_token1,
      aux_sym_number_token2,
      sym_character,
      sym_string,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [170] = 2,
    ACTIONS(111), 1,
      aux_sym__intertoken_token1,
    ACTIONS(113), 11,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_number_token1,
      aux_sym_number_token2,
      sym_character,
      sym_string,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [187] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
    ACTIONS(105), 10,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_number_token1,
      aux_sym_number_token2,
      sym_character,
      sym_string,
      sym_symbol,
      anon_sym_LPAREN,
  [204] = 4,
    ACTIONS(123), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(125), 1,
      aux_sym_block_comment_token1,
    ACTIONS(127), 1,
      anon_sym_PIPE_POUND,
    STATE(24), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [218] = 4,
    ACTIONS(123), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(129), 1,
      aux_sym_block_comment_token1,
    ACTIONS(131), 1,
      anon_sym_PIPE_POUND,
    STATE(27), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [232] = 4,
    ACTIONS(123), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(133), 1,
      aux_sym_block_comment_token1,
    ACTIONS(135), 1,
      anon_sym_PIPE_POUND,
    STATE(26), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [246] = 4,
    ACTIONS(123), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(129), 1,
      aux_sym_block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_PIPE_POUND,
    STATE(27), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [260] = 4,
    ACTIONS(139), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(142), 1,
      aux_sym_block_comment_token1,
    ACTIONS(145), 1,
      anon_sym_PIPE_POUND,
    STATE(27), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [274] = 4,
    ACTIONS(123), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(147), 1,
      aux_sym_block_comment_token1,
    ACTIONS(149), 1,
      anon_sym_PIPE_POUND,
    STATE(29), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [288] = 4,
    ACTIONS(123), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(129), 1,
      aux_sym_block_comment_token1,
    ACTIONS(151), 1,
      anon_sym_PIPE_POUND,
    STATE(27), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [302] = 1,
    ACTIONS(117), 3,
      anon_sym_POUND_PIPE,
      aux_sym_block_comment_token1,
      anon_sym_PIPE_POUND,
  [308] = 1,
    ACTIONS(105), 3,
      anon_sym_POUND_PIPE,
      aux_sym_block_comment_token1,
      anon_sym_PIPE_POUND,
  [314] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 17,
  [SMALL_STATE(13)] = 34,
  [SMALL_STATE(14)] = 51,
  [SMALL_STATE(15)] = 68,
  [SMALL_STATE(16)] = 85,
  [SMALL_STATE(17)] = 102,
  [SMALL_STATE(18)] = 119,
  [SMALL_STATE(19)] = 136,
  [SMALL_STATE(20)] = 153,
  [SMALL_STATE(21)] = 170,
  [SMALL_STATE(22)] = 187,
  [SMALL_STATE(23)] = 204,
  [SMALL_STATE(24)] = 218,
  [SMALL_STATE(25)] = 232,
  [SMALL_STATE(26)] = 246,
  [SMALL_STATE(27)] = 260,
  [SMALL_STATE(28)] = 274,
  [SMALL_STATE(29)] = 288,
  [SMALL_STATE(30)] = 302,
  [SMALL_STATE(31)] = 308,
  [SMALL_STATE(32)] = 314,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_dale(void) {
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
