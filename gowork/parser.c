#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_raw_string_literal = 1,
  anon_sym_DQUOTE = 2,
  aux_sym_interpreted_string_literal_token1 = 3,
  sym_escape_sequence = 4,
  sym__identifier = 5,
  anon_sym_go = 6,
  anon_sym_LF = 7,
  anon_sym_replace = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_EQ_GT = 11,
  anon_sym_use = 12,
  anon_sym_SLASH_SLASH = 13,
  aux_sym_comment_token1 = 14,
  sym_source_file = 15,
  sym__directive = 16,
  sym__string_literal = 17,
  sym_interpreted_string_literal = 18,
  sym__string_or_ident = 19,
  sym_module_path = 20,
  sym_go_version = 21,
  sym_version = 22,
  sym_go_directive = 23,
  sym_replace_directive = 24,
  sym_replace_spec = 25,
  sym_use_directive = 26,
  sym_use_spec = 27,
  sym_file_path = 28,
  sym_comment = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_interpreted_string_literal_repeat1 = 31,
  aux_sym_replace_directive_repeat1 = 32,
  aux_sym_use_directive_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_raw_string_literal] = "raw_string_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_interpreted_string_literal_token1] = "interpreted_string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym__identifier] = "_identifier",
  [anon_sym_go] = "go",
  [anon_sym_LF] = "\n",
  [anon_sym_replace] = "replace",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_use] = "use",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym__directive] = "_directive",
  [sym__string_literal] = "_string_literal",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [sym__string_or_ident] = "_string_or_ident",
  [sym_module_path] = "module_path",
  [sym_go_version] = "go_version",
  [sym_version] = "version",
  [sym_go_directive] = "go_directive",
  [sym_replace_directive] = "replace_directive",
  [sym_replace_spec] = "replace_spec",
  [sym_use_directive] = "use_directive",
  [sym_use_spec] = "use_spec",
  [sym_file_path] = "file_path",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_interpreted_string_literal_repeat1] = "interpreted_string_literal_repeat1",
  [aux_sym_replace_directive_repeat1] = "replace_directive_repeat1",
  [aux_sym_use_directive_repeat1] = "use_directive_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_interpreted_string_literal_token1] = aux_sym_interpreted_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__identifier] = sym__identifier,
  [anon_sym_go] = anon_sym_go,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_replace] = anon_sym_replace,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__directive] = sym__directive,
  [sym__string_literal] = sym__string_literal,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [sym__string_or_ident] = sym__string_or_ident,
  [sym_module_path] = sym_module_path,
  [sym_go_version] = sym_go_version,
  [sym_version] = sym_version,
  [sym_go_directive] = sym_go_directive,
  [sym_replace_directive] = sym_replace_directive,
  [sym_replace_spec] = sym_replace_spec,
  [sym_use_directive] = sym_use_directive,
  [sym_use_spec] = sym_use_spec,
  [sym_file_path] = sym_file_path,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_interpreted_string_literal_repeat1] = aux_sym_interpreted_string_literal_repeat1,
  [aux_sym_replace_directive_repeat1] = aux_sym_replace_directive_repeat1,
  [aux_sym_use_directive_repeat1] = aux_sym_use_directive_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_go] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace] = {
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_interpreted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__string_or_ident] = {
    .visible = false,
    .named = true,
  },
  [sym_module_path] = {
    .visible = true,
    .named = true,
  },
  [sym_go_version] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_go_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_replace_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_replace_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_use_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_use_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_replace_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_directive_repeat1] = {
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
  [11] = 9,
  [12] = 10,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 16,
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
  [40] = 28,
  [41] = 33,
  [42] = 22,
  [43] = 43,
  [44] = 24,
  [45] = 45,
  [46] = 24,
  [47] = 45,
  [48] = 24,
  [49] = 45,
  [50] = 45,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 38,
  [56] = 56,
  [57] = 27,
  [58] = 36,
  [59] = 37,
  [60] = 39,
  [61] = 53,
  [62] = 62,
  [63] = 37,
  [64] = 36,
  [65] = 65,
  [66] = 39,
  [67] = 67,
  [68] = 37,
  [69] = 69,
  [70] = 38,
  [71] = 36,
  [72] = 39,
  [73] = 38,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 67,
  [80] = 80,
  [81] = 69,
  [82] = 82,
  [83] = 78,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 82,
  [88] = 88,
  [89] = 89,
  [90] = 65,
  [91] = 91,
  [92] = 92,
  [93] = 92,
  [94] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '"', 36,
        '(', 51,
        ')', 53,
        '/', 11,
        '=', 12,
        '\\', 13,
        '`', 14,
        'g', 21,
        'r', 17,
        'u', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '`') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '/') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '/') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '`') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '`') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '`') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '`') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '/') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '/') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == 'U') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == '`') ADVANCE(34);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '"', 36,
        '(', 51,
        ')', 53,
        '/', 11,
        '=', 12,
        '`', 14,
        'g', 21,
        'r', 17,
        'u', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '`') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(14);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_go);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_replace);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 61},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_go] = ACTIONS(1),
    [anon_sym_replace] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(80),
    [sym__directive] = STATE(43),
    [sym_go_directive] = STATE(54),
    [sym_replace_directive] = STATE(54),
    [sym_use_directive] = STATE(54),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_go] = ACTIONS(7),
    [anon_sym_replace] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(13), 1,
      sym_raw_string_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_replace_directive_repeat1,
    STATE(9), 1,
      sym_module_path,
    STATE(27), 1,
      sym__string_or_ident,
    STATE(29), 1,
      sym_replace_spec,
    STATE(36), 1,
      sym_interpreted_string_literal,
    STATE(37), 1,
      sym__string_literal,
  [37] = 12,
    ACTIONS(13), 1,
      sym_raw_string_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_replace_directive_repeat1,
    STATE(9), 1,
      sym_module_path,
    STATE(27), 1,
      sym__string_or_ident,
    STATE(29), 1,
      sym_replace_spec,
    STATE(36), 1,
      sym_interpreted_string_literal,
    STATE(37), 1,
      sym__string_literal,
  [74] = 11,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_raw_string_literal,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(34), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_module_path,
    STATE(27), 1,
      sym__string_or_ident,
    STATE(29), 1,
      sym_replace_spec,
    STATE(36), 1,
      sym_interpreted_string_literal,
    STATE(37), 1,
      sym__string_literal,
    STATE(4), 2,
      sym_comment,
      aux_sym_replace_directive_repeat1,
  [109] = 11,
    ACTIONS(13), 1,
      sym_raw_string_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(11), 1,
      sym_module_path,
    STATE(27), 1,
      sym__string_or_ident,
    STATE(35), 1,
      sym_replace_spec,
    STATE(36), 1,
      sym_interpreted_string_literal,
    STATE(37), 1,
      sym__string_literal,
  [143] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_go,
    ACTIONS(9), 1,
      anon_sym_replace,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(43), 1,
      sym__directive,
    STATE(54), 3,
      sym_go_directive,
      sym_replace_directive,
      sym_use_directive,
  [173] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      anon_sym_go,
    ACTIONS(45), 1,
      anon_sym_replace,
    ACTIONS(48), 1,
      anon_sym_use,
    STATE(43), 1,
      sym__directive,
    STATE(7), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(54), 3,
      sym_go_directive,
      sym_replace_directive,
      sym_use_directive,
  [201] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(51), 1,
      sym_raw_string_literal,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    STATE(8), 1,
      sym_comment,
    STATE(17), 1,
      sym_module_path,
    STATE(57), 1,
      sym__string_or_ident,
    STATE(58), 1,
      sym_interpreted_string_literal,
    STATE(59), 1,
      sym__string_literal,
    STATE(87), 1,
      sym_file_path,
  [232] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      sym_raw_string_literal,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      sym__identifier,
    ACTIONS(63), 1,
      anon_sym_EQ_GT,
    STATE(9), 1,
      sym_comment,
    STATE(63), 1,
      sym__string_literal,
    STATE(71), 1,
      sym_interpreted_string_literal,
    STATE(90), 1,
      sym__string_or_ident,
    STATE(93), 1,
      sym_version,
  [263] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(51), 1,
      sym_raw_string_literal,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    STATE(10), 1,
      sym_comment,
    STATE(16), 1,
      sym_module_path,
    STATE(57), 1,
      sym__string_or_ident,
    STATE(58), 1,
      sym_interpreted_string_literal,
    STATE(59), 1,
      sym__string_literal,
    STATE(69), 1,
      sym_file_path,
  [294] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      sym_raw_string_literal,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      sym__identifier,
    ACTIONS(65), 1,
      anon_sym_EQ_GT,
    STATE(11), 1,
      sym_comment,
    STATE(63), 1,
      sym__string_literal,
    STATE(71), 1,
      sym_interpreted_string_literal,
    STATE(90), 1,
      sym__string_or_ident,
    STATE(92), 1,
      sym_version,
  [325] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(51), 1,
      sym_raw_string_literal,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    STATE(12), 1,
      sym_comment,
    STATE(18), 1,
      sym_module_path,
    STATE(57), 1,
      sym__string_or_ident,
    STATE(58), 1,
      sym_interpreted_string_literal,
    STATE(59), 1,
      sym__string_literal,
    STATE(81), 1,
      sym_file_path,
  [356] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(51), 1,
      sym_raw_string_literal,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    STATE(13), 1,
      sym_comment,
    STATE(15), 1,
      sym_module_path,
    STATE(57), 1,
      sym__string_or_ident,
    STATE(58), 1,
      sym_interpreted_string_literal,
    STATE(59), 1,
      sym__string_literal,
    STATE(82), 1,
      sym_file_path,
  [387] = 9,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      sym_raw_string_literal,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    STATE(14), 1,
      sym_comment,
    STATE(64), 1,
      sym_interpreted_string_literal,
    STATE(68), 1,
      sym__string_literal,
    STATE(84), 1,
      sym__string_or_ident,
    STATE(86), 1,
      sym_go_version,
  [415] = 9,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      sym_raw_string_literal,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    STATE(15), 1,
      sym_comment,
    STATE(64), 1,
      sym_interpreted_string_literal,
    STATE(65), 1,
      sym__string_or_ident,
    STATE(68), 1,
      sym__string_literal,
    STATE(83), 1,
      sym_version,
  [443] = 9,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      sym_raw_string_literal,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    STATE(16), 1,
      sym_comment,
    STATE(64), 1,
      sym_interpreted_string_literal,
    STATE(65), 1,
      sym__string_or_ident,
    STATE(68), 1,
      sym__string_literal,
    STATE(87), 1,
      sym_version,
  [471] = 9,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      sym_raw_string_literal,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    STATE(17), 1,
      sym_comment,
    STATE(64), 1,
      sym_interpreted_string_literal,
    STATE(65), 1,
      sym__string_or_ident,
    STATE(68), 1,
      sym__string_literal,
    STATE(78), 1,
      sym_version,
  [499] = 9,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      sym_raw_string_literal,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    STATE(18), 1,
      sym_comment,
    STATE(64), 1,
      sym_interpreted_string_literal,
    STATE(65), 1,
      sym__string_or_ident,
    STATE(68), 1,
      sym__string_literal,
    STATE(82), 1,
      sym_version,
  [527] = 7,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_use_directive_repeat1,
    STATE(62), 1,
      sym_use_spec,
    STATE(79), 1,
      sym_file_path,
  [549] = 7,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_use_directive_repeat1,
    STATE(62), 1,
      sym_use_spec,
    STATE(79), 1,
      sym_file_path,
  [571] = 6,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      sym__identifier,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_use_spec,
    STATE(79), 1,
      sym_file_path,
    STATE(21), 2,
      sym_comment,
      aux_sym_use_directive_repeat1,
  [591] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(22), 1,
      sym_comment,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_go,
      anon_sym_replace,
      anon_sym_use,
  [604] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(23), 1,
      sym_comment,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_go,
      anon_sym_replace,
      anon_sym_use,
  [617] = 5,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(90), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [634] = 4,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
    STATE(25), 2,
      sym_comment,
      aux_sym_interpreted_string_literal_repeat1,
  [649] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(26), 1,
      sym_comment,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      anon_sym_go,
      anon_sym_replace,
      anon_sym_use,
  [662] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(27), 1,
      sym_comment,
    ACTIONS(99), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_EQ_GT,
  [675] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(28), 1,
      sym_comment,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_go,
      anon_sym_replace,
      anon_sym_use,
  [688] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(29), 1,
      sym_comment,
    ACTIONS(103), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_RPAREN,
  [701] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(30), 1,
      sym_comment,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_go,
      anon_sym_replace,
      anon_sym_use,
  [714] = 6,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_use_spec,
    STATE(31), 1,
      sym_comment,
    STATE(67), 1,
      sym_file_path,
  [733] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(32), 1,
      sym_comment,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_go,
      anon_sym_replace,
      anon_sym_use,
  [746] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(33), 1,
      sym_comment,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_go,
      anon_sym_replace,
      anon_sym_use,
  [759] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(34), 1,
      sym_comment,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_go,
      anon_sym_replace,
      anon_sym_use,
  [772] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 1,
      sym_comment,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      anon_sym_go,
      anon_sym_replace,
      anon_sym_use,
  [785] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_comment,
    ACTIONS(117), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_EQ_GT,
  [798] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(37), 1,
      sym_comment,
    ACTIONS(119), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_EQ_GT,
  [811] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(38), 1,
      sym_comment,
    ACTIONS(121), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_EQ_GT,
  [824] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(39), 1,
      sym_comment,
    ACTIONS(123), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_EQ_GT,
  [837] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(40), 1,
      sym_comment,
    ACTIONS(125), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_RPAREN,
  [850] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(41), 1,
      sym_comment,
    ACTIONS(127), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_RPAREN,
  [863] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(42), 1,
      sym_comment,
    ACTIONS(129), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_RPAREN,
  [876] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(43), 1,
      sym_comment,
    ACTIONS(131), 4,
      ts_builtin_sym_end,
      anon_sym_go,
      anon_sym_replace,
      anon_sym_use,
  [889] = 5,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(90), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [906] = 5,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(90), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [923] = 5,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(90), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [940] = 5,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(90), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [957] = 5,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(90), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [974] = 5,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(90), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [991] = 5,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(90), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1008] = 4,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(147), 1,
      anon_sym_LF,
    STATE(51), 1,
      sym_comment,
    ACTIONS(119), 3,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
  [1023] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(52), 1,
      sym_comment,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      anon_sym_go,
      anon_sym_replace,
      anon_sym_use,
  [1036] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(53), 1,
      sym_comment,
    ACTIONS(151), 4,
      ts_builtin_sym_end,
      anon_sym_go,
      anon_sym_replace,
      anon_sym_use,
  [1049] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(54), 1,
      sym_comment,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      anon_sym_go,
      anon_sym_replace,
      anon_sym_use,
  [1062] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(55), 1,
      sym_comment,
    ACTIONS(121), 3,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
  [1074] = 4,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(157), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1088] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(57), 1,
      sym_comment,
    ACTIONS(99), 3,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
  [1100] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(58), 1,
      sym_comment,
    ACTIONS(117), 3,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
  [1112] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(59), 1,
      sym_comment,
    ACTIONS(119), 3,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
  [1124] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(60), 1,
      sym_comment,
    ACTIONS(123), 3,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
  [1136] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(61), 1,
      sym_comment,
    ACTIONS(159), 2,
      sym__identifier,
      anon_sym_RPAREN,
  [1147] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    STATE(62), 1,
      sym_comment,
    ACTIONS(161), 2,
      sym__identifier,
      anon_sym_RPAREN,
  [1158] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(163), 1,
      anon_sym_EQ_GT,
    STATE(63), 1,
      sym_comment,
  [1168] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(165), 1,
      anon_sym_LF,
    STATE(64), 1,
      sym_comment,
  [1178] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym_comment,
  [1188] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(169), 1,
      anon_sym_LF,
    STATE(66), 1,
      sym_comment,
  [1198] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      anon_sym_LF,
    STATE(67), 1,
      sym_comment,
  [1208] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(163), 1,
      anon_sym_LF,
    STATE(68), 1,
      sym_comment,
  [1218] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(173), 1,
      anon_sym_LF,
    STATE(69), 1,
      sym_comment,
  [1228] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      anon_sym_LF,
    STATE(70), 1,
      sym_comment,
  [1238] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(165), 1,
      anon_sym_EQ_GT,
    STATE(71), 1,
      sym_comment,
  [1248] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(169), 1,
      anon_sym_EQ_GT,
    STATE(72), 1,
      sym_comment,
  [1258] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      anon_sym_EQ_GT,
    STATE(73), 1,
      sym_comment,
  [1268] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(177), 1,
      anon_sym_LF,
    STATE(74), 1,
      sym_comment,
  [1278] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(147), 1,
      anon_sym_LF,
    STATE(75), 1,
      sym_comment,
  [1288] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(179), 1,
      anon_sym_LF,
    STATE(76), 1,
      sym_comment,
  [1298] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(181), 1,
      anon_sym_LF,
    STATE(77), 1,
      sym_comment,
  [1308] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(183), 1,
      anon_sym_LF,
    STATE(78), 1,
      sym_comment,
  [1318] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(185), 1,
      anon_sym_LF,
    STATE(79), 1,
      sym_comment,
  [1328] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      sym_comment,
  [1338] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(189), 1,
      anon_sym_LF,
    STATE(81), 1,
      sym_comment,
  [1348] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(191), 1,
      anon_sym_LF,
    STATE(82), 1,
      sym_comment,
  [1358] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(193), 1,
      anon_sym_LF,
    STATE(83), 1,
      sym_comment,
  [1368] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(195), 1,
      anon_sym_LF,
    STATE(84), 1,
      sym_comment,
  [1378] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 1,
      anon_sym_LF,
    STATE(85), 1,
      sym_comment,
  [1388] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_LF,
    STATE(86), 1,
      sym_comment,
  [1398] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(201), 1,
      anon_sym_LF,
    STATE(87), 1,
      sym_comment,
  [1408] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(203), 1,
      anon_sym_LF,
    STATE(88), 1,
      sym_comment,
  [1418] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(205), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      sym_comment,
  [1428] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_EQ_GT,
    STATE(90), 1,
      sym_comment,
  [1438] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(207), 1,
      anon_sym_LF,
    STATE(91), 1,
      sym_comment,
  [1448] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(209), 1,
      anon_sym_EQ_GT,
    STATE(92), 1,
      sym_comment,
  [1458] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(211), 1,
      anon_sym_EQ_GT,
    STATE(93), 1,
      sym_comment,
  [1468] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 143,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 201,
  [SMALL_STATE(9)] = 232,
  [SMALL_STATE(10)] = 263,
  [SMALL_STATE(11)] = 294,
  [SMALL_STATE(12)] = 325,
  [SMALL_STATE(13)] = 356,
  [SMALL_STATE(14)] = 387,
  [SMALL_STATE(15)] = 415,
  [SMALL_STATE(16)] = 443,
  [SMALL_STATE(17)] = 471,
  [SMALL_STATE(18)] = 499,
  [SMALL_STATE(19)] = 527,
  [SMALL_STATE(20)] = 549,
  [SMALL_STATE(21)] = 571,
  [SMALL_STATE(22)] = 591,
  [SMALL_STATE(23)] = 604,
  [SMALL_STATE(24)] = 617,
  [SMALL_STATE(25)] = 634,
  [SMALL_STATE(26)] = 649,
  [SMALL_STATE(27)] = 662,
  [SMALL_STATE(28)] = 675,
  [SMALL_STATE(29)] = 688,
  [SMALL_STATE(30)] = 701,
  [SMALL_STATE(31)] = 714,
  [SMALL_STATE(32)] = 733,
  [SMALL_STATE(33)] = 746,
  [SMALL_STATE(34)] = 759,
  [SMALL_STATE(35)] = 772,
  [SMALL_STATE(36)] = 785,
  [SMALL_STATE(37)] = 798,
  [SMALL_STATE(38)] = 811,
  [SMALL_STATE(39)] = 824,
  [SMALL_STATE(40)] = 837,
  [SMALL_STATE(41)] = 850,
  [SMALL_STATE(42)] = 863,
  [SMALL_STATE(43)] = 876,
  [SMALL_STATE(44)] = 889,
  [SMALL_STATE(45)] = 906,
  [SMALL_STATE(46)] = 923,
  [SMALL_STATE(47)] = 940,
  [SMALL_STATE(48)] = 957,
  [SMALL_STATE(49)] = 974,
  [SMALL_STATE(50)] = 991,
  [SMALL_STATE(51)] = 1008,
  [SMALL_STATE(52)] = 1023,
  [SMALL_STATE(53)] = 1036,
  [SMALL_STATE(54)] = 1049,
  [SMALL_STATE(55)] = 1062,
  [SMALL_STATE(56)] = 1074,
  [SMALL_STATE(57)] = 1088,
  [SMALL_STATE(58)] = 1100,
  [SMALL_STATE(59)] = 1112,
  [SMALL_STATE(60)] = 1124,
  [SMALL_STATE(61)] = 1136,
  [SMALL_STATE(62)] = 1147,
  [SMALL_STATE(63)] = 1158,
  [SMALL_STATE(64)] = 1168,
  [SMALL_STATE(65)] = 1178,
  [SMALL_STATE(66)] = 1188,
  [SMALL_STATE(67)] = 1198,
  [SMALL_STATE(68)] = 1208,
  [SMALL_STATE(69)] = 1218,
  [SMALL_STATE(70)] = 1228,
  [SMALL_STATE(71)] = 1238,
  [SMALL_STATE(72)] = 1248,
  [SMALL_STATE(73)] = 1258,
  [SMALL_STATE(74)] = 1268,
  [SMALL_STATE(75)] = 1278,
  [SMALL_STATE(76)] = 1288,
  [SMALL_STATE(77)] = 1298,
  [SMALL_STATE(78)] = 1308,
  [SMALL_STATE(79)] = 1318,
  [SMALL_STATE(80)] = 1328,
  [SMALL_STATE(81)] = 1338,
  [SMALL_STATE(82)] = 1348,
  [SMALL_STATE(83)] = 1358,
  [SMALL_STATE(84)] = 1368,
  [SMALL_STATE(85)] = 1378,
  [SMALL_STATE(86)] = 1388,
  [SMALL_STATE(87)] = 1398,
  [SMALL_STATE(88)] = 1408,
  [SMALL_STATE(89)] = 1418,
  [SMALL_STATE(90)] = 1428,
  [SMALL_STATE(91)] = 1438,
  [SMALL_STATE(92)] = 1448,
  [SMALL_STATE(93)] = 1458,
  [SMALL_STATE(94)] = 1468,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_replace_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_replace_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_replace_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_replace_directive_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_spec, 6, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_directive, 5, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_path, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_spec, 4, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_replace_directive_repeat1, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 5, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_directive, 6, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_spec, 5, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 6, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_directive, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_or_ident, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_spec, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_spec, 5, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_spec, 6, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_directive, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_spec, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_spec, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_use_directive_repeat1, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_or_ident, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_version, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_gowork(void) {
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
