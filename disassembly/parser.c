#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 1
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_LT = 2,
  anon_sym_PLUS = 3,
  anon_sym_GT = 4,
  sym_integer = 5,
  sym_hexadecimal = 6,
  sym_byte = 7,
  sym_bad_instruction = 8,
  anon_sym_LF = 9,
  anon_sym_POUND = 10,
  anon_sym_SEMI = 11,
  anon_sym_LPAREN = 12,
  aux_sym__arm_address_comment_token1 = 13,
  anon_sym_COMMA = 14,
  anon_sym_RPAREN = 15,
  aux_sym_comment_token1 = 16,
  sym__word = 17,
  sym_code_identifier = 18,
  sym_instruction = 19,
  sym_memory_dump = 20,
  sym__error_sentinel = 21,
  sym_source = 22,
  sym_source_location = 23,
  sym_code_location = 24,
  sym_machine_code_bytes = 25,
  sym__line_with_full_data = 26,
  sym__line_with_missing_data = 27,
  sym__new_line = 28,
  sym__annotated_comment = 29,
  sym__arm_address_comment = 30,
  sym_comment = 31,
  aux_sym_source_repeat1 = 32,
  aux_sym_machine_code_bytes_repeat1 = 33,
  aux_sym__annotated_comment_repeat1 = 34,
  alias_sym_address = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_LT] = "<",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [sym_integer] = "integer",
  [sym_hexadecimal] = "hexadecimal",
  [sym_byte] = "byte",
  [sym_bad_instruction] = "bad_instruction",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND] = "#",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [aux_sym__arm_address_comment_token1] = "instruction",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__word] = "_word",
  [sym_code_identifier] = "identifier",
  [sym_instruction] = "instruction",
  [sym_memory_dump] = "memory_dump",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_source] = "source",
  [sym_source_location] = "source_location",
  [sym_code_location] = "code_location",
  [sym_machine_code_bytes] = "machine_code_bytes",
  [sym__line_with_full_data] = "_line_with_full_data",
  [sym__line_with_missing_data] = "_line_with_missing_data",
  [sym__new_line] = "_new_line",
  [sym__annotated_comment] = "comment",
  [sym__arm_address_comment] = "_arm_address_comment",
  [sym_comment] = "comment",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_machine_code_bytes_repeat1] = "machine_code_bytes_repeat1",
  [aux_sym__annotated_comment_repeat1] = "_annotated_comment_repeat1",
  [alias_sym_address] = "address",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [sym_integer] = sym_integer,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_byte] = sym_byte,
  [sym_bad_instruction] = sym_bad_instruction,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__arm_address_comment_token1] = sym_instruction,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__word] = sym__word,
  [sym_code_identifier] = sym_code_identifier,
  [sym_instruction] = sym_instruction,
  [sym_memory_dump] = sym_memory_dump,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_source] = sym_source,
  [sym_source_location] = sym_source_location,
  [sym_code_location] = sym_code_location,
  [sym_machine_code_bytes] = sym_machine_code_bytes,
  [sym__line_with_full_data] = sym__line_with_full_data,
  [sym__line_with_missing_data] = sym__line_with_missing_data,
  [sym__new_line] = sym__new_line,
  [sym__annotated_comment] = sym_comment,
  [sym__arm_address_comment] = sym__arm_address_comment,
  [sym_comment] = sym_comment,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_machine_code_bytes_repeat1] = aux_sym_machine_code_bytes_repeat1,
  [aux_sym__annotated_comment_repeat1] = aux_sym__annotated_comment_repeat1,
  [alias_sym_address] = alias_sym_address,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_bad_instruction] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__arm_address_comment_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_code_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_memory_dump] = {
    .visible = true,
    .named = true,
  },
  [sym__error_sentinel] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_source_location] = {
    .visible = true,
    .named = true,
  },
  [sym_code_location] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_code_bytes] = {
    .visible = true,
    .named = true,
  },
  [sym__line_with_full_data] = {
    .visible = false,
    .named = true,
  },
  [sym__line_with_missing_data] = {
    .visible = false,
    .named = true,
  },
  [sym__new_line] = {
    .visible = false,
    .named = true,
  },
  [sym__annotated_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__arm_address_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_machine_code_bytes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__annotated_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_address] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_address,
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
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 11,
  [19] = 7,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 20,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 22,
  [34] = 22,
  [35] = 20,
  [36] = 11,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 43,
  [44] = 7,
  [45] = 45,
  [46] = 38,
  [47] = 47,
  [48] = 40,
  [49] = 49,
  [50] = 40,
  [51] = 51,
  [52] = 52,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '#', 48,
        '(', 54,
        ')', 61,
        '+', 32,
        ',', 60,
        '0', 34,
        ':', 30,
        ';', 51,
        '<', 31,
        '>', 33,
      );
      if (lookahead == '\\') SKIP(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(9);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(9);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(10);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '\r') SKIP(6);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '0') ADVANCE(35);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '\\') SKIP(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(12);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(59);
      END_STATE();
    case 24:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 25:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(24);
      END_STATE();
    case 26:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') SKIP(28);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') SKIP(28);
      if (lookahead == '\r') SKIP(26);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '\\') SKIP(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(28);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(59);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(59);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_bad_instruction);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__arm_address_comment_token1);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__arm_address_comment_token1);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__arm_address_comment_token1);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__arm_address_comment_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__arm_address_comment_token1);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 9, .external_lex_state = 2},
  [3] = {.lex_state = 9, .external_lex_state = 2},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 9, .external_lex_state = 3},
  [13] = {.lex_state = 9, .external_lex_state = 3},
  [14] = {.lex_state = 9, .external_lex_state = 3},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28, .external_lex_state = 3},
  [18] = {.lex_state = 28, .external_lex_state = 3},
  [19] = {.lex_state = 28, .external_lex_state = 3},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 63},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0, .external_lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0, .external_lex_state = 4},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 0, .external_lex_state = 4},
  [51] = {.lex_state = 5},
  [52] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [sym_code_identifier] = ACTIONS(1),
    [sym_instruction] = ACTIONS(1),
    [sym_memory_dump] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(45),
    [sym_source_location] = STATE(30),
    [sym_comment] = STATE(1),
    [aux_sym_source_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_hexadecimal] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      sym_byte,
    STATE(2), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(15), 2,
      sym_instruction,
      sym_bad_instruction,
    STATE(17), 2,
      sym_code_location,
      sym_machine_code_bytes,
    STATE(23), 2,
      sym__line_with_full_data,
      sym__line_with_missing_data,
  [34] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      sym_byte,
    STATE(3), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(15), 2,
      sym_instruction,
      sym_bad_instruction,
    STATE(17), 2,
      sym_code_location,
      sym_machine_code_bytes,
    STATE(21), 2,
      sym__line_with_full_data,
      sym__line_with_missing_data,
  [65] = 9,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym__annotated_comment_repeat1,
    STATE(8), 2,
      sym_code_location,
      sym__arm_address_comment,
    ACTIONS(19), 3,
      sym_integer,
      sym_hexadecimal,
      sym__word,
  [96] = 9,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LF,
    STATE(5), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym__annotated_comment_repeat1,
    STATE(8), 2,
      sym_code_location,
      sym__arm_address_comment,
    ACTIONS(19), 3,
      sym_integer,
      sym_hexadecimal,
      sym__word,
  [127] = 8,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(6), 2,
      sym_comment,
      aux_sym__annotated_comment_repeat1,
    STATE(8), 2,
      sym_code_location,
      sym__arm_address_comment,
    ACTIONS(34), 3,
      sym_integer,
      sym_hexadecimal,
      sym__word,
  [156] = 5,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(44), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym_comment,
    ACTIONS(42), 5,
      anon_sym_LT,
      sym_integer,
      sym_hexadecimal,
      anon_sym_LPAREN,
      sym__word,
  [176] = 5,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(48), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym_comment,
    ACTIONS(46), 5,
      anon_sym_LT,
      sym_integer,
      sym_hexadecimal,
      anon_sym_LPAREN,
      sym__word,
  [196] = 5,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym_comment,
    ACTIONS(50), 5,
      anon_sym_LT,
      sym_integer,
      sym_hexadecimal,
      anon_sym_LPAREN,
      sym__word,
  [216] = 5,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(56), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym_comment,
    ACTIONS(54), 5,
      anon_sym_LT,
      sym_integer,
      sym_hexadecimal,
      anon_sym_LPAREN,
      sym__word,
  [236] = 5,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(60), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym_comment,
    ACTIONS(58), 5,
      anon_sym_LT,
      sym_integer,
      sym_hexadecimal,
      anon_sym_LPAREN,
      sym__word,
  [256] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      sym_byte,
    STATE(12), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(62), 3,
      sym_instruction,
      sym_memory_dump,
      sym_bad_instruction,
  [277] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(64), 1,
      sym_byte,
    STATE(13), 2,
      sym_comment,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(67), 3,
      sym_instruction,
      sym_memory_dump,
      sym_bad_instruction,
  [296] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_comment,
    ACTIONS(69), 4,
      sym_instruction,
      sym_memory_dump,
      sym_byte,
      sym_bad_instruction,
  [312] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_hexadecimal,
    STATE(30), 1,
      sym_source_location,
    STATE(15), 2,
      sym_comment,
      aux_sym_source_repeat1,
  [332] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym_source_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(30), 1,
      sym_source_location,
    ACTIONS(5), 2,
      sym_hexadecimal,
      anon_sym_SEMI,
  [352] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      sym_comment,
    ACTIONS(78), 3,
      sym_instruction,
      sym_memory_dump,
      sym_bad_instruction,
  [367] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_comment,
    ACTIONS(60), 3,
      sym_instruction,
      sym_memory_dump,
      sym_bad_instruction,
  [382] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_comment,
    ACTIONS(44), 3,
      sym_instruction,
      sym_memory_dump,
      sym_bad_instruction,
  [397] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_comment,
    ACTIONS(80), 2,
      sym_integer,
      sym_hexadecimal,
  [411] = 5,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(82), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym_comment,
    STATE(27), 1,
      sym__new_line,
  [427] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(84), 1,
      anon_sym_PLUS,
    ACTIONS(86), 1,
      anon_sym_GT,
    STATE(22), 1,
      sym_comment,
  [443] = 5,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(82), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym_comment,
    STATE(25), 1,
      sym__new_line,
  [459] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_comment,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_hexadecimal,
  [473] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comment,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      sym_hexadecimal,
  [487] = 4,
    ACTIONS(92), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym_comment,
    STATE(51), 1,
      sym__annotated_comment,
    ACTIONS(94), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
  [501] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comment,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_hexadecimal,
  [515] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym_comment,
    ACTIONS(98), 2,
      sym_integer,
      sym_hexadecimal,
  [529] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(100), 1,
      anon_sym_LT,
    STATE(29), 1,
      sym_comment,
    STATE(47), 1,
      sym_code_location,
  [545] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_comment,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym_hexadecimal,
  [559] = 5,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(104), 1,
      sym_hexadecimal,
    ACTIONS(106), 1,
      aux_sym__arm_address_comment_token1,
    STATE(31), 1,
      sym_comment,
  [575] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(100), 1,
      anon_sym_LT,
    STATE(32), 1,
      sym_comment,
    STATE(39), 1,
      sym_code_location,
  [591] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(108), 1,
      anon_sym_PLUS,
    ACTIONS(110), 1,
      anon_sym_GT,
    STATE(33), 1,
      sym_comment,
  [607] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      anon_sym_PLUS,
    ACTIONS(114), 1,
      anon_sym_GT,
    STATE(34), 1,
      sym_comment,
  [623] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_comment,
    ACTIONS(116), 2,
      sym_integer,
      sym_hexadecimal,
  [637] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_comment,
  [650] = 4,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
  [663] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(120), 1,
      anon_sym_GT,
    STATE(38), 1,
      sym_comment,
  [676] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_comment,
  [689] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(124), 1,
      sym_code_identifier,
    STATE(40), 1,
      sym_comment,
  [702] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      sym_comment,
  [715] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(128), 1,
      anon_sym_GT,
    STATE(42), 1,
      sym_comment,
  [728] = 4,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      anon_sym_LF,
    STATE(43), 1,
      sym_comment,
  [741] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      sym_comment,
  [754] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_comment,
  [767] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(134), 1,
      anon_sym_GT,
    STATE(46), 1,
      sym_comment,
  [780] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_comment,
  [793] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      sym_code_identifier,
    STATE(48), 1,
      sym_comment,
  [806] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      sym_hexadecimal,
    STATE(49), 1,
      sym_comment,
  [819] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(142), 1,
      sym_code_identifier,
    STATE(50), 1,
      sym_comment,
  [832] = 4,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(144), 1,
      anon_sym_LF,
    STATE(51), 1,
      sym_comment,
  [845] = 1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 65,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 127,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 196,
  [SMALL_STATE(10)] = 216,
  [SMALL_STATE(11)] = 236,
  [SMALL_STATE(12)] = 256,
  [SMALL_STATE(13)] = 277,
  [SMALL_STATE(14)] = 296,
  [SMALL_STATE(15)] = 312,
  [SMALL_STATE(16)] = 332,
  [SMALL_STATE(17)] = 352,
  [SMALL_STATE(18)] = 367,
  [SMALL_STATE(19)] = 382,
  [SMALL_STATE(20)] = 397,
  [SMALL_STATE(21)] = 411,
  [SMALL_STATE(22)] = 427,
  [SMALL_STATE(23)] = 443,
  [SMALL_STATE(24)] = 459,
  [SMALL_STATE(25)] = 473,
  [SMALL_STATE(26)] = 487,
  [SMALL_STATE(27)] = 501,
  [SMALL_STATE(28)] = 515,
  [SMALL_STATE(29)] = 529,
  [SMALL_STATE(30)] = 545,
  [SMALL_STATE(31)] = 559,
  [SMALL_STATE(32)] = 575,
  [SMALL_STATE(33)] = 591,
  [SMALL_STATE(34)] = 607,
  [SMALL_STATE(35)] = 623,
  [SMALL_STATE(36)] = 637,
  [SMALL_STATE(37)] = 650,
  [SMALL_STATE(38)] = 663,
  [SMALL_STATE(39)] = 676,
  [SMALL_STATE(40)] = 689,
  [SMALL_STATE(41)] = 702,
  [SMALL_STATE(42)] = 715,
  [SMALL_STATE(43)] = 728,
  [SMALL_STATE(44)] = 741,
  [SMALL_STATE(45)] = 754,
  [SMALL_STATE(46)] = 767,
  [SMALL_STATE(47)] = 780,
  [SMALL_STATE(48)] = 793,
  [SMALL_STATE(49)] = 806,
  [SMALL_STATE(50)] = 819,
  [SMALL_STATE(51)] = 832,
  [SMALL_STATE(52)] = 845,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotated_comment, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotated_comment, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__annotated_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__annotated_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotated_comment_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__annotated_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 5, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 5, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotated_comment_repeat1, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotated_comment_repeat1, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arm_address_comment, 4, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arm_address_comment, 4, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arm_address_comment, 6, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arm_address_comment, 6, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_line, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 3, 0, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_with_full_data, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 4, 0, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_with_missing_data, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_with_full_data, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_code_identifier = 0,
  ts_external_token_instruction = 1,
  ts_external_token_memory_dump = 2,
  ts_external_token__error_sentinel = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_identifier] = sym_code_identifier,
  [ts_external_token_instruction] = sym_instruction,
  [ts_external_token_memory_dump] = sym_memory_dump,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code_identifier] = true,
    [ts_external_token_instruction] = true,
    [ts_external_token_memory_dump] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_instruction] = true,
  },
  [3] = {
    [ts_external_token_instruction] = true,
    [ts_external_token_memory_dump] = true,
  },
  [4] = {
    [ts_external_token_code_identifier] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_disassembly_external_scanner_create(void);
void tree_sitter_disassembly_external_scanner_destroy(void *);
bool tree_sitter_disassembly_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_disassembly_external_scanner_serialize(void *, char *);
void tree_sitter_disassembly_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_disassembly(void) {
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
      tree_sitter_disassembly_external_scanner_create,
      tree_sitter_disassembly_external_scanner_destroy,
      tree_sitter_disassembly_external_scanner_scan,
      tree_sitter_disassembly_external_scanner_serialize,
      tree_sitter_disassembly_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
