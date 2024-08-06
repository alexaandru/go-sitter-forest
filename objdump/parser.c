#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_file = 2,
  anon_sym_format = 3,
  aux_sym_disassembly_section_token1 = 4,
  anon_sym_LPAREN = 5,
  anon_sym_discriminator = 6,
  anon_sym_RPAREN = 7,
  aux_sym_memory_offset_token1 = 8,
  sym_instruction = 9,
  sym_bad_instruction = 10,
  anon_sym_POUND = 11,
  anon_sym_LT = 12,
  anon_sym_PLUS = 13,
  anon_sym_GT = 14,
  sym_hexadecimal = 15,
  sym_byte = 16,
  anon_sym_SPACE = 17,
  sym_address = 18,
  anon_sym_File = 19,
  anon_sym_Offset_COLON = 20,
  anon_sym_Disassemblyofsection = 21,
  sym_integer = 22,
  sym_file_path = 23,
  sym__label_identifier = 24,
  sym_identifier = 25,
  sym__section_name = 26,
  sym_code_identifier = 27,
  sym__whitespace_no_newline = 28,
  sym__error_sentinel = 29,
  sym_source = 30,
  sym__line = 31,
  sym_header = 32,
  sym_disassembly_section = 33,
  sym_source_location = 34,
  sym_discriminator = 35,
  sym_memory_offset = 36,
  sym__instruction_and_comment = 37,
  sym__instruction_and_location = 38,
  sym_comment = 39,
  sym__comment_with_label = 40,
  sym__comment_with_address = 41,
  sym_code_location = 42,
  sym_label_line = 43,
  sym_machine_code_bytes = 44,
  sym_file_offset = 45,
  sym_disassembly_section_label = 46,
  aux_sym_source_repeat1 = 47,
  aux_sym_disassembly_section_repeat1 = 48,
  aux_sym_machine_code_bytes_repeat1 = 49,
  alias_sym_section_address = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_file] = "file",
  [anon_sym_format] = "format",
  [aux_sym_disassembly_section_token1] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_discriminator] = "discriminator",
  [anon_sym_RPAREN] = ")",
  [aux_sym_memory_offset_token1] = "memory_offset_token1",
  [sym_instruction] = "instruction",
  [sym_bad_instruction] = "bad_instruction",
  [anon_sym_POUND] = "#",
  [anon_sym_LT] = "<",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [sym_hexadecimal] = "hexadecimal",
  [sym_byte] = "byte",
  [anon_sym_SPACE] = " ",
  [sym_address] = "address",
  [anon_sym_File] = "File",
  [anon_sym_Offset_COLON] = "Offset:",
  [anon_sym_Disassemblyofsection] = "Disassembly of section ",
  [sym_integer] = "integer",
  [sym_file_path] = "file_path",
  [sym__label_identifier] = "label",
  [sym_identifier] = "identifier",
  [sym__section_name] = "identifier",
  [sym_code_identifier] = "identifier",
  [sym__whitespace_no_newline] = "_whitespace_no_newline",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_header] = "header",
  [sym_disassembly_section] = "disassembly_section",
  [sym_source_location] = "source_location",
  [sym_discriminator] = "discriminator",
  [sym_memory_offset] = "memory_offset",
  [sym__instruction_and_comment] = "_instruction_and_comment",
  [sym__instruction_and_location] = "_instruction_and_location",
  [sym_comment] = "comment",
  [sym__comment_with_label] = "_comment_with_label",
  [sym__comment_with_address] = "_comment_with_address",
  [sym_code_location] = "code_location",
  [sym_label_line] = "label_line",
  [sym_machine_code_bytes] = "machine_code_bytes",
  [sym_file_offset] = "file_offset",
  [sym_disassembly_section_label] = "disassembly_section_label",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_disassembly_section_repeat1] = "disassembly_section_repeat1",
  [aux_sym_machine_code_bytes_repeat1] = "machine_code_bytes_repeat1",
  [alias_sym_section_address] = "section_address",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_format] = anon_sym_format,
  [aux_sym_disassembly_section_token1] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_discriminator] = anon_sym_discriminator,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_memory_offset_token1] = aux_sym_memory_offset_token1,
  [sym_instruction] = sym_instruction,
  [sym_bad_instruction] = sym_bad_instruction,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_byte] = sym_byte,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [sym_address] = sym_address,
  [anon_sym_File] = anon_sym_File,
  [anon_sym_Offset_COLON] = anon_sym_Offset_COLON,
  [anon_sym_Disassemblyofsection] = anon_sym_Disassemblyofsection,
  [sym_integer] = sym_integer,
  [sym_file_path] = sym_file_path,
  [sym__label_identifier] = sym__label_identifier,
  [sym_identifier] = sym_identifier,
  [sym__section_name] = sym_identifier,
  [sym_code_identifier] = sym_identifier,
  [sym__whitespace_no_newline] = sym__whitespace_no_newline,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_header] = sym_header,
  [sym_disassembly_section] = sym_disassembly_section,
  [sym_source_location] = sym_source_location,
  [sym_discriminator] = sym_discriminator,
  [sym_memory_offset] = sym_memory_offset,
  [sym__instruction_and_comment] = sym__instruction_and_comment,
  [sym__instruction_and_location] = sym__instruction_and_location,
  [sym_comment] = sym_comment,
  [sym__comment_with_label] = sym__comment_with_label,
  [sym__comment_with_address] = sym__comment_with_address,
  [sym_code_location] = sym_code_location,
  [sym_label_line] = sym_label_line,
  [sym_machine_code_bytes] = sym_machine_code_bytes,
  [sym_file_offset] = sym_file_offset,
  [sym_disassembly_section_label] = sym_disassembly_section_label,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_disassembly_section_repeat1] = aux_sym_disassembly_section_repeat1,
  [aux_sym_machine_code_bytes_repeat1] = aux_sym_machine_code_bytes_repeat1,
  [alias_sym_section_address] = alias_sym_section_address,
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
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_disassembly_section_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discriminator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_memory_offset_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_bad_instruction] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
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
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_byte] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_File] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Offset_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Disassemblyofsection] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym__label_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_code_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace_no_newline] = {
    .visible = false,
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
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_disassembly_section] = {
    .visible = true,
    .named = true,
  },
  [sym_source_location] = {
    .visible = true,
    .named = true,
  },
  [sym_discriminator] = {
    .visible = true,
    .named = true,
  },
  [sym_memory_offset] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction_and_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__instruction_and_location] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_with_label] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_with_address] = {
    .visible = false,
    .named = true,
  },
  [sym_code_location] = {
    .visible = true,
    .named = true,
  },
  [sym_label_line] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_code_bytes] = {
    .visible = true,
    .named = true,
  },
  [sym_file_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_disassembly_section_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_disassembly_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_machine_code_bytes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_section_address] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_section_address,
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
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(66);
      ADVANCE_MAP(
        '#', 85,
        '(', 72,
        ')', 74,
        '+', 88,
        ':', 67,
        '<', 87,
        '>', 89,
        'D', 93,
        'F', 94,
        'O', 25,
        'd', 96,
        'f', 97,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '(') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '@') ADVANCE(119);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(63);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(5);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 61:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(123);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 64:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 65:
      if (eof) ADVANCE(66);
      ADVANCE_MAP(
        '#', 85,
        '(', 71,
        ':', 67,
        '<', 86,
        '@', 119,
        'D', 95,
        '+', 118,
        '-', 118,
        '/', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_disassembly_section_token1);
      if (lookahead == '>') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'b') ADVANCE(12);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_discriminator);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_memory_offset_token1);
      if (lookahead == ' ') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_memory_offset_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_bad_instruction);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_bad_instruction);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(75);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_Offset_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(119);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(119);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(119);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(119);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(119);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(119);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(119);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(119);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(119);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'y') ADVANCE(107);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(119);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(119);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__section_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__section_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(123);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 65},
  [3] = {.lex_state = 65},
  [4] = {.lex_state = 65},
  [5] = {.lex_state = 65},
  [6] = {.lex_state = 65},
  [7] = {.lex_state = 65},
  [8] = {.lex_state = 65},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 65},
  [11] = {.lex_state = 65},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 65},
  [14] = {.lex_state = 65},
  [15] = {.lex_state = 65},
  [16] = {.lex_state = 65},
  [17] = {.lex_state = 65},
  [18] = {.lex_state = 65},
  [19] = {.lex_state = 65},
  [20] = {.lex_state = 65},
  [21] = {.lex_state = 65},
  [22] = {.lex_state = 65},
  [23] = {.lex_state = 65},
  [24] = {.lex_state = 65},
  [25] = {.lex_state = 65},
  [26] = {.lex_state = 65},
  [27] = {.lex_state = 65},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 75, .external_lex_state = 2},
  [30] = {.lex_state = 75, .external_lex_state = 2},
  [31] = {.lex_state = 75, .external_lex_state = 2},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 65},
  [34] = {.lex_state = 75, .external_lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 76, .external_lex_state = 2},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 65},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 61},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [aux_sym_disassembly_section_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_discriminator] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_bad_instruction] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
    [anon_sym_File] = ACTIONS(1),
    [anon_sym_Offset_COLON] = ACTIONS(1),
    [anon_sym_Disassemblyofsection] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_code_identifier] = ACTIONS(1),
    [sym__whitespace_no_newline] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(57),
    [sym__line] = STATE(3),
    [sym_header] = STATE(3),
    [sym_disassembly_section] = STATE(3),
    [sym_source_location] = STATE(3),
    [sym_memory_offset] = STATE(3),
    [sym_label_line] = STATE(3),
    [sym_disassembly_section_label] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_address] = ACTIONS(5),
    [anon_sym_Disassemblyofsection] = ACTIONS(7),
    [sym_file_path] = ACTIONS(9),
    [sym__label_identifier] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_address,
    ACTIONS(18), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(21), 1,
      sym_file_path,
    ACTIONS(24), 1,
      sym__label_identifier,
    STATE(2), 8,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [26] = 6,
    ACTIONS(5), 1,
      sym_address,
    ACTIONS(7), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(9), 1,
      sym_file_path,
    ACTIONS(11), 1,
      sym__label_identifier,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(2), 8,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [52] = 8,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      anon_sym_LT,
    STATE(8), 1,
      sym_code_location,
    STATE(18), 1,
      sym_file_offset,
    STATE(20), 1,
      sym_comment,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(37), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [80] = 5,
    ACTIONS(41), 1,
      sym_address,
    ACTIONS(44), 1,
      sym_file_path,
    ACTIONS(47), 1,
      sym__label_identifier,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(5), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [100] = 5,
    ACTIONS(52), 1,
      sym_address,
    ACTIONS(55), 1,
      sym_file_path,
    ACTIONS(58), 1,
      sym__label_identifier,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(5), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [120] = 5,
    ACTIONS(63), 1,
      sym_address,
    ACTIONS(66), 1,
      sym_file_path,
    ACTIONS(69), 1,
      sym__label_identifier,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(5), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [140] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_file_offset,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(74), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [156] = 4,
    ACTIONS(11), 1,
      sym__label_identifier,
    ACTIONS(76), 1,
      sym_address,
    ACTIONS(78), 1,
      sym_file_path,
    STATE(7), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [172] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_file_offset,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(82), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [188] = 4,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_discriminator,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(88), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [204] = 4,
    ACTIONS(11), 1,
      sym__label_identifier,
    ACTIONS(76), 1,
      sym_address,
    ACTIONS(78), 1,
      sym_file_path,
    STATE(6), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [220] = 2,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Disassemblyofsection,
    ACTIONS(92), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [231] = 2,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
    ACTIONS(96), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [242] = 2,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
    ACTIONS(100), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [253] = 2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(104), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [263] = 2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(108), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [273] = 2,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(74), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [283] = 2,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(112), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [293] = 2,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(116), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [303] = 2,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(120), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [313] = 2,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(124), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [323] = 2,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(128), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [333] = 2,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(132), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [343] = 2,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(136), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [353] = 2,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(140), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [363] = 2,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(144), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [373] = 3,
    ACTIONS(146), 1,
      sym_hexadecimal,
    ACTIONS(148), 1,
      sym_address,
    STATE(17), 2,
      sym__comment_with_label,
      sym__comment_with_address,
  [384] = 4,
    ACTIONS(150), 1,
      aux_sym_memory_offset_token1,
    ACTIONS(152), 1,
      anon_sym_SPACE,
    ACTIONS(155), 1,
      sym__whitespace_no_newline,
    STATE(29), 1,
      aux_sym_machine_code_bytes_repeat1,
  [397] = 4,
    ACTIONS(157), 1,
      aux_sym_memory_offset_token1,
    ACTIONS(159), 1,
      anon_sym_SPACE,
    ACTIONS(161), 1,
      sym__whitespace_no_newline,
    STATE(31), 1,
      aux_sym_machine_code_bytes_repeat1,
  [410] = 4,
    ACTIONS(159), 1,
      anon_sym_SPACE,
    ACTIONS(163), 1,
      aux_sym_memory_offset_token1,
    ACTIONS(165), 1,
      sym__whitespace_no_newline,
    STATE(29), 1,
      aux_sym_machine_code_bytes_repeat1,
  [423] = 3,
    ACTIONS(167), 1,
      sym_instruction,
    ACTIONS(169), 1,
      sym_bad_instruction,
    STATE(24), 2,
      sym__instruction_and_comment,
      sym__instruction_and_location,
  [434] = 3,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_COLON,
    STATE(44), 1,
      sym_file_offset,
  [444] = 2,
    ACTIONS(155), 1,
      sym__whitespace_no_newline,
    ACTIONS(150), 2,
      aux_sym_memory_offset_token1,
      anon_sym_SPACE,
  [452] = 2,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(175), 1,
      anon_sym_GT,
  [459] = 2,
    ACTIONS(177), 1,
      aux_sym_memory_offset_token1,
    ACTIONS(179), 1,
      sym__whitespace_no_newline,
  [466] = 2,
    ACTIONS(181), 1,
      anon_sym_COLON,
    ACTIONS(183), 1,
      aux_sym_disassembly_section_token1,
  [473] = 2,
    ACTIONS(185), 1,
      sym_byte,
    STATE(36), 1,
      sym_machine_code_bytes,
  [480] = 2,
    ACTIONS(187), 1,
      anon_sym_file,
    ACTIONS(189), 1,
      sym_integer,
  [487] = 2,
    ACTIONS(35), 1,
      anon_sym_LT,
    STATE(10), 1,
      sym_code_location,
  [494] = 1,
    ACTIONS(191), 1,
      anon_sym_Offset_COLON,
  [498] = 1,
    ACTIONS(193), 1,
      sym_hexadecimal,
  [502] = 1,
    ACTIONS(195), 1,
      sym_integer,
  [506] = 1,
    ACTIONS(197), 1,
      anon_sym_COLON,
  [510] = 1,
    ACTIONS(199), 1,
      sym_code_identifier,
  [514] = 1,
    ACTIONS(201), 1,
      anon_sym_File,
  [518] = 1,
    ACTIONS(181), 1,
      anon_sym_COLON,
  [522] = 1,
    ACTIONS(203), 1,
      anon_sym_discriminator,
  [526] = 1,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
  [530] = 1,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
  [534] = 1,
    ACTIONS(209), 1,
      sym_byte,
  [538] = 1,
    ACTIONS(211), 1,
      anon_sym_format,
  [542] = 1,
    ACTIONS(213), 1,
      anon_sym_COLON,
  [546] = 1,
    ACTIONS(215), 1,
      anon_sym_COLON,
  [550] = 1,
    ACTIONS(217), 1,
      sym_identifier,
  [554] = 1,
    ACTIONS(189), 1,
      sym_integer,
  [558] = 1,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
  [562] = 1,
    ACTIONS(221), 1,
      sym_hexadecimal,
  [566] = 1,
    ACTIONS(223), 1,
      anon_sym_COLON,
  [570] = 1,
    ACTIONS(225), 1,
      anon_sym_COLON,
  [574] = 1,
    ACTIONS(227), 1,
      anon_sym_GT,
  [578] = 1,
    ACTIONS(229), 1,
      sym__section_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 231,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 253,
  [SMALL_STATE(17)] = 263,
  [SMALL_STATE(18)] = 273,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 293,
  [SMALL_STATE(21)] = 303,
  [SMALL_STATE(22)] = 313,
  [SMALL_STATE(23)] = 323,
  [SMALL_STATE(24)] = 333,
  [SMALL_STATE(25)] = 343,
  [SMALL_STATE(26)] = 353,
  [SMALL_STATE(27)] = 363,
  [SMALL_STATE(28)] = 373,
  [SMALL_STATE(29)] = 384,
  [SMALL_STATE(30)] = 397,
  [SMALL_STATE(31)] = 410,
  [SMALL_STATE(32)] = 423,
  [SMALL_STATE(33)] = 434,
  [SMALL_STATE(34)] = 444,
  [SMALL_STATE(35)] = 452,
  [SMALL_STATE(36)] = 459,
  [SMALL_STATE(37)] = 466,
  [SMALL_STATE(38)] = 473,
  [SMALL_STATE(39)] = 480,
  [SMALL_STATE(40)] = 487,
  [SMALL_STATE(41)] = 494,
  [SMALL_STATE(42)] = 498,
  [SMALL_STATE(43)] = 502,
  [SMALL_STATE(44)] = 506,
  [SMALL_STATE(45)] = 510,
  [SMALL_STATE(46)] = 514,
  [SMALL_STATE(47)] = 518,
  [SMALL_STATE(48)] = 522,
  [SMALL_STATE(49)] = 526,
  [SMALL_STATE(50)] = 530,
  [SMALL_STATE(51)] = 534,
  [SMALL_STATE(52)] = 538,
  [SMALL_STATE(53)] = 542,
  [SMALL_STATE(54)] = 546,
  [SMALL_STATE(55)] = 550,
  [SMALL_STATE(56)] = 554,
  [SMALL_STATE(57)] = 558,
  [SMALL_STATE(58)] = 562,
  [SMALL_STATE(59)] = 566,
  [SMALL_STATE(60)] = 570,
  [SMALL_STATE(61)] = 574,
  [SMALL_STATE(62)] = 578,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disassembly_section_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 5, 0, 1),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 5, 0, 1), SHIFT(47),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 5, 0, 1), SHIFT(53),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 5, 0, 1), SHIFT(59),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 4, 0, 1),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 4, 0, 1), SHIFT(47),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 4, 0, 1), SHIFT(53),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 4, 0, 1), SHIFT(59),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_offset, 5, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_offset, 5, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 5, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_line, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_line, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_comment, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_comment, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discriminator, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discriminator, 4, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section_label, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section_label, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_offset, 5, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_offset, 5, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_offset, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_offset, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 4, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [219] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_code_identifier = 0,
  ts_external_token__whitespace_no_newline = 1,
  ts_external_token__error_sentinel = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_identifier] = sym_code_identifier,
  [ts_external_token__whitespace_no_newline] = sym__whitespace_no_newline,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code_identifier] = true,
    [ts_external_token__whitespace_no_newline] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token__whitespace_no_newline] = true,
  },
  [3] = {
    [ts_external_token_code_identifier] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_objdump_external_scanner_create(void);
void tree_sitter_objdump_external_scanner_destroy(void *);
bool tree_sitter_objdump_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_objdump_external_scanner_serialize(void *, char *);
void tree_sitter_objdump_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_objdump(void) {
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
      tree_sitter_objdump_external_scanner_create,
      tree_sitter_objdump_external_scanner_destroy,
      tree_sitter_objdump_external_scanner_scan,
      tree_sitter_objdump_external_scanner_serialize,
      tree_sitter_objdump_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
