#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  anon_sym_pub = 1,
  anon_sym_mod = 2,
  anon_sym_LBRACE = 3,
  anon_sym_SEMI = 4,
  anon_sym_RBRACE = 5,
  anon_sym_incoming = 6,
  anon_sym_COLON = 7,
  anon_sym_outgoing = 8,
  anon_sym_node = 9,
  anon_sym_reg = 10,
  anon_sym_on = 11,
  anon_sym_of = 12,
  sym_direct = 13,
  sym_latched = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_DASH_GT = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_COMMA = 20,
  sym_type_clock = 21,
  anon_sym_Word = 22,
  sym_path = 23,
  sym_word = 24,
  sym_nat = 25,
  sym_id = 26,
  sym_comment_line = 27,
  sym_comment_block = 28,
  sym_package = 29,
  sym_item = 30,
  sym_moddef = 31,
  sym__decl = 32,
  sym__component = 33,
  sym_incoming = 34,
  sym_outgoing = 35,
  sym_node = 36,
  sym_reg = 37,
  sym_connect = 38,
  sym_submodule = 39,
  sym_connect_type = 40,
  sym_expr = 41,
  sym_expr_call = 42,
  sym_expr_idx = 43,
  sym_expr_lit = 44,
  sym_expr_reference = 45,
  sym__word_lit = 46,
  sym__expr_list = 47,
  sym_type = 48,
  sym_type_word = 49,
  aux_sym_package_repeat1 = 50,
  aux_sym_moddef_repeat1 = 51,
  aux_sym__expr_list_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_pub] = "pub",
  [anon_sym_mod] = "mod",
  [anon_sym_LBRACE] = "{",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACE] = "}",
  [anon_sym_incoming] = "incoming",
  [anon_sym_COLON] = ":",
  [anon_sym_outgoing] = "outgoing",
  [anon_sym_node] = "node",
  [anon_sym_reg] = "reg",
  [anon_sym_on] = "on",
  [anon_sym_of] = "of",
  [sym_direct] = "direct",
  [sym_latched] = "latched",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [sym_type_clock] = "type_clock",
  [anon_sym_Word] = "Word",
  [sym_path] = "path",
  [sym_word] = "word",
  [sym_nat] = "nat",
  [sym_id] = "id",
  [sym_comment_line] = "comment_line",
  [sym_comment_block] = "comment_block",
  [sym_package] = "package",
  [sym_item] = "item",
  [sym_moddef] = "moddef",
  [sym__decl] = "_decl",
  [sym__component] = "_component",
  [sym_incoming] = "incoming",
  [sym_outgoing] = "outgoing",
  [sym_node] = "node",
  [sym_reg] = "reg",
  [sym_connect] = "connect",
  [sym_submodule] = "submodule",
  [sym_connect_type] = "connect_type",
  [sym_expr] = "expr",
  [sym_expr_call] = "expr_call",
  [sym_expr_idx] = "expr_idx",
  [sym_expr_lit] = "expr_lit",
  [sym_expr_reference] = "expr_reference",
  [sym__word_lit] = "_word_lit",
  [sym__expr_list] = "_expr_list",
  [sym_type] = "type",
  [sym_type_word] = "type_word",
  [aux_sym_package_repeat1] = "package_repeat1",
  [aux_sym_moddef_repeat1] = "moddef_repeat1",
  [aux_sym__expr_list_repeat1] = "_expr_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_incoming] = anon_sym_incoming,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_outgoing] = anon_sym_outgoing,
  [anon_sym_node] = anon_sym_node,
  [anon_sym_reg] = anon_sym_reg,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_of] = anon_sym_of,
  [sym_direct] = sym_direct,
  [sym_latched] = sym_latched,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_type_clock] = sym_type_clock,
  [anon_sym_Word] = anon_sym_Word,
  [sym_path] = sym_path,
  [sym_word] = sym_word,
  [sym_nat] = sym_nat,
  [sym_id] = sym_id,
  [sym_comment_line] = sym_comment_line,
  [sym_comment_block] = sym_comment_block,
  [sym_package] = sym_package,
  [sym_item] = sym_item,
  [sym_moddef] = sym_moddef,
  [sym__decl] = sym__decl,
  [sym__component] = sym__component,
  [sym_incoming] = sym_incoming,
  [sym_outgoing] = sym_outgoing,
  [sym_node] = sym_node,
  [sym_reg] = sym_reg,
  [sym_connect] = sym_connect,
  [sym_submodule] = sym_submodule,
  [sym_connect_type] = sym_connect_type,
  [sym_expr] = sym_expr,
  [sym_expr_call] = sym_expr_call,
  [sym_expr_idx] = sym_expr_idx,
  [sym_expr_lit] = sym_expr_lit,
  [sym_expr_reference] = sym_expr_reference,
  [sym__word_lit] = sym__word_lit,
  [sym__expr_list] = sym__expr_list,
  [sym_type] = sym_type,
  [sym_type_word] = sym_type_word,
  [aux_sym_package_repeat1] = aux_sym_package_repeat1,
  [aux_sym_moddef_repeat1] = aux_sym_moddef_repeat1,
  [aux_sym__expr_list_repeat1] = aux_sym__expr_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incoming] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outgoing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_node] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [sym_direct] = {
    .visible = true,
    .named = true,
  },
  [sym_latched] = {
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
  [anon_sym_DASH_GT] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_type_clock] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Word] = {
    .visible = true,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_nat] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_line] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_block] = {
    .visible = true,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_moddef] = {
    .visible = true,
    .named = true,
  },
  [sym__decl] = {
    .visible = false,
    .named = true,
  },
  [sym__component] = {
    .visible = false,
    .named = true,
  },
  [sym_incoming] = {
    .visible = true,
    .named = true,
  },
  [sym_outgoing] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_reg] = {
    .visible = true,
    .named = true,
  },
  [sym_connect] = {
    .visible = true,
    .named = true,
  },
  [sym_submodule] = {
    .visible = true,
    .named = true,
  },
  [sym_connect_type] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_call] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_idx] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__word_lit] = {
    .visible = false,
    .named = true,
  },
  [sym__expr_list] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_package_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_moddef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expr_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_connect_type = 2,
  field_expr = 3,
  field_method = 4,
  field_module = 5,
  field_name = 6,
  field_on = 7,
  field_subject = 8,
  field_target = 9,
  field_type = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_connect_type] = "connect_type",
  [field_expr] = "expr",
  [field_method] = "method",
  [field_module] = "module",
  [field_name] = "name",
  [field_on] = "on",
  [field_subject] = "subject",
  [field_target] = "target",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_connect_type, 1},
    {field_expr, 2},
    {field_target, 0},
  [5] =
    {field_module, 3},
    {field_name, 1},
  [7] =
    {field_name, 1},
    {field_type, 3},
  [9] =
    {field_name, 1},
    {field_on, 5},
    {field_type, 3},
  [12] =
    {field_method, 2},
    {field_subject, 0},
  [14] =
    {field_args, 4},
    {field_method, 2},
    {field_subject, 0},
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
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(68);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == 'C') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(31);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(96);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == '}') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'k') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 41:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_incoming);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_incoming);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_outgoing);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_outgoing);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_node);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_reg);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_direct);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_latched);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_type_clock);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_Word);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_nat);
      if (lookahead == 'w') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_comment_block);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_incoming] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_outgoing] = ACTIONS(1),
    [anon_sym_node] = ACTIONS(1),
    [anon_sym_reg] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [sym_direct] = ACTIONS(1),
    [sym_latched] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_type_clock] = ACTIONS(1),
    [anon_sym_Word] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_nat] = ACTIONS(1),
    [sym_comment_line] = ACTIONS(3),
    [sym_comment_block] = ACTIONS(3),
  },
  [1] = {
    [sym_package] = STATE(73),
    [sym_item] = STATE(14),
    [sym_moddef] = STATE(38),
    [aux_sym_package_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_pub] = ACTIONS(7),
    [anon_sym_mod] = ACTIONS(9),
    [sym_comment_line] = ACTIONS(3),
    [sym_comment_block] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(11), 1,
      anon_sym_mod,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_incoming,
    ACTIONS(17), 1,
      anon_sym_outgoing,
    ACTIONS(19), 1,
      anon_sym_node,
    ACTIONS(21), 1,
      anon_sym_reg,
    ACTIONS(23), 1,
      sym_path,
    STATE(3), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(64), 8,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_connect,
      sym_submodule,
  [39] = 10,
    ACTIONS(25), 1,
      anon_sym_mod,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(30), 1,
      anon_sym_incoming,
    ACTIONS(33), 1,
      anon_sym_outgoing,
    ACTIONS(36), 1,
      anon_sym_node,
    ACTIONS(39), 1,
      anon_sym_reg,
    ACTIONS(42), 1,
      sym_path,
    STATE(3), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(64), 8,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_connect,
      sym_submodule,
  [78] = 10,
    ACTIONS(11), 1,
      anon_sym_mod,
    ACTIONS(15), 1,
      anon_sym_incoming,
    ACTIONS(17), 1,
      anon_sym_outgoing,
    ACTIONS(19), 1,
      anon_sym_node,
    ACTIONS(21), 1,
      anon_sym_reg,
    ACTIONS(23), 1,
      sym_path,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(64), 8,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_connect,
      sym_submodule,
  [117] = 10,
    ACTIONS(11), 1,
      anon_sym_mod,
    ACTIONS(15), 1,
      anon_sym_incoming,
    ACTIONS(17), 1,
      anon_sym_outgoing,
    ACTIONS(19), 1,
      anon_sym_node,
    ACTIONS(21), 1,
      anon_sym_reg,
    ACTIONS(23), 1,
      sym_path,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(64), 8,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_connect,
      sym_submodule,
  [156] = 10,
    ACTIONS(11), 1,
      anon_sym_mod,
    ACTIONS(15), 1,
      anon_sym_incoming,
    ACTIONS(17), 1,
      anon_sym_outgoing,
    ACTIONS(19), 1,
      anon_sym_node,
    ACTIONS(21), 1,
      anon_sym_reg,
    ACTIONS(23), 1,
      sym_path,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(64), 8,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_connect,
      sym_submodule,
  [195] = 10,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 1,
      sym_path,
    ACTIONS(57), 1,
      sym_word,
    ACTIONS(59), 1,
      sym_nat,
    STATE(17), 1,
      sym_expr,
    STATE(23), 1,
      sym__word_lit,
    STATE(67), 1,
      sym__expr_list,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [230] = 9,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym_path,
    ACTIONS(57), 1,
      sym_word,
    ACTIONS(59), 1,
      sym_nat,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym__word_lit,
    STATE(25), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [262] = 9,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym_path,
    ACTIONS(57), 1,
      sym_word,
    ACTIONS(59), 1,
      sym_nat,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym__word_lit,
    STATE(25), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [294] = 8,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym_path,
    ACTIONS(57), 1,
      sym_word,
    ACTIONS(59), 1,
      sym_nat,
    STATE(23), 1,
      sym__word_lit,
    STATE(25), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [323] = 8,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym_path,
    ACTIONS(57), 1,
      sym_word,
    ACTIONS(59), 1,
      sym_nat,
    STATE(23), 1,
      sym__word_lit,
    STATE(33), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [352] = 8,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym_path,
    ACTIONS(57), 1,
      sym_word,
    ACTIONS(59), 1,
      sym_nat,
    STATE(23), 1,
      sym__word_lit,
    STATE(37), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [381] = 3,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(65), 6,
      anon_sym_mod,
      anon_sym_incoming,
      anon_sym_outgoing,
      anon_sym_node,
      anon_sym_reg,
      sym_path,
  [397] = 6,
    ACTIONS(7), 1,
      anon_sym_pub,
    ACTIONS(9), 1,
      anon_sym_mod,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_moddef,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(15), 2,
      sym_item,
      aux_sym_package_repeat1,
  [418] = 6,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_pub,
    ACTIONS(74), 1,
      anon_sym_mod,
    STATE(38), 1,
      sym_moddef,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(15), 2,
      sym_item,
      aux_sym_package_repeat1,
  [439] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(77), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [451] = 6,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      anon_sym_DASH_GT,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [471] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(87), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [483] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(89), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [495] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(91), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [507] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(93), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [519] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(95), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [531] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(97), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [543] = 3,
    ACTIONS(101), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(99), 3,
      anon_sym_LPAREN,
      sym_path,
      sym_word,
  [556] = 4,
    ACTIONS(81), 1,
      anon_sym_DASH_GT,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(103), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [571] = 5,
    ACTIONS(105), 1,
      sym_type_clock,
    ACTIONS(107), 1,
      anon_sym_Word,
    STATE(40), 1,
      sym_type_word,
    STATE(48), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [588] = 5,
    ACTIONS(105), 1,
      sym_type_clock,
    ACTIONS(107), 1,
      anon_sym_Word,
    STATE(40), 1,
      sym_type_word,
    STATE(49), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [605] = 5,
    ACTIONS(105), 1,
      sym_type_clock,
    ACTIONS(107), 1,
      anon_sym_Word,
    STATE(40), 1,
      sym_type_word,
    STATE(50), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [622] = 5,
    ACTIONS(105), 1,
      sym_type_clock,
    ACTIONS(107), 1,
      anon_sym_Word,
    STATE(40), 1,
      sym_type_word,
    STATE(51), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [639] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_mod,
  [649] = 4,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [663] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_mod,
  [673] = 4,
    ACTIONS(81), 1,
      anon_sym_DASH_GT,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [687] = 4,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [701] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_mod,
  [711] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_mod,
  [721] = 4,
    ACTIONS(81), 1,
      anon_sym_DASH_GT,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [735] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_mod,
  [745] = 3,
    STATE(12), 1,
      sym_connect_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(128), 2,
      sym_direct,
      sym_latched,
  [757] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(130), 2,
      anon_sym_SEMI,
      anon_sym_on,
  [766] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(132), 2,
      anon_sym_SEMI,
      anon_sym_on,
  [775] = 2,
    ACTIONS(134), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [783] = 2,
    ACTIONS(136), 1,
      anon_sym_mod,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [791] = 2,
    ACTIONS(138), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [799] = 2,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [807] = 2,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [815] = 2,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [823] = 2,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [831] = 2,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [839] = 2,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [847] = 2,
    ACTIONS(152), 1,
      anon_sym_on,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [855] = 2,
    ACTIONS(154), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [863] = 2,
    ACTIONS(156), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [871] = 2,
    ACTIONS(158), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [879] = 2,
    ACTIONS(160), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [887] = 2,
    ACTIONS(162), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [895] = 2,
    ACTIONS(164), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [903] = 2,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [911] = 2,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [919] = 2,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [927] = 2,
    ACTIONS(172), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [935] = 2,
    ACTIONS(174), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [943] = 2,
    ACTIONS(176), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [951] = 2,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [959] = 2,
    ACTIONS(180), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [967] = 2,
    ACTIONS(182), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [975] = 2,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [983] = 2,
    ACTIONS(186), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [991] = 2,
    ACTIONS(188), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [999] = 2,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [1007] = 2,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [1015] = 2,
    ACTIONS(194), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [1023] = 2,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [1031] = 2,
    ACTIONS(198), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 195,
  [SMALL_STATE(8)] = 230,
  [SMALL_STATE(9)] = 262,
  [SMALL_STATE(10)] = 294,
  [SMALL_STATE(11)] = 323,
  [SMALL_STATE(12)] = 352,
  [SMALL_STATE(13)] = 381,
  [SMALL_STATE(14)] = 397,
  [SMALL_STATE(15)] = 418,
  [SMALL_STATE(16)] = 439,
  [SMALL_STATE(17)] = 451,
  [SMALL_STATE(18)] = 471,
  [SMALL_STATE(19)] = 483,
  [SMALL_STATE(20)] = 495,
  [SMALL_STATE(21)] = 507,
  [SMALL_STATE(22)] = 519,
  [SMALL_STATE(23)] = 531,
  [SMALL_STATE(24)] = 543,
  [SMALL_STATE(25)] = 556,
  [SMALL_STATE(26)] = 571,
  [SMALL_STATE(27)] = 588,
  [SMALL_STATE(28)] = 605,
  [SMALL_STATE(29)] = 622,
  [SMALL_STATE(30)] = 639,
  [SMALL_STATE(31)] = 649,
  [SMALL_STATE(32)] = 663,
  [SMALL_STATE(33)] = 673,
  [SMALL_STATE(34)] = 687,
  [SMALL_STATE(35)] = 701,
  [SMALL_STATE(36)] = 711,
  [SMALL_STATE(37)] = 721,
  [SMALL_STATE(38)] = 735,
  [SMALL_STATE(39)] = 745,
  [SMALL_STATE(40)] = 757,
  [SMALL_STATE(41)] = 766,
  [SMALL_STATE(42)] = 775,
  [SMALL_STATE(43)] = 783,
  [SMALL_STATE(44)] = 791,
  [SMALL_STATE(45)] = 799,
  [SMALL_STATE(46)] = 807,
  [SMALL_STATE(47)] = 815,
  [SMALL_STATE(48)] = 823,
  [SMALL_STATE(49)] = 831,
  [SMALL_STATE(50)] = 839,
  [SMALL_STATE(51)] = 847,
  [SMALL_STATE(52)] = 855,
  [SMALL_STATE(53)] = 863,
  [SMALL_STATE(54)] = 871,
  [SMALL_STATE(55)] = 879,
  [SMALL_STATE(56)] = 887,
  [SMALL_STATE(57)] = 895,
  [SMALL_STATE(58)] = 903,
  [SMALL_STATE(59)] = 911,
  [SMALL_STATE(60)] = 919,
  [SMALL_STATE(61)] = 927,
  [SMALL_STATE(62)] = 935,
  [SMALL_STATE(63)] = 943,
  [SMALL_STATE(64)] = 951,
  [SMALL_STATE(65)] = 959,
  [SMALL_STATE(66)] = 967,
  [SMALL_STATE(67)] = 975,
  [SMALL_STATE(68)] = 983,
  [SMALL_STATE(69)] = 991,
  [SMALL_STATE(70)] = 999,
  [SMALL_STATE(71)] = 1007,
  [SMALL_STATE(72)] = 1015,
  [SMALL_STATE(73)] = 1023,
  [SMALL_STATE(74)] = 1031,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(69),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_moddef_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(68),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(66),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(42),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(65),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(39),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2), SHIFT_REPEAT(43),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2), SHIFT_REPEAT(74),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_idx, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 5, .production_id = 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_reference, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 6, .production_id = 8),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_lit, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect_type, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connect_type, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, .production_id = 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2), SHIFT_REPEAT(10),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 4, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 6, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect, 3, .production_id = 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_word, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_submodule, 4, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incoming, 4, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outgoing, 4, .production_id = 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 6, .production_id = 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [196] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
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

TS_PUBLIC const TSLanguage *tree_sitter_virdant() {
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
