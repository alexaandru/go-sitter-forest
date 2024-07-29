#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  anon_sym_BANG = 1,
  anon_sym_BANGinclude = 2,
  sym_include_open = 3,
  sym_include_close = 4,
  anon_sym_BANGtheme = 5,
  anon_sym_from = 6,
  sym_url = 7,
  sym_filepath = 8,
  anon_sym_as = 9,
  sym_block_open = 10,
  sym_block_close = 11,
  sym_attribute_sep = 12,
  sym_attribute_list_open = 13,
  sym_attribute_list_close = 14,
  sym_identifier = 15,
  sym_non_breakable_identifier = 16,
  sym_string = 17,
  sym_comment = 18,
  sym_delimiter = 19,
  sym_keyword = 20,
  sym_document = 21,
  sym_statement = 22,
  sym_preprocessor = 23,
  sym_include = 24,
  sym_theme = 25,
  sym_component = 26,
  sym_block = 27,
  sym_attribute_list = 28,
  sym_attribute = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_attribute_list_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BANG] = "!",
  [anon_sym_BANGinclude] = "!include",
  [sym_include_open] = "include_open",
  [sym_include_close] = "include_close",
  [anon_sym_BANGtheme] = "!theme",
  [anon_sym_from] = "from",
  [sym_url] = "url",
  [sym_filepath] = "filepath",
  [anon_sym_as] = "as",
  [sym_block_open] = "block_open",
  [sym_block_close] = "block_close",
  [sym_attribute_sep] = "attribute_sep",
  [sym_attribute_list_open] = "attribute_list_open",
  [sym_attribute_list_close] = "attribute_list_close",
  [sym_identifier] = "identifier",
  [sym_non_breakable_identifier] = "non_breakable_identifier",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_delimiter] = "delimiter",
  [sym_keyword] = "keyword",
  [sym_document] = "document",
  [sym_statement] = "statement",
  [sym_preprocessor] = "preprocessor",
  [sym_include] = "include",
  [sym_theme] = "theme",
  [sym_component] = "component",
  [sym_block] = "block",
  [sym_attribute_list] = "attribute_list",
  [sym_attribute] = "attribute",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_BANGinclude] = anon_sym_BANGinclude,
  [sym_include_open] = sym_include_open,
  [sym_include_close] = sym_include_close,
  [anon_sym_BANGtheme] = anon_sym_BANGtheme,
  [anon_sym_from] = anon_sym_from,
  [sym_url] = sym_url,
  [sym_filepath] = sym_filepath,
  [anon_sym_as] = anon_sym_as,
  [sym_block_open] = sym_block_open,
  [sym_block_close] = sym_block_close,
  [sym_attribute_sep] = sym_attribute_sep,
  [sym_attribute_list_open] = sym_attribute_list_open,
  [sym_attribute_list_close] = sym_attribute_list_close,
  [sym_identifier] = sym_identifier,
  [sym_non_breakable_identifier] = sym_non_breakable_identifier,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_delimiter] = sym_delimiter,
  [sym_keyword] = sym_keyword,
  [sym_document] = sym_document,
  [sym_statement] = sym_statement,
  [sym_preprocessor] = sym_preprocessor,
  [sym_include] = sym_include,
  [sym_theme] = sym_theme,
  [sym_component] = sym_component,
  [sym_block] = sym_block,
  [sym_attribute_list] = sym_attribute_list,
  [sym_attribute] = sym_attribute,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_attribute_list_repeat1] = aux_sym_attribute_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGinclude] = {
    .visible = true,
    .named = false,
  },
  [sym_include_open] = {
    .visible = true,
    .named = true,
  },
  [sym_include_close] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANGtheme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_filepath] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [sym_block_open] = {
    .visible = true,
    .named = true,
  },
  [sym_block_close] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list_open] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list_close] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_non_breakable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_theme] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_component = 2,
  field_filepath = 3,
  field_library = 4,
  field_method = 5,
  field_name = 6,
  field_object = 7,
  field_tag = 8,
  field_url = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_component] = "component",
  [field_filepath] = "filepath",
  [field_library] = "library",
  [field_method] = "method",
  [field_name] = "name",
  [field_object] = "object",
  [field_tag] = "tag",
  [field_url] = "url",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_url, 1},
  [1] =
    {field_filepath, 1},
  [2] =
    {field_method, 0},
    {field_tag, 1},
  [4] =
    {field_object, 0},
  [5] =
    {field_component, 0},
  [6] =
    {field_library, 1},
    {field_library, 2},
    {field_library, 3},
  [9] =
    {field_name, 1},
    {field_url, 3},
  [11] =
    {field_alias, 3},
    {field_method, 0},
    {field_tag, 1},
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
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 3,
  [10] = 4,
  [11] = 7,
  [12] = 5,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 15,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 19,
  [23] = 23,
  [24] = 20,
  [25] = 21,
  [26] = 23,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 32,
  [34] = 28,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 37,
  [43] = 41,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 38,
  [48] = 40,
  [49] = 46,
  [50] = 50,
  [51] = 44,
  [52] = 39,
  [53] = 45,
  [54] = 54,
  [55] = 54,
  [56] = 50,
  [57] = 57,
  [58] = 57,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 62,
  [66] = 59,
  [67] = 64,
  [68] = 60,
  [69] = 15,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 72,
  [80] = 75,
  [81] = 76,
  [82] = 73,
  [83] = 71,
  [84] = 78,
  [85] = 77,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == ',') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == 'h') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(41);
      END_STATE();
    case 30:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 31:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '@') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_include_open);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_include_close);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BANGtheme);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(41);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_block_open);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_block_close);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_attribute_sep);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_attribute_list_open);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_attribute_list_close);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_non_breakable_identifier);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 33},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 33},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 33},
  [51] = {.lex_state = 33},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 31},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 33},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 33},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 33},
  [78] = {.lex_state = 33},
  [79] = {.lex_state = 33},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 33},
  [85] = {.lex_state = 33},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_BANGinclude] = ACTIONS(1),
    [sym_include_open] = ACTIONS(1),
    [sym_include_close] = ACTIONS(1),
    [anon_sym_BANGtheme] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_block_open] = ACTIONS(1),
    [sym_block_close] = ACTIONS(1),
    [sym_attribute_sep] = ACTIONS(1),
    [sym_attribute_list_open] = ACTIONS(1),
    [sym_attribute_list_close] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(74),
    [sym_statement] = STATE(8),
    [sym_preprocessor] = STATE(51),
    [sym_include] = STATE(51),
    [sym_theme] = STATE(51),
    [sym_component] = STATE(32),
    [sym_block] = STATE(51),
    [aux_sym_document_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_BANGinclude] = ACTIONS(7),
    [anon_sym_BANGtheme] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_delimiter] = ACTIONS(13),
    [sym_keyword] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(20), 1,
      anon_sym_BANGinclude,
    ACTIONS(23), 1,
      anon_sym_BANGtheme,
    ACTIONS(26), 1,
      sym_identifier,
    STATE(32), 1,
      sym_component,
    STATE(2), 2,
      sym_statement,
      aux_sym_document_repeat1,
    ACTIONS(29), 3,
      sym_comment,
      sym_delimiter,
      sym_keyword,
    STATE(51), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [34] = 10,
    ACTIONS(32), 1,
      anon_sym_BANG,
    ACTIONS(34), 1,
      anon_sym_BANGinclude,
    ACTIONS(36), 1,
      anon_sym_BANGtheme,
    ACTIONS(38), 1,
      sym_block_close,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      sym_delimiter,
    STATE(33), 1,
      sym_component,
    ACTIONS(42), 2,
      sym_comment,
      sym_keyword,
    STATE(6), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(44), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [70] = 10,
    ACTIONS(32), 1,
      anon_sym_BANG,
    ACTIONS(34), 1,
      anon_sym_BANGinclude,
    ACTIONS(36), 1,
      anon_sym_BANGtheme,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      sym_delimiter,
    ACTIONS(46), 1,
      sym_block_close,
    STATE(33), 1,
      sym_component,
    ACTIONS(42), 2,
      sym_comment,
      sym_keyword,
    STATE(6), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(44), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [106] = 10,
    ACTIONS(32), 1,
      anon_sym_BANG,
    ACTIONS(34), 1,
      anon_sym_BANGinclude,
    ACTIONS(36), 1,
      anon_sym_BANGtheme,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      sym_delimiter,
    ACTIONS(48), 1,
      sym_block_close,
    STATE(33), 1,
      sym_component,
    ACTIONS(42), 2,
      sym_comment,
      sym_keyword,
    STATE(3), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(44), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [142] = 10,
    ACTIONS(15), 1,
      sym_block_close,
    ACTIONS(50), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_BANGinclude,
    ACTIONS(56), 1,
      anon_sym_BANGtheme,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_delimiter,
    STATE(33), 1,
      sym_component,
    ACTIONS(62), 2,
      sym_comment,
      sym_keyword,
    STATE(6), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(44), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [178] = 10,
    ACTIONS(32), 1,
      anon_sym_BANG,
    ACTIONS(34), 1,
      anon_sym_BANGinclude,
    ACTIONS(36), 1,
      anon_sym_BANGtheme,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      sym_delimiter,
    ACTIONS(68), 1,
      sym_block_close,
    STATE(33), 1,
      sym_component,
    ACTIONS(42), 2,
      sym_comment,
      sym_keyword,
    STATE(4), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(44), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [214] = 9,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_BANGtheme,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_component,
    STATE(2), 2,
      sym_statement,
      aux_sym_document_repeat1,
    ACTIONS(13), 3,
      sym_comment,
      sym_delimiter,
      sym_keyword,
    STATE(51), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [248] = 10,
    ACTIONS(32), 1,
      anon_sym_BANG,
    ACTIONS(34), 1,
      anon_sym_BANGinclude,
    ACTIONS(36), 1,
      anon_sym_BANGtheme,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      sym_delimiter,
    ACTIONS(72), 1,
      sym_block_close,
    STATE(33), 1,
      sym_component,
    ACTIONS(42), 2,
      sym_comment,
      sym_keyword,
    STATE(6), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(44), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [284] = 10,
    ACTIONS(32), 1,
      anon_sym_BANG,
    ACTIONS(34), 1,
      anon_sym_BANGinclude,
    ACTIONS(36), 1,
      anon_sym_BANGtheme,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      sym_delimiter,
    ACTIONS(74), 1,
      sym_block_close,
    STATE(33), 1,
      sym_component,
    ACTIONS(42), 2,
      sym_comment,
      sym_keyword,
    STATE(6), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(44), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [320] = 10,
    ACTIONS(32), 1,
      anon_sym_BANG,
    ACTIONS(34), 1,
      anon_sym_BANGinclude,
    ACTIONS(36), 1,
      anon_sym_BANGtheme,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      sym_delimiter,
    ACTIONS(76), 1,
      sym_block_close,
    STATE(33), 1,
      sym_component,
    ACTIONS(42), 2,
      sym_comment,
      sym_keyword,
    STATE(10), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(44), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [356] = 10,
    ACTIONS(32), 1,
      anon_sym_BANG,
    ACTIONS(34), 1,
      anon_sym_BANGinclude,
    ACTIONS(36), 1,
      anon_sym_BANGtheme,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      sym_delimiter,
    ACTIONS(78), 1,
      sym_block_close,
    STATE(33), 1,
      sym_component,
    ACTIONS(42), 2,
      sym_comment,
      sym_keyword,
    STATE(9), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(44), 4,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
  [392] = 6,
    ACTIONS(84), 1,
      anon_sym_as,
    ACTIONS(86), 1,
      sym_attribute_list_open,
    ACTIONS(88), 1,
      sym_string,
    STATE(22), 1,
      sym_attribute_list,
    ACTIONS(80), 3,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
    ACTIONS(82), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_comment,
      sym_keyword,
  [418] = 6,
    ACTIONS(90), 1,
      anon_sym_as,
    ACTIONS(92), 1,
      sym_attribute_list_open,
    ACTIONS(94), 1,
      sym_string,
    STATE(19), 1,
      sym_attribute_list,
    ACTIONS(80), 3,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_comment,
      sym_keyword,
  [444] = 2,
    ACTIONS(96), 4,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      sym_delimiter,
    ACTIONS(98), 8,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_attribute_list_open,
      sym_string,
      sym_comment,
      sym_keyword,
  [461] = 5,
    ACTIONS(92), 1,
      sym_attribute_list_open,
    ACTIONS(104), 1,
      sym_string,
    STATE(26), 1,
      sym_attribute_list,
    ACTIONS(102), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(100), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [484] = 5,
    ACTIONS(86), 1,
      sym_attribute_list_open,
    ACTIONS(106), 1,
      sym_string,
    STATE(23), 1,
      sym_attribute_list,
    ACTIONS(102), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(100), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [507] = 2,
    ACTIONS(96), 4,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      sym_delimiter,
    ACTIONS(98), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_attribute_list_open,
      sym_string,
      sym_comment,
      sym_keyword,
  [524] = 3,
    ACTIONS(112), 1,
      sym_string,
    ACTIONS(110), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(108), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [541] = 2,
    ACTIONS(114), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(116), 8,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_identifier,
      sym_string,
      sym_comment,
      sym_keyword,
  [556] = 2,
    ACTIONS(118), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(120), 8,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_identifier,
      sym_string,
      sym_comment,
      sym_keyword,
  [571] = 3,
    ACTIONS(122), 1,
      sym_string,
    ACTIONS(110), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(108), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [588] = 3,
    ACTIONS(128), 1,
      sym_string,
    ACTIONS(124), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(126), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [605] = 2,
    ACTIONS(114), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_identifier,
      sym_string,
      sym_comment,
      sym_keyword,
  [620] = 2,
    ACTIONS(118), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_identifier,
      sym_string,
      sym_comment,
      sym_keyword,
  [635] = 3,
    ACTIONS(130), 1,
      sym_string,
    ACTIONS(124), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [652] = 2,
    ACTIONS(124), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [666] = 2,
    ACTIONS(132), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(134), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [680] = 2,
    ACTIONS(124), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(126), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [694] = 2,
    ACTIONS(110), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(108), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [708] = 2,
    ACTIONS(110), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(108), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [722] = 3,
    ACTIONS(140), 1,
      sym_block_open,
    ACTIONS(138), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [738] = 3,
    ACTIONS(142), 1,
      sym_block_open,
    ACTIONS(138), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(136), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [754] = 2,
    ACTIONS(132), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [768] = 2,
    ACTIONS(144), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(146), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [782] = 2,
    ACTIONS(144), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [796] = 2,
    ACTIONS(148), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(150), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [809] = 2,
    ACTIONS(152), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(154), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [822] = 2,
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(156), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_identifier,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [835] = 2,
    ACTIONS(160), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(162), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [848] = 2,
    ACTIONS(164), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(166), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [861] = 2,
    ACTIONS(148), 1,
      anon_sym_BANG,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_identifier,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [874] = 2,
    ACTIONS(164), 1,
      anon_sym_BANG,
    ACTIONS(166), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_identifier,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [887] = 2,
    ACTIONS(138), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(136), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [900] = 2,
    ACTIONS(170), 1,
      anon_sym_BANG,
    ACTIONS(168), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_identifier,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [913] = 2,
    ACTIONS(172), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(174), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [926] = 2,
    ACTIONS(152), 1,
      anon_sym_BANG,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_identifier,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [939] = 2,
    ACTIONS(160), 1,
      anon_sym_BANG,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_identifier,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [952] = 2,
    ACTIONS(172), 1,
      anon_sym_BANG,
    ACTIONS(174), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_identifier,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [965] = 2,
    ACTIONS(178), 1,
      anon_sym_BANG,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_identifier,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [978] = 2,
    ACTIONS(138), 1,
      anon_sym_BANG,
    ACTIONS(136), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_identifier,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [991] = 2,
    ACTIONS(158), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(156), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [1004] = 2,
    ACTIONS(170), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(168), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [1017] = 2,
    ACTIONS(182), 1,
      anon_sym_BANG,
    ACTIONS(180), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_identifier,
      sym_comment,
      sym_delimiter,
      sym_keyword,
  [1030] = 2,
    ACTIONS(182), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(180), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [1043] = 2,
    ACTIONS(178), 2,
      anon_sym_BANG,
      sym_delimiter,
    ACTIONS(176), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      sym_identifier,
      sym_comment,
      sym_keyword,
  [1056] = 3,
    ACTIONS(184), 1,
      sym_block_open,
    STATE(14), 1,
      sym_attribute,
    ACTIONS(186), 2,
      sym_identifier,
      sym_string,
  [1067] = 3,
    ACTIONS(188), 1,
      sym_block_open,
    STATE(13), 1,
      sym_attribute,
    ACTIONS(190), 2,
      sym_identifier,
      sym_string,
  [1078] = 3,
    ACTIONS(192), 1,
      sym_attribute_sep,
    ACTIONS(194), 1,
      sym_attribute_list_close,
    STATE(61), 1,
      aux_sym_attribute_list_repeat1,
  [1088] = 3,
    ACTIONS(196), 1,
      sym_include_open,
    ACTIONS(198), 1,
      sym_url,
    ACTIONS(200), 1,
      sym_filepath,
  [1098] = 3,
    ACTIONS(202), 1,
      sym_attribute_sep,
    ACTIONS(205), 1,
      sym_attribute_list_close,
    STATE(61), 1,
      aux_sym_attribute_list_repeat1,
  [1108] = 2,
    STATE(67), 1,
      sym_attribute,
    ACTIONS(207), 2,
      sym_identifier,
      sym_string,
  [1116] = 2,
    STATE(70), 1,
      sym_attribute,
    ACTIONS(207), 2,
      sym_identifier,
      sym_string,
  [1124] = 3,
    ACTIONS(192), 1,
      sym_attribute_sep,
    ACTIONS(209), 1,
      sym_attribute_list_close,
    STATE(59), 1,
      aux_sym_attribute_list_repeat1,
  [1134] = 2,
    STATE(64), 1,
      sym_attribute,
    ACTIONS(207), 2,
      sym_identifier,
      sym_string,
  [1142] = 3,
    ACTIONS(192), 1,
      sym_attribute_sep,
    ACTIONS(211), 1,
      sym_attribute_list_close,
    STATE(61), 1,
      aux_sym_attribute_list_repeat1,
  [1152] = 3,
    ACTIONS(192), 1,
      sym_attribute_sep,
    ACTIONS(213), 1,
      sym_attribute_list_close,
    STATE(66), 1,
      aux_sym_attribute_list_repeat1,
  [1162] = 3,
    ACTIONS(215), 1,
      sym_include_open,
    ACTIONS(217), 1,
      sym_url,
    ACTIONS(219), 1,
      sym_filepath,
  [1172] = 1,
    ACTIONS(98), 2,
      sym_attribute_sep,
      sym_attribute_list_close,
  [1177] = 1,
    ACTIONS(205), 2,
      sym_attribute_sep,
      sym_attribute_list_close,
  [1182] = 1,
    ACTIONS(221), 1,
      anon_sym_from,
  [1186] = 1,
    ACTIONS(223), 1,
      sym_identifier,
  [1190] = 1,
    ACTIONS(225), 1,
      sym_non_breakable_identifier,
  [1194] = 1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
  [1198] = 1,
    ACTIONS(229), 1,
      sym_include_close,
  [1202] = 1,
    ACTIONS(231), 1,
      sym_url,
  [1206] = 1,
    ACTIONS(233), 1,
      sym_identifier,
  [1210] = 1,
    ACTIONS(235), 1,
      sym_identifier,
  [1214] = 1,
    ACTIONS(237), 1,
      sym_identifier,
  [1218] = 1,
    ACTIONS(239), 1,
      sym_include_close,
  [1222] = 1,
    ACTIONS(241), 1,
      sym_url,
  [1226] = 1,
    ACTIONS(243), 1,
      sym_non_breakable_identifier,
  [1230] = 1,
    ACTIONS(245), 1,
      anon_sym_from,
  [1234] = 1,
    ACTIONS(247), 1,
      sym_identifier,
  [1238] = 1,
    ACTIONS(249), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 178,
  [SMALL_STATE(8)] = 214,
  [SMALL_STATE(9)] = 248,
  [SMALL_STATE(10)] = 284,
  [SMALL_STATE(11)] = 320,
  [SMALL_STATE(12)] = 356,
  [SMALL_STATE(13)] = 392,
  [SMALL_STATE(14)] = 418,
  [SMALL_STATE(15)] = 444,
  [SMALL_STATE(16)] = 461,
  [SMALL_STATE(17)] = 484,
  [SMALL_STATE(18)] = 507,
  [SMALL_STATE(19)] = 524,
  [SMALL_STATE(20)] = 541,
  [SMALL_STATE(21)] = 556,
  [SMALL_STATE(22)] = 571,
  [SMALL_STATE(23)] = 588,
  [SMALL_STATE(24)] = 605,
  [SMALL_STATE(25)] = 620,
  [SMALL_STATE(26)] = 635,
  [SMALL_STATE(27)] = 652,
  [SMALL_STATE(28)] = 666,
  [SMALL_STATE(29)] = 680,
  [SMALL_STATE(30)] = 694,
  [SMALL_STATE(31)] = 708,
  [SMALL_STATE(32)] = 722,
  [SMALL_STATE(33)] = 738,
  [SMALL_STATE(34)] = 754,
  [SMALL_STATE(35)] = 768,
  [SMALL_STATE(36)] = 782,
  [SMALL_STATE(37)] = 796,
  [SMALL_STATE(38)] = 809,
  [SMALL_STATE(39)] = 822,
  [SMALL_STATE(40)] = 835,
  [SMALL_STATE(41)] = 848,
  [SMALL_STATE(42)] = 861,
  [SMALL_STATE(43)] = 874,
  [SMALL_STATE(44)] = 887,
  [SMALL_STATE(45)] = 900,
  [SMALL_STATE(46)] = 913,
  [SMALL_STATE(47)] = 926,
  [SMALL_STATE(48)] = 939,
  [SMALL_STATE(49)] = 952,
  [SMALL_STATE(50)] = 965,
  [SMALL_STATE(51)] = 978,
  [SMALL_STATE(52)] = 991,
  [SMALL_STATE(53)] = 1004,
  [SMALL_STATE(54)] = 1017,
  [SMALL_STATE(55)] = 1030,
  [SMALL_STATE(56)] = 1043,
  [SMALL_STATE(57)] = 1056,
  [SMALL_STATE(58)] = 1067,
  [SMALL_STATE(59)] = 1078,
  [SMALL_STATE(60)] = 1088,
  [SMALL_STATE(61)] = 1098,
  [SMALL_STATE(62)] = 1108,
  [SMALL_STATE(63)] = 1116,
  [SMALL_STATE(64)] = 1124,
  [SMALL_STATE(65)] = 1134,
  [SMALL_STATE(66)] = 1142,
  [SMALL_STATE(67)] = 1152,
  [SMALL_STATE(68)] = 1162,
  [SMALL_STATE(69)] = 1172,
  [SMALL_STATE(70)] = 1177,
  [SMALL_STATE(71)] = 1182,
  [SMALL_STATE(72)] = 1186,
  [SMALL_STATE(73)] = 1190,
  [SMALL_STATE(74)] = 1194,
  [SMALL_STATE(75)] = 1198,
  [SMALL_STATE(76)] = 1202,
  [SMALL_STATE(77)] = 1206,
  [SMALL_STATE(78)] = 1210,
  [SMALL_STATE(79)] = 1214,
  [SMALL_STATE(80)] = 1218,
  [SMALL_STATE(81)] = 1222,
  [SMALL_STATE(82)] = 1226,
  [SMALL_STATE(83)] = 1230,
  [SMALL_STATE(84)] = 1234,
  [SMALL_STATE(85)] = 1238,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(57),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2, .production_id = 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2, .production_id = 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, .production_id = 8),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, .production_id = 8),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 4),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 5, .production_id = 8),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, .production_id = 8),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 6, .production_id = 8),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 6, .production_id = 8),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, .production_id = 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, .production_id = 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, .production_id = 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, .production_id = 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, .production_id = 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, .production_id = 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 5),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme, 4, .production_id = 7),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme, 4, .production_id = 7),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 4, .production_id = 6),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 4, .production_id = 6),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 5),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(63),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [227] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
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

TS_PUBLIC const TSLanguage *tree_sitter_plantuml() {
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
